/*
** Automatically generated from `parse_goal.m'
** by the Mercury compiler,
** version rotd-2026-08-12
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_goal_util.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0_s {
  MR_Box * parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont;
  void * parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont_env_ptr;
  MR_String parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0;

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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__3000__1_2_p_0(
  MR_Word HeadVar__1_171,
  MR_Word * HeadVar__2_172);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1389__1_2_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1388__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1387__1_2_p_0(
  MR_Word HeadVar__1_59,
  MR_Word * HeadVar__2_60);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1386__1_2_p_0(
  MR_Word HeadVar__1_53,
  MR_Word * HeadVar__2_54);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1342__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1341__1_2_p_0(
  MR_Word HeadVar__1_65,
  MR_Word * HeadVar__2_66);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1340__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word * HeadVar__2_62);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1339__1_2_p_0(
  MR_Word HeadVar__1_55,
  MR_Word * HeadVar__2_56);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__723__1_2_p_0(
  MR_Word HeadVar__1_89,
  MR_Word * HeadVar__2_90);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__722__1_2_p_0(
  MR_Word HeadVar__1_83,
  MR_Word * HeadVar__2_84);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__136__1_2_p_0(
  MR_Word HeadVar__1_66,
  MR_Word * HeadVar__2_67);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__135__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61);

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
parse_tree__parse_goal__parse_trace_compiletime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCompiletime_6);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_trace_level_5_p_0(
  MR_Word VarSet_6,
  MR_String Atom_7,
  MR_Word Context_8,
  MR_Word SubTerms_9,
  MR_Word * MaybeCompiletime_10);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0(
  MR_Word VarSet_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeCompiletime_8);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_flag_4_p_0(
  MR_Word VarSet_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeCompiletime_8);

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
  MR_Word STATE_VARIABLE_VarSet_0_43,
  MR_Word * STATE_VARIABLE_VarSet_44);

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
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39,
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_35,
  MR_Word * STATE_VARIABLE_ErrSpecs_36,
  MR_Word STATE_VARIABLE_WarnSpecs_0_37,
  MR_Word * STATE_VARIABLE_WarnSpecs_38,
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
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatchAny_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static void MR_CALL 
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_event_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30);

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
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34);

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
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_atomic_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_trace_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_implication_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_catch_any_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_semicolon_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46);

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
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41);

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
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45);

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
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Word * MaybeGoal_8);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_equal_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_5_p_0(
  MR_Word GoalKind_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10);

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
parse_tree__parse_goal__parse_atomic_subterm_5_p_0(
  MR_Word VarSet_6,
  MR_String Name_7,
  MR_Word ErrorTerm_8,
  MR_Word Term_9,
  MR_Word * MaybeComponentState_10);

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_3_p_0(
  MR_Word ErrorTerm_4,
  MR_Word ComponentsContexts_5,
  MR_Word * MaybeParams_6);

static void MR_CALL 
parse_tree__parse_goal__collect_atomic_params_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeOuter_0_2,
  MR_Word * STATE_VARIABLE_MaybeOuter_3,
  MR_Word STATE_VARIABLE_MaybeInner_0_4,
  MR_Word * STATE_VARIABLE_MaybeInner_5,
  MR_Word STATE_VARIABLE_MaybeVars_0_6,
  MR_Word * STATE_VARIABLE_MaybeVars_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentsContexts_8);

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
parse_tree__parse_goal__parse_trace_component_state_4_p_0(
  MR_String Atom_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeComponentContext_8);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_io_4_p_0(
  MR_String Atom_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeComponentContext_8);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_runtime_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_runtime_5_p_0(
  MR_Word VarSet_6,
  MR_String Atom_7,
  MR_Word Context_8,
  MR_Word SubTerms_9,
  MR_Word * MaybeComponentContext_10);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_tree_3_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word BaseParser_4,
  MR_Word Term_5,
  MR_Word * MaybeTree_6);

static void MR_CALL 
parse_tree__parse_goal__collect_trace_params_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeCompileTime_0_2,
  MR_Word * STATE_VARIABLE_MaybeCompileTime_3,
  MR_Word STATE_VARIABLE_MaybeRunTime_0_4,
  MR_Word * STATE_VARIABLE_MaybeRunTime_5,
  MR_Word STATE_VARIABLE_MaybeIO_0_6,
  MR_Word * STATE_VARIABLE_MaybeIO_7,
  MR_Word STATE_VARIABLE_MutableVars_0_8,
  MR_Word * STATE_VARIABLE_MutableVars_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

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
parse_tree__parse_goal__collect_try_params_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeIO_0_2,
  MR_Word * STATE_VARIABLE_MaybeIO_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

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
  MR_Word * WarnSpecs_14);

static void MR_CALL 
parse_tree__parse_goal__string_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4);

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


static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[426][2];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[19][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[12][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_8[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_12[2][4];


struct parse_tree__parse_goal__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[48];

struct parse_tree__parse_goal__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_5_0_s parse_tree__parse_goal_vector_common_5[7];

struct parse_tree__parse_goal__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_7_0_s parse_tree__parse_goal_vector_common_7[10];

struct parse_tree__parse_goal__vector_common_type_9_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_9_0_s parse_tree__parse_goal_vector_common_9[8];

struct parse_tree__parse_goal__vector_common_type_10_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_0;
  const MR_String parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_10_0_s parse_tree__parse_goal_vector_common_10[8];

struct parse_tree__parse_goal__vector_common_type_11_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_11_0_s parse_tree__parse_goal_vector_common_11[48];



static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[426][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at least one warning."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must list"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[17])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: malformed if-then-else;"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replace the"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "before the condition."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and add an"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has no"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[74])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[45])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator,"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be used"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either in an expression of the form"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or in an expression of the form"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then success_goal"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else failure_goal"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clause."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_any"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clauses, and optionally by a single"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which in turn may be followed by zero or more"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[67])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "variable -> goal"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and should be followed by an expression of the form"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "optional else-clause and zero or more catch clauses,"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a try expression, with a then-clause,"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "event name"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[129]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must not be qualified."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "be impure or semipure."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an event cannot"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: if the expression"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[139]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "then it should be followed by"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[141]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is intended to be part of a field update,"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not contain"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a state variable pair."))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a reference to the next value of a state variable."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than one variable."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must contain"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a variable."))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: after the"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected a"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[166]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[168])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "list of warnings to disable,"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[171]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[173]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the list following the"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "keyword: expected the"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[179]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the name of a warning,"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[181]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "twice"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[183]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "times"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[185]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the warning"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[187]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[191]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "listed"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[193]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[195]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "list of trace goal parameters,"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "trace goal parameter,"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[199]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have exactly one argument,"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[201]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of compile-time tests."))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a boolean expression"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[204])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of run-time tests."))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[208])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[210]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be a state variable."))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[212]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a state variable name."))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable."))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[216]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[217])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "second argument of"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a state variable name."))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[221]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have exactly two arguments,"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[224]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and a state variable name."))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[226]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[229])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid compile_time parameter."))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[234]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "have one of the following forms:"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[235])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The valid compile_time paramaters"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[238]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[237])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag(\"name of --trace-flag parameter\")"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[240]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade(<grade test>)"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[242]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(shallow)"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[244]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(deep)"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[246]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[248]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expexted a"))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[250]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[252]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag"))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[255]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[254])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as the argument of"))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[256])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: compile_time parameter"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[259]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[255]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have just one argument."))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[262]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid grade test."))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[264]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The valid grade tests are"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[266]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "takes just one argument."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[259]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[271])))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid trace level."))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[273]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The valid trace levels are"))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[275]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shallow"))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[277]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[279]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "deep"))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[281]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the form"))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[283]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a run_time parameter"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[284])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env(\"name of an environment variable\")"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row 289 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected an"))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[290]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "identifier"))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[292]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env"))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[294]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[254])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as the argument of the run_time parameter"))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[296]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[295])))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[294]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[269])))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: run_time parameter"))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[299]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[298])))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate compile_time parameter"))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[301]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in trace goal."))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[303]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate io parameter"))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[305]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate run_time parameter"))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[307]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[309]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator, got"))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[311]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[312])))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a"))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[314]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[313])))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator inside the scope"))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[316]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[315])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[317])))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as the left operand of the"))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[319]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[318])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected an expression of the form"))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[321]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[324])))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "following the "))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[326]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[325])))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[67])))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[328])))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[330]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[280])))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then else_goal"))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[333]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[332])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by a try expression of the form"))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[335]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[334])))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "followed"))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[337]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[339]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[340])))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_pattern -> catch_goal"))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[342]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[341])))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by an expression of the form"))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[344]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[343])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not have this form."))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[346]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[342]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[324])))
  },
  /* row 350 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "following the"))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[350]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[349])))
  },
  /* row 352 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing its"))
  },
  /* row 354 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[353]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[352])))
  },
  /* row 355 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[354])))
  },
  /* row 356 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[355])))
  },
  /* row 357 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 358 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[357]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 359 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row 360 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[359]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 361 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 362 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[361]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[360])))
  },
  /* row 363 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 364 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[363]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 365 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[115])))
  },
  /* row 366 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[365])))
  },
  /* row 367 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[366])))
  },
  /* row 368 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[367])))
  },
  /* row 369 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[368])))
  },
  /* row 370 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "list of try parameters,"))
  },
  /* row 371 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[370]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 372 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row 373 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[372]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 374 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have one argument,"))
  },
  /* row 375 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[374]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 376 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a term of the form"))
  },
  /* row 377 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[376]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 378 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io(!IO)"))
  },
  /* row 379 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[378]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 380 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as try goal parameter, got"))
  },
  /* row 381 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[380]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 382 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in try goal."))
  },
  /* row 383 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[382]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 384 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a list of atomic goal parameters,"))
  },
  /* row 385 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[384]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 386 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specifier of atomic scope:"))
  },
  /* row 387 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[386]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 388 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vars"))
  },
  /* row 389 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[388]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[387])))
  },
  /* row 390 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 391 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[390]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[389])))
  },
  /* row 392 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have exact one argument,"))
  },
  /* row 393 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[392]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 394 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a list of variable names."))
  },
  /* row 395 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[394]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 396 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Invalid atomic goal parameter."))
  },
  /* row 397 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[396]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 398 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "atomic goal parameter,"))
  },
  /* row 399 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[398]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 400 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or a pair of variables."))
  },
  /* row 401 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[400]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 402 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a state variable"))
  },
  /* row 403 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[402]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[401])))
  },
  /* row 404 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: atomic scope"))
  },
  /* row 405 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[404]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 406 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have a goal."))
  },
  /* row 407 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[406]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 408 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the outer and inner STM states."))
  },
  /* row 409 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[408]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 410 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a specification of both"))
  },
  /* row 411 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[410]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[409])))
  },
  /* row 412 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Atomic goal is missing"))
  },
  /* row 413 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[412]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[411])))
  },
  /* row 414 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a specification of the outer STM state."))
  },
  /* row 415 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[414]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 416 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[412]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[415])))
  },
  /* row 417 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a specification of the inner STM state."))
  },
  /* row 418 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[417]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 419 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[412]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[418])))
  },
  /* row 420 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: duplicate inner atomic parameter."))
  },
  /* row 421 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[420]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 422 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: duplicate outer atomic parameter."))
  },
  /* row 423 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[422]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
  },
  /* row 424 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: duplicate atomic vars parameter."))
  },
  /* row 425 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[424]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])))
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
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_atomic_component_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_12[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_12[1])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_runtime_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[12][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "call")) },
  /* row   1 */
  { ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[23])) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "else")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "then")) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 187U) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 201U) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "catch")) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  11 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
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
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_12[2][4] = {
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

static /* final */ const struct parse_tree__parse_goal__vector_common_type_5_0_s parse_tree__parse_goal_vector_common_5[7] = {
  /* row   0 */
  {
    (MR_String) "no_solution_disjunct",
    (MR_Integer) 5
  },
  /* row   1 */
  {
    (MR_String) "non_tail_recursive_calls",
    (MR_Integer) 3
  },
  /* row   2 */
  {
    (MR_String) "repeated_singleton_vars",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "singleton_vars",
    (MR_Integer) 0
  },
  /* row   4 */
  {
    (MR_String) "suspected_occurs_check_failure",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "suspicious_recursion",
    (MR_Integer) 4
  },
  /* row   6 */
  {
    (MR_String) "unknown_format_calls",
    (MR_Integer) 6
  },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_7_0_s parse_tree__parse_goal_vector_common_7[10] = {
  /* row   0 */
  {
    (MR_String) "compile_time",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "compiletime",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "io",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "run_time",
    (MR_Integer) 2
  },
  /* row   4 */
  {
    (MR_String) "runtime",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "state",
    (MR_Integer) 3
  },
  /* row   6 */
  {
    (MR_String) "flag",
    (MR_Integer) 0
  },
  /* row   7 */
  {
    (MR_String) "grade",
    (MR_Integer) 1
  },
  /* row   8 */
  {
    (MR_String) "trace_level",
    (MR_Integer) 2
  },
  /* row   9 */
  {
    (MR_String) "tracelevel",
    (MR_Integer) 2
  },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_9_0_s parse_tree__parse_goal_vector_common_9[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_10_0_s parse_tree__parse_goal_vector_common_10[8] = {
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

static /* final */ const struct parse_tree__parse_goal__vector_common_type_11_0_s parse_tree__parse_goal_vector_common_11[48] = {
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_goal__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0__plain_one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_goal__one_or_more__ti_one_or_more_1parse_tree__error_spec__type_ctor_info_err_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_atomic_component_state_0) };

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

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_atomic_component_state_0) };

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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

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

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_0[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_1[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_2[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_2 };

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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0) };

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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0) };

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

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

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

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0) };

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

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_0[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_3 };

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_1[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_2[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_3[1] = { &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_2 };

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

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_try_component_0[1] = { (MR_Integer) 0 };

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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__3000__1_2_p_0(
  MR_Word HeadVar__1_171,
  MR_Word * HeadVar__2_172)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_171, HeadVar__2_172);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1389__1_2_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_67, HeadVar__2_68);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1388__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_63, HeadVar__2_64);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1387__1_2_p_0(
  MR_Word HeadVar__1_59,
  MR_Word * HeadVar__2_60)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_59, HeadVar__2_60);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1386__1_2_p_0(
  MR_Word HeadVar__1_53,
  MR_Word * HeadVar__2_54)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_53, HeadVar__2_54);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1342__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_69, HeadVar__2_70);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1341__1_2_p_0(
  MR_Word HeadVar__1_65,
  MR_Word * HeadVar__2_66)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_65, HeadVar__2_66);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1340__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word * HeadVar__2_62)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_61, HeadVar__2_62);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1339__1_2_p_0(
  MR_Word HeadVar__1_55,
  MR_Word * HeadVar__2_56)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_55, HeadVar__2_56);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__723__1_2_p_0(
  MR_Word HeadVar__1_89,
  MR_Word * HeadVar__2_90)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_89, HeadVar__2_90);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__722__1_2_p_0(
  MR_Word HeadVar__1_83,
  MR_Word * HeadVar__2_84)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_83, HeadVar__2_84);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__136__1_2_p_0(
  MR_Word HeadVar__1_66,
  MR_Word * HeadVar__2_67)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_66, HeadVar__2_67);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__135__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_60, HeadVar__2_61);
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_10 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_11 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              parse_tree__prog_data____Compare____trace_mutable_var_0_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_8)), ((MR_Box) (ArgY1_9)));
            }
            break;
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[15]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_14_14;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
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
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              parse_tree__prog_data____Compare____atomic_component_state_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              parse_tree__prog_data____Compare____atomic_component_state_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_8)), ((MR_Box) (ArgY1_9)));
            }
            break;
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
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
  MR_Word MaybeRuntimePrime_11;
  MR_Word Functor_7;
  MR_Word SubTerms_8;
  MR_Word Context_9;
  MR_String Atom_10;
  MR_Word SubTerm_55;
  MR_Word Var_65;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    SubTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_10 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
      succeeded = (strcmp(Atom_10, (MR_String) "env") == 0);
      if (succeeded)
      {
        succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_55 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, 0))));
          Var_65 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, 1))));
          succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String EnvVarName_58;
          MR_Word TypeCtorInfo_83_94;
          MR_Word TypeInfo_87_98;
          MR_Word SubFunctor_56;
          MR_Word EnvVarChars_59;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_97;
          MR_Word Var_60;

          succeeded = ((MR_tag((MR_Word) SubTerm_55)) == (MR_Integer) 0);
          if (succeeded)
          {
            SubFunctor_56 = ((MR_Word) ((MR_hl_field(0, SubTerm_55, 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(0, SubTerm_55, 1))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) SubFunctor_56)) == (MR_Integer) 0))
              {
                EnvVarName_58 = ((MR_String) ((MR_hl_field(0, SubFunctor_56, 0))));
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) SubFunctor_56)) == (MR_Integer) 2))
              {
                EnvVarName_58 = ((MR_String) ((MR_hl_field(2, SubFunctor_56, 0))));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                EnvVarChars_59 = mercury__string__to_char_list_1_f_0(EnvVarName_58);
                Var_67 = (MR_Word) (&parse_tree__parse_goal_scalar_common_2[18]);
                Var_68 = (MR_Word) ((MR_Unsigned) 0U);
                TypeCtorInfo_83_94 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
                mercury__list__filter_4_p_0(TypeCtorInfo_83_94, Var_67, EnvVarChars_59, &Var_60, &Var_97);
                TypeInfo_87_98 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[289]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_98, ((MR_Box) (Var_68)), ((MR_Box) (Var_97)));
              }
            }
          }
          if (succeeded)
          {
            MR_Word Runtime_61 = (MR_Word) (EnvVarName_58);

            {
              MaybeRuntimePrime_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeRuntimePrime_11, 0) = ((MR_Box) (Runtime_61));
            }
          }
          else
          {
            MR_String SubTermStr_62;
            MR_Word Pieces_63;
            MR_Word Spec_64;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_84;
            MR_Word Var_85;

            SubTermStr_62 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, SubTerm_55);
            Var_71 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[293])));
            {
              Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_78, 1) = ((MR_Box) (SubTermStr_62));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
            }
            Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_77);
            Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
            Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[297])), Var_75);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_73);
            Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[291])), Var_70);
            Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_55);
            {
              Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime_env\'/4"));
              MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Var_84));
              MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
            }
            {
              Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_85, 0) = ((MR_Box) (Spec_64));
              MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeRuntimePrime_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeRuntimePrime_11, 0) = ((MR_Box) (Var_85));
            }
          }
        }
        else
        {
          MR_Word Var_90;
          MR_Word Spec_93;

          {
            Spec_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime_env\'/4"));
            MR_hl_field(0, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_93, 3) = ((MR_Box) (Context_9));
            MR_hl_field(0, Spec_93, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[300])));
          }
          {
            Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_90, 0) = ((MR_Box) (Spec_93));
            MR_hl_field(0, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeRuntimePrime_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeRuntimePrime_11, 0) = ((MR_Box) (Var_90));
          }
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    *MaybeRuntime_6 = MaybeRuntimePrime_11;
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_50;
    MR_Word Var_51;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    Var_23 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[288])));
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_38);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_36);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_31);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[286])), Var_22);
    Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_50));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRuntime_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCompiletime_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word MaybeCompiletimePrime_11;
  MR_Word Functor_7;
  MR_Word SubTerms_8;
  MR_Word TermContext_9;
  MR_String Atom_10;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    SubTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_10 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
      // binary string jump switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Atom_10, ((&parse_tree__parse_goal_vector_common_7[6 + mid_2]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_goal_vector_common_7[6 + mid_2]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "flag"
                ;
                parse_tree__parse_goal__parse_trace_compiletime_flag_4_p_0(VarSet_4, TermContext_9, SubTerms_8, &MaybeCompiletimePrime_11);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                // case "grade"
                ;
                parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0(VarSet_4, TermContext_9, SubTerms_8, &MaybeCompiletimePrime_11);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                // case "trace_level", "tracelevel"
                ;
                parse_tree__parse_goal__parse_trace_compiletime_trace_level_5_p_0(VarSet_4, Atom_10, TermContext_9, SubTerms_8, &MaybeCompiletimePrime_11);
                succeeded = MR_TRUE;
              }
              break;
          }
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
  if (succeeded)
    *MaybeCompiletime_6 = MaybeCompiletimePrime_11;
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_59;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_84;
    MR_Word Var_85;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
    Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[233])));
    Var_46 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[241])));
    Var_55 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[243])));
    Var_64 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[245])));
    Var_73 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[247])));
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[249])));
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])), Var_72);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_68);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])), Var_63);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_59);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])), Var_54);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_50);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[239])), Var_45);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_34);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_23);
    Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_84));
      MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCompiletime_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_trace_level_5_p_0(
  MR_Word VarSet_6,
  MR_String Atom_7,
  MR_Word Context_8,
  MR_Word SubTerms_9,
  MR_Word * MaybeCompiletime_10)
{
  MR_bool succeeded = (SubTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTerm_11;
  MR_Word Var_19;

  if (succeeded)
  {
    SubTerm_11 = ((MR_Word) ((MR_hl_field(1, SubTerms_9, 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(1, SubTerms_9, 1))));
    succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Level_14;
    MR_String LevelName_12;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) SubTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, 1))));
      succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          LevelName_12 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
          if ((strcmp(LevelName_12, (MR_String) "deep") == 0))
          {
            Level_14 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(LevelName_12, (MR_String) "shallow") == 0))
          {
            Level_14 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word Compiletime_15;

      {
        Compiletime_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Compiletime_15, 0) = (MR_Box) ((MR_Unsigned) (Level_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCompiletime_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_15));
      }
    }
    else
    {
      MR_String SubTermStr_16;
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_68;

      SubTermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, SubTerm_11);
      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (SubTermStr_16));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_28);
      Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[274])));
      Var_43 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[278])));
      Var_54 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[282])));
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[280])), Var_53);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_48);
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[276])), Var_42);
      Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_31);
      Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_26);
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_trace_level\'/5"));
        MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_8));
        MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCompiletime_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
      }
    }
  }
  else
  {
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_91;
    MR_Word Pieces_93;
    MR_Word Spec_94;

    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (Atom_7));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
    Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[263])));
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_79);
    Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[260])), Var_74);
    {
      Spec_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_94, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_trace_level\'/5"));
      MR_hl_field(0, Spec_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_94, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_94, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_94, 4) = ((MR_Box) (Pieces_93));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_91, 0) = ((MR_Box) (Spec_94));
      MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCompiletime_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0_s * env_ptr = (struct parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__conv0_HeadVar__1_1));
  ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont)((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0_s env;

  (env).parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont = cont;
  (env).parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_data__valid_trace_grade_name_1_p_0(&(env).parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_2_env_0__conv0_HeadVar__1_1, parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0_1, &env);
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_grade_4_p_0(
  MR_Word VarSet_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeCompiletime_8)
{
  MR_bool succeeded = (SubTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTerm_9;
  MR_Word Var_18;

  if (succeeded)
  {
    SubTerm_9 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word TraceGrade_12;
    MR_String GradeName_10;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) SubTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          GradeName_10 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
          succeeded = parse_tree__prog_data__parse_trace_grade_name_2_p_0(GradeName_10, &TraceGrade_12);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Compiletime_13;

      {
        Compiletime_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Compiletime_13, 0) = (MR_Box) ((MR_Unsigned) (TraceGrade_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCompiletime_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_13));
      }
    }
    else
    {
      MR_String SubTermStr_14;
      MR_Word ValidGradeNames_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_56;

      SubTermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, SubTerm_9);
      mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]), &ValidGradeNames_15);
      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (SubTermStr_14));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
      Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[265])));
      Var_43 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])), ValidGradeNames_15);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[267])), Var_42);
      Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_31);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_26);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_grade\'/4"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_6));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCompiletime_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
      }
    }
  }
  else
  {
    MR_Word Var_72;
    MR_Word Spec_75;

    {
      Spec_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_grade\'/4"));
      MR_hl_field(0, Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_75, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_75, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[272])));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Spec_75));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCompiletime_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_flag_4_p_0(
  MR_Word VarSet_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeCompiletime_8)
{
  MR_bool succeeded = (SubTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTerm_9;
  MR_Word Var_16;

  if (succeeded)
  {
    SubTerm_9 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_String FlagName_10;
    MR_Word Var_17;
    MR_Word Var_18;

    succeeded = ((MR_tag((MR_Word) SubTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 2);
        if (succeeded)
          FlagName_10 = ((MR_String) ((MR_hl_field(2, Var_17, 0))));
      }
    }
    if (succeeded)
    {
      MR_Word Compiletime_12;

      {
        Compiletime_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Compiletime_12, 0) = ((MR_Box) (FlagName_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCompiletime_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_12));
      }
    }
    else
    {
      MR_String SubTermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_29;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_57;

      SubTermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, SubTerm_9);
      Var_24 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[253])));
      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_46, 1) = ((MR_Box) (SubTermStr_13));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_45);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[258])), Var_43);
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_29);
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[251])), Var_23);
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_flag\'/4"));
        MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_6));
        MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCompiletime_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
      }
    }
  }
  else
  {
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_81;
    MR_Word Pieces_83;
    MR_Word Spec_84;

    Var_64 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[261])));
    Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[263])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_69);
    Pieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[260])), Var_63);
    {
      Spec_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_84, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime_flag\'/4"));
      MR_hl_field(0, Spec_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_84, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_84, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_84, 4) = ((MR_Box) (Pieces_83));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (Spec_84));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCompiletime_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
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
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
    Context_12 = ((MR_Word) ((MR_hl_field(0, Term_6, 2))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_10 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
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
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 61:
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
            if (MR_offset_strn_eq(1, 4, Name_10, (MR_String) "catch"))
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
            if (MR_offset_strn_eq(1, 14, Name_10, (MR_String) "disable_warning"))
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
            if (MR_offset_strn_eq(1, 7, Name_10, (MR_String) "promise_"))
              switch (MR_nth_code_unit(Name_10, 8)) {
                case (MR_Integer) 101:
                  if (MR_offset_strn_eq(9, 18, Name_10, (MR_String) "promise_equivalent_solution"))
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
            if (MR_offset_strn_eq(1, 7, Name_10, (MR_String) "require_"))
              switch (MR_nth_code_unit(Name_10, 8)) {
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(Name_10, 9)) {
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(Name_10, 10)) {
                        case (MR_Integer) 95:
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
                      if (MR_offset_strn_eq(10, 10, Name_10, (MR_String) "require_switch_arms_"))
                        switch (MR_nth_code_unit(Name_10, 20)) {
                          case (MR_Integer) 99:
                            if (MR_offset_strn_eq(21, 2, Name_10, (MR_String) "require_switch_arms_cc_"))
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
          GoalKind_13 = ((&parse_tree__parse_goal_vector_common_11[0 + case_num_0]))->parse_tree__parse_goal__vector_common_type_11_0__vct_11_f_0;
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
        {
          parse_tree__parse_goal__parse_goal_equal_5_p_0(STATE_VARIABLE_VarSet_0_17, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8);
          *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
        }
        break;
      case (MR_Integer) 44:
        parse_tree__parse_goal__parse_goal_event_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 46:
      case (MR_Integer) 45:
        {
          parse_tree__parse_goal__parse_goal_true_fail_5_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8);
          *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
        }
        break;
      case (MR_Integer) 15:
        {
          parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_4_p_0(ArgTerms_11, Context_12, MaybeGoal_8);
          *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
        }
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
    Var_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ThenTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
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
      Var_23 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, 1))));
      SemiColonContext_16 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
        succeeded = (strcmp(Var_24, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Tuple Var_56;
      MR_Word Var_57;

      Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[78])));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_32);
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
        MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_18, 3) = ((MR_Box) (SemiColonContext_16));
        MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
      }
      *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
    }
    else
    {
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[3]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (ArgTerms_7));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) (Context_8));
      }
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_60, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    }
  }
  else
  {
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_89;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_103;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_117;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Tuple Var_152;
    MR_Word Var_153;
    MR_Word Pieces_156;
    MR_Word Spec_157;

    Var_75 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[91])));
    Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[93])));
    Var_95 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[97])));
    Var_109 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[101])));
    Var_123 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[105])));
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[115])));
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[103])), Var_122);
    Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, Var_117);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[99])), Var_108);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_103);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[95])), Var_94);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_89);
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_83);
    Pieces_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[88])), Var_74);
    {
      Spec_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
      MR_hl_field(0, Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_157, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_157, 4) = ((MR_Box) (Pieces_156));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_153, 0) = ((MR_Box) (Spec_157));
      MR_hl_field(0, Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_152 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_152, 0) = ((MR_Box) (Var_153));
      MR_hl_field(0, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_152));
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
  MR_Word STATE_VARIABLE_VarSet_0_43,
  MR_Word * STATE_VARIABLE_VarSet_44)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word CondThenTerm_12;
  MR_Word ElseTerm_13;
  MR_Word Var_45;
  MR_Word Var_46;

  if (succeeded)
  {
    CondThenTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ElseTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_45, 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, 1))));
      succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word CondTerm_14;
    MR_Word ThenTerm_15;
    MR_Word CondContext_17;
    MR_Word Var_47;
    MR_String Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 1))));
      CondContext_17 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 2))));
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, 0))));
        succeeded = (strcmp(Var_48, (MR_String) "if") == 0);
        if (succeeded)
        {
          succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
            Var_56 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
            succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_51 = ((MR_Word) ((MR_hl_field(0, Var_50, 0))));
                Var_53 = ((MR_Word) ((MR_hl_field(0, Var_50, 1))));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_52 = ((MR_String) ((MR_hl_field(0, Var_51, 0))));
                  succeeded = (strcmp(Var_52, (MR_String) "then") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      CondTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_53, 0))));
                      Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, 1))));
                      succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ThenTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                        Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                        succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word STATE_VARIABLE_VarSet_1_57;
      MR_Word STATE_VARIABLE_VarSet_2_58;
      MR_Word Vars_21;
      MR_Word StateVars_22;
      MR_Word CondGoal_23;
      MR_Word CondWarnSpecs_24;
      MR_Word ThenGoal_25;
      MR_Word ThenWarnSpecs_26;
      MR_Word ElseGoal_27;
      MR_Word ElseWarnSpecs_28;

      parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_14, ContextPieces_9, &MaybeCondGoal_18, STATE_VARIABLE_VarSet_0_43, &STATE_VARIABLE_VarSet_1_57);
      parse_tree__parse_goal__parse_goal_5_p_0(ThenTerm_15, ContextPieces_9, &MaybeThenGoal_19, STATE_VARIABLE_VarSet_1_57, &STATE_VARIABLE_VarSet_2_58);
      parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_13, ContextPieces_9, &MaybeElseGoal_20, STATE_VARIABLE_VarSet_2_58, STATE_VARIABLE_VarSet_44);
      succeeded = ((MR_tag((MR_Word) MaybeCondGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        Vars_21 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 0))));
        StateVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 1))));
        CondGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 2))));
        CondWarnSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 3))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, 0))));
          ThenWarnSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, 1))));
          succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            ElseGoal_27 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, 0))));
            ElseWarnSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal_29;
        MR_Word WarnSpecs_30;
        MR_Word Var_60;

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
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ThenWarnSpecs_26, ElseWarnSpecs_28);
        WarnSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CondWarnSpecs_24, Var_60);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_30));
        }
      }
      else
      {
        MR_Word CondErrSpecs_31;
        MR_Word ThenErrSpecs_32;
        MR_Word ElseErrSpecs_33;
        MR_Word ErrSpecs_34;
        MR_Word OoMErrSpecs_35;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Tuple Var_63;
        MR_Word CondWarnSpecs_198;
        MR_Word ThenWarnSpecs_199;
        MR_Word ElseWarnSpecs_200;
        MR_Word WarnSpecs_201;

        parse_tree__maybe_error__get_all_errors_warnings4_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_18, &CondErrSpecs_31, &CondWarnSpecs_198);
        parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_19, &ThenErrSpecs_32, &ThenWarnSpecs_199);
        parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_20, &ElseErrSpecs_33, &ElseWarnSpecs_200);
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ThenErrSpecs_32, ElseErrSpecs_33);
        ErrSpecs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CondErrSpecs_31, Var_61);
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ThenWarnSpecs_199, ElseWarnSpecs_200);
        WarnSpecs_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CondWarnSpecs_198, Var_62);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_34, &OoMErrSpecs_35);
        {
          Var_63 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (OoMErrSpecs_35));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (WarnSpecs_201));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
        }
      }
    }
    else
    {
      MR_Word ArrowContext_38;
      MR_Word Var_64;
      MR_String Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_String Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;

      succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 0))));
        Var_66 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 1))));
        succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_65 = ((MR_String) ((MR_hl_field(0, Var_64, 0))));
          succeeded = (strcmp(Var_65, (MR_String) "if") == 0);
          if (succeeded)
          {
            succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_67 = ((MR_Word) ((MR_hl_field(1, Var_66, 0))));
              Var_73 = ((MR_Word) ((MR_hl_field(1, Var_66, 1))));
              succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_67, 0))));
                  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
                  ArrowContext_38 = ((MR_Word) ((MR_hl_field(0, Var_67, 2))));
                  succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_69 = ((MR_String) ((MR_hl_field(0, Var_68, 0))));
                    succeeded = (strcmp(Var_69, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_71 = ((MR_Word) ((MR_hl_field(1, Var_70, 1))));
                        succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, 1))));
                          succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Word Pieces_40;
        MR_Word Spec_41;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Tuple Var_102;
        MR_Word Var_103;

        Var_79 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[51])));
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
        Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_78);
        {
          Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
          MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_41, 3) = ((MR_Box) (ArrowContext_38));
          MR_hl_field(0, Spec_41, 4) = ((MR_Box) (Pieces_40));
        }
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (Spec_41));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_102 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
        }
        *STATE_VARIABLE_VarSet_44 = STATE_VARIABLE_VarSet_0_43;
      }
      else
      {
        MR_Word ArrowContext_210;
        MR_Word Var_106;
        MR_String Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;

        succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_106 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 0))));
          Var_108 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 1))));
          ArrowContext_210 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, 2))));
          succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_107 = ((MR_String) ((MR_hl_field(0, Var_106, 0))));
            succeeded = (strcmp(Var_107, (MR_String) "->") == 0);
            if (succeeded)
            {
              succeeded = (Var_108 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_109 = ((MR_Word) ((MR_hl_field(1, Var_108, 1))));
                succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_110 = ((MR_Word) ((MR_hl_field(1, Var_109, 1))));
                  succeeded = (Var_110 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Tuple Var_148;
          MR_Word Var_149;
          MR_Word Pieces_206;
          MR_Word Spec_207;

          Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[63])));
          Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
          Pieces_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_115);
          {
            Spec_207 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_207, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
            MR_hl_field(0, Spec_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_207, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_207, 3) = ((MR_Box) (ArrowContext_210));
            MR_hl_field(0, Spec_207, 4) = ((MR_Box) (Pieces_206));
          }
          {
            Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_149, 0) = ((MR_Box) (Spec_207));
            MR_hl_field(0, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_148 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_148, 0) = ((MR_Box) (Var_149));
            MR_hl_field(0, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_148));
          }
          *STATE_VARIABLE_VarSet_44 = STATE_VARIABLE_VarSet_0_43;
        }
        else
        {
          MR_Word FullTerm_42;

          {
            FullTerm_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FullTerm_42, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[2]));
            MR_hl_field(0, FullTerm_42, 1) = ((MR_Box) (ArgTerms_7));
            MR_hl_field(0, FullTerm_42, 2) = ((MR_Box) (Context_8));
          }
          parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(FullTerm_42, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_0_43, STATE_VARIABLE_VarSet_44);
        }
      }
    }
  }
  else
  {
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Tuple Var_194;
    MR_Word Var_195;
    MR_Word Pieces_213;
    MR_Word Spec_214;

    Var_165 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[69])));
    Var_174 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[71])));
    Var_180 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[73])));
    Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_180, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_179);
    Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_165, Var_173);
    Pieces_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_164);
    {
      Spec_214 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_214, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
      MR_hl_field(0, Spec_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_214, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_214, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_214, 4) = ((MR_Box) (Pieces_213));
    }
    {
      Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_195, 0) = ((MR_Box) (Spec_214));
      MR_hl_field(0, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_194 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_194, 0) = ((MR_Box) (Var_195));
      MR_hl_field(0, Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_194));
    }
    *STATE_VARIABLE_VarSet_44 = STATE_VARIABLE_VarSet_0_43;
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
    Var_32 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, 0))));
      succeeded = (strcmp(Var_33, (MR_String) "else") == 0);
      if (succeeded)
      {
        succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ThenTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElseTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
            succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeElseGoal0_19;
    MR_Word STATE_VARIABLE_VarSet_1_37;

    parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_17, ContextPieces_13, &MaybeElseGoal0_19, STATE_VARIABLE_VarSet_0_30, &STATE_VARIABLE_VarSet_1_37);
    if (((MR_tag((MR_Word) MaybeElseGoal0_19)) == (MR_Integer) 0))
    {
      *MaybeGoal_14 = MaybeElseGoal0_19;
      *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_1_37;
    }
    else
    {
      MR_Word ElseGoal_20 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_19, 0))));
      MR_Word ElseWarnSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_19, 1))));
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
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(ThenTerm_16, Var_38, CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, &MaybeTryGoal_22, STATE_VARIABLE_VarSet_1_37, STATE_VARIABLE_VarSet_31);
      succeeded = ((MR_tag((MR_Word) MaybeTryGoal_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ThenTerm_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, 1))));
          ThenContext_26 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, 2))));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, 0))));
            succeeded = (strcmp(Var_41, (MR_String) "then") == 0);
            if (succeeded)
            {
              succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
                succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
                  succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Pieces_27;
        MR_Word Spec_28;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Tuple Var_73;
        MR_Word Var_74;

        Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[356])));
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_49);
        {
          Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_else_then_try_term\'/8"));
          MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_28, 3) = ((MR_Box) (ThenContext_26));
          MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Spec_28));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_73 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (ElseWarnSpecs_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_36,
  MR_Word * STATE_VARIABLE_ErrSpecs_37,
  MR_Word STATE_VARIABLE_WarnSpecs_0_38,
  MR_Word * STATE_VARIABLE_WarnSpecs_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_19;
    MR_Word WarnSpecsA_21;
    MR_Word STATE_VARIABLE_VarSet_1_42;
    MR_Word STATE_VARIABLE_DisjunctsCord_1_43;
    MR_Word STATE_VARIABLE_ErrSpecs_1_45;
    MR_Word STATE_VARIABLE_WarnSpecs_1_47;
    MR_Word TermBA_25;
    MR_Word TermBB_26;
    MR_Word ArgTermsB_23;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_String Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_goal__parse_goal_5_p_0(TermA_12, ContextPieces_14, &MaybeGoalA_19, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_1_42);
    if (((MR_tag((MR_Word) MaybeGoalA_19)) == (MR_Integer) 0))
    {
      MR_Word OoMErrSpecsA_22;
      MR_Tuple Var_44 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoalA_19, 0))));
      MR_Word Var_46;

      OoMErrSpecsA_22 = ((MR_Word) ((MR_hl_field(0, Var_44, 0))));
      WarnSpecsA_21 = ((MR_Word) ((MR_hl_field(0, Var_44, 1))));
      Var_46 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMErrSpecsA_22);
      STATE_VARIABLE_ErrSpecs_1_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_46, STATE_VARIABLE_ErrSpecs_0_36);
      STATE_VARIABLE_DisjunctsCord_1_43 = STATE_VARIABLE_DisjunctsCord_0_34;
    }
    else
    {
      MR_Word DisjunctA_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_19, 0))));

      WarnSpecsA_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_19, 1))));
      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(DisjunctA_20, STATE_VARIABLE_DisjunctsCord_0_34, &STATE_VARIABLE_DisjunctsCord_1_43);
      STATE_VARIABLE_ErrSpecs_1_45 = STATE_VARIABLE_ErrSpecs_0_36;
    }
    STATE_VARIABLE_WarnSpecs_1_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecsA_21, STATE_VARIABLE_WarnSpecs_0_38);
    succeeded = ((MR_tag((MR_Word) TermB_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(0, TermB_13, 0))));
      ArgTermsB_23 = ((MR_Word) ((MR_hl_field(0, TermB_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_String) ((MR_hl_field(0, Var_48, 0))));
        succeeded = (strcmp(Var_49, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (ArgTermsB_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermBA_25 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_23, 0))));
            Var_50 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_23, 1))));
            succeeded = ((MR_tag((MR_Word) TermBA_25)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_52 = ((MR_Word) ((MR_hl_field(0, TermBA_25, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(0, TermBA_25, 1))));
              succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_53 = ((MR_String) ((MR_hl_field(0, Var_52, 0))));
                succeeded = (strcmp(Var_53, (MR_String) "->") == 0);
                if (succeeded)
                {
                  succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                    succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, 1))));
                      succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermBB_26 = ((MR_Word) ((MR_hl_field(1, Var_50, 0))));
                Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, 1))));
                succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word next_value_of_STATE_VARIABLE_DisjunctsCord_0_34 = STATE_VARIABLE_DisjunctsCord_1_43;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_36 = STATE_VARIABLE_ErrSpecs_1_45;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_38 = STATE_VARIABLE_WarnSpecs_1_47;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_40 = STATE_VARIABLE_VarSet_1_42;

      // direct tailcall eliminated
      ;
      TermA_12 = next_value_of_TermA_12;
      TermB_13 = next_value_of_TermB_13;
      STATE_VARIABLE_DisjunctsCord_0_34 = next_value_of_STATE_VARIABLE_DisjunctsCord_0_34;
      STATE_VARIABLE_ErrSpecs_0_36 = next_value_of_STATE_VARIABLE_ErrSpecs_0_36;
      STATE_VARIABLE_WarnSpecs_0_38 = next_value_of_STATE_VARIABLE_WarnSpecs_0_38;
      STATE_VARIABLE_VarSet_0_40 = next_value_of_STATE_VARIABLE_VarSet_0_40;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_30;
      MR_Word WarnSpecsB_32;

      parse_tree__parse_goal__parse_goal_5_p_0(TermB_13, ContextPieces_14, &MaybeGoalB_30, STATE_VARIABLE_VarSet_1_42, STATE_VARIABLE_VarSet_41);
      if (((MR_tag((MR_Word) MaybeGoalB_30)) == (MR_Integer) 0))
      {
        MR_Word OoMErrSpecsB_33;
        MR_Tuple Var_63 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoalB_30, 0))));
        MR_Word Var_65;

        OoMErrSpecsB_33 = ((MR_Word) ((MR_hl_field(0, Var_63, 0))));
        WarnSpecsB_32 = ((MR_Word) ((MR_hl_field(0, Var_63, 1))));
        Var_65 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMErrSpecsB_33);
        *STATE_VARIABLE_ErrSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_65, STATE_VARIABLE_ErrSpecs_1_45);
        *STATE_VARIABLE_DisjunctsCord_35 = STATE_VARIABLE_DisjunctsCord_1_43;
      }
      else
      {
        MR_Word DisjunctB_31 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_30, 0))));

        WarnSpecsB_32 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_30, 1))));
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (DisjunctB_31)), STATE_VARIABLE_DisjunctsCord_1_43, STATE_VARIABLE_DisjunctsCord_35);
        *STATE_VARIABLE_ErrSpecs_37 = STATE_VARIABLE_ErrSpecs_1_45;
      }
      *STATE_VARIABLE_WarnSpecs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecsB_32, STATE_VARIABLE_WarnSpecs_1_47);
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_35,
  MR_Word * STATE_VARIABLE_ErrSpecs_36,
  MR_Word STATE_VARIABLE_WarnSpecs_0_37,
  MR_Word * STATE_VARIABLE_WarnSpecs_38,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_21;
    MR_Word WarnSpecsA_23;
    MR_Word STATE_VARIABLE_VarSet_1_41;
    MR_Word STATE_VARIABLE_ConjunctsCord_1_42;
    MR_Word STATE_VARIABLE_ErrSpecs_1_44;
    MR_Word STATE_VARIABLE_WarnSpecs_1_46;
    MR_Word TermBA_27;
    MR_Word TermBB_28;
    MR_Word ArgTermsB_25;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_String Var_64;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_goal__parse_goal_5_p_0(TermA_14, ContextPieces_16, &MaybeGoalA_21, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_1_41);
    if (((MR_tag((MR_Word) MaybeGoalA_21)) == (MR_Integer) 0))
    {
      MR_Word OoMErrSpecsA_24;
      MR_Tuple Var_43 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoalA_21, 0))));
      MR_Word Var_45;

      OoMErrSpecsA_24 = ((MR_Word) ((MR_hl_field(0, Var_43, 0))));
      WarnSpecsA_23 = ((MR_Word) ((MR_hl_field(0, Var_43, 1))));
      Var_45 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMErrSpecsA_24);
      STATE_VARIABLE_ErrSpecs_1_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_45, STATE_VARIABLE_ErrSpecs_0_35);
      STATE_VARIABLE_ConjunctsCord_1_42 = STATE_VARIABLE_ConjunctsCord_0_33;
    }
    else
    {
      MR_Word ConjunctA_22 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_21, 0))));

      WarnSpecsA_23 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_21, 1))));
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (ConjunctA_22)), STATE_VARIABLE_ConjunctsCord_0_33, &STATE_VARIABLE_ConjunctsCord_1_42);
      STATE_VARIABLE_ErrSpecs_1_44 = STATE_VARIABLE_ErrSpecs_0_35;
    }
    STATE_VARIABLE_WarnSpecs_1_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecsA_23, STATE_VARIABLE_WarnSpecs_0_37);
    succeeded = ((MR_tag((MR_Word) TermB_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(0, TermB_15, 0))));
      ArgTermsB_25 = ((MR_Word) ((MR_hl_field(0, TermB_15, 1))));
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_64 = ((MR_String) ((MR_hl_field(0, Var_47, 0))));
        succeeded = (strcmp(Functor_13, Var_64) == 0);
        if (succeeded)
        {
          succeeded = (ArgTermsB_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermBA_27 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_25, 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_25, 1))));
            succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TermBB_28 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
              Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
              succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_TermA_14 = TermBA_27;
      MR_Word next_value_of_TermB_15 = TermBB_28;
      MR_Word next_value_of_STATE_VARIABLE_ConjunctsCord_0_33 = STATE_VARIABLE_ConjunctsCord_1_42;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_35 = STATE_VARIABLE_ErrSpecs_1_44;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_37 = STATE_VARIABLE_WarnSpecs_1_46;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_39 = STATE_VARIABLE_VarSet_1_41;

      // direct tailcall eliminated
      ;
      TermA_14 = next_value_of_TermA_14;
      TermB_15 = next_value_of_TermB_15;
      STATE_VARIABLE_ConjunctsCord_0_33 = next_value_of_STATE_VARIABLE_ConjunctsCord_0_33;
      STATE_VARIABLE_ErrSpecs_0_35 = next_value_of_STATE_VARIABLE_ErrSpecs_0_35;
      STATE_VARIABLE_WarnSpecs_0_37 = next_value_of_STATE_VARIABLE_WarnSpecs_0_37;
      STATE_VARIABLE_VarSet_0_39 = next_value_of_STATE_VARIABLE_VarSet_0_39;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_29;
      MR_Word WarnSpecsB_31;

      parse_tree__parse_goal__parse_goal_5_p_0(TermB_15, ContextPieces_16, &MaybeGoalB_29, STATE_VARIABLE_VarSet_1_41, STATE_VARIABLE_VarSet_40);
      if (((MR_tag((MR_Word) MaybeGoalB_29)) == (MR_Integer) 0))
      {
        MR_Word OoMErrSpecsB_32;
        MR_Tuple Var_56 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoalB_29, 0))));
        MR_Word Var_58;

        OoMErrSpecsB_32 = ((MR_Word) ((MR_hl_field(0, Var_56, 0))));
        WarnSpecsB_31 = ((MR_Word) ((MR_hl_field(0, Var_56, 1))));
        Var_58 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMErrSpecsB_32);
        *STATE_VARIABLE_ErrSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_58, STATE_VARIABLE_ErrSpecs_1_44);
        *STATE_VARIABLE_ConjunctsCord_34 = STATE_VARIABLE_ConjunctsCord_1_42;
      }
      else
      {
        MR_Word ConjunctB_30 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_29, 0))));

        WarnSpecsB_31 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_29, 1))));
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (ConjunctB_30)), STATE_VARIABLE_ConjunctsCord_1_42, STATE_VARIABLE_ConjunctsCord_34);
        *STATE_VARIABLE_ErrSpecs_36 = STATE_VARIABLE_ErrSpecs_1_44;
      }
      *STATE_VARIABLE_WarnSpecs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecsB_31, STATE_VARIABLE_WarnSpecs_1_46);
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
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ThenTryTerm_10)) == (MR_Integer) 0);
  MR_Word ThenTerm_19;
  MR_Word ParamsTerm_21;
  MR_Word TryGoalTerm_22;
  MR_Word TryContext_23;
  MR_Word TryTerm_18;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_String Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;

  if (succeeded)
  {
    Var_48 = ((MR_Word) ((MR_hl_field(0, ThenTryTerm_10, 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, ThenTryTerm_10, 1))));
    succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_49 = ((MR_String) ((MR_hl_field(0, Var_48, 0))));
      succeeded = (strcmp(Var_49, (MR_String) "then") == 0);
      if (succeeded)
      {
        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TryTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_50, 0))));
          Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, 1))));
          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ThenTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_51, 0))));
            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, 1))));
            succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TryTerm_18)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, 1))));
                TryContext_23 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, 2))));
                succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_54 = ((MR_String) ((MR_hl_field(0, Var_53, 0))));
                  succeeded = (strcmp(Var_54, (MR_String) "try") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ParamsTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_55, 0))));
                      Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, 1))));
                      succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        TryGoalTerm_22 = ((MR_Word) ((MR_hl_field(1, Var_56, 0))));
                        Var_57 = ((MR_Word) ((MR_hl_field(1, Var_56, 1))));
                        succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word STATE_VARIABLE_VarSet_1_58;
    MR_Word Params_28;
    MR_Word TryGoal_29;
    MR_Word TryWarnSpecs_30;
    MR_Word ThenGoal_31;
    MR_Word ThenWarnSpecs_32;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_46, &GenericVarSet_24);
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_24, ParamsTerm_21, &MaybeParams_25);
    parse_tree__parse_goal__parse_goal_5_p_0(TryGoalTerm_22, ContextPieces_15, &MaybeTryGoal_26, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_1_58);
    parse_tree__parse_goal__parse_goal_5_p_0(ThenTerm_19, ContextPieces_15, &MaybeThenGoal_27, STATE_VARIABLE_VarSet_1_58, STATE_VARIABLE_VarSet_47);
    succeeded = ((MR_tag((MR_Word) MaybeParams_25)) == (MR_Integer) 1);
    if (succeeded)
    {
      Params_28 = ((MR_Word) ((MR_hl_field(1, MaybeParams_25, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTryGoal_26)) == (MR_Integer) 1);
      if (succeeded)
      {
        TryGoal_29 = ((MR_Word) ((MR_hl_field(1, MaybeTryGoal_26, 0))));
        TryWarnSpecs_30 = ((MR_Word) ((MR_hl_field(1, MaybeTryGoal_26, 1))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_27)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_31 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_27, 0))));
          ThenWarnSpecs_32 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_27, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word WarnSpecs_33;
      MR_Word MaybeIO_134;
      MR_Word Specs_135;

      WarnSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), TryWarnSpecs_30, ThenWarnSpecs_32);
      parse_tree__parse_goal__collect_try_params_5_p_0(Params_28, (MR_Word) ((MR_Unsigned) 0U), &MaybeIO_134, (MR_Word) ((MR_Unsigned) 0U), &Specs_135);
      if ((Specs_135 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal_36;

        {
          Goal_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Goal_36, 1) = ((MR_Box) (TryContext_23));
          MR_hl_field(3, Goal_36, 2) = ((MR_Box) (MaybeIO_134));
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
          MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_33));
        }
      }
      else
      {
        MR_Word OoMComponentErrSpecs_37;
        MR_Tuple Var_60;
        MR_Word HeadSpec_136 = ((MR_Word) ((MR_hl_field(1, Specs_135, 0))));
        MR_Word TailSpecs_137 = ((MR_Word) ((MR_hl_field(1, Specs_135, 1))));

        {
          OoMComponentErrSpecs_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OoMComponentErrSpecs_37, 0) = ((MR_Box) (HeadSpec_136));
          MR_hl_field(0, OoMComponentErrSpecs_37, 1) = ((MR_Box) (TailSpecs_137));
        }
        {
          Var_60 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (OoMComponentErrSpecs_37));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (WarnSpecs_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
        }
      }
    }
    else
    {
      MR_Word ParamsErrSpecs_38;
      MR_Word TryErrSpecs_39;
      MR_Word ThenyErrSpecs_40;
      MR_Word ThenyWarnSpecs_41;
      MR_Word ErrSpecs_42;
      MR_Word OoMErrSpecs_43;
      MR_Word Var_61;
      MR_Tuple Var_62;
      MR_Word TryWarnSpecs_123;
      MR_Word WarnSpecs_124;

      ParamsErrSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]), MaybeParams_25);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeTryGoal_26, &TryErrSpecs_39, &TryWarnSpecs_123);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_27, &ThenyErrSpecs_40, &ThenyWarnSpecs_41);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), TryErrSpecs_39, ThenyErrSpecs_40);
      ErrSpecs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ParamsErrSpecs_38, Var_61);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_42, &OoMErrSpecs_43);
      WarnSpecs_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), TryWarnSpecs_123, ThenyWarnSpecs_41);
      {
        Var_62 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (OoMErrSpecs_43));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (WarnSpecs_124));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
  else
  {
    MR_Word Pieces_44;
    MR_Word Spec_45;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_118;
    MR_Tuple Var_119;
    MR_Word Var_120;

    Var_68 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[362])));
    Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[364])));
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[369])));
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_76);
    Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[358])), Var_67);
    Var_118 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ThenTryTerm_10);
    {
      Spec_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_then_try_term\'/9"));
      MR_hl_field(0, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_45, 3) = ((MR_Box) (Var_118));
      MR_hl_field(0, Spec_45, 4) = ((MR_Box) (Pieces_44));
    }
    {
      Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_120, 0) = ((MR_Box) (Spec_45));
      MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_119 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
    }
    *STATE_VARIABLE_VarSet_47 = STATE_VARIABLE_VarSet_0_46;
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
  MR_Word PatternTerm0_12;
  MR_Word GoalTerm_13;
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    Var_27 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_7, 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_7, 1))));
    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
      succeeded = (strcmp(Var_28, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PatternTerm0_12 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
          Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            GoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_30, 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, 1))));
            succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
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
    parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_16, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    if (((MR_tag((MR_Word) MaybeGoal_16)) == (MR_Integer) 0))
      *MaybeCatch_10 = (MR_Word) (MaybeGoal_16);
    else
    {
      MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_16, 0))));
      MR_Word GoalWarnSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_16, 1))));
      MR_Word Catch_19;

      {
        Catch_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Catch_19, 0) = ((MR_Box) (PatternTerm_15));
        MR_hl_field(0, Catch_19, 1) = ((MR_Box) (Goal_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCatch_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Catch_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (GoalWarnSpecs_18));
      }
    }
  }
  else
  {
    MR_Word ErrorVarSet_21;
    MR_String ArrowTermStr_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_71;
    MR_Tuple Var_72;
    MR_Word Var_73;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_25, &ErrorVarSet_21);
    ArrowTermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorVarSet_21, ArrowTerm_7);
    Var_38 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[348])));
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (ArrowTermStr_22));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_59);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[351])), Var_57);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_43);
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[322])), Var_37);
    Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
      MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_71));
      MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCatch_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word CatchArrowTerm_12;
  MR_Word SubTerm_13;
  MR_Word Var_33;
  MR_String Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;

  if (succeeded)
  {
    Var_33 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_34 = ((MR_String) ((MR_hl_field(0, Var_33, 0))));
      succeeded = (strcmp(Var_34, (MR_String) "catch") == 0);
      if (succeeded)
      {
        succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CatchArrowTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
            succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word HeadMaybeCatch_15;
    MR_Word TailMaybeCatches_16;
    MR_Word STATE_VARIABLE_VarSet_1_38;
    MR_Word HeadCatch_17;
    MR_Word HeadWarnSpecs_18;
    MR_Word TailCatches_19;
    MR_Word TailWarnSpecs_20;

    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(CatchArrowTerm_12, ContextPieces_9, &HeadMaybeCatch_15, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_1_38);
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(SubTerm_13, ContextPieces_9, &TailMaybeCatches_16, STATE_VARIABLE_VarSet_1_38, STATE_VARIABLE_VarSet_32);
    succeeded = ((MR_tag((MR_Word) HeadMaybeCatch_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadCatch_17 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCatch_15, 0))));
      HeadWarnSpecs_18 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCatch_15, 1))));
      succeeded = ((MR_tag((MR_Word) TailMaybeCatches_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TailCatches_19 = ((MR_Word) ((MR_hl_field(1, TailMaybeCatches_16, 0))));
        TailWarnSpecs_20 = ((MR_Word) ((MR_hl_field(1, TailMaybeCatches_16, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Catches_21;
      MR_Word WarnSpecs_22;

      {
        Catches_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Catches_21, 0) = ((MR_Box) (HeadCatch_17));
        MR_hl_field(1, Catches_21, 1) = ((MR_Box) (TailCatches_19));
      }
      WarnSpecs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), HeadWarnSpecs_18, TailWarnSpecs_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCatches_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Catches_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_22));
      }
    }
    else
    {
      MR_Word HeadErrSpecs_23;
      MR_Word TailErrSpecs_24;
      MR_Word ErrSpecs_25;
      MR_Word OoMErrSpecs_26;
      MR_Tuple Var_40;
      MR_Word HeadWarnSpecs_44;
      MR_Word TailWarnSpecs_45;
      MR_Word WarnSpecs_46;

      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), HeadMaybeCatch_15, &HeadErrSpecs_23, &HeadWarnSpecs_44);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), TailMaybeCatches_16, &TailErrSpecs_24, &TailWarnSpecs_45);
      ErrSpecs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), HeadErrSpecs_23, TailErrSpecs_24);
      WarnSpecs_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), HeadWarnSpecs_44, TailWarnSpecs_45);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_25, &OoMErrSpecs_26);
      {
        Var_40 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (OoMErrSpecs_26));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (WarnSpecs_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatches_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
      }
    }
  }
  else
  {
    MR_Word MaybeCatch_27;

    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(Term_7, ContextPieces_9, &MaybeCatch_27, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32);
    if (((MR_tag((MR_Word) MaybeCatch_27)) == (MR_Integer) 0))
      *MaybeCatches_10 = (MR_Word) (MaybeCatch_27);
    else
    {
      MR_Word Catch_28 = ((MR_Word) ((MR_hl_field(1, MaybeCatch_27, 0))));
      MR_Word CatchWarnSpecs_29 = ((MR_Word) ((MR_hl_field(1, MaybeCatch_27, 1))));
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Catch_28));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCatches_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (CatchWarnSpecs_29));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatchAny_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
  MR_Word VarTerm0_12;
  MR_Word GoalTerm_13;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_7, 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_7, 1))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      succeeded = (strcmp(Var_31, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarTerm0_12 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            GoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
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
      Var0_15 = ((MR_Word) ((MR_hl_field(1, VarTerm0_12, 0))));
      {
        MR_Word Var_17;
        MR_Word MaybeGoal_18;

        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_15, &Var_17);
        parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
        if (((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 0))
          *MaybeCatchAny_10 = (MR_Word) (MaybeGoal_18);
        else
        {
          MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, 0))));
          MR_Word GoalWarnSpecs_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, 1))));
          MR_Word CatchAny_21;

          {
            CatchAny_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CatchAny_21, 0) = ((MR_Box) (Var_17));
            MR_hl_field(0, CatchAny_21, 1) = ((MR_Box) (Goal_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeCatchAny_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (CatchAny_21));
            MR_hl_field(1, base, 1) = ((MR_Box) (GoalWarnSpecs_20));
          }
        }
      }
    }
    else
    {
      MR_Word VarSet0_23;
      MR_String VarTermStr0_24;
      MR_Word Pieces_25;
      MR_Word Spec_26;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_46;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_80;
      MR_Tuple Var_81;
      MR_Word Var_82;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_28, &VarSet0_23);
      VarTermStr0_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_23, VarTerm0_12);
      Var_41 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[310])));
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (VarTermStr0_24));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_68);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[320])), Var_66);
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
      Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_40);
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
        MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Var_80));
        MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_81 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatchAny_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
      }
      *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
    }
  }
  else
  {
    MR_String ArrowTermStr_27;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_95;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_123;
    MR_Tuple Var_124;
    MR_Word Var_125;
    MR_Word VarSet0_128;
    MR_Word Pieces_129;
    MR_Word Spec_130;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_28, &VarSet0_128);
    ArrowTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_128, ArrowTerm_7);
    Var_90 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[323])));
    {
      Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_112, 1) = ((MR_Box) (ArrowTermStr_27));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_111);
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[327])), Var_109);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_95);
    Pieces_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[322])), Var_89);
    Var_123 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
    {
      Spec_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
      MR_hl_field(0, Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_130, 3) = ((MR_Box) (Var_123));
      MR_hl_field(0, Spec_130, 4) = ((MR_Box) (Pieces_129));
    }
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_125, 0) = ((MR_Box) (Spec_130));
      MR_hl_field(0, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_124 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(0, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCatchAny_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_124));
    }
    *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word LeftGoal_8;
  MR_Word RightGoal_9;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      succeeded = (strcmp(Var_31, (MR_String) "or_else") == 0);
      if (succeeded)
      {
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftGoal_8 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightGoal_9 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeLeftGoalList_11;
    MR_Word MaybeRightGoalList_12;
    MR_Word STATE_VARIABLE_VarSet_1_35;
    MR_Word LeftGoalList_13;
    MR_Word LeftWarnSpecs_14;
    MR_Word RightGoalList_15;
    MR_Word RightWarnSpecs_16;

    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(LeftGoal_8, &MaybeLeftGoalList_11, STATE_VARIABLE_VarSet_0_28, &STATE_VARIABLE_VarSet_1_35);
    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(RightGoal_9, &MaybeRightGoalList_12, STATE_VARIABLE_VarSet_1_35, STATE_VARIABLE_VarSet_29);
    succeeded = ((MR_tag((MR_Word) MaybeLeftGoalList_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      LeftGoalList_13 = ((MR_Word) ((MR_hl_field(1, MaybeLeftGoalList_11, 0))));
      LeftWarnSpecs_14 = ((MR_Word) ((MR_hl_field(1, MaybeLeftGoalList_11, 1))));
      succeeded = ((MR_tag((MR_Word) MaybeRightGoalList_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        RightGoalList_15 = ((MR_Word) ((MR_hl_field(1, MaybeRightGoalList_12, 0))));
        RightWarnSpecs_16 = ((MR_Word) ((MR_hl_field(1, MaybeRightGoalList_12, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Goals_17;
      MR_Word WarnSpecs_18;

      Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), LeftGoalList_13, RightGoalList_15);
      WarnSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), LeftWarnSpecs_14, RightWarnSpecs_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goals_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_18));
      }
    }
    else
    {
      MR_Word LeftErrSpecs_19;
      MR_Word RightErrSpecs_20;
      MR_Word GoalsErrSpecs_21;
      MR_Word GoalsWarnSpecs_22;
      MR_Word OoMErrSpecs_23;
      MR_Tuple Var_37;
      MR_Word LeftWarnSpecs_41;
      MR_Word RightWarnSpecs_42;

      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeLeftGoalList_11, &LeftErrSpecs_19, &LeftWarnSpecs_41);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeRightGoalList_12, &RightErrSpecs_20, &RightWarnSpecs_42);
      GoalsErrSpecs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), LeftErrSpecs_19, RightErrSpecs_20);
      GoalsWarnSpecs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), LeftWarnSpecs_41, RightWarnSpecs_42);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), GoalsErrSpecs_21, &OoMErrSpecs_23);
      {
        Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (OoMErrSpecs_23));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (GoalsWarnSpecs_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoals_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
  else
  {
    MR_Word ContextPieces_24;
    MR_Word MaybeSubGoal_25;

    ContextPieces_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    parse_tree__parse_goal__parse_goal_5_p_0(Term_5, ContextPieces_24, &MaybeSubGoal_25, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
    if (((MR_tag((MR_Word) MaybeSubGoal_25)) == (MR_Integer) 0))
      *MaybeGoals_6 = (MR_Word) (MaybeSubGoal_25);
    else
    {
      MR_Word SubGoal_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_25, 0))));
      MR_Word Var_39;
      MR_Word WarnSpecs_43 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_25, 1))));

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (SubGoal_26));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_43));
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
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  MR_bool succeeded = (CatchTermArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_14;
  MR_Word TermB_15;
  MR_Word Var_32;
  MR_Word Var_33;

  if (succeeded)
  {
    TermA_14 = ((MR_Word) ((MR_hl_field(1, CatchTermArgs_8, 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, CatchTermArgs_8, 1))));
    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_15 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word MaybeCatches_16;
    MR_Word STATE_VARIABLE_VarSet_1_34;

    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(TermB_15, ContextPieces_11, &MaybeCatches_16, STATE_VARIABLE_VarSet_0_30, &STATE_VARIABLE_VarSet_1_34);
    if (((MR_tag((MR_Word) MaybeCatches_16)) == (MR_Integer) 0))
    {
      *MaybeGoal_12 = (MR_Word) (MaybeCatches_16);
      *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_1_34;
    }
    else
    {
      MR_Word Catches_17 = ((MR_Word) ((MR_hl_field(1, MaybeCatches_16, 0))));
      MR_Word CatchWarnSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeCatches_16, 1))));
      MR_Word MaybeGoal0_19;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_14, Catches_17, MaybeCatchAnyExpr_9, ContextPieces_11, &MaybeGoal0_19, STATE_VARIABLE_VarSet_1_34, STATE_VARIABLE_VarSet_31);
      if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
      {
        MR_Tuple ErrWarnError0_22 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoal0_19, 0))));
        MR_Tuple ErrWarnError_23;

        parse_tree__maybe_error__add_warns_to_err_warn_error_3_p_0(ErrWarnError0_22, CatchWarnSpecs_18, &ErrWarnError_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ErrWarnError_23));
        }
      }
      else
      {
        MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, 0))));
        MR_Word GoalWarnSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, 1))));
        MR_Word Var_36;

        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CatchWarnSpecs_18, GoalWarnSpecs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_36));
        }
      }
    }
  }
  else
  {
    MR_Word ErrorVarSet_25;
    MR_Word ErrorTerm_26;
    MR_String ErrorTermStr_27;
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_39;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_76;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Tuple Var_107;
    MR_Word Var_108;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_30, &ErrorVarSet_25);
    Var_39 = mercury__term_context__dummy_context_0_f_0();
    {
      ErrorTerm_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ErrorTerm_26, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[9]));
      MR_hl_field(0, ErrorTerm_26, 1) = ((MR_Box) (CatchTermArgs_8));
      MR_hl_field(0, ErrorTerm_26, 2) = ((MR_Box) (Var_39));
    }
    ErrorTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorVarSet_25, ErrorTerm_26);
    Var_51 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[331])));
    Var_71 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[338])));
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (ErrorTermStr_27));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_91 = parse_tree__error_spec__color_as_subject_1_f_0(Var_92);
    Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[347])));
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_95);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[345])), Var_90);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_76);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[336])), Var_70);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
    Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[329])), Var_50);
    {
      Spec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_then_try_term_args\'/7"));
      MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_108, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(0, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_107, 0) = ((MR_Box) (Var_108));
      MR_hl_field(0, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
    }
    *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_0_30;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_event_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTerm_12;
  MR_Word Var_35;

  if (succeeded)
  {
    SubGoalTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSubGoal_13;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_12, ContextPieces_9, &MaybeSubGoal_13, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34);
    if (((MR_tag((MR_Word) MaybeSubGoal_13)) == (MR_Integer) 0))
      *MaybeGoal_10 = MaybeSubGoal_13;
    else
    {
      MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_13, 0))));
      MR_Word SubGoalWarnSpecs_15 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_13, 1))));
      MR_Word SubContext_16;
      MR_Word SymName_17;
      MR_Word CallArgs_18;
      MR_Word Purity_19;

      succeeded = ((MR_tag((MR_Word) SubGoal_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubContext_16 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, 0))));
        SymName_17 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, 1))));
        CallArgs_18 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, 2))));
        Purity_19 = ((MR_Unsigned) ((MR_hl_field(1, SubGoal_14, 3))) & (MR_Integer) 3);
        {
          MR_String EventName_20;

          succeeded = (Purity_19 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) SymName_17)) == (MR_Integer) 0);
            if (succeeded)
              EventName_20 = ((MR_String) ((MR_hl_field(0, SymName_17, 0))));
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
              MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_15));
            }
          }
          else
          {
            MR_Word OoMSpecs_30;
            MR_Word STATE_VARIABLE_Specs_2_64;
            MR_Word STATE_VARIABLE_Specs_3_88;
            MR_Tuple Var_89;

            if (((MR_tag((MR_Word) SymName_17)) == (MR_Integer) 1))
            {
              MR_Word QualPieces_26;
              MR_Word QualSpec_27;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_52;
              MR_Word Var_53;

              Var_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
              Var_47 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[130])));
              Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[132])));
              Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
              Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
              Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[128])), Var_46);
              QualPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_39);
              {
                QualSpec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, QualSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                MR_hl_field(0, QualSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, QualSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, QualSpec_27, 3) = ((MR_Box) (SubContext_16));
                MR_hl_field(0, QualSpec_27, 4) = ((MR_Box) (QualPieces_26));
              }
              {
                STATE_VARIABLE_Specs_2_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_2_64, 0) = ((MR_Box) (QualSpec_27));
                MR_hl_field(1, STATE_VARIABLE_Specs_2_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              STATE_VARIABLE_Specs_2_64 = (MR_Word) ((MR_Unsigned) 0U);
            switch (Purity_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                {
                  MR_Word PurityPieces_28;
                  MR_Word PuritySpec_29;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_73;
                  MR_Word Var_74;

                  Var_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
                  Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[138])));
                  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
                  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[134])), Var_73);
                  PurityPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_66);
                  {
                    PuritySpec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PuritySpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                    MR_hl_field(0, PuritySpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, PuritySpec_29, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                    MR_hl_field(0, PuritySpec_29, 3) = ((MR_Box) (SubContext_16));
                    MR_hl_field(0, PuritySpec_29, 4) = ((MR_Box) (PurityPieces_28));
                  }
                  {
                    STATE_VARIABLE_Specs_3_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_3_88, 0) = ((MR_Box) (PuritySpec_29));
                    MR_hl_field(1, STATE_VARIABLE_Specs_3_88, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_64));
                  }
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_3_88 = STATE_VARIABLE_Specs_2_64;
                break;
            }
            mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), STATE_VARIABLE_Specs_3_88, &OoMSpecs_30);
            {
              Var_89 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_89, 0) = ((MR_Box) (OoMSpecs_30));
              MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeGoal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_89));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_31;
        MR_Tuple Var_92;
        MR_Word Var_93;

        Spec_31 = parse_tree__parse_goal_util__should_have_one_call_prefix_3_f_0(ContextPieces_9, Context_8, (MR_String) "event");
        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_93, 0) = ((MR_Box) (Spec_31));
          MR_hl_field(0, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_92 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(0, Var_92, 1) = ((MR_Box) (SubGoalWarnSpecs_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
        }
      }
    }
  }
  else
  {
    MR_Tuple Var_96;
    MR_Word Var_97;
    MR_Word Spec_100;

    Spec_100 = parse_tree__parse_goal_util__should_have_one_call_prefix_3_f_0(ContextPieces_9, Context_8, (MR_String) "event");
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (Spec_100));
      MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_96 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(0, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
    }
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Detism_14 = ((&parse_tree__parse_goal_vector_common_10[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 36)]))->parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_0;
  MR_String Functor_15 = ((&parse_tree__parse_goal_vector_common_10[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 36)]))->parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_1;
  MR_Word VarsTerm_16;
  MR_Word SubGoalTerm_17;
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    VarsTerm_16 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ProgVarsTerm_18;
    MR_Word MaybePSDCVars_19;
    MR_Word MaybeSubGoal_20;
    MR_Word PSDCVars0_21;
    MR_Word SubGoal_22;
    MR_Word SubGoalWarnSpecs_23;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_16, &ProgVarsTerm_18);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_18, STATE_VARIABLE_VarSet_0_33, ContextPieces_11, &MaybePSDCVars_19);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_17, ContextPieces_11, &MaybeSubGoal_20, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34);
    succeeded = ((MR_tag((MR_Word) MaybePSDCVars_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      PSDCVars0_21 = ((MR_Word) ((MR_hl_field(1, MaybePSDCVars_19, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_20, 0))));
        SubGoalWarnSpecs_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_20, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybePODVar_24;

      parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_21, SubGoal_22, ContextPieces_11, Functor_15, &MaybePODVar_24);
      if (((MR_tag((MR_Word) MaybePODVar_24)) == (MR_Integer) 0))
      {
        MR_Word OoMVarErrSpecs_27 = ((MR_Word) ((MR_hl_field(0, MaybePODVar_24, 0))));
        MR_Tuple Var_38;

        {
          Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (OoMVarErrSpecs_27));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (SubGoalWarnSpecs_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
        }
      }
      else
      {
        MR_Word PODVar_25 = ((MR_Word) ((MR_hl_field(1, MaybePODVar_24, 0))));
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
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_23));
        }
      }
    }
    else
    {
      MR_Word VarErrSpecs_28;
      MR_Word SubGoalErrSpecs_29;
      MR_Word ErrSpecs_30;
      MR_Word OoMErrSpecs_31;
      MR_Tuple Var_39;
      MR_Word SubGoalWarnSpecs_45;

      VarErrSpecs_28 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybePSDCVars_19);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_20, &SubGoalErrSpecs_29, &SubGoalWarnSpecs_45);
      ErrSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_28, SubGoalErrSpecs_29);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_30, &OoMErrSpecs_31);
      {
        Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (OoMErrSpecs_31));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (SubGoalWarnSpecs_45));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
      }
    }
  }
  else
  {
    MR_Word Spec_32;
    MR_Tuple Var_41;
    MR_Word Var_42;

    Spec_32 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_15);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
    }
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_31;
  MR_Word Var_32;

  if (succeeded)
  {
    VarsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_31, 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
      succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ProgVarsTerm_14;
    MR_Word MaybePSDCVars_15;
    MR_Word MaybeSubGoal_16;
    MR_Word PSDCVars0_17;
    MR_Word SubGoal_18;
    MR_Word SubGoalWarnSpecs_19;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_12, &ProgVarsTerm_14);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_14, STATE_VARIABLE_VarSet_0_29, ContextPieces_9, &MaybePSDCVars_15);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30);
    succeeded = ((MR_tag((MR_Word) MaybePSDCVars_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      PSDCVars0_17 = ((MR_Word) ((MR_hl_field(1, MaybePSDCVars_15, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 0))));
        SubGoalWarnSpecs_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybePODVar_20;

      parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_17, SubGoal_18, ContextPieces_9, (MR_String) "require_complete_switch", &MaybePODVar_20);
      if (((MR_tag((MR_Word) MaybePODVar_20)) == (MR_Integer) 0))
      {
        MR_Word OoMVarErrSpecs_23 = ((MR_Word) ((MR_hl_field(0, MaybePODVar_20, 0))));
        MR_Tuple Var_35;

        {
          Var_35 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (OoMVarErrSpecs_23));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (SubGoalWarnSpecs_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
        }
      }
      else
      {
        MR_Word PODVar_21 = ((MR_Word) ((MR_hl_field(1, MaybePODVar_20, 0))));
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
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_19));
        }
      }
    }
    else
    {
      MR_Word VarErrSpecs_24;
      MR_Word SubGoalErrSpecs_25;
      MR_Word ErrSpecs_26;
      MR_Word OoMErrSpecs_27;
      MR_Tuple Var_36;
      MR_Word SubGoalWarnSpecs_43;

      VarErrSpecs_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybePSDCVars_15);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16, &SubGoalErrSpecs_25, &SubGoalWarnSpecs_43);
      ErrSpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_24, SubGoalErrSpecs_25);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_26, &OoMErrSpecs_27);
      {
        Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (OoMErrSpecs_27));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (SubGoalWarnSpecs_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      }
    }
  }
  else
  {
    MR_Word Spec_28;
    MR_Tuple Var_39;
    MR_Word Var_40;

    Spec_28 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a variable in a singleton list", (MR_String) "require_complete_switch");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
    *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_0_29;
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
  MR_Word Detism_14 = ((&parse_tree__parse_goal_vector_common_9[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 27)]))->parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_0;
  MR_Word SubGoalTerm_15;
  MR_Word Var_25;

  if (succeeded)
  {
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
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
      MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 0))));
      MR_Word SubGoalWarnSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_18));
      }
    }
  }
  else
  {
    MR_String Functor_21;
    MR_Word Spec_22;
    MR_Tuple Var_27;
    MR_Word Var_28;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_21, GoalKind_8);
    Spec_22 = parse_tree__parse_goal_util__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_21);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word conv3_HeadVar__2_68;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1389__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_68);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_68));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_64;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1388__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_64);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_64));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_60;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1387__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_60);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_60));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_54;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1386__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_54);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_54));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    VarsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word SubGoalWarnSpecs_22;
    MR_Word Var_38;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_33, &GenericVarSet_14);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_12, GenericVarSet_14, ContextPieces_9, &MaybeVars_15);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34);
    succeeded = ((MR_tag((MR_Word) MaybeVars_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(1, MaybeVars_15, 0))));
      Vars0_17 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
      StateVars0_18 = ((MR_Word) ((MR_hl_field(0, Var_38, 1))));
      DotSVars0_19 = ((MR_Word) ((MR_hl_field(0, Var_38, 2))));
      ColonSVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_38, 3))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_21 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 0))));
        SubGoalWarnSpecs_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_22));
      }
    }
    else
    {
      MR_Word VarErrSpecs_28;
      MR_Word SubGoalErrSpecs_29;
      MR_Word ErrSpecs_30;
      MR_Word OoMErrSpecs_31;
      MR_Tuple Var_43;
      MR_Word SubGoalWarnSpecs_50;

      VarErrSpecs_28 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybeVars_15);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16, &SubGoalErrSpecs_29, &SubGoalWarnSpecs_50);
      ErrSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_28, SubGoalErrSpecs_29);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_30, &OoMErrSpecs_31);
      {
        Var_43 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (OoMErrSpecs_31));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (SubGoalWarnSpecs_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      }
    }
  }
  else
  {
    MR_Word Spec_32;
    MR_Tuple Var_46;
    MR_Word Var_47;

    Spec_32 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of variables", (MR_String) "arbitrary");
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    }
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_70;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1342__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_70);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_70));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_66;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1341__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_66);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_66));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_62;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1340__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_62);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_62));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_56;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1339__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_56);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_56));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_14;
  MR_Word SubGoalTerm_15;
  MR_Word Var_38;
  MR_Word Var_39;

  if (succeeded)
  {
    VarsTerm_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_38, 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, 1))));
      succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word SubGoalWarnSpecs_24;
    MR_Word Var_41;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_36, &GenericVarSet_16);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_14, GenericVarSet_16, ContextPieces_11, &MaybeVars_17);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
    succeeded = ((MR_tag((MR_Word) MaybeVars_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(1, MaybeVars_17, 0))));
      Vars0_19 = ((MR_Word) ((MR_hl_field(0, Var_41, 0))));
      StateVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_41, 1))));
      DotSVars0_21 = ((MR_Word) ((MR_hl_field(0, Var_41, 2))));
      ColonSVars0_22 = ((MR_Word) ((MR_hl_field(0, Var_41, 3))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_18, 0))));
        SubGoalWarnSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_18, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_25;
      MR_Word StateVars_26;
      MR_Word DotSVars_27;
      MR_Word ColonSVars_28;
      MR_Word Goal_29;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), Vars0_19, &Vars_25);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), StateVars0_20, &StateVars_26);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), DotSVars0_21, &DotSVars_27);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), ColonSVars0_22, &ColonSVars_28);
      switch (GoalKind_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 25:
          {
            Goal_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Goal_29, 1) = ((MR_Box) (Context_10));
            MR_hl_field(3, Goal_29, 2) = ((MR_Box) (Vars_25));
            MR_hl_field(3, Goal_29, 3) = ((MR_Box) (StateVars_26));
            MR_hl_field(3, Goal_29, 4) = ((MR_Box) (DotSVars_27));
            MR_hl_field(3, Goal_29, 5) = ((MR_Box) (ColonSVars_28));
            MR_hl_field(3, Goal_29, 6) = ((MR_Box) (SubGoal_23));
          }
          break;
        case (MR_Integer) 24:
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
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_24));
      }
    }
    else
    {
      MR_Word VarErrSpecs_30;
      MR_Word SubGoalErrSpecs_31;
      MR_Word ErrSpecs_32;
      MR_Word OoMErrSpecs_33;
      MR_Tuple Var_46;
      MR_Word SubGoalWarnSpecs_52;

      VarErrSpecs_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybeVars_17);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_18, &SubGoalErrSpecs_31, &SubGoalWarnSpecs_52);
      ErrSpecs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_30, SubGoalErrSpecs_31);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_32, &OoMErrSpecs_33);
      {
        Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (OoMErrSpecs_33));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (SubGoalWarnSpecs_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      }
    }
  }
  else
  {
    MR_String Functor_34;
    MR_Word Spec_35;
    MR_Tuple Var_48;
    MR_Word Var_49;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_34, GoalKind_8);
    Spec_35 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_34);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (Spec_35));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
    }
    *STATE_VARIABLE_VarSet_37 = STATE_VARIABLE_VarSet_0_36;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_atomic_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ParamsTerm_12;
  MR_Word SubGoalsTerm_13;
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    ParamsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_14;
    MR_Word MaybeParams_15;
    MR_Word MaybeSubGoals_16;
    MR_Word MaybeSubGoals_52;
    MR_Word Params_17;
    MR_Word MainGoal_18;
    MR_Word OrElseGoals_19;
    MR_Word SubGoalWarnSpecs_20;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_33, &GenericVarSet_14);
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_12, GenericVarSet_14, &MaybeParams_15);
    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(SubGoalsTerm_13, &MaybeSubGoals_52, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34);
    if (((MR_tag((MR_Word) MaybeSubGoals_52)) == (MR_Integer) 0))
    {
      MR_Tuple Specs_60 = ((MR_Tuple) ((MR_hl_field(0, MaybeSubGoals_52, 0))));

      {
        MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeSubGoals_16, 0) = ((MR_Box) (Specs_60));
      }
    }
    else
    {
      MR_Word Goals_53 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_52, 0))));
      MR_Word WarnSpecs_54 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_52, 1))));

      if ((Goals_53 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_55;
        MR_Word Context_56;
        MR_Word Spec_57;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Tuple Var_77;
        MR_Word Var_78;

        Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[407])));
        Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
        Pieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[405])), Var_65);
        Context_56 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubGoalsTerm_13);
        {
          Spec_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subgoals\'/4"));
          MR_hl_field(0, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_57, 3) = ((MR_Box) (Context_56));
          MR_hl_field(0, Spec_57, 4) = ((MR_Box) (Pieces_55));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (Spec_57));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_77 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(0, Var_77, 1) = ((MR_Box) (WarnSpecs_54));
        }
        {
          MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeSubGoals_16, 0) = ((MR_Box) (Var_77));
        }
      }
      else
      {
        MR_Word MainSubGoal_58 = ((MR_Word) ((MR_hl_field(1, Goals_53, 0))));
        MR_Word OrElseSubGoals_59 = ((MR_Word) ((MR_hl_field(1, Goals_53, 1))));

        {
          MaybeSubGoals_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSubGoals_16, 0) = ((MR_Box) (MainSubGoal_58));
          MR_hl_field(1, MaybeSubGoals_16, 1) = ((MR_Box) (OrElseSubGoals_59));
          MR_hl_field(1, MaybeSubGoals_16, 2) = ((MR_Box) (WarnSpecs_54));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeParams_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Params_17 = ((MR_Word) ((MR_hl_field(1, MaybeParams_15, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoals_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        MainGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, 0))));
        OrElseGoals_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, 1))));
        SubGoalWarnSpecs_20 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, 2))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeComponents_21;

      parse_tree__parse_goal__convert_atomic_params_3_p_0(ParamsTerm_12, Params_17, &MaybeComponents_21);
      if (((MR_tag((MR_Word) MaybeComponents_21)) == (MR_Integer) 0))
      {
        MR_Word OoMComponentErrSpecs_26 = ((MR_Word) ((MR_hl_field(0, MaybeComponents_21, 0))));
        MR_Tuple Var_38;

        {
          Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (OoMComponentErrSpecs_26));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (SubGoalWarnSpecs_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
        }
      }
      else
      {
        MR_Word Outer_22 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, 0))));
        MR_Word Inner_23 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, 1))));
        MR_Word MaybeOutputVars_24 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, 2))));
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
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_20));
        }
      }
    }
    else
    {
      MR_Word ParamErrSpecs_27;
      MR_Word SubGoalsErrSpecs_28;
      MR_Word SubGoalsWarnSpecs_29;
      MR_Word ErrSpecs_30;
      MR_Word OoMErrSpecs_31;
      MR_Tuple Var_39;

      ParamErrSpecs_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeParams_15);
      parse_tree__maybe_error__get_all_errors_warnings3_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeSubGoals_16, &SubGoalsErrSpecs_28, &SubGoalsWarnSpecs_29);
      ErrSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ParamErrSpecs_27, SubGoalsErrSpecs_28);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_30, &OoMErrSpecs_31);
      {
        Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (OoMErrSpecs_31));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (SubGoalsWarnSpecs_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
      }
    }
  }
  else
  {
    MR_Word Spec_32;
    MR_Tuple Var_42;
    MR_Word Var_43;

    Spec_32 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of atomic parameters", (MR_String) "atomic");
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
    }
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_trace_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ParamsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_34;
  MR_Word Var_35;

  if (succeeded)
  {
    ParamsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_14;
    MR_Word MaybeParams_15;
    MR_Word MaybeSubGoal_16;
    MR_Word Params_17;
    MR_Word SubGoal_18;
    MR_Word SubGoalWarnSpecs_19;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_32, &GenericVarSet_14);
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_14, ParamsTerm_12, &MaybeParams_15);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33);
    succeeded = ((MR_tag((MR_Word) MaybeParams_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Params_17 = ((MR_Word) ((MR_hl_field(1, MaybeParams_15, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 0))));
        SubGoalWarnSpecs_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeCompileTime_51;
      MR_Word MaybeRunTime_52;
      MR_Word MaybeIO_53;
      MR_Word MutableVars_54;
      MR_Word Specs_55;

      parse_tree__parse_goal__collect_trace_params_11_p_0(Params_17, (MR_Word) ((MR_Unsigned) 0U), &MaybeCompileTime_51, (MR_Word) ((MR_Unsigned) 0U), &MaybeRunTime_52, (MR_Word) ((MR_Unsigned) 0U), &MaybeIO_53, (MR_Word) ((MR_Unsigned) 0U), &MutableVars_54, (MR_Word) ((MR_Unsigned) 0U), &Specs_55);
      if ((Specs_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal_25;

        {
          Goal_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Goal_25, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_25, 2) = ((MR_Box) (MaybeCompileTime_51));
          MR_hl_field(3, Goal_25, 3) = ((MR_Box) (MaybeRunTime_52));
          MR_hl_field(3, Goal_25, 4) = ((MR_Box) (MaybeIO_53));
          MR_hl_field(3, Goal_25, 5) = ((MR_Box) (MutableVars_54));
          MR_hl_field(3, Goal_25, 6) = ((MR_Box) (SubGoal_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_19));
        }
      }
      else
      {
        MR_Word OoMComponentErrSpecs_26;
        MR_Tuple Var_37;
        MR_Word HeadSpec_56 = ((MR_Word) ((MR_hl_field(1, Specs_55, 0))));
        MR_Word TailSpecs_57 = ((MR_Word) ((MR_hl_field(1, Specs_55, 1))));

        {
          OoMComponentErrSpecs_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OoMComponentErrSpecs_26, 0) = ((MR_Box) (HeadSpec_56));
          MR_hl_field(0, OoMComponentErrSpecs_26, 1) = ((MR_Box) (TailSpecs_57));
        }
        {
          Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (OoMComponentErrSpecs_26));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (SubGoalWarnSpecs_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
        }
      }
    }
    else
    {
      MR_Word ParamErrSpecs_27;
      MR_Word SubGoalErrSpecs_28;
      MR_Word ErrSpecs_29;
      MR_Word OoMErrSpecs_30;
      MR_Tuple Var_38;
      MR_Word SubGoalWarnSpecs_45;

      ParamErrSpecs_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_15);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16, &SubGoalErrSpecs_28, &SubGoalWarnSpecs_45);
      ErrSpecs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ParamErrSpecs_27, SubGoalErrSpecs_28);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_29, &OoMErrSpecs_30);
      {
        Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (OoMErrSpecs_30));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (SubGoalWarnSpecs_45));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
      }
    }
  }
  else
  {
    MR_Word Spec_31;
    MR_Tuple Var_41;
    MR_Word Var_42;

    Spec_31 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of trace parameters", (MR_String) "trace");
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
    }
    *STATE_VARIABLE_VarSet_33 = STATE_VARIABLE_VarSet_0_32;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_implication_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_14;
  MR_Word TermB_15;
  MR_Word Var_34;
  MR_Word Var_35;

  if (succeeded)
  {
    TermA_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_15 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
      succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word MaybeGoalA_16;
    MR_Word MaybeGoalB_17;
    MR_Word STATE_VARIABLE_VarSet_1_36;
    MR_Word GoalA_18;
    MR_Word GoalWarnSpecsA_19;
    MR_Word GoalB_20;
    MR_Word GoalWarnSpecsB_21;

    parse_tree__parse_goal__parse_goal_5_p_0(TermA_14, ContextPieces_11, &MaybeGoalA_16, STATE_VARIABLE_VarSet_0_32, &STATE_VARIABLE_VarSet_1_36);
    parse_tree__parse_goal__parse_goal_5_p_0(TermB_15, ContextPieces_11, &MaybeGoalB_17, STATE_VARIABLE_VarSet_1_36, STATE_VARIABLE_VarSet_33);
    succeeded = ((MR_tag((MR_Word) MaybeGoalA_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      GoalA_18 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_16, 0))));
      GoalWarnSpecsA_19 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_16, 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoalB_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        GoalB_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_17, 0))));
        GoalWarnSpecsB_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_17, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Goal_22;
      MR_Word WarnSpecs_23;

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
      WarnSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), GoalWarnSpecsA_19, GoalWarnSpecsB_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_23));
      }
    }
    else
    {
      MR_Word ErrSpecsA_24;
      MR_Word WarnSpecsA_25;
      MR_Word ErrSpecsB_26;
      MR_Word WarnSpecsB_27;
      MR_Word ErrSpecs_28;
      MR_Word OoMErrSpecs_29;
      MR_Tuple Var_38;
      MR_Word WarnSpecs_43;

      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_16, &ErrSpecsA_24, &WarnSpecsA_25);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_17, &ErrSpecsB_26, &WarnSpecsB_27);
      ErrSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecsA_24, ErrSpecsB_26);
      WarnSpecs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecsA_25, WarnSpecsB_27);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_28, &OoMErrSpecs_29);
      {
        Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (OoMErrSpecs_29));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (WarnSpecs_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
      }
    }
  }
  else
  {
    MR_String Functor_30;
    MR_Word Spec_31;
    MR_Tuple Var_39;
    MR_Word Var_40;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_30, GoalKind_8);
    Spec_31 = parse_tree__parse_goal_util__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_30);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
    *STATE_VARIABLE_VarSet_33 = STATE_VARIABLE_VarSet_0_32;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_catch_any_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_12;
  MR_Word ArrowTerm_13;
  MR_Word Var_28;
  MR_Word Var_29;

  if (succeeded)
  {
    TermA_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArrowTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word MaybeCatchAnyExpr_14;
    MR_Word STATE_VARIABLE_VarSet_1_30;

    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(ArrowTerm_13, ContextPieces_9, &MaybeCatchAnyExpr_14, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_1_30);
    if (((MR_tag((MR_Word) MaybeCatchAnyExpr_14)) == (MR_Integer) 0))
    {
      *MaybeGoal_10 = (MR_Word) (MaybeCatchAnyExpr_14);
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_1_30;
    }
    else
    {
      MR_Word CatchAnyExpr_15 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAnyExpr_14, 0))));
      MR_Word CatchWarnSpecs_16 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAnyExpr_14, 1))));
      MR_Word MaybeGoal0_19;
      MR_Word TermAArgs_17;
      MR_Word Var_31;
      MR_String Var_32;

      succeeded = ((MR_tag((MR_Word) TermA_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_Word) ((MR_hl_field(0, TermA_12, 0))));
        TermAArgs_17 = ((MR_Word) ((MR_hl_field(0, TermA_12, 1))));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, 0))));
          succeeded = (strcmp(Var_32, (MR_String) "catch") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (CatchAnyExpr_15));
        }
        parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_17, Var_33, Context_8, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_1_30, STATE_VARIABLE_VarSet_27);
      }
      else
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (CatchAnyExpr_15));
        }
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_12, (MR_Word) ((MR_Unsigned) 0U), Var_36, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_1_30, STATE_VARIABLE_VarSet_27);
      }
      if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
      {
        MR_Tuple ErrWarnError0_22 = ((MR_Tuple) ((MR_hl_field(0, MaybeGoal0_19, 0))));
        MR_Tuple ErrWarnError_23;

        parse_tree__maybe_error__add_warns_to_err_warn_error_3_p_0(ErrWarnError0_22, CatchWarnSpecs_16, &ErrWarnError_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ErrWarnError_23));
        }
      }
      else
      {
        MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, 0))));
        MR_Word GoalWarnSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, 1))));
        MR_Word Var_38;

        Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CatchWarnSpecs_16, GoalWarnSpecs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_38));
        }
      }
    }
  }
  else
  {
    MR_Word Pieces_24;
    MR_Word Spec_25;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Tuple Var_79;
    MR_Word Var_80;

    Var_44 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[116])));
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[118])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[127])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_52);
    Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_43);
    {
      Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_catch_any\'/6"));
      MR_hl_field(0, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Pieces_24));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (Spec_25));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_79 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
    }
    *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_semicolon_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTermA_12;
  MR_Word SubGoalTermB_13;
  MR_Word Var_47;
  MR_Word Var_48;

  if (succeeded)
  {
    SubGoalTermA_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_13 = ((MR_Word) ((MR_hl_field(1, Var_47, 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, 1))));
      succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word CondGoalTerm_14;
    MR_Word ThenGoalTerm_15;
    MR_Word Var_49;
    MR_String Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

    succeeded = ((MR_tag((MR_Word) SubGoalTermA_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_12, 0))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_12, 1))));
      succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_50 = ((MR_String) ((MR_hl_field(0, Var_49, 0))));
        succeeded = (strcmp(Var_50, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondGoalTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_51, 0))));
            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, 1))));
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_52, 0))));
              Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, 1))));
              succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word STATE_VARIABLE_VarSet_1_54;
      MR_Word STATE_VARIABLE_VarSet_2_55;
      MR_Word Vars_21;
      MR_Word StateVars_22;
      MR_Word CondGoal_23;
      MR_Word CondWarnSpecs_24;
      MR_Word ThenGoal_25;
      MR_Word ThenWarnSpecs_26;
      MR_Word ElseGoal_27;
      MR_Word ElseWarnSpecs_28;

      parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_14, ContextPieces_9, &MaybeCondGoal_18, STATE_VARIABLE_VarSet_0_45, &STATE_VARIABLE_VarSet_1_54);
      parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_15, ContextPieces_9, &MaybeThenGoal_19, STATE_VARIABLE_VarSet_1_54, &STATE_VARIABLE_VarSet_2_55);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_13, ContextPieces_9, &MaybeElseGoal_20, STATE_VARIABLE_VarSet_2_55, STATE_VARIABLE_VarSet_46);
      succeeded = ((MR_tag((MR_Word) MaybeCondGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        Vars_21 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 0))));
        StateVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 1))));
        CondGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 2))));
        CondWarnSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, 3))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, 0))));
          ThenWarnSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, 1))));
          succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            ElseGoal_27 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, 0))));
            ElseWarnSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal_29;
        MR_Word WarnSpecs_30;
        MR_Word Var_57;

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
        Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ThenWarnSpecs_26, ElseWarnSpecs_28);
        WarnSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CondWarnSpecs_24, Var_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_30));
        }
      }
      else
      {
        MR_Word CondErrSpecs_31;
        MR_Word ThenErrSpecs_32;
        MR_Word ElseErrSpecs_33;
        MR_Word ErrSpecs_34;
        MR_Word OoMErrSpecs_35;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Tuple Var_60;
        MR_Word CondWarnSpecs_76;
        MR_Word ThenWarnSpecs_77;
        MR_Word ElseWarnSpecs_78;
        MR_Word WarnSpecs_79;

        parse_tree__maybe_error__get_all_errors_warnings4_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_18, &CondErrSpecs_31, &CondWarnSpecs_76);
        parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_19, &ThenErrSpecs_32, &ThenWarnSpecs_77);
        parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_20, &ElseErrSpecs_33, &ElseWarnSpecs_78);
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ThenErrSpecs_32, ElseErrSpecs_33);
        ErrSpecs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CondErrSpecs_31, Var_58);
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ThenWarnSpecs_77, ElseWarnSpecs_78);
        WarnSpecs_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CondWarnSpecs_76, Var_59);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_34, &OoMErrSpecs_35);
        {
          Var_60 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (OoMErrSpecs_35));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (WarnSpecs_79));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
        }
      }
    }
    else
    {
      MR_Word DisjunctsCord_36;
      MR_Word Var_61;
      MR_Word WarnSpecs_83;
      MR_Word ErrSpecs_84;

      Var_61 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
      parse_tree__parse_goal__parse_goal_disjunction_11_p_0(SubGoalTermA_12, SubGoalTermB_13, ContextPieces_9, Var_61, &DisjunctsCord_36, (MR_Word) ((MR_Unsigned) 0U), &ErrSpecs_84, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_83, STATE_VARIABLE_VarSet_0_45, STATE_VARIABLE_VarSet_46);
      if ((ErrSpecs_84 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Disjuncts_37;
        MR_Word Disjunct1_39;
        MR_Word Disjunct2_40;
        MR_Word Disjuncts3plus_41;
        MR_Word Goal_80;

        Disjuncts_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), DisjunctsCord_36);
        if ((Disjuncts_37 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_semicolon\'/6", (MR_String) "less than two disjuncts");
            return;
          }
        else
        {
          MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, Disjuncts_37, 1))));
          MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, Disjuncts_37, 0))));

          if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_semicolon\'/6", (MR_String) "less than two disjuncts");
              return;
            }
          else
          {
            Disjunct1_39 = Var_96;
            Disjunct2_40 = ((MR_Word) ((MR_hl_field(1, Var_95, 0))));
            Disjuncts3plus_41 = ((MR_Word) ((MR_hl_field(1, Var_95, 1))));
          }
        }
        {
          Goal_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_80, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Goal_80, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_80, 2) = ((MR_Box) (Disjunct1_39));
          MR_hl_field(3, Goal_80, 3) = ((MR_Box) (Disjunct2_40));
          MR_hl_field(3, Goal_80, 4) = ((MR_Box) (Disjuncts3plus_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_80));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_83));
        }
      }
      else
      {
        MR_Word HeadSpec_42 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_84, 0))));
        MR_Word TailSpecs_43 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_84, 1))));
        MR_Tuple Var_69;
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (HeadSpec_42));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (TailSpecs_43));
        }
        {
          Var_69 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(0, Var_69, 1) = ((MR_Box) (WarnSpecs_83));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
        }
      }
    }
  }
  else
  {
    MR_Word Spec_44;
    MR_Tuple Var_72;
    MR_Word Var_73;

    Spec_44 = parse_tree__parse_goal_util__should_have_two_goals_infix_3_f_0(ContextPieces_9, Context_8, (MR_String) ";");
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
    *STATE_VARIABLE_VarSet_46 = STATE_VARIABLE_VarSet_0_45;
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
    SubGoalTermA_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_16 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_17;
    MR_Word ErrSpecs_18;
    MR_Word WarnSpecs_19;
    MR_Word Var_31;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_goal__parse_goal_conjunction_12_p_0(Functor_14, SubGoalTermA_15, SubGoalTermB_16, ContextPieces_11, Var_31, &ConjunctsCord_17, (MR_Word) ((MR_Unsigned) 0U), &ErrSpecs_18, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_19, STATE_VARIABLE_VarSet_0_27, STATE_VARIABLE_VarSet_28);
    if ((ErrSpecs_18 == (MR_Word) ((MR_Unsigned) 0U)))
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
        Conjunct1_21 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, 0))));
        Conjuncts2plus_22 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_19));
      }
    }
    else
    {
      MR_Word HeadSpec_24 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_18, 0))));
      MR_Word TailSpecs_25 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_18, 1))));
      MR_Tuple Var_37;
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (HeadSpec_24));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (TailSpecs_25));
      }
      {
        Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (WarnSpecs_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
  else
  {
    MR_Word Spec_26;
    MR_Tuple Var_39;
    MR_Word Var_40;

    Spec_26 = parse_tree__parse_goal_util__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_14);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
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
    SubGoalTermA_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_16 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_17;
    MR_Word ErrSpecs_18;
    MR_Word WarnSpecs_19;
    MR_Word Var_31;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_goal__parse_goal_conjunction_12_p_0(Functor_14, SubGoalTermA_15, SubGoalTermB_16, ContextPieces_11, Var_31, &ConjunctsCord_17, (MR_Word) ((MR_Unsigned) 0U), &ErrSpecs_18, (MR_Word) ((MR_Unsigned) 0U), &WarnSpecs_19, STATE_VARIABLE_VarSet_0_27, STATE_VARIABLE_VarSet_28);
    if ((ErrSpecs_18 == (MR_Word) ((MR_Unsigned) 0U)))
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
        Conjunct1_21 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, 0))));
        Conjuncts2plus_22 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_19));
      }
    }
    else
    {
      MR_Word HeadSpec_24 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_18, 0))));
      MR_Word TailSpecs_25 = ((MR_Word) ((MR_hl_field(1, ErrSpecs_18, 1))));
      MR_Tuple Var_37;
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (HeadSpec_24));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (TailSpecs_25));
      }
      {
        Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (WarnSpecs_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
  else
  {
    MR_Word Spec_26;
    MR_Tuple Var_39;
    MR_Word Var_40;

    Spec_26 = parse_tree__parse_goal_util__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_14);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
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
  MR_Word conv1_HeadVar__2_90;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__723__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_90);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_90));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_84;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__722__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_84);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_84));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0(
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
  MR_Word QuantType_15;
  MR_Word VarsTailPieces_16;
  MR_Word QVarsTerm_17;
  MR_Word SubGoalTerm_18;
  MR_Word Var_64;
  MR_Word Var_65;

  switch (GoalKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 10:
      {
        Functor_14 = (MR_String) "all";
        QuantType_15 = (MR_Integer) 1;
        VarsTailPieces_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[39]));
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
    QVarsTerm_17 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_64 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_64, 0))));
      Var_65 = ((MR_Word) ((MR_hl_field(1, Var_64, 1))));
      succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_19;
    MR_Word VarsContextPieces_20;
    MR_Word MaybeVars_21;
    MR_Word MaybeSubGoal_22;
    MR_Word Var_66;
    MR_Word Vars0_23;
    MR_Word StateVars0_24;
    MR_Word SubGoal_25;
    MR_Word SubGoalWarnSpecs_26;
    MR_Word Var_68;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_40, &GenericVarSet_19);
    Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsTailPieces_16);
    VarsContextPieces_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11, Var_66);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_17, GenericVarSet_19, VarsContextPieces_20, &MaybeVars_21);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_18, ContextPieces_11, &MaybeSubGoal_22, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41);
    succeeded = ((MR_tag((MR_Word) MaybeVars_21)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_68 = ((MR_Word) ((MR_hl_field(1, MaybeVars_21, 0))));
      Vars0_23 = ((MR_Word) ((MR_hl_field(0, Var_68, 0))));
      StateVars0_24 = ((MR_Word) ((MR_hl_field(0, Var_68, 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_22, 0))));
        SubGoalWarnSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_22, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_26));
      }
    }
    else
    {
      MR_Word VarErrSpecs_35;
      MR_Word SubGoalErrSpecs_36;
      MR_Word ErrSpecs_37;
      MR_Word OoMErrSpecs_38;
      MR_Tuple Var_73;
      MR_Word SubGoalWarnSpecs_79;

      VarErrSpecs_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_21);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_22, &SubGoalErrSpecs_36, &SubGoalWarnSpecs_79);
      ErrSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_35, SubGoalErrSpecs_36);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_37, &OoMErrSpecs_38);
      {
        Var_73 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_73, 0) = ((MR_Box) (OoMErrSpecs_38));
        MR_hl_field(0, Var_73, 1) = ((MR_Box) (SubGoalWarnSpecs_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
      }
    }
  }
  else
  {
    MR_Word Spec_39;
    MR_Tuple Var_75;
    MR_Word Var_76;

    Spec_39 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_14);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_76, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    SubGoalTerm_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
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
      MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_15, 0))));
      MR_Word SubGoalWarnSpecs_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_15, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_17));
      }
    }
  }
  else
  {
    MR_String Functor_20;
    MR_Word Spec_21;
    MR_Tuple Var_26;
    MR_Word Var_27;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_20, GoalKind_8);
    Spec_21 = parse_tree__parse_goal_util__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_20);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45)
{
  MR_bool succeeded;
  MR_String Functor_14;
  MR_Word WarningsTerm_15;
  MR_Word SubGoalTerm_16;
  MR_Word Var_46;
  MR_Word Var_47;

  parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_14, GoalKind_8);
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    WarningsTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_17;
    MR_Word MaybeWarnings_18;
    MR_Word MaybeSubGoal_19;
    MR_Word Warnings_20;
    MR_Word WarningsWarnSpecs_21;
    MR_Word SubGoal_22;
    MR_Word SubGoalWarnSpecs_23;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_44, &GenericVarSet_17);
    parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_17, WarningsTerm_15, Functor_14, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_18);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_16, ContextPieces_11, &MaybeSubGoal_19, STATE_VARIABLE_VarSet_0_44, STATE_VARIABLE_VarSet_45);
    succeeded = ((MR_tag((MR_Word) MaybeWarnings_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Warnings_20 = ((MR_Word) ((MR_hl_field(1, MaybeWarnings_18, 0))));
      WarningsWarnSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeWarnings_18, 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_19, 0))));
        SubGoalWarnSpecs_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_19, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word WarnSpecs_24;
      MR_Word WarningsContext_25;
      MR_Word WarningsBag_26;
      MR_Word WarningsCounts_27;
      MR_Word NonDuplicateWarnings_28;
      MR_Word DuplicateErrSpecs_29;
      MR_Word Var_50;

      WarnSpecs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarningsWarnSpecs_21, SubGoalWarnSpecs_23);
      WarningsContext_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_15);
      Var_50 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
      mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_20, Var_50, &WarningsBag_26);
      mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_26, &WarningsCounts_27);
      parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_25, ContextPieces_11, WarningsCounts_27, &NonDuplicateWarnings_28, &DuplicateErrSpecs_29);
      if ((DuplicateErrSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((NonDuplicateWarnings_28 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((WarningsWarnSpecs_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_33;
            MR_Word Spec_34;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Tuple Var_85;
            MR_Word Var_86;

            Var_51 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11);
            {
              Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_65, 0) = ((MR_Box) (Functor_14));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[30])));
            }
            Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
            Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[34])));
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
            Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_70);
            Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[28])), Var_62);
            Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_52);
            {
              Spec_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_disable_warnings\'/7"));
              MR_hl_field(0, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_34, 3) = ((MR_Box) (WarningsContext_25));
              MR_hl_field(0, Spec_34, 4) = ((MR_Box) (Pieces_33));
            }
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_86, 0) = ((MR_Box) (Spec_34));
              MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_85 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(0, Var_85, 1) = ((MR_Box) (WarnSpecs_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeGoal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SubGoal_22));
              MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_24));
            }
        else
        {
          MR_Word HeadWarning_30 = ((MR_Word) ((MR_hl_field(1, NonDuplicateWarnings_28, 0))));
          MR_Word TailWarnings_31 = ((MR_Word) ((MR_hl_field(1, NonDuplicateWarnings_28, 1))));
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
            MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_24));
          }
        }
      else
      {
        MR_Word DupHeadSpec_37 = ((MR_Word) ((MR_hl_field(1, DuplicateErrSpecs_29, 0))));
        MR_Word DupTailSpecs_38 = ((MR_Word) ((MR_hl_field(1, DuplicateErrSpecs_29, 1))));
        MR_Word OoMErrSpecs_39;
        MR_Tuple Var_88;

        {
          OoMErrSpecs_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OoMErrSpecs_39, 0) = ((MR_Box) (DupHeadSpec_37));
          MR_hl_field(0, OoMErrSpecs_39, 1) = ((MR_Box) (DupTailSpecs_38));
        }
        {
          Var_88 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_88, 0) = ((MR_Box) (OoMErrSpecs_39));
          MR_hl_field(0, Var_88, 1) = ((MR_Box) (WarnSpecs_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
        }
      }
    }
    else
    {
      MR_Word WarningErrSpecs_40;
      MR_Word WarningWarnSpecs_41;
      MR_Word SubGoalErrSpecs_42;
      MR_Word ErrSpecs_43;
      MR_Tuple Var_89;
      MR_Word SubGoalWarnSpecs_95;
      MR_Word WarnSpecs_96;
      MR_Word OoMErrSpecs_97;

      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_18, &WarningErrSpecs_40, &WarningWarnSpecs_41);
      parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_19, &SubGoalErrSpecs_42, &SubGoalWarnSpecs_95);
      ErrSpecs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), WarningErrSpecs_40, SubGoalErrSpecs_42);
      WarnSpecs_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarningWarnSpecs_41, SubGoalWarnSpecs_95);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_43, &OoMErrSpecs_97);
      {
        Var_89 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_89, 0) = ((MR_Box) (OoMErrSpecs_97));
        MR_hl_field(0, Var_89, 1) = ((MR_Box) (WarnSpecs_96));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_89));
      }
    }
  }
  else
  {
    MR_Tuple Var_91;
    MR_Word Var_92;
    MR_Word Spec_98;

    Spec_98 = parse_tree__parse_goal_util__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_14);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (Spec_98));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_91 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
    }
    *STATE_VARIABLE_VarSet_45 = STATE_VARIABLE_VarSet_0_44;
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
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
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
      MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 0))));
      MR_Word SubGoalWarnSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, 1))));
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
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarnSpecs_18));
      }
    }
  }
  else
  {
    MR_String Functor_21;
    MR_Word Spec_22;
    MR_Tuple Var_27;
    MR_Word Var_28;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_21, GoalKind_8);
    Spec_22 = parse_tree__parse_goal_util__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_21);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeGoal0_16;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeGoal0_16, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    parse_tree__parse_goal_util__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_15, Purity_14, MaybeGoal0_16, MaybeGoal_12);
  }
  else
  {
    MR_String Functor_17;
    MR_Word Spec_18;
    MR_Tuple Var_23;
    MR_Word Var_24;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_17, GoalKind_8);
    Spec_18 = parse_tree__parse_goal_util__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word conv1_HeadVar__2_67;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__136__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_67);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_67));
}

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_61;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__135__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_61);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_61));
}

void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0(
  MR_Word Term_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVarsAndGoal_8,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word MaybeVars_16;
  MR_Word GoalTerm_17;
  MR_Word MaybeGoal_18;
  MR_Word VarsTerm_10;
  MR_Word SubGoalTerm_11;
  MR_Word Var_32;
  MR_String Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Vars0_19;
  MR_Word StateVars0_20;
  MR_Word Goal_21;
  MR_Word SubGoalWarnSpecs_22;
  MR_Word Var_53;

  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, 0))));
      succeeded = (strcmp(Var_33, (MR_String) "some") == 0);
      if (succeeded)
      {
        succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarsTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubGoalTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
            succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_13;
    MR_Word VarsContextPieces_15;
    MR_Word Var_48;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_30, &GenericVarSet_13);
    Var_48 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[22])));
    VarsContextPieces_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_48);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_10, GenericVarSet_13, VarsContextPieces_15, &MaybeVars_16);
    GoalTerm_17 = SubGoalTerm_11;
  }
  else
  {
    MaybeVars_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[1]));
    GoalTerm_17 = Term_6;
  }
  parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_17, ContextPieces_7, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
  succeeded = ((MR_tag((MR_Word) MaybeVars_16)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_53 = ((MR_Word) ((MR_hl_field(1, MaybeVars_16, 0))));
    Vars0_19 = ((MR_Word) ((MR_hl_field(0, Var_53, 0))));
    StateVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_53, 1))));
    succeeded = ((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Goal_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, 0))));
      SubGoalWarnSpecs_22 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, 1))));
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
      MR_hl_field(1, base, 3) = ((MR_Box) (SubGoalWarnSpecs_22));
    }
  }
  else
  {
    MR_Word VarErrSpecs_25;
    MR_Word GoalErrSpecs_26;
    MR_Word GoalWarnSpecs_27;
    MR_Word ErrSpecs_28;
    MR_Word OoMErrSpecs_29;
    MR_Tuple Var_56;

    VarErrSpecs_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_16);
    parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_18, &GoalErrSpecs_26, &GoalWarnSpecs_27);
    ErrSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), VarErrSpecs_25, GoalErrSpecs_26);
    mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ErrSpecs_28, &OoMErrSpecs_29);
    {
      Var_56 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (OoMErrSpecs_29));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (GoalWarnSpecs_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarsAndGoal_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Word * MaybeGoal_8)
{
  MR_bool succeeded = (ArgTerms_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Spec_16;
  MR_Tuple Var_113;
  MR_Word Var_114;
  MR_Word ThenGoalTerm_10;
  MR_Word ThenContext_11;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
        ThenContext_11 = ((MR_Word) ((MR_hl_field(0, Var_17, 2))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, 0))));
          succeeded = (strcmp(Var_19, (MR_String) "then") == 0);
          if (succeeded)
          {
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
              succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ThenGoalTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
                Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
                succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SemiColonContext_14;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    succeeded = ((MR_tag((MR_Word) ThenGoalTerm_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_10, 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_10, 1))));
      SemiColonContext_14 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_10, 2))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
        succeeded = (strcmp(Var_25, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_15;
      MR_Word Var_33;
      MR_Word Var_34;

      Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[78])));
      Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_33);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (SemiColonContext_14));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
    }
    else
    {
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Pieces_117;

      Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[83])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Pieces_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_61);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (ThenContext_11));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_117));
      }
    }
  }
  else
  {
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Pieces_118;

    Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[86])));
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Pieces_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[41])), Var_89);
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/4"));
      MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_118));
    }
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_113 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MaybeGoal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_equal_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA0_11;
  MR_Word TermB0_12;
  MR_Word Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    TermA0_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB0_12 = ((MR_Word) ((MR_hl_field(1, Var_30, 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word TermA_13;
    MR_Word TermB_14;
    MR_Word Goal_15;
    MR_Word WarnSpecs_28;
    MR_Word Var_18;
    MR_String FieldName_21;
    MR_Word TermAA_16;
    MR_Word TermAB_17;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_107;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_11, &TermA_13);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_12, &TermB_14);
    {
      Goal_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_15, 0) = ((MR_Box) (Context_8));
      MR_hl_field(0, Goal_15, 1) = ((MR_Box) (TermA_13));
      MR_hl_field(0, Goal_15, 2) = ((MR_Box) (TermB_14));
      MR_hl_field(0, Goal_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    succeeded = ((MR_tag((MR_Word) TermA_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(0, TermA_13, 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, TermA_13, 1))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, TermA_13, 2))));
      succeeded = mercury__term_context____Unify____term_context_0_0(Context_8, Var_107);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_34 = ((MR_String) ((MR_hl_field(0, Var_33, 0))));
          succeeded = (strcmp(Var_34, (MR_String) "^") == 0);
          if (succeeded)
          {
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TermAA_16 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
              Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
              succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermAB_17 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
                Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
                succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) TermAA_16)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_38 = ((MR_Word) ((MR_hl_field(0, TermAA_16, 0))));
                    Var_40 = ((MR_Word) ((MR_hl_field(0, TermAA_16, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, 0))));
                      succeeded = (strcmp(Var_39, (MR_String) "!") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, 0))));
                          Var_42 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
                          succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Var_18 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
                              succeeded = ((MR_tag((MR_Word) TermAB_17)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_43 = ((MR_Word) ((MR_hl_field(0, TermAB_17, 0))));
                                Var_44 = ((MR_Word) ((MR_hl_field(0, TermAB_17, 1))));
                                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
                                  if (succeeded)
                                    FieldName_21 = ((MR_String) ((MR_hl_field(0, Var_43, 0))));
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
      }
    }
    if (succeeded)
    {
      MR_String VarName_23;
      MR_String ExprStr_24;
      MR_Word Pieces_25;
      MR_Word WarningSpec_27;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_78;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_String Var_109;
      MR_String Var_110;

      VarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Var_18);
      Var_109 = mercury__string__f_43_43_2_f_0((MR_String) " ^ ", FieldName_21);
      Var_110 = mercury__string__f_43_43_2_f_0(VarName_23, Var_109);
      ExprStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_110);
      {
        Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_59, 1) = ((MR_Box) (ExprStr_24));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_57 = parse_tree__error_spec__color_as_subject_1_f_0(Var_58);
      Var_70 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[146])));
      Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[150])));
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[148])), Var_83);
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_78);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[144])), Var_69);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_61);
      Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[140])), Var_56);
      {
        WarningSpec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarningSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_equal\'/5"));
        MR_hl_field(0, WarningSpec_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[4])));
        MR_hl_field(0, WarningSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, WarningSpec_27, 3) = ((MR_Box) (Context_8));
        MR_hl_field(0, WarningSpec_27, 4) = ((MR_Box) (Pieces_25));
      }
      {
        WarnSpecs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WarnSpecs_28, 0) = ((MR_Box) (WarningSpec_27));
        MR_hl_field(1, WarnSpecs_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      WarnSpecs_28 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_28));
    }
  }
  else
  {
    MR_Word Spec_29;
    MR_Tuple Var_100;
    MR_Word Var_101;

    Spec_29 = parse_tree__parse_goal_util__should_have_two_terms_infix_3_f_0(ContextPieces_9, Context_8, (MR_String) "=");
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(0, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_100 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_5_p_0(
  MR_Word GoalKind_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10)
{
  MR_Word Goal_11;

  switch (GoalKind_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 46:
      {
        Goal_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Goal_11, 1) = ((MR_Box) (Context_8));
      }
      break;
    case (MR_Integer) 45:
      {
        Goal_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Goal_11, 1) = ((MR_Box) (Context_8));
      }
      break;
  }
  if ((ArgTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_String Functor_14;
    MR_Word Spec_15;
    MR_Tuple Var_17;
    MR_Word Var_18;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_14, GoalKind_6);
    Spec_15 = parse_tree__parse_goal_util__should_have_no_args_3_f_0(ContextPieces_9, Context_8, Functor_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
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
  MR_bool succeeded;
  MR_Word PlainVars_11 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, 0))));
  MR_Word StateVars_12 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, 1))));
  MR_Word DotVars_13 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, 2))));
  MR_Word ColonVars_14 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, 3))));
  MR_Word Context_15;
  MR_Word MaybeStateVars_16;
  MR_Word MaybeColonVars_21;
  MR_Word MaybeMaybePlainVar_26;
  MR_Word MaybeMaybeDotVar_33;
  MR_Word MaybePlainVar_42;
  MR_Word MaybeDotVar_43;

  Context_15 = parse_tree__prog_item__get_goal_context_1_f_0(Goal_7);
  if ((StateVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeStateVars_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[5]));
  else
  {
    MR_Word StatePieces_19;
    MR_Word StateSpec_20;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_83;

    Var_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (ConstructName_9));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    Var_60 = parse_tree__error_spec__color_as_subject_1_f_0(Var_61);
    Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[153])));
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[155])));
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_59);
    StatePieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_54);
    {
      StateSpec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StateSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
      MR_hl_field(0, StateSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, StateSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, StateSpec_20, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, StateSpec_20, 4) = ((MR_Box) (StatePieces_19));
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_83, 0) = ((MR_Box) (StateSpec_20));
      MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeStateVars_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeStateVars_16, 0) = ((MR_Box) (Var_83));
    }
  }
  if ((ColonVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeColonVars_21 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[5]));
  else
  {
    MR_Word ColonPieces_24;
    MR_Word ColonSpec_25;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_116;

    Var_86 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_98, 1) = ((MR_Box) (ConstructName_9));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
    }
    Var_93 = parse_tree__error_spec__color_as_subject_1_f_0(Var_94);
    Var_101 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[153])));
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[157])));
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_100);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_92);
    ColonPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_87);
    {
      ColonSpec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ColonSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
      MR_hl_field(0, ColonSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ColonSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, ColonSpec_25, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, ColonSpec_25, 4) = ((MR_Box) (ColonPieces_24));
    }
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_116, 0) = ((MR_Box) (ColonSpec_25));
      MR_hl_field(0, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeColonVars_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeColonVars_21, 0) = ((MR_Box) (Var_116));
    }
  }
  if ((PlainVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeMaybePlainVar_26 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[6]));
  else
  {
    MR_Word Var_271 = ((MR_Word) ((MR_hl_field(1, PlainVars_11, 1))));
    MR_Word Var_272 = ((MR_Word) ((MR_hl_field(1, PlainVars_11, 0))));

    if ((Var_271 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_120;

      {
        Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_272));
      }
      {
        MaybeMaybePlainVar_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_120));
      }
    }
    else
    {
      MR_Word PlainPieces_31;
      MR_Word PlainSpec_32;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_152;

      Var_122 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_134, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
      }
      Var_129 = parse_tree__error_spec__color_as_subject_1_f_0(Var_130);
      Var_137 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[153])));
      Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[159])));
      Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, Var_136);
      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_128);
      PlainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, Var_123);
      {
        PlainSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PlainSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(0, PlainSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, PlainSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, PlainSpec_32, 3) = ((MR_Box) (Context_15));
        MR_hl_field(0, PlainSpec_32, 4) = ((MR_Box) (PlainPieces_31));
      }
      {
        Var_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_152, 0) = ((MR_Box) (PlainSpec_32));
        MR_hl_field(0, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybePlainVar_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_152));
      }
    }
  }
  if ((DotVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeMaybeDotVar_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[6]));
  else
  {
    MR_Word Var_273 = ((MR_Word) ((MR_hl_field(1, DotVars_13, 1))));
    MR_Word Var_274 = ((MR_Word) ((MR_hl_field(1, DotVars_13, 0))));

    if ((Var_273 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_156;

      {
        Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_274));
      }
      {
        MaybeMaybeDotVar_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_156));
      }
    }
    else
    {
      MR_Word DotPieces_38;
      MR_Word DotSpec_39;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_188;

      Var_158 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_170, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (Var_170));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
        MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
      }
      Var_165 = parse_tree__error_spec__color_as_subject_1_f_0(Var_166);
      Var_173 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[153])));
      Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_173, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[159])));
      Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_165, Var_172);
      Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_164);
      DotPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_158, Var_159);
      {
        DotSpec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DotSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(0, DotSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, DotSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, DotSpec_39, 3) = ((MR_Box) (Context_15));
        MR_hl_field(0, DotSpec_39, 4) = ((MR_Box) (DotPieces_38));
      }
      {
        Var_188 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_188, 0) = ((MR_Box) (DotSpec_39));
        MR_hl_field(0, Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeDotVar_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_188));
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
        MaybePlainVar_42 = ((MR_Word) ((MR_hl_field(1, MaybeMaybePlainVar_26, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMaybeDotVar_33)) == (MR_Integer) 1);
        if (succeeded)
          MaybeDotVar_43 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDotVar_33, 0))));
      }
    }
  }
  if (succeeded)
    if ((MaybePlainVar_42 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_44;
        MR_Word Spec_45;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_198;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_219;

        Var_190 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
        {
          Var_202 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_202, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_202, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_201, 0) = ((MR_Box) (Var_202));
          MR_hl_field(1, Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_198, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
          MR_hl_field(1, Var_198, 1) = ((MR_Box) (Var_201));
        }
        Var_197 = parse_tree__error_spec__color_as_subject_1_f_0(Var_198);
        Var_205 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[161])));
        Var_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_205, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[163])));
        Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_197, Var_204);
        Var_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_196);
        Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_190, Var_191);
        {
          Spec_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(0, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_45, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, Spec_45, 4) = ((MR_Box) (Pieces_44));
        }
        {
          Var_219 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_219, 0) = ((MR_Box) (Spec_45));
          MR_hl_field(0, Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePODVar_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_219));
        }
      }
      else
      {
        MR_Word DotVar_47 = ((MR_Word) ((MR_hl_field(1, MaybeDotVar_43, 0))));
        MR_Word Var_222;

        {
          Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_222, 0) = ((MR_Box) (DotVar_47));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePODVar_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_222));
        }
      }
    else
    {
      MR_Word Var_275 = ((MR_Word) ((MR_hl_field(1, MaybePlainVar_42, 0))));

      if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_221;

        {
          Var_221 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_221, 0) = ((MR_Box) (Var_275));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePODVar_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_221));
        }
      }
      else
      {
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_252;
        MR_Word Pieces_260;
        MR_Word Spec_261;

        Var_223 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
        {
          Var_235 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_235, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_235, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_234, 0) = ((MR_Box) (Var_235));
          MR_hl_field(1, Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_231, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
          MR_hl_field(1, Var_231, 1) = ((MR_Box) (Var_234));
        }
        Var_230 = parse_tree__error_spec__color_as_subject_1_f_0(Var_231);
        Var_238 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[153])));
        Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_238, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[159])));
        Var_229 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_230, Var_237);
        Var_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_229);
        Pieces_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_223, Var_224);
        {
          Spec_261 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_261, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(0, Spec_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_261, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_261, 3) = ((MR_Box) (Context_15));
          MR_hl_field(0, Spec_261, 4) = ((MR_Box) (Pieces_260));
        }
        {
          Var_252 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_252, 0) = ((MR_Box) (Spec_261));
          MR_hl_field(0, Var_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePODVar_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_252));
        }
      }
    }
  else
  {
    MR_Word Specs_50;
    MR_Word OoMSpecs_51;
    MR_Word Var_254;
    MR_Word Var_255;
    MR_Word Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;

    Var_254 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeStateVars_16);
    Var_256 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeColonVars_21);
    Var_258 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), MaybeMaybePlainVar_26);
    Var_259 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), MaybeMaybeDotVar_33);
    Var_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_258, Var_259);
    Var_255 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_256, Var_257);
    Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_254, Var_255);
    mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_50, &OoMSpecs_51);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePODVar_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_51));
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
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
    succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
        succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[11]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
        succeeded = (strcmp(Var_27, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
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
        HeadComponent_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponent_13, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, 0))));
      }
      if (succeeded)
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (HeadComponent_15));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word OoMSpecs_18;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[1]), MaybeHeadComponent_13);
        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_32, Var_33);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_17, &OoMSpecs_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_18));
        }
      }
    }
    else
    {
      MR_String TermStr_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_63;
      MR_Word Var_64;

      TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_6);
      Var_39 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[385])));
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (TermStr_19));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_51);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_49);
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_44);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_38);
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_params\'/4"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_63));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
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
  MR_Word conv0_HeadVar__2_172;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__3000__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_172);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_172));
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
    MR_Word Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
    MR_Word SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Term_6, 2))));
    MR_String Atom_12;

    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, 0))));
      succeeded = (strcmp(Atom_12, (MR_String) "outer") == 0);
      if (succeeded)
      {
        MR_Word MaybeComponentSubTerm_13;

        parse_tree__parse_goal__parse_atomic_subterm_5_p_0(VarSet_7, Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_13);
        if (((MR_tag((MR_Word) MaybeComponentSubTerm_13)) == (MR_Integer) 0))
          *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_13);
        else
        {
          MR_Word CompTerm_14 = ((MR_Word) ((MR_hl_field(1, MaybeComponentSubTerm_13, 0))));
          MR_Word Component_15;
          MR_Word Var_27;

          {
            Component_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Component_15, 0) = ((MR_Box) (CompTerm_14));
          }
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_27, 0) = ((MR_Box) (Component_15));
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
        succeeded = (strcmp(Atom_12, (MR_String) "inner") == 0);
        if (succeeded)
        {
          MR_Word MaybeComponentSubTerm_144;

          parse_tree__parse_goal__parse_atomic_subterm_5_p_0(VarSet_7, Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_144);
          if (((MR_tag((MR_Word) MaybeComponentSubTerm_144)) == (MR_Integer) 0))
            *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_144);
          else
          {
            MR_Word Var_28;
            MR_Word CompTerm_138 = ((MR_Word) ((MR_hl_field(1, MaybeComponentSubTerm_144, 0))));
            MR_Word Component_139;

            {
              Component_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Component_139, 0) = ((MR_Box) (CompTerm_138));
            }
            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_28, 0) = ((MR_Box) (Component_139));
              MR_hl_field(0, Var_28, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "vars") == 0);
          if (succeeded)
          {
            MR_Word SubTerm_17;
            MR_Word Var_29;

            succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_17 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word ContextPieces_18;
              MR_Word MaybeVars_19;

              ContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[391])));
              parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_17, VarSet_7, ContextPieces_18, &MaybeVars_19);
              if (((MR_tag((MR_Word) MaybeVars_19)) == (MR_Integer) 0))
                *MaybeComponentContext_8 = (MR_Word) (MaybeVars_19);
              else
              {
                MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(1, MaybeVars_19, 0))));
                MR_Word ProgVars_21;
                MR_Word Var_41;
                MR_Word Component_148;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[4]), Vars_20, &ProgVars_21);
                {
                  Component_148 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Component_148, 0) = ((MR_Box) (ProgVars_21));
                }
                {
                  Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_41, 0) = ((MR_Box) (Component_148));
                  MR_hl_field(0, Var_41, 1) = ((MR_Box) (Context_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
                }
              }
            }
            else
            {
              MR_Word Pieces_22;
              MR_Word Spec_23;
              MR_Word Var_42;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_63;

              {
                Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_46, 1) = ((MR_Box) (Atom_12));
              }
              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[26])));
                MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
              }
              Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[393])));
              Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[395])));
              Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_48);
              {
                Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
                MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_11));
                MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
              }
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (Spec_23));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
              }
            }
          }
          else
          {
            MR_Word Var_73;
            MR_Word Spec_157;

            {
              Spec_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
              MR_hl_field(0, Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(0, Spec_157, 3) = ((MR_Box) (Context_11));
              MR_hl_field(0, Spec_157, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[397])));
            }
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_73, 0) = ((MR_Box) (Spec_157));
              MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
            }
          }
        }
      }
    }
    else
    {
      MR_String TermStr_24;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_85;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_104;
      MR_Word Pieces_164;
      MR_Word Spec_165;

      TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_6);
      Var_80 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[399])));
      {
        Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_93, 1) = ((MR_Box) (TermStr_24));
      }
      {
        Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
        MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_91 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_92);
      Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_90);
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
      Pieces_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[291])), Var_79);
      {
        Spec_165 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_165, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
        MR_hl_field(0, Spec_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_165, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_165, 3) = ((MR_Box) (Context_11));
        MR_hl_field(0, Spec_165, 4) = ((MR_Box) (Pieces_164));
      }
      {
        Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_104, 0) = ((MR_Box) (Spec_165));
        MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
      }
    }
  }
  else
  {
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Pieces_166;
    MR_Word Spec_167;
    MR_String TermStr_168;

    TermStr_168 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_6);
    Var_111 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[399])));
    {
      Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_124, 1) = ((MR_Box) (TermStr_168));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_123);
    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_121);
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
    Pieces_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[291])), Var_110);
    Var_135 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
    {
      Spec_167 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_167, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
      MR_hl_field(0, Spec_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_167, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_167, 3) = ((MR_Box) (Var_135));
      MR_hl_field(0, Spec_167, 4) = ((MR_Box) (Pieces_166));
    }
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_136, 0) = ((MR_Box) (Spec_167));
      MR_hl_field(0, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_136));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subterm_5_p_0(
  MR_Word VarSet_6,
  MR_String Name_7,
  MR_Word ErrorTerm_8,
  MR_Word Term_9,
  MR_Word * MaybeComponentState_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word SubTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    MR_Word TermContext_13 = ((MR_Word) ((MR_hl_field(0, Term_9, 2))));
    MR_Word ComponentState_14;
    MR_Word Var_87;
    MR_Word Term_86;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_String Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (SubTerms_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Term_86 = ((MR_Word) ((MR_hl_field(1, SubTerms_12, 0))));
      Var_99 = ((MR_Word) ((MR_hl_field(1, SubTerms_12, 1))));
      succeeded = (Var_99 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Term_86)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_100 = ((MR_Word) ((MR_hl_field(0, Term_86, 0))));
          Var_102 = ((MR_Word) ((MR_hl_field(0, Term_86, 1))));
          succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_101 = ((MR_String) ((MR_hl_field(0, Var_100, 0))));
            succeeded = (strcmp(Var_101, (MR_String) "!") == 0);
            if (succeeded)
            {
              succeeded = (Var_102 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_103 = ((MR_Word) ((MR_hl_field(1, Var_102, 0))));
                Var_104 = ((MR_Word) ((MR_hl_field(1, Var_102, 1))));
                succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 1);
                  if (succeeded)
                    Var_87 = ((MR_Word) ((MR_hl_field(1, Var_103, 0))));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProgVar_90;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_87, &ProgVar_90);
      {
        ComponentState_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ComponentState_14, 0) = ((MR_Box) (ProgVar_90));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_28_109;
      MR_Word TypeCtorInfo_29_110;
      MR_Word TermA_91;
      MR_Word TermB_92;
      MR_Word VarA_93;
      MR_Word VarB_95;
      MR_Word ProgVarA_97;
      MR_Word ProgVarB_98;
      MR_Word Var_105;
      MR_Word Var_106;

      succeeded = (SubTerms_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermA_91 = ((MR_Word) ((MR_hl_field(1, SubTerms_12, 0))));
        Var_105 = ((MR_Word) ((MR_hl_field(1, SubTerms_12, 1))));
        succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermB_92 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
          Var_106 = ((MR_Word) ((MR_hl_field(1, Var_105, 1))));
          succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TermA_91)) == (MR_Integer) 1);
            if (succeeded)
            {
              VarA_93 = ((MR_Word) ((MR_hl_field(1, TermA_91, 0))));
              succeeded = ((MR_tag((MR_Word) TermB_92)) == (MR_Integer) 1);
              if (succeeded)
              {
                VarB_95 = ((MR_Word) ((MR_hl_field(1, TermB_92, 0))));
                TypeCtorInfo_28_109 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeCtorInfo_29_110 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_109, TypeCtorInfo_29_110, VarA_93, &ProgVarA_97);
                mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_109, TypeCtorInfo_29_110, VarB_95, &ProgVarB_98);
                {
                  ComponentState_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ComponentState_14, 0) = ((MR_Box) (ProgVarA_97));
                  MR_hl_field(1, ComponentState_14, 1) = ((MR_Box) (ProgVarB_98));
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
        *MaybeComponentState_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ComponentState_14));
      }
    else
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_47;

      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
      Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[202])));
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[403])));
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_24);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/5"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (TermContext_13));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentState_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
      }
    }
  }
  else
  {
    MR_String TermStr_19;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Pieces_81;
    MR_Word Spec_82;

    TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_9);
    Var_54 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[399])));
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (TermStr_19));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_64);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_59);
    Pieces_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[291])), Var_53);
    Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/5"));
      MR_hl_field(0, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_82, 3) = ((MR_Box) (Var_78));
      MR_hl_field(0, Spec_82, 4) = ((MR_Box) (Pieces_81));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (Spec_82));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentState_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_3_p_0(
  MR_Word ErrorTerm_4,
  MR_Word ComponentsContexts_5,
  MR_Word * MaybeParams_6)
{
  MR_Word MaybeOuter_7;
  MR_Word MaybeInner_8;
  MR_Word MaybeVars_9;
  MR_Word Specs_10;

  parse_tree__parse_goal__collect_atomic_params_9_p_0(ComponentsContexts_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeOuter_7, (MR_Word) ((MR_Unsigned) 0U), &MaybeInner_8, (MR_Word) ((MR_Unsigned) 0U), &MaybeVars_9, (MR_Word) ((MR_Unsigned) 0U), &Specs_10);
  if ((Specs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_11;

    Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_4);
    if ((MaybeOuter_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeInner_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_64;
        MR_Word Spec_70;

        {
          Spec_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params\'/3"));
          MR_hl_field(0, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_70, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_70, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[413])));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_64, 0) = ((MR_Box) (Spec_70));
          MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Spec_68;

        {
          Spec_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params\'/3"));
          MR_hl_field(0, Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_68, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_68, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[416])));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
        }
      }
    else
    {
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, MaybeOuter_7, 0))));

      if ((MaybeInner_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_16;
        MR_Word Var_35;

        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params\'/3"));
          MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_16, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[419])));
        }
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
        }
      }
      else
      {
        MR_Word Inner_13 = ((MR_Word) ((MR_hl_field(1, MaybeInner_8, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *MaybeParams_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, base, 1) = ((MR_Box) (Inner_13));
          MR_hl_field(1, base, 2) = ((MR_Box) (MaybeVars_9));
        }
      }
    }
  }
  else
  {
    MR_Word HeadSpec_18 = ((MR_Word) ((MR_hl_field(1, Specs_10, 0))));
    MR_Word TailSpecs_19 = ((MR_Word) ((MR_hl_field(1, Specs_10, 1))));
    MR_Word Var_66;

    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (HeadSpec_18));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (TailSpecs_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeParams_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__collect_atomic_params_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeOuter_0_2,
  MR_Word * STATE_VARIABLE_MaybeOuter_3,
  MR_Word STATE_VARIABLE_MaybeInner_0_4,
  MR_Word * STATE_VARIABLE_MaybeInner_5,
  MR_Word STATE_VARIABLE_MaybeVars_0_6,
  MR_Word * STATE_VARIABLE_MaybeVars_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_MaybeVars_7 = STATE_VARIABLE_MaybeVars_0_6;
      *STATE_VARIABLE_MaybeInner_5 = STATE_VARIABLE_MaybeInner_0_4;
      *STATE_VARIABLE_MaybeOuter_3 = STATE_VARIABLE_MaybeOuter_0_2;
    }
    else
    {
      MR_Word Component_22;
      MR_Word CompContext_23;
      MR_Word ComponentsContexts_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_MaybeOuter_1_46;
      MR_Word STATE_VARIABLE_Specs_1_55;
      MR_Word STATE_VARIABLE_MaybeInner_1_56;
      MR_Word STATE_VARIABLE_MaybeVars_1_66;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeOuter_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeInner_0_4;
      MR_Word next_value_of_STATE_VARIABLE_MaybeVars_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      Component_22 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
      CompContext_23 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
      switch (MR_tag((MR_Word) Component_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Inner_33 = ((MR_Word) ((MR_hl_field(0, Component_22, 0))));

            if ((STATE_VARIABLE_MaybeInner_0_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeInner_1_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeInner_1_56, 0) = ((MR_Box) (Inner_33));
              }
              STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_8;
            }
            else
            {
              MR_Word Spec_81;

              {
                Spec_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_atomic_params\'/9"));
                MR_hl_field(0, Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_81, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_81, 3) = ((MR_Box) (CompContext_23));
                MR_hl_field(0, Spec_81, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[421])));
              }
              {
                STATE_VARIABLE_Specs_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 0) = ((MR_Box) (Spec_81));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
              }
              STATE_VARIABLE_MaybeInner_1_56 = STATE_VARIABLE_MaybeInner_0_4;
            }
            STATE_VARIABLE_MaybeOuter_1_46 = STATE_VARIABLE_MaybeOuter_0_2;
            STATE_VARIABLE_MaybeVars_1_66 = STATE_VARIABLE_MaybeVars_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Outer_29 = ((MR_Word) ((MR_hl_field(1, Component_22, 0))));

            if ((STATE_VARIABLE_MaybeOuter_0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeOuter_1_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeOuter_1_46, 0) = ((MR_Box) (Outer_29));
              }
              STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_8;
            }
            else
            {
              MR_Word Spec_32;

              {
                Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_atomic_params\'/9"));
                MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_32, 3) = ((MR_Box) (CompContext_23));
                MR_hl_field(0, Spec_32, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[423])));
              }
              {
                STATE_VARIABLE_Specs_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 0) = ((MR_Box) (Spec_32));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
              }
              STATE_VARIABLE_MaybeOuter_1_46 = STATE_VARIABLE_MaybeOuter_0_2;
            }
            STATE_VARIABLE_MaybeInner_1_56 = STATE_VARIABLE_MaybeInner_0_4;
            STATE_VARIABLE_MaybeVars_1_66 = STATE_VARIABLE_MaybeVars_0_6;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Vars_35 = ((MR_Word) ((MR_hl_field(2, Component_22, 0))));

            if ((STATE_VARIABLE_MaybeVars_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeVars_1_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeVars_1_66, 0) = ((MR_Box) (Vars_35));
              }
              STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_8;
            }
            else
            {
              MR_Word Spec_87;

              {
                Spec_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_87, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_atomic_params\'/9"));
                MR_hl_field(0, Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_87, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_87, 3) = ((MR_Box) (CompContext_23));
                MR_hl_field(0, Spec_87, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[425])));
              }
              {
                STATE_VARIABLE_Specs_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 0) = ((MR_Box) (Spec_87));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_55, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
              }
              STATE_VARIABLE_MaybeVars_1_66 = STATE_VARIABLE_MaybeVars_0_6;
            }
            STATE_VARIABLE_MaybeOuter_1_46 = STATE_VARIABLE_MaybeOuter_0_2;
            STATE_VARIABLE_MaybeInner_1_56 = STATE_VARIABLE_MaybeInner_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_24;
      next_value_of_STATE_VARIABLE_MaybeOuter_0_2 = STATE_VARIABLE_MaybeOuter_1_46;
      next_value_of_STATE_VARIABLE_MaybeInner_0_4 = STATE_VARIABLE_MaybeInner_1_56;
      next_value_of_STATE_VARIABLE_MaybeVars_0_6 = STATE_VARIABLE_MaybeVars_1_66;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_55;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeOuter_0_2 = next_value_of_STATE_VARIABLE_MaybeOuter_0_2;
      STATE_VARIABLE_MaybeInner_0_4 = next_value_of_STATE_VARIABLE_MaybeInner_0_4;
      STATE_VARIABLE_MaybeVars_0_6 = next_value_of_STATE_VARIABLE_MaybeVars_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
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
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
        succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[8]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
        succeeded = (strcmp(Var_27, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
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
        HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponentContext_13, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, 0))));
      }
      if (succeeded)
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (HeadComponentContext_15));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word OoMSpecs_18;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[0]), MaybeHeadComponentContext_13);
        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_32, Var_33);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_17, &OoMSpecs_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_18));
        }
      }
    }
    else
    {
      MR_String TermStr_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_63;
      MR_Word Var_64;

      TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      Var_39 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[198])));
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (TermStr_19));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_51);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_49);
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_44);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_38);
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_params\'/4"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_63));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeCompiletime_6;

  parse_tree__parse_goal__parse_trace_compiletime_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCompiletime_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCompiletime_6));
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word MaybeComponentContextPrime_13;
  MR_Word Functor_9;
  MR_Word SubTerms_10;
  MR_Word Context_11;
  MR_String Atom_12;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Term_7, 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, 0))));
      // binary string jump switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 5;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(Atom_12, ((&parse_tree__parse_goal_vector_common_7[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&parse_tree__parse_goal_vector_common_7[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "compile_time", "compiletime"
                ;
                {
                  MR_Word SubTerm_51;
                  MR_Word Var_57;

                  succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    SubTerm_51 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 0))));
                    Var_57 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 1))));
                    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  if (succeeded)
                  {
                    MR_Word MaybeCompileTime_52;
                    MR_Word Var_58;

                    {
                      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[2]));
                      MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1));
                      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_58, 3) = ((MR_Box) (VarSet_5));
                    }
                    parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), Var_58, SubTerm_51, &MaybeCompileTime_52);
                    if (((MR_tag((MR_Word) MaybeCompileTime_52)) == (MR_Integer) 0))
                      MaybeComponentContextPrime_13 = (MR_Word) (MaybeCompileTime_52);
                    else
                    {
                      MR_Word CompileTime_53 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_52, 0))));
                      MR_Word Component_54;
                      MR_Word Var_59;

                      {
                        Component_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Component_54, 0) = ((MR_Box) (CompileTime_53));
                      }
                      {
                        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_59, 0) = ((MR_Box) (Component_54));
                        MR_hl_field(0, Var_59, 1) = ((MR_Box) (Context_11));
                      }
                      {
                        MaybeComponentContextPrime_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeComponentContextPrime_13, 0) = ((MR_Box) (Var_59));
                      }
                    }
                  }
                  else
                  {
                    MR_Word Pieces_55;
                    MR_Word Spec_56;
                    MR_Word Var_62;
                    MR_Word Var_63;
                    MR_Word Var_64;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Word Var_67;
                    MR_Word Var_73;

                    {
                      Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_65, 0) = ((MR_Box) (Atom_12));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
                    Var_67 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[202])));
                    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[206])));
                    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_66);
                    Pieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_62);
                    {
                      Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_compiletime\'/5"));
                      MR_hl_field(0, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                      MR_hl_field(0, Spec_56, 3) = ((MR_Box) (Context_11));
                      MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Pieces_55));
                    }
                    {
                      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_73, 0) = ((MR_Box) (Spec_56));
                      MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeComponentContextPrime_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, MaybeComponentContextPrime_13, 0) = ((MR_Box) (Var_73));
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "io"
                ;
                parse_tree__parse_goal__parse_trace_component_io_4_p_0(Atom_12, Context_11, SubTerms_10, &MaybeComponentContextPrime_13);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                // case "run_time", "runtime"
                ;
                parse_tree__parse_goal__parse_trace_component_runtime_5_p_0(VarSet_5, Atom_12, Context_11, SubTerms_10, &MaybeComponentContextPrime_13);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                // case "state"
                ;
                parse_tree__parse_goal__parse_trace_component_state_4_p_0(Atom_12, Context_11, SubTerms_10, &MaybeComponentContextPrime_13);
                succeeded = MR_TRUE;
              }
              break;
          }
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
  if (succeeded)
    *MaybeComponentContext_8 = MaybeComponentContextPrime_13;
  else
  {
    MR_String TermStr_14;
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_46;
    MR_Word Var_47;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
    Var_22 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[200])));
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_32);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_21);
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
      MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_state_4_p_0(
  MR_String Atom_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeComponentContext_8)
{
  MR_bool succeeded = (SubTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTermA_9;
  MR_Word SubTermB_10;
  MR_Word Var_31;
  MR_Word Var_32;

  if (succeeded)
  {
    SubTermA_9 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 1))));
    succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubTermB_10 = ((MR_Word) ((MR_hl_field(1, Var_31, 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
      succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word MaybeMutable_13;
    MR_Word MaybeVar_19;
    MR_String MutableName_11;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_16;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_String FinalMutable_22;
    MR_Word FinalVar_23;

    succeeded = ((MR_tag((MR_Word) SubTermA_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(0, SubTermA_9, 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, SubTermA_9, 1))));
      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
        if (succeeded)
          MutableName_11 = ((MR_String) ((MR_hl_field(0, Var_33, 0))));
      }
    }
    if (succeeded)
      {
        MaybeMutable_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMutable_13, 0) = ((MR_Box) (MutableName_11));
      }
    else
    {
      MR_Word MutablePieces_14;
      MR_Word MutableSpec_15;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_45, 0) = ((MR_Box) (Atom_5));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[151])));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
      }
      Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
      Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[219])));
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_47);
      MutablePieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_39);
      Var_62 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermA_9);
      {
        MutableSpec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MutableSpec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_state\'/4"));
        MR_hl_field(0, MutableSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, MutableSpec_15, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, MutableSpec_15, 3) = ((MR_Box) (Var_62));
        MR_hl_field(0, MutableSpec_15, 4) = ((MR_Box) (MutablePieces_14));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (MutableSpec_15));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMutable_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMutable_13, 0) = ((MR_Box) (Var_63));
      }
    }
    succeeded = ((MR_tag((MR_Word) SubTermB_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_65 = ((MR_Word) ((MR_hl_field(0, SubTermB_10, 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, SubTermB_10, 1))));
      succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_66 = ((MR_String) ((MR_hl_field(0, Var_65, 0))));
        succeeded = (strcmp(Var_66, (MR_String) "!") == 0);
        if (succeeded)
        {
          succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, 0))));
            Var_69 = ((MR_Word) ((MR_hl_field(1, Var_67, 1))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 1);
              if (succeeded)
                Var_16 = ((MR_Word) ((MR_hl_field(1, Var_68, 0))));
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MaybeVar_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeVar_19, 0) = ((MR_Box) (Var_16));
      }
    else
    {
      MR_Word VarPieces_20;
      MR_Word VarSpec_21;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_97;
      MR_Word Var_98;

      {
        Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_80, 0) = ((MR_Box) (Atom_5));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220])));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
      }
      Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
      Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[223])));
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_82);
      VarPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[65])), Var_74);
      Var_97 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermB_10);
      {
        VarSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_state\'/4"));
        MR_hl_field(0, VarSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, VarSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, VarSpec_21, 3) = ((MR_Box) (Var_97));
        MR_hl_field(0, VarSpec_21, 4) = ((MR_Box) (VarPieces_20));
      }
      {
        Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_98, 0) = ((MR_Box) (VarSpec_21));
        MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeVar_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeVar_19, 0) = ((MR_Box) (Var_98));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeMutable_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      FinalMutable_22 = ((MR_String) ((MR_hl_field(1, MaybeMutable_13, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeVar_19)) == (MR_Integer) 1);
      if (succeeded)
        FinalVar_23 = ((MR_Word) ((MR_hl_field(1, MaybeVar_19, 0))));
    }
    if (succeeded)
    {
      MR_Word ProgVar_24;
      MR_Word MutableVar_25;
      MR_Word Component_26;
      MR_Word Var_100;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_23, &ProgVar_24);
      {
        MutableVar_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MutableVar_25, 0) = ((MR_Box) (FinalMutable_22));
        MR_hl_field(0, MutableVar_25, 1) = ((MR_Box) (ProgVar_24));
      }
      Component_26 = (MR_Word) ((MR_Word) (MutableVar_25));
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_100, 0) = ((MR_Box) (Component_26));
        MR_hl_field(0, Var_100, 1) = ((MR_Box) (Context_6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeComponentContext_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_100));
      }
    }
    else
    {
      MR_Word Specs_27;
      MR_Word OoMSpecs_28;
      MR_Word Var_101;
      MR_Word Var_102;

      Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), MaybeVar_19);
      Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeMutable_13);
      Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_101, Var_102);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_27, &OoMSpecs_28);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_28));
      }
    }
  }
  else
  {
    MR_Word Pieces_29;
    MR_Word Spec_30;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_133;

    {
      Var_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_110, 0) = ((MR_Box) (Atom_5));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_108 = parse_tree__error_spec__color_as_subject_1_f_0(Var_109);
    Var_113 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[225])));
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[231])));
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, Var_112);
    Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_107);
    {
      Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_state\'/4"));
      MR_hl_field(0, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_30, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_30, 4) = ((MR_Box) (Pieces_29));
    }
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_133, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(0, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_133));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_io_4_p_0(
  MR_String Atom_5,
  MR_Word Context_6,
  MR_Word SubTerms_7,
  MR_Word * MaybeComponentContext_8)
{
  MR_bool succeeded = (SubTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTerm_9;
  MR_Word Var_17;

  if (succeeded)
  {
    SubTerm_9 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(1, SubTerms_7, 1))));
    succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    succeeded = ((MR_tag((MR_Word) SubTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(0, SubTerm_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, 0))));
        succeeded = (strcmp(Var_19, (MR_String) "!") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
              if (succeeded)
                Var_10 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProgVar_13;
      MR_Word Component_14;
      MR_Word Var_23;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, &ProgVar_13);
      {
        Component_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Component_14, 0) = ((MR_Box) (ProgVar_13));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (Component_14));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (Context_6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeComponentContext_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      }
    }
    else
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_31, 0) = ((MR_Box) (Atom_5));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
      Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[213])));
      Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[211])), Var_28);
      Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_9);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_io\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_45));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      }
    }
  }
  else
  {
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_72;
    MR_Word Pieces_74;
    MR_Word Spec_75;

    {
      Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_55, 0) = ((MR_Box) (Atom_5));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_53 = parse_tree__error_spec__color_as_subject_1_f_0(Var_54);
    Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[202])));
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[215])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_57);
    Pieces_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_52);
    {
      Spec_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_io\'/4"));
      MR_hl_field(0, Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_75, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_75, 4) = ((MR_Box) (Pieces_74));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (Spec_75));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_runtime_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeRuntime_6;

  parse_tree__parse_goal__parse_trace_runtime_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeRuntime_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeRuntime_6));
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_component_runtime_5_p_0(
  MR_Word VarSet_6,
  MR_String Atom_7,
  MR_Word Context_8,
  MR_Word SubTerms_9,
  MR_Word * MaybeComponentContext_10)
{
  MR_bool succeeded = (SubTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubTerm_11;
  MR_Word Var_18;

  if (succeeded)
  {
    SubTerm_11 = ((MR_Word) ((MR_hl_field(1, SubTerms_9, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, SubTerms_9, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeRunTime_12;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__parse_goal__parse_trace_component_runtime_5_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (VarSet_6));
    }
    parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Var_19, SubTerm_11, &MaybeRunTime_12);
    if (((MR_tag((MR_Word) MaybeRunTime_12)) == (MR_Integer) 0))
      *MaybeComponentContext_10 = (MR_Word) (MaybeRunTime_12);
    else
    {
      MR_Word RunTime_13 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_12, 0))));
      MR_Word Component_14;
      MR_Word Var_20;

      {
        Component_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Component_14, 0) = ((MR_Box) (RunTime_13));
      }
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (Component_14));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (Context_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeComponentContext_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      }
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_48;

    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (Atom_7));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_26 = parse_tree__error_spec__color_as_subject_1_f_0(Var_27);
    Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[202])));
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[209])));
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_30);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_25);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component_runtime\'/5"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_tree_3_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word BaseParser_4,
  MR_Word Term_5,
  MR_Word * MaybeTree_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word LTerm_8;
  MR_Word RTerm_9;
  MR_Word Op_11;
  MR_String Atom_7;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_7 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
      succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
          succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
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

    parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_39, BaseParser_4, LTerm_8, &MaybeLExpr_12);
    parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_39, BaseParser_4, RTerm_9, &MaybeRExpr_13);
    succeeded = ((MR_tag((MR_Word) MaybeLExpr_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      LExpr_14 = ((MR_Word) ((MR_hl_field(1, MaybeLExpr_12, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeRExpr_13)) == (MR_Integer) 1);
      if (succeeded)
        RExpr_15 = ((MR_Word) ((MR_hl_field(1, MaybeRExpr_13, 0))));
    }
    if (succeeded)
    {
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_29, 0) = (MR_Box) ((MR_Unsigned) (Op_11));
        MR_hl_field(2, Var_29, 1) = ((MR_Box) (LExpr_14));
        MR_hl_field(2, Var_29, 2) = ((MR_Box) (RExpr_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTree_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
      }
    }
    else
    {
      MR_Word TypeInfo_42_42;
      MR_Word Specs_16;
      MR_Word OoMSpecs_17;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1));
        MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_42_42, (MR_Word) (MaybeLExpr_12));
      Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_42_42, (MR_Word) (MaybeRExpr_13));
      Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_30, Var_31);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_16, &OoMSpecs_17);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTree_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_17));
      }
    }
  }
  else
  {
    MR_Word SubTerm_18;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, 0))));
        succeeded = (strcmp(Var_33, (MR_String) "not") == 0);
        if (succeeded)
        {
          succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
            succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSubExpr_20;

      parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_39, BaseParser_4, SubTerm_18, &MaybeSubExpr_20);
      if (((MR_tag((MR_Word) MaybeSubExpr_20)) == (MR_Integer) 0))
        *MaybeTree_6 = MaybeSubExpr_20;
      else
      {
        MR_Word SubExpr_21 = ((MR_Word) ((MR_hl_field(1, MaybeSubExpr_20, 0))));
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (SubExpr_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTree_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
        }
      }
    }
    else
    {
      MR_Word MaybeBase_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, BaseParser_4, 1))));
      MR_Box conv1_MaybeBase_23;

      func_0(((MR_Box) (BaseParser_4)), ((MR_Box) (Term_5)), &conv1_MaybeBase_23);
      MaybeBase_23 = ((MR_Word) (conv1_MaybeBase_23));
      if (((MR_tag((MR_Word) MaybeBase_23)) == (MR_Integer) 0))
        *MaybeTree_6 = (MR_Word) (MaybeBase_23);
      else
      {
        MR_Box Base_24 = (MR_hl_field(1, MaybeBase_23, 0));
        MR_Word Var_37;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = Base_24;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTree_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_37));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__collect_trace_params_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeCompileTime_0_2,
  MR_Word * STATE_VARIABLE_MaybeCompileTime_3,
  MR_Word STATE_VARIABLE_MaybeRunTime_0_4,
  MR_Word * STATE_VARIABLE_MaybeRunTime_5,
  MR_Word STATE_VARIABLE_MaybeIO_0_6,
  MR_Word * STATE_VARIABLE_MaybeIO_7,
  MR_Word STATE_VARIABLE_MutableVars_0_8,
  MR_Word * STATE_VARIABLE_MutableVars_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_MutableVars_9 = STATE_VARIABLE_MutableVars_0_8;
      *STATE_VARIABLE_MaybeIO_7 = STATE_VARIABLE_MaybeIO_0_6;
      *STATE_VARIABLE_MaybeRunTime_5 = STATE_VARIABLE_MaybeRunTime_0_4;
      *STATE_VARIABLE_MaybeCompileTime_3 = STATE_VARIABLE_MaybeCompileTime_0_2;
    }
    else
    {
      MR_Word Component_27;
      MR_Word Context_28;
      MR_Word ComponentsContexts_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_MaybeCompileTime_1_55;
      MR_Word STATE_VARIABLE_Specs_1_75;
      MR_Word STATE_VARIABLE_MaybeRunTime_1_76;
      MR_Word STATE_VARIABLE_MaybeIO_1_97;
      MR_Word STATE_VARIABLE_MutableVars_1_118;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeCompileTime_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeRunTime_0_4;
      MR_Word next_value_of_STATE_VARIABLE_MaybeIO_0_6;
      MR_Word next_value_of_STATE_VARIABLE_MutableVars_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      Component_27 = ((MR_Word) ((MR_hl_field(0, Var_54, 0))));
      Context_28 = ((MR_Word) ((MR_hl_field(0, Var_54, 1))));
      switch (MR_tag((MR_Word) Component_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MutableVar_43 = (MR_Word) ((MR_Word) (Component_27));
            MR_Word Var_119;

            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (MutableVar_43));
              MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_MutableVars_1_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), STATE_VARIABLE_MutableVars_0_8, Var_119);
            STATE_VARIABLE_MaybeCompileTime_1_55 = STATE_VARIABLE_MaybeCompileTime_0_2;
            STATE_VARIABLE_MaybeRunTime_1_76 = STATE_VARIABLE_MaybeRunTime_0_4;
            STATE_VARIABLE_MaybeIO_1_97 = STATE_VARIABLE_MaybeIO_0_6;
            STATE_VARIABLE_Specs_1_75 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompileTime_35 = ((MR_Word) ((MR_hl_field(1, Component_27, 0))));

            if ((STATE_VARIABLE_MaybeCompileTime_0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeCompileTime_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeCompileTime_1_55, 0) = ((MR_Box) (CompileTime_35));
              }
              STATE_VARIABLE_Specs_1_75 = STATE_VARIABLE_Specs_0_10;
            }
            else
            {
              MR_Word Pieces_37;
              MR_Word Spec_38;
              MR_Word Var_60;
              MR_Word Var_61;

              Var_61 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[302])));
              Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[304])));
              Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_60);
              {
                Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_trace_params\'/11"));
                MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Context_28));
                MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
              }
              {
                STATE_VARIABLE_Specs_1_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 0) = ((MR_Box) (Spec_38));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
              }
              STATE_VARIABLE_MaybeCompileTime_1_55 = STATE_VARIABLE_MaybeCompileTime_0_2;
            }
            STATE_VARIABLE_MaybeRunTime_1_76 = STATE_VARIABLE_MaybeRunTime_0_4;
            STATE_VARIABLE_MaybeIO_1_97 = STATE_VARIABLE_MaybeIO_0_6;
            STATE_VARIABLE_MutableVars_1_118 = STATE_VARIABLE_MutableVars_0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RunTime_39 = ((MR_Word) ((MR_hl_field(2, Component_27, 0))));

            if ((STATE_VARIABLE_MaybeRunTime_0_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeRunTime_1_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeRunTime_1_76, 0) = ((MR_Box) (RunTime_39));
              }
              STATE_VARIABLE_Specs_1_75 = STATE_VARIABLE_Specs_0_10;
            }
            else
            {
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Pieces_126;
              MR_Word Spec_127;

              Var_82 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[308])));
              Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[304])));
              Pieces_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_81);
              {
                Spec_127 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_127, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_trace_params\'/11"));
                MR_hl_field(0, Spec_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_127, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_127, 3) = ((MR_Box) (Context_28));
                MR_hl_field(0, Spec_127, 4) = ((MR_Box) (Pieces_126));
              }
              {
                STATE_VARIABLE_Specs_1_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 0) = ((MR_Box) (Spec_127));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
              }
              STATE_VARIABLE_MaybeRunTime_1_76 = STATE_VARIABLE_MaybeRunTime_0_4;
            }
            STATE_VARIABLE_MaybeCompileTime_1_55 = STATE_VARIABLE_MaybeCompileTime_0_2;
            STATE_VARIABLE_MaybeIO_1_97 = STATE_VARIABLE_MaybeIO_0_6;
            STATE_VARIABLE_MutableVars_1_118 = STATE_VARIABLE_MutableVars_0_8;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOStateVar_41 = ((MR_Word) ((MR_hl_field(3, Component_27, 0))));

            if ((STATE_VARIABLE_MaybeIO_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeIO_1_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeIO_1_97, 0) = ((MR_Box) (IOStateVar_41));
              }
              STATE_VARIABLE_Specs_1_75 = STATE_VARIABLE_Specs_0_10;
            }
            else
            {
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Pieces_132;
              MR_Word Spec_133;

              Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[306])));
              Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[304])));
              Pieces_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_102);
              {
                Spec_133 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_trace_params\'/11"));
                MR_hl_field(0, Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(0, Spec_133, 3) = ((MR_Box) (Context_28));
                MR_hl_field(0, Spec_133, 4) = ((MR_Box) (Pieces_132));
              }
              {
                STATE_VARIABLE_Specs_1_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 0) = ((MR_Box) (Spec_133));
                MR_hl_field(1, STATE_VARIABLE_Specs_1_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
              }
              STATE_VARIABLE_MaybeIO_1_97 = STATE_VARIABLE_MaybeIO_0_6;
            }
            STATE_VARIABLE_MaybeCompileTime_1_55 = STATE_VARIABLE_MaybeCompileTime_0_2;
            STATE_VARIABLE_MaybeRunTime_1_76 = STATE_VARIABLE_MaybeRunTime_0_4;
            STATE_VARIABLE_MutableVars_1_118 = STATE_VARIABLE_MutableVars_0_8;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_29;
      next_value_of_STATE_VARIABLE_MaybeCompileTime_0_2 = STATE_VARIABLE_MaybeCompileTime_1_55;
      next_value_of_STATE_VARIABLE_MaybeRunTime_0_4 = STATE_VARIABLE_MaybeRunTime_1_76;
      next_value_of_STATE_VARIABLE_MaybeIO_0_6 = STATE_VARIABLE_MaybeIO_1_97;
      next_value_of_STATE_VARIABLE_MutableVars_0_8 = STATE_VARIABLE_MutableVars_1_118;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_1_75;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeCompileTime_0_2 = next_value_of_STATE_VARIABLE_MaybeCompileTime_0_2;
      STATE_VARIABLE_MaybeRunTime_0_4 = next_value_of_STATE_VARIABLE_MaybeRunTime_0_4;
      STATE_VARIABLE_MaybeIO_0_6 = next_value_of_STATE_VARIABLE_MaybeIO_0_6;
      STATE_VARIABLE_MutableVars_0_8 = next_value_of_STATE_VARIABLE_MutableVars_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
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
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
        succeeded = (strcmp(Var_23, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[10]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
        succeeded = (strcmp(Var_27, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
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
        HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponentContext_13, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, 0))));
      }
      if (succeeded)
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (HeadComponentContext_15));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word OoMSpecs_18;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[2]), MaybeHeadComponentContext_13);
        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_32, Var_33);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Specs_17, &OoMSpecs_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OoMSpecs_18));
        }
      }
    }
    else
    {
      MR_String TermStr_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_63;
      MR_Word Var_64;

      TermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      Var_39 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[371])));
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (TermStr_19));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_51);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_49);
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_44);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_38);
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_params\'/4"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_63));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
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
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Term_7, 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, 0))));
  }
  if (succeeded)
  {
    succeeded = (strcmp(Atom_12, (MR_String) "io") == 0);
    if (succeeded)
    {
      MR_Word SubTerm_13;
      MR_Word Var_23;

      succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubTerm_13 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 0))));
        Var_23 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, 1))));
        succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Var_14;
        MR_Word Var_24;
        MR_String Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;

        succeeded = ((MR_tag((MR_Word) SubTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = ((MR_Word) ((MR_hl_field(0, SubTerm_13, 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(0, SubTerm_13, 1))));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
            succeeded = (strcmp(Var_25, (MR_String) "!") == 0);
            if (succeeded)
            {
              succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
                Var_28 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
                succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
                  if (succeeded)
                    Var_14 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word ProgVar_17;
          MR_Word Component_18;
          MR_Word Var_29;

          mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14, &ProgVar_17);
          Component_18 = (MR_Word) (ProgVar_17);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (Component_18));
            MR_hl_field(0, Var_29, 1) = ((MR_Box) (Context_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentContext_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
          }
        }
        else
        {
          MR_String SubTermStr_19;
          MR_Word Pieces_20;
          MR_Word Spec_21;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_67;
          MR_Word Var_68;

          SubTermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, SubTerm_13);
          Var_35 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[373])));
          {
            Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_45, 1) = ((MR_Box) (Atom_12));
          }
          {
            Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[254])));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[257])));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_56, 1) = ((MR_Box) (SubTermStr_19));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
          }
          Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_55);
          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
          Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_53);
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_40);
          Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])), Var_34);
          Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_13);
          {
            Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
            MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_67));
            MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_68, 0) = ((MR_Box) (Spec_21));
            MR_hl_field(0, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
          }
        }
      }
      else
      {
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_94;
        MR_Word Pieces_159;
        MR_Word Spec_160;

        {
          Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_77, 0) = ((MR_Box) (Atom_12));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
        Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[375])));
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[215])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_79);
        Pieces_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_74);
        {
          Spec_160 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_160, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
          MR_hl_field(0, Spec_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_160, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_160, 3) = ((MR_Box) (Context_11));
          MR_hl_field(0, Spec_160, 4) = ((MR_Box) (Pieces_159));
        }
        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_94, 0) = ((MR_Box) (Spec_160));
          MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
        }
      }
    }
    else
    {
      MR_String TermStr_22;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_106;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_125;
      MR_Word Pieces_161;
      MR_Word Spec_162;

      TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      Var_101 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[379])));
      {
        Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_114, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
        MR_hl_field(1, Var_113, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_112 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_113);
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[381])), Var_111);
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_106);
      Pieces_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[377])), Var_100);
      {
        Spec_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
        MR_hl_field(0, Spec_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_162, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_162, 3) = ((MR_Box) (Context_11));
        MR_hl_field(0, Spec_162, 4) = ((MR_Box) (Pieces_161));
      }
      {
        Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_125, 0) = ((MR_Box) (Spec_162));
        MR_hl_field(0, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_125));
      }
    }
  }
  else
  {
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_137;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Pieces_163;
    MR_Word Spec_164;
    MR_String TermStr_165;

    TermStr_165 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
    Var_132 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[379])));
    {
      Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_145, 1) = ((MR_Box) (TermStr_165));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
    }
    Var_143 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_144);
    Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[381])), Var_142);
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_137);
    Pieces_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[377])), Var_131);
    Var_156 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_164 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_164, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
      MR_hl_field(0, Spec_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_164, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_164, 3) = ((MR_Box) (Var_156));
      MR_hl_field(0, Spec_164, 4) = ((MR_Box) (Pieces_163));
    }
    {
      Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_157, 0) = ((MR_Box) (Spec_164));
      MR_hl_field(0, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_157));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__collect_try_params_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeIO_0_2,
  MR_Word * STATE_VARIABLE_MaybeIO_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_MaybeIO_3 = STATE_VARIABLE_MaybeIO_0_2;
    }
    else
    {
      MR_Word Component_12;
      MR_Word Context_13;
      MR_Word ComponentsContexts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word IOStateVar_17;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_MaybeIO_1_26;
      MR_Word STATE_VARIABLE_Specs_1_46;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeIO_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      Component_12 = ((MR_Word) ((MR_hl_field(0, Var_25, 0))));
      Context_13 = ((MR_Word) ((MR_hl_field(0, Var_25, 1))));
      IOStateVar_17 = (MR_Word) (Component_12);
      if ((STATE_VARIABLE_MaybeIO_0_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_MaybeIO_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MaybeIO_1_26, 0) = ((MR_Box) (IOStateVar_17));
        }
        STATE_VARIABLE_Specs_1_46 = STATE_VARIABLE_Specs_0_4;
      }
      else
      {
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_31;
        MR_Word Var_32;

        Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[306])));
        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[383])));
        Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])), Var_31);
        {
          Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.collect_try_params\'/5"));
          MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          STATE_VARIABLE_Specs_1_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_46, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_46, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
        STATE_VARIABLE_MaybeIO_1_26 = STATE_VARIABLE_MaybeIO_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_14;
      next_value_of_STATE_VARIABLE_MaybeIO_0_2 = STATE_VARIABLE_MaybeIO_1_26;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_46;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeIO_0_2 = next_value_of_STATE_VARIABLE_MaybeIO_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Goal_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_4, 0)))) == (MR_Integer) 2)));
  MR_Word Disjunct1_7;
  MR_Word Disjunct2_8;
  MR_Word Disjuncts3plus_9;

  if (succeeded)
  {
    Disjunct1_7 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
    Disjunct2_8 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
    Disjuncts3plus_9 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
    {
      MR_Word STATE_VARIABLE_DisjunctsCord_1_12;
      MR_Word STATE_VARIABLE_DisjunctsCord_2_13;
      MR_Box conv1_STATE_VARIABLE_DisjunctsCord_11;

      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(Disjunct1_7, STATE_VARIABLE_DisjunctsCord_0_10, &STATE_VARIABLE_DisjunctsCord_1_12);
      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(Disjunct2_8, STATE_VARIABLE_DisjunctsCord_1_12, &STATE_VARIABLE_DisjunctsCord_2_13);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[3]), Disjuncts3plus_9, ((MR_Box) (STATE_VARIABLE_DisjunctsCord_2_13)), &conv1_STATE_VARIABLE_DisjunctsCord_11);
      *STATE_VARIABLE_DisjunctsCord_11 = ((MR_Word) (conv1_STATE_VARIABLE_DisjunctsCord_11));
    }
  }
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (Goal_4)), STATE_VARIABLE_DisjunctsCord_0_10, STATE_VARIABLE_DisjunctsCord_11);
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
    MR_Word WarningCount_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word WarningsCounts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TailNonDupWarnings_14;
    MR_Word TailDupSpecs_15;
    MR_Word Warning_16;
    MR_Integer Count_17;

    parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(Context_1, ContextPieces_2, WarningsCounts_11, &TailNonDupWarnings_14, &TailDupSpecs_15);
    Warning_16 = ((MR_Word) ((MR_hl_field(0, WarningCount_10, 0))));
    Count_17 = ((MR_Integer) ((MR_hl_field(0, WarningCount_10, 1))));
    succeeded = (Count_17 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_String WarningStr_18;
      MR_Word NTimesPieces_19;
      MR_Word Pieces_20;
      MR_Word Spec_21;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_59;

      WarningStr_18 = parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(Warning_16);
      succeeded = (Count_17 == (MR_Integer) 2);
      if (succeeded)
        NTimesPieces_19 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[184]));
      else
      {
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_26, 1) = ((MR_Box) (Count_17));
        }
        {
          NTimesPieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NTimesPieces_19, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, NTimesPieces_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[186])));
        }
      }
      Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_2);
      {
        Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_45, 0) = ((MR_Box) (WarningStr_18));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NTimesPieces_19, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[194])), Var_59);
      Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_54);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[192])), Var_52);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[190])), Var_42);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_32);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.generate_warnings_for_duplicate_warnings\'/5"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_1));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
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
    Var_29 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, 0))));
        succeeded = (strcmp(Var_30, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeWarnings_12 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[164]));
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
      Var_34 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
      succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_String) ((MR_hl_field(0, Var_34, 0))));
        succeeded = (strcmp(Var_35, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
            succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_37, 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
              succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadWarnings_17;
      MR_Word HeadWarnSpecs_18;
      MR_Word MaybeTailWarnings_19;
      MR_Integer Var_39;

      parse_tree__parse_goal__parse_warning_7_p_0(VarSet_7, HeadTerm_14, ScopeFunctor_9, ContextPieces_10, WarningNum_11, &HeadWarnings_17, &HeadWarnSpecs_18);
      Var_39 = (MR_Integer) ((MR_Unsigned) WarningNum_11 + (MR_Unsigned) 1);
      parse_tree__parse_goal__parse_warnings_6_p_0(VarSet_7, TailTerm_15, ScopeFunctor_9, ContextPieces_10, Var_39, &MaybeTailWarnings_19);
      if (((MR_tag((MR_Word) MaybeTailWarnings_19)) == (MR_Integer) 0))
      {
        MR_Tuple ErrWarnError0_24 = ((MR_Tuple) ((MR_hl_field(0, MaybeTailWarnings_19, 0))));
        MR_Tuple ErrWarnError_25;

        parse_tree__maybe_error__add_warns_to_err_warn_error_3_p_0(ErrWarnError0_24, HeadWarnSpecs_18, &ErrWarnError_25);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeWarnings_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ErrWarnError_25));
        }
      }
      else
      {
        MR_Word TailWarnings_20 = ((MR_Word) ((MR_hl_field(1, MaybeTailWarnings_19, 0))));
        MR_Word TailWarnSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeTailWarnings_19, 1))));
        MR_Word Warnings_22;
        MR_Word WarnSpecs_23;

        Warnings_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), HeadWarnings_17, TailWarnings_20);
        WarnSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), HeadWarnSpecs_18, TailWarnSpecs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWarnings_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Warnings_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarnSpecs_23));
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
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_66;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_85;
      MR_Tuple Var_86;
      MR_Word Var_87;

      TermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
      Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (ScopeFunctor_9));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[170])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[165])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
      }
      Var_61 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[172])));
      {
        Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_74, 1) = ((MR_Box) (TermStr_26));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[43])));
      }
      Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_73);
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_71);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_66);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_60);
      Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
      Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warnings\'/6"));
        MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Var_85));
        MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
      }
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_87, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_86 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeWarnings_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
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
  MR_Word * WarnSpecs_14)
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
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        WarningFunctor_15 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 6;
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
    *WarnSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String TermStr_18;
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_74;

    TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11);
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (WarningNum_12));
    }
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (ScopeFunctor_10));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[180])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[178])));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[177])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[176])));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[175])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
    }
    Var_49 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[182])));
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (TermStr_18));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])));
    }
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[35])));
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[174])), Var_59);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_54);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_48);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_25);
    Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warning\'/7"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[7])));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_74));
      MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    *Warnings_13 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *WarnSpecs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (*Warnings_13));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__string_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4)
{
  *Functor_3 = ((&parse_tree__parse_goal_vector_common_4[0 + GoalKind_4]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
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
