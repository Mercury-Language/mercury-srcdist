/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2025-07-12
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
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_vars.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
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
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__superhomogeneous__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0;

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

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_kind_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_mode_presence_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_mode_presence_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_body_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_body_kind_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_body_kind_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_head_0_0[7];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_head_0_0[7];

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

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_num_context_0_0[4];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_num_context_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_num_context_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_num_context_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_num_context_0[1];

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__2154__1_2_f_0(
  MR_Word InstVarSet_6,
  MR_Word HeadVar__2_47);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__add_some_not_all_args_have_modes_error__1715__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__1_1,
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_arg_mode_1_f_0(
  MR_Word LambdaArg_3);

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
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_SVarState_0_5,
  MR_Word * STATE_VARIABLE_SVarState_6,
  MR_Word STATE_VARIABLE_UrInfo_0_7,
  MR_Word * STATE_VARIABLE_UrInfo_8);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__have_seen_arg_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVar_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_String YAtom_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_153,
  MR_Word * STATE_VARIABLE_SVarState_154,
  MR_Word STATE_VARIABLE_UrInfo_0_155,
  MR_Word * STATE_VARIABLE_UrInfo_156);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(
  MR_Word XVar_14,
  MR_Word YTerm_15,
  MR_Word Context_16,
  MR_Word MainContext_17,
  MR_Word SubContext_18,
  MR_Word Purity_19,
  MR_Word AncestorVarMap_21,
  MR_Word * Expansion_22,
  MR_Word STATE_VARIABLE_SVarState_0_31,
  MR_Word * STATE_VARIABLE_SVarState_32,
  MR_Word STATE_VARIABLE_UrInfo_0_33,
  MR_Word * STATE_VARIABLE_UrInfo_34);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(
  MR_Word LHSVar_13,
  MR_Word RHS0_14,
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext_17,
  MR_Word Purity_18,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm_14,
  MR_Word Context_15,
  MR_Word ArgContext_16,
  MR_Integer ArgNum_18,
  MR_Word AncestorVarMap_19,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(
  MR_Word XVar_16,
  MR_Word YFunctor_17,
  MR_Word YArgTerms0_18,
  MR_Word YFunctorContext_19,
  MR_Word Context_20,
  MR_Word MainContext_21,
  MR_Word SubContext_22,
  MR_Word Purity_23,
  MR_Word AncestorVarMap_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_43,
  MR_Word * STATE_VARIABLE_SVarState_44,
  MR_Word STATE_VARIABLE_UrInfo_0_45,
  MR_Word * STATE_VARIABLE_UrInfo_46);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(
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
  MR_Word * STATE_VARIABLE_UrInfo_41);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_SVarState_0_10,
  MR_Word * STATE_VARIABLE_SVarState_11,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0(
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(
  MR_Word XVar_15,
  MR_Word ConsId_16,
  MR_Word MaybeQualifiedYArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_39,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_UrInfo_0_42,
  MR_Word * STATE_VARIABLE_UrInfo_43);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(
  MR_Word LambdaArgs0_6,
  MR_Word * LambdaArgs_7,
  MR_Word * Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18);

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
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0(
  MR_Word InstVarSet_6,
  MR_Word Context_7,
  MR_Word Modes_8,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_5_p_0(
  MR_Word PurityPFArgsDetTerm_6,
  MR_Word MaybeDCGVars_7,
  MR_Word * MaybeLambdaHead_8,
  MR_Word STATE_VARIABLE_UrInfo_0_65,
  MR_Word * STATE_VARIABLE_UrInfo_66);

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

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(
  MR_Word Context_8,
  MR_Word ArgModeTerms_9,
  MR_Word * LambdaArgs_10,
  MR_Word * STATE_VARIABLE_BadModeSpecs_21,
  MR_Word * STATE_VARIABLE_SVarSpecs_22,
  MR_Word STATE_VARIABLE_UrInfo_0_23,
  MR_Word * STATE_VARIABLE_UrInfo_24);

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(
  MR_Word Context_9,
  MR_Word ArgModeTerms_10,
  MR_Word FuncRetArgModeTerm_11,
  MR_Word * LambdaArgs_12,
  MR_Word * STATE_VARIABLE_BadModeSpecs_26,
  MR_Word * STATE_VARIABLE_SVarSpecs_27,
  MR_Word STATE_VARIABLE_UrInfo_0_28,
  MR_Word * STATE_VARIABLE_UrInfo_29);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(
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
hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(
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
hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansion_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * MaybeWrappedGoalCord_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * Goal_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_UrInfo_0_29,
  MR_Word * STATE_VARIABLE_UrInfo_30);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word UrInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_19,
  MR_Word * STATE_VARIABLE_AncestorVarMap_20);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(
  MR_Word UrInfo_8,
  MR_Word GoalInfo_9,
  MR_Word TermVar_10,
  MR_Word BaseGoal_11,
  MR_Integer BaseGoalSize_12,
  MR_Word ArgExpansions_13,
  MR_Word * Expansion_14);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * STATE_VARIABLE_AllFGTI_3,
  MR_Integer STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * STATE_VARIABLE_TotalSize_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansions_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(
  MR_Word AncestorVarMap_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(
  MR_Word ArgContext_5,
  MR_Integer ArgNum_6,
  MR_Word * MainContext_7,
  MR_Word * SubContexts_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_num_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_num_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[135][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[10][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[5][1];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[6][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_7[1][6];


struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
  const MR_Word hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[5];

struct hlds__make_hlds__superhomogeneous__vector_common_type_8_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_8_0_s hlds__make_hlds__superhomogeneous_vector_common_8[32];



static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[135][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unexpected implementation defined literal"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The only valid implementation defined literals are"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044pred"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044module"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044file"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044line"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044grade"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[0]))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the clause neck operator"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in expressions of the form"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can be used only"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a field update expression:"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "On the right hand side"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in a field selection expression:"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the body of lambda expression:"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by a DCG clause"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "lambda expression that is defined"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the head of a"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at least two arguments."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: DCG notation is"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clauses for functions."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the clause head part of a lambda expression"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have one of the following forms:"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<args>) is <determinism>"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<args>) is <determinism>"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg> is <determinism>"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg> is <determinism>"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg>"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg>"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or one of those forms preceded by either"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in head of lambda expression:"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "some but not all arguments have modes."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in head of predicate lambda expression:"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "none of the arguments have modes."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of the lambda expression:"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the constraints on the inst"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are inconsistent."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[122]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[124]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unified with a term containing itself."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[129]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<lambda expression head> --> <lambda expression body>"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<lambda expression head> :- <lambda expression body>"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[5])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "::")) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};


static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[5] = {
  /* row   0 */
  {
    (MR_String) "file",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "grade",
    (MR_Integer) 4
  },
  /* row   2 */
  {
    (MR_String) "line",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "module",
    (MR_Integer) 2
  },
  /* row   4 */
  {
    (MR_String) "pred",
    (MR_Integer) 3
  },
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_8_0_s hlds__make_hlds__superhomogeneous_vector_common_8[32] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "\100" },
  /* row   2 */   { (MR_String) "is" },
  /* row   3 */   { (MR_String) "coerce" },
  /* row   4 */   { NULL },
  /* row   5 */   { (MR_String) "else" },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "-->" },
  /* row   8 */   { (MR_String) "with_type" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) ":-" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { (MR_String) ";" },
  /* row  27 */   { (MR_String) ":" },
  /* row  28 */   { (MR_String) "=" },
  /* row  29 */   { (MR_String) ":=" },
  /* row  30 */   { NULL },
  /* row  31 */   { (MR_String) "^" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__superhomogeneous__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_ancestor_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "ancestor_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)
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

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0) };

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
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0) }
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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "arg_context",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "expansion",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_arg_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_mode_presence_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_arg_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_arg_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_arg_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_arg_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_0 = {
  (MR_String) "lambda_arg_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_kind_0_1 = {
  (MR_String) "lambda_arg_func_result",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_kind_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg_kind",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_kind_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_kind_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_0 = {
  (MR_String) "lam_absent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_arg_mode_presence_0_1 = {
  (MR_String) "lam_present",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_mode_presence_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_arg_mode_presence",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_arg_mode_presence_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_arg_mode_presence_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_arg_mode_presence_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_0 = {
  (MR_String) "lambda_body_ordinary",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_functor_desc_lambda_body_kind_0_1 = {
  (MR_String) "lambda_body_dcg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_body_kind_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_body_kind",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_name_ordered_lambda_body_kind_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__enum_ordinal_ordered_lambda_body_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_body_kind_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_lambda_head_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_groundness_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__parse_tree__maybe_error__ti_maybe1_2parse_tree__prog_data__type_ctor_info_determinism_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_locns_lambda_head_0_0[7] = {
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

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0 = {
  (MR_String) "lambda_head",
  INT16_C(7),
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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_head_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_head_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_lambda_head_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_head_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_lambda_head_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_head_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_head_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "lambda_head",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_lambda_head_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_lambda_head_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_lambda_head_0,

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_1[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_dcg_vars_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_dcg_vars_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_dcg_vars_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_dcg_vars",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_dcg_vars_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_dcg_vars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_dcg_vars_0,

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_fgti_var_size",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0 = {
  (MR_String) "unify_var_term",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____unify_var_term_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____unify_var_term_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "unify_var_term",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_num_context_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0 = {
  (MR_String) "unify_var_term_num_context",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_unify_var_term_num_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_num_context_0_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_num_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_num_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_num_context_0[1] = { &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_num_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_num_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____unify_var_term_num_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____unify_var_term_num_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "unify_var_term_num_context",
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_num_context_0 },
  { hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_unify_var_term_num_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_num_context_0,

};

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__2154__1_2_f_0(
  MR_Word InstVarSet_6,
  MR_Word HeadVar__2_47)
{
  MR_Word HeadVar__3_48;

  HeadVar__3_48 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_6, HeadVar__2_47);
  return HeadVar__3_48;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__add_some_not_all_args_have_modes_error__1715__1_1_f_0(
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

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_num_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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
          hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_num_context_0_0(
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
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0(
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
      TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(
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
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
          TypeInfo_19_19 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[2]);
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0(
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
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(
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
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(
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
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0(
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
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
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
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_19 == CastY_20);
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_27 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_28 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_27 < Var_28);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_27 > Var_28);
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
                MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
                MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

                succeeded = (Var_29 < Var_30);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_29 > Var_30);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              hlds__hlds_pred____Compare____call_id_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
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
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_13;

              parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word SubResult2_16;

                hlds__hlds_goal____Compare____unify_main_context_0_0(&SubResult2_16, ArgX2_14, ArgY2_15);
                succeeded = (SubResult2_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_16;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_17)), ((MR_Box) (ArgY3_18)));
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Integer Var_22;
          MR_Integer Var_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              Var_22 = (MR_Integer) (ArgX2_5);
              Var_23 = (MR_Integer) (ArgY2_6);
              succeeded = (Var_22 == Var_23);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = hlds__hlds_pred____Unify____call_id_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_20_20;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_arg_mode_1_f_0(
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
hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 4))));

  return Mode_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 2))));

  return LambdaVar_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word ArgTerm_4 = ((MR_Word) ((MR_hl_field(0, LambdaArg_3, 1))));

  return ArgTerm_4;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4)
{
  *GoalCord_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_7_p_0(
  MR_Word Args_8,
  MR_Word * Vars_9,
  MR_Word * VarsArgs_10,
  MR_Word STATE_VARIABLE_SVarState_0_14,
  MR_Word * STATE_VARIABLE_SVarState_15,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17)
{
  MR_Word RevVarsArgs_13;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_8_p_0(Args_8, Vars_9, (MR_Word) ((MR_Unsigned) 0U), &RevVarsArgs_13, STATE_VARIABLE_SVarState_0_14, STATE_VARIABLE_SVarState_15, STATE_VARIABLE_UrInfo_0_16, STATE_VARIABLE_UrInfo_17);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_0), RevVarsArgs_13, VarsArgs_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_SVarState_0_5,
  MR_Word * STATE_VARIABLE_SVarState_6,
  MR_Word STATE_VARIABLE_UrInfo_0_7,
  MR_Word * STATE_VARIABLE_UrInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_8 = STATE_VARIABLE_UrInfo_0_7;
    *STATE_VARIABLE_SVarState_6 = STATE_VARIABLE_SVarState_0_5;
    *STATE_VARIABLE_RevVarsArgs_4 = STATE_VARIABLE_RevVarsArgs_0_3;
  }
  else
  {
    MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Args_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_20;
    MR_Word Vars_21;
    MR_Word STATE_VARIABLE_RevVarsArgs_1_31;
    MR_Word STATE_VARIABLE_SVarState_1_32;
    MR_Word STATE_VARIABLE_UrInfo_1_33;
    MR_Word Arg_34;
    MR_Word STATE_VARIABLE_UrInfo_1_40;
    MR_Word Var_41;

    hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(Arg_18, &Arg_34, STATE_VARIABLE_SVarState_0_5, &STATE_VARIABLE_SVarState_1_32, STATE_VARIABLE_UrInfo_0_7, &STATE_VARIABLE_UrInfo_1_40);
    if (((MR_tag((MR_Word) Arg_34)) == (MR_Integer) 0))
      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&Var_20, STATE_VARIABLE_UrInfo_1_40, &STATE_VARIABLE_UrInfo_1_33);
    else
    {
      MR_Word ArgVar_35 = ((MR_Word) ((MR_hl_field(1, Arg_34, 0))));

      succeeded = hlds__make_hlds__superhomogeneous__have_seen_arg_var_2_p_0(STATE_VARIABLE_RevVarsArgs_0_3, ArgVar_35);
      if (succeeded)
        hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&Var_20, STATE_VARIABLE_UrInfo_1_40, &STATE_VARIABLE_UrInfo_1_33);
      else
      {
        Var_20 = ArgVar_35;
        STATE_VARIABLE_UrInfo_1_33 = STATE_VARIABLE_UrInfo_1_40;
      }
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (Arg_34));
    }
    {
      STATE_VARIABLE_RevVarsArgs_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_RevVarsArgs_1_31, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, STATE_VARIABLE_RevVarsArgs_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsArgs_0_3));
    }
    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_8_p_0(Args_19, &Vars_21, STATE_VARIABLE_RevVarsArgs_1_31, STATE_VARIABLE_RevVarsArgs_4, STATE_VARIABLE_SVarState_1_32, STATE_VARIABLE_SVarState_6, STATE_VARIABLE_UrInfo_1_33, STATE_VARIABLE_UrInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_21));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__have_seen_arg_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVar_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word RevUnifyVarTerm_3;
    MR_Word RevUnifyVarTerms_4;
    MR_Word RevVar_6;
    MR_Word TypeInfo_8_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevUnifyVarTerm_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      RevUnifyVarTerms_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      RevVar_6 = ((MR_Word) ((MR_hl_field(0, RevUnifyVarTerm_3, 0))));
      TypeInfo_8_8 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) (RevVar_6)), ((MR_Box) (ArgVar_5)));
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = RevUnifyVarTerms_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_11_p_0(
  MR_Word LHS0_12,
  MR_Word RHS0_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word Purity_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27)
{
  MR_Word Expansion_22;
  MR_Word GoalInfo_23;
  MR_Word LHS_28;
  MR_Word RHS_29;
  MR_Word STATE_VARIABLE_SVarState_1_30;
  MR_Word STATE_VARIABLE_UrInfo_1_31;
  MR_Word STATE_VARIABLE_SVarState_2_32;
  MR_Word STATE_VARIABLE_UrInfo_2_33;
  MR_Word Var_34;

  hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(LHS0_12, &LHS_28, STATE_VARIABLE_SVarState_0_24, &STATE_VARIABLE_SVarState_1_30, STATE_VARIABLE_UrInfo_0_26, &STATE_VARIABLE_UrInfo_1_31);
  hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(RHS0_13, &RHS_29, STATE_VARIABLE_SVarState_1_30, &STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_UrInfo_1_31, &STATE_VARIABLE_UrInfo_2_33);
  Var_34 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  if (((MR_tag((MR_Word) LHS_28)) == (MR_Integer) 0))
  {
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, LHS_28, 2))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, LHS_28, 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, LHS_28, 0))));

    if (((MR_tag((MR_Word) RHS_29)) == (MR_Integer) 0))
    {
      MR_Word TmpVar_50;
      MR_Word ExpansionX_51;
      MR_Word ExpansionY_52;
      MR_Word GoalInfo_53;
      MR_Word MaybeWrappedGoalCordX_54;
      MR_Word MaybeWrappedGoalCordY_55;
      MR_Word GoalCord_56;
      MR_Word STATE_VARIABLE_UrInfo_3_60;
      MR_Word STATE_VARIABLE_SVarState_3_61;
      MR_Word STATE_VARIABLE_UrInfo_4_62;
      MR_Word YFunctor_66 = ((MR_Word) ((MR_hl_field(0, RHS_29, 0))));
      MR_Word YArgTerms_67 = ((MR_Word) ((MR_hl_field(0, RHS_29, 1))));
      MR_Word YFunctorContext_68 = ((MR_Word) ((MR_hl_field(0, RHS_29, 2))));

      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&TmpVar_50, STATE_VARIABLE_UrInfo_2_33, &STATE_VARIABLE_UrInfo_3_60);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(TmpVar_50, Var_76, Var_75, Var_74, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &ExpansionX_51, STATE_VARIABLE_SVarState_2_32, &STATE_VARIABLE_SVarState_3_61, STATE_VARIABLE_UrInfo_3_60, &STATE_VARIABLE_UrInfo_4_62);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(TmpVar_50, YFunctor_66, YArgTerms_67, YFunctorContext_68, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &ExpansionY_52, STATE_VARIABLE_SVarState_3_61, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_4_62, STATE_VARIABLE_UrInfo_27);
      hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo_53);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_53, ExpansionX_51, &MaybeWrappedGoalCordX_54);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_53, ExpansionY_52, &MaybeWrappedGoalCordY_55);
      GoalCord_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWrappedGoalCordX_54, MaybeWrappedGoalCordY_55);
      {
        Expansion_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_22, 1) = ((MR_Box) (GoalCord_56));
      }
    }
    else
    {
      MR_Word YVar_65 = ((MR_Word) ((MR_hl_field(1, RHS_29, 0))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(YVar_65, Var_76, Var_75, Var_74, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &Expansion_22, STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_2_33, STATE_VARIABLE_UrInfo_27);
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, LHS_28, 0))));

    if (((MR_tag((MR_Word) RHS_29)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_43 = ((MR_Word) ((MR_hl_field(0, RHS_29, 0))));
      MR_Word YArgTerms_44 = ((MR_Word) ((MR_hl_field(0, RHS_29, 1))));
      MR_Word YFunctorContext_45 = ((MR_Word) ((MR_hl_field(0, RHS_29, 2))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(Var_78, YFunctor_43, YArgTerms_44, YFunctorContext_45, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &Expansion_22, STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_2_33, STATE_VARIABLE_UrInfo_27);
    }
    else
    {
      MR_Word YVar_39 = ((MR_Word) ((MR_hl_field(1, RHS_29, 0))));
      MR_Word Goal_41;
      MR_Word Var_57;
      MR_Word Var_59;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (YVar_39));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var_78, Var_57, Context_14, MainContext_15, SubContext_16, Purity_17, &Goal_41);
      Var_59 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_41)));
      {
        Expansion_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_22, 1) = ((MR_Box) (Var_59));
      }
      *STATE_VARIABLE_SVarState_25 = STATE_VARIABLE_SVarState_2_32;
      *STATE_VARIABLE_UrInfo_27 = STATE_VARIABLE_UrInfo_2_33;
    }
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo_23);
  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_23, Expansion_22, Goal_18);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0(
  MR_Word XVarsArgTermsArgNumsContexts0_9,
  MR_Word Context_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23)
{
  MR_Word XVarsArgTermsArgNumsContexts_15;
  MR_Word AncestorVarMap_16;
  MR_Word Expansions_17;
  MR_Word GoalInfo0_19;
  MR_Word STATE_VARIABLE_SVarState_1_24;
  MR_Word STATE_VARIABLE_UrInfo_1_25;
  MR_Word BaseGoals_29;
  MR_Word ExpansionGoalCords_30;
  MR_Word ExpansionGoals_31;
  MR_Word Var_32;
  MR_Word Var_33;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(XVarsArgTermsArgNumsContexts0_9, &XVarsArgTermsArgNumsContexts_15, STATE_VARIABLE_SVarState_0_20, &STATE_VARIABLE_SVarState_1_24, STATE_VARIABLE_UrInfo_0_22, &STATE_VARIABLE_UrInfo_1_25);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_16);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(XVarsArgTermsArgNumsContexts_15, Context_10, AncestorVarMap_16, &Expansions_17, STATE_VARIABLE_SVarState_1_24, STATE_VARIABLE_SVarState_21, STATE_VARIABLE_UrInfo_1_25, STATE_VARIABLE_UrInfo_23);
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_11, &BaseGoals_29);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (*STATE_VARIABLE_UrInfo_23));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (GoalInfo0_19));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_32, Expansions_17, &ExpansionGoalCords_30);
  ExpansionGoals_31 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_30);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_31, BaseGoals_29);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_33, GoalInfo0_19, Goal_12);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
    *STATE_VARIABLE_SVarState_4 = STATE_VARIABLE_SVarState_0_3;
  }
  else
  {
    MR_Word UVTNC0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word UVTNCs0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word UVTNC_15;
    MR_Word UVTNCs_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 0))));
    MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 1))));
    MR_Integer ArgNum_21 = ((MR_Integer) ((MR_hl_field(0, UVTNC0_13, 2))));
    MR_Word ArgContext_22 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 3))));
    MR_Word Arg_23;
    MR_Word STATE_VARIABLE_SVarState_1_28;
    MR_Word STATE_VARIABLE_UrInfo_1_29;

    hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(Arg0_20, &Arg_23, STATE_VARIABLE_SVarState_0_3, &STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_UrInfo_0_5, &STATE_VARIABLE_UrInfo_1_29);
    {
      UVTNC_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UVTNC_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, UVTNC_15, 1) = ((MR_Box) (Arg_23));
      MR_hl_field(0, UVTNC_15, 2) = ((MR_Box) (ArgNum_21));
      MR_hl_field(0, UVTNC_15, 3) = ((MR_Box) (ArgContext_22));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(UVTNCs0_14, &UVTNCs_16, STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_SVarState_4, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UVTNC_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (UVTNCs_16));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_String YAtom_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_153,
  MR_Word * STATE_VARIABLE_SVarState_154,
  MR_Word STATE_VARIABLE_UrInfo_0_155,
  MR_Word * STATE_VARIABLE_UrInfo_156)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(YAtom_16)) & (MR_Integer) 31);
  MR_String str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_8[0 + slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_8_0__vct_8_f_0;

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
  if ((((str_1 != NULL)) && ((strcmp(str_1, YAtom_16) == 0))))
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
            MR_Word TypeCtorInfo_505_505;
            MR_Word LVal_40;
            MR_Word RVal_41;
            MR_Word ExpansionL_42;
            MR_Word ExpansionR_43;
            MR_Word GoalCordL_45;
            MR_Word GoalCordR_47;
            MR_Word STATE_VARIABLE_SVarState_2_171;
            MR_Word STATE_VARIABLE_UrInfo_5_172;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_990;
            MR_Word Var_992;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LVal_40 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_992 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_992 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RVal_41 = ((MR_Word) ((MR_hl_field(1, Var_992, 0))));
                Var_990 = ((MR_Word) ((MR_hl_field(1, Var_992, 1))));
                succeeded = (Var_990 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, LVal_40, Context_19, MainContext_20, SubContext_21, Purity_22, &ExpansionL_42, STATE_VARIABLE_SVarState_0_153, &STATE_VARIABLE_SVarState_2_171, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_5_172);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, RVal_41, Context_19, MainContext_20, SubContext_21, Purity_22, &ExpansionR_43, STATE_VARIABLE_SVarState_2_171, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_5_172, STATE_VARIABLE_UrInfo_156);
                  GoalCordL_45 = ((MR_Word) ((MR_hl_field(0, ExpansionL_42, 1))));
                  GoalCordR_47 = ((MR_Word) ((MR_hl_field(0, ExpansionR_43, 1))));
                  Var_175 = (MR_Word) ((MR_Unsigned) 0U);
                  TypeCtorInfo_505_505 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  Var_176 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_505_505, GoalCordL_45, GoalCordR_47);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Expansion_24 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_175));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_176));
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
            MR_Word YTerm_147;
            MR_Word Var_352;

            {
              Var_352 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_352, 0) = ((MR_Box) (YAtom_16));
            }
            {
              YTerm_147 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, YTerm_147, 0) = ((MR_Box) (Var_352));
              MR_hl_field(0, YTerm_147, 1) = ((MR_Box) (YArgTerms_17));
              MR_hl_field(0, YTerm_147, 2) = ((MR_Box) (YFunctorContext_18));
            }
            hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, YTerm_147, (MR_Word) ((MR_Unsigned) 0U), Expansion_24, STATE_VARIABLE_SVarState_0_153, STATE_VARIABLE_UrInfo_0_155, STATE_VARIABLE_UrInfo_156);
            *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "coerce"
          ;
          {
            MR_Word TypeCtorInfo_507_507;
            MR_Word RValTerm0_53;
            MR_Word RValTermVar_54;
            MR_Word RValGoalCord_56;
            MR_Word CoerceGoalExpr_62;
            MR_Word CoerceGoalInfo_63;
            MR_Word CoerceGoal_64;
            MR_Word CoerceGoalCord_65;
            MR_Word Var_180;
            MR_Word Var_187;
            MR_Word Var_189;
            MR_Word Var_190;
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_200;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm0_53 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_180 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_180 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) RValTerm0_53)) == (MR_Integer) 0))
                {
                  MR_Word RValTermExpansion_60;
                  MR_Word STATE_VARIABLE_SVarState_4_181;
                  MR_Word STATE_VARIABLE_UrInfo_7_182;
                  MR_Word STATE_VARIABLE_UrInfo_8_184;
                  MR_Word RValTerm_361;

                  hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(RValTerm0_53, &RValTerm_361, STATE_VARIABLE_SVarState_0_153, &STATE_VARIABLE_SVarState_4_181, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_7_182);
                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(RValTerm0_53, &RValTermVar_54, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_UrInfo_7_182, &STATE_VARIABLE_UrInfo_8_184);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(RValTermVar_54, RValTerm_361, Context_19, MainContext_20, SubContext_21, Purity_22, &RValTermExpansion_60, STATE_VARIABLE_SVarState_4_181, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_8_184, STATE_VARIABLE_UrInfo_156);
                  RValGoalCord_56 = ((MR_Word) ((MR_hl_field(0, RValTermExpansion_60, 1))));
                }
                else
                {
                  RValTermVar_54 = ((MR_Word) ((MR_hl_field(1, RValTerm0_53, 0))));
                  RValGoalCord_56 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                  *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
                  *STATE_VARIABLE_UrInfo_156 = STATE_VARIABLE_UrInfo_0_155;
                }
                Var_187 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_3[2]));
                {
                  Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_190, 0) = ((MR_Box) (XVar_15));
                  MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_180));
                }
                {
                  Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_189, 0) = ((MR_Box) (RValTermVar_54));
                  MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_190));
                }
                Var_193 = parse_tree__prog_mode__in_mode_0_f_0();
                Var_195 = parse_tree__prog_mode__out_mode_0_f_0();
                Var_196 = (MR_Word) ((MR_Unsigned) 0U);
                Var_197 = (MR_Word) ((MR_Unsigned) 0U);
                Var_198 = (MR_Integer) 0;
                {
                  Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_194, 0) = ((MR_Box) (Var_195));
                  MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_196));
                }
                {
                  Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
                  MR_hl_field(1, Var_192, 1) = ((MR_Box) (Var_194));
                }
                {
                  CoerceGoalExpr_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceGoalExpr_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, CoerceGoalExpr_62, 1) = ((MR_Box) (Var_187));
                  MR_hl_field(3, CoerceGoalExpr_62, 2) = ((MR_Box) (Var_189));
                  MR_hl_field(3, CoerceGoalExpr_62, 3) = ((MR_Box) (Var_192));
                  MR_hl_field(3, CoerceGoalExpr_62, 4) = ((MR_Box) (Var_197));
                  MR_hl_field(3, CoerceGoalExpr_62, 5) = (MR_Box) ((MR_Unsigned) (Var_198));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &CoerceGoalInfo_63);
                TypeCtorInfo_507_507 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                {
                  CoerceGoal_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CoerceGoal_64, 0) = ((MR_Box) (CoerceGoalExpr_62));
                  MR_hl_field(0, CoerceGoal_64, 1) = ((MR_Box) (CoerceGoalInfo_63));
                }
                CoerceGoalCord_65 = mercury__cord__singleton_1_f_0(TypeCtorInfo_507_507, ((MR_Box) (CoerceGoal_64)));
                Var_199 = (MR_Word) ((MR_Unsigned) 0U);
                Var_200 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_507_507, RValGoalCord_56, CoerceGoalCord_65);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Expansion_24 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_200));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "else"
          ;
          {
            MR_Word TypeCtorInfo_508_828;
            MR_Word TypeCtorInfo_509_829;
            MR_Word TypeCtorInfo_510_830;
            MR_Word CondThenTerm0_66;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_String Var_204;
            MR_Word Var_205;
            MR_Word Var_206;
            MR_Word Var_207;
            MR_String Var_208;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word CondTerm_764;
            MR_Word MaybeVarsCond_765;
            MR_Word VarSet_766;
            MR_Word STATE_VARIABLE_UrInfo_10_797;
            MR_Word ContextPieces_815;
            MR_Word VarSet0_816;
            MR_Word ElseTerm0_906;
            MR_Word CondTerm0_907;
            MR_Word ThenTerm0_908;
            MR_Word Var_650;
            MR_Integer Var_651;
            MR_Word Var_652;
            MR_Word Var_654;
            MR_Word Var_655;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondThenTerm0_66 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_201 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_201 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_906 = ((MR_Word) ((MR_hl_field(1, Var_201, 0))));
                Var_202 = ((MR_Word) ((MR_hl_field(1, Var_201, 1))));
                succeeded = (Var_202 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) CondThenTerm0_66)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_203 = ((MR_Word) ((MR_hl_field(0, CondThenTerm0_66, 0))));
                    Var_205 = ((MR_Word) ((MR_hl_field(0, CondThenTerm0_66, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_203)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_204 = ((MR_String) ((MR_hl_field(0, Var_203, 0))));
                      succeeded = (strcmp(Var_204, (MR_String) "if") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_205 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_206 = ((MR_Word) ((MR_hl_field(1, Var_205, 0))));
                          Var_212 = ((MR_Word) ((MR_hl_field(1, Var_205, 1))));
                          succeeded = (Var_212 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_206)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_207 = ((MR_Word) ((MR_hl_field(0, Var_206, 0))));
                              Var_209 = ((MR_Word) ((MR_hl_field(0, Var_206, 1))));
                              succeeded = ((MR_tag((MR_Word) Var_207)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_208 = ((MR_String) ((MR_hl_field(0, Var_207, 0))));
                                succeeded = (strcmp(Var_208, (MR_String) "then") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_209 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    CondTerm0_907 = ((MR_Word) ((MR_hl_field(1, Var_209, 0))));
                                    Var_210 = ((MR_Word) ((MR_hl_field(1, Var_209, 1))));
                                    succeeded = (Var_210 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ThenTerm0_908 = ((MR_Word) ((MR_hl_field(1, Var_210, 0))));
                                      Var_211 = ((MR_Word) ((MR_hl_field(1, Var_210, 1))));
                                      succeeded = (Var_211 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_508_828 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                        TypeCtorInfo_509_829 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                        mercury__term__coerce_2_p_0(TypeCtorInfo_508_828, TypeCtorInfo_509_829, CondTerm0_907, &CondTerm_764);
                                        TypeCtorInfo_510_830 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                                        ContextPieces_815 = mercury__cord__init_0_f_0(TypeCtorInfo_510_830);
                                        VarSet0_816 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                                        parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_764, ContextPieces_815, &MaybeVarsCond_765, VarSet0_816, &VarSet_766);
                                        Var_650 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 0))));
                                        Var_651 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 1))));
                                        Var_652 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 2))));
                                        Var_654 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 4))));
                                        Var_655 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 5))));
                                        {
                                          STATE_VARIABLE_UrInfo_10_797 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 0) = ((MR_Box) (Var_650));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 1) = ((MR_Box) (Var_651));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 2) = ((MR_Box) (Var_652));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 3) = ((MR_Box) (VarSet_766));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 4) = ((MR_Box) (Var_654));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_10_797, 5) = ((MR_Box) (Var_655));
                                        }
                                        if (((MR_tag((MR_Word) MaybeVarsCond_765)) == (MR_Integer) 0))
                                        {
                                          MR_Word VarsCondSpecs_662 = ((MR_Word) ((MR_hl_field(0, MaybeVarsCond_765, 0))));
                                          MR_Word Var_664;
                                          MR_Word Var_665;

                                          hlds__make_hlds__state_var__add_unravel_specs_3_p_0(VarsCondSpecs_662, STATE_VARIABLE_UrInfo_10_797, STATE_VARIABLE_UrInfo_156);
                                          Var_665 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
                                          Var_664 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_665)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_24 = base;
                                            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_664));
                                          }
                                          *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
                                        }
                                        else
                                        {
                                          MR_Word Vars_667 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_765, 0))));
                                          MR_Word StateVars_668 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_765, 1))));
                                          MR_Word CondParseTree_669 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_765, 2))));
                                          MR_Word CondWarningSpecs_670 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_765, 3))));
                                          MR_Word BeforeInsideSVarState_672;
                                          MR_Word EmptyRenaming_673;
                                          MR_Word CondGoal_674;
                                          MR_Word AfterCondInsideSVarState_675;
                                          MR_Word ThenTerm_676;
                                          MR_Word AfterThenInsideSVarState0_677;
                                          MR_Word AncestorVarMap_678;
                                          MR_Word ThenExpansion_679;
                                          MR_Word AfterThenInsideSVarState_680;
                                          MR_Word ThenGoalInfo_681;
                                          MR_Word ThenGoal0_682;
                                          MR_Word AfterThenSVarState_683;
                                          MR_Word ElseTerm_684;
                                          MR_Word AfterElseSVarState0_685;
                                          MR_Word ElseExpansion_686;
                                          MR_Word AfterElseSVarState_687;
                                          MR_Word ElseGoalInfo_688;
                                          MR_Word ElseGoal0_689;
                                          MR_Word ThenGoal_690;
                                          MR_Word ElseGoal_691;
                                          MR_Word GoalExpr_693;
                                          MR_Word GoalInfo_694;
                                          MR_Word Goal_695;
                                          MR_Word STATE_VARIABLE_UrInfo_11_696;
                                          MR_Word STATE_VARIABLE_UrInfo_12_697;
                                          MR_Word STATE_VARIABLE_UrInfo_13_699;
                                          MR_Word STATE_VARIABLE_UrInfo_14_700;
                                          MR_Word STATE_VARIABLE_UrInfo_15_701;
                                          MR_Word Var_702;
                                          MR_Word STATE_VARIABLE_UrInfo_16_703;
                                          MR_Word STATE_VARIABLE_UrInfo_17_704;
                                          MR_Word Var_705;
                                          MR_Word Var_707;
                                          MR_Word Var_709;

                                          hlds__make_hlds__state_var__add_unravel_specs_3_p_0(CondWarningSpecs_670, STATE_VARIABLE_UrInfo_10_797, &STATE_VARIABLE_UrInfo_11_696);
                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_19, StateVars_668, STATE_VARIABLE_SVarState_0_153, &BeforeInsideSVarState_672, STATE_VARIABLE_UrInfo_11_696, &STATE_VARIABLE_UrInfo_12_697);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptyRenaming_673);
                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 1, EmptyRenaming_673, CondParseTree_669, &CondGoal_674, BeforeInsideSVarState_672, &AfterCondInsideSVarState_675, STATE_VARIABLE_UrInfo_12_697, &STATE_VARIABLE_UrInfo_13_699);
                                          hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(ThenTerm0_908, &ThenTerm_676, AfterCondInsideSVarState_675, &AfterThenInsideSVarState0_677, STATE_VARIABLE_UrInfo_13_699, &STATE_VARIABLE_UrInfo_14_700);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_678);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ThenTerm_676, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_678, &ThenExpansion_679, AfterThenInsideSVarState0_677, &AfterThenInsideSVarState_680, STATE_VARIABLE_UrInfo_14_700, &STATE_VARIABLE_UrInfo_15_701);
                                          Var_702 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_508_828, ThenTerm_676);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_702, &ThenGoalInfo_681);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_15_701, ThenGoalInfo_681, ThenExpansion_679, &ThenGoal0_682);
                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_15_701, StateVars_668, STATE_VARIABLE_SVarState_0_153, AfterThenInsideSVarState_680, &AfterThenSVarState_683);
                                          hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(ElseTerm0_906, &ElseTerm_684, STATE_VARIABLE_SVarState_0_153, &AfterElseSVarState0_685, STATE_VARIABLE_UrInfo_15_701, &STATE_VARIABLE_UrInfo_16_703);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ElseTerm_684, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_678, &ElseExpansion_686, AfterElseSVarState0_685, &AfterElseSVarState_687, STATE_VARIABLE_UrInfo_16_703, &STATE_VARIABLE_UrInfo_17_704);
                                          Var_705 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_508_828, ElseTerm_684);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_705, &ElseGoalInfo_688);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_17_704, ElseGoalInfo_688, ElseExpansion_686, &ElseGoal0_689);
                                          hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0((MR_Integer) 1, Context_19, StateVars_668, ThenGoal0_682, &ThenGoal_690, ElseGoal0_689, &ElseGoal_691, STATE_VARIABLE_SVarState_0_153, AfterCondInsideSVarState_675, AfterThenSVarState_683, AfterElseSVarState_687, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_17_704, STATE_VARIABLE_UrInfo_156);
                                          Var_707 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_668, Vars_667);
                                          {
                                            GoalExpr_693 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(3, GoalExpr_693, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                            MR_hl_field(3, GoalExpr_693, 1) = ((MR_Box) (Var_707));
                                            MR_hl_field(3, GoalExpr_693, 2) = ((MR_Box) (CondGoal_674));
                                            MR_hl_field(3, GoalExpr_693, 3) = ((MR_Box) (ThenGoal_690));
                                            MR_hl_field(3, GoalExpr_693, 4) = ((MR_Box) (ElseGoal_691));
                                          }
                                          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_694);
                                          {
                                            Goal_695 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(0, Goal_695, 0) = ((MR_Box) (GoalExpr_693));
                                            MR_hl_field(0, Goal_695, 1) = ((MR_Box) (GoalInfo_694));
                                          }
                                          Var_709 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_695)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_24 = base;
                                            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_709));
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
            MR_Word PurityPFArgsDetTerm_140;
            MR_Word BodyGoalTerm_141;
            MR_Word Var_313;
            MR_Word Var_314;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_140 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_313 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_313 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_141 = ((MR_Word) ((MR_hl_field(1, Var_313, 0))));
                Var_314 = ((MR_Word) ((MR_hl_field(1, Var_313, 1))));
                succeeded = (Var_314 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_315;
              MR_Tuple Var_317;

              {
                Var_317 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_317, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_317, 1) = ((MR_Box) (BodyGoalTerm_141));
              }
              {
                Var_315 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_315, 0) = ((MR_Box) (Var_317));
              }
              hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, PurityPFArgsDetTerm_140, Var_315, Expansion_24, STATE_VARIABLE_SVarState_0_153, STATE_VARIABLE_UrInfo_0_155, STATE_VARIABLE_UrInfo_156);
            }
            else
            {
              MR_Word Pieces_145;
              MR_Word Spec_146;
              MR_Word Var_319;
              MR_Word Var_322;
              MR_Word Var_323;
              MR_Word Var_325;
              MR_Word Var_326;
              MR_Word Var_334;
              MR_Word Var_335;
              MR_Word STATE_VARIABLE_UrInfo_31_348;
              MR_Word Var_351;

              {
                Var_323 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_323, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_323, 1) = ((MR_Box) (YAtom_16));
              }
              {
                Var_322 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_322, 0) = ((MR_Box) (Var_323));
                MR_hl_field(1, Var_322, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_319 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_319, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[36])));
                MR_hl_field(1, Var_319, 1) = ((MR_Box) (Var_322));
              }
              Var_326 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[40])));
              Var_335 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[132])));
              Var_334 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_335, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
              Var_325 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_326, Var_334);
              Pieces_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_319, Var_325);
              {
                Spec_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_146, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/14"));
                MR_hl_field(0, Spec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_146, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_146, 3) = ((MR_Box) (YFunctorContext_18));
                MR_hl_field(0, Spec_146, 4) = ((MR_Box) (Pieces_145));
              }
              hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_146, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_31_348);
              hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_31_348, STATE_VARIABLE_UrInfo_156);
              Var_351 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_351));
              }
            }
            *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
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
            MR_Word TypeCtorInfo_501_501;
            MR_Word TypeCtorInfo_502_502;
            MR_Word TypeCtorInfo_503_503;
            MR_Word RValTerm_27;
            MR_Word DeclTypeTerm0_28;
            MR_Word DeclTypeTerm1_29;
            MR_Word ContextPieces_30;
            MR_Word VarSet0_31;
            MR_Word GenericVarSet_32;
            MR_Word DeclTypeResult_33;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_161;
            MR_Word STATE_VARIABLE_UrInfo_2_165;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm_27 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_157 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_157 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                DeclTypeTerm0_28 = ((MR_Word) ((MR_hl_field(1, Var_157, 0))));
                Var_158 = ((MR_Word) ((MR_hl_field(1, Var_157, 1))));
                succeeded = (Var_158 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeCtorInfo_501_501 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  TypeCtorInfo_502_502 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  mercury__term__coerce_2_p_0(TypeCtorInfo_501_501, TypeCtorInfo_502_502, DeclTypeTerm0_28, &DeclTypeTerm1_29);
                  TypeCtorInfo_503_503 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                  Var_159 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[41]));
                  ContextPieces_30 = mercury__cord__singleton_1_f_0(TypeCtorInfo_503_503, ((MR_Box) (Var_159)));
                  VarSet0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_501_501, TypeCtorInfo_502_502, VarSet0_31, &GenericVarSet_32);
                  Var_161 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[1]));
                  parse_tree__parse_type_name__parse_type_5_p_0(Var_161, GenericVarSet_32, ContextPieces_30, DeclTypeTerm1_29, &DeclTypeResult_33);
                  if (((MR_tag((MR_Word) DeclTypeResult_33)) == (MR_Integer) 0))
                  {
                    MR_Word DeclTypeSpecs_39 = ((MR_Word) ((MR_hl_field(0, DeclTypeResult_33, 0))));

                    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(DeclTypeSpecs_39, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_2_165);
                  }
                  else
                  {
                    MR_Word DeclType_34 = ((MR_Word) ((MR_hl_field(1, DeclTypeResult_33, 0))));
                    MR_Word DeclVarSet_35;
                    MR_Word QualInfo0_36;
                    MR_Word QualInfo_37;
                    MR_Word TypeQualSpecs_38;
                    MR_Word STATE_VARIABLE_UrInfo_1_164;
                    MR_Word Var_474;
                    MR_Integer Var_475;
                    MR_Word Var_477;
                    MR_Word Var_478;
                    MR_Word Var_479;

                    mercury__varset__coerce_2_p_0(TypeCtorInfo_501_501, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet0_31, &DeclVarSet_35);
                    QualInfo0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 2))));
                    hlds__make_hlds__qual_info__process_type_qualification_8_p_0(XVar_15, DeclType_34, DeclVarSet_35, YFunctorContext_18, QualInfo0_36, &QualInfo_37, (MR_Word) ((MR_Unsigned) 0U), &TypeQualSpecs_38);
                    Var_474 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 0))));
                    Var_475 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 1))));
                    Var_477 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                    Var_478 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 4))));
                    Var_479 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 5))));
                    {
                      STATE_VARIABLE_UrInfo_1_164 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 0) = ((MR_Box) (Var_474));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 1) = ((MR_Box) (Var_475));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 2) = ((MR_Box) (QualInfo_37));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 3) = ((MR_Box) (Var_477));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 4) = ((MR_Box) (Var_478));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_164, 5) = ((MR_Box) (Var_479));
                    }
                    hlds__make_hlds__state_var__add_unravel_specs_3_p_0(TypeQualSpecs_38, STATE_VARIABLE_UrInfo_1_164, &STATE_VARIABLE_UrInfo_2_165);
                  }
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, RValTerm_27, Context_19, MainContext_20, SubContext_21, Purity_22, Expansion_24, STATE_VARIABLE_SVarState_0_153, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_2_165, STATE_VARIABLE_UrInfo_156);
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
            MR_Word PurityPFArgsDetTerm_563;
            MR_Word BodyGoalTerm_564;
            MR_Word Var_523;
            MR_Word Var_524;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_563 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_523 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_523 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_564 = ((MR_Word) ((MR_hl_field(1, Var_523, 0))));
                Var_524 = ((MR_Word) ((MR_hl_field(1, Var_523, 1))));
                succeeded = (Var_524 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_525;
              MR_Tuple Var_526;

              {
                Var_526 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_526, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(0, Var_526, 1) = ((MR_Box) (BodyGoalTerm_564));
              }
              {
                Var_525 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_525, 0) = ((MR_Box) (Var_526));
              }
              hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, PurityPFArgsDetTerm_563, Var_525, Expansion_24, STATE_VARIABLE_SVarState_0_153, STATE_VARIABLE_UrInfo_0_155, STATE_VARIABLE_UrInfo_156);
            }
            else
            {
              MR_Word Pieces_532;
              MR_Word Spec_533;
              MR_Word Var_535;
              MR_Word Var_538;
              MR_Word Var_539;
              MR_Word Var_541;
              MR_Word Var_542;
              MR_Word Var_544;
              MR_Word Var_545;
              MR_Word STATE_VARIABLE_UrInfo_31_558;
              MR_Word Var_560;

              {
                Var_539 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_539, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_539, 1) = ((MR_Box) (YAtom_16));
              }
              {
                Var_538 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_538, 0) = ((MR_Box) (Var_539));
                MR_hl_field(1, Var_538, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_535 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_535, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[36])));
                MR_hl_field(1, Var_535, 1) = ((MR_Box) (Var_538));
              }
              Var_542 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[40])));
              Var_545 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[134])));
              Var_544 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_545, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
              Var_541 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_542, Var_544);
              Pieces_532 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_535, Var_541);
              {
                Spec_533 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_533, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/14"));
                MR_hl_field(0, Spec_533, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_533, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_533, 3) = ((MR_Box) (YFunctorContext_18));
                MR_hl_field(0, Spec_533, 4) = ((MR_Box) (Pieces_532));
              }
              hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_533, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_31_558);
              hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_31_558, STATE_VARIABLE_UrInfo_156);
              Var_560 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_560));
              }
            }
            *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 26:
        {
          // case ";"
          ;
          {
            MR_Word TypeCtorInfo_508_508;
            MR_Word TypeCtorInfo_509_509;
            MR_Word TypeCtorInfo_510_510;
            MR_Word ElseTerm0_67;
            MR_Word CondTerm0_68;
            MR_Word ThenTerm0_69;
            MR_Word CondTerm_73;
            MR_Word MaybeVarsCond_74;
            MR_Word VarSet_75;
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_String Var_216;
            MR_Word Var_217;
            MR_Word Var_218;
            MR_Word Var_219;
            MR_Word STATE_VARIABLE_UrInfo_10_220;
            MR_Word CondThenTerm0_366;
            MR_Word ContextPieces_367;
            MR_Word VarSet0_368;
            MR_Word Var_485;
            MR_Integer Var_486;
            MR_Word Var_487;
            MR_Word Var_489;
            MR_Word Var_490;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondThenTerm0_366 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_213 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_213 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_67 = ((MR_Word) ((MR_hl_field(1, Var_213, 0))));
                Var_214 = ((MR_Word) ((MR_hl_field(1, Var_213, 1))));
                succeeded = (Var_214 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) CondThenTerm0_366)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_215 = ((MR_Word) ((MR_hl_field(0, CondThenTerm0_366, 0))));
                    Var_217 = ((MR_Word) ((MR_hl_field(0, CondThenTerm0_366, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_215)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_216 = ((MR_String) ((MR_hl_field(0, Var_215, 0))));
                      succeeded = (strcmp(Var_216, (MR_String) "->") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_217 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondTerm0_68 = ((MR_Word) ((MR_hl_field(1, Var_217, 0))));
                          Var_218 = ((MR_Word) ((MR_hl_field(1, Var_217, 1))));
                          succeeded = (Var_218 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenTerm0_69 = ((MR_Word) ((MR_hl_field(1, Var_218, 0))));
                            Var_219 = ((MR_Word) ((MR_hl_field(1, Var_218, 1))));
                            succeeded = (Var_219 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              TypeCtorInfo_508_508 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              TypeCtorInfo_509_509 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                              mercury__term__coerce_2_p_0(TypeCtorInfo_508_508, TypeCtorInfo_509_509, CondTerm0_68, &CondTerm_73);
                              TypeCtorInfo_510_510 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                              ContextPieces_367 = mercury__cord__init_0_f_0(TypeCtorInfo_510_510);
                              VarSet0_368 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                              parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_73, ContextPieces_367, &MaybeVarsCond_74, VarSet0_368, &VarSet_75);
                              Var_485 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 0))));
                              Var_486 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 1))));
                              Var_487 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 2))));
                              Var_489 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 4))));
                              Var_490 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 5))));
                              {
                                STATE_VARIABLE_UrInfo_10_220 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 0) = ((MR_Box) (Var_485));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 1) = ((MR_Box) (Var_486));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 2) = ((MR_Box) (Var_487));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 3) = ((MR_Box) (VarSet_75));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 4) = ((MR_Box) (Var_489));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_10_220, 5) = ((MR_Box) (Var_490));
                              }
                              if (((MR_tag((MR_Word) MaybeVarsCond_74)) == (MR_Integer) 0))
                              {
                                MR_Word VarsCondSpecs_105 = ((MR_Word) ((MR_hl_field(0, MaybeVarsCond_74, 0))));
                                MR_Word Var_239;
                                MR_Word Var_240;

                                hlds__make_hlds__state_var__add_unravel_specs_3_p_0(VarsCondSpecs_105, STATE_VARIABLE_UrInfo_10_220, STATE_VARIABLE_UrInfo_156);
                                Var_240 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
                                Var_239 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_240)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_239));
                                }
                                *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
                              }
                              else
                              {
                                MR_Word Vars_76 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_74, 0))));
                                MR_Word StateVars_77 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_74, 1))));
                                MR_Word CondParseTree_78 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_74, 2))));
                                MR_Word CondWarningSpecs_79 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_74, 3))));
                                MR_Word BeforeInsideSVarState_81;
                                MR_Word EmptyRenaming_82;
                                MR_Word CondGoal_83;
                                MR_Word AfterCondInsideSVarState_84;
                                MR_Word ThenTerm_85;
                                MR_Word AfterThenInsideSVarState0_86;
                                MR_Word AncestorVarMap_87;
                                MR_Word ThenExpansion_88;
                                MR_Word AfterThenInsideSVarState_89;
                                MR_Word ThenGoalInfo_90;
                                MR_Word ThenGoal0_91;
                                MR_Word AfterThenSVarState_92;
                                MR_Word ElseTerm_93;
                                MR_Word AfterElseSVarState0_94;
                                MR_Word ElseExpansion_95;
                                MR_Word AfterElseSVarState_96;
                                MR_Word ElseGoalInfo_97;
                                MR_Word ElseGoal0_98;
                                MR_Word ThenGoal_99;
                                MR_Word ElseGoal_100;
                                MR_Word GoalExpr_102;
                                MR_Word GoalInfo_103;
                                MR_Word Goal_104;
                                MR_Word STATE_VARIABLE_UrInfo_11_221;
                                MR_Word STATE_VARIABLE_UrInfo_12_222;
                                MR_Word STATE_VARIABLE_UrInfo_13_224;
                                MR_Word STATE_VARIABLE_UrInfo_14_225;
                                MR_Word STATE_VARIABLE_UrInfo_15_226;
                                MR_Word Var_227;
                                MR_Word STATE_VARIABLE_UrInfo_16_228;
                                MR_Word STATE_VARIABLE_UrInfo_17_229;
                                MR_Word Var_230;
                                MR_Word Var_234;
                                MR_Word Var_236;

                                hlds__make_hlds__state_var__add_unravel_specs_3_p_0(CondWarningSpecs_79, STATE_VARIABLE_UrInfo_10_220, &STATE_VARIABLE_UrInfo_11_221);
                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_19, StateVars_77, STATE_VARIABLE_SVarState_0_153, &BeforeInsideSVarState_81, STATE_VARIABLE_UrInfo_11_221, &STATE_VARIABLE_UrInfo_12_222);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptyRenaming_82);
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 1, EmptyRenaming_82, CondParseTree_78, &CondGoal_83, BeforeInsideSVarState_81, &AfterCondInsideSVarState_84, STATE_VARIABLE_UrInfo_12_222, &STATE_VARIABLE_UrInfo_13_224);
                                hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(ThenTerm0_69, &ThenTerm_85, AfterCondInsideSVarState_84, &AfterThenInsideSVarState0_86, STATE_VARIABLE_UrInfo_13_224, &STATE_VARIABLE_UrInfo_14_225);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_87);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ThenTerm_85, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_87, &ThenExpansion_88, AfterThenInsideSVarState0_86, &AfterThenInsideSVarState_89, STATE_VARIABLE_UrInfo_14_225, &STATE_VARIABLE_UrInfo_15_226);
                                Var_227 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_508_508, ThenTerm_85);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_227, &ThenGoalInfo_90);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_15_226, ThenGoalInfo_90, ThenExpansion_88, &ThenGoal0_91);
                                hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_15_226, StateVars_77, STATE_VARIABLE_SVarState_0_153, AfterThenInsideSVarState_89, &AfterThenSVarState_92);
                                hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(ElseTerm0_67, &ElseTerm_93, STATE_VARIABLE_SVarState_0_153, &AfterElseSVarState0_94, STATE_VARIABLE_UrInfo_15_226, &STATE_VARIABLE_UrInfo_16_228);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ElseTerm_93, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_87, &ElseExpansion_95, AfterElseSVarState0_94, &AfterElseSVarState_96, STATE_VARIABLE_UrInfo_16_228, &STATE_VARIABLE_UrInfo_17_229);
                                Var_230 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_508_508, ElseTerm_93);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_230, &ElseGoalInfo_97);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_17_229, ElseGoalInfo_97, ElseExpansion_95, &ElseGoal0_98);
                                hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0((MR_Integer) 1, Context_19, StateVars_77, ThenGoal0_91, &ThenGoal_99, ElseGoal0_98, &ElseGoal_100, STATE_VARIABLE_SVarState_0_153, AfterCondInsideSVarState_84, AfterThenSVarState_92, AfterElseSVarState_96, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_17_229, STATE_VARIABLE_UrInfo_156);
                                Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_77, Vars_76);
                                {
                                  GoalExpr_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, GoalExpr_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                  MR_hl_field(3, GoalExpr_102, 1) = ((MR_Box) (Var_234));
                                  MR_hl_field(3, GoalExpr_102, 2) = ((MR_Box) (CondGoal_83));
                                  MR_hl_field(3, GoalExpr_102, 3) = ((MR_Box) (ThenGoal_99));
                                  MR_hl_field(3, GoalExpr_102, 4) = ((MR_Box) (ElseGoal_100));
                                }
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_103);
                                {
                                  Goal_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Goal_104, 0) = ((MR_Box) (GoalExpr_102));
                                  MR_hl_field(0, Goal_104, 1) = ((MR_Box) (GoalInfo_103));
                                }
                                Var_236 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_104)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_236));
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
            MR_Word FuncArgsTerm_148;
            MR_String FuncTermFunctor_150;
            MR_Word Var_355;
            MR_Word Var_356;
            MR_Word Var_357;
            MR_Word Var_358;
            MR_Word Var_359;
            MR_Word YTerm_463;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncArgsTerm_148 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_355 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_355 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_356 = ((MR_Word) ((MR_hl_field(1, Var_355, 1))));
                succeeded = (Var_356 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncArgsTerm_148)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_357 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_148, 0))));
                    succeeded = ((MR_tag((MR_Word) Var_357)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_150 = ((MR_String) ((MR_hl_field(0, Var_357, 0))));
                      if ((strcmp(FuncTermFunctor_150, (MR_String) "func") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(FuncTermFunctor_150, (MR_String) "any_func") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                      if (succeeded)
                      {
                        Var_359 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_358 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_358, 0) = ((MR_Box) (YAtom_16));
                        }
                        {
                          YTerm_463 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, YTerm_463, 0) = ((MR_Box) (Var_358));
                          MR_hl_field(0, YTerm_463, 1) = ((MR_Box) (YArgTerms_17));
                          MR_hl_field(0, YTerm_463, 2) = ((MR_Box) (YFunctorContext_18));
                        }
                        hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, YTerm_463, Var_359, Expansion_24, STATE_VARIABLE_SVarState_0_153, STATE_VARIABLE_UrInfo_0_155, STATE_VARIABLE_UrInfo_156);
                        *STATE_VARIABLE_SVarState_154 = STATE_VARIABLE_SVarState_0_153;
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
            MR_Word TypeInfo_518_518;
            MR_Word TypeCtorInfo_519_519;
            MR_Word TypeCtorInfo_520_520;
            MR_Word FieldDescrTerm_124;
            MR_Word FieldValueTerm0_125;
            MR_Word FieldValueTerm_127;
            MR_Word FieldValueVar_128;
            MR_Word InnerFunctor_129;
            MR_Word FieldSubContext_130;
            MR_Word SetGoal_131;
            MR_Integer TermArgNumber_132;
            MR_Word TermArgContext_133;
            MR_Word InputVTNC_134;
            MR_Integer FieldArgNumber_135;
            MR_Word FieldArgContext_136;
            MR_Word FieldVTNC_137;
            MR_Word InputFieldArgExpansions_138;
            MR_Word Var_272;
            MR_Word Var_273;
            MR_Word Var_274;
            MR_String Var_275;
            MR_Word Var_276;
            MR_Word Var_277;
            MR_Word Var_278;
            MR_Word STATE_VARIABLE_SVarState_10_294;
            MR_Word STATE_VARIABLE_UrInfo_24_295;
            MR_Word Var_296;
            MR_Word STATE_VARIABLE_UrInfo_25_297;
            MR_Word STATE_VARIABLE_SVarState_11_298;
            MR_Word STATE_VARIABLE_UrInfo_26_299;
            MR_Word Var_300;
            MR_Word STATE_VARIABLE_UrInfo_27_301;
            MR_Word Var_302;
            MR_Word Var_303;
            MR_Word STATE_VARIABLE_SVarState_12_304;
            MR_Word STATE_VARIABLE_UrInfo_28_305;
            MR_Word Var_306;
            MR_Word Var_309;
            MR_Word Var_310;
            MR_Word Var_311;
            MR_Word Var_312;
            MR_Word AncestorVarMap_397;
            MR_Word GoalInfo_398;
            MR_Word Goal_399;
            MR_Word InputTerm_400;
            MR_Word InputTermVar_401;
            MR_Word Functor_402;
            MR_Word FieldNames_412;
            MR_Word VarSet0_426;
            MR_Word FieldNameContextPieces_430;
            MR_Word MaybeFieldNames_431;
            MR_Word InputTerm0_441;
            MR_Word FieldNameTerm_442;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDescrTerm_124 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_272 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_272 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldValueTerm0_125 = ((MR_Word) ((MR_hl_field(1, Var_272, 0))));
                Var_273 = ((MR_Word) ((MR_hl_field(1, Var_272, 1))));
                succeeded = (Var_273 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FieldDescrTerm_124)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_274 = ((MR_Word) ((MR_hl_field(0, FieldDescrTerm_124, 0))));
                    Var_276 = ((MR_Word) ((MR_hl_field(0, FieldDescrTerm_124, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_274)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_275 = ((MR_String) ((MR_hl_field(0, Var_274, 0))));
                      succeeded = (strcmp(Var_275, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_276 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          InputTerm0_441 = ((MR_Word) ((MR_hl_field(1, Var_276, 0))));
                          Var_277 = ((MR_Word) ((MR_hl_field(1, Var_276, 1))));
                          succeeded = (Var_277 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldNameTerm_442 = ((MR_Word) ((MR_hl_field(1, Var_277, 0))));
                            Var_278 = ((MR_Word) ((MR_hl_field(1, Var_277, 1))));
                            succeeded = (Var_278 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              FieldNameContextPieces_430 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[51]));
                              VarSet0_426 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                              hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_442, VarSet0_426, FieldNameContextPieces_430, &MaybeFieldNames_431);
                              succeeded = ((MR_tag((MR_Word) MaybeFieldNames_431)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                FieldNames_412 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_431, 0))));
                                hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(InputTerm0_441, &InputTerm_400, STATE_VARIABLE_SVarState_0_153, &STATE_VARIABLE_SVarState_10_294, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_24_295);
                                Var_296 = (MR_Word) ((MR_Unsigned) 0U);
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_400, &InputTermVar_401, Var_296, STATE_VARIABLE_UrInfo_24_295, &STATE_VARIABLE_UrInfo_25_297);
                                hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(FieldValueTerm0_125, &FieldValueTerm_127, STATE_VARIABLE_SVarState_10_294, &STATE_VARIABLE_SVarState_11_298, STATE_VARIABLE_UrInfo_25_297, &STATE_VARIABLE_UrInfo_26_299);
                                Var_302 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_300 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_300, 0) = ((MR_Box) (InputTermVar_401));
                                  MR_hl_field(1, Var_300, 1) = ((MR_Box) (Var_302));
                                }
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(FieldValueTerm_127, &FieldValueVar_128, Var_300, STATE_VARIABLE_UrInfo_26_299, &STATE_VARIABLE_UrInfo_27_301);
                                hlds__make_hlds__field_access__expand_set_field_function_call_14_p_0(Context_19, MainContext_20, SubContext_21, FieldNames_412, FieldValueVar_128, InputTermVar_401, XVar_15, &Functor_402, &Var_303, &SetGoal_131, STATE_VARIABLE_SVarState_11_298, &STATE_VARIABLE_SVarState_12_304, STATE_VARIABLE_UrInfo_27_301, &STATE_VARIABLE_UrInfo_28_305);
                                InnerFunctor_129 = ((MR_Word) ((MR_hl_field(0, Var_303, 0))));
                                FieldSubContext_130 = ((MR_Word) ((MR_hl_field(0, Var_303, 1))));
                                TermArgNumber_132 = (MR_Integer) 1;
                                FieldArgNumber_135 = (MR_Integer) 2;
                                TypeInfo_518_518 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                                TypeCtorInfo_519_519 = (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0);
                                {
                                  TermArgContext_133 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(2, TermArgContext_133, 0) = ((MR_Box) (Functor_402));
                                  MR_hl_field(2, TermArgContext_133, 1) = ((MR_Box) (MainContext_20));
                                  MR_hl_field(2, TermArgContext_133, 2) = ((MR_Box) (SubContext_21));
                                }
                                {
                                  InputVTNC_134 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, InputVTNC_134, 0) = ((MR_Box) (InputTermVar_401));
                                  MR_hl_field(0, InputVTNC_134, 1) = ((MR_Box) (InputTerm_400));
                                  MR_hl_field(0, InputVTNC_134, 2) = ((MR_Box) (TermArgNumber_132));
                                  MR_hl_field(0, InputVTNC_134, 3) = ((MR_Box) (TermArgContext_133));
                                }
                                {
                                  FieldArgContext_136 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(2, FieldArgContext_136, 0) = ((MR_Box) (InnerFunctor_129));
                                  MR_hl_field(2, FieldArgContext_136, 1) = ((MR_Box) (MainContext_20));
                                  MR_hl_field(2, FieldArgContext_136, 2) = ((MR_Box) (FieldSubContext_130));
                                }
                                {
                                  FieldVTNC_137 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, FieldVTNC_137, 0) = ((MR_Box) (FieldValueVar_128));
                                  MR_hl_field(0, FieldVTNC_137, 1) = ((MR_Box) (FieldValueTerm_127));
                                  MR_hl_field(0, FieldVTNC_137, 2) = ((MR_Box) (FieldArgNumber_135));
                                  MR_hl_field(0, FieldVTNC_137, 3) = ((MR_Box) (FieldArgContext_136));
                                }
                                mercury__map__init_1_p_0(TypeInfo_518_518, TypeCtorInfo_519_519, &AncestorVarMap_397);
                                Var_310 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_309 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_309, 0) = ((MR_Box) (FieldVTNC_137));
                                  MR_hl_field(1, Var_309, 1) = ((MR_Box) (Var_310));
                                }
                                {
                                  Var_306 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_306, 0) = ((MR_Box) (InputVTNC_134));
                                  MR_hl_field(1, Var_306, 1) = ((MR_Box) (Var_309));
                                }
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(Var_306, Context_19, AncestorVarMap_397, &InputFieldArgExpansions_138, STATE_VARIABLE_SVarState_12_304, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_28_305, STATE_VARIABLE_UrInfo_156);
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_398);
                                hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_156, GoalInfo_398, InputFieldArgExpansions_138, SetGoal_131, &Goal_399);
                                Var_311 = (MR_Word) ((MR_Unsigned) 0U);
                                TypeCtorInfo_520_520 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                                Var_312 = mercury__cord__singleton_1_f_0(TypeCtorInfo_520_520, ((MR_Box) (Goal_399)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_311));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_312));
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
            MR_Word TypeInfo_515_515;
            MR_Word TypeCtorInfo_516_516;
            MR_Word TypeCtorInfo_517_517;
            MR_Word InputTerm0_106;
            MR_Word FieldNameTerm_107;
            MR_Word FieldNameContextPieces_108;
            MR_Word MaybeFieldNames_109;
            MR_Word FieldNames_110;
            MR_Word InputTerm_111;
            MR_Word InputTermVar_112;
            MR_Word Functor_113;
            MR_Word GetGoal_115;
            MR_Word ArgContext_116;
            MR_Word InputArgExpansion_117;
            MR_Word STATE_VARIABLE_SVarState_7_258;
            MR_Word STATE_VARIABLE_UrInfo_20_259;
            MR_Word Var_260;
            MR_Word STATE_VARIABLE_UrInfo_21_261;
            MR_Word STATE_VARIABLE_SVarState_8_262;
            MR_Word STATE_VARIABLE_UrInfo_22_263;
            MR_Integer Var_264;
            MR_Word Var_267;
            MR_Word Var_268;
            MR_Word AncestorVarMap_373;
            MR_Word GoalInfo_374;
            MR_Word Goal_375;
            MR_Word VarSet0_385;
            MR_Word Var_995;
            MR_Word Var_997;
            MR_Word Var_114;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InputTerm0_106 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_997 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_997 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldNameTerm_107 = ((MR_Word) ((MR_hl_field(1, Var_997, 0))));
                Var_995 = ((MR_Word) ((MR_hl_field(1, Var_997, 1))));
                succeeded = (Var_995 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FieldNameContextPieces_108 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[57]));
                  VarSet0_385 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_155, 3))));
                  hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_107, VarSet0_385, FieldNameContextPieces_108, &MaybeFieldNames_109);
                  succeeded = ((MR_tag((MR_Word) MaybeFieldNames_109)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    FieldNames_110 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_109, 0))));
                    hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(InputTerm0_106, &InputTerm_111, STATE_VARIABLE_SVarState_0_153, &STATE_VARIABLE_SVarState_7_258, STATE_VARIABLE_UrInfo_0_155, &STATE_VARIABLE_UrInfo_20_259);
                    Var_260 = (MR_Word) ((MR_Unsigned) 0U);
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_111, &InputTermVar_112, Var_260, STATE_VARIABLE_UrInfo_20_259, &STATE_VARIABLE_UrInfo_21_261);
                    hlds__make_hlds__field_access__expand_get_field_function_call_14_p_0(Context_19, MainContext_20, SubContext_21, FieldNames_110, XVar_15, InputTermVar_112, Purity_22, &Functor_113, &Var_114, &GetGoal_115, STATE_VARIABLE_SVarState_7_258, &STATE_VARIABLE_SVarState_8_262, STATE_VARIABLE_UrInfo_21_261, &STATE_VARIABLE_UrInfo_22_263);
                    TypeInfo_515_515 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                    TypeCtorInfo_516_516 = (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0);
                    {
                      ArgContext_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ArgContext_116, 0) = ((MR_Box) (Functor_113));
                      MR_hl_field(2, ArgContext_116, 1) = ((MR_Box) (MainContext_20));
                      MR_hl_field(2, ArgContext_116, 2) = ((MR_Box) (SubContext_21));
                    }
                    mercury__map__init_1_p_0(TypeInfo_515_515, TypeCtorInfo_516_516, &AncestorVarMap_373);
                    Var_264 = (MR_Integer) 1;
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(InputTermVar_112, InputTerm_111, YFunctorContext_18, ArgContext_116, Var_264, AncestorVarMap_373, &InputArgExpansion_117, STATE_VARIABLE_SVarState_8_262, STATE_VARIABLE_SVarState_154, STATE_VARIABLE_UrInfo_22_263, STATE_VARIABLE_UrInfo_156);
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_374);
                    hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_156, GoalInfo_374, InputArgExpansion_117, GetGoal_115, &Goal_375);
                    Var_267 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeCtorInfo_517_517 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                    Var_268 = mercury__cord__singleton_1_f_0(TypeCtorInfo_517_517, ((MR_Box) (Goal_375)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Expansion_24 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_267));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_268));
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(
  MR_Word XVar_14,
  MR_Word YTerm_15,
  MR_Word Context_16,
  MR_Word MainContext_17,
  MR_Word SubContext_18,
  MR_Word Purity_19,
  MR_Word AncestorVarMap_21,
  MR_Word * Expansion_22,
  MR_Word STATE_VARIABLE_SVarState_0_31,
  MR_Word * STATE_VARIABLE_SVarState_32,
  MR_Word STATE_VARIABLE_UrInfo_0_33,
  MR_Word * STATE_VARIABLE_UrInfo_34)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) YTerm_15)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_28 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 0))));
    MR_Word YArgTerms_29 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 1))));
    MR_Word YFunctorContext_30 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 2))));

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_14, YFunctor_28, YArgTerms_29, YFunctorContext_30, Context_16, MainContext_17, SubContext_18, Purity_19, AncestorVarMap_21, Expansion_22, STATE_VARIABLE_SVarState_0_31, STATE_VARIABLE_SVarState_32, STATE_VARIABLE_UrInfo_0_33, STATE_VARIABLE_UrInfo_34);
  }
  else
  {
    MR_Word YVar_25 = ((MR_Word) ((MR_hl_field(1, YTerm_15, 0))));
    MR_Word Goal_27;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word AncestorContext_40;
    MR_Box conv0_AncestorContext_40;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_21, ((MR_Box) (YVar_25)), &conv0_AncestorContext_40);
    if (succeeded)
    {
      AncestorContext_40 = ((MR_Word) (conv0_AncestorContext_40));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_33, 0))));
      MR_Word Globals_42;
      MR_Word WarnOccursCheck_43;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_41, &Globals_42);
      libs__globals__lookup_bool_option_3_p_0(Globals_42, (MR_Integer) 225, &WarnOccursCheck_43);
      switch (WarnOccursCheck_43) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_UrInfo_34 = STATE_VARIABLE_UrInfo_0_33;
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarSet_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_33, 3))));
            MR_String VarName_45;
            MR_Word Pieces_46;
            MR_Word Spec_47;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_61;
            MR_Word Var_66;
            MR_Word Var_67;

            mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_44, YVar_25, &VarName_45);
            {
              Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_59, 1) = ((MR_Box) (VarName_45));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[126])));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
            }
            Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
            Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[130])));
            Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
            Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[128])), Var_66);
            Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_61);
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[125])), Var_53);
            {
              Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.occurs_check\'/4"));
              MR_hl_field(0, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(0, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_47, 3) = ((MR_Box) (AncestorContext_40));
              MR_hl_field(0, Spec_47, 4) = ((MR_Box) (Pieces_46));
            }
            hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_47, STATE_VARIABLE_UrInfo_0_33, STATE_VARIABLE_UrInfo_34);
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_UrInfo_34 = STATE_VARIABLE_UrInfo_0_33;
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (YVar_25));
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_14, Var_36, Context_16, MainContext_17, SubContext_18, Purity_19, &Goal_27);
    Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_27)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
    }
    *STATE_VARIABLE_SVarState_32 = STATE_VARIABLE_SVarState_0_31;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(
  MR_Word LHSVar_13,
  MR_Word RHS0_14,
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext_17,
  MR_Word Purity_18,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27)
{
  MR_Word RHS_23;
  MR_Word STATE_VARIABLE_SVarState_1_28;
  MR_Word STATE_VARIABLE_UrInfo_1_29;
  MR_Word Var_30;

  hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(RHS0_14, &RHS_23, STATE_VARIABLE_SVarState_0_24, &STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_UrInfo_0_26, &STATE_VARIABLE_UrInfo_1_29);
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  if (((MR_tag((MR_Word) RHS_23)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_36 = ((MR_Word) ((MR_hl_field(0, RHS_23, 0))));
    MR_Word YArgTerms_37 = ((MR_Word) ((MR_hl_field(0, RHS_23, 1))));
    MR_Word YFunctorContext_38 = ((MR_Word) ((MR_hl_field(0, RHS_23, 2))));

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(LHSVar_13, YFunctor_36, YArgTerms_37, YFunctorContext_38, Context_15, MainContext_16, SubContext_17, Purity_18, Var_30, Expansion_20, STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_27);
  }
  else
  {
    MR_Word YVar_33 = ((MR_Word) ((MR_hl_field(1, RHS_23, 0))));
    MR_Word Goal_35;
    MR_Word Var_39;
    MR_Word Var_41;

    hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(Var_30, YVar_33, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_27);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (YVar_33));
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(LHSVar_13, Var_39, Context_15, MainContext_16, SubContext_17, Purity_18, &Goal_35);
    Var_41 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_35)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
    }
    *STATE_VARIABLE_SVarState_25 = STATE_VARIABLE_SVarState_1_28;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm_14,
  MR_Word Context_15,
  MR_Word ArgContext_16,
  MR_Integer ArgNum_18,
  MR_Word AncestorVarMap_19,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_UrInfo_1_36;
  MR_Word AncestorContext_48;
  MR_Box conv0_AncestorContext_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_19, ((MR_Box) (XVar_13)), &conv0_AncestorContext_48);
  if (succeeded)
  {
    AncestorContext_48 = ((MR_Word) (conv0_AncestorContext_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_34, 0))));
    MR_Word Globals_50;
    MR_Word WarnOccursCheck_51;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_49, &Globals_50);
    libs__globals__lookup_bool_option_3_p_0(Globals_50, (MR_Integer) 225, &WarnOccursCheck_51);
    switch (WarnOccursCheck_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_UrInfo_1_36 = STATE_VARIABLE_UrInfo_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_34, 3))));
          MR_String VarName_53;
          MR_Word Pieces_54;
          MR_Word Spec_55;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_69;
          MR_Word Var_74;
          MR_Word Var_75;

          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_52, XVar_13, &VarName_53);
          {
            Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_67, 1) = ((MR_Box) (VarName_53));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[126])));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
          }
          Var_62 = parse_tree__error_spec__color_as_subject_1_f_0(Var_63);
          Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[130])));
          Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[128])), Var_74);
          Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_69);
          Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[125])), Var_61);
          {
            Spec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.occurs_check\'/4"));
            MR_hl_field(0, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_55, 3) = ((MR_Box) (AncestorContext_48));
            MR_hl_field(0, Spec_55, 4) = ((MR_Box) (Pieces_54));
          }
          hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_55, STATE_VARIABLE_UrInfo_0_34, &STATE_VARIABLE_UrInfo_1_36);
        }
        break;
    }
  }
  else
    STATE_VARIABLE_UrInfo_1_36 = STATE_VARIABLE_UrInfo_0_34;
  if (((MR_tag((MR_Word) YTerm_14)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_29 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 0))));
    MR_Word YArgTerms_30 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 1))));
    MR_Word YFunctorContext_31 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 2))));
    MR_Word MainContext_43;
    MR_Word SubContext_44;

    switch (MR_tag((MR_Word) ArgContext_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_100 = ((MR_Unsigned) ((MR_hl_field(0, ArgContext_16, 0))) & (MR_Integer) 1);
          MR_Word PredFormArity_101 = ((MR_Word) ((MR_hl_field(0, ArgContext_16, 1))));
          MR_Integer PredFormArityInt_102;

          succeeded = (PredOrFunc_100 == (MR_Integer) 1);
          if (succeeded)
          {
            PredFormArityInt_102 = (MR_Integer) (PredFormArity_101);
            succeeded = (ArgNum_18 == PredFormArityInt_102);
          }
          if (succeeded)
            MainContext_43 = (MR_Word) ((MR_Unsigned) 4U);
          else
            {
              MainContext_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainContext_43, 0) = ((MR_Box) (ArgNum_18));
            }
          SubContext_44 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_103 = ((MR_Word) ((MR_hl_field(1, ArgContext_16, 0))));

          {
            MainContext_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MainContext_43, 0) = ((MR_Box) (PredId_103));
            MR_hl_field(2, MainContext_43, 1) = ((MR_Box) (ArgNum_18));
          }
          SubContext_44 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_104 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 0))));
          MR_Word SubContexts0_105;
          MR_Word SubContext_106;

          MainContext_43 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 1))));
          SubContexts0_105 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 2))));
          {
            SubContext_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubContext_106, 0) = ((MR_Box) (ConsId_104));
            MR_hl_field(0, SubContext_106, 1) = ((MR_Box) (ArgNum_18));
          }
          {
            SubContext_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SubContext_44, 0) = ((MR_Box) (SubContext_106));
            MR_hl_field(1, SubContext_44, 1) = ((MR_Box) (SubContexts0_105));
          }
        }
        break;
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_13, YFunctor_29, YArgTerms_30, YFunctorContext_31, Context_15, MainContext_43, SubContext_44, (MR_Integer) 0, AncestorVarMap_19, Expansion_20, STATE_VARIABLE_SVarState_0_32, STATE_VARIABLE_SVarState_33, STATE_VARIABLE_UrInfo_1_36, STATE_VARIABLE_UrInfo_35);
  }
  else
  {
    MR_Word YVar_23 = ((MR_Word) ((MR_hl_field(1, YTerm_14, 0))));
    MR_Word YVarContext_24 = ((MR_Word) ((MR_hl_field(1, YTerm_14, 1))));
    MR_Word GoalCord_25;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_13)), ((MR_Box) (YVar_23)));
    if (succeeded)
      GoalCord_25 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
    else
    {
      MR_Word MainContext_26;
      MR_Word SubContext_27;
      MR_Word Goal_28;
      MR_Word Var_37;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(ArgContext_16, ArgNum_18, &MainContext_26, &SubContext_27);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (YVar_23));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_13, Var_37, YVarContext_24, MainContext_26, SubContext_27, (MR_Integer) 0, &Goal_28);
      GoalCord_25 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_28)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_25));
    }
    *STATE_VARIABLE_SVarState_33 = STATE_VARIABLE_SVarState_0_32;
    *STATE_VARIABLE_UrInfo_35 = STATE_VARIABLE_UrInfo_1_36;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(
  MR_Word XVar_16,
  MR_Word YFunctor_17,
  MR_Word YArgTerms0_18,
  MR_Word YFunctorContext_19,
  MR_Word Context_20,
  MR_Word MainContext_21,
  MR_Word SubContext_22,
  MR_Word Purity_23,
  MR_Word AncestorVarMap_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_43,
  MR_Word * STATE_VARIABLE_SVarState_44,
  MR_Word STATE_VARIABLE_UrInfo_0_45,
  MR_Word * STATE_VARIABLE_UrInfo_46)
{
  MR_bool succeeded;
  MR_Word YArgTerms_29;
  MR_Word STATE_VARIABLE_SVarState_1_47;
  MR_Word STATE_VARIABLE_UrInfo_1_48;
  MR_Word ExpansionPrime_31;
  MR_Word STATE_VARIABLE_SVarState_2_49;
  MR_Word STATE_VARIABLE_UrInfo_2_50;
  MR_String YAtom_30;

  hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_terms_6_p_0(YArgTerms0_18, &YArgTerms_29, STATE_VARIABLE_SVarState_0_43, &STATE_VARIABLE_SVarState_1_47, STATE_VARIABLE_UrInfo_0_45, &STATE_VARIABLE_UrInfo_1_48);
  succeeded = ((MR_tag((MR_Word) YFunctor_17)) == (MR_Integer) 0);
  if (succeeded)
  {
    YAtom_30 = ((MR_String) ((MR_hl_field(0, YFunctor_17, 0))));
    succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(XVar_16, YAtom_30, YArgTerms_29, YFunctorContext_19, Context_20, MainContext_21, SubContext_22, Purity_23, &ExpansionPrime_31, STATE_VARIABLE_SVarState_1_47, &STATE_VARIABLE_SVarState_2_49, STATE_VARIABLE_UrInfo_1_48, &STATE_VARIABLE_UrInfo_2_50);
  }
  if (succeeded)
  {
    *STATE_VARIABLE_UrInfo_46 = STATE_VARIABLE_UrInfo_2_50;
    *STATE_VARIABLE_SVarState_44 = STATE_VARIABLE_SVarState_2_49;
    *Expansion_26 = ExpansionPrime_31;
  }
  else
  {
    MR_Word MaybeQualifiedYArgTerms_40;
    MR_Word ConsId_42;
    MR_Word STATE_VARIABLE_UrInfo_4_59;
    MR_Word STATE_VARIABLE_SVarState_4_60;
    MR_Word FunctorName_38;
    MR_Word MaybeQualifiedYArgTermsPrime_39;
    MR_Word STATE_VARIABLE_SVarState_3_54;
    MR_Word STATE_VARIABLE_UrInfo_3_55;
    MR_String YAtom_63;
    MR_Word ModuleNameTerm_32;
    MR_Word NameArgsTerm_33;
    MR_Word Var_51;
    MR_Word Var_52;

    succeeded = ((MR_tag((MR_Word) YFunctor_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      YAtom_63 = ((MR_String) ((MR_hl_field(0, YFunctor_17, 0))));
      succeeded = (strcmp(YAtom_63, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (YArgTerms_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleNameTerm_32 = ((MR_Word) ((MR_hl_field(1, YArgTerms_29, 0))));
          Var_51 = ((MR_Word) ((MR_hl_field(1, YArgTerms_29, 1))));
          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_33 = ((MR_Word) ((MR_hl_field(1, Var_51, 0))));
            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, 1))));
            succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_64_64;
        MR_String Name_34;
        MR_Word NameArgTerms_35;
        MR_Word ModuleName_37;
        MR_Word Var_53;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_33)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_33, 0))));
          NameArgTerms_35 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_33, 1))));
          succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_34 = ((MR_String) ((MR_hl_field(0, Var_53, 0))));
            TypeCtorInfo_64_64 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_64_64, ModuleNameTerm_32, &ModuleName_37);
            if (succeeded)
            {
              {
                FunctorName_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, FunctorName_38, 0) = ((MR_Box) (ModuleName_37));
                MR_hl_field(1, FunctorName_38, 1) = ((MR_Box) (Name_34));
              }
              hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_terms_6_p_0(NameArgTerms_35, &MaybeQualifiedYArgTermsPrime_39, STATE_VARIABLE_SVarState_1_47, &STATE_VARIABLE_SVarState_3_54, STATE_VARIABLE_UrInfo_1_48, &STATE_VARIABLE_UrInfo_3_55);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        FunctorName_38 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(YAtom_63, (MR_String) "__");
        MaybeQualifiedYArgTermsPrime_39 = YArgTerms_29;
        STATE_VARIABLE_UrInfo_3_55 = STATE_VARIABLE_UrInfo_1_48;
        STATE_VARIABLE_SVarState_3_54 = STATE_VARIABLE_SVarState_1_47;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer Arity_41;
      MR_Word Var_57;
      MR_Word Var_58;

      STATE_VARIABLE_UrInfo_4_59 = STATE_VARIABLE_UrInfo_3_55;
      STATE_VARIABLE_SVarState_4_60 = STATE_VARIABLE_SVarState_3_54;
      MaybeQualifiedYArgTerms_40 = MaybeQualifiedYArgTermsPrime_39;
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), MaybeQualifiedYArgTerms_40, &Arity_41);
      Var_58 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (FunctorName_38));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (Arity_41));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) (Var_58));
      }
      ConsId_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_57)));
    }
    else
    {
      hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(YFunctor_17, YArgTerms_29, YFunctorContext_19, &ConsId_42, STATE_VARIABLE_UrInfo_1_48, &STATE_VARIABLE_UrInfo_4_59);
      MaybeQualifiedYArgTerms_40 = YArgTerms_29;
      STATE_VARIABLE_SVarState_4_60 = STATE_VARIABLE_SVarState_1_47;
    }
    hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(XVar_16, ConsId_42, MaybeQualifiedYArgTerms_40, YFunctorContext_19, Context_20, MainContext_21, SubContext_22, Purity_23, AncestorVarMap_25, Expansion_26, STATE_VARIABLE_SVarState_4_60, STATE_VARIABLE_SVarState_44, STATE_VARIABLE_UrInfo_4_59, STATE_VARIABLE_UrInfo_46);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_expr_11_p_0(
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
    ContextPieces_27 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[58]))));
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
  hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_5_p_0(PurityPFArgsDetTerm_17, MaybeDCGVars_24, &MaybeLambdaHead_37, STATE_VARIABLE_UrInfo_2_46, &STATE_VARIABLE_UrInfo_3_47);
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

    hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0(XVar_12, Purity_13, Context_14, MainContext_15, SubContext_16, LambdaHead_39, MaybeBodyGoal_23, Expansion_19, SVarState_20, STATE_VARIABLE_UrInfo_3_47, STATE_VARIABLE_UrInfo_41);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_9 = STATE_VARIABLE_UrInfo_0_8;
    *STATE_VARIABLE_SVarState_7 = STATE_VARIABLE_SVarState_0_6;
  }
  else
  {
    MR_Word HeadXVarYTermArgContext_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailXVarsYTermsArgContexts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadXVar_27 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 0))));
    MR_Word HeadYTerm_28 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 1))));
    MR_Integer HeadArgNumber_29 = ((MR_Integer) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 2))));
    MR_Word HeadArgContext_30 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 3))));
    MR_Word HeadExpansion_31;
    MR_Word TailExpansions_32;
    MR_Word STATE_VARIABLE_SVarState_1_37;
    MR_Word STATE_VARIABLE_UrInfo_1_38;
    MR_Word STATE_VARIABLE_UrInfo_1_48;

    hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(HeadVar__4_4, HeadXVar_27, STATE_VARIABLE_UrInfo_0_8, &STATE_VARIABLE_UrInfo_1_48);
    if (((MR_tag((MR_Word) HeadYTerm_28)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_45 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 0))));
      MR_Word YArgTerms_46 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 1))));
      MR_Word YFunctorContext_47 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 2))));
      MR_Word MainContext_53;
      MR_Word SubContext_54;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadArgContext_30, HeadArgNumber_29, &MainContext_53, &SubContext_54);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(HeadXVar_27, YFunctor_45, YArgTerms_46, YFunctorContext_47, HeadVar__2_2, MainContext_53, SubContext_54, (MR_Integer) 0, HeadVar__4_4, &HeadExpansion_31, STATE_VARIABLE_SVarState_0_6, &STATE_VARIABLE_SVarState_1_37, STATE_VARIABLE_UrInfo_1_48, &STATE_VARIABLE_UrInfo_1_38);
    }
    else
    {
      MR_Word YVar_39 = ((MR_Word) ((MR_hl_field(1, HeadYTerm_28, 0))));
      MR_Word YVarContext_40 = ((MR_Word) ((MR_hl_field(1, HeadYTerm_28, 1))));
      MR_Word GoalCord_41;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (HeadXVar_27)), ((MR_Box) (YVar_39)));
      if (succeeded)
        GoalCord_41 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      else
      {
        MR_Word MainContext_42;
        MR_Word SubContext_43;
        MR_Word Goal_44;
        MR_Word Var_49;

        hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadArgContext_30, HeadArgNumber_29, &MainContext_42, &SubContext_43);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (YVar_39));
        }
        hlds__make_goal__create_atomic_complicated_unification_7_p_0(HeadXVar_27, Var_49, YVarContext_40, MainContext_42, SubContext_43, (MR_Integer) 0, &Goal_44);
        GoalCord_41 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_44)));
      }
      {
        HeadExpansion_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadExpansion_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, HeadExpansion_31, 1) = ((MR_Box) (GoalCord_41));
      }
      STATE_VARIABLE_SVarState_1_37 = STATE_VARIABLE_SVarState_0_6;
      STATE_VARIABLE_UrInfo_1_38 = STATE_VARIABLE_UrInfo_1_48;
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(TailXVarsYTermsArgContexts_20, HeadVar__2_2, HeadVar__4_4, &TailExpansions_32, STATE_VARIABLE_SVarState_1_37, STATE_VARIABLE_SVarState_7, STATE_VARIABLE_UrInfo_1_38, STATE_VARIABLE_UrInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadExpansion_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailExpansions_32));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_SVarState_0_10,
  MR_Word * STATE_VARIABLE_SVarState_11,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_13 = STATE_VARIABLE_UrInfo_0_12;
    *STATE_VARIABLE_SVarState_11 = STATE_VARIABLE_SVarState_0_10;
  }
  else
  {
    MR_Word YTerm_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word YTerms_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word XVar_34;
    MR_Word XVars_35;
    MR_Word Expansion_36;
    MR_Word Expansions_37;
    MR_Word STATE_VARIABLE_UrInfo_1_45;
    MR_Word STATE_VARIABLE_SeenXVars_1_46;
    MR_Word STATE_VARIABLE_SVarState_1_47;
    MR_Word STATE_VARIABLE_UrInfo_2_48;
    MR_Integer Var_49;
    MR_Word STATE_VARIABLE_UrInfo_1_65;
    MR_Word ArgVar_53;
    MR_Word TypeInfo_14_55;

    succeeded = ((MR_tag((MR_Word) YTerm_26)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgVar_53 = ((MR_Word) ((MR_hl_field(1, YTerm_26, 0))));
      TypeInfo_14_55 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_14_55, ((MR_Box) (ArgVar_53)), HeadVar__6_6);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      XVar_34 = ArgVar_53;
      STATE_VARIABLE_UrInfo_1_45 = STATE_VARIABLE_UrInfo_0_12;
    }
    else
      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&XVar_34, STATE_VARIABLE_UrInfo_0_12, &STATE_VARIABLE_UrInfo_1_45);
    {
      STATE_VARIABLE_SeenXVars_1_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_SeenXVars_1_46, 0) = ((MR_Box) (XVar_34));
      MR_hl_field(1, STATE_VARIABLE_SeenXVars_1_46, 1) = ((MR_Box) (HeadVar__6_6));
    }
    hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(HeadVar__7_7, XVar_34, STATE_VARIABLE_UrInfo_1_45, &STATE_VARIABLE_UrInfo_1_65);
    if (((MR_tag((MR_Word) YTerm_26)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_62 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 0))));
      MR_Word YArgTerms_63 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 1))));
      MR_Word YFunctorContext_64 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 2))));
      MR_Word MainContext_70;
      MR_Word SubContext_71;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_70, &SubContext_71);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_34, YFunctor_62, YArgTerms_63, YFunctorContext_64, HeadVar__2_2, MainContext_70, SubContext_71, (MR_Integer) 0, HeadVar__7_7, &Expansion_36, STATE_VARIABLE_SVarState_0_10, &STATE_VARIABLE_SVarState_1_47, STATE_VARIABLE_UrInfo_1_65, &STATE_VARIABLE_UrInfo_2_48);
    }
    else
    {
      MR_Word YVar_56 = ((MR_Word) ((MR_hl_field(1, YTerm_26, 0))));
      MR_Word YVarContext_57 = ((MR_Word) ((MR_hl_field(1, YTerm_26, 1))));
      MR_Word GoalCord_58;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_34)), ((MR_Box) (YVar_56)));
      if (succeeded)
        GoalCord_58 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      else
      {
        MR_Word MainContext_59;
        MR_Word SubContext_60;
        MR_Word Goal_61;
        MR_Word Var_66;

        hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_59, &SubContext_60);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (YVar_56));
        }
        hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_34, Var_66, YVarContext_57, MainContext_59, SubContext_60, (MR_Integer) 0, &Goal_61);
        GoalCord_58 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_61)));
      }
      {
        Expansion_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_36, 1) = ((MR_Box) (GoalCord_58));
      }
      STATE_VARIABLE_SVarState_1_47 = STATE_VARIABLE_SVarState_0_10;
      STATE_VARIABLE_UrInfo_2_48 = STATE_VARIABLE_UrInfo_1_65;
    }
    Var_49 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(YTerms_27, HeadVar__2_2, HeadVar__3_3, Var_49, STATE_VARIABLE_SeenXVars_1_46, HeadVar__7_7, &XVars_35, &Expansions_37, STATE_VARIABLE_SVarState_1_47, STATE_VARIABLE_SVarState_11, STATE_VARIABLE_UrInfo_2_48, STATE_VARIABLE_UrInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (XVar_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (XVars_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Expansion_36));
      MR_hl_field(1, base, 1) = ((MR_Box) (Expansions_37));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_11 = STATE_VARIABLE_UrInfo_0_10;
    *STATE_VARIABLE_SVarState_9 = STATE_VARIABLE_SVarState_0_8;
  }
  else
  {
    MR_Word XVar_23;
    MR_Word YTerm_24;
    MR_Word XVarsYTerms_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Expansion_31;
    MR_Word Expansions_32;
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word STATE_VARIABLE_SVarState_1_40;
    MR_Word STATE_VARIABLE_UrInfo_1_41;
    MR_Integer Var_42;
    MR_Word STATE_VARIABLE_UrInfo_1_55;

    XVar_23 = ((MR_Word) ((MR_hl_field(0, Var_39, 0))));
    YTerm_24 = ((MR_Word) ((MR_hl_field(0, Var_39, 1))));
    hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(HeadVar__6_6, XVar_23, STATE_VARIABLE_UrInfo_0_10, &STATE_VARIABLE_UrInfo_1_55);
    if (((MR_tag((MR_Word) YTerm_24)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_52 = ((MR_Word) ((MR_hl_field(0, YTerm_24, 0))));
      MR_Word YArgTerms_53 = ((MR_Word) ((MR_hl_field(0, YTerm_24, 1))));
      MR_Word YFunctorContext_54 = ((MR_Word) ((MR_hl_field(0, YTerm_24, 2))));
      MR_Word MainContext_60;
      MR_Word SubContext_61;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_60, &SubContext_61);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_23, YFunctor_52, YArgTerms_53, YFunctorContext_54, HeadVar__2_2, MainContext_60, SubContext_61, (MR_Integer) 0, HeadVar__6_6, &Expansion_31, STATE_VARIABLE_SVarState_0_8, &STATE_VARIABLE_SVarState_1_40, STATE_VARIABLE_UrInfo_1_55, &STATE_VARIABLE_UrInfo_1_41);
    }
    else
    {
      MR_Word YVar_46 = ((MR_Word) ((MR_hl_field(1, YTerm_24, 0))));
      MR_Word YVarContext_47 = ((MR_Word) ((MR_hl_field(1, YTerm_24, 1))));
      MR_Word GoalCord_48;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_23)), ((MR_Box) (YVar_46)));
      if (succeeded)
        GoalCord_48 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      else
      {
        MR_Word MainContext_49;
        MR_Word SubContext_50;
        MR_Word Goal_51;
        MR_Word Var_56;

        hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_49, &SubContext_50);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (YVar_46));
        }
        hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_23, Var_56, YVarContext_47, MainContext_49, SubContext_50, (MR_Integer) 0, &Goal_51);
        GoalCord_48 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_51)));
      }
      {
        Expansion_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_31, 1) = ((MR_Box) (GoalCord_48));
      }
      STATE_VARIABLE_SVarState_1_40 = STATE_VARIABLE_SVarState_0_8;
      STATE_VARIABLE_UrInfo_1_41 = STATE_VARIABLE_UrInfo_1_55;
    }
    Var_42 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(XVarsYTerms_25, HeadVar__2_2, HeadVar__3_3, Var_42, HeadVar__6_6, &Expansions_32, STATE_VARIABLE_SVarState_1_40, STATE_VARIABLE_SVarState_9, STATE_VARIABLE_UrInfo_1_41, STATE_VARIABLE_UrInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Expansion_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Expansions_32));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaVar_4;

  conv2_LambdaVar_4 = hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaVar_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__make_hlds__superhomogeneous__project_lambda_var_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ArgTerm_4;

  conv0_ArgTerm_4 = hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ArgTerm_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_11_p_0(
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

  hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(LambdaArgs0_25, &LambdaArgs1_29, &Modes_30, STATE_VARIABLE_UrInfo_0_77, &STATE_VARIABLE_UrInfo_1_79);
  VarSet0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_79, 3))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet0_31, &TVarSet_32);
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet0_31, &InstVarSet_33);
  hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0(InstVarSet_33, Context_14, Modes_30, STATE_VARIABLE_UrInfo_1_79, &STATE_VARIABLE_UrInfo_2_80);
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

    ArgTerms1_43 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[7]), LambdaArgs1_29);
    hlds__make_hlds__state_var__svar_prepare_for_lambda_head_9_p_0(Context_14, ArgTerms1_43, &ArgTerms_44, &FinalSVarMap_45, &NewSVars_46, OutsideSVarState_20, &InitialSVarState_47, STATE_VARIABLE_UrInfo_5_83, &STATE_VARIABLE_UrInfo_8_88);
    ModuleInfo0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_8_88, 0))));
    hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(ModuleInfo0_48, LambdaArgs1_29, ArgTerms_44, &NonOutputLambdaVarsArgs_49, &OutputLambdaVarsArgs_50);
    PredFormArity_51 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_44);
    {
      ArgContext_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgContext_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
      MR_hl_field(0, ArgContext_52, 1) = ((MR_Box) (PredFormArity_51));
    }
    HeadBefore0_53 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(NonOutputLambdaVarsArgs_49, Context_14, ArgContext_52, HeadBefore0_53, &HeadBefore_54, InitialSVarState_47, &STATE_VARIABLE_SVarState_2_89, STATE_VARIABLE_UrInfo_8_88, &STATE_VARIABLE_UrInfo_9_90);
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptyRenaming_55);
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 0, EmptyRenaming_55, BodyGoal_36, &Body_56, STATE_VARIABLE_SVarState_2_89, &STATE_VARIABLE_SVarState_3_92, STATE_VARIABLE_UrInfo_9_90, &STATE_VARIABLE_UrInfo_10_93);
    HeadAfter0_57 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(OutputLambdaVarsArgs_50, Context_14, ArgContext_52, HeadAfter0_57, &HeadAfter_58, STATE_VARIABLE_SVarState_3_92, &FinalSVarState_64, STATE_VARIABLE_UrInfo_10_93, &STATE_VARIABLE_UrInfo_11_95);
    LambdaVarsModes_59 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[8]), LambdaArgs1_29);
    LambdaVars_60 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[9]), LambdaArgs1_29);
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
    hlds__make_hlds__state_var__svar_finish_lambda_body_9_p_0(Context_14, NewSVars_46, FinalSVarMap_45, Var_128, &HLDS_Goal0_65, InitialSVarState_47, FinalSVarState_64, STATE_VARIABLE_UrInfo_11_95, STATE_VARIABLE_UrInfo_78);
    switch (PredOrFunc_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box conv3__ReturnValTerm_67;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_44, &QuantifiedArgTerms_66, &conv3__ReturnValTerm_67);
        }
        break;
      case (MR_Integer) 0:
        QuantifiedArgTerms_66 = ArgTerms_44;
        break;
    }
    mercury__term_vars__vars_in_terms_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedArgTerms_66, &QuantifiedVars0_68);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), QuantifiedVars0_68, &QuantifiedVars_69);
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(
  MR_Word XVar_15,
  MR_Word ConsId_16,
  MR_Word MaybeQualifiedYArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_39,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_UrInfo_0_42,
  MR_Word * STATE_VARIABLE_UrInfo_43)
{
  if ((MaybeQualifiedYArgTerms_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RHS_27;
    MR_Word QualInfo0_28;
    MR_Word FunctorGoal_29;
    MR_Word QualInfo_30;
    MR_Word Goal_31;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_85;
    MR_Integer Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;

    {
      RHS_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_27, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(1, RHS_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    QualInfo0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 2))));
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_27, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_29, QualInfo0_28, &QualInfo_30);
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 0))));
    Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 1))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 3))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 4))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_43 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_30));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_90));
    }
    hlds__hlds_goal__goal_set_purity_3_p_0(Purity_22, FunctorGoal_29, &Goal_31);
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (XVar_15));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_49 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_31)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
    }
    *STATE_VARIABLE_SVarState_41 = STATE_VARIABLE_SVarState_0_40;
  }
  else
  {
    MR_Word ArgContext_34;
    MR_Word STATE_VARIABLE_AncestorVarMap_1_50;

    {
      ArgContext_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_34, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(2, ArgContext_34, 1) = ((MR_Box) (MainContext_20));
      MR_hl_field(2, ArgContext_34, 2) = ((MR_Box) (SubContext_21));
    }
    hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(STATE_VARIABLE_UrInfo_0_42, XVar_15, ConsId_16, Context_19, STATE_VARIABLE_AncestorVarMap_0_39, &STATE_VARIABLE_AncestorVarMap_1_50);
    switch (Purity_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Goal0_38;
          MR_Word STATE_VARIABLE_UrInfo_4_63;
          MR_Word Var_67;
          MR_Word RHS_72;
          MR_Word QualInfo0_73;
          MR_Word FunctorGoal_74;
          MR_Word QualInfo_75;
          MR_Word Goal_76;
          MR_Word YVars_77;
          MR_Word ArgExpansions_78;
          MR_Word GoalInfo_79;
          MR_Word Var_107;
          MR_Integer Var_108;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_112;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(MaybeQualifiedYArgTerms_17, YFunctorContext_18, ArgContext_34, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_1_50, &YVars_77, &ArgExpansions_78, STATE_VARIABLE_SVarState_0_40, STATE_VARIABLE_SVarState_41, STATE_VARIABLE_UrInfo_0_42, &STATE_VARIABLE_UrInfo_4_63);
          {
            RHS_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_72, 0) = ((MR_Box) (ConsId_16));
            MR_hl_field(1, RHS_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_72, 2) = ((MR_Box) (YVars_77));
          }
          QualInfo0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 2))));
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_72, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_74, QualInfo0_73, &QualInfo_75);
          Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 0))));
          Var_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 1))));
          Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 3))));
          Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 4))));
          Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_UrInfo_43 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_108));
            MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_75));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_110));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_112));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_79);
          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_43, GoalInfo_79, ArgExpansions_78, FunctorGoal_74, &Goal0_38);
          hlds__hlds_goal__goal_set_purity_3_p_0(Purity_22, Goal0_38, &Goal_76);
          Var_67 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_76)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Expansion_24 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_67));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word YVars_35;
          MR_Word ArgExpansions_36;
          MR_Word GoalInfo_37;
          MR_Word STATE_VARIABLE_UrInfo_2_55;
          MR_Word RHS_68;
          MR_Word QualInfo0_69;
          MR_Word FunctorGoal_70;
          MR_Word QualInfo_71;
          MR_Word Var_96;
          MR_Integer Var_97;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_101;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(MaybeQualifiedYArgTerms_17, YFunctorContext_18, ArgContext_34, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_1_50, &YVars_35, &ArgExpansions_36, STATE_VARIABLE_SVarState_0_40, STATE_VARIABLE_SVarState_41, STATE_VARIABLE_UrInfo_0_42, &STATE_VARIABLE_UrInfo_2_55);
          {
            RHS_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_68, 0) = ((MR_Box) (ConsId_16));
            MR_hl_field(1, RHS_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_68, 2) = ((MR_Box) (YVars_35));
          }
          QualInfo0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 2))));
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_68, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_70, QualInfo0_69, &QualInfo_71);
          Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 0))));
          Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 1))));
          Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 3))));
          Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 4))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 5))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_UrInfo_43 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_97));
            MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_71));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_99));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_100));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_101));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_37);
          hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(*STATE_VARIABLE_UrInfo_43, GoalInfo_37, XVar_15, FunctorGoal_70, (MR_Integer) 1, ArgExpansions_36, Expansion_24);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(
  MR_Word XVarsArgTerms0_10,
  MR_Word Context_11,
  MR_Word ArgContext_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_SVarState_0_22,
  MR_Word * STATE_VARIABLE_SVarState_23,
  MR_Word STATE_VARIABLE_UrInfo_0_24,
  MR_Word * STATE_VARIABLE_UrInfo_25)
{
  MR_Word XVarsArgTerms_17;
  MR_Word AncestorVarMap_18;
  MR_Word Expansions_19;
  MR_Word GoalInfo0_21;
  MR_Word STATE_VARIABLE_SVarState_1_26;
  MR_Word STATE_VARIABLE_UrInfo_1_27;
  MR_Word BaseGoals_32;
  MR_Word ExpansionGoalCords_33;
  MR_Word ExpansionGoals_34;
  MR_Word Var_35;
  MR_Word Var_36;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(XVarsArgTerms0_10, &XVarsArgTerms_17, STATE_VARIABLE_SVarState_0_22, &STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_UrInfo_0_24, &STATE_VARIABLE_UrInfo_1_27);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_18);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(XVarsArgTerms_17, Context_11, ArgContext_12, (MR_Integer) 1, AncestorVarMap_18, &Expansions_19, STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_SVarState_23, STATE_VARIABLE_UrInfo_1_27, STATE_VARIABLE_UrInfo_25);
  GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_13, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_13, &BaseGoals_32);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (*STATE_VARIABLE_UrInfo_25));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (GoalInfo0_21));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_35, Expansions_19, &ExpansionGoalCords_33);
  ExpansionGoals_34 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_33);
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_34, BaseGoals_32);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_36, GoalInfo0_21, Goal_14);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Arg_6)) == (MR_Integer) 1);
  MR_Word ArgVar_10;
  MR_Word TypeInfo_14_14;

  if (succeeded)
  {
    ArgVar_10 = ((MR_Word) ((MR_hl_field(1, Arg_6, 0))));
    TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
    succeeded = mercury__list__member_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgVar_10)), Vars0_8);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    *Var_7 = ArgVar_10;
    *STATE_VARIABLE_UrInfo_13 = STATE_VARIABLE_UrInfo_0_12;
  }
  else
    hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(Var_7, STATE_VARIABLE_UrInfo_0_12, STATE_VARIABLE_UrInfo_13);
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_4;

  conv0_Mode_4 = hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Mode_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_5_p_0(
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
        hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0((MR_Integer) 0, LambdaArgs0_6, LambdaArgs_7, Modes_8, MQInfo0_13, &MQInfo_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
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
        *Modes_8 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[6]), *LambdaArgs_7);
        *STATE_VARIABLE_UrInfo_18 = STATE_VARIABLE_UrInfo_0_17;
      }
      break;
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
    hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_8_p_0(HeadVar__1_1, LambdaArgs0_18, &LambdaArgs_20, &Modes_22, STATE_VARIABLE_MQInfo_1_36, STATE_VARIABLE_MQInfo_6, STATE_VARIABLE_Specs_1_37, STATE_VARIABLE_Specs_8);
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
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.partition_args_and_lambda_vars\'/5", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.partition_args_and_lambda_vars\'/5", (MR_String) "mismatched lists");
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

      hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(ModuleInfo_1, Var_38, ArgTerms_25, &InputLambdaVarsArgTermsTail_28, &OutputLambdaVarsArgTermsTail_29);
      LambdaVar_32 = ((MR_Word) ((MR_hl_field(0, Var_39, 2))));
      Mode_35 = ((MR_Word) ((MR_hl_field(0, Var_39, 4))));
      {
        LambdaVarArgTerm_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LambdaVarArgTerm_37, 0) = ((MR_Box) (LambdaVar_32));
        MR_hl_field(0, LambdaVarArgTerm_37, 1) = ((MR_Box) (ArgTerm_24));
      }
      succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_35, &Var_40, &Var_41);
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
hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_48;

  conv0_HeadVar__3_48 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__warn_about_any_inconsistent_inst_vars__2154__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_48));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0(
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
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_7[0]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__warn_about_any_inconsistent_inst_vars_5_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (InstVarSet_6));
    }
    VarPieces_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, InconsistentVars_10);
    conv1_Var_24 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InconsistentVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
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
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[121])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    Var_29 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_13);
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[123])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_28);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.warn_about_any_inconsistent_inst_vars\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_15, STATE_VARIABLE_UrInfo_0_16, STATE_VARIABLE_UrInfo_17);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_5_p_0(
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
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(GenericPurityPFArgsDetTerm_10, &LambdaPurity_11, &PFArgsDetTerm_12);
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

    hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(VarSet0_26, DetismTerm_14, &MaybeDetism_27);
    if ((MaybeDCGVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFuncRetArgModeTerm_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LambdaArgs_30;
        MR_Word BadModeSpecs_31;
        MR_Word SVarSpecs_32;
        MR_Word LambdaHead_33;

        hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_18, ArgModeTerms0_20, &LambdaArgs_30, &BadModeSpecs_31, &SVarSpecs_32, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
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

        hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_18, ArgModeTerms0_20, FuncRetArgModeTerm_418, &LambdaArgs_295, &BadModeSpecs_296, &SVarSpecs_297, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
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

          Var_83 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[65])));
          Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[69])));
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_94);
          Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[59])), Var_82);
          {
            Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/5"));
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

            Var_380 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[65])));
            Var_383 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[69])));
            Var_382 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_383, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
            Var_379 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_380, Var_382);
            Pieces_373 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[59])), Var_379);
            {
              Spec_374 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_374, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/5"));
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

            hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(((MR_Box) (Var_426)), ((MR_Box) (ArgModeTerm2_40)), ArgModeTerms3plus_41, &NonDCGArgModeTerms_42, &conv1_DCGModeTerm0_43, &conv0_DCGModeTermN_44);
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
              MR_hl_field(0, DCGArgModeTerm0_51, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[3]));
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
              MR_hl_field(0, DCGArgModeTermN_52, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[3]));
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
            ArgModeTerms_280 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[3]), NonDCGArgModeTerms_42, Var_122);
            hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_18, ArgModeTerms_280, &LambdaArgs_281, &BadModeSpecs_282, &SVarSpecs_283, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
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

        Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[73])));
        Var_143 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[77])));
        Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
        Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[75])), Var_142);
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_137);
        Pieces_299 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[71])), Var_131);
        {
          Spec_300 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_300, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/5"));
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

        hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_345, ArgModeTerms_351, FuncRetArgModeTerm_358, &LambdaArgs_319, &BadModeSpecs_320, &SVarSpecs_321, STATE_VARIABLE_UrInfo_0_65, STATE_VARIABLE_UrInfo_66);
        {
          LambdaHead_322 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaHead_322, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_11) << 2)) | (((((MR_Unsigned) (Groundness_346) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          MR_hl_field(0, LambdaHead_322, 1) = ((MR_Box) (LambdaArgs_319));
          MR_hl_field(0, LambdaHead_322, 2) = ((MR_Box) (BadModeSpecs_320));
          MR_hl_field(0, LambdaHead_322, 3) = ((MR_Box) (SVarSpecs_321));
          MR_hl_field(0, LambdaHead_322, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[4])));
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

        Var_167 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[73])));
        Var_178 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[77])));
        Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_178, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
        Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[75])), Var_177);
        Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, Var_172);
        Pieces_323 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[71])), Var_166);
        {
          Spec_324 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_324, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/5"));
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

      Var_196 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[81])));
      Var_202 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[83])));
      Var_211 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[85])));
      Var_220 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[87])));
      Var_229 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[89])));
      Var_238 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[91])));
      Var_247 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[93])));
      Var_246 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_247, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[104])));
      Var_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])), Var_246);
      Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_238, Var_242);
      Var_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])), Var_237);
      Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_229, Var_233);
      Var_224 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])), Var_228);
      Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_220, Var_224);
      Var_215 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])), Var_219);
      Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_211, Var_215);
      Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])), Var_210);
      Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, Var_206);
      Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_196, Var_201);
      Pieces_341 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[79])), Var_195);
      Context_340 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PFArgsDetTerm_12);
      {
        Spec_342 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_342, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/5"));
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
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
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
    MR_Box Element3_13 = (MR_hl_field(1, Elements3plus_9, 0));
    MR_Word Elements4plus_14 = ((MR_Word) ((MR_hl_field(1, Elements3plus_9, 1))));
    MR_Word MainTail_15;

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(Element2_8, Element3_13, Elements4plus_14, &MainTail_15, LastButOne_11, Last_12);
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
hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(
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
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[120])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[59])), Var_20);
    Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_5);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_detism\'/3"));
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
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__add_some_not_all_args_have_modes_error__1715__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(
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

  hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_9, LambdaArgs_10, (MR_Integer) 1, &Var_14, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_2_29, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SVarSpecs_22, STATE_VARIABLE_UrInfo_0_23, STATE_VARIABLE_UrInfo_24);
  hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_10, &PresentArgs_15, &AbsentArgs_16);
  if ((AbsentArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_BadModeSpecs_21 = STATE_VARIABLE_BadModeSpecs_2_29;
  else
  if ((PresentArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_30;
    MR_Word Spec_31;
    MR_Word Var_36;
    MR_Word Var_37;

    Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[115])));
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
    Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[113])), Var_36);
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_pred_no_args_have_modes_error\'/3"));
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

    AbsentArgPieces_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[5]), AbsentArgs_16);
    AbsentArgsDotPieces_50 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])), AbsentArgPieces_49);
    Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[108])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AbsentArgsDotPieces_50, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[111])), Var_63);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_61);
    Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[106])), Var_58);
    {
      Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_some_not_all_args_have_modes_error\'/4"));
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
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__add_some_not_all_args_have_modes_error__1715__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(
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

  hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0((MR_Integer) 0, ArgModeTerms_10, &OrdinaryLambdaArgs_16, (MR_Integer) 1, &ResultArgNum_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_BadModeSpecs_2_34, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_SVarSpecs_2_35, STATE_VARIABLE_UrInfo_0_28, &STATE_VARIABLE_UrInfo_1_36);
  hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0((MR_Integer) 1, FuncRetArgModeTerm_11, &FuncRetLambdaArg_18, ResultArgNum_17, &Var_19, STATE_VARIABLE_BadModeSpecs_2_34, &STATE_VARIABLE_BadModeSpecs_3_38, STATE_VARIABLE_SVarSpecs_2_35, STATE_VARIABLE_SVarSpecs_27, STATE_VARIABLE_UrInfo_1_36, STATE_VARIABLE_UrInfo_29);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (FuncRetLambdaArg_18));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *LambdaArgs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), OrdinaryLambdaArgs_16, Var_41);
  hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(*LambdaArgs_12, &PresentArgs_20, &AbsentArgs_21);
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

    AbsentArgPieces_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[4]), AbsentArgs_21);
    AbsentArgsDotPieces_45 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])), AbsentArgPieces_44);
    Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[108])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AbsentArgsDotPieces_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[111])), Var_58);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_56);
    Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[106])), Var_53);
    {
      Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_some_not_all_args_have_modes_error\'/4"));
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
hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(
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

    hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(HeadVar__1_1, HeadArgModeTerm_26, &HeadLambdaArg_28, STATE_VARIABLE_ArgNum_0_4, &STATE_VARIABLE_ArgNum_1_42, STATE_VARIABLE_BadModeSpecs_0_6, &STATE_VARIABLE_BadModeSpecs_1_43, STATE_VARIABLE_SVarSpecs_0_8, &STATE_VARIABLE_SVarSpecs_1_44, STATE_VARIABLE_UrInfo_0_10, &STATE_VARIABLE_UrInfo_1_45);
    hlds__make_hlds__superhomogeneous__parse_lambda_args_11_p_0(HeadVar__1_1, TailArgModeTerms_27, &TailLambdaArgs_29, STATE_VARIABLE_ArgNum_1_42, STATE_VARIABLE_ArgNum_5, STATE_VARIABLE_BadModeSpecs_1_43, STATE_VARIABLE_BadModeSpecs_7, STATE_VARIABLE_SVarSpecs_1_44, STATE_VARIABLE_SVarSpecs_9, STATE_VARIABLE_UrInfo_1_45, STATE_VARIABLE_UrInfo_11);
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
hlds__make_hlds__superhomogeneous__parse_lambda_arg_11_p_0(
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
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[118])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[116])));
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
    MR_Word LambdaArg_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word LambdaArgs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word PresentArgsTail_8;
    MR_Word AbsentArgsTail_9;
    MR_Word PresentOrAbsent_10;

    hlds__make_hlds__superhomogeneous__classify_lambda_arg_modes_present_absent_3_p_0(LambdaArgs_5, &PresentArgsTail_8, &AbsentArgsTail_9);
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansion_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10)
{
  MR_Word BaseGoals_11;
  MR_Word ExpansionGoalCord_12;
  MR_Word ExpansionGoals_13;
  MR_Word Var_14;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_9, &BaseGoals_11);
  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(UrInfo_6, GoalInfo_7, Expansion_8, &ExpansionGoalCord_12);
  ExpansionGoals_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_12);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_13, BaseGoals_11);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_14, GoalInfo_7, Goal_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * MaybeWrappedGoalCord_8)
{
  MR_bool succeeded;
  MR_Word MaybeFGTI_9 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 0))));
  MR_Word GoalCord_10 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 1))));
  MR_Word TermVar_11;
  MR_Integer Size_12;
  MR_Integer Var_21;

  succeeded = (MaybeFGTI_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TermVar_11 = ((MR_Word) ((MR_hl_field(1, MaybeFGTI_9, 0))));
    Size_12 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_9, 1))));
    Var_21 = ((MR_Integer) ((MR_hl_field(0, UrInfo_5, 1))));
    succeeded = (Size_12 >= Var_21);
  }
  if (succeeded)
  {
    MR_Word Goals_13;
    MR_Word MarkedGoalInfo_14;
    MR_Word MarkedGoals_15;
    MR_Word ConjGoalExpr_16;
    MR_Word ConjGoal_17;
    MR_Word Reason_18;
    MR_Word ScopeGoalExpr_19;
    MR_Word ScopeGoal_20;
    MR_Word Var_22;

    Goals_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCord_10);
    Var_22 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_11);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_22, GoalInfo_6, &MarkedGoalInfo_14);
    hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals_13, &MarkedGoals_15);
    {
      ConjGoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConjGoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConjGoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, ConjGoalExpr_16, 2) = ((MR_Box) (MarkedGoals_15));
    }
    {
      ConjGoal_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjGoal_17, 0) = ((MR_Box) (ConjGoalExpr_16));
      MR_hl_field(0, ConjGoal_17, 1) = ((MR_Box) (MarkedGoalInfo_14));
    }
    {
      Reason_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Reason_18, 1) = ((MR_Box) (TermVar_11));
      MR_hl_field(3, Reason_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      ScopeGoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ScopeGoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ScopeGoalExpr_19, 1) = ((MR_Box) (Reason_18));
      MR_hl_field(3, ScopeGoalExpr_19, 2) = ((MR_Box) (ConjGoal_17));
    }
    {
      ScopeGoal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ScopeGoal_20, 0) = ((MR_Box) (ScopeGoalExpr_19));
      MR_hl_field(0, ScopeGoal_20, 1) = ((MR_Box) (MarkedGoalInfo_14));
    }
    *MaybeWrappedGoalCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ScopeGoal_20)));
  }
  else
    *MaybeWrappedGoalCord_8 = GoalCord_10;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word MaybeFGTI_9 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 0))));
  MR_Word ExpansionGoalCord_10 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 1))));
  MR_Word ExpansionGoals_11;

  ExpansionGoals_11 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_10);
  if ((ExpansionGoals_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_28;

    Var_28 = hlds__make_goal__true_goal_expr_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
    }
  }
  else
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, ExpansionGoals_11, 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, ExpansionGoals_11, 0))));

    if ((Var_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExpansionGoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
      MR_Word ExpansionGoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
      MR_Word Context_15;
      MR_Word ExpansionGoalInfo_16;

      Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, ExpansionGoalInfo0_14, &ExpansionGoalInfo_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionGoalExpr_13));
        MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionGoalInfo_16));
      }
    }
    else
    {
      MR_Word TermVar_20;
      MR_Integer Size_21;
      MR_Integer Var_31;

      succeeded = (MaybeFGTI_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermVar_20 = ((MR_Word) ((MR_hl_field(1, MaybeFGTI_9, 0))));
        Size_21 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_9, 1))));
        Var_31 = ((MR_Integer) ((MR_hl_field(0, UrInfo_5, 1))));
        succeeded = (Size_21 >= Var_31);
      }
      if (succeeded)
      {
        MR_Word MarkedGoalInfo_22;
        MR_Word MarkedGoals_23;
        MR_Word ConjGoalExpr_24;
        MR_Word ConjGoal_25;
        MR_Word Reason_26;
        MR_Word GoalExpr_27;
        MR_Word Var_32;

        Var_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_20);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_32, GoalInfo_6, &MarkedGoalInfo_22);
        hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(ExpansionGoals_11, &MarkedGoals_23);
        {
          ConjGoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConjGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ConjGoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ConjGoalExpr_24, 2) = ((MR_Box) (MarkedGoals_23));
        }
        {
          ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConjGoal_25, 0) = ((MR_Box) (ConjGoalExpr_24));
          MR_hl_field(0, ConjGoal_25, 1) = ((MR_Box) (MarkedGoalInfo_22));
        }
        {
          Reason_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Reason_26, 1) = ((MR_Box) (TermVar_20));
          MR_hl_field(3, Reason_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          GoalExpr_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, GoalExpr_27, 1) = ((MR_Box) (Reason_26));
          MR_hl_field(3, GoalExpr_27, 2) = ((MR_Box) (ConjGoal_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_27));
          MR_hl_field(0, base, 1) = ((MR_Box) (MarkedGoalInfo_22));
        }
      }
      else
      {
        MR_Word GoalExpr_36;

        {
          GoalExpr_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_36, 2) = ((MR_Box) (ExpansionGoals_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_5;
    MR_Word Goals_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 0))));
    MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 1))));
    MR_Word LHSVar_9;
    MR_Word RHSVars_16;
    MR_Word RHS_10;

    succeeded = ((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      LHSVar_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 0))));
      RHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 1))));
      succeeded = ((MR_tag((MR_Word) RHS_10)) == (MR_Integer) 1);
      if (succeeded)
        RHSVars_16 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
    }
    if (succeeded)
    {
      MR_Word NonLocals_17;
      MR_Word GoalInfo_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (LHSVar_9));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (RHSVars_16));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_17);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_17, GoalInfo0_8, &GoalInfo_18);
      {
        Goal_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_5, 0) = ((MR_Box) (GoalExpr_7));
        MR_hl_field(0, Goal_5, 1) = ((MR_Box) (GoalInfo_18));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
        return;
      }
    hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals0_4, &Goals_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_6));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_UrInfo_0_29,
  MR_Word * STATE_VARIABLE_UrInfo_30)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Functor_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Name_12 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
        MR_Integer Arity_13;
        MR_Word DuCtor_14;
        MR_Word Var_31;
        MR_Word Var_32;

        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_8, &Arity_13);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Name_12));
        }
        Var_32 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          DuCtor_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DuCtor_14, 0) = ((MR_Box) (Var_31));
          MR_hl_field(0, DuCtor_14, 1) = ((MR_Box) (Arity_13));
          MR_hl_field(0, DuCtor_14, 2) = ((MR_Box) (Var_32));
        }
        *ConsId_10 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_14)));
        *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_15 = ((MR_Unsigned) ((MR_hl_field(1, Functor_7, 0))) & (MR_Integer) 3);
        MR_Word Integer_16 = ((MR_Word) ((MR_hl_field(1, Functor_7, 1))));
        MR_Word Signedness_17 = ((((MR_Unsigned) ((MR_hl_field(1, Functor_7, 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_18 = ((MR_Unsigned) ((MR_hl_field(1, Functor_7, 2))) & (MR_Integer) 7);
        MR_Word MaybeConsId_19;

        parse_tree__parse_util__parse_integer_cons_id_6_p_0(Base_15, Integer_16, Signedness_17, Size_18, Context_9, &MaybeConsId_19);
        if (((MR_tag((MR_Word) MaybeConsId_19)) == (MR_Integer) 0))
        {
          MR_Word ConsIdSpecs_20 = ((MR_Word) ((MR_hl_field(0, MaybeConsId_19, 0))));

          hlds__make_hlds__state_var__add_unravel_specs_3_p_0(ConsIdSpecs_20, STATE_VARIABLE_UrInfo_0_29, STATE_VARIABLE_UrInfo_30);
          *ConsId_10 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[35]));
        }
        else
        {
          *ConsId_10 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_19, 0))));
          *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String String_22 = ((MR_String) ((MR_hl_field(2, Functor_7, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, base, 1) = ((MR_Box) (String_22));
        }
        *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Functor_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_21 = MR_unbox_float((MR_hl_field(3, Functor_7, 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsId_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = MR_box_float(Float_21);
            }
            *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Name_104 = ((MR_String) ((MR_hl_field(3, Functor_7, 1))));
            MR_Word IDCKind_23;
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 4;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string simple lookup switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(Name_104, ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                IDCKind_23 = ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_1;
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
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ConsId_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (IDCKind_23));
              }
              *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
            }
            else
            {
              MR_Word ErrorTerm_24;
              MR_Word VarSet_25;
              MR_String TermStr_26;
              MR_Word Pieces_27;
              MR_Word Spec_28;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_51;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_82;
              MR_Word Var_87;
              MR_Word Var_88;

              {
                ErrorTerm_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrorTerm_24, 0) = ((MR_Box) (Functor_7));
                MR_hl_field(0, ErrorTerm_24, 1) = ((MR_Box) (ArgTerms_8));
                MR_hl_field(0, ErrorTerm_24, 2) = ((MR_Box) (Context_9));
              }
              VarSet_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_29, 3))));
              TermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_25, ErrorTerm_24);
              {
                Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_46, 1) = ((MR_Box) (TermStr_26));
              }
              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])));
              }
              Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_45);
              Var_59 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[28])));
              Var_88 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[32])));
              Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
              Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[30])), Var_87);
              Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_82);
              Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[16])), Var_58);
              Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_51);
              Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[11])), Var_43);
              {
                Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_ordinary_cons_id\'/6"));
                MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_9));
                MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
              }
              hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_28, STATE_VARIABLE_UrInfo_0_29, STATE_VARIABLE_UrInfo_30);
              *ConsId_10 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[34]));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word UrInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_19,
  MR_Word * STATE_VARIABLE_AncestorVarMap_20)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 1);
  MR_Word DuCtor_12;
  MR_Word SymName_13;
  MR_Integer Arity_14;
  MR_Integer Var_21;

  if (succeeded)
  {
    DuCtor_12 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 1));
    SymName_13 = ((MR_Word) ((MR_hl_field(0, DuCtor_12, 0))));
    Arity_14 = ((MR_Integer) ((MR_hl_field(0, DuCtor_12, 1))));
    Var_21 = (MR_Integer) 0;
    succeeded = (Arity_14 > Var_21);
    if (succeeded)
    {
      {
        MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, UrInfo_7, 0))));
        MR_Word ConsTable_17;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_16, &ConsTable_17);
        succeeded = hlds__hlds_cons__is_known_data_cons_2_p_0(ConsTable_17, DuCtor_12);
      }
      if (!(succeeded))
      {
        MR_String Var_22;

        succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_22 = ((MR_String) ((MR_hl_field(0, SymName_13, 0))));
          succeeded = (strcmp(Var_22, (MR_String) "{}") == 0);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word _OldContext_18;

    mercury__map__search_insert_5_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (XVar_8)), ((MR_Box) (Context_10)), &_OldContext_18, STATE_VARIABLE_AncestorVarMap_0_19, STATE_VARIABLE_AncestorVarMap_20);
  }
  else
    *STATE_VARIABLE_AncestorVarMap_20 = STATE_VARIABLE_AncestorVarMap_0_19;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_GoalCord_4;

  hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_GoalCord_4));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(
  MR_Word UrInfo_8,
  MR_Word GoalInfo_9,
  MR_Word TermVar_10,
  MR_Word BaseGoal_11,
  MR_Integer BaseGoalSize_12,
  MR_Word ArgExpansions_13,
  MR_Word * Expansion_14)
{
  MR_Word AllFGTI_15;
  MR_Integer TotalSize_16;

  hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(ArgExpansions_13, (MR_Integer) 1, &AllFGTI_15, BaseGoalSize_12, &TotalSize_16);
  switch (AllFGTI_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ArgGoalCords_17;
        MR_Word ArgGoalsCord_18;
        MR_Word GoalCord_19;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (UrInfo_8));
          MR_hl_field(0, Var_21, 4) = ((MR_Box) (GoalInfo_9));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_21, ArgExpansions_13, &ArgGoalCords_17);
        ArgGoalsCord_18 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_17);
        GoalCord_19 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_11)), ArgGoalsCord_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Expansion_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_19));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24;
        MR_Word ArgGoalCords_25;
        MR_Word ArgGoalsCord_26;
        MR_Word GoalCord_27;

        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[3]), ArgExpansions_13, &ArgGoalCords_25);
        ArgGoalsCord_26 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_25);
        GoalCord_27 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_11)), ArgGoalsCord_26);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (TermVar_10));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (TotalSize_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Expansion_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_27));
        }
      }
      break;
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
      MR_Word Expansion_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Expansions_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MaybeFGTI_16 = ((MR_Word) ((MR_hl_field(0, Expansion_12, 0))));
      MR_Word STATE_VARIABLE_AllFGTI_1_24;
      MR_Integer STATE_VARIABLE_TotalSize_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_4;

      if ((MaybeFGTI_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_AllFGTI_1_24 = (MR_Integer) 0;
        STATE_VARIABLE_TotalSize_1_25 = STATE_VARIABLE_TotalSize_0_4;
      }
      else
      {
        MR_Integer Size_19 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_16, 1))));

        STATE_VARIABLE_TotalSize_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_4 + (MR_Unsigned) Size_19);
        STATE_VARIABLE_AllFGTI_1_24 = STATE_VARIABLE_AllFGTI_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Expansions_13;
      next_value_of_STATE_VARIABLE_AllFGTI_0_2 = STATE_VARIABLE_AllFGTI_1_24;
      next_value_of_STATE_VARIABLE_TotalSize_0_4 = STATE_VARIABLE_TotalSize_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AllFGTI_0_2 = next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      STATE_VARIABLE_TotalSize_0_4 = next_value_of_STATE_VARIABLE_TotalSize_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansions_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10)
{
  MR_Word BaseGoals_11;
  MR_Word ExpansionGoalCords_12;
  MR_Word ExpansionGoals_13;
  MR_Word Var_14;
  MR_Word Var_15;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_9, &BaseGoals_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (UrInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (GoalInfo_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_14, Expansions_8, &ExpansionGoalCords_12);
  ExpansionGoals_13 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_12);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_13, BaseGoals_11);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_15, GoalInfo_7, Goal_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__occurs_check_4_p_0(
  MR_Word AncestorVarMap_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17)
{
  MR_bool succeeded;
  MR_Word AncestorContext_8;
  MR_Box conv0_AncestorContext_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_5, ((MR_Box) (Var_6)), &conv0_AncestorContext_8);
  if (succeeded)
  {
    AncestorContext_8 = ((MR_Word) (conv0_AncestorContext_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_16, 0))));
    MR_Word Globals_10;
    MR_Word WarnOccursCheck_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 225, &WarnOccursCheck_11);
    switch (WarnOccursCheck_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_UrInfo_17 = STATE_VARIABLE_UrInfo_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_16, 3))));
          MR_String VarName_13;
          MR_Word Pieces_14;
          MR_Word Spec_15;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_36;
          MR_Word Var_37;

          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, Var_6, &VarName_13);
          {
            Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_29, 1) = ((MR_Box) (VarName_13));
          }
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[126])));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
          }
          Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
          Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[130])));
          Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
          Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[128])), Var_36);
          Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_31);
          Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[125])), Var_23);
          {
            Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.occurs_check\'/4"));
            MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_15, 3) = ((MR_Box) (AncestorContext_8));
            MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
          }
          hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_15, STATE_VARIABLE_UrInfo_0_16, STATE_VARIABLE_UrInfo_17);
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_UrInfo_17 = STATE_VARIABLE_UrInfo_0_16;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(
  MR_Word ArgContext_5,
  MR_Integer ArgNum_6,
  MR_Word * MainContext_7,
  MR_Word * SubContexts_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ArgContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, ArgContext_5, 0))) & (MR_Integer) 1);
        MR_Word PredFormArity_10 = ((MR_Word) ((MR_hl_field(0, ArgContext_5, 1))));
        MR_Integer PredFormArityInt_11;

        succeeded = (PredOrFunc_9 == (MR_Integer) 1);
        if (succeeded)
        {
          PredFormArityInt_11 = (MR_Integer) (PredFormArity_10);
          succeeded = (ArgNum_6 == PredFormArityInt_11);
        }
        if (succeeded)
          *MainContext_7 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MainContext_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_6));
          }
        *SubContexts_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(1, ArgContext_5, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MainContext_7 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_12));
          MR_hl_field(2, base, 1) = ((MR_Box) (ArgNum_6));
        }
        *SubContexts_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 0))));
        MR_Word SubContexts0_14;
        MR_Word SubContext_15;

        *MainContext_7 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 1))));
        SubContexts0_14 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 2))));
        {
          SubContext_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubContext_15, 0) = ((MR_Box) (ConsId_13));
          MR_hl_field(0, SubContext_15, 1) = ((MR_Box) (ArgNum_6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SubContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SubContext_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubContexts0_14));
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
    *STATE_VARIABLE_SVarState_4 = STATE_VARIABLE_SVarState_0_3;
  }
  else
  {
    MR_Word UVT0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word UVTs0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word UVT_15;
    MR_Word UVTs_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, UVT0_13, 0))));
    MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(0, UVT0_13, 1))));
    MR_Word Arg_21;
    MR_Word STATE_VARIABLE_SVarState_1_26;
    MR_Word STATE_VARIABLE_UrInfo_1_27;

    hlds__make_hlds__state_var__replace_any_dot_color_state_var_in_term_6_p_0(Arg0_20, &Arg_21, STATE_VARIABLE_SVarState_0_3, &STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_UrInfo_0_5, &STATE_VARIABLE_UrInfo_1_27);
    {
      UVT_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UVT_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, UVT_15, 1) = ((MR_Box) (Arg_21));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(UVTs0_14, &UVTs_16, STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_SVarState_4, STATE_VARIABLE_UrInfo_1_27, STATE_VARIABLE_UrInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UVT_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (UVTs_16));
    }
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.pair_vars_with_terms\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.pair_vars_with_terms\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Term_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word VarTerm_18;
      MR_Word VarsTerms_19;

      {
        VarTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarTerm_18, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, VarTerm_18, 1) = ((MR_Box) (Term_16));
      }
      hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(Var_20, Terms_17, &VarsTerms_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (VarTerm_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (VarsTerms_19));
      }
    }
  }
}

MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__unify_var_term_project_var_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return Var_3;
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____lambda_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____lambda_arg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_arg_mode_presence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____lambda_arg_mode_presence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_body_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____lambda_body_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____lambda_head_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_dcg_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____maybe_dcg_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____unify_var_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____unify_var_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____unify_var_term_num_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____unify_var_term_num_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____unify_var_term_num_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____unify_var_term_num_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__superhomogeneous__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_ancestor_var_map_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_kind_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_mode_presence_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_body_kind_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_head_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_dcg_vars_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_num_context_0);
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
