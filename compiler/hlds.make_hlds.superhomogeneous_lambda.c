/*
** Automatically generated from `superhomogeneous_lambda.m'
** by the Mercury compiler,
** version rotd-2026-02-16
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


// :- module hlds.make_hlds.superhomogeneous_lambda.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__superhomogeneous_lambda__init
ENDINIT
*/

#include "hlds.make_hlds.superhomogeneous_lambda.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mode_util.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "hlds.make_hlds.superhomogeneous_util.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__superhomogeneous_lambda__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_arg_0_0[7];

static const MR_ConstString hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_names_lambda_arg_0_0[7];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_arg_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_arg_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_arg_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_arg_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_arg_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_kind_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_mode_presence_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_body_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_body_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_body_kind_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous_lambda__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_head_0_0[7];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_head_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_head_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_head_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_head_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_head_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_head_0[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_maybe_dcg_vars_0_1[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_maybe_dcg_vars_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_maybe_dcg_vars_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_maybe_dcg_vars_0[2];

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__892__1_2_f_0(
  MR_Word InstVarSet_6,
  MR_Word HeadVar__2_47);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__add_some_not_all_args_have_modes_error__453__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_arg_mode_1_f_0(
  MR_Word LambdaArg_3);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0(
  MR_Word LHSVar_12,
  MR_Word UnificationPurity_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word LambdaHead_17,
  MR_Word MaybeBodyGoal_18,
  MR_Word * Expansion_19,
  MR_Word OutsideSVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_77,
  MR_Word * STATE_VARIABLE_UrInfo_78);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(
  MR_Word LambdaArgs0_6,
  MR_Word * LambdaArgs_7,
  MR_Word * Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_MQInfo_0_5,
  MR_Word * STATE_VARIABLE_MQInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__partition_args_and_lambda_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0(
  MR_Word InstVarSet_6,
  MR_Word Context_7,
  MR_Word Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_purity_pf_args_det_term_5_p_0(
  MR_Word PurityPFArgsDetTerm_6,
  MR_Word MaybeDCGVars_7,
  MR_Word * MaybeLambdaHead_8,
  MR_Word STATE_VARIABLE_UrInfo_0_65,
  MR_Word * STATE_VARIABLE_UrInfo_66);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word Term0_4,
  MR_Word * Purity_5,
  MR_Word * Term_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(
  MR_Box Element1_7,
  MR_Box Element2_8,
  MR_Word Elements3plus_9,
  MR_Word * Main_10,
  MR_Box * LastButOne_11,
  MR_Box * Last_12);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_detism_3_p_0(
  MR_Word VarSet_4,
  MR_Word DetismTerm_5,
  MR_Word * MaybeDetism_6);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0(
  MR_Word Context_8,
  MR_Word ArgModeTerms_9,
  MR_Word * LambdaArgs_10,
  MR_Word * STATE_VARIABLE_BadModeSpecs_21,
  MR_Word * STATE_VARIABLE_SVarSpecs_22,
  MR_Word STATE_VARIABLE_UrInfo_0_23,
  MR_Word * STATE_VARIABLE_UrInfo_24);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0(
  MR_Word Context_9,
  MR_Word ArgModeTerms_10,
  MR_Word FuncRetArgModeTerm_11,
  MR_Word * LambdaArgs_12,
  MR_Word * STATE_VARIABLE_BadModeSpecs_26,
  MR_Word * STATE_VARIABLE_SVarSpecs_27,
  MR_Word STATE_VARIABLE_UrInfo_0_28,
  MR_Word * STATE_VARIABLE_UrInfo_29);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_ArgNum_0_4,
  MR_Integer * STATE_VARIABLE_ArgNum_5,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_6,
  MR_Word * STATE_VARIABLE_BadModeSpecs_7,
  MR_Word STATE_VARIABLE_SVarSpecs_0_8,
  MR_Word * STATE_VARIABLE_SVarSpecs_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_arg_11_p_0(
  MR_Word Kind_12,
  MR_Word ArgModeTerm_13,
  MR_Word * LambdaArg_14,
  MR_Integer STATE_VARIABLE_ArgNum_0_39,
  MR_Integer * STATE_VARIABLE_ArgNum_40,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_41,
  MR_Word * STATE_VARIABLE_BadModeSpecs_42,
  MR_Word STATE_VARIABLE_SVarSpecs_0_43,
  MR_Word * STATE_VARIABLE_SVarSpecs_44,
  MR_Word STATE_VARIABLE_UrInfo_0_45,
  MR_Word * STATE_VARIABLE_UrInfo_46);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__classify_lambda_arg_modes_present_absent_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_body_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_body_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[77][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[5][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[77][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the body of lambda expression:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by a DCG clause"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "lambda expression that is defined"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the head of a"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at least two arguments."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: DCG notation is"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clauses for functions."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the clause head part of a lambda expression"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have one of the following forms:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<args>) is <determinism>"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<args>) is <determinism>"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg> is <determinism>"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg> is <determinism>"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg>"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg>"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or one of those forms preceded by either"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in head of lambda expression:"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "some but not all arguments have modes."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in head of predicate lambda expression:"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "none of the arguments have modes."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of the lambda expression:"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the constraints on the inst"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are inconsistent."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[5]))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[4])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "::")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_4[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_lambda_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__superhomogeneous_lambda__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_arg_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_mode_presence_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_names_lambda_arg_0_0[7] = {
  (MR_String) "la_arg_num",
  (MR_String) "la_arg_term",
  (MR_String) "la_arg_var",
  (MR_String) "la_kind",
  (MR_String) "la_arg_mode_presence",
  (MR_String) "la_arg_mode",
  (MR_String) "la_arg_mode_context"
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_arg_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_arg_0_0 = {
  (MR_String) "lambda_arg",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_arg_0_0,
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_names_lambda_arg_0_0,
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_arg_0_0[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_arg_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_arg_0[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_arg_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "lambda_arg",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_arg_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_0 = {
  (MR_String) "lambda_arg_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_1 = {
  (MR_String) "lambda_arg_func_result",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_0,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_1,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_kind_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "lambda_arg_kind",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_kind_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_kind_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_0 = {
  (MR_String) "lam_absent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_1 = {
  (MR_String) "lam_present",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_mode_presence_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_0,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_mode_presence_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_0,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_arg_mode_presence_0_1
};

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_mode_presence_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_mode_presence_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "lambda_arg_mode_presence",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_arg_mode_presence_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_arg_mode_presence_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_arg_mode_presence_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_0 = {
  (MR_String) "lambda_body_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_1 = {
  (MR_String) "lambda_body_dcg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_body_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_0,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_body_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_1,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_functor_desc_lambda_body_kind_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_body_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_body_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_body_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_body_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "lambda_body_kind",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_name_ordered_lambda_body_kind_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__enum_ordinal_ordered_lambda_body_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_body_kind_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous_lambda__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_head_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_groundness_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_head_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_head_0_0 = {
  (MR_String) "lambda_head",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_lambda_head_0_0,
  NULL,
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_locns_lambda_head_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_head_0_0[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_head_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_head_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_lambda_head_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_head_0[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_lambda_head_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_head_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_head_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "lambda_head",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_lambda_head_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_lambda_head_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_lambda_head_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_0 = {
  (MR_String) "no_dcg_vars",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_maybe_dcg_vars_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_1 = {
  (MR_String) "dcg_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__field_types_maybe_dcg_vars_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_0[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_1[1] = { &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_maybe_dcg_vars_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_stag_ordered_maybe_dcg_vars_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_maybe_dcg_vars_0[2] = {
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_1,
  &hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_functor_desc_maybe_dcg_vars_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_maybe_dcg_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_maybe_dcg_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_lambda",
  (MR_String) "maybe_dcg_vars",
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_name_ordered_maybe_dcg_vars_0 },
  { hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__du_ptag_ordered_maybe_dcg_vars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__functor_number_map_maybe_dcg_vars_0,

};

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__892__1_2_f_0(
  MR_Word InstVarSet_6,
  MR_Word HeadVar__2_47)
{
  MR_Word HeadVar__3_48;

  HeadVar__3_48 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_6, HeadVar__2_47);
  return HeadVar__3_48;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__add_some_not_all_args_have_modes_error__453__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  MR_Word LambdaHeadVar__2_17;
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_16, 0))));

  {
    LambdaHeadVar__2_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, LambdaHeadVar__2_17, 1) = ((MR_Box) (Var_18));
  }
  return LambdaHeadVar__2_17;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;
    MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_35 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_36 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_35 < Var_36);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_35 > Var_36);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_37 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_38 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_37 < Var_38);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_37 > Var_38);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_body_kind_0_0(
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

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_body_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0(
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
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0(
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
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_35 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_36 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_35 < Var_36);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_35 > Var_36);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              parse_tree__prog_data____Compare____mer_mode_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_19_19 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_arg_mode_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word HeadVar__2_2;
  MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 2))));
  MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 4))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (LambdaVar_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Mode_5));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 4))));

  return Mode_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 2))));

  return LambdaVar_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word ArgTerm_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 1))));

  return ArgTerm_4;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_expr_11_p_0(
  MR_Word XVar_12,
  MR_Word Purity_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word PurityPFArgsDetTerm_17,
  MR_Word MaybeLambdaBody_18,
  MR_Word * Expansion_19,
  MR_Word SVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_40,
  MR_Word * STATE_VARIABLE_UrInfo_41)
{
  MR_Word MaybeBodyGoal_23;
  MR_Word MaybeDCGVars_24;
  MR_Word MaybeLambdaHead_37;
  MR_Word STATE_VARIABLE_UrInfo_2_46;
  MR_Word STATE_VARIABLE_UrInfo_3_47;

  if ((MaybeLambdaBody_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TrueGoal_22;

    {
      TrueGoal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TrueGoal_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, TrueGoal_22, 1) = ((MR_Box) (Context_14));
    }
    {
      MaybeBodyGoal_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeBodyGoal_23, 0) = ((MR_Box) (TrueGoal_22));
    }
    MaybeDCGVars_24 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_UrInfo_2_46 = STATE_VARIABLE_UrInfo_0_40;
  }
  else
  {
    MR_Word LambdaBodyKind_25;
    MR_Word BodyGoalTerm_26;
    MR_Word ContextPieces_27;
    MR_Word GenericBodyGoalTerm_28;
    MR_Word VarSet0_29;
    MR_Word MaybeBodyGoal0_30;
    MR_Word VarSet_31;
    MR_Tuple Var_42 = ((MR_Tuple) ((MR_hl_field(1, MaybeLambdaBody_18, 0))));
    MR_Word STATE_VARIABLE_UrInfo_1_45;
    MR_Word Var_52;
    MR_Integer Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    LambdaBodyKind_25 = ((MR_Word) ((MR_hl_field(0, Var_42, 0))));
    BodyGoalTerm_26 = ((MR_Word) ((MR_hl_field(0, Var_42, 1))));
    ContextPieces_27 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[6]))));
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyGoalTerm_26, &GenericBodyGoalTerm_28);
    Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 0))));
    Var_53 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 1))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 2))));
    VarSet0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 3))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 4))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_40, 5))));
    switch (LambdaBodyKind_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word DCGVar0_32;
          MR_Word DCGVarN_33;

          parse_tree__parse_dcg_goal__parse_dcg_pred_goal_7_p_0(GenericBodyGoalTerm_28, ContextPieces_27, &MaybeBodyGoal0_30, &DCGVar0_32, &DCGVarN_33, VarSet0_29, &VarSet_31);
          {
            MaybeDCGVars_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeDCGVars_24, 0) = ((MR_Box) (DCGVar0_32));
            MR_hl_field(1, MaybeDCGVars_24, 1) = ((MR_Box) (DCGVarN_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_goal__parse_goal_5_p_0(GenericBodyGoalTerm_28, ContextPieces_27, &MaybeBodyGoal0_30, VarSet0_29, &VarSet_31);
          MaybeDCGVars_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    {
      STATE_VARIABLE_UrInfo_1_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 0) = ((MR_Box) (Var_52));
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 1) = ((MR_Box) (Var_53));
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 2) = ((MR_Box) (Var_54));
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 3) = ((MR_Box) (VarSet_31));
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 4) = ((MR_Box) (Var_55));
      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_45, 5) = ((MR_Box) (Var_56));
    }
    if (((MR_tag((MR_Word) MaybeBodyGoal0_30)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_36 = ((MR_Word) ((MR_hl_field(0, MaybeBodyGoal0_30, 0))));

      {
        MaybeBodyGoal_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeBodyGoal_23, 0) = ((MR_Box) (BodyGoalSpecs_36));
      }
      STATE_VARIABLE_UrInfo_2_46 = STATE_VARIABLE_UrInfo_1_45;
    }
    else
    {
      MR_Word BodyGoal_34 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal0_30, 0))));
      MR_Word BodyGoalWarningSpecs_35 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal0_30, 1))));

      hlds__make_hlds__state_var__add_unravel_specs_3_p_0(BodyGoalWarningSpecs_35, STATE_VARIABLE_UrInfo_1_45, &STATE_VARIABLE_UrInfo_2_46);
      {
        MaybeBodyGoal_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBodyGoal_23, 0) = ((MR_Box) (BodyGoal_34));
      }
    }
  }
  hlds__make_hlds__superhomogeneous_lambda__parse_lambda_purity_pf_args_det_term_5_p_0(PurityPFArgsDetTerm_17, MaybeDCGVars_24, &MaybeLambdaHead_37, STATE_VARIABLE_UrInfo_2_46, &STATE_VARIABLE_UrInfo_3_47);
  if (((MR_tag((MR_Word) MaybeLambdaHead_37)) == (MR_Integer) 0))
  {
    MR_Word LambdaHeadSpecs_38 = ((MR_Word) ((MR_hl_field(0, MaybeLambdaHead_37, 0))));
    MR_Word STATE_VARIABLE_UrInfo_4_48;
    MR_Word Var_51;

    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(LambdaHeadSpecs_38, STATE_VARIABLE_UrInfo_3_47, &STATE_VARIABLE_UrInfo_4_48);
    hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_4_48, STATE_VARIABLE_UrInfo_41);
    Var_51 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_19 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word LambdaHead_39 = ((MR_Word) ((MR_hl_field(1, MaybeLambdaHead_37, 0))));

    hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0(XVar_12, Purity_13, Context_14, MainContext_15, SubContext_16, LambdaHead_39, MaybeBodyGoal_23, Expansion_19, SVarState_20, STATE_VARIABLE_UrInfo_3_47, STATE_VARIABLE_UrInfo_41);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaVar_4;

  conv2_LambdaVar_4 = hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaVar_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__make_hlds__superhomogeneous_lambda__project_lambda_var_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ArgTerm_4;

  conv0_ArgTerm_4 = hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_term_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ArgTerm_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__build_lambda_expression_11_p_0(
  MR_Word LHSVar_12,
  MR_Word UnificationPurity_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word LambdaHead_17,
  MR_Word MaybeBodyGoal_18,
  MR_Word * Expansion_19,
  MR_Word OutsideSVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_77,
  MR_Word * STATE_VARIABLE_UrInfo_78)
{
  MR_Word PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHead_17, 0))) & (MR_Integer) 1);
  MR_Word LambdaArgs0_25 = ((MR_Word) ((MR_hl_field(0, LambdaHead_17, 1))));
  MR_Word BadModeSpecs_26 = ((MR_Word) ((MR_hl_field(0, LambdaHead_17, 2))));
  MR_Word SVarSpecs_27 = ((MR_Word) ((MR_hl_field(0, LambdaHead_17, 3))));
  MR_Word MaybeDetism_28 = ((MR_Word) ((MR_hl_field(0, LambdaHead_17, 4))));
  MR_Word LambdaArgs1_29;
  MR_Word Modes_30;
  MR_Word VarSet0_31;
  MR_Word InstVarSet_33;
  MR_Word Detism_34;
  MR_Word BodyGoal_36;
  MR_Word ArgSpecs_38;
  MR_Word Goal_41;
  MR_Word STATE_VARIABLE_UrInfo_1_79;
  MR_Word STATE_VARIABLE_UrInfo_2_80;
  MR_Word STATE_VARIABLE_UrInfo_3_81;
  MR_Word STATE_VARIABLE_UrInfo_5_83;
  MR_Word Var_138;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, LambdaHead_17, 0)));
  MR_Word TVarSet_32;

  hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(LambdaArgs0_25, &LambdaArgs1_29, &Modes_30, STATE_VARIABLE_UrInfo_0_77, &STATE_VARIABLE_UrInfo_1_79);
  VarSet0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_79, 3))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet0_31, &TVarSet_32);
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet0_31, &InstVarSet_33);
  hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0(InstVarSet_33, Context_14, Modes_30, STATE_VARIABLE_UrInfo_1_79, &STATE_VARIABLE_UrInfo_2_80);
  if (((MR_tag((MR_Word) MaybeDetism_28)) == (MR_Integer) 0))
  {
    MR_Word DetismSpecs_35 = ((MR_Word) ((MR_hl_field(0, MaybeDetism_28, 0))));

    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(DetismSpecs_35, STATE_VARIABLE_UrInfo_2_80, &STATE_VARIABLE_UrInfo_3_81);
    Detism_34 = (MR_Integer) 0;
  }
  else
  {
    Detism_34 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_28, 0))));
    STATE_VARIABLE_UrInfo_3_81 = STATE_VARIABLE_UrInfo_2_80;
  }
  if (((MR_tag((MR_Word) MaybeBodyGoal_18)) == (MR_Integer) 0))
  {
    MR_Word BodyGoalSpecs_37 = ((MR_Word) ((MR_hl_field(0, MaybeBodyGoal_18, 0))));
    MR_Word STATE_VARIABLE_UrInfo_4_82;

    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(BodyGoalSpecs_37, STATE_VARIABLE_UrInfo_3_81, &STATE_VARIABLE_UrInfo_4_82);
    hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_4_82, &STATE_VARIABLE_UrInfo_5_83);
    {
      BodyGoal_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BodyGoal_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BodyGoal_36, 1) = ((MR_Box) (Context_14));
    }
  }
  else
  {
    BodyGoal_36 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_18, 0))));
    STATE_VARIABLE_UrInfo_5_83 = STATE_VARIABLE_UrInfo_3_81;
  }
  ArgSpecs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BadModeSpecs_26, SVarSpecs_27);
  if ((ArgSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTerms1_43;
    MR_Word ArgTerms_44;
    MR_Word FinalSVarMap_45;
    MR_Word NewSVars_46;
    MR_Word InitialSVarState_47;
    MR_Word ModuleInfo0_48;
    MR_Word NonOutputLambdaVarsArgs_49;
    MR_Word OutputLambdaVarsArgs_50;
    MR_Word PredFormArity_51;
    MR_Word ArgContext_52;
    MR_Word HeadBefore0_53;
    MR_Word HeadBefore_54;
    MR_Word EmptyRenaming_55;
    MR_Word Body_56;
    MR_Word HeadAfter0_57;
    MR_Word HeadAfter_58;
    MR_Word LambdaVarsModes_59;
    MR_Word LambdaVars_60;
    MR_Word FinalSVarState_64;
    MR_Word HLDS_Goal0_65;
    MR_Word QuantifiedArgTerms_66;
    MR_Word QuantifiedVars0_68;
    MR_Word QuantifiedVars_69;
    MR_Word GoalInfo_70;
    MR_Word Reason_71;
    MR_Word HLDS_GoalExpr_72;
    MR_Word HLDS_Goal_73;
    MR_Word LambdaNonLocals_75;
    MR_Word LambdaRHS_76;
    MR_Word STATE_VARIABLE_UrInfo_8_88;
    MR_Word STATE_VARIABLE_SVarState_2_89;
    MR_Word STATE_VARIABLE_UrInfo_9_90;
    MR_Word STATE_VARIABLE_SVarState_3_92;
    MR_Word STATE_VARIABLE_UrInfo_10_93;
    MR_Word STATE_VARIABLE_UrInfo_11_95;
    MR_Word Var_128;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word STATE_VARIABLE_LambdaGoalVars_1_134;
    MR_Word STATE_VARIABLE_LambdaGoalVars_2_135;
    MR_Word STATE_VARIABLE_LambdaGoalVars_3_136;

    ArgTerms1_43 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[5]), LambdaArgs1_29);
    hlds__make_hlds__state_var__svar_prepare_for_lambda_head_9_p_0(Context_14, ArgTerms1_43, &ArgTerms_44, &FinalSVarMap_45, &NewSVars_46, OutsideSVarState_20, &InitialSVarState_47, STATE_VARIABLE_UrInfo_5_83, &STATE_VARIABLE_UrInfo_8_88);
    ModuleInfo0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_8_88, 0))));
    hlds__make_hlds__superhomogeneous_lambda__partition_args_and_lambda_vars_5_p_0(ModuleInfo0_48, LambdaArgs1_29, ArgTerms_44, &NonOutputLambdaVarsArgs_49, &OutputLambdaVarsArgs_50);
    PredFormArity_51 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[1]), ArgTerms_44);
    {
      ArgContext_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgContext_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
      MR_hl_field(0, ArgContext_52, 1) = ((MR_Box) (PredFormArity_51));
    }
    HeadBefore0_53 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(NonOutputLambdaVarsArgs_49, Context_14, ArgContext_52, HeadBefore0_53, &HeadBefore_54, InitialSVarState_47, &STATE_VARIABLE_SVarState_2_89, STATE_VARIABLE_UrInfo_8_88, &STATE_VARIABLE_UrInfo_9_90);
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), &EmptyRenaming_55);
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 0, EmptyRenaming_55, BodyGoal_36, &Body_56, STATE_VARIABLE_SVarState_2_89, &STATE_VARIABLE_SVarState_3_92, STATE_VARIABLE_UrInfo_9_90, &STATE_VARIABLE_UrInfo_10_93);
    HeadAfter0_57 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(OutputLambdaVarsArgs_50, Context_14, ArgContext_52, HeadAfter0_57, &HeadAfter_58, STATE_VARIABLE_SVarState_3_92, &FinalSVarState_64, STATE_VARIABLE_UrInfo_10_93, &STATE_VARIABLE_UrInfo_11_95);
    LambdaVarsModes_59 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[6]), LambdaArgs1_29);
    LambdaVars_60 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[7]), LambdaArgs1_29);
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (HeadAfter_58));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Body_56));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (HeadBefore_54));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
    }
    hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0(Context_14, Modes_30, NewSVars_46, FinalSVarMap_45, BodyGoal_36, Var_128, &HLDS_Goal0_65, InitialSVarState_47, FinalSVarState_64, STATE_VARIABLE_UrInfo_11_95, STATE_VARIABLE_UrInfo_78);
    switch (PredOrFunc_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box conv3__ReturnValTerm_67;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[1]), ArgTerms_44, &QuantifiedArgTerms_66, &conv3__ReturnValTerm_67);
        }
        break;
      case (MR_Integer) 0:
        QuantifiedArgTerms_66 = ArgTerms_44;
        break;
    }
    mercury__term_vars__vars_in_terms_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedArgTerms_66, &QuantifiedVars0_68);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[2]), QuantifiedVars0_68, &QuantifiedVars_69);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo_70);
    {
      Reason_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Reason_71, 0) = ((MR_Box) (QuantifiedVars_69));
      MR_hl_field(0, Reason_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      HLDS_GoalExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HLDS_GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, HLDS_GoalExpr_72, 1) = ((MR_Box) (Reason_71));
      MR_hl_field(3, HLDS_GoalExpr_72, 2) = ((MR_Box) (HLDS_Goal0_65));
    }
    {
      HLDS_Goal_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HLDS_Goal_73, 0) = ((MR_Box) (HLDS_GoalExpr_72));
      MR_hl_field(0, HLDS_Goal_73, 1) = ((MR_Box) (GoalInfo_70));
    }
    hlds__goal_vars__vars_in_goal_2_p_0(HLDS_Goal_73, &STATE_VARIABLE_LambdaGoalVars_1_134);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_60, STATE_VARIABLE_LambdaGoalVars_1_134, &STATE_VARIABLE_LambdaGoalVars_2_135);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedVars_69, STATE_VARIABLE_LambdaGoalVars_2_135, &STATE_VARIABLE_LambdaGoalVars_3_136);
    LambdaNonLocals_75 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaGoalVars_3_136);
    {
      LambdaRHS_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LambdaRHS_76, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(2, LambdaRHS_76, 1) = ((MR_Box) (LambdaNonLocals_75));
      MR_hl_field(2, LambdaRHS_76, 2) = ((MR_Box) (LambdaVarsModes_59));
      MR_hl_field(2, LambdaRHS_76, 3) = (MR_Box) ((MR_Unsigned) (Detism_34));
      MR_hl_field(2, LambdaRHS_76, 4) = ((MR_Box) (HLDS_Goal_73));
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(LHSVar_12, LambdaRHS_76, Context_14, MainContext_15, SubContext_16, UnificationPurity_13, &Goal_41);
  }
  else
  {
    MR_Word STATE_VARIABLE_UrInfo_6_84;

    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(ArgSpecs_38, STATE_VARIABLE_UrInfo_5_83, &STATE_VARIABLE_UrInfo_6_84);
    hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_6_84, STATE_VARIABLE_UrInfo_78);
    Goal_41 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
  }
  Var_138 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_41)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Expansion_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_138));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_4;

  conv0_Mode_4 = hlds__make_hlds__superhomogeneous_lambda__project_lambda_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(
  MR_Word LambdaArgs0_6,
  MR_Word * LambdaArgs_7,
  MR_Word * Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18)
{
  MR_Word QualInfo0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 2))));
  MR_Word MaybeOptImported_11;

  hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(QualInfo0_10, &MaybeOptImported_11);
  switch (MaybeOptImported_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MQInfo0_13;
        MR_Word MQInfo_14;
        MR_Word Specs_15;
        MR_Word QualInfo_16;
        MR_Word STATE_VARIABLE_UrInfo_1_20;
        MR_Word Var_28;
        MR_Integer Var_29;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;

        hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(QualInfo0_10, &MQInfo0_13);
        hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_8_p_0((MR_Integer) 0, LambdaArgs0_6, LambdaArgs_7, Modes_8, MQInfo0_13, &MQInfo_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
        hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_14, QualInfo0_10, &QualInfo_16);
        Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 0))));
        Var_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 3))));
        Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 4))));
        Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 5))));
        {
          STATE_VARIABLE_UrInfo_1_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 0) = ((MR_Box) (Var_28));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 1) = ((MR_Box) (Var_29));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 2) = ((MR_Box) (QualInfo_16));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 3) = ((MR_Box) (Var_31));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 4) = ((MR_Box) (Var_32));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_20, 5) = ((MR_Box) (Var_33));
        }
        hlds__make_hlds__state_var__add_unravel_specs_3_p_0(Specs_15, STATE_VARIABLE_UrInfo_1_20, STATE_VARIABLE_UrInfo_18);
      }
      break;
    case (MR_Integer) 1:
      {
        *LambdaArgs_7 = LambdaArgs0_6;
        *Modes_8 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[4]), *LambdaArgs_7);
        *STATE_VARIABLE_UrInfo_18 = STATE_VARIABLE_UrInfo_0_17;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_MQInfo_0_5,
  MR_Word * STATE_VARIABLE_MQInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_MQInfo_6 = STATE_VARIABLE_MQInfo_0_5;
  }
  else
  {
    MR_Word LambdaArg0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word LambdaArgs0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word LambdaArg_19;
    MR_Word LambdaArgs_20;
    MR_Word Mode_21;
    MR_Word Modes_22;
    MR_Integer ArgNum_25 = ((MR_Integer) ((MR_hl_field(0, LambdaArg0_17, 0))));
    MR_Word ProgArgTerm_26 = ((MR_Word) ((MR_hl_field(0, LambdaArg0_17, 1))));
    MR_Word LambdaVar_27 = ((MR_Word) ((MR_hl_field(0, LambdaArg0_17, 2))));
    MR_Word Mode0_30 = ((MR_Word) ((MR_hl_field(0, LambdaArg0_17, 4))));
    MR_Word ModeContext_31 = ((MR_Word) ((MR_hl_field(0, LambdaArg0_17, 5))));
    MR_Word STATE_VARIABLE_MQInfo_1_36;
    MR_Word STATE_VARIABLE_Specs_1_37;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, LambdaArg0_17, 3)));

    parse_tree__module_qual__qualify_items__qualify_lambda_mode_8_p_0(HeadVar__1_1, ModeContext_31, Mode0_30, &Mode_21, STATE_VARIABLE_MQInfo_0_5, &STATE_VARIABLE_MQInfo_1_36, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_37);
    {
      LambdaArg_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LambdaArg_19, 0) = ((MR_Box) (ArgNum_25));
      MR_hl_field(0, LambdaArg_19, 1) = ((MR_Box) (ProgArgTerm_26));
      MR_hl_field(0, LambdaArg_19, 2) = ((MR_Box) (LambdaVar_27));
      MR_hl_field(0, LambdaArg_19, 3) = (MR_Box) (packed_word_0);
      MR_hl_field(0, LambdaArg_19, 4) = ((MR_Box) (Mode_21));
      MR_hl_field(0, LambdaArg_19, 5) = ((MR_Box) (ModeContext_31));
    }
    hlds__make_hlds__superhomogeneous_lambda__qualify_lambda_arg_modes_8_p_0(HeadVar__1_1, LambdaArgs0_18, &LambdaArgs_20, &Modes_22, STATE_VARIABLE_MQInfo_1_36, STATE_VARIABLE_MQInfo_6, STATE_VARIABLE_Specs_1_37, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LambdaArg_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (LambdaArgs_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Modes_22));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__partition_args_and_lambda_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.partition_args_and_lambda_vars\'/5", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.partition_args_and_lambda_vars\'/5", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word ArgTerm_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgTerms_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word InputLambdaVarsArgTermsTail_28;
      MR_Word OutputLambdaVarsArgTermsTail_29;
      MR_Word LambdaVar_32;
      MR_Word Mode_35;
      MR_Word LambdaVarArgTerm_37;
      MR_Word Var_40;
      MR_Word Var_41;

      hlds__make_hlds__superhomogeneous_lambda__partition_args_and_lambda_vars_5_p_0(ModuleInfo_1, Var_38, ArgTerms_25, &InputLambdaVarsArgTermsTail_28, &OutputLambdaVarsArgTermsTail_29);
      LambdaVar_32 = ((MR_Word) ((MR_hl_field(0, Var_39, 2))));
      Mode_35 = ((MR_Word) ((MR_hl_field(0, Var_39, 4))));
      {
        LambdaVarArgTerm_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LambdaVarArgTerm_37, 0) = ((MR_Box) (LambdaVar_32));
        MR_hl_field(0, LambdaVarArgTerm_37, 1) = ((MR_Box) (ArgTerm_24));
      }
      succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_35, &Var_40, &Var_41);
      if (succeeded)
        succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, Mode_35);
      if (succeeded)
      {
        *HeadVar__4_4 = InputLambdaVarsArgTermsTail_28;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LambdaVarArgTerm_37));
          MR_hl_field(1, base, 1) = ((MR_Box) (OutputLambdaVarsArgTermsTail_29));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LambdaVarArgTerm_37));
          MR_hl_field(1, base, 1) = ((MR_Box) (InputLambdaVarsArgTermsTail_28));
        }
        *HeadVar__5_5 = OutputLambdaVarsArgTermsTail_29;
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_48;

  conv0_HeadVar__3_48 = hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__892__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_48));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0(
  MR_Word InstVarSet_6,
  MR_Word Context_7,
  MR_Word Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17)
{
  MR_Word InconsistentVars_10;

  parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(Modes_8, &InconsistentVars_10);
  if ((InconsistentVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UrInfo_17 = STATE_VARIABLE_UrInfo_0_16;
  else
  {
    MR_Word VarPieces_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Box conv1_Var_24;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_5[0]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous_lambda__warn_about_any_inconsistent_inst_vars_5_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (InstVarSet_6));
    }
    VarPieces_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, InconsistentVars_10);
    conv1_Var_24 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InconsistentVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_24 = ((MR_String) (conv1_Var_24));
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[74])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    Var_29 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_13);
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[76])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_28);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.warn_about_any_inconsistent_inst_vars\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_15, STATE_VARIABLE_UrInfo_0_16, STATE_VARIABLE_UrInfo_17);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_purity_pf_args_det_term_5_p_0(
  MR_Word PurityPFArgsDetTerm_6,
  MR_Word MaybeDCGVars_7,
  MR_Word * MaybeLambdaHead_8,
  MR_Word STATE_VARIABLE_UrInfo_0_65,
  MR_Word * STATE_VARIABLE_UrInfo_66)
{
  MR_bool succeeded;
  MR_Word GenericPurityPFArgsDetTerm_10;
  MR_Word LambdaPurity_11;
  MR_Word PFArgsDetTerm_12;
  MR_Word DetismTerm_14;
  MR_Word Context_18;
  MR_Word Groundness_19;
  MR_Word ArgModeTerms0_20;
  MR_Word MaybeFuncRetArgModeTerm_21;
  MR_Word BeforeIsTerm_13;
  MR_String BeforeIsFunctor_16;
  MR_Word BeforeIsArgTerms_17;
  MR_Word Var_67;
  MR_String Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;

  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PurityPFArgsDetTerm_6, &GenericPurityPFArgsDetTerm_10);
  hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(GenericPurityPFArgsDetTerm_10, &LambdaPurity_11, &PFArgsDetTerm_12);
  succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_12)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_67 = ((MR_Word) ((MR_hl_field(0, PFArgsDetTerm_12, 0))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, PFArgsDetTerm_12, 1))));
    succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_68 = ((MR_String) ((MR_hl_field(0, Var_67, 0))));
      succeeded = (strcmp(Var_68, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeIsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_69, 0))));
          Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, 1))));
          succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DetismTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_70, 0))));
            Var_71 = ((MR_Word) ((MR_hl_field(1, Var_70, 1))));
            succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) BeforeIsTerm_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_72 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_13, 0))));
                BeforeIsArgTerms_17 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_13, 1))));
                Context_18 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_13, 2))));
                succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BeforeIsFunctor_16 = ((MR_String) ((MR_hl_field(0, Var_72, 0))));
                  if ((strcmp(BeforeIsFunctor_16, (MR_String) "=") == 0))
                  {
                    MR_Word FuncArgsTerm_22;
                    MR_Word FuncRetArgModeTerm0_23;
                    MR_String FuncTermFunctor_24;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;

                    succeeded = (BeforeIsArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncArgsTerm_22 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_17, 0))));
                      Var_73 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_17, 1))));
                      succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FuncRetArgModeTerm0_23 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
                        Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, 1))));
                        succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) FuncArgsTerm_22)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_75 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_22, 0))));
                            ArgModeTerms0_20 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_22, 1))));
                            succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              FuncTermFunctor_24 = ((MR_String) ((MR_hl_field(0, Var_75, 0))));
                              if ((strcmp(FuncTermFunctor_24, (MR_String) "func") == 0))
                              {
                                Groundness_19 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                              else
                              if ((strcmp(FuncTermFunctor_24, (MR_String) "any_func") == 0))
                              {
                                Groundness_19 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                                succeeded = MR_FALSE;
                              if (succeeded)
                              {
                                {
                                  MaybeFuncRetArgModeTerm_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, MaybeFuncRetArgModeTerm_21, 0) = ((MR_Box) (FuncRetArgModeTerm0_23));
                                }
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  if ((strcmp(BeforeIsFunctor_16, (MR_String) "pred") == 0))
                  {
                    Groundness_19 = (MR_Integer) 0;
                    ArgModeTerms0_20 = BeforeIsArgTerms_17;
                    MaybeFuncRetArgModeTerm_21 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  if ((strcmp(BeforeIsFunctor_16, (MR_String) "any_pred") == 0))
                  {
                    Groundness_19 = (MR_Integer) 1;
                    ArgModeTerms0_20 = BeforeIsArgTerms_17;
                    MaybeFuncRetArgModeTerm_21 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
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
    MR_Word VarSet0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_65, 3))));
    MR_Word MaybeDetism_27;

    hlds__make_hlds__superhomogeneous_lambda__parse_lambda_detism_3_p_0(VarSet0_26, DetismTerm_14, &MaybeDetism_27);
    if ((MaybeDCGVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFuncRetArgModeTerm_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LambdaArgs_30;
        MR_Word BadModeSpecs_31;
        MR_Word SVarSpecs_32;
        MR_Word LambdaHead_33;

        hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0(Context_18, ArgModeTerms0_20, &LambdaArgs_30, &BadModeSpecs_31, &SVarSpecs_32, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
        {
          LambdaHead_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaHead_33, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_11) << 2)) | (((((MR_Unsigned) (Groundness_19) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
          MR_hl_field(0, LambdaHead_33, 1) = ((MR_Box) (LambdaArgs_30));
          MR_hl_field(0, LambdaHead_33, 2) = ((MR_Box) (BadModeSpecs_31));
          MR_hl_field(0, LambdaHead_33, 3) = ((MR_Box) (SVarSpecs_32));
          MR_hl_field(0, LambdaHead_33, 4) = ((MR_Box) (MaybeDetism_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLambdaHead_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LambdaHead_33));
        }
      }
      else
      {
        MR_Word LambdaArgs_295;
        MR_Word BadModeSpecs_296;
        MR_Word SVarSpecs_297;
        MR_Word LambdaHead_298;
        MR_Word FuncRetArgModeTerm_418 = ((MR_Word) ((MR_hl_field(1, MaybeFuncRetArgModeTerm_21, 0))));

        hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0(Context_18, ArgModeTerms0_20, FuncRetArgModeTerm_418, &LambdaArgs_295, &BadModeSpecs_296, &SVarSpecs_297, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
        {
          LambdaHead_298 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaHead_298, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_11) << 2)) | (((((MR_Unsigned) (Groundness_19) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          MR_hl_field(0, LambdaHead_298, 1) = ((MR_Box) (LambdaArgs_295));
          MR_hl_field(0, LambdaHead_298, 2) = ((MR_Box) (BadModeSpecs_296));
          MR_hl_field(0, LambdaHead_298, 3) = ((MR_Box) (SVarSpecs_297));
          MR_hl_field(0, LambdaHead_298, 4) = ((MR_Box) (MaybeDetism_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLambdaHead_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LambdaHead_298));
        }
      }
    else
    {
      MR_Word Var_423 = ((MR_Word) ((MR_hl_field(1, MaybeDCGVars_7, 1))));
      MR_Word Var_424 = ((MR_Word) ((MR_hl_field(1, MaybeDCGVars_7, 0))));

      if ((MaybeFuncRetArgModeTerm_21 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgModeTerms0_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_37;
          MR_Word Spec_38;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_109;
          MR_Word Var_110;

          Var_83 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[14])));
          Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[18])));
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_94);
          Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[8])), Var_82);
          {
            Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_purity_pf_args_det_term\'/5"));
            MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Context_18));
            MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
          }
          Var_110 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_27);
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (Spec_38));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLambdaHead_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
          }
          *STATE_VARIABLE_UrInfo_66 = STATE_VARIABLE_UrInfo_0_65;
        }
        else
        {
          MR_Word Var_425 = ((MR_Word) ((MR_hl_field(1, ArgModeTerms0_20, 1))));
          MR_Word Var_426 = ((MR_Word) ((MR_hl_field(1, ArgModeTerms0_20, 0))));

          if ((Var_425 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_373;
            MR_Word Spec_374;
            MR_Word Var_379;
            MR_Word Var_380;
            MR_Word Var_382;
            MR_Word Var_383;
            MR_Word Var_391;
            MR_Word Var_392;

            Var_380 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[14])));
            Var_383 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[18])));
            Var_382 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_383, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
            Var_379 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_380, Var_382);
            Pieces_373 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[8])), Var_379);
            {
              Spec_374 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_374, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_purity_pf_args_det_term\'/5"));
              MR_hl_field(0, Spec_374, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_374, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_374, 3) = ((MR_Box) (Context_18));
              MR_hl_field(0, Spec_374, 4) = ((MR_Box) (Pieces_373));
            }
            Var_392 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_27);
            {
              Var_391 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_391, 0) = ((MR_Box) (Spec_374));
              MR_hl_field(1, Var_391, 1) = ((MR_Box) (Var_392));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeLambdaHead_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_391));
            }
            *STATE_VARIABLE_UrInfo_66 = STATE_VARIABLE_UrInfo_0_65;
          }
          else
          {
            MR_Word ArgModeTerm2_40 = ((MR_Word) ((MR_hl_field(1, Var_425, 0))));
            MR_Word ArgModeTerms3plus_41 = ((MR_Word) ((MR_hl_field(1, Var_425, 1))));
            MR_Word NonDCGArgModeTerms_42;
            MR_Word DCGModeTerm0_43;
            MR_Word DCGModeTermN_44;
            MR_Word DCGContext0_45;
            MR_Word DCGContextN_46;
            MR_Word DCGVarTerm0_47;
            MR_Word DCGVarTermN_48;
            MR_Word GenericDCGVarTerm0_49;
            MR_Word GenericDCGVarTermN_50;
            MR_Word DCGArgModeTerm0_51;
            MR_Word DCGArgModeTermN_52;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word ArgModeTerms_280;
            MR_Word LambdaArgs_281;
            MR_Word BadModeSpecs_282;
            MR_Word SVarSpecs_283;
            MR_Word LambdaHead_284;
            MR_Box conv1_DCGModeTerm0_43;
            MR_Box conv0_DCGModeTermN_44;

            hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(((MR_Box) (Var_426)), ((MR_Box) (ArgModeTerm2_40)), ArgModeTerms3plus_41, &NonDCGArgModeTerms_42, &conv1_DCGModeTerm0_43, &conv0_DCGModeTermN_44);
            DCGModeTerm0_43 = ((MR_Word) (conv1_DCGModeTerm0_43));
            DCGModeTermN_44 = ((MR_Word) (conv0_DCGModeTermN_44));
            DCGContext0_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTerm0_43);
            DCGContextN_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTermN_44);
            {
              DCGVarTerm0_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DCGVarTerm0_47, 0) = ((MR_Box) (Var_424));
              MR_hl_field(1, DCGVarTerm0_47, 1) = ((MR_Box) (DCGContext0_45));
            }
            {
              DCGVarTermN_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DCGVarTermN_48, 0) = ((MR_Box) (Var_423));
              MR_hl_field(1, DCGVarTermN_48, 1) = ((MR_Box) (DCGContextN_46));
            }
            mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTerm0_47, &GenericDCGVarTerm0_49);
            mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTermN_48, &GenericDCGVarTermN_50);
            {
              Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_115, 0) = ((MR_Box) (DCGModeTerm0_43));
              MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (GenericDCGVarTerm0_49));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
            }
            {
              DCGArgModeTerm0_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DCGArgModeTerm0_51, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_3[0]));
              MR_hl_field(0, DCGArgModeTerm0_51, 1) = ((MR_Box) (Var_114));
              MR_hl_field(0, DCGArgModeTerm0_51, 2) = ((MR_Box) (DCGContext0_45));
            }
            {
              Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_120, 0) = ((MR_Box) (DCGModeTermN_44));
              MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (GenericDCGVarTermN_50));
              MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
            }
            {
              DCGArgModeTermN_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DCGArgModeTermN_52, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_3[0]));
              MR_hl_field(0, DCGArgModeTermN_52, 1) = ((MR_Box) (Var_119));
              MR_hl_field(0, DCGArgModeTermN_52, 2) = ((MR_Box) (DCGContextN_46));
            }
            {
              Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_123, 0) = ((MR_Box) (DCGArgModeTermN_52));
              MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (DCGArgModeTerm0_51));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
            }
            ArgModeTerms_280 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[0]), NonDCGArgModeTerms_42, Var_122);
            hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0(Context_18, ArgModeTerms_280, &LambdaArgs_281, &BadModeSpecs_282, &SVarSpecs_283, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
            {
              LambdaHead_284 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LambdaHead_284, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_11) << 2)) | (((((MR_Unsigned) (Groundness_19) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
              MR_hl_field(0, LambdaHead_284, 1) = ((MR_Box) (LambdaArgs_281));
              MR_hl_field(0, LambdaHead_284, 2) = ((MR_Box) (BadModeSpecs_282));
              MR_hl_field(0, LambdaHead_284, 3) = ((MR_Box) (SVarSpecs_283));
              MR_hl_field(0, LambdaHead_284, 4) = ((MR_Box) (MaybeDetism_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLambdaHead_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LambdaHead_284));
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
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Pieces_299;
        MR_Word Spec_300;

        Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[23])));
        Var_143 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[27])));
        Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
        Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[25])), Var_142);
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_137);
        Pieces_299 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[21])), Var_131);
        {
          Spec_300 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_300, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_purity_pf_args_det_term\'/5"));
          MR_hl_field(0, Spec_300, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_300, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_300, 3) = ((MR_Box) (Context_18));
          MR_hl_field(0, Spec_300, 4) = ((MR_Box) (Pieces_299));
        }
        Var_155 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_27);
        {
          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_154, 0) = ((MR_Box) (Spec_300));
          MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_155));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLambdaHead_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_154));
        }
        *STATE_VARIABLE_UrInfo_66 = STATE_VARIABLE_UrInfo_0_65;
      }
    }
  }
  else
  {
    MR_Word Context_345;
    MR_Word Groundness_346;
    MR_Word ArgModeTerms_351;
    MR_Word FuncRetArgModeTerm_358;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_String BeforeIsFunctor_314;
    MR_Word BeforeIsArgTerms_315;
    MR_Word FuncArgsTerm_316;
    MR_String FuncTermFunctor_317;

    succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_156 = ((MR_Word) ((MR_hl_field(0, PFArgsDetTerm_12, 0))));
      BeforeIsArgTerms_315 = ((MR_Word) ((MR_hl_field(0, PFArgsDetTerm_12, 1))));
      Context_345 = ((MR_Word) ((MR_hl_field(0, PFArgsDetTerm_12, 2))));
      succeeded = ((MR_tag((MR_Word) Var_156)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_314 = ((MR_String) ((MR_hl_field(0, Var_156, 0))));
        succeeded = (strcmp(BeforeIsFunctor_314, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (BeforeIsArgTerms_315 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncArgsTerm_316 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_315, 0))));
            Var_157 = ((MR_Word) ((MR_hl_field(1, BeforeIsArgTerms_315, 1))));
            succeeded = (Var_157 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncRetArgModeTerm_358 = ((MR_Word) ((MR_hl_field(1, Var_157, 0))));
              Var_158 = ((MR_Word) ((MR_hl_field(1, Var_157, 1))));
              succeeded = (Var_158 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FuncArgsTerm_316)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_159 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_316, 0))));
                  ArgModeTerms_351 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_316, 1))));
                  succeeded = ((MR_tag((MR_Word) Var_159)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    FuncTermFunctor_317 = ((MR_String) ((MR_hl_field(0, Var_159, 0))));
                    if ((strcmp(FuncTermFunctor_317, (MR_String) "func") == 0))
                    {
                      Groundness_346 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(FuncTermFunctor_317, (MR_String) "any_func") == 0))
                    {
                      Groundness_346 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      if ((MaybeDCGVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LambdaArgs_319;
        MR_Word BadModeSpecs_320;
        MR_Word SVarSpecs_321;
        MR_Word LambdaHead_322;

        hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0(Context_345, ArgModeTerms_351, FuncRetArgModeTerm_358, &LambdaArgs_319, &BadModeSpecs_320, &SVarSpecs_321, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
        {
          LambdaHead_322 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaHead_322, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_11) << 2)) | (((((MR_Unsigned) (Groundness_346) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          MR_hl_field(0, LambdaHead_322, 1) = ((MR_Box) (LambdaArgs_319));
          MR_hl_field(0, LambdaHead_322, 2) = ((MR_Box) (BadModeSpecs_320));
          MR_hl_field(0, LambdaHead_322, 3) = ((MR_Box) (SVarSpecs_321));
          MR_hl_field(0, LambdaHead_322, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_3[1])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLambdaHead_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LambdaHead_322));
        }
      }
      else
      {
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_172;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_189;
        MR_Word Pieces_323;
        MR_Word Spec_324;

        Var_167 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[23])));
        Var_178 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[27])));
        Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_178, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
        Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[25])), Var_177);
        Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, Var_172);
        Pieces_323 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[21])), Var_166);
        {
          Spec_324 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_324, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_purity_pf_args_det_term\'/5"));
          MR_hl_field(0, Spec_324, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_324, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_324, 3) = ((MR_Box) (Context_345));
          MR_hl_field(0, Spec_324, 4) = ((MR_Box) (Pieces_323));
        }
        {
          Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_189, 0) = ((MR_Box) (Spec_324));
          MR_hl_field(1, Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLambdaHead_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_189));
        }
        *STATE_VARIABLE_UrInfo_66 = STATE_VARIABLE_UrInfo_0_65;
      }
    else
    {
      MR_Word Var_195;
      MR_Word Var_196;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_206;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_215;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_224;
      MR_Word Var_228;
      MR_Word Var_229;
      MR_Word Var_233;
      MR_Word Var_237;
      MR_Word Var_238;
      MR_Word Var_242;
      MR_Word Var_246;
      MR_Word Var_247;
      MR_Word Var_278;
      MR_Word Context_340;
      MR_Word Pieces_341;
      MR_Word Spec_342;

      Var_196 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[31])));
      Var_202 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[33])));
      Var_211 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[35])));
      Var_220 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[37])));
      Var_229 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[39])));
      Var_238 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[41])));
      Var_247 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[43])));
      Var_246 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_247, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[56])));
      Var_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])), Var_246);
      Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_238, Var_242);
      Var_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])), Var_237);
      Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_229, Var_233);
      Var_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])), Var_228);
      Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_220, Var_224);
      Var_215 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])), Var_219);
      Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_211, Var_215);
      Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])), Var_210);
      Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, Var_206);
      Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, Var_201);
      Pieces_341 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[29])), Var_195);
      Context_340 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PFArgsDetTerm_12);
      {
        Spec_342 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_342, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_purity_pf_args_det_term\'/5"));
        MR_hl_field(0, Spec_342, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_342, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_342, 3) = ((MR_Box) (Context_340));
        MR_hl_field(0, Spec_342, 4) = ((MR_Box) (Pieces_341));
      }
      hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
      {
        Var_278 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_278, 0) = ((MR_Box) (Spec_342));
        MR_hl_field(1, Var_278, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLambdaHead_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_278));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word Term0_4,
  MR_Word * Purity_5,
  MR_Word * Term_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term0_4)) == (MR_Integer) 0);
  MR_Word Term1_8;
  MR_Word Purity0_10;
  MR_String PurityName_7;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term0_4, 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term0_4, 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      PurityName_7 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Term1_8 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = parse_tree__parse_tree_out_misc__purity_name_2_p_1(&Purity0_10, PurityName_7);
      }
    }
  }
  if (succeeded)
  {
    *Purity_5 = Purity0_10;
    *Term_6 = Term1_8;
  }
  else
  {
    *Purity_5 = (MR_Integer) 0;
    *Term_6 = Term0_4;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(
  MR_Box Element1_7,
  MR_Box Element2_8,
  MR_Word Elements3plus_9,
  MR_Word * Main_10,
  MR_Box * LastButOne_11,
  MR_Box * Last_12)
{
  if ((Elements3plus_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Main_10 = (MR_Word) ((MR_Unsigned) 0U);
    *LastButOne_11 = Element1_7;
    *Last_12 = Element2_8;
  }
  else
  {
    MR_Box Element3_13 = (MR_hl_field(1, Elements3plus_9, 0));
    MR_Word Elements4plus_14 = ((MR_Word) ((MR_hl_field(1, Elements3plus_9, 1))));
    MR_Word MainTail_15;

    hlds__make_hlds__superhomogeneous_lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(Element2_8, Element3_13, Elements4plus_14, &MainTail_15, LastButOne_11, Last_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Main_10 = base;
      MR_hl_field(1, base, 0) = Element1_7;
      MR_hl_field(1, base, 1) = ((MR_Box) (MainTail_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_detism_3_p_0(
  MR_Word VarSet_4,
  MR_Word DetismTerm_5,
  MR_Word * MaybeDetism_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) DetismTerm_5)) == (MR_Integer) 0);
  MR_Word Detism_9;
  MR_String DetString_7;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(0, DetismTerm_5, 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(0, DetismTerm_5, 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        DetString_7 = ((MR_String) ((MR_hl_field(0, Var_14, 0))));
        succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetString_7, &Detism_9);
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDetism_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Detism_9));
    }
  else
  {
    MR_Word GenericVarSet_10;
    MR_String TermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_34;
    MR_Word Var_35;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, &GenericVarSet_10);
    TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), GenericVarSet_10, DetismTerm_5);
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (TermStr_11));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[73])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[8])), Var_20);
    Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_5);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.parse_lambda_detism\'/3"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDetism_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__add_some_not_all_args_have_modes_error__453__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_pred_7_p_0(
  MR_Word Context_8,
  MR_Word ArgModeTerms_9,
  MR_Word * LambdaArgs_10,
  MR_Word * STATE_VARIABLE_BadModeSpecs_21,
  MR_Word * STATE_VARIABLE_SVarSpecs_22,
  MR_Word STATE_VARIABLE_UrInfo_0_23,
  MR_Word * STATE_VARIABLE_UrInfo_24)
{
  MR_Word PresentArgs_15;
  MR_Word AbsentArgs_16;
  MR_Word STATE_VARIABLE_BadModeSpecs_2_29;
  MR_Integer Var_14;

  hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_9, LambdaArgs_10, (MR_Integer) 1, &Var_14, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_2_29, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SVarSpecs_22, STATE_VARIABLE_UrInfo_0_23, STATE_VARIABLE_UrInfo_24);
  hlds__make_hlds__superhomogeneous_lambda__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_10, &PresentArgs_15, &AbsentArgs_16);
  if ((AbsentArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_BadModeSpecs_21 = STATE_VARIABLE_BadModeSpecs_2_29;
  else
  if ((PresentArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_30;
    MR_Word Spec_31;
    MR_Word Var_36;
    MR_Word Var_37;

    Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[68])));
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
    Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[66])), Var_36);
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.add_pred_no_args_have_modes_error\'/3"));
      MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_31, 4) = ((MR_Box) (Pieces_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_2_29));
    }
  }
  else
  {
    MR_Word AbsentArgPieces_49;
    MR_Word AbsentArgsDotPieces_50;
    MR_Word Pieces_51;
    MR_Word Spec_52;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;

    AbsentArgPieces_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[3]), AbsentArgs_16);
    AbsentArgsDotPieces_50 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[57])), AbsentArgPieces_49);
    Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[61])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AbsentArgsDotPieces_50, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[64])), Var_63);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_61);
    Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[59])), Var_58);
    {
      Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.add_some_not_all_args_have_modes_error\'/4"));
      MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_52, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_2_29));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = hlds__make_hlds__superhomogeneous_lambda__IntroducedFrom__func__add_some_not_all_args_have_modes_error__453__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_func_8_p_0(
  MR_Word Context_9,
  MR_Word ArgModeTerms_10,
  MR_Word FuncRetArgModeTerm_11,
  MR_Word * LambdaArgs_12,
  MR_Word * STATE_VARIABLE_BadModeSpecs_26,
  MR_Word * STATE_VARIABLE_SVarSpecs_27,
  MR_Word STATE_VARIABLE_UrInfo_0_28,
  MR_Word * STATE_VARIABLE_UrInfo_29)
{
  MR_Word OrdinaryLambdaArgs_16;
  MR_Integer ResultArgNum_17;
  MR_Word FuncRetLambdaArg_18;
  MR_Word PresentArgs_20;
  MR_Word AbsentArgs_21;
  MR_Word STATE_VARIABLE_BadModeSpecs_2_34;
  MR_Word STATE_VARIABLE_SVarSpecs_2_35;
  MR_Word STATE_VARIABLE_UrInfo_1_36;
  MR_Word STATE_VARIABLE_BadModeSpecs_3_38;
  MR_Word Var_41;
  MR_Integer Var_19;

  hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_10, &OrdinaryLambdaArgs_16, (MR_Integer) 1, &ResultArgNum_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_2_34, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_SVarSpecs_2_35, STATE_VARIABLE_UrInfo_0_28, &STATE_VARIABLE_UrInfo_1_36);
  hlds__make_hlds__superhomogeneous_lambda__parse_lambda_arg_11_p_0((MR_Integer) 1, FuncRetArgModeTerm_11, &FuncRetLambdaArg_18, ResultArgNum_17, &Var_19, STATE_VARIABLE_BadModeSpecs_2_34, &STATE_VARIABLE_BadModeSpecs_3_38, STATE_VARIABLE_SVarSpecs_2_35, STATE_VARIABLE_SVarSpecs_27, STATE_VARIABLE_UrInfo_1_36, STATE_VARIABLE_UrInfo_29);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (FuncRetLambdaArg_18));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *LambdaArgs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), OrdinaryLambdaArgs_16, Var_41);
  hlds__make_hlds__superhomogeneous_lambda__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_12, &PresentArgs_20, &AbsentArgs_21);
  if ((AbsentArgs_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_BadModeSpecs_26 = STATE_VARIABLE_BadModeSpecs_3_38;
  else
  if ((PresentArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_BadModeSpecs_26 = STATE_VARIABLE_BadModeSpecs_3_38;
  else
  {
    MR_Word AbsentArgPieces_44;
    MR_Word AbsentArgsDotPieces_45;
    MR_Word Pieces_46;
    MR_Word Spec_47;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_58;

    AbsentArgPieces_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_lambda_scalar_common_2[2]), AbsentArgs_21);
    AbsentArgsDotPieces_45 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[57])), AbsentArgPieces_44);
    Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[61])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AbsentArgsDotPieces_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[19])));
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[64])), Var_58);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_56);
    Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[59])), Var_53);
    {
      Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_lambda.add_some_not_all_args_have_modes_error\'/4"));
      MR_hl_field(0, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_47, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_47, 4) = ((MR_Box) (Pieces_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_47));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_3_38));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_ArgNum_0_4,
  MR_Integer * STATE_VARIABLE_ArgNum_5,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_6,
  MR_Word * STATE_VARIABLE_BadModeSpecs_7,
  MR_Word STATE_VARIABLE_SVarSpecs_0_8,
  MR_Word * STATE_VARIABLE_SVarSpecs_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_11 = STATE_VARIABLE_UrInfo_0_10;
    *STATE_VARIABLE_SVarSpecs_9 = STATE_VARIABLE_SVarSpecs_0_8;
    *STATE_VARIABLE_BadModeSpecs_7 = STATE_VARIABLE_BadModeSpecs_0_6;
    *STATE_VARIABLE_ArgNum_5 = STATE_VARIABLE_ArgNum_0_4;
  }
  else
  {
    MR_Word HeadArgModeTerm_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailArgModeTerms_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word HeadLambdaArg_28;
    MR_Word TailLambdaArgs_29;
    MR_Integer STATE_VARIABLE_ArgNum_1_42;
    MR_Word STATE_VARIABLE_BadModeSpecs_1_43;
    MR_Word STATE_VARIABLE_SVarSpecs_1_44;
    MR_Word STATE_VARIABLE_UrInfo_1_45;

    hlds__make_hlds__superhomogeneous_lambda__parse_lambda_arg_11_p_0(HeadVar__1_1, HeadArgModeTerm_26, &HeadLambdaArg_28, STATE_VARIABLE_ArgNum_0_4, &STATE_VARIABLE_ArgNum_1_42, STATE_VARIABLE_BadModeSpecs_0_6, &STATE_VARIABLE_BadModeSpecs_1_43, STATE_VARIABLE_SVarSpecs_0_8, &STATE_VARIABLE_SVarSpecs_1_44, STATE_VARIABLE_UrInfo_0_10, &STATE_VARIABLE_UrInfo_1_45);
    hlds__make_hlds__superhomogeneous_lambda__parse_lambda_args_11_p_0(HeadVar__1_1, TailArgModeTerms_27, &TailLambdaArgs_29, STATE_VARIABLE_ArgNum_1_42, STATE_VARIABLE_ArgNum_5, STATE_VARIABLE_BadModeSpecs_1_43, STATE_VARIABLE_BadModeSpecs_7, STATE_VARIABLE_SVarSpecs_1_44, STATE_VARIABLE_SVarSpecs_9, STATE_VARIABLE_UrInfo_1_45, STATE_VARIABLE_UrInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadLambdaArg_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailLambdaArgs_29));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__parse_lambda_arg_11_p_0(
  MR_Word Kind_12,
  MR_Word ArgModeTerm_13,
  MR_Word * LambdaArg_14,
  MR_Integer STATE_VARIABLE_ArgNum_0_39,
  MR_Integer * STATE_VARIABLE_ArgNum_40,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_41,
  MR_Word * STATE_VARIABLE_BadModeSpecs_42,
  MR_Word STATE_VARIABLE_SVarSpecs_0_43,
  MR_Word * STATE_VARIABLE_SVarSpecs_44,
  MR_Word STATE_VARIABLE_UrInfo_0_45,
  MR_Word * STATE_VARIABLE_UrInfo_46)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgModeTerm_13)) == (MR_Integer) 0);
  MR_Word ArgTerm_22;
  MR_Word PresentOrAbsent_23;
  MR_Word ModeContext_24;
  MR_Word Mode_30;
  MR_Word ProgArgTerm_32;
  MR_String LambdaVarName_37;
  MR_Word LambdaVar_38;
  MR_String Var_65;
  MR_Word ArgTermPrime_19;
  MR_Word ModeTerm_20;
  MR_Word Var_47;
  MR_String Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word StateVar_33;
  MR_Word StateVarContext_34;

  if (succeeded)
  {
    Var_47 = ((MR_Word) ((MR_hl_field(0, ArgModeTerm_13, 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, ArgModeTerm_13, 1))));
    succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, 0))));
      succeeded = (strcmp(Var_48, (MR_String) "::") == 0);
      if (succeeded)
      {
        succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTermPrime_19 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModeTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_50, 0))));
            Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, 1))));
            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ContextPieces_25;
    MR_Word VarSet0_26;
    MR_Word GenericVarSet_27;
    MR_Word MaybeMode0_28;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_56;

    ArgTerm_22 = ArgTermPrime_19;
    PresentOrAbsent_23 = (MR_Integer) 1;
    ModeContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModeTerm_20);
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_39));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[71])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_lambda_scalar_common_1[69])));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
    }
    ContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52);
    VarSet0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_45, 3))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_26, &GenericVarSet_27);
    parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), GenericVarSet_27, ContextPieces_25, ModeTerm_20, &MaybeMode0_28);
    if (((MR_tag((MR_Word) MaybeMode0_28)) == (MR_Integer) 0))
    {
      MR_Word ModeSpecs_31 = ((MR_Word) ((MR_hl_field(0, MaybeMode0_28, 0))));

      *STATE_VARIABLE_BadModeSpecs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModeSpecs_31, STATE_VARIABLE_BadModeSpecs_0_41);
      switch (Kind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__prog_mode__out_mode_1_p_0(&Mode_30);
          break;
        case (MR_Integer) 0:
          parse_tree__prog_mode__in_mode_1_p_0(&Mode_30);
          break;
      }
    }
    else
    {
      MR_Word Mode0_29 = ((MR_Word) ((MR_hl_field(1, MaybeMode0_28, 0))));

      parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(Mode0_29, &Mode_30);
      *STATE_VARIABLE_BadModeSpecs_42 = STATE_VARIABLE_BadModeSpecs_0_41;
    }
  }
  else
  {
    ArgTerm_22 = ArgModeTerm_13;
    PresentOrAbsent_23 = (MR_Integer) 0;
    switch (Kind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__prog_mode__out_mode_1_p_0(&Mode_30);
        break;
      case (MR_Integer) 0:
        parse_tree__prog_mode__in_mode_1_p_0(&Mode_30);
        break;
    }
    ModeContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgModeTerm_13);
    *STATE_VARIABLE_BadModeSpecs_42 = STATE_VARIABLE_BadModeSpecs_0_41;
  }
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm_22, &ProgArgTerm_32);
  succeeded = hlds__make_hlds__state_var__is_term_a_bang_state_pair_3_p_0(ProgArgTerm_32, &StateVar_33, &StateVarContext_34);
  if (succeeded)
  {
    MR_Word VarSet1_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_45, 3))));
    MR_Word SVarSpec_36;

    switch (Kind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        SVarSpec_36 = hlds__make_hlds__state_var__report_illegal_func_svar_result_raw_3_f_0(StateVarContext_34, VarSet1_35, StateVar_33);
        break;
      case (MR_Integer) 0:
        SVarSpec_36 = hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_raw_3_f_0(StateVarContext_34, VarSet1_35, StateVar_33);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_SVarSpecs_44 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SVarSpec_36));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_SVarSpecs_0_43));
    }
  }
  else
    *STATE_VARIABLE_SVarSpecs_44 = STATE_VARIABLE_SVarSpecs_0_43;
  Var_65 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_ArgNum_0_39);
  LambdaVarName_37 = mercury__string__f_43_43_2_f_0((MR_String) "LambdaHeadVar__", Var_65);
  hlds__make_hlds__state_var__create_new_named_unravel_var_4_p_0(LambdaVarName_37, &LambdaVar_38, STATE_VARIABLE_UrInfo_0_45, STATE_VARIABLE_UrInfo_46);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *LambdaArg_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProgArgTerm_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (LambdaVar_38));
    MR_hl_field(0, base, 3) = (MR_Box) (((((MR_Unsigned) (Kind_12) << 1)) | (MR_Unsigned) (PresentOrAbsent_23)));
    MR_hl_field(0, base, 4) = ((MR_Box) (Mode_30));
    MR_hl_field(0, base, 5) = ((MR_Box) (ModeContext_24));
  }
  *STATE_VARIABLE_ArgNum_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_39 + (MR_Unsigned) 1);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda__classify_lambda_arg_modes_present_absent_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word LambdaArg_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word LambdaArgs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word PresentArgsTail_8;
    MR_Word AbsentArgsTail_9;
    MR_Word PresentOrAbsent_10;

    hlds__make_hlds__superhomogeneous_lambda__classify_lambda_arg_modes_present_absent_3_p_0(LambdaArgs_5, &PresentArgsTail_8, &AbsentArgsTail_9);
    PresentOrAbsent_10 = ((MR_Unsigned) ((MR_hl_field(0, LambdaArg_4, 3))) & (MR_Integer) 1);
    switch (PresentOrAbsent_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = PresentArgsTail_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (LambdaArg_4));
            MR_hl_field(1, base, 1) = ((MR_Box) (AbsentArgsTail_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (LambdaArg_4));
            MR_hl_field(1, base, 1) = ((MR_Box) (PresentArgsTail_8));
          }
          *HeadVar__3_3 = AbsentArgsTail_9;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_arg_mode_presence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_arg_mode_presence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_body_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_body_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_body_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_body_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____lambda_head_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____lambda_head_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_lambda____Unify____maybe_dcg_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_lambda____Compare____maybe_dcg_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__superhomogeneous_lambda__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous_lambda__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_kind_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_arg_mode_presence_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_body_kind_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_lambda_head_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_lambda__hlds__make_hlds__superhomogeneous_lambda__type_ctor_info_maybe_dcg_vars_0);
}

void mercury__hlds__make_hlds__superhomogeneous_lambda__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__superhomogeneous_lambda__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.superhomogeneous_lambda.
