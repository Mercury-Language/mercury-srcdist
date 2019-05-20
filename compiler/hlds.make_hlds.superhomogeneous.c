/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2019-05-20
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


// :- module hlds.make_hlds.superhomogeneous.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__superhomogeneous__init
ENDINIT
*/

#include "hlds.make_hlds.superhomogeneous.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "digraph.mih"
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
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_arg_context_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_arg_0_0[7];

static const MR_ConstString hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_names_lambda_arg_0_0[7];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_arg_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_arg_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_arg_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_arg_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_kind_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_mode_presence_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_body_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_body_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_body_kind_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_1parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_head_0_0[8];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_head_0_0[8];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_head_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_head_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_head_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_head_0[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_dcg_vars_0_1[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_dcg_vars_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_dcg_vars_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_dcg_vars_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2];

static MR_String MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__1883__1_3_f_0(
  MR_Word InstVarSet_47,
  MR_Word HeadVar__2_105,
  MR_Word HeadVar__3_212);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVars_0_2,
  MR_Word * STATE_VARIABLE_RevVars_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word LHS0_21,
  MR_Word RHS0_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word XTerm_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_55,
  MR_Word * STATE_VARIABLE_SVarState_56,
  MR_Word STATE_VARIABLE_SVarStore_0_57,
  MR_Word * STATE_VARIABLE_SVarStore_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word XVar_23,
  MR_String YAtom_24,
  MR_Word YArgTerms_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_142,
  MR_Word * STATE_VARIABLE_SVarState_143,
  MR_Word STATE_VARIABLE_SVarStore_0_144,
  MR_Word * STATE_VARIABLE_SVarStore_145,
  MR_Word STATE_VARIABLE_VarSet_0_146,
  MR_Word * STATE_VARIABLE_VarSet_147,
  MR_Word STATE_VARIABLE_ModuleInfo_0_148,
  MR_Word * STATE_VARIABLE_ModuleInfo_149,
  MR_Word STATE_VARIABLE_QualInfo_0_150,
  MR_Word * STATE_VARIABLE_QualInfo_151,
  MR_Word STATE_VARIABLE_Specs_0_152,
  MR_Word * STATE_VARIABLE_Specs_153);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word LHSVar_21,
  MR_Word RHS0_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_36,
  MR_Word * STATE_VARIABLE_SVarState_37,
  MR_Word STATE_VARIABLE_SVarStore_0_38,
  MR_Word * STATE_VARIABLE_SVarStore_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word XVar_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_SVarStore_0_43,
  MR_Word * STATE_VARIABLE_SVarStore_44,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
  MR_Word XVar_20,
  MR_Word YTerm_21,
  MR_Word Context_22,
  MR_Word ArgContext_23,
  MR_Integer ArgNum_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_42,
  MR_Word * STATE_VARIABLE_SVarState_43,
  MR_Word STATE_VARIABLE_SVarStore_0_44,
  MR_Word * STATE_VARIABLE_SVarStore_45,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word STATE_VARIABLE_QualInfo_0_50,
  MR_Word * STATE_VARIABLE_QualInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(
  MR_Word XVar_20,
  MR_Word Purity_21,
  MR_Word Context_22,
  MR_Word MainContext_23,
  MR_Word SubContext_24,
  MR_Word PurityPFArgsDetTerm_25,
  MR_Word MaybeLambdaBody_26,
  MR_Word * Expansion_27,
  MR_Word STATE_VARIABLE_SVarState_0_46,
  MR_Word STATE_VARIABLE_SVarStore_0_47,
  MR_Word * STATE_VARIABLE_SVarStore_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word XVar_23,
  MR_Word YFunctor_24,
  MR_Word YArgTerms0_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_62,
  MR_Word * STATE_VARIABLE_SVarState_63,
  MR_Word STATE_VARIABLE_SVarStore_0_64,
  MR_Word * STATE_VARIABLE_SVarStore_65,
  MR_Word STATE_VARIABLE_VarSet_0_66,
  MR_Word * STATE_VARIABLE_VarSet_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
  MR_Word XVars_19,
  MR_Word YTerms_20,
  MR_Word ArgContexts_21,
  MR_Word Context_22,
  MR_Word * Expansions_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_SVarStore_0_42,
  MR_Word * STATE_VARIABLE_SVarStore_43,
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_SeenXVars_0_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_SVarState_0_9,
  MR_Word * STATE_VARIABLE_SVarState_10,
  MR_Word STATE_VARIABLE_SVarStore_0_11,
  MR_Word * STATE_VARIABLE_SVarStore_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_SVarStore_0_10,
  MR_Word * STATE_VARIABLE_SVarStore_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_QualInfo_0_16,
  MR_Word * STATE_VARIABLE_QualInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0(
  MR_Word LHSVar_20,
  MR_Word UnificationPurity_21,
  MR_Word Context_22,
  MR_Word MainContext_23,
  MR_Word SubContext_24,
  MR_Word LambdaHead_25,
  MR_Word MaybeBodyGoal_26,
  MR_Word * Expansion_27,
  MR_Word OutsideSVarState_28,
  MR_Word STATE_VARIABLE_SVarStore_0_92,
  MR_Word * STATE_VARIABLE_SVarStore_93,
  MR_Word STATE_VARIABLE_VarSet_0_94,
  MR_Word * STATE_VARIABLE_VarSet_95,
  MR_Word STATE_VARIABLE_ModuleInfo_0_96,
  MR_Word * STATE_VARIABLE_ModuleInfo_97,
  MR_Word STATE_VARIABLE_QualInfo_0_98,
  MR_Word * STATE_VARIABLE_QualInfo_99,
  MR_Word STATE_VARIABLE_Specs_0_100,
  MR_Word * STATE_VARIABLE_Specs_101);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0(
  MR_Word LambdaArgs0_8,
  MR_Word * LambdaArgs_9,
  MR_Word * Modes_10,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_MQInfo_0_5,
  MR_Word * STATE_VARIABLE_MQInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(
  MR_Word PurityPFArgsDetTerm_8,
  MR_Word MaybeDCGVars_9,
  MR_Word * MaybeLambdaHead_10,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_QualInfo_0_64,
  MR_Word * STATE_VARIABLE_QualInfo_65);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word Term0_4,
  MR_Word * Purity_5,
  MR_Word * Term_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(
  MR_Box Element1_7,
  MR_Box Element2_8,
  MR_Word Elements3plus_9,
  MR_Word * Main_10,
  MR_Box * LastButOne_11,
  MR_Box * Last_12);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(
  MR_Word VarSet_4,
  MR_Word DetismTerm_5,
  MR_Word * MaybeDetism_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(
  MR_Word Context_8,
  MR_Word ArgModeTerms_9,
  MR_Word * LambdaArgs_10,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word * STATE_VARIABLE_BadModeSpecs_23,
  MR_Word * STATE_VARIABLE_SVarSpecs_24);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(
  MR_Word Context_9,
  MR_Word ArgModeTerms_10,
  MR_Word FuncRetArgModeTerm_11,
  MR_Word * LambdaArgs_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * STATE_VARIABLE_BadModeSpecs_28,
  MR_Word * STATE_VARIABLE_SVarSpecs_29);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_ArgNum_0_4,
  MR_Integer * STATE_VARIABLE_ArgNum_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_8,
  MR_Word * STATE_VARIABLE_BadModeSpecs_9,
  MR_Word STATE_VARIABLE_SVarSpecs_0_10,
  MR_Word * STATE_VARIABLE_SVarSpecs_11);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(
  MR_Word Kind_12,
  MR_Word ArgModeTerm_13,
  MR_Word * LambdaArg_14,
  MR_Integer STATE_VARIABLE_ArgNum_0_36,
  MR_Integer * STATE_VARIABLE_ArgNum_37,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_40,
  MR_Word * STATE_VARIABLE_BadModeSpecs_41,
  MR_Word STATE_VARIABLE_SVarSpecs_0_42,
  MR_Word * STATE_VARIABLE_SVarSpecs_43);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Expansion_6,
  MR_Word BaseGoal_7,
  MR_Word * Goal_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * MaybeWrappedGoalCord_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * Goal_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_95_105_100_95_95_104_111_49_48_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_56,
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__745__1_1_f_0(
  MR_Integer LambdaHeadVar__1_91);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho9_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__750__1_1_f_0(
  MR_Unsigned LambdaHeadVar__1_84);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho8_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__759__1_1_f_0(
  int8_t LambdaHeadVar__1_77);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho7_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__764__1_1_f_0(
  uint8_t LambdaHeadVar__1_70);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho6_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__772__1_1_f_0(
  int16_t LambdaHeadVar__1_63);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho5_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__777__1_1_f_0(
  uint16_t LambdaHeadVar__1_56);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho4_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__785__1_1_f_0(
  int32_t LambdaHeadVar__1_49);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho3_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__790__1_1_f_0(
  uint32_t LambdaHeadVar__1_42);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho2_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__798__1_1_f_0(
  int64_t LambdaHeadVar__1_35);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho1_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__803__1_1_f_0(
  uint64_t LambdaHeadVar__1_28);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
  MR_Word GoalInfo_7,
  MR_Word TermVar_8,
  MR_Word BaseGoal_9,
  MR_Integer BaseGoalSize_10,
  MR_Word ArgExpansions_11,
  MR_Word * Expansion_12);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * STATE_VARIABLE_AllFGTI_3,
  MR_Integer STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * STATE_VARIABLE_TotalSize_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Expansions_6,
  MR_Word BaseGoal_7,
  MR_Word * Goal_8);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[104][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[4][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[4][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[8][1];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_6[1][7];


/* sealed */ struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s hlds__make_hlds__superhomogeneous_vector_common_7[32];



static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[104][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is outside the range of that type."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<lambda expression head> :- <lambda expression body>"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can be used only in expressions of the form"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a field update expression:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the right hand side"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a field selection expression:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have at least arguments."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that is defined by a DCG clause"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the head of a lambda expression"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in clauses for functions."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: DCG notation is not allowed"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or one of those forms preceded by either"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg>"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg>"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg> is <determinism>"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg> is <determinism>"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<args>) is <determinism>"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<args>) is <determinism>"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have one of the following forms:"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the clause head part of a lambda expression"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "some but not all arguments have modes."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in head of lambda expression:"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "none of the arguments have modes."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in head of predicate lambda expression:"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are inconsistent."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "integer literal"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of the lambda expression:"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 94 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 95 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 97 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 98 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 99 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the constraints on the inst"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the body of lambda expression:"))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the clause neck operator"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[2])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[3])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[8][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[79])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[83])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[39])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[43])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[75])))
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s hlds__make_hlds__superhomogeneous_vector_common_7[32] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) "\100" },
  /* row 2 */   {     (MR_String) "is" },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     (MR_String) "else" },
  /* row 6 */   {     NULL },
  /* row 7 */   {     (MR_String) "-->" },
  /* row 8 */   {     (MR_String) "with_type" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) ":-" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) ";" },
  /* row 27 */   {     (MR_String) ":" },
  /* row 28 */   {     (MR_String) "=" },
  /* row 29 */   {     (MR_String) ":=" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "^" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_arg_context_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0 = {
  (MR_String) "ac_head",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0,
  NULL,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_arg_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1 = {
  (MR_String) "ac_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2 = {
  (MR_String) "ac_functor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "arg_context",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0 = {
  (MR_String) "expansion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "expansion",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_arg_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_mode_presence_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_names_lambda_arg_0_0[7] = {
  (MR_String) "la_arg_num",
  (MR_String) "la_arg_term",
  (MR_String) "la_arg_var",
  (MR_String) "la_kind",
  (MR_String) "la_arg_mode_presence",
  (MR_String) "la_arg_mode",
  (MR_String) "la_arg_mode_context"
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_arg_0_0[7] = {
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

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0 = {
  (MR_String) "lambda_arg",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_arg_0_0,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_names_lambda_arg_0_0,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_arg_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_arg_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_arg_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_arg_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_arg_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_0 = {
  (MR_String) "lambda_arg_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_1 = {
  (MR_String) "lambda_arg_func_result",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_0,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg_kind",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_kind_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_kind_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0 = {
  (MR_String) "lam_absent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1 = {
  (MR_String) "lam_present",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_mode_presence_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_mode_presence_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_mode_presence_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_mode_presence_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg_mode_presence",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_mode_presence_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_arg_mode_presence_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_mode_presence_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0 = {
  (MR_String) "lambda_body_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1 = {
  (MR_String) "lambda_body_dcg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_body_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_body_kind_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_body_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_body_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_body_kind",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_body_kind_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_value_ordered_lambda_body_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_body_kind_0
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_1parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_head_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_groundness_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_lambda_eval_method_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_1parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_head_0_0[8] = {
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
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0 = {
  (MR_String) "lambda_head",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_head_0_0,
  NULL,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_head_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_head_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_head_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_head_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_head_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_head_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_head_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_head",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_head_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_head_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_head_0
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_0 = {
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

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_dcg_vars_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_1 = {
  (MR_String) "dcg_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_dcg_vars_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_1
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_dcg_vars_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_dcg_vars_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_dcg_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_dcg_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_dcg_vars",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_dcg_vars_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_dcg_vars_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_dcg_vars_0
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0 = {
  (MR_String) "not_fgti",
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

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1 = {
  (MR_String) "fgti_var_size",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_fgti_var_size",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0
};

static MR_String MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__1883__1_3_f_0(
  MR_Word InstVarSet_47,
  MR_Word HeadVar__2_105,
  MR_Word HeadVar__3_212)
{
  {
    MR_String HeadVar__4_213;

    HeadVar__4_213 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_47, HeadVar__2_105, HeadVar__3_212);
    return HeadVar__4_213;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_26 == CastY_27);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX5_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX6_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX7_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX8_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;
      MR_Integer Var_35 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_36 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_35 < Var_36);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_35 > Var_36);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_37 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_38 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_37 < Var_38);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_37 > Var_38);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_39 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_40 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_39 < Var_40);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_39 > Var_40);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult5_17;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[6]), &SubResult5_17, ((MR_Box) (ArgX5_15)), ((MR_Box) (ArgY5_16)));
            succeeded = (SubResult5_17 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_17;
            else
            {
              MR_Word SubResult6_20;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]), &SubResult6_20, ((MR_Box) (ArgX6_18)), ((MR_Box) (ArgY6_19)));
              succeeded = (SubResult6_20 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_20;
              else
              {
                MR_Word SubResult7_23;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]), &SubResult7_23, ((MR_Box) (ArgX7_21)), ((MR_Box) (ArgY7_22)));
                succeeded = (SubResult7_23 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX8_24)), ((MR_Box) (ArgY8_25)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[8]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
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
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
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
                  mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
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
                  succeeded = mercury__term____Unify____context_0_0(ArgX7_15, ArgY7_16);
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
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          succeeded = (Var_17 < ArgY2_12);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > ArgY2_12);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_44 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_43 == CastY_44);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;
                  MR_Integer Var_57 = (MR_Integer) (Var_56);
                  MR_Integer Var_58 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_57 < Var_58);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_57 > Var_58);
                    if (succeeded)
                    {
                      SubResult1_6 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_6 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    succeeded = (Var_55 < ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_55 > ArgY2_8);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_pred____Compare____call_id_0_0(HeadVar__1_1, Var_51, ArgY1_21);
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
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_37;

                  parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_37, Var_54, ArgY1_36);
                  succeeded = (SubResult1_37 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_37;
                  else
                  {
                    MR_Word SubResult2_40;

                    hlds__hlds_goal____Compare____unify_main_context_0_0(&SubResult2_40, Var_53, ArgY2_39);
                    succeeded = (SubResult2_40 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_40;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY3_42)));
                    }
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_pred____Unify____call_id_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_20_20;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3)
{
  {
    MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 4))));

    return Mode_4;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3)
{
  {
    MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 2))));

    return LambdaVar_4;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3)
{
  {
    MR_Word ArgTerm_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 1))));

    return ArgTerm_4;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4)
{
  *GoalCord_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(
  MR_Word Args_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_SVarState_0_17,
  MR_Word * STATE_VARIABLE_SVarState_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word RevVars_14;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(Args_9, (MR_Word) ((MR_Unsigned) 0U), &RevVars_14, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16, STATE_VARIABLE_SVarState_0_17, STATE_VARIABLE_SVarState_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), RevVars_14, Vars_10);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVars_0_2,
  MR_Word * STATE_VARIABLE_RevVars_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_SVarState_7 = STATE_VARIABLE_SVarState_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
      *STATE_VARIABLE_RevVars_3 = STATE_VARIABLE_RevVars_0_2;
    }
    else
    {
      MR_Word Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_VarSet_37_37;
      MR_Word STATE_VARIABLE_SVarState_38_38;
      MR_Word STATE_VARIABLE_Specs_39_39;
      MR_Word STATE_VARIABLE_RevVars_40_40;
      MR_Word Arg_57;
      MR_Word STATE_VARIABLE_VarSet_25_60;
      MR_Word ArgVar_58;
      MR_Word TypeInfo_29_64;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_SVarState_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(Arg_22, &Arg_57, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_25_60, STATE_VARIABLE_SVarState_0_6, &STATE_VARIABLE_SVarState_38_38, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_39_39);
      succeeded = ((MR_tag((MR_Word) Arg_57)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgVar_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_57, (MR_Integer) 0))));
        TypeInfo_29_64 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_29_64, ((MR_Box) (ArgVar_58)), STATE_VARIABLE_RevVars_0_2);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        Var_28 = ArgVar_58;
        STATE_VARIABLE_VarSet_37_37 = STATE_VARIABLE_VarSet_25_60;
      }
      else
      {
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_28, STATE_VARIABLE_VarSet_25_60, &STATE_VARIABLE_VarSet_37_37);
      }
      {
        STATE_VARIABLE_RevVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVars_40_40, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVars_40_40, 1) = ((MR_Box) (STATE_VARIABLE_RevVars_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_23;
      next_value_of_STATE_VARIABLE_RevVars_0_2 = STATE_VARIABLE_RevVars_40_40;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_37_37;
      next_value_of_STATE_VARIABLE_SVarState_0_6 = STATE_VARIABLE_SVarState_38_38;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVars_0_2 = next_value_of_STATE_VARIABLE_RevVars_0_2;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_SVarState_0_6 = next_value_of_STATE_VARIABLE_SVarState_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(
  MR_Word LHS0_20,
  MR_Word RHS0_21,
  MR_Word Context_22,
  MR_Word MainContext_23,
  MR_Word SubContext_24,
  MR_Word Purity_25,
  MR_Word * Goal_26,
  MR_Word STATE_VARIABLE_SVarState_0_36,
  MR_Word * STATE_VARIABLE_SVarState_37,
  MR_Word STATE_VARIABLE_SVarStore_0_38,
  MR_Word * STATE_VARIABLE_SVarStore_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_Word Expansion_34;
    MR_Word GoalInfo_35;

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(LHS0_20, RHS0_21, Context_22, MainContext_23, SubContext_24, Purity_25, &Expansion_34, STATE_VARIABLE_SVarState_0_36, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_35);
    hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(GoalInfo_35, Expansion_34, Goal_26);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word LHS0_21,
  MR_Word RHS0_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_Word LHS_35;
    MR_Word RHS_36;
    MR_Word STATE_VARIABLE_VarSet_49_49;
    MR_Word STATE_VARIABLE_SVarState_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_VarSet_52_52;
    MR_Word STATE_VARIABLE_SVarState_53_53;
    MR_Word STATE_VARIABLE_Specs_54_54;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(LHS0_21, &LHS_35, STATE_VARIABLE_VarSet_0_41, &STATE_VARIABLE_VarSet_49_49, STATE_VARIABLE_SVarState_0_37, &STATE_VARIABLE_SVarState_50_50, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_51_51);
    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(RHS0_22, &RHS_36, STATE_VARIABLE_VarSet_49_49, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_SVarState_50_50, &STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_54_54);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(LHS_35, RHS_36, Context_23, MainContext_24, SubContext_25, Purity_26, Expansion_28, STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_SVarState_38, STATE_VARIABLE_SVarStore_0_39, STATE_VARIABLE_SVarStore_40, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarSet_42, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_48);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word XTerm_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_55,
  MR_Word * STATE_VARIABLE_SVarState_56,
  MR_Word STATE_VARIABLE_SVarStore_0_57,
  MR_Word * STATE_VARIABLE_SVarStore_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  if (((MR_tag((MR_Word) XTerm_21)) == (MR_Integer) 0))
  {
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_21, (MR_Integer) 2))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_21, (MR_Integer) 1))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_21, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) YTerm_22)) == (MR_Integer) 0))
    {
      MR_Word TmpVar_48;
      MR_Word ExpansionX_49;
      MR_Word ExpansionY_50;
      MR_Word GoalInfo_51;
      MR_Word MaybeWrappedGoalCordX_52;
      MR_Word MaybeWrappedGoalCordY_53;
      MR_Word GoalCord_54;
      MR_Word STATE_VARIABLE_VarSet_67_67;
      MR_Word STATE_VARIABLE_SVarState_68_68;
      MR_Word STATE_VARIABLE_SVarStore_69_69;
      MR_Word STATE_VARIABLE_VarSet_70_70;
      MR_Word STATE_VARIABLE_ModuleInfo_71_71;
      MR_Word STATE_VARIABLE_QualInfo_72_72;
      MR_Word STATE_VARIABLE_Specs_73_73;
      MR_Word YFunctor_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 0))));
      MR_Word YArgTerms_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 1))));
      MR_Word YFunctorContext_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 2))));

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &TmpVar_48, STATE_VARIABLE_VarSet_0_59, &STATE_VARIABLE_VarSet_67_67);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(TmpVar_48, Var_110, Var_109, Var_108, Context_23, MainContext_24, SubContext_25, Purity_26, &ExpansionX_49, STATE_VARIABLE_SVarState_0_55, &STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarStore_0_57, &STATE_VARIABLE_SVarStore_69_69, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_70_70, STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_QualInfo_0_63, &STATE_VARIABLE_QualInfo_72_72, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_73_73);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(TmpVar_48, YFunctor_99, YArgTerms_100, YFunctorContext_101, Context_23, MainContext_24, SubContext_25, Purity_26, &ExpansionY_50, STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarState_56, STATE_VARIABLE_SVarStore_69_69, STATE_VARIABLE_SVarStore_58, STATE_VARIABLE_VarSet_70_70, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_72_72, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_73_73, STATE_VARIABLE_Specs_66);
      hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_51);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(GoalInfo_51, ExpansionX_49, &MaybeWrappedGoalCordX_52);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(GoalInfo_51, ExpansionY_50, &MaybeWrappedGoalCordY_53);
      GoalCord_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWrappedGoalCordX_52, MaybeWrappedGoalCordY_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_54));
      }
    }
    else
    {
      MR_Word YVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_22, (MR_Integer) 0))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(YVar_98, Var_110, Var_109, Var_108, Context_23, MainContext_24, SubContext_25, Purity_26, Expansion_28, STATE_VARIABLE_SVarState_0_55, STATE_VARIABLE_SVarState_56, STATE_VARIABLE_SVarStore_0_57, STATE_VARIABLE_SVarStore_58, STATE_VARIABLE_VarSet_0_59, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_0_63, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
    }
  }
  else
  {
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), XTerm_21, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) YTerm_22)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 0))));
      MR_Word YArgTerms_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 1))));
      MR_Word YFunctorContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 2))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(Var_112, YFunctor_41, YArgTerms_42, YFunctorContext_43, Context_23, MainContext_24, SubContext_25, Purity_26, Expansion_28, STATE_VARIABLE_SVarState_0_55, STATE_VARIABLE_SVarState_56, STATE_VARIABLE_SVarStore_0_57, STATE_VARIABLE_SVarStore_58, STATE_VARIABLE_VarSet_0_59, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_0_63, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
    }
    else
    {
      MR_Word YVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_22, (MR_Integer) 0))));
      MR_Word Goal_39;
      MR_Word Var_93;
      MR_Word Var_96;

      {
        Var_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (YVar_37));
      }
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(Var_112, Var_93, Context_23, MainContext_24, SubContext_25, Purity_26, &Goal_39, STATE_VARIABLE_QualInfo_0_63, STATE_VARIABLE_QualInfo_64);
      Var_96 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_39)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_96));
      }
      *STATE_VARIABLE_SVarState_56 = STATE_VARIABLE_SVarState_0_55;
      *STATE_VARIABLE_SVarStore_58 = STATE_VARIABLE_SVarStore_0_57;
      *STATE_VARIABLE_VarSet_60 = STATE_VARIABLE_VarSet_0_59;
      *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
      *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeWrappedGoalCord_6;

    hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(
  MR_Word XVars_19,
  MR_Word XArgTerms0_20,
  MR_Word ArgContexts_21,
  MR_Word Context_22,
  MR_Word Goal0_23,
  MR_Word * Goal_24,
  MR_Word STATE_VARIABLE_SVarState_0_35,
  MR_Word * STATE_VARIABLE_SVarState_36,
  MR_Word STATE_VARIABLE_SVarStore_0_37,
  MR_Word * STATE_VARIABLE_SVarStore_38,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_Word XArgTerms_31;
    MR_Word Expansions_32;
    MR_Word GoalInfo0_34;
    MR_Word STATE_VARIABLE_VarSet_47_47;
    MR_Word STATE_VARIABLE_SVarState_48_48;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word BaseGoals_61;
    MR_Word ExpansionGoalCords_62;
    MR_Word ExpansionGoals_63;
    MR_Word Var_64;
    MR_Word Var_65;

    hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(XArgTerms0_20, &XArgTerms_31, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_SVarState_0_35, &STATE_VARIABLE_SVarState_48_48, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_49_49);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(XVars_19, XArgTerms_31, ArgContexts_21, Context_22, &Expansions_32, STATE_VARIABLE_SVarState_48_48, STATE_VARIABLE_SVarState_36, STATE_VARIABLE_SVarStore_0_37, STATE_VARIABLE_SVarStore_38, STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_VarSet_40, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_QualInfo_0_43, STATE_VARIABLE_QualInfo_44, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_46);
    GoalInfo0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_23, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_23, &BaseGoals_61);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (GoalInfo0_34));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_64, Expansions_32, &ExpansionGoalCords_62);
    ExpansionGoals_63 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_62);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_63, BaseGoals_61);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_65, GoalInfo0_34, Goal_24);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word XVar_23,
  MR_String YAtom_24,
  MR_Word YArgTerms_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_142,
  MR_Word * STATE_VARIABLE_SVarState_143,
  MR_Word STATE_VARIABLE_SVarStore_0_144,
  MR_Word * STATE_VARIABLE_SVarStore_145,
  MR_Word STATE_VARIABLE_VarSet_0_146,
  MR_Word * STATE_VARIABLE_VarSet_147,
  MR_Word STATE_VARIABLE_ModuleInfo_0_148,
  MR_Word * STATE_VARIABLE_ModuleInfo_149,
  MR_Word STATE_VARIABLE_QualInfo_0_150,
  MR_Word * STATE_VARIABLE_QualInfo_151,
  MR_Word STATE_VARIABLE_Specs_0_152,
  MR_Word * STATE_VARIABLE_Specs_153)
{
  {
    MR_bool succeeded;
    MR_Integer slot_0 = ((MR_hash_string5(YAtom_24)) & (MR_Integer) 31);
    MR_String str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_7[0 + slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_7_0__vct_7_f_0;

    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, YAtom_24) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            // case "@"
            ;
            {
              MR_Word TypeCtorInfo_479_479;
              MR_Word LVal_48;
              MR_Word RVal_49;
              MR_Word ExpansionL_50;
              MR_Word ExpansionR_51;
              MR_Word GoalCordL_53;
              MR_Word GoalCordR_55;
              MR_Word STATE_VARIABLE_SVarState_366_366;
              MR_Word STATE_VARIABLE_SVarStore_367_367;
              MR_Word STATE_VARIABLE_VarSet_368_368;
              MR_Word STATE_VARIABLE_ModuleInfo_369_369;
              MR_Word STATE_VARIABLE_QualInfo_370_370;
              MR_Word STATE_VARIABLE_Specs_371_371;
              MR_Word Var_378;
              MR_Word Var_379;
              MR_Word Var_900;
              MR_Word Var_902;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LVal_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_902 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_902 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RVal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_902, (MR_Integer) 0))));
                  Var_900 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_902, (MR_Integer) 1))));
                  succeeded = (Var_900 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, LVal_48, Context_27, MainContext_28, SubContext_29, Purity_30, &ExpansionL_50, STATE_VARIABLE_SVarState_0_142, &STATE_VARIABLE_SVarState_366_366, STATE_VARIABLE_SVarStore_0_144, &STATE_VARIABLE_SVarStore_367_367, STATE_VARIABLE_VarSet_0_146, &STATE_VARIABLE_VarSet_368_368, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_369_369, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_370_370, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_371_371);
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, RVal_49, Context_27, MainContext_28, SubContext_29, Purity_30, &ExpansionR_51, STATE_VARIABLE_SVarState_366_366, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_SVarStore_367_367, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_368_368, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_369_369, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_370_370, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_371_371, STATE_VARIABLE_Specs_153);
                    GoalCordL_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpansionL_50, (MR_Integer) 1))));
                    GoalCordR_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpansionR_51, (MR_Integer) 1))));
                    Var_378 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeCtorInfo_479_479 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                    Var_379 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_479_479, GoalCordL_53, GoalCordR_55);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Expansion_32 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_378));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_379));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "is"
            ;
            {
              MR_Word YTerm_136;
              MR_Word Var_164;

              {
                Var_164 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (YAtom_24));
              }
              {
                YTerm_136 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), YTerm_136, 0) = ((MR_Box) (Var_164));
                MR_hl_field(MR_mktag(0), YTerm_136, 1) = ((MR_Box) (YArgTerms_25));
                MR_hl_field(MR_mktag(0), YTerm_136, 2) = ((MR_Box) (YFunctorContext_26));
              }
              hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, YTerm_136, (MR_Word) ((MR_Unsigned) 0U), Expansion_32, STATE_VARIABLE_SVarState_0_142, STATE_VARIABLE_SVarStore_0_144, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_0_146, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_0_148, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_0_152, STATE_VARIABLE_Specs_153);
              *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case "else"
            ;
            {
              MR_Word TypeCtorInfo_480_746;
              MR_Word TypeCtorInfo_481_747;
              MR_Word TypeCtorInfo_482_748;
              MR_Word CondThenTerm0_61;
              MR_Word Var_313;
              MR_Word Var_314;
              MR_Word Var_315;
              MR_String Var_316;
              MR_Word Var_317;
              MR_Word Var_318;
              MR_Word Var_319;
              MR_String Var_320;
              MR_Word Var_321;
              MR_Word Var_322;
              MR_Word Var_323;
              MR_Word Var_324;
              MR_Word CondTerm_686;
              MR_Word MaybeVarsCond_687;
              MR_Word STATE_VARIABLE_VarSet_325_716;
              MR_Word ContextPieces_745;
              MR_Word ElseTerm0_820;
              MR_Word CondTerm0_821;
              MR_Word ThenTerm0_822;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_313 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseTerm0_820 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_313, (MR_Integer) 0))));
                  Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_313, (MR_Integer) 1))));
                  succeeded = (Var_314 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm0_61)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_61, (MR_Integer) 0))));
                      Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_61, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_315)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_316 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_315, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_316, (MR_String) "if") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_317 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_317, (MR_Integer) 0))));
                            Var_324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_317, (MR_Integer) 1))));
                            succeeded = (Var_324 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_318)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_318, (MR_Integer) 0))));
                                Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_318, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_319)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_320 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_319, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_320, (MR_String) "then") == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_321 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      CondTerm0_821 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_321, (MR_Integer) 0))));
                                      Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_321, (MR_Integer) 1))));
                                      succeeded = (Var_322 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ThenTerm0_822 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 0))));
                                        Var_323 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 1))));
                                        succeeded = (Var_323 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          TypeCtorInfo_480_746 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                          TypeCtorInfo_481_747 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                          mercury__term__coerce_2_p_0(TypeCtorInfo_480_746, TypeCtorInfo_481_747, CondTerm0_821, &CondTerm_686);
                                          TypeCtorInfo_482_748 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                                          ContextPieces_745 = mercury__cord__init_0_f_0(TypeCtorInfo_482_748);
                                          parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_686, ContextPieces_745, &MaybeVarsCond_687, STATE_VARIABLE_VarSet_0_146, &STATE_VARIABLE_VarSet_325_716);
                                          if (((MR_tag((MR_Word) MaybeVarsCond_687)) == (MR_Integer) 0))
                                          {
                                            MR_Word VarsCondSpecs_566 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeVarsCond_687, (MR_Integer) 0))));
                                            MR_Word Var_568;
                                            MR_Word Var_569;

                                            *STATE_VARIABLE_Specs_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarsCondSpecs_566, STATE_VARIABLE_Specs_0_152);
                                            Var_569 = hlds__make_goal__true_goal_with_context_1_f_0(Context_27);
                                            Var_568 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_569)));
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                              *Expansion_32 = base;
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_568));
                                            }
                                            *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
                                            *STATE_VARIABLE_SVarStore_145 = STATE_VARIABLE_SVarStore_0_144;
                                            *STATE_VARIABLE_VarSet_147 = STATE_VARIABLE_VarSet_325_716;
                                            *STATE_VARIABLE_ModuleInfo_149 = STATE_VARIABLE_ModuleInfo_0_148;
                                            *STATE_VARIABLE_QualInfo_151 = STATE_VARIABLE_QualInfo_0_150;
                                          }
                                          else
                                          {
                                            MR_Word Vars_572 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_687, (MR_Integer) 0))));
                                            MR_Word StateVars_573 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_687, (MR_Integer) 1))));
                                            MR_Word CondParseTree_574 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_687, (MR_Integer) 2))));
                                            MR_Word BeforeInsideSVarState_576;
                                            MR_Word EmptySubst_577;
                                            MR_Word CondGoal_578;
                                            MR_Word AfterCondInsideSVarState_579;
                                            MR_Word ThenTerm_580;
                                            MR_Word AfterThenInsideSVarState0_581;
                                            MR_Word ThenExpansion_582;
                                            MR_Word AfterThenInsideSVarState_583;
                                            MR_Word ThenGoalInfo_584;
                                            MR_Word ThenGoal0_585;
                                            MR_Word AfterThenSVarState_586;
                                            MR_Word ElseTerm_587;
                                            MR_Word AfterElseSVarState0_588;
                                            MR_Word ElseExpansion_589;
                                            MR_Word AfterElseSVarState_590;
                                            MR_Word ElseGoalInfo_591;
                                            MR_Word ElseGoal0_592;
                                            MR_Word ThenGoal_593;
                                            MR_Word ElseGoal_594;
                                            MR_Word GoalExpr_596;
                                            MR_Word GoalInfo_597;
                                            MR_Word Goal_598;
                                            MR_Word STATE_VARIABLE_Specs_330_599;
                                            MR_Word STATE_VARIABLE_SVarStore_332_601;
                                            MR_Word STATE_VARIABLE_VarSet_333_602;
                                            MR_Word STATE_VARIABLE_ModuleInfo_334_603;
                                            MR_Word STATE_VARIABLE_QualInfo_335_604;
                                            MR_Word STATE_VARIABLE_Specs_336_605;
                                            MR_Word STATE_VARIABLE_VarSet_337_606;
                                            MR_Word STATE_VARIABLE_Specs_338_607;
                                            MR_Word STATE_VARIABLE_SVarStore_339_608;
                                            MR_Word STATE_VARIABLE_VarSet_340_609;
                                            MR_Word STATE_VARIABLE_ModuleInfo_341_610;
                                            MR_Word STATE_VARIABLE_QualInfo_342_611;
                                            MR_Word STATE_VARIABLE_Specs_343_612;
                                            MR_Word Var_613;
                                            MR_Word STATE_VARIABLE_VarSet_345_614;
                                            MR_Word STATE_VARIABLE_Specs_346_615;
                                            MR_Word STATE_VARIABLE_SVarStore_347_616;
                                            MR_Word STATE_VARIABLE_VarSet_348_617;
                                            MR_Word STATE_VARIABLE_Specs_351_618;
                                            MR_Word Var_619;
                                            MR_Word Var_621;
                                            MR_Word Var_623;

                                            hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_27, STATE_VARIABLE_VarSet_325_716, StateVars_573, STATE_VARIABLE_SVarState_0_142, &BeforeInsideSVarState_576, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_330_599);
                                            mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptySubst_577);
                                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, CondParseTree_574, EmptySubst_577, &CondGoal_578, BeforeInsideSVarState_576, &AfterCondInsideSVarState_579, STATE_VARIABLE_SVarStore_0_144, &STATE_VARIABLE_SVarStore_332_601, STATE_VARIABLE_VarSet_325_716, &STATE_VARIABLE_VarSet_333_602, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_334_603, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_335_604, STATE_VARIABLE_Specs_330_599, &STATE_VARIABLE_Specs_336_605);
                                            hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ThenTerm0_822, &ThenTerm_580, STATE_VARIABLE_VarSet_333_602, &STATE_VARIABLE_VarSet_337_606, AfterCondInsideSVarState_579, &AfterThenInsideSVarState0_581, STATE_VARIABLE_Specs_336_605, &STATE_VARIABLE_Specs_338_607);
                                            hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, ThenTerm_580, Context_27, MainContext_28, SubContext_29, Purity_30, &ThenExpansion_582, AfterThenInsideSVarState0_581, &AfterThenInsideSVarState_583, STATE_VARIABLE_SVarStore_332_601, &STATE_VARIABLE_SVarStore_339_608, STATE_VARIABLE_VarSet_337_606, &STATE_VARIABLE_VarSet_340_609, STATE_VARIABLE_ModuleInfo_334_603, &STATE_VARIABLE_ModuleInfo_341_610, STATE_VARIABLE_QualInfo_335_604, &STATE_VARIABLE_QualInfo_342_611, STATE_VARIABLE_Specs_338_607, &STATE_VARIABLE_Specs_343_612);
                                            Var_613 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_480_746, ThenTerm_580);
                                            hlds__hlds_goal__goal_info_init_2_p_0(Var_613, &ThenGoalInfo_584);
                                            hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ThenGoalInfo_584, ThenExpansion_582, &ThenGoal0_585);
                                            hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_573, STATE_VARIABLE_SVarState_0_142, AfterThenInsideSVarState_583, &AfterThenSVarState_586);
                                            hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ElseTerm0_820, &ElseTerm_587, STATE_VARIABLE_VarSet_340_609, &STATE_VARIABLE_VarSet_345_614, STATE_VARIABLE_SVarState_0_142, &AfterElseSVarState0_588, STATE_VARIABLE_Specs_343_612, &STATE_VARIABLE_Specs_346_615);
                                            hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, ElseTerm_587, Context_27, MainContext_28, SubContext_29, Purity_30, &ElseExpansion_589, AfterElseSVarState0_588, &AfterElseSVarState_590, STATE_VARIABLE_SVarStore_339_608, &STATE_VARIABLE_SVarStore_347_616, STATE_VARIABLE_VarSet_345_614, &STATE_VARIABLE_VarSet_348_617, STATE_VARIABLE_ModuleInfo_341_610, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_342_611, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_346_615, &STATE_VARIABLE_Specs_351_618);
                                            Var_619 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_480_746, ElseTerm_587);
                                            hlds__hlds_goal__goal_info_init_2_p_0(Var_619, &ElseGoalInfo_591);
                                            hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ElseGoalInfo_591, ElseExpansion_589, &ElseGoal0_592);
                                            hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, Context_27, StateVars_573, ThenGoal0_585, &ThenGoal_593, ElseGoal0_592, &ElseGoal_594, STATE_VARIABLE_SVarState_0_142, AfterCondInsideSVarState_579, AfterThenSVarState_586, AfterElseSVarState_590, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_VarSet_348_617, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_SVarStore_347_616, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_Specs_351_618, STATE_VARIABLE_Specs_153);
                                            Var_621 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_573, Vars_572);
                                            {
                                              GoalExpr_596 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), GoalExpr_596, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                              MR_hl_field(MR_mktag(3), GoalExpr_596, 1) = ((MR_Box) (Var_621));
                                              MR_hl_field(MR_mktag(3), GoalExpr_596, 2) = ((MR_Box) (CondGoal_578));
                                              MR_hl_field(MR_mktag(3), GoalExpr_596, 3) = ((MR_Box) (ThenGoal_593));
                                              MR_hl_field(MR_mktag(3), GoalExpr_596, 4) = ((MR_Box) (ElseGoal_594));
                                            }
                                            hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_597);
                                            {
                                              Goal_598 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), Goal_598, 0) = ((MR_Box) (GoalExpr_596));
                                              MR_hl_field(MR_mktag(0), Goal_598, 1) = ((MR_Box) (GoalInfo_597));
                                            }
                                            Var_623 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_598)));
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                              *Expansion_32 = base;
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_623));
                                            }
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
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            // case "-->"
            ;
            {
              MR_Word PurityPFArgsDetTerm_131;
              MR_Word BodyGoalTerm_132;
              MR_Word Var_171;
              MR_Word Var_172;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PurityPFArgsDetTerm_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BodyGoalTerm_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_171, (MR_Integer) 0))));
                  Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_171, (MR_Integer) 1))));
                  succeeded = (Var_172 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word Var_173;
                MR_Tuple Var_179;

                {
                  Var_179 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (BodyGoalTerm_132));
                }
                {
                  Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_179));
                }
                hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, PurityPFArgsDetTerm_131, Var_173, Expansion_32, STATE_VARIABLE_SVarState_0_142, STATE_VARIABLE_SVarStore_0_144, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_0_146, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_0_148, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_0_152, STATE_VARIABLE_Specs_153);
              }
              else
              {
                MR_Word Pieces_133;
                MR_Word Msg_134;
                MR_Word Spec_135;
                MR_Word Var_182;
                MR_Word Var_183;
                MR_Word Var_196;
                MR_Word Var_197;
                MR_Word Var_201;
                MR_Word Var_207;

                {
                  Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_183, 1) = ((MR_Box) (YAtom_24));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
                  MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[17])));
                }
                {
                  Pieces_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[102])));
                  MR_hl_field(MR_mktag(1), Pieces_133, 1) = ((MR_Box) (Var_182));
                }
                {
                  Var_197 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (Pieces_133));
                }
                {
                  Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Var_197));
                  MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_134, 0) = ((MR_Box) (YFunctorContext_26));
                  MR_hl_field(MR_mktag(0), Msg_134, 1) = ((MR_Box) (Var_196));
                }
                {
                  Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Msg_134));
                  MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_135 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_135, 2) = ((MR_Box) (Var_201));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_153 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_135));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_152));
                }
                hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151);
                Var_207 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_207));
                }
                *STATE_VARIABLE_ModuleInfo_149 = STATE_VARIABLE_ModuleInfo_0_148;
                *STATE_VARIABLE_VarSet_147 = STATE_VARIABLE_VarSet_0_146;
                *STATE_VARIABLE_SVarStore_145 = STATE_VARIABLE_SVarStore_0_144;
              }
              *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
        case (MR_Integer) 27:
          {
            // case ":", "with_type"
            ;
            {
              MR_Word TypeCtorInfo_474_474;
              MR_Word TypeCtorInfo_475_475;
              MR_Word TypeCtorInfo_476_476;
              MR_Word RValTerm_39;
              MR_Word DeclTypeTerm0_40;
              MR_Word DeclTypeTerm1_41;
              MR_Word ContextPieces_42;
              MR_Word GenericVarSet_43;
              MR_Word DeclTypeResult_44;
              MR_Word Var_380;
              MR_Word Var_381;
              MR_Word Var_382;
              MR_Word Var_384;
              MR_Word STATE_VARIABLE_ModuleInfo_387_387;
              MR_Word STATE_VARIABLE_QualInfo_388_388;
              MR_Word STATE_VARIABLE_Specs_389_389;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RValTerm_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_380 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  DeclTypeTerm0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_380, (MR_Integer) 0))));
                  Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_380, (MR_Integer) 1))));
                  succeeded = (Var_381 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_474_474 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    TypeCtorInfo_475_475 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                    mercury__term__coerce_2_p_0(TypeCtorInfo_474_474, TypeCtorInfo_475_475, DeclTypeTerm0_40, &DeclTypeTerm1_41);
                    TypeCtorInfo_476_476 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                    Var_382 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[103]));
                    ContextPieces_42 = mercury__cord__singleton_1_f_0(TypeCtorInfo_476_476, ((MR_Box) (Var_382)));
                    mercury__varset__coerce_2_p_0(TypeCtorInfo_474_474, TypeCtorInfo_475_475, STATE_VARIABLE_VarSet_0_146, &GenericVarSet_43);
                    Var_384 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_5[7]));
                    parse_tree__parse_type_name__parse_type_5_p_0(Var_384, GenericVarSet_43, ContextPieces_42, DeclTypeTerm1_41, &DeclTypeResult_44);
                    if (((MR_tag((MR_Word) DeclTypeResult_44)) == (MR_Integer) 0))
                    {
                      MR_Word DeclTypeSpecs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclTypeResult_44, (MR_Integer) 0))));

                      STATE_VARIABLE_Specs_389_389 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DeclTypeSpecs_47, STATE_VARIABLE_Specs_0_152);
                      STATE_VARIABLE_ModuleInfo_387_387 = STATE_VARIABLE_ModuleInfo_0_148;
                      STATE_VARIABLE_QualInfo_388_388 = STATE_VARIABLE_QualInfo_0_150;
                    }
                    else
                    {
                      MR_Word DeclType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclTypeResult_44, (MR_Integer) 0))));
                      MR_Word DeclVarSet_46;

                      mercury__varset__coerce_2_p_0(TypeCtorInfo_474_474, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), STATE_VARIABLE_VarSet_0_146, &DeclVarSet_46);
                      hlds__make_hlds__qual_info__process_type_qualification_10_p_0(XVar_23, DeclType_45, DeclVarSet_46, YFunctorContext_26, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_387_387, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_388_388, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_389_389);
                    }
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, RValTerm_39, Context_27, MainContext_28, SubContext_29, Purity_30, Expansion_32, STATE_VARIABLE_SVarState_0_142, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_SVarStore_0_144, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_0_146, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_387_387, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_388_388, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_389_389, STATE_VARIABLE_Specs_153);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case ":-"
            ;
            {
              MR_Word PurityPFArgsDetTerm_515;
              MR_Word BodyGoalTerm_516;
              MR_Word Var_490;
              MR_Word Var_491;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PurityPFArgsDetTerm_515 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_490 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_490 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BodyGoalTerm_516 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_490, (MR_Integer) 0))));
                  Var_491 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_490, (MR_Integer) 1))));
                  succeeded = (Var_491 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word Var_492;
                MR_Tuple Var_493;

                {
                  Var_493 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_493, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), Var_493, 1) = ((MR_Box) (BodyGoalTerm_516));
                }
                {
                  Var_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_492, 0) = ((MR_Box) (Var_493));
                }
                hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, PurityPFArgsDetTerm_515, Var_492, Expansion_32, STATE_VARIABLE_SVarState_0_142, STATE_VARIABLE_SVarStore_0_144, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_0_146, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_0_148, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_0_152, STATE_VARIABLE_Specs_153);
              }
              else
              {
                MR_Word Pieces_496;
                MR_Word Msg_497;
                MR_Word Spec_498;
                MR_Word Var_501;
                MR_Word Var_502;
                MR_Word Var_504;
                MR_Word Var_505;
                MR_Word Var_509;
                MR_Word Var_513;

                {
                  Var_502 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_502, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_502, 1) = ((MR_Box) (YAtom_24));
                }
                {
                  Var_501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_501, 0) = ((MR_Box) (Var_502));
                  MR_hl_field(MR_mktag(1), Var_501, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[17])));
                }
                {
                  Pieces_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_496, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[102])));
                  MR_hl_field(MR_mktag(1), Pieces_496, 1) = ((MR_Box) (Var_501));
                }
                {
                  Var_505 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_505, 0) = ((MR_Box) (Pieces_496));
                }
                {
                  Var_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_504, 0) = ((MR_Box) (Var_505));
                  MR_hl_field(MR_mktag(1), Var_504, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_497 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_497, 0) = ((MR_Box) (YFunctorContext_26));
                  MR_hl_field(MR_mktag(0), Msg_497, 1) = ((MR_Box) (Var_504));
                }
                {
                  Var_509 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_509, 0) = ((MR_Box) (Msg_497));
                  MR_hl_field(MR_mktag(1), Var_509, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_498 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_498, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_498, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_498, 2) = ((MR_Box) (Var_509));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_153 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_498));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_152));
                }
                hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151);
                Var_513 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_513));
                }
                *STATE_VARIABLE_ModuleInfo_149 = STATE_VARIABLE_ModuleInfo_0_148;
                *STATE_VARIABLE_VarSet_147 = STATE_VARIABLE_VarSet_0_146;
                *STATE_VARIABLE_SVarStore_145 = STATE_VARIABLE_SVarStore_0_144;
              }
              *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 26:
          {
            // case ";"
            ;
            {
              MR_Word TypeCtorInfo_480_480;
              MR_Word TypeCtorInfo_481_481;
              MR_Word TypeCtorInfo_482_482;
              MR_Word ElseTerm0_62;
              MR_Word CondTerm0_63;
              MR_Word ThenTerm0_64;
              MR_Word CondTerm_68;
              MR_Word MaybeVarsCond_69;
              MR_Word Var_306;
              MR_Word Var_307;
              MR_Word Var_308;
              MR_String Var_309;
              MR_Word Var_310;
              MR_Word Var_311;
              MR_Word Var_312;
              MR_Word STATE_VARIABLE_VarSet_325_325;
              MR_Word CondThenTerm0_396;
              MR_Word ContextPieces_397;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm0_396 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_306 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseTerm0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_306, (MR_Integer) 0))));
                  Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_306, (MR_Integer) 1))));
                  succeeded = (Var_307 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm0_396)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_396, (MR_Integer) 0))));
                      Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_396, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_308)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_309 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_308, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_309, (MR_String) "->") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_310 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            CondTerm0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 0))));
                            Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 1))));
                            succeeded = (Var_311 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ThenTerm0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 0))));
                              Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 1))));
                              succeeded = (Var_312 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                TypeCtorInfo_480_480 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                TypeCtorInfo_481_481 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                mercury__term__coerce_2_p_0(TypeCtorInfo_480_480, TypeCtorInfo_481_481, CondTerm0_63, &CondTerm_68);
                                TypeCtorInfo_482_482 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                                ContextPieces_397 = mercury__cord__init_0_f_0(TypeCtorInfo_482_482);
                                parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_68, ContextPieces_397, &MaybeVarsCond_69, STATE_VARIABLE_VarSet_0_146, &STATE_VARIABLE_VarSet_325_325);
                                if (((MR_tag((MR_Word) MaybeVarsCond_69)) == (MR_Integer) 0))
                                {
                                  MR_Word VarsCondSpecs_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeVarsCond_69, (MR_Integer) 0))));
                                  MR_Word Var_328;
                                  MR_Word Var_329;

                                  *STATE_VARIABLE_Specs_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarsCondSpecs_97, STATE_VARIABLE_Specs_0_152);
                                  Var_329 = hlds__make_goal__true_goal_with_context_1_f_0(Context_27);
                                  Var_328 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_329)));
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    *Expansion_32 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_328));
                                  }
                                  *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
                                  *STATE_VARIABLE_SVarStore_145 = STATE_VARIABLE_SVarStore_0_144;
                                  *STATE_VARIABLE_VarSet_147 = STATE_VARIABLE_VarSet_325_325;
                                  *STATE_VARIABLE_ModuleInfo_149 = STATE_VARIABLE_ModuleInfo_0_148;
                                  *STATE_VARIABLE_QualInfo_151 = STATE_VARIABLE_QualInfo_0_150;
                                }
                                else
                                {
                                  MR_Word Vars_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_69, (MR_Integer) 0))));
                                  MR_Word StateVars_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_69, (MR_Integer) 1))));
                                  MR_Word CondParseTree_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_69, (MR_Integer) 2))));
                                  MR_Word BeforeInsideSVarState_74;
                                  MR_Word EmptySubst_75;
                                  MR_Word CondGoal_76;
                                  MR_Word AfterCondInsideSVarState_77;
                                  MR_Word ThenTerm_78;
                                  MR_Word AfterThenInsideSVarState0_79;
                                  MR_Word ThenExpansion_80;
                                  MR_Word AfterThenInsideSVarState_81;
                                  MR_Word ThenGoalInfo_82;
                                  MR_Word ThenGoal0_83;
                                  MR_Word AfterThenSVarState_84;
                                  MR_Word ElseTerm_85;
                                  MR_Word AfterElseSVarState0_86;
                                  MR_Word ElseExpansion_87;
                                  MR_Word AfterElseSVarState_88;
                                  MR_Word ElseGoalInfo_89;
                                  MR_Word ElseGoal0_90;
                                  MR_Word ThenGoal_91;
                                  MR_Word ElseGoal_92;
                                  MR_Word GoalExpr_94;
                                  MR_Word GoalInfo_95;
                                  MR_Word Goal_96;
                                  MR_Word STATE_VARIABLE_Specs_330_330;
                                  MR_Word STATE_VARIABLE_SVarStore_332_332;
                                  MR_Word STATE_VARIABLE_VarSet_333_333;
                                  MR_Word STATE_VARIABLE_ModuleInfo_334_334;
                                  MR_Word STATE_VARIABLE_QualInfo_335_335;
                                  MR_Word STATE_VARIABLE_Specs_336_336;
                                  MR_Word STATE_VARIABLE_VarSet_337_337;
                                  MR_Word STATE_VARIABLE_Specs_338_338;
                                  MR_Word STATE_VARIABLE_SVarStore_339_339;
                                  MR_Word STATE_VARIABLE_VarSet_340_340;
                                  MR_Word STATE_VARIABLE_ModuleInfo_341_341;
                                  MR_Word STATE_VARIABLE_QualInfo_342_342;
                                  MR_Word STATE_VARIABLE_Specs_343_343;
                                  MR_Word Var_344;
                                  MR_Word STATE_VARIABLE_VarSet_345_345;
                                  MR_Word STATE_VARIABLE_Specs_346_346;
                                  MR_Word STATE_VARIABLE_SVarStore_347_347;
                                  MR_Word STATE_VARIABLE_VarSet_348_348;
                                  MR_Word STATE_VARIABLE_Specs_351_351;
                                  MR_Word Var_352;
                                  MR_Word Var_358;
                                  MR_Word Var_360;

                                  hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_27, STATE_VARIABLE_VarSet_325_325, StateVars_71, STATE_VARIABLE_SVarState_0_142, &BeforeInsideSVarState_74, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_330_330);
                                  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptySubst_75);
                                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, CondParseTree_72, EmptySubst_75, &CondGoal_76, BeforeInsideSVarState_74, &AfterCondInsideSVarState_77, STATE_VARIABLE_SVarStore_0_144, &STATE_VARIABLE_SVarStore_332_332, STATE_VARIABLE_VarSet_325_325, &STATE_VARIABLE_VarSet_333_333, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_334_334, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_335_335, STATE_VARIABLE_Specs_330_330, &STATE_VARIABLE_Specs_336_336);
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ThenTerm0_64, &ThenTerm_78, STATE_VARIABLE_VarSet_333_333, &STATE_VARIABLE_VarSet_337_337, AfterCondInsideSVarState_77, &AfterThenInsideSVarState0_79, STATE_VARIABLE_Specs_336_336, &STATE_VARIABLE_Specs_338_338);
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, ThenTerm_78, Context_27, MainContext_28, SubContext_29, Purity_30, &ThenExpansion_80, AfterThenInsideSVarState0_79, &AfterThenInsideSVarState_81, STATE_VARIABLE_SVarStore_332_332, &STATE_VARIABLE_SVarStore_339_339, STATE_VARIABLE_VarSet_337_337, &STATE_VARIABLE_VarSet_340_340, STATE_VARIABLE_ModuleInfo_334_334, &STATE_VARIABLE_ModuleInfo_341_341, STATE_VARIABLE_QualInfo_335_335, &STATE_VARIABLE_QualInfo_342_342, STATE_VARIABLE_Specs_338_338, &STATE_VARIABLE_Specs_343_343);
                                  Var_344 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_480_480, ThenTerm_78);
                                  hlds__hlds_goal__goal_info_init_2_p_0(Var_344, &ThenGoalInfo_82);
                                  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ThenGoalInfo_82, ThenExpansion_80, &ThenGoal0_83);
                                  hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_71, STATE_VARIABLE_SVarState_0_142, AfterThenInsideSVarState_81, &AfterThenSVarState_84);
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ElseTerm0_62, &ElseTerm_85, STATE_VARIABLE_VarSet_340_340, &STATE_VARIABLE_VarSet_345_345, STATE_VARIABLE_SVarState_0_142, &AfterElseSVarState0_86, STATE_VARIABLE_Specs_343_343, &STATE_VARIABLE_Specs_346_346);
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, ElseTerm_85, Context_27, MainContext_28, SubContext_29, Purity_30, &ElseExpansion_87, AfterElseSVarState0_86, &AfterElseSVarState_88, STATE_VARIABLE_SVarStore_339_339, &STATE_VARIABLE_SVarStore_347_347, STATE_VARIABLE_VarSet_345_345, &STATE_VARIABLE_VarSet_348_348, STATE_VARIABLE_ModuleInfo_341_341, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_342_342, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_346_346, &STATE_VARIABLE_Specs_351_351);
                                  Var_352 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_480_480, ElseTerm_85);
                                  hlds__hlds_goal__goal_info_init_2_p_0(Var_352, &ElseGoalInfo_89);
                                  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ElseGoalInfo_89, ElseExpansion_87, &ElseGoal0_90);
                                  hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, Context_27, StateVars_71, ThenGoal0_83, &ThenGoal_91, ElseGoal0_90, &ElseGoal_92, STATE_VARIABLE_SVarState_0_142, AfterCondInsideSVarState_77, AfterThenSVarState_84, AfterElseSVarState_88, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_VarSet_348_348, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_SVarStore_347_347, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_Specs_351_351, STATE_VARIABLE_Specs_153);
                                  Var_358 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_71, Vars_70);
                                  {
                                    GoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), GoalExpr_94, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                    MR_hl_field(MR_mktag(3), GoalExpr_94, 1) = ((MR_Box) (Var_358));
                                    MR_hl_field(MR_mktag(3), GoalExpr_94, 2) = ((MR_Box) (CondGoal_76));
                                    MR_hl_field(MR_mktag(3), GoalExpr_94, 3) = ((MR_Box) (ThenGoal_91));
                                    MR_hl_field(MR_mktag(3), GoalExpr_94, 4) = ((MR_Box) (ElseGoal_92));
                                  }
                                  hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_95);
                                  {
                                    Goal_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Goal_96, 0) = ((MR_Box) (GoalExpr_94));
                                    MR_hl_field(MR_mktag(0), Goal_96, 1) = ((MR_Box) (GoalInfo_95));
                                  }
                                  Var_360 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_96)));
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    *Expansion_32 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_360));
                                  }
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
              }
            }
          }
          break;
        case (MR_Integer) 28:
          {
            // case "="
            ;
            {
              MR_Word FuncArgsTerm_137;
              MR_String FuncTermFunctor_139;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word YTerm_470;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FuncArgsTerm_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_154 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_154, (MR_Integer) 1))));
                  succeeded = (Var_155 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) FuncArgsTerm_137)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_137, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) Var_156)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        FuncTermFunctor_139 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0))));
                        if ((strcmp(FuncTermFunctor_139, (MR_String) "func") == 0))
                          succeeded = MR_TRUE;
                        else
                        if ((strcmp(FuncTermFunctor_139, (MR_String) "any_func") == 0))
                          succeeded = MR_TRUE;
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          Var_158 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_157 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (YAtom_24));
                          }
                          {
                            YTerm_470 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), YTerm_470, 0) = ((MR_Box) (Var_157));
                            MR_hl_field(MR_mktag(0), YTerm_470, 1) = ((MR_Box) (YArgTerms_25));
                            MR_hl_field(MR_mktag(0), YTerm_470, 2) = ((MR_Box) (YFunctorContext_26));
                          }
                          hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, YTerm_470, Var_158, Expansion_32, STATE_VARIABLE_SVarState_0_142, STATE_VARIABLE_SVarStore_0_144, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_0_146, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_0_148, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_0_150, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_0_152, STATE_VARIABLE_Specs_153);
                          *STATE_VARIABLE_SVarState_143 = STATE_VARIABLE_SVarState_0_142;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 29:
          {
            // case ":="
            ;
            {
              MR_Word TypeCtorInfo_488_488;
              MR_Word FieldDescrTerm_116;
              MR_Word FieldValueTerm0_117;
              MR_Word FieldValueTerm_119;
              MR_Word FieldValueVar_120;
              MR_Word InnerFunctor_121;
              MR_Word FieldSubContext_122;
              MR_Word SetGoal_123;
              MR_Word TermArgContext_124;
              MR_Integer TermArgNumber_125;
              MR_Word FieldArgContext_126;
              MR_Integer FieldArgNumber_127;
              MR_Word ArgContexts_128;
              MR_Word InputFieldArgExpansions_129;
              MR_Word Var_208;
              MR_Word Var_209;
              MR_Word Var_210;
              MR_String Var_211;
              MR_Word Var_212;
              MR_Word Var_213;
              MR_Word Var_214;
              MR_Word STATE_VARIABLE_VarSet_230_230;
              MR_Word STATE_VARIABLE_SVarState_231_231;
              MR_Word STATE_VARIABLE_Specs_232_232;
              MR_Word Var_233;
              MR_Word STATE_VARIABLE_VarSet_234_234;
              MR_Word STATE_VARIABLE_VarSet_235_235;
              MR_Word STATE_VARIABLE_SVarState_236_236;
              MR_Word STATE_VARIABLE_Specs_237_237;
              MR_Word Var_238;
              MR_Word STATE_VARIABLE_VarSet_239_239;
              MR_Word Var_240;
              MR_Word Var_241;
              MR_Word STATE_VARIABLE_SVarState_242_242;
              MR_Word STATE_VARIABLE_SVarStore_243_243;
              MR_Word STATE_VARIABLE_VarSet_244_244;
              MR_Word STATE_VARIABLE_ModuleInfo_245_245;
              MR_Word STATE_VARIABLE_QualInfo_246_246;
              MR_Word STATE_VARIABLE_Specs_247_247;
              MR_Word Var_248;
              MR_Word Var_249;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_260;
              MR_Word Var_261;
              MR_Word Var_262;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Word GoalInfo_414;
              MR_Word Goal_415;
              MR_Word InputTerm_416;
              MR_Word InputTermVar_417;
              MR_Word Functor_418;
              MR_Word FieldNames_426;
              MR_Word FieldNameContextPieces_441;
              MR_Word MaybeFieldNames_442;
              MR_Word InputTerm0_450;
              MR_Word FieldNameTerm_451;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldDescrTerm_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_208 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FieldValueTerm0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_208, (MR_Integer) 0))));
                  Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_208, (MR_Integer) 1))));
                  succeeded = (Var_209 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) FieldDescrTerm_116)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDescrTerm_116, (MR_Integer) 0))));
                      Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDescrTerm_116, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_210)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_211 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_210, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_211, (MR_String) "^") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_212 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            InputTerm0_450 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_212, (MR_Integer) 0))));
                            Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_212, (MR_Integer) 1))));
                            succeeded = (Var_213 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              FieldNameTerm_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_213, (MR_Integer) 0))));
                              Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_213, (MR_Integer) 1))));
                              succeeded = (Var_214 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                FieldNameContextPieces_441 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[27]));
                                hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_451, STATE_VARIABLE_VarSet_0_146, FieldNameContextPieces_441, &MaybeFieldNames_442);
                                succeeded = ((MR_tag((MR_Word) MaybeFieldNames_442)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  FieldNames_426 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_442, (MR_Integer) 0))));
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(InputTerm0_450, &InputTerm_416, STATE_VARIABLE_VarSet_0_146, &STATE_VARIABLE_VarSet_230_230, STATE_VARIABLE_SVarState_0_142, &STATE_VARIABLE_SVarState_231_231, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_232_232);
                                  Var_233 = (MR_Word) ((MR_Unsigned) 0U);
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_416, &InputTermVar_417, Var_233, STATE_VARIABLE_VarSet_230_230, &STATE_VARIABLE_VarSet_234_234);
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(FieldValueTerm0_117, &FieldValueTerm_119, STATE_VARIABLE_VarSet_234_234, &STATE_VARIABLE_VarSet_235_235, STATE_VARIABLE_SVarState_231_231, &STATE_VARIABLE_SVarState_236_236, STATE_VARIABLE_Specs_232_232, &STATE_VARIABLE_Specs_237_237);
                                  Var_240 = (MR_Word) ((MR_Unsigned) 0U);
                                  {
                                    Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (InputTermVar_417));
                                    MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (Var_240));
                                  }
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(FieldValueTerm_119, &FieldValueVar_120, Var_238, STATE_VARIABLE_VarSet_235_235, &STATE_VARIABLE_VarSet_239_239);
                                  hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_27, MainContext_28, SubContext_29, FieldNames_426, FieldValueVar_120, InputTermVar_417, XVar_23, &Functor_418, &Var_241, &SetGoal_123, STATE_VARIABLE_SVarState_236_236, &STATE_VARIABLE_SVarState_242_242, STATE_VARIABLE_SVarStore_0_144, &STATE_VARIABLE_SVarStore_243_243, STATE_VARIABLE_VarSet_239_239, &STATE_VARIABLE_VarSet_244_244, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_245_245, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_246_246, STATE_VARIABLE_Specs_237_237, &STATE_VARIABLE_Specs_247_247);
                                  InnerFunctor_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_241, (MR_Integer) 0))));
                                  FieldSubContext_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_241, (MR_Integer) 1))));
                                  TermArgNumber_125 = (MR_Integer) 1;
                                  FieldArgNumber_127 = (MR_Integer) 2;
                                  Var_251 = (MR_Word) ((MR_Unsigned) 0U);
                                  Var_261 = (MR_Word) ((MR_Unsigned) 0U);
                                  Var_263 = (MR_Word) ((MR_Unsigned) 0U);
                                  {
                                    TermArgContext_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), TermArgContext_124, 0) = ((MR_Box) (Functor_418));
                                    MR_hl_field(MR_mktag(2), TermArgContext_124, 1) = ((MR_Box) (MainContext_28));
                                    MR_hl_field(MR_mktag(2), TermArgContext_124, 2) = ((MR_Box) (SubContext_29));
                                  }
                                  {
                                    FieldArgContext_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), FieldArgContext_126, 0) = ((MR_Box) (InnerFunctor_121));
                                    MR_hl_field(MR_mktag(2), FieldArgContext_126, 1) = ((MR_Box) (MainContext_28));
                                    MR_hl_field(MR_mktag(2), FieldArgContext_126, 2) = ((MR_Box) (FieldSubContext_122));
                                  }
                                  {
                                    Var_248 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_248, 0) = ((MR_Box) (TermArgNumber_125));
                                    MR_hl_field(MR_mktag(0), Var_248, 1) = ((MR_Box) (TermArgContext_124));
                                  }
                                  {
                                    Var_250 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_250, 0) = ((MR_Box) (FieldArgNumber_127));
                                    MR_hl_field(MR_mktag(0), Var_250, 1) = ((MR_Box) (FieldArgContext_126));
                                  }
                                  {
                                    Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (Var_250));
                                    MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Var_251));
                                  }
                                  {
                                    ArgContexts_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ArgContexts_128, 0) = ((MR_Box) (Var_248));
                                    MR_hl_field(MR_mktag(1), ArgContexts_128, 1) = ((MR_Box) (Var_249));
                                  }
                                  {
                                    Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_260, 0) = ((MR_Box) (FieldValueVar_120));
                                    MR_hl_field(MR_mktag(1), Var_260, 1) = ((MR_Box) (Var_261));
                                  }
                                  {
                                    Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (InputTermVar_417));
                                    MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (Var_260));
                                  }
                                  {
                                    Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (FieldValueTerm_119));
                                    MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) (Var_263));
                                  }
                                  {
                                    Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_253, 0) = ((MR_Box) (InputTerm_416));
                                    MR_hl_field(MR_mktag(1), Var_253, 1) = ((MR_Box) (Var_262));
                                  }
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(Var_252, Var_253, ArgContexts_128, Context_27, &InputFieldArgExpansions_129, STATE_VARIABLE_SVarState_242_242, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_SVarStore_243_243, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_244_244, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_245_245, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_246_246, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_247_247, STATE_VARIABLE_Specs_153);
                                  hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_414);
                                  hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(GoalInfo_414, InputFieldArgExpansions_129, SetGoal_123, &Goal_415);
                                  Var_264 = (MR_Word) ((MR_Unsigned) 0U);
                                  TypeCtorInfo_488_488 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                                  Var_265 = mercury__cord__singleton_1_f_0(TypeCtorInfo_488_488, ((MR_Box) (Goal_415)));
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    *Expansion_32 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_264));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_265));
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
                }
              }
            }
          }
          break;
        case (MR_Integer) 31:
          {
            // case "^"
            ;
            {
              MR_Word TypeCtorInfo_487_487;
              MR_Word InputTerm0_98;
              MR_Word FieldNameTerm_99;
              MR_Word FieldNameContextPieces_100;
              MR_Word MaybeFieldNames_101;
              MR_Word FieldNames_102;
              MR_Word InputTerm_103;
              MR_Word InputTermVar_104;
              MR_Word Functor_105;
              MR_Word GetGoal_107;
              MR_Word ArgContext_108;
              MR_Word InputArgExpansion_109;
              MR_Word STATE_VARIABLE_VarSet_286_286;
              MR_Word STATE_VARIABLE_SVarState_287_287;
              MR_Word STATE_VARIABLE_Specs_288_288;
              MR_Word Var_289;
              MR_Word STATE_VARIABLE_VarSet_290_290;
              MR_Word STATE_VARIABLE_SVarState_291_291;
              MR_Word STATE_VARIABLE_SVarStore_292_292;
              MR_Word STATE_VARIABLE_VarSet_293_293;
              MR_Word STATE_VARIABLE_ModuleInfo_294_294;
              MR_Word STATE_VARIABLE_QualInfo_295_295;
              MR_Word STATE_VARIABLE_Specs_296_296;
              MR_Integer Var_297;
              MR_Word Var_304;
              MR_Word Var_305;
              MR_Word GoalInfo_400;
              MR_Word Goal_401;
              MR_Word Var_905;
              MR_Word Var_907;
              MR_Word Var_106;

              succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                InputTerm0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
                Var_907 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
                succeeded = (Var_907 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FieldNameTerm_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_907, (MR_Integer) 0))));
                  Var_905 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_907, (MR_Integer) 1))));
                  succeeded = (Var_905 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    FieldNameContextPieces_100 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[33]));
                    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_99, STATE_VARIABLE_VarSet_0_146, FieldNameContextPieces_100, &MaybeFieldNames_101);
                    succeeded = ((MR_tag((MR_Word) MaybeFieldNames_101)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      FieldNames_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_101, (MR_Integer) 0))));
                      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(InputTerm0_98, &InputTerm_103, STATE_VARIABLE_VarSet_0_146, &STATE_VARIABLE_VarSet_286_286, STATE_VARIABLE_SVarState_0_142, &STATE_VARIABLE_SVarState_287_287, STATE_VARIABLE_Specs_0_152, &STATE_VARIABLE_Specs_288_288);
                      Var_289 = (MR_Word) ((MR_Unsigned) 0U);
                      hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_103, &InputTermVar_104, Var_289, STATE_VARIABLE_VarSet_286_286, &STATE_VARIABLE_VarSet_290_290);
                      hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(Context_27, MainContext_28, SubContext_29, FieldNames_102, XVar_23, InputTermVar_104, Purity_30, &Functor_105, &Var_106, &GetGoal_107, STATE_VARIABLE_SVarState_287_287, &STATE_VARIABLE_SVarState_291_291, STATE_VARIABLE_SVarStore_0_144, &STATE_VARIABLE_SVarStore_292_292, STATE_VARIABLE_VarSet_290_290, &STATE_VARIABLE_VarSet_293_293, STATE_VARIABLE_ModuleInfo_0_148, &STATE_VARIABLE_ModuleInfo_294_294, STATE_VARIABLE_QualInfo_0_150, &STATE_VARIABLE_QualInfo_295_295, STATE_VARIABLE_Specs_288_288, &STATE_VARIABLE_Specs_296_296);
                      Var_297 = (MR_Integer) 1;
                      {
                        ArgContext_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ArgContext_108, 0) = ((MR_Box) (Functor_105));
                        MR_hl_field(MR_mktag(2), ArgContext_108, 1) = ((MR_Box) (MainContext_28));
                        MR_hl_field(MR_mktag(2), ArgContext_108, 2) = ((MR_Box) (SubContext_29));
                      }
                      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(InputTermVar_104, InputTerm_103, YFunctorContext_26, ArgContext_108, Var_297, &InputArgExpansion_109, STATE_VARIABLE_SVarState_291_291, STATE_VARIABLE_SVarState_143, STATE_VARIABLE_SVarStore_292_292, STATE_VARIABLE_SVarStore_145, STATE_VARIABLE_VarSet_293_293, STATE_VARIABLE_VarSet_147, STATE_VARIABLE_ModuleInfo_294_294, STATE_VARIABLE_ModuleInfo_149, STATE_VARIABLE_QualInfo_295_295, STATE_VARIABLE_QualInfo_151, STATE_VARIABLE_Specs_296_296, STATE_VARIABLE_Specs_153);
                      hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_400);
                      hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(GoalInfo_400, InputArgExpansion_109, GetGoal_107, &Goal_401);
                      Var_304 = (MR_Word) ((MR_Unsigned) 0U);
                      TypeCtorInfo_487_487 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                      Var_305 = mercury__cord__singleton_1_f_0(TypeCtorInfo_487_487, ((MR_Box) (Goal_401)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Expansion_32 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_304));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_305));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word LHSVar_21,
  MR_Word RHS0_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_36,
  MR_Word * STATE_VARIABLE_SVarState_37,
  MR_Word STATE_VARIABLE_SVarStore_0_38,
  MR_Word * STATE_VARIABLE_SVarStore_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_Word RHS_35;
    MR_Word STATE_VARIABLE_VarSet_48_48;
    MR_Word STATE_VARIABLE_SVarState_49_49;
    MR_Word STATE_VARIABLE_Specs_50_50;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(RHS0_22, &RHS_35, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_SVarState_0_36, &STATE_VARIABLE_SVarState_49_49, STATE_VARIABLE_Specs_0_46, &STATE_VARIABLE_Specs_50_50);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(LHSVar_21, RHS_35, Context_23, MainContext_24, SubContext_25, Purity_26, Expansion_28, STATE_VARIABLE_SVarState_49_49, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Specs_47);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word XVar_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word Purity_26,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_SVarStore_0_43,
  MR_Word * STATE_VARIABLE_SVarStore_44,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  if (((MR_tag((MR_Word) YTerm_22)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 0))));
    MR_Word YArgTerms_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 1))));
    MR_Word YFunctorContext_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 2))));

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(XVar_21, YFunctor_38, YArgTerms_39, YFunctorContext_40, Context_23, MainContext_24, SubContext_25, Purity_26, Expansion_28, STATE_VARIABLE_SVarState_0_41, STATE_VARIABLE_SVarState_42, STATE_VARIABLE_SVarStore_0_43, STATE_VARIABLE_SVarStore_44, STATE_VARIABLE_VarSet_0_45, STATE_VARIABLE_VarSet_46, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
  }
  else
  {
    MR_Word YVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_22, (MR_Integer) 0))));
    MR_Word Goal_37;
    MR_Word Var_59;
    MR_Word Var_62;

    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (YVar_35));
    }
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_21, Var_59, Context_23, MainContext_24, SubContext_25, Purity_26, &Goal_37, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50);
    Var_62 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_37)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_62));
    }
    *STATE_VARIABLE_SVarState_42 = STATE_VARIABLE_SVarState_0_41;
    *STATE_VARIABLE_SVarStore_44 = STATE_VARIABLE_SVarStore_0_43;
    *STATE_VARIABLE_VarSet_46 = STATE_VARIABLE_VarSet_0_45;
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
    *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
  MR_Word XVar_20,
  MR_Word YTerm_21,
  MR_Word Context_22,
  MR_Word ArgContext_23,
  MR_Integer ArgNum_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_42,
  MR_Word * STATE_VARIABLE_SVarState_43,
  MR_Word STATE_VARIABLE_SVarStore_0_44,
  MR_Word * STATE_VARIABLE_SVarStore_45,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word STATE_VARIABLE_QualInfo_0_50,
  MR_Word * STATE_VARIABLE_QualInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) YTerm_21)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_21, (MR_Integer) 0))));
      MR_Word YArgTerms_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_21, (MR_Integer) 1))));
      MR_Word YFunctorContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_21, (MR_Integer) 2))));
      MR_Word MainContext_65;
      MR_Word SubContext_66;

      switch (MR_tag((MR_Word) ArgContext_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PredOrFunc_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgContext_23, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer Arity_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgContext_23, (MR_Integer) 1))));

            succeeded = (PredOrFunc_74 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (ArgNum_25 == Arity_75);
            if (succeeded)
              MainContext_65 = (MR_Word) ((MR_Unsigned) 4U);
            else
              {
                MainContext_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MainContext_65, 0) = ((MR_Box) (ArgNum_25));
              }
            SubContext_66 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContext_23, (MR_Integer) 0))));

            {
              MainContext_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MainContext_65, 0) = ((MR_Box) (PredId_76));
              MR_hl_field(MR_mktag(2), MainContext_65, 1) = ((MR_Box) (ArgNum_25));
            }
            SubContext_66 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConsId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 0))));
            MR_Word SubContexts0_78;
            MR_Word SubContext_79;

            MainContext_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 1))));
            SubContexts0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 2))));
            {
              SubContext_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubContext_79, 0) = ((MR_Box) (ConsId_77));
              MR_hl_field(MR_mktag(0), SubContext_79, 1) = ((MR_Box) (ArgNum_25));
            }
            {
              SubContext_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SubContext_66, 0) = ((MR_Box) (SubContext_79));
              MR_hl_field(MR_mktag(1), SubContext_66, 1) = ((MR_Box) (SubContexts0_78));
            }
          }
          break;
      }
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(XVar_20, YFunctor_39, YArgTerms_40, YFunctorContext_41, Context_22, MainContext_65, SubContext_66, (MR_Integer) 0, Expansion_26, STATE_VARIABLE_SVarState_0_42, STATE_VARIABLE_SVarState_43, STATE_VARIABLE_SVarStore_0_44, STATE_VARIABLE_SVarStore_45, STATE_VARIABLE_VarSet_0_46, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_ModuleInfo_49, STATE_VARIABLE_QualInfo_0_50, STATE_VARIABLE_QualInfo_51, STATE_VARIABLE_Specs_0_52, STATE_VARIABLE_Specs_53);
    }
    else
    {
      MR_Word YVar_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_21, (MR_Integer) 0))));
      MR_Word YVarContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_21, (MR_Integer) 1))));
      MR_Word GoalCord_35;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_20)), ((MR_Box) (YVar_33)));
      if (succeeded)
      {
        GoalCord_35 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
        *STATE_VARIABLE_QualInfo_51 = STATE_VARIABLE_QualInfo_0_50;
      }
      else
      {
        MR_Word MainContext_36;
        MR_Word SubContext_37;
        MR_Word Goal_38;
        MR_Word Var_61;

        switch (MR_tag((MR_Word) ArgContext_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredOrFunc_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgContext_23, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Arity_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgContext_23, (MR_Integer) 1))));

              succeeded = (PredOrFunc_84 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (ArgNum_25 == Arity_85);
              if (succeeded)
                MainContext_36 = (MR_Word) ((MR_Unsigned) 4U);
              else
                {
                  MainContext_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MainContext_36, 0) = ((MR_Box) (ArgNum_25));
                }
              SubContext_37 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContext_23, (MR_Integer) 0))));

              {
                MainContext_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), MainContext_36, 0) = ((MR_Box) (PredId_86));
                MR_hl_field(MR_mktag(2), MainContext_36, 1) = ((MR_Box) (ArgNum_25));
              }
              SubContext_37 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConsId_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 0))));
              MR_Word SubContexts0_88;
              MR_Word SubContext_89;

              MainContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 1))));
              SubContexts0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_23, (MR_Integer) 2))));
              {
                SubContext_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SubContext_89, 0) = ((MR_Box) (ConsId_87));
                MR_hl_field(MR_mktag(0), SubContext_89, 1) = ((MR_Box) (ArgNum_25));
              }
              {
                SubContext_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SubContext_37, 0) = ((MR_Box) (SubContext_89));
                MR_hl_field(MR_mktag(1), SubContext_37, 1) = ((MR_Box) (SubContexts0_88));
              }
            }
            break;
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (YVar_33));
        }
        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_20, Var_61, YVarContext_34, MainContext_36, SubContext_37, (MR_Integer) 0, &Goal_38, STATE_VARIABLE_QualInfo_0_50, STATE_VARIABLE_QualInfo_51);
        GoalCord_35 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_38)));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_26 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_35));
      }
      *STATE_VARIABLE_SVarState_43 = STATE_VARIABLE_SVarState_0_42;
      *STATE_VARIABLE_SVarStore_45 = STATE_VARIABLE_SVarStore_0_44;
      *STATE_VARIABLE_VarSet_47 = STATE_VARIABLE_VarSet_0_46;
      *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(
  MR_Word XVar_20,
  MR_Word Purity_21,
  MR_Word Context_22,
  MR_Word MainContext_23,
  MR_Word SubContext_24,
  MR_Word PurityPFArgsDetTerm_25,
  MR_Word MaybeLambdaBody_26,
  MR_Word * Expansion_27,
  MR_Word STATE_VARIABLE_SVarState_0_46,
  MR_Word STATE_VARIABLE_SVarStore_0_47,
  MR_Word * STATE_VARIABLE_SVarStore_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  {
    MR_Word MaybeBodyGoal_35;
    MR_Word MaybeDCGVars_36;
    MR_Word MaybeLambdaHead_43;
    MR_Word STATE_VARIABLE_VarSet_61_61;
    MR_Word STATE_VARIABLE_VarSet_62_62;
    MR_Word STATE_VARIABLE_QualInfo_63_63;

    if ((MaybeLambdaBody_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TrueGoal_34;

      {
        TrueGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TrueGoal_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TrueGoal_34, 1) = ((MR_Box) (Context_22));
      }
      {
        MaybeBodyGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeBodyGoal_35, 0) = ((MR_Box) (TrueGoal_34));
      }
      MaybeDCGVars_36 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_VarSet_61_61 = STATE_VARIABLE_VarSet_0_49;
    }
    else
    {
      MR_Word LambdaBodyKind_37;
      MR_Word BodyGoalTerm_38;
      MR_Word ContextPieces_39;
      MR_Word GenericBodyGoalTerm_40;
      MR_Tuple Var_57 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeLambdaBody_26, (MR_Integer) 0))));

      LambdaBodyKind_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
      BodyGoalTerm_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
      ContextPieces_39 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[101]))));
      mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyGoalTerm_38, &GenericBodyGoalTerm_40);
      switch (LambdaBodyKind_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word DCGVar0_41;
            MR_Word DCGVarN_42;

            parse_tree__parse_dcg_goal__parse_dcg_pred_goal_7_p_0(GenericBodyGoalTerm_40, ContextPieces_39, &MaybeBodyGoal_35, &DCGVar0_41, &DCGVarN_42, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_61_61);
            {
              MaybeDCGVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeDCGVars_36, 0) = ((MR_Box) (DCGVar0_41));
              MR_hl_field(MR_mktag(1), MaybeDCGVars_36, 1) = ((MR_Box) (DCGVarN_42));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__parse_goal__parse_goal_5_p_0(GenericBodyGoalTerm_40, ContextPieces_39, &MaybeBodyGoal_35, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_61_61);
            MaybeDCGVars_36 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
    hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(PurityPFArgsDetTerm_25, MaybeDCGVars_36, &MaybeLambdaHead_43, STATE_VARIABLE_VarSet_61_61, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_QualInfo_0_53, &STATE_VARIABLE_QualInfo_63_63);
    if (((MR_tag((MR_Word) MaybeLambdaHead_43)) == (MR_Integer) 0))
    {
      MR_Word LambdaHeadSpecs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLambdaHead_43, (MR_Integer) 0))));
      MR_Word Var_73;

      *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LambdaHeadSpecs_44, STATE_VARIABLE_Specs_0_55);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_63_63, STATE_VARIABLE_QualInfo_54);
      Var_73 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      }
      *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
      *STATE_VARIABLE_VarSet_50 = STATE_VARIABLE_VarSet_62_62;
      *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    }
    else
    {
      MR_Word LambdaHead_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaHead_43, (MR_Integer) 0))));

      hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0(XVar_20, Purity_21, Context_22, MainContext_23, SubContext_24, LambdaHead_45, MaybeBodyGoal_35, Expansion_27, STATE_VARIABLE_SVarState_0_46, STATE_VARIABLE_SVarStore_0_47, STATE_VARIABLE_SVarStore_48, STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_QualInfo_63_63, STATE_VARIABLE_QualInfo_54, STATE_VARIABLE_Specs_0_55, STATE_VARIABLE_Specs_56);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word XVar_23,
  MR_Word YFunctor_24,
  MR_Word YArgTerms0_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_62,
  MR_Word * STATE_VARIABLE_SVarState_63,
  MR_Word STATE_VARIABLE_SVarStore_0_64,
  MR_Word * STATE_VARIABLE_SVarStore_65,
  MR_Word STATE_VARIABLE_VarSet_0_66,
  MR_Word * STATE_VARIABLE_VarSet_67,
  MR_Word STATE_VARIABLE_ModuleInfo_0_68,
  MR_Word * STATE_VARIABLE_ModuleInfo_69,
  MR_Word STATE_VARIABLE_QualInfo_0_70,
  MR_Word * STATE_VARIABLE_QualInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
{
  {
    MR_bool succeeded;
    MR_Word YArgTerms_39;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_SVarState_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word ExpansionPrime_41;
    MR_Word STATE_VARIABLE_SVarState_77_77;
    MR_Word STATE_VARIABLE_SVarStore_78_78;
    MR_Word STATE_VARIABLE_VarSet_79_79;
    MR_Word STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word STATE_VARIABLE_QualInfo_81_81;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_String YAtom_40;

    hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(YArgTerms0_25, &YArgTerms_39, STATE_VARIABLE_VarSet_0_66, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_SVarState_0_62, &STATE_VARIABLE_SVarState_75_75, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_76_76);
    succeeded = ((MR_tag((MR_Word) YFunctor_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      YAtom_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), YFunctor_24, (MR_Integer) 0))));
      succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(XVar_23, YAtom_40, YArgTerms_39, YFunctorContext_26, Context_27, MainContext_28, SubContext_29, Purity_30, &ExpansionPrime_41, STATE_VARIABLE_SVarState_75_75, &STATE_VARIABLE_SVarState_77_77, STATE_VARIABLE_SVarStore_0_64, &STATE_VARIABLE_SVarStore_78_78, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_79_79, STATE_VARIABLE_ModuleInfo_0_68, &STATE_VARIABLE_ModuleInfo_80_80, STATE_VARIABLE_QualInfo_0_70, &STATE_VARIABLE_QualInfo_81_81, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_82_82);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_82_82;
      *STATE_VARIABLE_QualInfo_71 = STATE_VARIABLE_QualInfo_81_81;
      *STATE_VARIABLE_ModuleInfo_69 = STATE_VARIABLE_ModuleInfo_80_80;
      *STATE_VARIABLE_VarSet_67 = STATE_VARIABLE_VarSet_79_79;
      *STATE_VARIABLE_SVarStore_65 = STATE_VARIABLE_SVarStore_78_78;
      *STATE_VARIABLE_SVarState_63 = STATE_VARIABLE_SVarState_77_77;
      *Expansion_32 = ExpansionPrime_41;
    }
    else
    {
      MR_Word MaybeQualifiedYArgTerms_50;
      MR_Word ConsId_52;
      MR_Word STATE_VARIABLE_Specs_91_91;
      MR_Word STATE_VARIABLE_SVarState_92_92;
      MR_Word STATE_VARIABLE_VarSet_93_93;
      MR_Word FunctorName_48;
      MR_Word MaybeQualifiedYArgTermsPrime_49;
      MR_Word STATE_VARIABLE_VarSet_86_86;
      MR_Word STATE_VARIABLE_SVarState_87_87;
      MR_Word STATE_VARIABLE_Specs_88_88;
      MR_String YAtom_128;
      MR_Word ModuleNameTerm_42;
      MR_Word NameArgsTerm_43;
      MR_Word Var_83;
      MR_Word Var_84;

      succeeded = ((MR_tag((MR_Word) YFunctor_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        YAtom_128 = ((MR_String) ((MR_hl_field(MR_mktag(0), YFunctor_24, (MR_Integer) 0))));
        succeeded = (strcmp(YAtom_128, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (YArgTerms_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleNameTerm_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_39, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_39, (MR_Integer) 1))));
            succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameArgsTerm_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));
              Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
              succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_141_141;
          MR_String Name_44;
          MR_Word NameArgTerms_45;
          MR_Word ModuleName_47;
          MR_Word Var_85;

          succeeded = ((MR_tag((MR_Word) NameArgsTerm_43)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_43, (MR_Integer) 0))));
            NameArgTerms_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_43, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 0);
            if (succeeded)
            {
              Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0))));
              TypeCtorInfo_141_141 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_141_141, ModuleNameTerm_42, &ModuleName_47);
              if (succeeded)
              {
                {
                  FunctorName_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FunctorName_48, 0) = ((MR_Box) (ModuleName_47));
                  MR_hl_field(MR_mktag(1), FunctorName_48, 1) = ((MR_Box) (Name_44));
                }
                hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(NameArgTerms_45, &MaybeQualifiedYArgTermsPrime_49, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_86_86, STATE_VARIABLE_SVarState_75_75, &STATE_VARIABLE_SVarState_87_87, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_88_88);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          FunctorName_48 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(YAtom_128, (MR_String) "__");
          MaybeQualifiedYArgTermsPrime_49 = YArgTerms_39;
          STATE_VARIABLE_Specs_88_88 = STATE_VARIABLE_Specs_76_76;
          STATE_VARIABLE_VarSet_86_86 = STATE_VARIABLE_VarSet_74_74;
          STATE_VARIABLE_SVarState_87_87 = STATE_VARIABLE_SVarState_75_75;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_51;
        MR_Word Var_90;

        STATE_VARIABLE_Specs_91_91 = STATE_VARIABLE_Specs_88_88;
        STATE_VARIABLE_VarSet_93_93 = STATE_VARIABLE_VarSet_86_86;
        STATE_VARIABLE_SVarState_92_92 = STATE_VARIABLE_SVarState_87_87;
        MaybeQualifiedYArgTerms_50 = MaybeQualifiedYArgTermsPrime_49;
        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), MaybeQualifiedYArgTerms_50, &Arity_51);
        Var_90 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          ConsId_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_52, 1) = ((MR_Box) (FunctorName_48));
          MR_hl_field(MR_mktag(3), ConsId_52, 2) = ((MR_Box) (Arity_51));
          MR_hl_field(MR_mktag(3), ConsId_52, 3) = ((MR_Box) (Var_90));
        }
      }
      else
      {
        hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(YFunctor_24, YArgTerms_39, YFunctorContext_26, &ConsId_52, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_91_91);
        MaybeQualifiedYArgTerms_50 = YArgTerms_39;
        STATE_VARIABLE_VarSet_93_93 = STATE_VARIABLE_VarSet_74_74;
        STATE_VARIABLE_SVarState_92_92 = STATE_VARIABLE_SVarState_75_75;
      }
      if ((MaybeQualifiedYArgTerms_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word FunctorGoal_53;
        MR_Word Goal_54;
        MR_Word Var_121;
        MR_Word Var_125;
        MR_Word Var_127;

        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ConsId_52));
          MR_hl_field(MR_mktag(1), Var_121, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Var_121, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, Var_121, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_53, STATE_VARIABLE_QualInfo_0_70, STATE_VARIABLE_QualInfo_71);
        hlds__hlds_goal__goal_set_purity_3_p_0(Purity_30, FunctorGoal_53, &Goal_54);
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (XVar_23));
          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        Var_127 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_54)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Expansion_32 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_127));
        }
        *STATE_VARIABLE_SVarState_63 = STATE_VARIABLE_SVarState_92_92;
        *STATE_VARIABLE_SVarStore_65 = STATE_VARIABLE_SVarStore_0_64;
        *STATE_VARIABLE_VarSet_67 = STATE_VARIABLE_VarSet_93_93;
        *STATE_VARIABLE_ModuleInfo_69 = STATE_VARIABLE_ModuleInfo_0_68;
        *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_91_91;
      }
      else
      {
        MR_Word ArgContext_57;

        {
          ArgContext_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ArgContext_57, 0) = ((MR_Box) (ConsId_52));
          MR_hl_field(MR_mktag(2), ArgContext_57, 1) = ((MR_Box) (MainContext_28));
          MR_hl_field(MR_mktag(2), ArgContext_57, 2) = ((MR_Box) (SubContext_29));
        }
        switch (Purity_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Goal0_61;
              MR_Word STATE_VARIABLE_QualInfo_101_101;
              MR_Word Var_103;
              MR_Word Var_107;
              MR_Word FunctorGoal_131;
              MR_Word Goal_132;
              MR_Word YVars_133;
              MR_Word ArgExpansions_134;
              MR_Word GoalInfo_135;

              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(MaybeQualifiedYArgTerms_50, YFunctorContext_26, ArgContext_57, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &YVars_133, &ArgExpansions_134, STATE_VARIABLE_SVarState_92_92, STATE_VARIABLE_SVarState_63, STATE_VARIABLE_SVarStore_0_64, STATE_VARIABLE_SVarStore_65, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_67, STATE_VARIABLE_ModuleInfo_0_68, STATE_VARIABLE_ModuleInfo_69, STATE_VARIABLE_QualInfo_0_70, &STATE_VARIABLE_QualInfo_101_101, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_73);
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (ConsId_52));
                MR_hl_field(MR_mktag(1), Var_103, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_103, 2) = ((MR_Box) (YVars_133));
              }
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, Var_103, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_131, STATE_VARIABLE_QualInfo_101_101, STATE_VARIABLE_QualInfo_71);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_135);
              hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(GoalInfo_135, ArgExpansions_134, FunctorGoal_131, &Goal0_61);
              hlds__hlds_goal__goal_set_purity_3_p_0(Purity_30, Goal0_61, &Goal_132);
              Var_107 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_132)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_32 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_107));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word YVars_58;
              MR_Word ArgExpansions_59;
              MR_Word GoalInfo_60;
              MR_Word STATE_VARIABLE_QualInfo_115_115;
              MR_Word Var_117;
              MR_Word FunctorGoal_130;

              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(MaybeQualifiedYArgTerms_50, YFunctorContext_26, ArgContext_57, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &YVars_58, &ArgExpansions_59, STATE_VARIABLE_SVarState_92_92, STATE_VARIABLE_SVarState_63, STATE_VARIABLE_SVarStore_0_64, STATE_VARIABLE_SVarStore_65, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_67, STATE_VARIABLE_ModuleInfo_0_68, STATE_VARIABLE_ModuleInfo_69, STATE_VARIABLE_QualInfo_0_70, &STATE_VARIABLE_QualInfo_115_115, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_73);
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ConsId_52));
                MR_hl_field(MR_mktag(1), Var_117, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_117, 2) = ((MR_Box) (YVars_58));
              }
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, Var_117, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_130, STATE_VARIABLE_QualInfo_115_115, STATE_VARIABLE_QualInfo_71);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_60);
              hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(GoalInfo_60, XVar_23, FunctorGoal_130, (MR_Integer) 1, ArgExpansions_59, Expansion_32);
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
  MR_Word XVars_19,
  MR_Word YTerms_20,
  MR_Word ArgContexts_21,
  MR_Word Context_22,
  MR_Word * Expansions_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_SVarStore_0_42,
  MR_Word * STATE_VARIABLE_SVarStore_43,
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded = (XVars_19 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (YTerms_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ArgContexts_21 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Expansions_24 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
      *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
      *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
      *STATE_VARIABLE_VarSet_45 = STATE_VARIABLE_VarSet_0_44;
      *STATE_VARIABLE_SVarStore_43 = STATE_VARIABLE_SVarStore_0_42;
      *STATE_VARIABLE_SVarState_41 = STATE_VARIABLE_SVarState_0_40;
    }
    else
    {
      MR_Word HeadXVar_31;
      MR_Word TailXVars_32;
      MR_Word HeadYTerm_33;
      MR_Word TailYTerms_34;
      MR_Integer HeadArgNumber_35;
      MR_Word HeadArgContext_36;
      MR_Word TailArgContexts_37;
      MR_Word Var_52;

      succeeded = (XVars_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadXVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), XVars_19, (MR_Integer) 0))));
        TailXVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), XVars_19, (MR_Integer) 1))));
        succeeded = (YTerms_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadYTerm_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerms_20, (MR_Integer) 0))));
          TailYTerms_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerms_20, (MR_Integer) 1))));
          succeeded = (ArgContexts_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContexts_21, (MR_Integer) 0))));
            TailArgContexts_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContexts_21, (MR_Integer) 1))));
            HeadArgNumber_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
            HeadArgContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1))));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadExpansion_38;
        MR_Word TailExpansions_39;
        MR_Word STATE_VARIABLE_SVarState_53_53;
        MR_Word STATE_VARIABLE_SVarStore_54_54;
        MR_Word STATE_VARIABLE_VarSet_55_55;
        MR_Word STATE_VARIABLE_ModuleInfo_56_56;
        MR_Word STATE_VARIABLE_QualInfo_57_57;
        MR_Word STATE_VARIABLE_Specs_58_58;

        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(HeadXVar_31, HeadYTerm_33, Context_22, HeadArgContext_36, HeadArgNumber_35, &HeadExpansion_38, STATE_VARIABLE_SVarState_0_40, &STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_SVarStore_0_42, &STATE_VARIABLE_SVarStore_54_54, STATE_VARIABLE_VarSet_0_44, &STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_QualInfo_0_48, &STATE_VARIABLE_QualInfo_57_57, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_58_58);
        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(TailXVars_32, TailYTerms_34, TailArgContexts_37, Context_22, &TailExpansions_39, STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_SVarState_41, STATE_VARIABLE_SVarStore_54_54, STATE_VARIABLE_SVarStore_43, STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_VarSet_45, STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_QualInfo_57_57, STATE_VARIABLE_QualInfo_49, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_51);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Expansions_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadExpansion_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailExpansions_39));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications_with_contexts\'/18", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_SeenXVars_0_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_SVarState_0_9,
  MR_Word * STATE_VARIABLE_SVarState_10,
  MR_Word STATE_VARIABLE_SVarStore_0_11,
  MR_Word * STATE_VARIABLE_SVarStore_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    *STATE_VARIABLE_QualInfo_18 = STATE_VARIABLE_QualInfo_0_17;
    *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_0_15;
    *STATE_VARIABLE_VarSet_14 = STATE_VARIABLE_VarSet_0_13;
    *STATE_VARIABLE_SVarStore_12 = STATE_VARIABLE_SVarStore_0_11;
    *STATE_VARIABLE_SVarState_10 = STATE_VARIABLE_SVarState_0_9;
  }
  else
  {
    MR_Word YTerm_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word YTerms_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word XVar_51;
    MR_Word XVars_52;
    MR_Word Expansion_53;
    MR_Word Expansions_54;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_SeenXVars_75_75;
    MR_Word STATE_VARIABLE_SVarState_76_76;
    MR_Word STATE_VARIABLE_SVarStore_77_77;
    MR_Word STATE_VARIABLE_VarSet_78_78;
    MR_Word STATE_VARIABLE_ModuleInfo_79_79;
    MR_Word STATE_VARIABLE_QualInfo_80_80;
    MR_Word STATE_VARIABLE_Specs_81_81;
    MR_Integer Var_82;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(YTerm_44, &XVar_51, STATE_VARIABLE_SeenXVars_0_6, STATE_VARIABLE_VarSet_0_13, &STATE_VARIABLE_VarSet_74_74);
    {
      STATE_VARIABLE_SeenXVars_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SeenXVars_75_75, 0) = ((MR_Box) (XVar_51));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SeenXVars_75_75, 1) = ((MR_Box) (STATE_VARIABLE_SeenXVars_0_6));
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(XVar_51, YTerm_44, HeadVar__2_2, HeadVar__3_3, HeadVar__5_5, &Expansion_53, STATE_VARIABLE_SVarState_0_9, &STATE_VARIABLE_SVarState_76_76, STATE_VARIABLE_SVarStore_0_11, &STATE_VARIABLE_SVarStore_77_77, STATE_VARIABLE_VarSet_74_74, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_QualInfo_0_17, &STATE_VARIABLE_QualInfo_80_80, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_81_81);
    Var_82 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) (MR_Integer) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(YTerms_45, HeadVar__2_2, HeadVar__3_3, Var_82, STATE_VARIABLE_SeenXVars_75_75, &XVars_52, &Expansions_54, STATE_VARIABLE_SVarState_76_76, STATE_VARIABLE_SVarState_10, STATE_VARIABLE_SVarStore_77_77, STATE_VARIABLE_SVarStore_12, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_14, STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_QualInfo_80_80, STATE_VARIABLE_QualInfo_18, STATE_VARIABLE_Specs_81_81, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (XVar_51));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (XVars_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Expansion_53));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Expansions_54));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_SVarStore_0_10,
  MR_Word * STATE_VARIABLE_SVarStore_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_QualInfo_0_16,
  MR_Word * STATE_VARIABLE_QualInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_QualInfo_17 = STATE_VARIABLE_QualInfo_0_16;
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
      *STATE_VARIABLE_SVarStore_11 = STATE_VARIABLE_SVarStore_0_10;
      *STATE_VARIABLE_SVarState_9 = STATE_VARIABLE_SVarState_0_8;
    }
    else
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word YTerm_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word YTerms_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansion_102;
      MR_Word Expansions_103;
      MR_Word STATE_VARIABLE_SVarState_122_122;
      MR_Word STATE_VARIABLE_SVarStore_123_123;
      MR_Word STATE_VARIABLE_VarSet_124_124;
      MR_Word STATE_VARIABLE_ModuleInfo_125_125;
      MR_Word STATE_VARIABLE_QualInfo_126_126;
      MR_Word STATE_VARIABLE_Specs_127_127;
      MR_Integer Var_128;

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(Var_137, YTerm_96, HeadVar__3_3, HeadVar__4_4, HeadVar__6_6, &Expansion_102, STATE_VARIABLE_SVarState_0_8, &STATE_VARIABLE_SVarState_122_122, STATE_VARIABLE_SVarStore_0_10, &STATE_VARIABLE_SVarStore_123_123, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_124_124, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_125_125, STATE_VARIABLE_QualInfo_0_16, &STATE_VARIABLE_QualInfo_126_126, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_127_127);
      Var_128 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) (MR_Integer) 1);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(Var_136, YTerms_97, HeadVar__3_3, HeadVar__4_4, Var_128, &Expansions_103, STATE_VARIABLE_SVarState_122_122, STATE_VARIABLE_SVarState_9, STATE_VARIABLE_SVarStore_123_123, STATE_VARIABLE_SVarStore_11, STATE_VARIABLE_VarSet_124_124, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_ModuleInfo_125_125, STATE_VARIABLE_ModuleInfo_15, STATE_VARIABLE_QualInfo_126_126, STATE_VARIABLE_QualInfo_17, STATE_VARIABLE_Specs_127_127, STATE_VARIABLE_Specs_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Expansion_102));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Expansions_103));
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaVar_4;

    conv3_LambdaVar_4 = hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaVar_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_ArgTerm_4;

    conv2_ArgTerm_4 = hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_ArgTerm_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_213;

    conv0_HeadVar__4_213 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__1883__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_213));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0(
  MR_Word LHSVar_20,
  MR_Word UnificationPurity_21,
  MR_Word Context_22,
  MR_Word MainContext_23,
  MR_Word SubContext_24,
  MR_Word LambdaHead_25,
  MR_Word MaybeBodyGoal_26,
  MR_Word * Expansion_27,
  MR_Word OutsideSVarState_28,
  MR_Word STATE_VARIABLE_SVarStore_0_92,
  MR_Word * STATE_VARIABLE_SVarStore_93,
  MR_Word STATE_VARIABLE_VarSet_0_94,
  MR_Word * STATE_VARIABLE_VarSet_95,
  MR_Word STATE_VARIABLE_ModuleInfo_0_96,
  MR_Word * STATE_VARIABLE_ModuleInfo_97,
  MR_Word STATE_VARIABLE_QualInfo_0_98,
  MR_Word * STATE_VARIABLE_QualInfo_99,
  MR_Word STATE_VARIABLE_Specs_0_100,
  MR_Word * STATE_VARIABLE_Specs_101)
{
  {
    MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word LambdaArgs0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 2))));
    MR_Word BadModeSpecs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 3))));
    MR_Word SVarSpecs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 4))));
    MR_Word MaybeDetism_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 5))));
    MR_Word LambdaArgs1_42;
    MR_Word Modes_43;
    MR_Word InconsistentVars_44;
    MR_Word Detism_52;
    MR_Word BodyGoal_54;
    MR_Word ArgSpecs_56;
    MR_Word Goal_59;
    MR_Word STATE_VARIABLE_QualInfo_102_102;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word STATE_VARIABLE_Specs_128_128;
    MR_Word STATE_VARIABLE_Specs_129_129;
    MR_Word STATE_VARIABLE_Specs_130_130;
    MR_Word STATE_VARIABLE_QualInfo_132_132;
    MR_Word Var_206;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 0)));

    hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0(LambdaArgs0_38, &LambdaArgs1_42, &Modes_43, STATE_VARIABLE_QualInfo_0_98, &STATE_VARIABLE_QualInfo_102_102, STATE_VARIABLE_Specs_0_100, &STATE_VARIABLE_Specs_103_103);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(Modes_43, &InconsistentVars_44);
    if ((InconsistentVars_44 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_103_103;
    else
    {
      MR_Word InstVarSet_47;
      MR_Word InconsistentVarStrs_48;
      MR_Word InconsistentVarPieces_49;
      MR_Word InconsistentVarMsg_50;
      MR_Word InconsistentVarSpec_51;
      MR_Word Var_104;
      MR_Word Var_106;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_String Var_111;
      MR_Word Var_114;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_126;
      MR_Box conv1_Var_111;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), STATE_VARIABLE_VarSet_0_94, &InstVarSet_47);
      {
        Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_1));
        MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (InstVarSet_47));
        MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      InconsistentVarStrs_48 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, InconsistentVars_44);
      conv1_Var_111 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InconsistentVars_44, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
      Var_111 = ((MR_String) (conv1_Var_111));
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Var_111));
      }
      Var_114 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(InconsistentVarStrs_48);
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_114));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[100])));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
      }
      InconsistentVarPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_106, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[87])));
      {
        Var_122 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (InconsistentVarPieces_49));
      }
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        InconsistentVarMsg_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InconsistentVarMsg_50, 0) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), InconsistentVarMsg_50, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (InconsistentVarMsg_50));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        InconsistentVarSpec_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InconsistentVarSpec_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), InconsistentVarSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), InconsistentVarSpec_51, 2) = ((MR_Box) (Var_126));
      }
      {
        STATE_VARIABLE_Specs_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 0) = ((MR_Box) (InconsistentVarSpec_51));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_128_128, 1) = ((MR_Box) (STATE_VARIABLE_Specs_103_103));
      }
    }
    if (((MR_tag((MR_Word) MaybeDetism_41)) == (MR_Integer) 0))
    {
      MR_Word DetismSpecs_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDetism_41, (MR_Integer) 0))));

      STATE_VARIABLE_Specs_129_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DetismSpecs_53, STATE_VARIABLE_Specs_128_128);
      Detism_52 = (MR_Integer) 0;
    }
    else
    {
      Detism_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_41, (MR_Integer) 0))));
      STATE_VARIABLE_Specs_129_129 = STATE_VARIABLE_Specs_128_128;
    }
    if (((MR_tag((MR_Word) MaybeBodyGoal_26)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_26, (MR_Integer) 0))));

      STATE_VARIABLE_Specs_130_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_55, STATE_VARIABLE_Specs_129_129);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_102_102, &STATE_VARIABLE_QualInfo_132_132);
      {
        BodyGoal_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BodyGoal_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BodyGoal_54, 1) = ((MR_Box) (Context_22));
      }
    }
    else
    {
      BodyGoal_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_26, (MR_Integer) 0))));
      STATE_VARIABLE_QualInfo_132_132 = STATE_VARIABLE_QualInfo_102_102;
      STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_129_129;
    }
    ArgSpecs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BadModeSpecs_39, SVarSpecs_40);
    if ((ArgSpecs_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgTerms1_61;
      MR_Word ArgTerms_62;
      MR_Word FinalSVarMap_63;
      MR_Word InitialSVarState_64;
      MR_Word NonOutputArgs_65;
      MR_Word OutputArgs_66;
      MR_Word NonOutputLambdaVars_67;
      MR_Word OutputLambdaVars_68;
      MR_Integer NumArgs_69;
      MR_Word ArgContext_70;
      MR_Word HeadBefore0_71;
      MR_Word HeadBefore_72;
      MR_Word Substitution_73;
      MR_Word Body_74;
      MR_Word HeadAfter0_75;
      MR_Word HeadAfter_76;
      MR_Word LambdaVars_77;
      MR_Word FinalSVarState_80;
      MR_Word HLDS_Goal0_81;
      MR_Word QuantifiedArgTerms_82;
      MR_Word QuantifiedVars0_84;
      MR_Word QuantifiedVars_85;
      MR_Word GoalInfo_86;
      MR_Word HLDS_GoalExpr_87;
      MR_Word HLDS_Goal_88;
      MR_Word LambdaNonLocals_90;
      MR_Word LambdaRHS_91;
      MR_Word STATE_VARIABLE_VarSet_135_135;
      MR_Word STATE_VARIABLE_Specs_136_136;
      MR_Word STATE_VARIABLE_SVarState_137_137;
      MR_Word STATE_VARIABLE_SVarStore_138_138;
      MR_Word STATE_VARIABLE_VarSet_139_139;
      MR_Word STATE_VARIABLE_ModuleInfo_140_140;
      MR_Word STATE_VARIABLE_QualInfo_141_141;
      MR_Word STATE_VARIABLE_Specs_142_142;
      MR_Word STATE_VARIABLE_SVarState_144_144;
      MR_Word STATE_VARIABLE_SVarStore_145_145;
      MR_Word STATE_VARIABLE_VarSet_146_146;
      MR_Word STATE_VARIABLE_ModuleInfo_147_147;
      MR_Word STATE_VARIABLE_QualInfo_148_148;
      MR_Word STATE_VARIABLE_Specs_149_149;
      MR_Word STATE_VARIABLE_SVarStore_151_151;
      MR_Word STATE_VARIABLE_QualInfo_154_154;
      MR_Word Var_192;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_197;
      MR_Word STATE_VARIABLE_LambdaGoalVars_198_198;
      MR_Word STATE_VARIABLE_LambdaGoalVars_199_199;
      MR_Word STATE_VARIABLE_LambdaGoalVars_200_200;

      ArgTerms1_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_4[2]), LambdaArgs1_42);
      hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(Context_22, ArgTerms1_61, &ArgTerms_62, &FinalSVarMap_63, OutsideSVarState_28, &InitialSVarState_64, STATE_VARIABLE_VarSet_0_94, &STATE_VARIABLE_VarSet_135_135, STATE_VARIABLE_Specs_130_130, &STATE_VARIABLE_Specs_136_136);
      hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_7_p_0(STATE_VARIABLE_ModuleInfo_0_96, LambdaArgs1_42, ArgTerms_62, &NonOutputArgs_65, &OutputArgs_66, &NonOutputLambdaVars_67, &OutputLambdaVars_68);
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_62, &NumArgs_69);
      {
        ArgContext_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgContext_70, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_36));
        MR_hl_field(MR_mktag(0), ArgContext_70, 1) = ((MR_Box) (NumArgs_69));
      }
      HeadBefore0_71 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
      hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(NonOutputLambdaVars_67, NonOutputArgs_65, Context_22, ArgContext_70, HeadBefore0_71, &HeadBefore_72, InitialSVarState_64, &STATE_VARIABLE_SVarState_137_137, STATE_VARIABLE_SVarStore_0_92, &STATE_VARIABLE_SVarStore_138_138, STATE_VARIABLE_VarSet_135_135, &STATE_VARIABLE_VarSet_139_139, STATE_VARIABLE_ModuleInfo_0_96, &STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_QualInfo_132_132, &STATE_VARIABLE_QualInfo_141_141, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_142_142);
      mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &Substitution_73);
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, BodyGoal_54, Substitution_73, &Body_74, STATE_VARIABLE_SVarState_137_137, &STATE_VARIABLE_SVarState_144_144, STATE_VARIABLE_SVarStore_138_138, &STATE_VARIABLE_SVarStore_145_145, STATE_VARIABLE_VarSet_139_139, &STATE_VARIABLE_VarSet_146_146, STATE_VARIABLE_ModuleInfo_140_140, &STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_QualInfo_141_141, &STATE_VARIABLE_QualInfo_148_148, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_149_149);
      HeadAfter0_75 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
      hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(OutputLambdaVars_68, OutputArgs_66, Context_22, ArgContext_70, HeadAfter0_75, &HeadAfter_76, STATE_VARIABLE_SVarState_144_144, &FinalSVarState_80, STATE_VARIABLE_SVarStore_145_145, &STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_VarSet_146_146, STATE_VARIABLE_VarSet_95, STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_ModuleInfo_97, STATE_VARIABLE_QualInfo_148_148, &STATE_VARIABLE_QualInfo_154_154, STATE_VARIABLE_Specs_149_149, STATE_VARIABLE_Specs_101);
      LambdaVars_77 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_4[3]), LambdaArgs1_42);
      {
        Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (HeadAfter_76));
        MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (Body_74));
        MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_195));
      }
      {
        Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (HeadBefore_72));
        MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_194));
      }
      hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(Context_22, FinalSVarMap_63, Var_192, &HLDS_Goal0_81, InitialSVarState_64, FinalSVarState_80, STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_SVarStore_93);
      switch (PredOrFunc_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Box conv4__ReturnValTerm_83;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_62, &QuantifiedArgTerms_82, &conv4__ReturnValTerm_83);
          }
          break;
        case (MR_Integer) 0:
          QuantifiedArgTerms_82 = ArgTerms_62;
          break;
      }
      mercury__term__vars_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedArgTerms_82, &QuantifiedVars0_84);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), QuantifiedVars0_84, &QuantifiedVars_85);
      hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_86);
      {
        Var_197 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (QuantifiedVars_85));
      }
      {
        HLDS_GoalExpr_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HLDS_GoalExpr_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), HLDS_GoalExpr_87, 1) = ((MR_Box) (Var_197));
        MR_hl_field(MR_mktag(3), HLDS_GoalExpr_87, 2) = ((MR_Box) (HLDS_Goal0_81));
      }
      {
        HLDS_Goal_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HLDS_Goal_88, 0) = ((MR_Box) (HLDS_GoalExpr_87));
        MR_hl_field(MR_mktag(0), HLDS_Goal_88, 1) = ((MR_Box) (GoalInfo_86));
      }
      hlds__goal_util__goal_vars_2_p_0(HLDS_Goal_88, &STATE_VARIABLE_LambdaGoalVars_198_198);
      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_77, STATE_VARIABLE_LambdaGoalVars_198_198, &STATE_VARIABLE_LambdaGoalVars_199_199);
      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedVars_85, STATE_VARIABLE_LambdaGoalVars_199_199, &STATE_VARIABLE_LambdaGoalVars_200_200);
      LambdaNonLocals_90 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaGoalVars_200_200);
      {
        LambdaRHS_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 0) = (MR_Box) (packed_word_0);
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 1) = NULL;
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 2) = ((MR_Box) (LambdaNonLocals_90));
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 3) = ((MR_Box) (LambdaVars_77));
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 4) = ((MR_Box) (Modes_43));
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 5) = (MR_Box) ((MR_Unsigned) (Detism_52));
        MR_hl_field(MR_mktag(2), LambdaRHS_91, 6) = ((MR_Box) (HLDS_Goal_88));
      }
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(LHSVar_20, LambdaRHS_91, Context_22, MainContext_23, SubContext_24, UnificationPurity_21, &Goal_59, STATE_VARIABLE_QualInfo_154_154, STATE_VARIABLE_QualInfo_99);
    }
    else
    {
      *STATE_VARIABLE_Specs_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgSpecs_56, STATE_VARIABLE_Specs_130_130);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_132_132, STATE_VARIABLE_QualInfo_99);
      Goal_59 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
      *STATE_VARIABLE_SVarStore_93 = STATE_VARIABLE_SVarStore_0_92;
      *STATE_VARIABLE_VarSet_95 = STATE_VARIABLE_VarSet_0_94;
      *STATE_VARIABLE_ModuleInfo_97 = STATE_VARIABLE_ModuleInfo_0_96;
    }
    Var_206 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_59)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_206));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeWrappedGoalCord_6;

    hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(
  MR_Word XVars_19,
  MR_Word XArgTerms0_20,
  MR_Word Context_21,
  MR_Word ArgContext_22,
  MR_Word Goal0_23,
  MR_Word * Goal_24,
  MR_Word STATE_VARIABLE_SVarState_0_35,
  MR_Word * STATE_VARIABLE_SVarState_36,
  MR_Word STATE_VARIABLE_SVarStore_0_37,
  MR_Word * STATE_VARIABLE_SVarStore_38,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_Word XArgTerms_31;
    MR_Word Expansions_32;
    MR_Word GoalInfo0_34;
    MR_Word STATE_VARIABLE_VarSet_47_47;
    MR_Word STATE_VARIABLE_SVarState_48_48;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word BaseGoals_62;
    MR_Word ExpansionGoalCords_63;
    MR_Word ExpansionGoals_64;
    MR_Word Var_65;
    MR_Word Var_66;

    hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(XArgTerms0_20, &XArgTerms_31, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_SVarState_0_35, &STATE_VARIABLE_SVarState_48_48, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_49_49);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(XVars_19, XArgTerms_31, Context_21, ArgContext_22, (MR_Integer) 1, &Expansions_32, STATE_VARIABLE_SVarState_48_48, STATE_VARIABLE_SVarState_36, STATE_VARIABLE_SVarStore_0_37, STATE_VARIABLE_SVarStore_38, STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_VarSet_40, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_QualInfo_0_43, STATE_VARIABLE_QualInfo_44, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_46);
    GoalInfo0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_23, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_23, &BaseGoals_62);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (GoalInfo0_34));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_65, Expansions_32, &ExpansionGoalCords_63);
    ExpansionGoals_64 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_63);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_64, BaseGoals_62);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_66, GoalInfo0_34, Goal_24);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_4;

    conv0_Mode_4 = hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0(
  MR_Word LambdaArgs0_8,
  MR_Word * LambdaArgs_9,
  MR_Word * Modes_10,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word MaybeOptImported_13;

    hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(STATE_VARIABLE_QualInfo_0_17, &MaybeOptImported_13);
    switch (MaybeOptImported_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MQInfo0_15;
          MR_Word MQInfo_16;

          hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(STATE_VARIABLE_QualInfo_0_17, &MQInfo0_15);
          hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0((MR_Integer) 0, LambdaArgs0_8, LambdaArgs_9, Modes_10, MQInfo0_15, &MQInfo_16, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
          hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(MQInfo_16, STATE_VARIABLE_QualInfo_0_17, STATE_VARIABLE_QualInfo_18);
        }
        break;
      case (MR_Integer) 1:
        {
          *LambdaArgs_9 = LambdaArgs0_8;
          *Modes_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_4[1]), *LambdaArgs_9);
          *STATE_VARIABLE_QualInfo_18 = STATE_VARIABLE_QualInfo_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0(
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
    MR_Word LambdaArg0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word LambdaArgs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word LambdaArg_19;
    MR_Word LambdaArgs_20;
    MR_Word Mode_21;
    MR_Word Modes_22;
    MR_Integer ArgNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 0))));
    MR_Word ProgArgTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 1))));
    MR_Word LambdaVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 2))));
    MR_Word Mode0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 4))));
    MR_Word ModeContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 5))));
    MR_Word STATE_VARIABLE_MQInfo_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaArg0_17, (MR_Integer) 3)));

    parse_tree__module_qual__qualify_lambda_mode_8_p_0(HeadVar__1_1, ModeContext_31, Mode0_30, &Mode_21, STATE_VARIABLE_MQInfo_0_5, &STATE_VARIABLE_MQInfo_36_36, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_37);
    {
      LambdaArg_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaArg_19, 0) = ((MR_Box) (ArgNum_25));
      MR_hl_field(MR_mktag(0), LambdaArg_19, 1) = ((MR_Box) (ProgArgTerm_26));
      MR_hl_field(MR_mktag(0), LambdaArg_19, 2) = ((MR_Box) (LambdaVar_27));
      MR_hl_field(MR_mktag(0), LambdaArg_19, 3) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), LambdaArg_19, 4) = ((MR_Box) (Mode_21));
      MR_hl_field(MR_mktag(0), LambdaArg_19, 5) = ((MR_Box) (ModeContext_31));
    }
    hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0(HeadVar__1_1, LambdaArgs0_18, &LambdaArgs_20, &Modes_22, STATE_VARIABLE_MQInfo_36_36, STATE_VARIABLE_MQInfo_6, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaArg_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LambdaArgs_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_22));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.partition_args_and_lambda_vars\'/7", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.partition_args_and_lambda_vars\'/7", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgTerms_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word InputArgTermsTail_36;
        MR_Word OutputArgTermsTail_37;
        MR_Word InputLambdaVarsTail_38;
        MR_Word OutputLambdaVarsTail_39;
        MR_Word LambdaVar_42;
        MR_Word Mode_45;
        MR_Word Var_51;
        MR_Word Var_52;

        hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_7_p_0(ModuleInfo_1, Var_47, ArgTerms_31, &InputArgTermsTail_36, &OutputArgTermsTail_37, &InputLambdaVarsTail_38, &OutputLambdaVarsTail_39);
        LambdaVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2))));
        Mode_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 4))));
        succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_45, &Var_51, &Var_52);
        if (succeeded)
          succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_1, Mode_45);
        if (succeeded)
        {
          *HeadVar__4_4 = InputArgTermsTail_36;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTerm_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputArgTermsTail_37));
          }
          *HeadVar__6_6 = InputLambdaVarsTail_38;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaVar_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputLambdaVarsTail_39));
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTerm_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InputArgTermsTail_36));
          }
          *HeadVar__5_5 = OutputArgTermsTail_37;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaVar_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InputLambdaVarsTail_38));
          }
          *HeadVar__7_7 = OutputLambdaVarsTail_39;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(
  MR_Word PurityPFArgsDetTerm_8,
  MR_Word MaybeDCGVars_9,
  MR_Word * MaybeLambdaHead_10,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_QualInfo_0_64,
  MR_Word * STATE_VARIABLE_QualInfo_65)
{
  {
    MR_bool succeeded;
    MR_Word GenericPurityPFArgsDetTerm_13;
    MR_Word LambdaPurity_14;
    MR_Word PFArgsDetTerm_15;
    MR_Word DetismTerm_17;
    MR_Word Context_21;
    MR_Word Groundness_22;
    MR_Word ArgModeTerms0_23;
    MR_Word MaybeFuncRetArgModeTerm_24;
    MR_Word BeforeIsTerm_16;
    MR_String BeforeIsFunctor_19;
    MR_Word BeforeIsArgTerms_20;
    MR_Word Var_66;
    MR_String Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;

    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PurityPFArgsDetTerm_8, &GenericPurityPFArgsDetTerm_13);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(GenericPurityPFArgsDetTerm_13, &LambdaPurity_14, &PFArgsDetTerm_15);
    succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
        succeeded = (strcmp(Var_67, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            BeforeIsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1))));
            succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DetismTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
              Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
              succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) BeforeIsTerm_16)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 0))));
                  BeforeIsArgTerms_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 1))));
                  Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    BeforeIsFunctor_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
                    if ((strcmp(BeforeIsFunctor_19, (MR_String) "=") == 0))
                    {
                      MR_Word FuncArgsTerm_25;
                      MR_Word FuncRetArgModeTerm0_26;
                      MR_String FuncTermFunctor_27;
                      MR_Word Var_72;
                      MR_Word Var_73;
                      MR_Word Var_74;

                      succeeded = (BeforeIsArgTerms_20 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FuncArgsTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_20, (MR_Integer) 0))));
                        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_20, (MR_Integer) 1))));
                        succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FuncRetArgModeTerm0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) FuncArgsTerm_25)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_25, (MR_Integer) 0))));
                              ArgModeTerms0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_25, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                FuncTermFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 0))));
                                if ((strcmp(FuncTermFunctor_27, (MR_String) "func") == 0))
                                {
                                  Groundness_22 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                                else
                                if ((strcmp(FuncTermFunctor_27, (MR_String) "any_func") == 0))
                                {
                                  Groundness_22 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                  succeeded = MR_FALSE;
                                if (succeeded)
                                {
                                  {
                                    MaybeFuncRetArgModeTerm_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MaybeFuncRetArgModeTerm_24, 0) = ((MR_Box) (FuncRetArgModeTerm0_26));
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
                    if ((strcmp(BeforeIsFunctor_19, (MR_String) "pred") == 0))
                    {
                      Groundness_22 = (MR_Integer) 0;
                      ArgModeTerms0_23 = BeforeIsArgTerms_20;
                      MaybeFuncRetArgModeTerm_24 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(BeforeIsFunctor_19, (MR_String) "any_pred") == 0))
                    {
                      Groundness_22 = (MR_Integer) 1;
                      ArgModeTerms0_23 = BeforeIsArgTerms_20;
                      MaybeFuncRetArgModeTerm_24 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word MaybeDetism_29;

      hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(STATE_VARIABLE_VarSet_0_62, DetismTerm_17, &MaybeDetism_29);
      if ((MaybeDCGVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFuncRetArgModeTerm_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LambdaArgs_32;
          MR_Word BadModeSpecs_33;
          MR_Word SVarSpecs_34;
          MR_Word LambdaHead_35;

          hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_21, ArgModeTerms0_23, &LambdaArgs_32, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, &BadModeSpecs_33, &SVarSpecs_34);
          {
            LambdaHead_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaHead_35, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_22) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
            MR_hl_field(MR_mktag(0), LambdaHead_35, 1) = NULL;
            MR_hl_field(MR_mktag(0), LambdaHead_35, 2) = ((MR_Box) (LambdaArgs_32));
            MR_hl_field(MR_mktag(0), LambdaHead_35, 3) = ((MR_Box) (BadModeSpecs_33));
            MR_hl_field(MR_mktag(0), LambdaHead_35, 4) = ((MR_Box) (SVarSpecs_34));
            MR_hl_field(MR_mktag(0), LambdaHead_35, 5) = ((MR_Box) (MaybeDetism_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_35));
          }
        }
        else
        {
          MR_Word LambdaArgs_240;
          MR_Word BadModeSpecs_241;
          MR_Word SVarSpecs_242;
          MR_Word LambdaHead_243;
          MR_Word FuncRetArgModeTerm_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFuncRetArgModeTerm_24, (MR_Integer) 0))));

          hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_21, ArgModeTerms0_23, FuncRetArgModeTerm_343, &LambdaArgs_240, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, &BadModeSpecs_241, &SVarSpecs_242);
          {
            LambdaHead_243 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaHead_243, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_22) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
            MR_hl_field(MR_mktag(0), LambdaHead_243, 1) = NULL;
            MR_hl_field(MR_mktag(0), LambdaHead_243, 2) = ((MR_Box) (LambdaArgs_240));
            MR_hl_field(MR_mktag(0), LambdaHead_243, 3) = ((MR_Box) (BadModeSpecs_241));
            MR_hl_field(MR_mktag(0), LambdaHead_243, 4) = ((MR_Box) (SVarSpecs_242));
            MR_hl_field(MR_mktag(0), LambdaHead_243, 5) = ((MR_Box) (MaybeDetism_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_243));
          }
        }
      else
      {
        MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDCGVars_9, (MR_Integer) 1))));
        MR_Word Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDCGVars_9, (MR_Integer) 0))));

        if ((MaybeFuncRetArgModeTerm_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((ArgModeTerms0_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Msg_40;
            MR_Word Spec_41;
            MR_Word Var_127;
            MR_Word Var_129;
            MR_Word Var_130;

            {
              Msg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_40, 0) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(0), Msg_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[97])));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Msg_40));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_41, 2) = ((MR_Box) (Var_127));
            }
            Var_130 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_41));
              MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeLambdaHead_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
            }
            *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
          }
          else
          {
            MR_Word Var_350 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModeTerms0_23, (MR_Integer) 1))));
            MR_Word Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModeTerms0_23, (MR_Integer) 0))));

            if ((Var_350 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Msg_317;
              MR_Word Spec_318;
              MR_Word Var_324;
              MR_Word Var_326;
              MR_Word Var_327;

              {
                Msg_317 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_317, 0) = ((MR_Box) (Context_21));
                MR_hl_field(MR_mktag(0), Msg_317, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[97])));
              }
              {
                Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_324, 0) = ((MR_Box) (Msg_317));
                MR_hl_field(MR_mktag(1), Var_324, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_318 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_318, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_318, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), Spec_318, 2) = ((MR_Box) (Var_324));
              }
              Var_327 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
              {
                Var_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_326, 0) = ((MR_Box) (Spec_318));
                MR_hl_field(MR_mktag(1), Var_326, 1) = ((MR_Box) (Var_327));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeLambdaHead_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_326));
              }
              *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
            }
            else
            {
              MR_Word ArgModeTerm2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_350, (MR_Integer) 0))));
              MR_Word ArgModeTerms3plus_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_350, (MR_Integer) 1))));
              MR_Word NonDCGArgModeTerms_45;
              MR_Word DCGModeTerm0_46;
              MR_Word DCGModeTermN_47;
              MR_Word DCGContext0_48;
              MR_Word DCGContextN_49;
              MR_Word DCGVarTerm0_50;
              MR_Word DCGVarTermN_51;
              MR_Word GenericDCGVarTerm0_52;
              MR_Word GenericDCGVarTermN_53;
              MR_Word DCGArgModeTerm0_54;
              MR_Word DCGArgModeTermN_55;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word ArgModeTerms_225;
              MR_Word LambdaArgs_226;
              MR_Word BadModeSpecs_227;
              MR_Word SVarSpecs_228;
              MR_Word LambdaHead_229;
              MR_Box conv1_DCGModeTerm0_46;
              MR_Box conv0_DCGModeTermN_47;

              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(((MR_Box) (Var_351)), ((MR_Box) (ArgModeTerm2_43)), ArgModeTerms3plus_44, &NonDCGArgModeTerms_45, &conv1_DCGModeTerm0_46, &conv0_DCGModeTermN_47);
              DCGModeTerm0_46 = ((MR_Word) (conv1_DCGModeTerm0_46));
              DCGModeTermN_47 = ((MR_Word) (conv0_DCGModeTermN_47));
              DCGContext0_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTerm0_46);
              DCGContextN_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTermN_47);
              {
                DCGVarTerm0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DCGVarTerm0_50, 0) = ((MR_Box) (Var_349));
                MR_hl_field(MR_mktag(1), DCGVarTerm0_50, 1) = ((MR_Box) (DCGContext0_48));
              }
              {
                DCGVarTermN_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DCGVarTermN_51, 0) = ((MR_Box) (Var_348));
                MR_hl_field(MR_mktag(1), DCGVarTermN_51, 1) = ((MR_Box) (DCGContextN_49));
              }
              mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTerm0_50, &GenericDCGVarTerm0_52);
              mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTermN_51, &GenericDCGVarTermN_53);
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (DCGModeTerm0_46));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (GenericDCGVarTerm0_52));
                MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
              }
              {
                DCGArgModeTerm0_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DCGArgModeTerm0_54, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), DCGArgModeTerm0_54, 1) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(0), DCGArgModeTerm0_54, 2) = ((MR_Box) (DCGContext0_48));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (DCGModeTermN_47));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (GenericDCGVarTermN_53));
                MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
              }
              {
                DCGArgModeTermN_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DCGArgModeTermN_55, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), DCGArgModeTermN_55, 1) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(0), DCGArgModeTermN_55, 2) = ((MR_Box) (DCGContextN_49));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (DCGArgModeTermN_55));
                MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (DCGArgModeTerm0_54));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
              }
              ArgModeTerms_225 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[3]), NonDCGArgModeTerms_45, Var_105);
              hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_21, ArgModeTerms_225, &LambdaArgs_226, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, &BadModeSpecs_227, &SVarSpecs_228);
              {
                LambdaHead_229 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LambdaHead_229, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_22) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
                MR_hl_field(MR_mktag(0), LambdaHead_229, 1) = NULL;
                MR_hl_field(MR_mktag(0), LambdaHead_229, 2) = ((MR_Box) (LambdaArgs_226));
                MR_hl_field(MR_mktag(0), LambdaHead_229, 3) = ((MR_Box) (BadModeSpecs_227));
                MR_hl_field(MR_mktag(0), LambdaHead_229, 4) = ((MR_Box) (SVarSpecs_228));
                MR_hl_field(MR_mktag(0), LambdaHead_229, 5) = ((MR_Box) (MaybeDetism_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLambdaHead_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_229));
              }
            }
          }
        }
        else
        {
          MR_Word Var_88;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Msg_245;
          MR_Word Spec_246;

          {
            Msg_245 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_245, 0) = ((MR_Box) (Context_21));
            MR_hl_field(MR_mktag(0), Msg_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[98])));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Msg_245));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_246 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_246, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_246, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_246, 2) = ((MR_Box) (Var_88));
          }
          Var_91 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_246));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
          }
          *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
        }
      }
      *STATE_VARIABLE_QualInfo_65 = STATE_VARIABLE_QualInfo_0_64;
    }
    else
    {
      MR_Word Context_296;
      MR_Word Groundness_297;
      MR_Word ArgModeTerms_302;
      MR_Word FuncRetArgModeTerm_310;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_String BeforeIsFunctor_262;
      MR_Word BeforeIsArgTerms_263;
      MR_Word FuncArgsTerm_264;
      MR_String FuncTermFunctor_265;

      succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 0))));
        BeforeIsArgTerms_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 1))));
        Context_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_133)) == (MR_Integer) 0);
        if (succeeded)
        {
          BeforeIsFunctor_262 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 0))));
          succeeded = (strcmp(BeforeIsFunctor_262, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = (BeforeIsArgTerms_263 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncArgsTerm_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_263, (MR_Integer) 0))));
              Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_263, (MR_Integer) 1))));
              succeeded = (Var_134 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FuncRetArgModeTerm_310 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 0))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 1))));
                succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncArgsTerm_264)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_264, (MR_Integer) 0))));
                    ArgModeTerms_302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_264, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_136)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_265 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_136, (MR_Integer) 0))));
                      if ((strcmp(FuncTermFunctor_265, (MR_String) "func") == 0))
                      {
                        Groundness_297 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                      else
                      if ((strcmp(FuncTermFunctor_265, (MR_String) "any_func") == 0))
                      {
                        Groundness_297 = (MR_Integer) 1;
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
        if ((MaybeDCGVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LambdaArgs_267;
          MR_Word BadModeSpecs_268;
          MR_Word SVarSpecs_269;
          MR_Word LambdaHead_270;

          hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_296, ArgModeTerms_302, FuncRetArgModeTerm_310, &LambdaArgs_267, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, &BadModeSpecs_268, &SVarSpecs_269);
          {
            LambdaHead_270 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaHead_270, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_297) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
            MR_hl_field(MR_mktag(0), LambdaHead_270, 1) = NULL;
            MR_hl_field(MR_mktag(0), LambdaHead_270, 2) = ((MR_Box) (LambdaArgs_267));
            MR_hl_field(MR_mktag(0), LambdaHead_270, 3) = ((MR_Box) (BadModeSpecs_268));
            MR_hl_field(MR_mktag(0), LambdaHead_270, 4) = ((MR_Box) (SVarSpecs_269));
            MR_hl_field(MR_mktag(0), LambdaHead_270, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_5[5])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_270));
          }
        }
        else
        {
          MR_Word Var_150;
          MR_Word Var_152;
          MR_Word Msg_272;
          MR_Word Spec_273;

          {
            Msg_272 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_272, 0) = ((MR_Box) (Context_296));
            MR_hl_field(MR_mktag(0), Msg_272, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[98])));
          }
          {
            Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Msg_272));
            MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_273 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_273, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_273, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_273, 2) = ((MR_Box) (Var_150));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Spec_273));
            MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_152));
          }
          *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
        }
        *STATE_VARIABLE_QualInfo_65 = STATE_VARIABLE_QualInfo_0_64;
      }
      else
      {
        MR_Word Var_213;
        MR_Word Var_219;
        MR_Word Var_223;
        MR_Word Msg_292;
        MR_Word Spec_293;

        Var_213 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PFArgsDetTerm_15);
        {
          Msg_292 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_292, 0) = ((MR_Box) (Var_213));
          MR_hl_field(MR_mktag(0), Msg_292, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[99])));
        }
        {
          Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Msg_292));
          MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_293 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_293, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_293, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_293, 2) = ((MR_Box) (Var_219));
        }
        hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_64, STATE_VARIABLE_QualInfo_65);
        {
          Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Spec_293));
          MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLambdaHead_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_223));
        }
        *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word Term0_4,
  MR_Word * Purity_5,
  MR_Word * Term_6)
{
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
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        PurityName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
        succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Term1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1))));
          succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = parse_tree__prog_out__purity_name_2_p_1(&Purity0_10, PurityName_7);
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
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(
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
    MR_Box Element3_13 = (MR_hl_field(MR_mktag(1), Elements3plus_9, (MR_Integer) 0));
    MR_Word Elements4plus_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Elements3plus_9, (MR_Integer) 1))));
    MR_Word MainTail_15;

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(Element2_8, Element3_13, Elements4plus_14, &MainTail_15, LastButOne_11, Last_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Main_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = Element1_7;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MainTail_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(
  MR_Word VarSet_4,
  MR_Word DetismTerm_5,
  MR_Word * MaybeDetism_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) DetismTerm_5)) == (MR_Integer) 0);
    MR_Word Detism_9;
    MR_String DetString_7;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetismTerm_5, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetismTerm_5, (MR_Integer) 1))));
      succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
        if (succeeded)
        {
          DetString_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
          succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetString_7, &Detism_9);
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDetism_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Detism_9));
      }
    else
    {
      MR_Word GenericVarSet_10;
      MR_String TermStr_11;
      MR_Word Pieces_12;
      MR_Word Msg_13;
      MR_Word Spec_14;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_33;
      MR_Word Var_35;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, &GenericVarSet_10);
      TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), GenericVarSet_10, DetismTerm_5);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (TermStr_11));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[85])));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[96])));
        MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
      }
      Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_5);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Pieces_12));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Msg_13));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_33));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDetism_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(
  MR_Word Context_8,
  MR_Word ArgModeTerms_9,
  MR_Word * LambdaArgs_10,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word * STATE_VARIABLE_BadModeSpecs_23,
  MR_Word * STATE_VARIABLE_SVarSpecs_24)
{
  {
    MR_Word PresentArgs_15;
    MR_Word AbsentArgs_16;
    MR_Word STATE_VARIABLE_BadModeSpecs_30_30;
    MR_Integer Var_14;

    hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_9, LambdaArgs_10, (MR_Integer) 1, &Var_14, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_30_30, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SVarSpecs_24);
    hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_10, &PresentArgs_15, &AbsentArgs_16);
    if ((AbsentArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BadModeSpecs_23 = STATE_VARIABLE_BadModeSpecs_30_30;
    else
    if ((PresentArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Msg_39;
      MR_Word Spec_40;
      MR_Word Var_54;

      {
        Msg_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_39, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[95])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Msg_39));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_54));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_BadModeSpecs_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_40));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_30_30));
      }
    }
    else
    {
      MR_Word Msg_63;
      MR_Word Spec_64;
      MR_Word Var_78;

      {
        Msg_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_63, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[94])));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Msg_63));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_64, 2) = ((MR_Box) (Var_78));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_BadModeSpecs_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_30_30));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(
  MR_Word Context_9,
  MR_Word ArgModeTerms_10,
  MR_Word FuncRetArgModeTerm_11,
  MR_Word * LambdaArgs_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * STATE_VARIABLE_BadModeSpecs_28,
  MR_Word * STATE_VARIABLE_SVarSpecs_29)
{
  {
    MR_Word OrdinaryLambdaArgs_16;
    MR_Integer ResultArgNum_17;
    MR_Word FuncRetLambdaArg_18;
    MR_Word PresentArgs_20;
    MR_Word AbsentArgs_21;
    MR_Word STATE_VARIABLE_VarSet_34_34;
    MR_Word STATE_VARIABLE_BadModeSpecs_35_35;
    MR_Word STATE_VARIABLE_SVarSpecs_36_36;
    MR_Word STATE_VARIABLE_BadModeSpecs_39_39;
    MR_Word Var_41;
    MR_Integer Var_19;

    hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_10, &OrdinaryLambdaArgs_16, (MR_Integer) 1, &ResultArgNum_17, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_34_34, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_35_35, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_SVarSpecs_36_36);
    hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0((MR_Integer) 1, FuncRetArgModeTerm_11, &FuncRetLambdaArg_18, ResultArgNum_17, &Var_19, STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarSet_27, STATE_VARIABLE_BadModeSpecs_35_35, &STATE_VARIABLE_BadModeSpecs_39_39, STATE_VARIABLE_SVarSpecs_36_36, STATE_VARIABLE_SVarSpecs_29);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (FuncRetLambdaArg_18));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *LambdaArgs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), OrdinaryLambdaArgs_16, Var_41);
    hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_12, &PresentArgs_20, &AbsentArgs_21);
    if ((AbsentArgs_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BadModeSpecs_28 = STATE_VARIABLE_BadModeSpecs_39_39;
    else
    if ((PresentArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BadModeSpecs_28 = STATE_VARIABLE_BadModeSpecs_39_39;
    else
    {
      MR_Word Msg_51;
      MR_Word Spec_52;
      MR_Word Var_66;

      {
        Msg_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_51, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[94])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Msg_51));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_52, 2) = ((MR_Box) (Var_66));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_BadModeSpecs_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_39_39));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_ArgNum_0_4,
  MR_Integer * STATE_VARIABLE_ArgNum_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_8,
  MR_Word * STATE_VARIABLE_BadModeSpecs_9,
  MR_Word STATE_VARIABLE_SVarSpecs_0_10,
  MR_Word * STATE_VARIABLE_SVarSpecs_11)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SVarSpecs_11 = STATE_VARIABLE_SVarSpecs_0_10;
    *STATE_VARIABLE_BadModeSpecs_9 = STATE_VARIABLE_BadModeSpecs_0_8;
    *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
    *STATE_VARIABLE_ArgNum_5 = STATE_VARIABLE_ArgNum_0_4;
  }
  else
  {
    MR_Word HeadArgModeTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailArgModeTerms_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadLambdaArg_28;
    MR_Word TailLambdaArgs_29;
    MR_Integer STATE_VARIABLE_ArgNum_42_42;
    MR_Word STATE_VARIABLE_VarSet_43_43;
    MR_Word STATE_VARIABLE_BadModeSpecs_44_44;
    MR_Word STATE_VARIABLE_SVarSpecs_45_45;

    hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(HeadVar__1_1, HeadArgModeTerm_26, &HeadLambdaArg_28, STATE_VARIABLE_ArgNum_0_4, &STATE_VARIABLE_ArgNum_42_42, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_43_43, STATE_VARIABLE_BadModeSpecs_0_8, &STATE_VARIABLE_BadModeSpecs_44_44, STATE_VARIABLE_SVarSpecs_0_10, &STATE_VARIABLE_SVarSpecs_45_45);
    hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(HeadVar__1_1, TailArgModeTerms_27, &TailLambdaArgs_29, STATE_VARIABLE_ArgNum_42_42, STATE_VARIABLE_ArgNum_5, STATE_VARIABLE_VarSet_43_43, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_BadModeSpecs_44_44, STATE_VARIABLE_BadModeSpecs_9, STATE_VARIABLE_SVarSpecs_45_45, STATE_VARIABLE_SVarSpecs_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLambdaArg_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLambdaArgs_29));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(
  MR_Word Kind_12,
  MR_Word ArgModeTerm_13,
  MR_Word * LambdaArg_14,
  MR_Integer STATE_VARIABLE_ArgNum_0_36,
  MR_Integer * STATE_VARIABLE_ArgNum_37,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39,
  MR_Word STATE_VARIABLE_BadModeSpecs_0_40,
  MR_Word * STATE_VARIABLE_BadModeSpecs_41,
  MR_Word STATE_VARIABLE_SVarSpecs_0_42,
  MR_Word * STATE_VARIABLE_SVarSpecs_43)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgModeTerm_13)) == (MR_Integer) 0);
    MR_Word ArgTerm_22;
    MR_Word PresentOrAbsent_23;
    MR_Word ModeContext_24;
    MR_Word Mode_29;
    MR_Word ProgArgTerm_31;
    MR_String LambdaVarName_34;
    MR_Word LambdaVar_35;
    MR_String Var_63;
    MR_Word ArgTermPrime_19;
    MR_Word ModeTerm_20;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word StateVar_32;
    MR_Word StateVarContext_33;

    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgModeTerm_13, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgModeTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
        succeeded = (strcmp(Var_45, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTermPrime_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
            succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
              Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
              succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces_25;
      MR_Word GenericVarSet_26;
      MR_Word MaybeMode0_27;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;

      ArgTerm_22 = ArgTermPrime_19;
      PresentOrAbsent_23 = (MR_Integer) 1;
      ModeContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModeTerm_20);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_36));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[93])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[91])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      ContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_38, &GenericVarSet_26);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), GenericVarSet_26, ContextPieces_25, ModeTerm_20, &MaybeMode0_27);
      if (((MR_tag((MR_Word) MaybeMode0_27)) == (MR_Integer) 0))
      {
        MR_Word ModeSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMode0_27, (MR_Integer) 0))));

        *STATE_VARIABLE_BadModeSpecs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeSpecs_30, STATE_VARIABLE_BadModeSpecs_0_40);
        switch (Kind_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            parse_tree__prog_mode__out_mode_1_p_0(&Mode_29);
            break;
          case (MR_Integer) 0:
            parse_tree__prog_mode__in_mode_1_p_0(&Mode_29);
            break;
        }
      }
      else
      {
        MR_Word Mode0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode0_27, (MR_Integer) 0))));

        parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(Mode0_28, &Mode_29);
        *STATE_VARIABLE_BadModeSpecs_41 = STATE_VARIABLE_BadModeSpecs_0_40;
      }
    }
    else
    {
      ArgTerm_22 = ArgModeTerm_13;
      PresentOrAbsent_23 = (MR_Integer) 0;
      switch (Kind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__prog_mode__out_mode_1_p_0(&Mode_29);
          break;
        case (MR_Integer) 0:
          parse_tree__prog_mode__in_mode_1_p_0(&Mode_29);
          break;
      }
      ModeContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgModeTerm_13);
      *STATE_VARIABLE_BadModeSpecs_41 = STATE_VARIABLE_BadModeSpecs_0_40;
    }
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm_22, &ProgArgTerm_31);
    succeeded = hlds__make_hlds__state_var__is_term_a_bang_state_pair_3_p_0(ProgArgTerm_31, &StateVar_32, &StateVarContext_33);
    if (succeeded)
      switch (Kind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_33, STATE_VARIABLE_VarSet_0_38, StateVar_32, STATE_VARIABLE_SVarSpecs_0_42, STATE_VARIABLE_SVarSpecs_43);
          break;
        case (MR_Integer) 0:
          hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(StateVarContext_33, STATE_VARIABLE_VarSet_0_38, StateVar_32, STATE_VARIABLE_SVarSpecs_0_42, STATE_VARIABLE_SVarSpecs_43);
          break;
      }
    else
      *STATE_VARIABLE_SVarSpecs_43 = STATE_VARIABLE_SVarSpecs_0_42;
    Var_63 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_ArgNum_0_36);
    LambdaVarName_34 = mercury__string__f_43_43_2_f_0((MR_String) "LambdaHeadVar__", Var_63);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVarName_34, &LambdaVar_35, STATE_VARIABLE_VarSet_0_38, STATE_VARIABLE_VarSet_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *LambdaArg_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProgArgTerm_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LambdaVar_35));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (((((MR_Unsigned) (Kind_12) << 1)) | (MR_Unsigned) (PresentOrAbsent_23)));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Mode_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ModeContext_24));
    }
    *STATE_VARIABLE_ArgNum_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_36 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(
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
    MR_Word LambdaArg_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word LambdaArgs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PresentArgsTail_8;
    MR_Word AbsentArgsTail_9;
    MR_Word PresentOrAbsent_10;

    hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(LambdaArgs_5, &PresentArgsTail_8, &AbsentArgsTail_9);
    PresentOrAbsent_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaArg_4, (MR_Integer) 3))) & (MR_Integer) 1);
    switch (PresentOrAbsent_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = PresentArgsTail_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaArg_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AbsentArgsTail_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaArg_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PresentArgsTail_8));
          }
          *HeadVar__3_3 = AbsentArgsTail_9;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Expansion_6,
  MR_Word BaseGoal_7,
  MR_Word * Goal_8)
{
  {
    MR_Word BaseGoals_9;
    MR_Word ExpansionGoalCord_10;
    MR_Word ExpansionGoals_11;
    MR_Word Var_12;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_7, &BaseGoals_9);
    hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(GoalInfo_5, Expansion_6, &ExpansionGoalCord_10);
    ExpansionGoals_11 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_10);
    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_11, BaseGoals_9);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_12, GoalInfo_5, Goal_8);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * MaybeWrappedGoalCord_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFGTI_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansion_5, (MR_Integer) 0))));
    MR_Word GoalCord_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansion_5, (MR_Integer) 1))));
    MR_Word TermVar_9;
    MR_Integer Size_10;
    MR_Integer Threshold_11;
    MR_Word Var_20;

    succeeded = (MaybeFGTI_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFGTI_7, (MR_Integer) 0))));
      Size_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeFGTI_7, (MR_Integer) 1))));
      Var_20 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
      succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Threshold_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
        succeeded = (Size_10 >= Threshold_11);
      }
    }
    if (succeeded)
    {
      MR_Word Goals_12;
      MR_Word MarkedGoalInfo_13;
      MR_Word MarkedGoals_14;
      MR_Word ConjGoalExpr_15;
      MR_Word ConjGoal_16;
      MR_Word Reason_17;
      MR_Word ScopeGoalExpr_18;
      MR_Word ScopeGoal_19;
      MR_Word Var_21;

      Goals_12 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCord_8);
      Var_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_9);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_21, GoalInfo_4, &MarkedGoalInfo_13);
      hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals_12, &MarkedGoals_14);
      {
        ConjGoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_15, 2) = ((MR_Box) (MarkedGoals_14));
      }
      {
        ConjGoal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjGoal_16, 0) = ((MR_Box) (ConjGoalExpr_15));
        MR_hl_field(MR_mktag(0), ConjGoal_16, 1) = ((MR_Box) (MarkedGoalInfo_13));
      }
      {
        Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_17, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Reason_17, 1) = ((MR_Box) (TermVar_9));
        MR_hl_field(MR_mktag(3), Reason_17, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        ScopeGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ScopeGoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), ScopeGoalExpr_18, 1) = ((MR_Box) (Reason_17));
        MR_hl_field(MR_mktag(3), ScopeGoalExpr_18, 2) = ((MR_Box) (ConjGoal_16));
      }
      {
        ScopeGoal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ScopeGoal_19, 0) = ((MR_Box) (ScopeGoalExpr_18));
        MR_hl_field(MR_mktag(0), ScopeGoal_19, 1) = ((MR_Box) (MarkedGoalInfo_13));
      }
      *MaybeWrappedGoalCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ScopeGoal_19)));
    }
    else
      *MaybeWrappedGoalCord_6 = GoalCord_8;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * Goal_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFGTI_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansion_5, (MR_Integer) 0))));
    MR_Word ExpansionGoalCord_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansion_5, (MR_Integer) 1))));
    MR_Word ExpansionGoals_9;

    ExpansionGoals_9 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_8);
    if ((ExpansionGoals_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_34;

      Var_34 = hlds__make_goal__true_goal_expr_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_4));
      }
    }
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpansionGoals_9, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpansionGoals_9, (MR_Integer) 0))));

      if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ExpansionGoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
        MR_Word ExpansionGoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
        MR_Word Context_13;
        MR_Word ExpansionGoalInfo_14;

        Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_4);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, ExpansionGoalInfo0_12, &ExpansionGoalInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExpansionGoalExpr_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExpansionGoalInfo_14));
        }
      }
      else
      {
        MR_Word TermVar_18;
        MR_Integer Size_19;
        MR_Integer Threshold_20;
        MR_Word Var_28;

        succeeded = (MaybeFGTI_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFGTI_7, (MR_Integer) 0))));
          Size_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeFGTI_7, (MR_Integer) 1))));
          Var_28 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Threshold_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
            succeeded = (Size_19 >= Threshold_20);
          }
        }
        if (succeeded)
        {
          MR_Word MarkedGoalInfo_21;
          MR_Word MarkedGoals_22;
          MR_Word ConjGoalExpr_23;
          MR_Word ConjGoal_24;
          MR_Word Reason_25;
          MR_Word GoalExpr_26;
          MR_Word Var_29;

          Var_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_18);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_29, GoalInfo_4, &MarkedGoalInfo_21);
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(ExpansionGoals_9, &MarkedGoals_22);
          {
            ConjGoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConjGoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ConjGoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ConjGoalExpr_23, 2) = ((MR_Box) (MarkedGoals_22));
          }
          {
            ConjGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConjGoal_24, 0) = ((MR_Box) (ConjGoalExpr_23));
            MR_hl_field(MR_mktag(0), ConjGoal_24, 1) = ((MR_Box) (MarkedGoalInfo_21));
          }
          {
            Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Reason_25, 1) = ((MR_Box) (TermVar_18));
            MR_hl_field(MR_mktag(3), Reason_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), GoalExpr_26, 1) = ((MR_Box) (Reason_25));
            MR_hl_field(MR_mktag(3), GoalExpr_26, 2) = ((MR_Box) (ConjGoal_24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_26));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MarkedGoalInfo_21));
          }
        }
        else
        {
          MR_Word GoalExpr_35;

          {
            GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 2) = ((MR_Box) (ExpansionGoals_9));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_35));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_4));
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_5;
      MR_Word Goals_6;
      MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 0))));
      MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 1))));
      MR_Word LHSVar_9;
      MR_Word RHSVars_16;
      MR_Word RHS_10;

      succeeded = ((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0))));
        RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) RHS_10)) == (MR_Integer) 1);
        if (succeeded)
          RHSVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 2))));
      }
      if (succeeded)
      {
        MR_Word NonLocals_17;
        MR_Word GoalInfo_18;
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (LHSVar_9));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RHSVars_16));
        }
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_17);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_17, GoalInfo0_8, &GoalInfo_18);
        {
          Goal_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_5, 0) = ((MR_Box) (GoalExpr_7));
          MR_hl_field(MR_mktag(0), Goal_5, 1) = ((MR_Box) (GoalInfo_18));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
          return;
        }
      }
      hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals0_4, &Goals_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_6));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Arg_6)) == (MR_Integer) 1);
    MR_Word ArgVar_10;
    MR_Word TypeInfo_15_15;

    if (succeeded)
    {
      ArgVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_6, (MR_Integer) 0))));
      TypeInfo_15_15 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgVar_10)), Vars0_8);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      *Var_7 = ArgVar_10;
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
    }
    else
    {
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, STATE_VARIABLE_VarSet_0_12, STATE_VARIABLE_VarSet_13);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  switch (MR_tag((MR_Word) Functor_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_7, (MR_Integer) 0))));
        MR_Integer Arity_13;
        MR_Word Var_93;
        MR_Word Var_94;

        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_8, &Arity_13);
        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Name_12));
        }
        Var_94 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_13));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_94));
        }
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Integer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_7, (MR_Integer) 1))));
        MR_Word Signedness_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_7, (MR_Integer) 2))) & (MR_Integer) 7);

        switch (Signedness_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (Size_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho6_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "16-bit", (MR_String) "i16", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 3:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho4_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "32-bit", (MR_String) "i32", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 4:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho2_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "64-bit", (MR_String) "i64", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho8_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "8-bit", (MR_String) "i8", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_95_105_100_95_95_104_111_49_48_95_95_91_55_93_95_48_10_p_0(Base_14, Context_9, Base_14, Integer_15, (MR_String) "", (MR_String) "", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (Size_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho5_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "unsigned 16-bit", (MR_String) "u16", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 3:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho3_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "unsigned 32-bit", (MR_String) "u32", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 4:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho1_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "unsigned 64-bit", (MR_String) "u64", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho7_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "unsigned 8-bit", (MR_String) "u8", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho9_10_p_0(Context_9, Base_14, Integer_15, (MR_String) "unsigned", (MR_String) "u", ConsId_10, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String String_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), Functor_7, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (String_19));
        }
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsId_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(Float_20);
            }
            *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Name_105 = ((MR_String) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsId_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_105));
            }
            *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_116_101_103_101_114_95_99_111_110_115_95_105_100_95_95_104_111_49_48_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_56,
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Integer Int_20;

    succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Var_56, Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__745__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__745__1_1_f_0(
  MR_Integer LambdaHeadVar__1_91)
{
  {
    MR_Word LambdaHeadVar__2_92;

    {
      LambdaHeadVar__2_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_92, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_92, 1) = ((MR_Box) (LambdaHeadVar__1_91));
    }
    return LambdaHeadVar__2_92;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho9_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Unsigned Int_20;

    succeeded = mercury__integer__to_uint_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__750__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__750__1_1_f_0(
  MR_Unsigned LambdaHeadVar__1_84)
{
  {
    MR_Word LambdaHeadVar__2_85;

    {
      LambdaHeadVar__2_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_85, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_85, 1) = ((MR_Box) (LambdaHeadVar__1_84));
    }
    return LambdaHeadVar__2_85;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho8_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    int8_t Int_20;

    succeeded = mercury__integer__to_int8_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__759__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__759__1_1_f_0(
  int8_t LambdaHeadVar__1_77)
{
  {
    MR_Word LambdaHeadVar__2_78;

    {
      LambdaHeadVar__2_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_78, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_78, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_77));
    }
    return LambdaHeadVar__2_78;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho7_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    uint8_t Int_20;

    succeeded = mercury__integer__to_uint8_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__764__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__764__1_1_f_0(
  uint8_t LambdaHeadVar__1_70)
{
  {
    MR_Word LambdaHeadVar__2_71;

    {
      LambdaHeadVar__2_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_71, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_71, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_70));
    }
    return LambdaHeadVar__2_71;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho6_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    int16_t Int_20;

    succeeded = mercury__integer__to_int16_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__772__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__772__1_1_f_0(
  int16_t LambdaHeadVar__1_63)
{
  {
    MR_Word LambdaHeadVar__2_64;

    {
      LambdaHeadVar__2_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_64, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_63));
    }
    return LambdaHeadVar__2_64;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho5_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    uint16_t Int_20;

    succeeded = mercury__integer__to_uint16_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__777__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__777__1_1_f_0(
  uint16_t LambdaHeadVar__1_56)
{
  {
    MR_Word LambdaHeadVar__2_57;

    {
      LambdaHeadVar__2_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_57, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_57, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_56));
    }
    return LambdaHeadVar__2_57;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho4_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    int32_t Int_20;

    succeeded = mercury__integer__to_int32_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__785__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__785__1_1_f_0(
  int32_t LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50;

    {
      LambdaHeadVar__2_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_50, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_50, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_49));
    }
    return LambdaHeadVar__2_50;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho3_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    uint32_t Int_20;

    succeeded = mercury__integer__to_uint32_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__790__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__790__1_1_f_0(
  uint32_t LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43;

    {
      LambdaHeadVar__2_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_43, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_43, 1) = ((MR_Box) (MR_Word) (LambdaHeadVar__1_42));
    }
    return LambdaHeadVar__2_43;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho2_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    int64_t Int_20;

    succeeded = mercury__integer__to_int64_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__798__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__798__1_1_f_0(
  int64_t LambdaHeadVar__1_35)
{
  {
    MR_Word LambdaHeadVar__2_36;

    {
      LambdaHeadVar__2_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_36, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_36, 1) = MR_box_int64(LambdaHeadVar__1_35);
    }
    return LambdaHeadVar__2_36;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_integer_cons_id__ho1_10_p_0(
  MR_Word Context_11,
  MR_Word Base_12,
  MR_Word Integer_13,
  MR_String IntDesc_14,
  MR_String IntSuffixStr_15,
  MR_Word * ConsId_18,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    uint64_t Int_20;

    succeeded = mercury__integer__to_uint64_2_p_0(Integer_13, &Int_20);
    if (succeeded)
    {
      *ConsId_18 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__803__1_1_f_0(Int_20);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_String BasePrefix_21;
      MR_String IntString_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      BasePrefix_21 = mercury__term_io__integer_base_prefix_1_f_0(Base_12);
      Var_28 = mercury__term_io__integer_base_int_1_f_0(Base_12);
      IntString_22 = mercury__integer__to_base_string_2_f_0(Integer_13, Var_28);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (IntDesc_14));
      }
      Var_39 = mercury__string__f_43_43_2_f_0(IntString_22, IntSuffixStr_15);
      Var_38 = mercury__string__f_43_43_2_f_0(BasePrefix_21, Var_39);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *ConsId_18 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[90]));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__parse_ordinary_cons_id__803__1_1_f_0(
  uint64_t LambdaHeadVar__1_28)
{
  {
    MR_Word LambdaHeadVar__2_29;

    {
      LambdaHeadVar__2_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_29, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_29, 1) = MR_box_uint64(LambdaHeadVar__1_28);
    }
    return LambdaHeadVar__2_29;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_GoalCord_4;

    hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_GoalCord_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_GoalCord_4));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeWrappedGoalCord_6;

    hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
  MR_Word GoalInfo_7,
  MR_Word TermVar_8,
  MR_Word BaseGoal_9,
  MR_Integer BaseGoalSize_10,
  MR_Word ArgExpansions_11,
  MR_Word * Expansion_12)
{
  {
    MR_Word AllFGTI_13;
    MR_Integer TotalSize_14;

    hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(ArgExpansions_11, (MR_Integer) 1, &AllFGTI_13, BaseGoalSize_10, &TotalSize_14);
    switch (AllFGTI_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgGoalCords_15;
          MR_Word ArgGoalsCord_16;
          MR_Word GoalCord_17;
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (GoalInfo_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_21, ArgExpansions_11, &ArgGoalCords_15);
          ArgGoalsCord_16 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_15);
          GoalCord_17 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_9)), ArgGoalsCord_16);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Expansion_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20;
          MR_Word ArgGoalCords_23;
          MR_Word ArgGoalsCord_24;
          MR_Word GoalCord_25;

          mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]), ArgExpansions_11, &ArgGoalCords_23);
          ArgGoalsCord_24 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_23);
          GoalCord_25 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_9)), ArgGoalsCord_24);
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (TermVar_8));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (TotalSize_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Expansion_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_25));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * STATE_VARIABLE_AllFGTI_3,
  MR_Integer STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * STATE_VARIABLE_TotalSize_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TotalSize_5 = STATE_VARIABLE_TotalSize_0_4;
      *STATE_VARIABLE_AllFGTI_3 = STATE_VARIABLE_AllFGTI_0_2;
    }
    else
    {
      MR_Word Expansion_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Expansions_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFGTI_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansion_12, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_TotalSize_24_24;
      MR_Word STATE_VARIABLE_AllFGTI_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_4;

      if ((MaybeFGTI_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_AllFGTI_25_25 = (MR_Integer) 0;
        STATE_VARIABLE_TotalSize_24_24 = STATE_VARIABLE_TotalSize_0_4;
      }
      else
      {
        MR_Integer Size_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeFGTI_16, (MR_Integer) 1))));

        STATE_VARIABLE_TotalSize_24_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_4 + (MR_Unsigned) Size_19);
        STATE_VARIABLE_AllFGTI_25_25 = STATE_VARIABLE_AllFGTI_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Expansions_13;
      next_value_of_STATE_VARIABLE_AllFGTI_0_2 = STATE_VARIABLE_AllFGTI_25_25;
      next_value_of_STATE_VARIABLE_TotalSize_0_4 = STATE_VARIABLE_TotalSize_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AllFGTI_0_2 = next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      STATE_VARIABLE_TotalSize_0_4 = next_value_of_STATE_VARIABLE_TotalSize_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeWrappedGoalCord_6;

    hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Expansions_6,
  MR_Word BaseGoal_7,
  MR_Word * Goal_8)
{
  {
    MR_Word BaseGoals_9;
    MR_Word ExpansionGoalCords_10;
    MR_Word ExpansionGoals_11;
    MR_Word Var_12;
    MR_Word Var_13;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_7, &BaseGoals_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (GoalInfo_5));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_12, Expansions_6, &ExpansionGoalCords_10);
    ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_10);
    Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_11, BaseGoals_9);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_13, GoalInfo_5, Goal_8);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__superhomogeneous__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_kind_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_mode_presence_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_body_kind_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_head_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_dcg_vars_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0);
}

void mercury__hlds__make_hlds__superhomogeneous__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__superhomogeneous__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.superhomogeneous.
