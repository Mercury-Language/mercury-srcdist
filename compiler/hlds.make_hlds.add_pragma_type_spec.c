/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2025-11-20
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


// :- module hlds.make_hlds.add_pragma_type_spec.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_type_spec__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_type_spec.mih"


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
#include "counter.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0;

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_arg_vector_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0;

static const MR_NotagFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__notag_functor_desc_arg_vector_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_ground_or_tvar_subst_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_ground_or_tvar_subst_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_ground_or_tvar_subst_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_ground_or_tvar_subst_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_ground_or_tvar_subst_0[1];

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_ground_or_tvar_subst_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_ordinal_ordered_is_origin_type_spec_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_name_ordered_is_origin_type_spec_0[2];

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_is_origin_type_spec_0[2];

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_pragma_to_pred_tvar_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_pragma_to_pred_tvar_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_pragma_to_pred_tvar_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_pragma_to_pred_tvar_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_pragma_to_pred_tvar_0[1];

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_pragma_to_pred_tvar_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_subst_soln_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_subst_soln_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_subst_soln_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_subst_soln_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_subst_soln_0[1];

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_subst_soln_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0;

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_23);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__1691__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__1466__1_1_f_0(
  MR_Word LambdaHeadVar__1_66);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1448__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_65);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1420__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_23,
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1407__1_3_p_0(
  MR_Word LambdaHeadVar__1_57,
  MR_Word * LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__588__1_1_f_0(
  MR_Word LambdaHeadVar__1_53);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__582__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__add_pragma_type_spec_constr__155__1_1_f_0(
  MR_String LambdaHeadVar__1_73);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(
  MR_Word TypeSpec_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TSInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TypeSpecInfo0_11,
  MR_Word PredId_12,
  MR_Word SpecPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0(
  MR_Word PredId_15,
  MR_Word PredInfo0_16,
  MR_Word PredFormArity_17,
  MR_Word TSInfo0_18,
  MR_Word TVarSet_19,
  MR_Word Types_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word SpecProcTable0_23,
  MR_Word ApplicableModes_24,
  MR_Word * SpecPredId_25,
  MR_Word * SpecPredStatus_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcTable_12,
  MR_Word TVarSet_13,
  MR_Word Context_14,
  MR_Word PFUMM0_15,
  MR_Word * MaybeSpecProcs_16);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvar_subst_3_p_0(
  MR_Word Renaming_4,
  MR_Word VoGTVarSubst_5,
  MR_Word * PragmaTVarSubst_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_pragma_to_pred_tvar_map_3_p_0(
  MR_Word PragmaToPred_4,
  MR_Word STATE_VARIABLE_PragmaToPredMap_0_8,
  MR_Word * STATE_VARIABLE_PragmaToPredMap_9);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_spec_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word PragmaTVarSet_11,
  MR_Word PredInfo_12,
  MR_Word Soln_13,
  MR_Word TypeSubst_14,
  MR_Word STATE_VARIABLE_Pragmas_0_46,
  MR_Word * STATE_VARIABLE_Pragmas_47);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word PragmaTVarSet_11,
  MR_Word PredInfo_12,
  MR_Word OoMTypeSubsts_13,
  MR_Word Soln_14,
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0(
  MR_Word PragmaModuleName_10,
  MR_Word PredInfo_12,
  MR_Word Soln_13,
  MR_Word TypeSubst_14,
  MR_Word STATE_VARIABLE_Pragmas_0_46,
  MR_Word * STATE_VARIABLE_Pragmas_47);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvarset_components_9_p_0(
  MR_Word PredTVarSet_1,
  MR_Word RevTVarMap_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_PragmaNumTVars_0_4,
  MR_Integer * STATE_VARIABLE_PragmaNumTVars_5,
  MR_Word STATE_VARIABLE_PragmaTVarNames_0_6,
  MR_Word * STATE_VARIABLE_PragmaTVarNames_7,
  MR_Word STATE_VARIABLE_Renaming_0_8,
  MR_Word * STATE_VARIABLE_Renaming_9);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_type_vars_in_tvar_substs_5_p_0(
  MR_Word PragmaToPredMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_TVars_0_4,
  MR_Word * STATE_VARIABLE_TVars_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__acc_class_ground_substs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word PragmaTVarSet_9,
  MR_Word PredTVarSet_10,
  MR_Word ClassConstraintMap_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_SolnsMap_0_18,
  MR_Word * STATE_VARIABLE_SolnsMap_19);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_99_108_97_115_115_95_103_114_111_117_110_100_95_115_117_98_115_116_115_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(
  MR_Word ClassConstraintMap_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_SolnsMap_0_18,
  MR_Word * STATE_VARIABLE_SolnsMap_19);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word ClassId_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_SolnsMap_0_7,
  MR_Word * STATE_VARIABLE_SolnsMap_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__is_matching_arg_vector_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4,
  MR_Word STATE_VARIABLE_RevTVarMap_0_5,
  MR_Word * STATE_VARIABLE_RevTVarMap_6);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word ClassConstraintMap_11,
  MR_Word PragmaTVarSet_12,
  MR_Word OoMTypeSubsts_13,
  MR_Word PredInfo_14,
  MR_Word STATE_VARIABLE_Pragmas_0_29,
  MR_Word * STATE_VARIABLE_Pragmas_30);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_108_108_95_103_114_111_117_110_100_95_115_117_98_115_116_95_99_111_109_98_105_110_97_116_105_111_110_115_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word HeadVar__4_4,
  MR_Word TailClassIdsSubstSolns_12,
  MR_Word * FinalSubstSet_13);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_outer_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnifiedSolns_0_3,
  MR_Word * STATE_VARIABLE_UnifiedSolns_4);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_inner_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnifiedSolns_0_3,
  MR_Word * STATE_VARIABLE_UnifiedSolns_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__no_pragma_tvar_is_double_mapped_2_p_0(
  MR_Word Head_3,
  MR_Word Tail_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(
  MR_Word TVarSubstsA_4,
  MR_Word TVarSubstsB_5,
  MR_Word * UnifiedSubst_6);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__is_pred_origin_type_spec_1_f_0(
  MR_Word Origin_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ClassTable_10,
  MR_Word PragmaTVarSet_11,
  MR_Word Context_12,
  MR_Word Subst0_13,
  MR_Word Constraint_14,
  MR_Word STATE_VARIABLE_ClassConstraintMap_0_28,
  MR_Word * STATE_VARIABLE_ClassConstraintMap_29);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__compute_superclass_arg_types_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ClassTable_11,
  MR_Word ApplyToSupers_12,
  MR_Word PragmaTVarSet_13,
  MR_Word Constraint_14,
  MR_Word STATE_VARIABLE_ClassConstraintMap_0_33,
  MR_Word * STATE_VARIABLE_ClassConstraintMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_1[64][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_2[17][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_5[5][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_6[7][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_7[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_8[7][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_9[2][10];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_10[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_1[64][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the compiler generated"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "For this type_spec_constrained_preds pragma,"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no type_spec pragmas."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this type_spec pragma:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "these type_spec pragmas:"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a type class named"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the constraint list references"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "type_spec_constrained_preds"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the first argument of a"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with this name and arity."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there is no visible type class"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the substitution includes the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_2[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4])),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4])),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_9[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[4])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[5])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[6])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 693U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_apply_to_supers_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_5[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_6[7][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_7[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_8[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_9[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_item__type_ctor_info_var_or_ground_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0) }
};

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_arg_vector_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0) }
};

static const MR_NotagFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__notag_functor_desc_arg_vector_0 = {
  (MR_String) "arg_vector",
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "arg_vector",
  { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__notag_functor_desc_arg_vector_0 },
  { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__notag_functor_desc_arg_vector_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_arg_vector_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_class_solns_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "class_solns_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_ground_or_tvar_subst_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_ground_or_tvar_subst_0_0 = {
  (MR_String) "ground_or_tvar_subst",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_ground_or_tvar_subst_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_ground_or_tvar_subst_0_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_ground_or_tvar_subst_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_ground_or_tvar_subst_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_ground_or_tvar_subst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_ground_or_tvar_subst_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_ground_or_tvar_subst_0_0 };

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_ground_or_tvar_subst_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "ground_or_tvar_subst",
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_ground_or_tvar_subst_0 },
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_ground_or_tvar_subst_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_ground_or_tvar_subst_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_0 = {
  (MR_String) "origin_is_not_type_spec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_1 = {
  (MR_String) "origin_is_type_spec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_ordinal_ordered_is_origin_type_spec_0[2] = {
  &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_0,
  &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_name_ordered_is_origin_type_spec_0[2] = {
  &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_0,
  &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_functor_desc_is_origin_type_spec_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_is_origin_type_spec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_is_origin_type_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "is_origin_type_spec",
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_name_ordered_is_origin_type_spec_0 },
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__enum_ordinal_ordered_is_origin_type_spec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_is_origin_type_spec_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_pragma_to_pred_tvar_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_pragma_to_pred_tvar_0_0 = {
  (MR_String) "pragma_to_pred_tvar",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_pragma_to_pred_tvar_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_pragma_to_pred_tvar_0_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_pragma_to_pred_tvar_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_pragma_to_pred_tvar_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_pragma_to_pred_tvar_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_pragma_to_pred_tvar_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_pragma_to_pred_tvar_0_0 };

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_pragma_to_pred_tvar_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "pragma_to_pred_tvar",
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_pragma_to_pred_tvar_0 },
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_pragma_to_pred_tvar_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_pragma_to_pred_tvar_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_subst_soln_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__ti_set_ordlist_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_subst_soln_0_0 = {
  (MR_String) "subst_soln",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__field_types_subst_soln_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_subst_soln_0_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_subst_soln_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_subst_soln_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_stag_ordered_subst_soln_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_subst_soln_0[1] = { &hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_functor_desc_subst_soln_0_0 };

static const MR_Integer hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_subst_soln_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "subst_soln",
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_name_ordered_subst_soln_0 },
  { hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__du_ptag_ordered_subst_soln_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__functor_number_map_subst_soln_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__make_hlds__add_pragma_type_spec__one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_type_spec_constraint_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_type_spec",
  (MR_String) "type_spec_constraint_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0one_or_more__ti_one_or_more_1hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_23)
{
  MR_Word HeadVar__3_24;

  HeadVar__3_24 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_6, HeadVar__2_23);
  return HeadVar__3_24;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__1691__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_46 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_45));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__1466__1_1_f_0(
  MR_Word LambdaHeadVar__1_66)
{
  MR_Word LambdaHeadVar__2_67;
  MR_Word TVar_78 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_66, 0))));
  MR_Word Type_79 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_66, 1))));

  {
    LambdaHeadVar__2_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_67, 0) = ((MR_Box) (TVar_78));
    MR_hl_field(0, LambdaHeadVar__2_67, 1) = ((MR_Box) (Type_79));
  }
  return LambdaHeadVar__2_67;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1448__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_65)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (LambdaHeadVar__1_65)), ExistQVars_38);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1420__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_23,
  MR_Word LambdaHeadVar__1_63)
{
  MR_bool succeeded;
  MR_String VarName_25;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_7, LambdaHeadVar__1_63, &VarName_25);
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), NameVarIndex0_23, ((MR_Box) (VarName_25)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1407__1_3_p_0(
  MR_Word LambdaHeadVar__1_57,
  MR_Word * LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59)
{
  *LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, 0))));
  *LambdaHeadVar__3_59 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, 1))));
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__588__1_1_f_0(
  MR_Word LambdaHeadVar__1_53)
{
  MR_Word LambdaHeadVar__2_54;
  MR_Word Prag_84 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_53, 0))));
  MR_Word Pred_85 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_53, 1))));

  {
    LambdaHeadVar__2_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_54, 0) = ((MR_Box) (Prag_84));
    MR_hl_field(0, LambdaHeadVar__2_54, 1) = ((MR_Box) (Pred_85));
  }
  return LambdaHeadVar__2_54;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__582__1_1_f_0(
  MR_Word LambdaHeadVar__1_51)
{
  MR_Word LambdaHeadVar__2_52;
  MR_Word TV_82 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, 0))));
  MR_Word VoG_83 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, 1))));

  {
    LambdaHeadVar__2_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_52, 0) = ((MR_Box) (TV_82));
    MR_hl_field(0, LambdaHeadVar__2_52, 1) = ((MR_Box) (VoG_83));
  }
  return LambdaHeadVar__2_52;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__add_pragma_type_spec_constr__155__1_1_f_0(
  MR_String LambdaHeadVar__1_73)
{
  MR_Word LambdaHeadVar__2_74;
  MR_Word Var_76;
  MR_Word Var_77;

  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (LambdaHeadVar__1_73));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LambdaHeadVar__2_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_74, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(1, LambdaHeadVar__2_74, 1) = ((MR_Box) (Var_76));
  }
  return LambdaHeadVar__2_74;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[11]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0(
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
hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_item____Compare____var_or_ground_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = parse_tree__prog_item____Unify____var_or_ground_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Integer Var_5;

  Var_5 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Type_4));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5)
{
  MR_Word STATE_VARIABLE_ProcInfo_1_6;

  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_ProcInfo_0_4, &STATE_VARIABLE_ProcInfo_1_6);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_ProcInfo_1_6, STATE_VARIABLE_ProcInfo_5);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(
  MR_Word TypeSpec_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word PFUMM0_14 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 0))));
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 1))));
  MR_Word Subst_17 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 3))));
  MR_Word TVarSet0_18 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 4))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 6))));
  MR_Word PredInfo0_22;
  MR_Word MaybeSubstResult_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_10, &PredInfo0_22);
  hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(PredInfo0_22, TVarSet0_18, Subst_17, Context_20, &MaybeSubstResult_23);
  if (((MR_tag((MR_Word) MaybeSubstResult_23)) == (MR_Integer) 0))
  {
    MR_Word SubstSpecs_44 = ((MR_Word) ((MR_hl_field(0, MaybeSubstResult_23, 0))));

    *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SubstSpecs_44, STATE_VARIABLE_Specs_0_49);
    *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
  }
  else
  {
    MR_Word TVarSet_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 0))));
    MR_Word Types_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 1))));
    MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 2))));
    MR_Word ClassContext_27 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 3))));
    MR_Word RenamedSubst_28 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 4))));
    MR_Word ProcTable0_29;
    MR_Word MaybeSpecProcs_30;
    MR_Word Globals_31;
    MR_Word OptTuple_32;
    MR_Word DoTypeSpec_33;
    MR_Word Smart_34;
    MR_Word SpecProcTable0_35;
    MR_Word ApplicableModes_36;
    MR_Word SpecProcIds_37;
    MR_Word UserArity_38;
    MR_Word PredFormArity_39;
    MR_Word PFUMM_40;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_22, &ProcTable0_29);
    hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_10, PredInfo0_22, ProcTable0_29, TVarSet0_18, Context_20, PFUMM0_14, &MaybeSpecProcs_30);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Globals_31);
    libs__globals__get_opt_tuple_2_p_0(Globals_31, &OptTuple_32);
    DoTypeSpec_33 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_32, 0))) >> 1)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 654, &Smart_34);
    succeeded = ((MR_tag((MR_Word) MaybeSpecProcs_30)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecProcTable0_35 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 0))));
      ApplicableModes_36 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 1))));
      SpecProcIds_37 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 2))));
      UserArity_38 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 3))));
      PredFormArity_39 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 4))));
      PFUMM_40 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 5))));
      succeeded = (DoTypeSpec_33 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_22);
        succeeded = !(succeeded);
        if (!(succeeded))
          succeeded = (Smart_34 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word SpecPredId_41;
      MR_Word SpecPredStatus_42;
      MR_Word PredOrFunc_43;
      MR_Word STATE_VARIABLE_ModuleInfo_1_52;

      hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0(PredId_10, PredInfo0_22, PredFormArity_39, TypeSpec_9, TVarSet_24, Types_25, ExistQVars_26, ClassContext_27, SpecProcTable0_35, ApplicableModes_36, &SpecPredId_41, &SpecPredStatus_42, STATE_VARIABLE_ModuleInfo_0_45, &STATE_VARIABLE_ModuleInfo_1_52);
      hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(TypeSpec_9, PredId_10, SpecPredId_41, SpecPredStatus_42, SpecProcIds_37, RenamedSubst_28, TVarSet_24, PFUMM_40, STATE_VARIABLE_ModuleInfo_1_52, STATE_VARIABLE_ModuleInfo_46);
      PredOrFunc_43 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_22);
      hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(PredOrFunc_43, SymName_15, UserArity_38, SpecPredStatus_42, TypeSpec_9, STATE_VARIABLE_QualInfo_0_47, STATE_VARIABLE_QualInfo_48);
      *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
    }
    else
    {
      MR_Word Var_56;

      Var_56 = parse_tree__maybe_error__get_any_errors6_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[5]), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0), MaybeSpecProcs_30);
      *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_56, STATE_VARIABLE_Specs_0_49);
      *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
      *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  recompilation__record_uses__record_expanded_items_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TSInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21)
{
  MR_Word IsImported_14;

  IsImported_14 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_11);
  switch (IsImported_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_QualInfo_21 = STATE_VARIABLE_QualInfo_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemType_15;
        MR_Integer UserArityInt_16;
        MR_Word ItemName_17;
        MR_Word ItemId_18;
        MR_Word ExpandedItems_19;
        MR_Word Var_22;

        ItemType_15 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_8);
        UserArityInt_16 = (MR_Integer) (UserArity_10);
        {
          ItemName_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemName_17, 0) = ((MR_Box) (SymName_9));
          MR_hl_field(0, ItemName_17, 1) = ((MR_Box) (UserArityInt_16));
        }
        {
          ItemId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemId_18, 0) = (MR_Box) ((MR_Unsigned) (ItemType_15));
          MR_hl_field(0, ItemId_18, 1) = ((MR_Box) (ItemName_17));
        }
        ExpandedItems_19 = ((MR_Word) ((MR_hl_field(0, TSInfo_12, 5))));
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_10[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemId_18));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (ExpandedItems_19));
        }
        hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_22, STATE_VARIABLE_QualInfo_0_20, STATE_VARIABLE_QualInfo_21);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_46;

  hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__1691__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_46);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_46));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TypeSpecInfo0_11,
  MR_Word PredId_12,
  MR_Word SpecPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43)
{
  MR_bool succeeded;
  MR_Word TypeSpecTables0_20;
  MR_Word ProcsToSpec0_21;
  MR_Word ForceVersions0_22;
  MR_Word SpecMap0_23;
  MR_Word PragmaMap0_24;
  MR_Word SpecPredProcIds_27;
  MR_Word ProcsToSpec_28;
  MR_Word ForceVersions_29;
  MR_Word SpecMap_30;
  MR_Word SymName_32;
  MR_Word SpecModuleName_33;
  MR_Word ExpandedItems_36;
  MR_Word Context_37;
  MR_Word SeqNum_38;
  MR_Word TypeSpecInfo_39;
  MR_Word PragmaMap_40;
  MR_Word TypeSpecTables_41;
  MR_Word Var_44;
  MR_Word Var_47;

  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &TypeSpecTables0_20);
  ProcsToSpec0_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 0))));
  ForceVersions0_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 1))));
  SpecMap0_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 2))));
  PragmaMap0_24 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 3))));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[6]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (PredId_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_44, SpecProcIds_15, &SpecPredProcIds_27);
  mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SpecPredProcIds_27, ProcsToSpec0_21, &ProcsToSpec_28);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (SpecPredId_13)), ForceVersions0_22, &ForceVersions_29);
  Var_47 = (MR_Word) (SpecPredStatus_14);
  succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), ((MR_Box) (SpecPredId_13)), SpecMap0_23, &SpecMap_30);
  else
    SpecMap_30 = SpecMap0_23;
  SymName_32 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 1))));
  SpecModuleName_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 2))));
  ExpandedItems_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 5))));
  Context_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 6))));
  SeqNum_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 7))));
  {
    TypeSpecInfo_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecInfo_39, 0) = ((MR_Box) (PFUMM_18));
    MR_hl_field(0, TypeSpecInfo_39, 1) = ((MR_Box) (SymName_32));
    MR_hl_field(0, TypeSpecInfo_39, 2) = ((MR_Box) (SpecModuleName_33));
    MR_hl_field(0, TypeSpecInfo_39, 3) = ((MR_Box) (RenamedSubst_16));
    MR_hl_field(0, TypeSpecInfo_39, 4) = ((MR_Box) (TVarSet_17));
    MR_hl_field(0, TypeSpecInfo_39, 5) = ((MR_Box) (ExpandedItems_36));
    MR_hl_field(0, TypeSpecInfo_39, 6) = ((MR_Box) (Context_37));
    MR_hl_field(0, TypeSpecInfo_39, 7) = ((MR_Box) (SeqNum_38));
  }
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), ((MR_Box) (PredId_12)), ((MR_Box) (TypeSpecInfo_39)), PragmaMap0_24, &PragmaMap_40);
  {
    TypeSpecTables_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecTables_41, 0) = ((MR_Box) (ProcsToSpec_28));
    MR_hl_field(0, TypeSpecTables_41, 1) = ((MR_Box) (ForceVersions_29));
    MR_hl_field(0, TypeSpecTables_41, 2) = ((MR_Box) (SpecMap_30));
    MR_hl_field(0, TypeSpecTables_41, 3) = ((MR_Box) (PragmaMap_40));
  }
  hlds__hlds_module__module_info_set_type_spec_tables_3_p_0(TypeSpecTables_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_5;

  hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_5));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_type_spec_version_of_pred_14_p_0(
  MR_Word PredId_15,
  MR_Word PredInfo0_16,
  MR_Word PredFormArity_17,
  MR_Word TSInfo0_18,
  MR_Word TVarSet_19,
  MR_Word Types_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word SpecProcTable0_23,
  MR_Word ApplicableModes_24,
  MR_Word * SpecPredId_25,
  MR_Word * SpecPredStatus_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79)
{
  MR_bool succeeded;
  MR_Word PFUMM0_28 = ((MR_Word) ((MR_hl_field(0, TSInfo0_18, 0))));
  MR_Word SymName_29 = ((MR_Word) ((MR_hl_field(0, TSInfo0_18, 1))));
  MR_Word SpecModuleName_30 = ((MR_Word) ((MR_hl_field(0, TSInfo0_18, 2))));
  MR_Word Subst_31 = ((MR_Word) ((MR_hl_field(0, TSInfo0_18, 3))));
  MR_Word TVarSet0_32 = ((MR_Word) ((MR_hl_field(0, TSInfo0_18, 4))));
  MR_Word SpecProcTable_36;
  MR_Word ArgVarSet0_37;
  MR_Integer PredFormArityInt_38;
  MR_Word ArgVars_39;
  MR_Word ArgVarSet_40;
  MR_Word PredContext_41;
  MR_Word GoalInfo0_42;
  MR_Word NonLocals_43;
  MR_Word GoalInfo1_44;
  MR_Word GoalInfo_45;
  MR_Word PredOrFunc_46;
  MR_Word Goal_47;
  MR_Word Clause_48;
  MR_Word ExplicitVarTypes_49;
  MR_Word VarTable_50;
  MR_Word RttiVarMaps_51;
  MR_Word TVarNameMap_52;
  MR_Word ArgsVec_53;
  MR_Word ClausesRep_54;
  MR_Word ItemNumbers_55;
  MR_Word Clauses_56;
  MR_Word Markers0_57;
  MR_Word Markers_58;
  MR_Word Proofs_59;
  MR_Word ConstraintMap_60;
  MR_Word MaybePredOrFunc0_61;
  MR_String UnqualName_64;
  MR_Word Transform_65;
  MR_String SpecName_66;
  MR_Word OrigOrigin_67;
  MR_Word SubstDesc_68;
  MR_Word PredTransform_69;
  MR_Word Origin_70;
  MR_Word VarNameRemap_73;
  MR_Word SpecPredInfo0_74;
  MR_Word SpecPredInfo_75;
  MR_Word PredTable0_76;
  MR_Word PredTable_77;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word _Arity_62;
  MR_Word _MaybeModes_63;

  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[15]), SpecProcTable0_23, &SpecProcTable_36);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ArgVarSet0_37);
  PredFormArityInt_38 = (MR_Integer) (PredFormArity_17);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_38, &ArgVars_39, ArgVarSet0_37, &ArgVarSet_40);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_16, &PredContext_41);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_42);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_39, &NonLocals_43);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_43, GoalInfo0_42, &GoalInfo1_44);
  hlds__hlds_goal__goal_info_set_context_3_p_0(PredContext_41, GoalInfo1_44, &GoalInfo_45);
  PredOrFunc_46 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_16);
  hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_15, PredOrFunc_46, SymName_29, ArgVars_39, GoalInfo_45, &Goal_47);
  Var_84 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
  {
    Clause_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clause_48, 0) = ((MR_Box) (ApplicableModes_24));
    MR_hl_field(0, Clause_48, 1) = ((MR_Box) (Goal_47));
    MR_hl_field(0, Clause_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Clause_48, 3) = ((MR_Box) (PredContext_41));
    MR_hl_field(0, Clause_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Clause_48, 5) = ((MR_Box) (Var_84));
    MR_hl_field(0, Clause_48, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_49);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_50);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_51);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), &TVarNameMap_52);
  ArgsVec_53 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[8]), PredOrFunc_46, ArgVars_39);
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (Clause_48));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_86, &ClausesRep_54);
  ItemNumbers_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    Clauses_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clauses_56, 0) = ((MR_Box) (ArgVarSet_40));
    MR_hl_field(0, Clauses_56, 1) = ((MR_Box) (ExplicitVarTypes_49));
    MR_hl_field(0, Clauses_56, 2) = ((MR_Box) (VarTable_50));
    MR_hl_field(0, Clauses_56, 3) = ((MR_Box) (RttiVarMaps_51));
    MR_hl_field(0, Clauses_56, 4) = ((MR_Box) (TVarNameMap_52));
    MR_hl_field(0, Clauses_56, 5) = ((MR_Box) (ArgsVec_53));
    MR_hl_field(0, Clauses_56, 6) = ((MR_Box) (ClausesRep_54));
    MR_hl_field(0, Clauses_56, 7) = ((MR_Box) (ItemNumbers_55));
    MR_hl_field(0, Clauses_56, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers0_57);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 23, Markers0_57, &Markers_58);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_59);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_60);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_16);
  if (succeeded)
    *SpecPredStatus_26 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, SpecPredStatus_26);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM0_28, &MaybePredOrFunc0_61, &_Arity_62, &_MaybeModes_63);
  UnqualName_64 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_29);
  {
    Transform_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_65, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Transform_65, 1) = ((MR_Box) (MaybePredOrFunc0_61));
    MR_hl_field(3, Transform_65, 2) = ((MR_Box) (TVarSet0_32));
    MR_hl_field(3, Transform_65, 3) = ((MR_Box) (Subst_31));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(UnqualName_64, Transform_65, &SpecName_66);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_16, &OrigOrigin_67);
  SubstDesc_68 = mercury__one_or_more__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[7]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[16]), Subst_31);
  {
    PredTransform_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredTransform_69, 0) = ((MR_Box) (SubstDesc_68));
  }
  {
    Origin_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Origin_70, 0) = ((MR_Box) (PredTransform_69));
    MR_hl_field(2, Origin_70, 1) = ((MR_Box) (OrigOrigin_67));
    MR_hl_field(2, Origin_70, 2) = ((MR_Box) (PredId_15));
  }
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_16, &VarNameRemap_73);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_46, SpecModuleName_30, SpecName_66, PredFormArity_17, PredContext_41, Origin_70, *SpecPredStatus_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_3[1]), Markers_58, Types_20, TVarSet_19, ExistQVars_21, Constraints_22, Proofs_59, ConstraintMap_60, Clauses_56, VarNameRemap_73, &SpecPredInfo0_74);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(SpecProcTable_36, SpecPredInfo0_74, &SpecPredInfo_75);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_78, &PredTable0_76);
  hlds__pred_table__predicate_table_insert_4_p_0(SpecPredInfo_75, SpecPredId_25, PredTable0_76, &PredTable_77);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_77, STATE_VARIABLE_ModuleInfo_0_78, STATE_VARIABLE_ModuleInfo_79);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcTable_12,
  MR_Word TVarSet_13,
  MR_Word Context_14,
  MR_Word PFUMM0_15,
  MR_Word * MaybeSpecProcs_16)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) PFUMM0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_138 = ((MR_Word) ((MR_hl_field(0, PFUMM0_15, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_138)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_62;
          MR_Word PredFormArity_64;
          MR_Word UserArity_65 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_138, 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_62);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_65, &PredFormArity_64);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_62));
            MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_65));
            MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_64));
            MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_96 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_138, 0))));
          MR_Word PredFormArity_97;
          MR_Integer ProcId_81;
          MR_Word ProcInfo_82;

          PredFormArity_97 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_96);
          succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(ModuleInfo_9, ProcTable_12, ArgModes_96, &ProcId_81, &ProcInfo_82);
          if (succeeded)
          {
            MR_Word SpecProcTable_68;
            MR_Word UserArity_69;
            MR_Word Var_70;
            MR_Word Var_71;

            SpecProcTable_68 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_81)), ((MR_Box) (ProcInfo_82)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_69, PredFormArity_97);
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (ProcId_81));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_68));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_70));
              MR_hl_field(1, base, 2) = ((MR_Box) (Var_71));
              MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_69));
              MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_97));
              MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_75;
            MR_Word Specs_77;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_75);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_75, ArgModes_96, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[25])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_77);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSpecProcs_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_77));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_17 = ((MR_Word) ((MR_hl_field(1, PFUMM0_15, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_17)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_29;
          MR_Word PredFormArity_46;
          MR_Word UserArity_47 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_17, 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_29);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_47, &PredFormArity_46);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_29));
            MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_47));
            MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_46));
            MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_20 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_17, 0))));
          MR_Word PredFormArity_21;
          MR_Integer ProcId_22;
          MR_Word ProcInfo_23;

          PredFormArity_21 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_20);
          succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(ModuleInfo_9, ProcTable_12, ArgModes_20, &ProcId_22, &ProcInfo_23);
          if (succeeded)
          {
            MR_Word SpecProcTable_24;
            MR_Word UserArity_25;
            MR_Word Var_30;
            MR_Word Var_31;

            SpecProcTable_24 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_22)), ((MR_Box) (ProcInfo_23)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_21);
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (ProcId_22));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(1, base, 2) = ((MR_Box) (Var_31));
              MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_25));
              MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_21));
              MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_26;
            MR_Word Specs_28;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_26);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_26, ArgModes_20, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[25])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_28);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSpecProcs_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredOrFunc_48;
        MR_Word PFUMM_49;
        MR_Word PredFormArity_50;
        MR_Word UserArity_51 = ((MR_Word) ((MR_hl_field(2, PFUMM0_15, 0))));
        MR_Word ProcIds_52;

        mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_52);
        PredOrFunc_48 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
        switch (PredOrFunc_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_44, 0) = ((MR_Box) (UserArity_51));
              }
              {
                PFUMM_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PFUMM_49, 0) = ((MR_Box) (Var_44));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (UserArity_51));
              }
              {
                PFUMM_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PFUMM_49, 0) = ((MR_Box) (Var_43));
              }
            }
            break;
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_48, UserArity_51, &PredFormArity_50);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecProcs_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_52));
          MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_51));
          MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_50));
          MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM_49));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_67;

  conv2_LambdaHeadVar__2_67 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__1466__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_67));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1448__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1420__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_58;
  MR_Word conv0_LambdaHeadVar__3_59;

  hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__1407__1_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_58, &conv0_LambdaHeadVar__3_59);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_58));
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_59));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10)
{
  MR_bool succeeded;
  MR_Word SubstList_11;
  MR_Word VarsToSub_15;
  MR_Word SubstTypes0_16;
  MR_Word MultiSubstVars0_17;

  SubstList_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), Subst_8);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[13]), SubstList_11, &VarsToSub_15, &SubstTypes0_16);
  hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), VarsToSub_15, &MultiSubstVars0_17);
  if ((MultiSubstVars0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CalledTVarSet_22;
    MR_Word NameVarIndex0_23;
    MR_Word UnknownVarsToSub_26;
    MR_Word Var_62;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_6, &CalledTVarSet_22);
    mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), CalledTVarSet_22, &NameVarIndex0_23);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[5]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet0_7));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) (NameVarIndex0_23));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), Var_62, VarsToSub_15, &UnknownVarsToSub_26);
    if ((UnknownVarsToSub_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarsToSubSet_27;
      MR_Word TVarsInSubstTypes0_28;
      MR_Word TVarsInSubstTypes_29;
      MR_Word RecSubstTVars0_30;
      MR_Word RecSubstTVars_31;

      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), VarsToSub_15, &VarsToSubSet_27);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(SubstTypes0_16, &TVarsInSubstTypes0_28);
      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), TVarsInSubstTypes0_28, &TVarsInSubstTypes_29);
      mercury__set__intersect_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), TVarsInSubstTypes_29, VarsToSubSet_27, &RecSubstTVars0_30);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), RecSubstTVars0_30, &RecSubstTVars_31);
      if ((RecSubstTVars_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TVarRenaming0_32;
        MR_Word VarsToReplace_33;
        MR_Word TVarSet_34;
        MR_Word TVarRenaming_36;
        MR_Word RenamedVarsToSub_37;
        MR_Word ExistQVars_38;
        MR_Word SubExistQVars_40;
        MR_Word Var_64;
        MR_Word Var_35;

        mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), &TVarRenaming0_32);
        mercury__list__append_3_p_1((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), VarsToSub_15, TVarsInSubstTypes0_28, &VarsToReplace_33);
        parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_33, TVarSet0_7, CalledTVarSet_22, &TVarSet_34, NameVarIndex0_23, &Var_35, TVarRenaming0_32, &TVarRenaming_36);
        mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), VarsToSub_15, TVarRenaming_36, &RenamedVarsToSub_37);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_6, &ExistQVars_38);
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_8[3]));
          MR_hl_field(0, Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3));
          MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_64, 3) = ((MR_Box) (ExistQVars_38));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), Var_64, RenamedVarsToSub_37, &SubExistQVars_40);
        if ((SubExistQVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubstTypes_41;
          MR_Word SubAL_42;
          MR_Word TypeSubst_43;
          MR_Word Types0_44;
          MR_Word ClassContext0_45;
          MR_Word Types_46;
          MR_Word ClassContext_47;
          MR_Word RenamedSubsts_49;
          MR_Word OoMRenamedSubsts_50;

          parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(TVarRenaming_36, SubstTypes0_16, &SubstTypes_41);
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedVarsToSub_37, SubstTypes_41, &SubAL_42);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubAL_42, &TypeSubst_43);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_6, &Types0_44);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_6, &ClassContext0_45);
          parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(TypeSubst_43, Types0_44, &Types_46);
          parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0(TypeSubst_43, ClassContext0_45, &ClassContext_47);
          RenamedSubsts_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[6]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[14]), SubAL_42);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), RenamedSubsts_49, &OoMRenamedSubsts_50);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSubstResult_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TVarSet_34));
            MR_hl_field(1, base, 1) = ((MR_Box) (Types_46));
            MR_hl_field(1, base, 2) = ((MR_Box) (ExistQVars_38));
            MR_hl_field(1, base, 3) = ((MR_Box) (ClassContext_47));
            MR_hl_field(1, base, 4) = ((MR_Box) (OoMRenamedSubsts_50));
          }
        }
        else
        {
          MR_Word Var_68;
          MR_Word Spec_80;

          hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(PredInfo0_6, Context_9, SubExistQVars_40, &Spec_80);
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_80));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSubstResult_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
          }
        }
      }
      else
      {
        MR_Word Var_70;
        MR_Word Spec_83;

        hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, RecSubstTVars_31, &Spec_83);
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_83));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSubstResult_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
        }
      }
    }
    else
    {
      MR_Word Var_72;
      MR_Word Spec_86;

      hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, UnknownVarsToSub_26, &Spec_86);
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_86));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSubstResult_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
      }
    }
  }
  else
  {
    MR_Word MultiSubstVars_20;
    MR_Word Spec_21;
    MR_Word Var_60;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), MultiSubstVars0_17, &MultiSubstVars_20);
    hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, MultiSubstVars_20, &Spec_21);
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSubstResult_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10)
{
  MR_Word PredOrFunc_11;
  MR_String Decl_12;
  MR_String DoOrDoesNotOccur_13;
  MR_Word Pieces_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Module_49;
  MR_String Name_50;
  MR_Word PredFormArity_51;
  MR_Word PredOrFunc_52;
  MR_Word PFSymNameArity_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word VarPieces_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_String Var_70;
  MR_Word Var_74;
  MR_Box conv0_DoOrDoesNotOccur_13;
  MR_Box conv2_Var_70;

  PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Decl_12 = (MR_String) "func";
      break;
    case (MR_Integer) 0:
      Decl_12 = (MR_String) "pred";
      break;
  }
  conv0_DoOrDoesNotOccur_13 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
  DoOrDoesNotOccur_13 = ((MR_String) (conv0_DoOrDoesNotOccur_13));
  Module_49 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_50 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_51 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Module_49));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Name_50));
  }
  {
    PFSymNameArity_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
    MR_hl_field(0, PFSymNameArity_53, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, PFSymNameArity_53, 2) = ((MR_Box) (PredFormArity_51));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (PFSymNameArity_53));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[63])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[61])));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[60])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[3]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_66 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, UnknownVars_9);
  conv2_Var_70 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_70 = ((MR_String) (conv2_Var_70));
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_66);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_74);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (DoOrDoesNotOccur_13));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_29);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 35U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Decl_12));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[59])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[57])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_27);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[52])), Var_23);
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_unknown_vars_to_subst\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_14));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10)
{
  MR_String HasOrHave_11;
  MR_Word Pieces_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Module_42;
  MR_String Name_43;
  MR_Word PredFormArity_44;
  MR_Word PredOrFunc_45;
  MR_Word PFSymNameArity_46;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word VarPieces_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_String Var_63;
  MR_Word Var_67;
  MR_Box conv0_HasOrHave_11;
  MR_Box conv2_Var_63;

  conv0_HasOrHave_11 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
  HasOrHave_11 = ((MR_String) (conv0_HasOrHave_11));
  Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_44 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Module_42));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Name_43));
  }
  {
    PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_45));
    MR_hl_field(0, PFSymNameArity_46, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, PFSymNameArity_46, 2) = ((MR_Box) (PredFormArity_44));
  }
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (PFSymNameArity_46));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[63])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[61])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[60])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[3]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_59 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, MultiSubstVars_9);
  conv2_Var_63 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_63 = ((MR_String) (conv2_Var_63));
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_67 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_59);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_67);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (HasOrHave_11));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[56])));
  }
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_27);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_25);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[52])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_multiple_subst_vars\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10)
{
  MR_String OccurOrOccurs_11;
  MR_Word Pieces_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Module_44;
  MR_String Name_45;
  MR_Word PredFormArity_46;
  MR_Word PredOrFunc_47;
  MR_Word PFSymNameArity_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word VarPieces_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_69;
  MR_Box conv0_OccurOrOccurs_11;
  MR_Box conv2_Var_65;

  conv0_OccurOrOccurs_11 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
  OccurOrOccurs_11 = ((MR_String) (conv0_OccurOrOccurs_11));
  Module_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_45 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_46 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Module_44));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Name_45));
  }
  {
    PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
    MR_hl_field(0, PFSymNameArity_48, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, PFSymNameArity_48, 2) = ((MR_Box) (PredFormArity_46));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (PFSymNameArity_48));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[63])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[61])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[60])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[3]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, RecursiveVars_9);
  conv2_Var_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_65 = ((MR_String) (conv2_Var_65));
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_61);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_69);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (OccurOrOccurs_11));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[54])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])));
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_29);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_25);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[52])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_recursive_subst\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__1817__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8)
{
  MR_Word TVarSet_9;
  MR_String TypeOrTypes_10;
  MR_Word Pieces_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Module_44;
  MR_String Name_45;
  MR_Word PredFormArity_46;
  MR_Word PredOrFunc_47;
  MR_Word PFSymNameArity_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word VarPieces_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_69;
  MR_Box conv0_TypeOrTypes_10;
  MR_Box conv2_Var_65;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_5, &TVarSet_9);
  conv0_TypeOrTypes_10 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_7, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
  TypeOrTypes_10 = ((MR_String) (conv0_TypeOrTypes_10));
  Module_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  Name_45 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  PredFormArity_46 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
  PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Module_44));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Name_45));
  }
  {
    PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
    MR_hl_field(0, PFSymNameArity_48, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, PFSymNameArity_48, 2) = ((MR_Box) (PredFormArity_46));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (PFSymNameArity_48));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[63])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[61])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[60])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (TypeOrTypes_10));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[48])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[3]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet_9));
  }
  VarPieces_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, SubExistQVars_7);
  conv2_Var_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_7, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_65 = ((MR_String) (conv2_Var_65));
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[50])), VarPieces_61);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_69);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])));
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_28);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[47])), Var_20);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_subst_existq_tvars\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box H_3 = (MR_hl_field(1, HeadVar__1_1, 0));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word DupVars0_6;

    hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_for_T_7, T_4, &DupVars0_6);
    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, H_3, T_4);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = H_3;
        MR_hl_field(1, base, 1) = ((MR_Box) (DupVars0_6));
      }
    else
      *HeadVar__2_2 = DupVars0_6;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvar_subst_3_p_0(
  MR_Word Renaming_4,
  MR_Word VoGTVarSubst_5,
  MR_Word * PragmaTVarSubst_6)
{
  MR_Word VoGTVar_7 = ((MR_Word) ((MR_hl_field(0, VoGTVarSubst_5, 0))));
  MR_Word VoGType_8 = ((MR_Word) ((MR_hl_field(0, VoGTVarSubst_5, 1))));
  MR_Word PragmaTVar_9;
  MR_Word PragmaType_10;

  parse_tree__prog_type_subst__apply_renaming_to_tvar_3_p_0(Renaming_4, VoGTVar_7, &PragmaTVar_9);
  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_4, VoGType_8, &PragmaType_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PragmaTVarSubst_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PragmaTVar_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (PragmaType_10));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_pragma_to_pred_tvar_map_3_p_0(
  MR_Word PragmaToPred_4,
  MR_Word STATE_VARIABLE_PragmaToPredMap_0_8,
  MR_Word * STATE_VARIABLE_PragmaToPredMap_9)
{
  MR_Word PragmaTVar_6 = ((MR_Word) ((MR_hl_field(0, PragmaToPred_4, 0))));
  MR_Word PredTVar_7 = ((MR_Word) ((MR_hl_field(0, PragmaToPred_4, 1))));

  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (PragmaTVar_6)), ((MR_Box) (PredTVar_7)), STATE_VARIABLE_PragmaToPredMap_0_8, STATE_VARIABLE_PragmaToPredMap_9);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_spec_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word PragmaTVarSet_11,
  MR_Word PredInfo_12,
  MR_Word Soln_13,
  MR_Word TypeSubst_14,
  MR_Word STATE_VARIABLE_Pragmas_0_46,
  MR_Word * STATE_VARIABLE_Pragmas_47)
{
  hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0(PragmaModuleName_10, PredInfo_12, Soln_13, TypeSubst_14, STATE_VARIABLE_Pragmas_0_46, STATE_VARIABLE_Pragmas_47);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Pragmas_47;

  hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_spec_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Pragmas_47);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Pragmas_47));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word PragmaTVarSet_11,
  MR_Word PredInfo_12,
  MR_Word OoMTypeSubsts_13,
  MR_Word Soln_14,
  MR_Word STATE_VARIABLE_Pragmas_0_18,
  MR_Word * STATE_VARIABLE_Pragmas_19)
{
  MR_Word HeadTypeSubst_16 = ((MR_Word) ((MR_hl_field(0, OoMTypeSubsts_13, 0))));
  MR_Word TailTypeSubts_17 = ((MR_Word) ((MR_hl_field(0, OoMTypeSubsts_13, 1))));
  MR_Word STATE_VARIABLE_Pragmas_1_20;
  MR_Word Var_21;
  MR_Box conv1_STATE_VARIABLE_Pragmas_19;

  hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0(PragmaModuleName_10, PredInfo_12, Soln_14, HeadTypeSubst_16, STATE_VARIABLE_Pragmas_0_18, &STATE_VARIABLE_Pragmas_1_20);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[4]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (PragmaModuleName_10));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (PragmaTVarSet_11));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (PredInfo_12));
    MR_hl_field(0, Var_21, 7) = ((MR_Box) (Soln_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), Var_21, TailTypeSubts_17, ((MR_Box) (STATE_VARIABLE_Pragmas_1_20)), &conv1_STATE_VARIABLE_Pragmas_19);
  *STATE_VARIABLE_Pragmas_19 = ((MR_Word) (conv1_STATE_VARIABLE_Pragmas_19));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_PragmaTVarSubst_6;

  hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvar_subst_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_PragmaTVarSubst_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_PragmaTVarSubst_6));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PragmaToPredMap_9;

  hlds__make_hlds__add_pragma_type_spec__build_pragma_to_pred_tvar_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PragmaToPredMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PragmaToPredMap_9));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0(
  MR_Word PragmaModuleName_10,
  MR_Word PredInfo_12,
  MR_Word Soln_13,
  MR_Word TypeSubst_14,
  MR_Word STATE_VARIABLE_Pragmas_0_46,
  MR_Word * STATE_VARIABLE_Pragmas_47)
{
  MR_Word UserArity_16;
  MR_Word MoA_17;
  MR_Word PredOrFunc_18;
  MR_Word PFUMM_19;
  MR_Word PredSymName_20;
  MR_Word RecompItems_21;
  MR_Word PragmaToPredSet_23;
  MR_Word PragmaToPreds_24;
  MR_Word PragmaToPredMap_25;
  MR_Word HeadTVarSubst_26;
  MR_Word TailTVarSubsts_27;
  MR_Word TVarSubsts_28;
  MR_Word EffTVarSubsts_29;
  MR_Word EffTypeSubstTVars_30;
  MR_Word PredTVarSet_32;
  MR_Integer NewPragmaNumTVars_33;
  MR_Word NewPragmaTVarNames_34;
  MR_Word Renaming_35;
  MR_Word NewPragmaTVarSubsts_36;
  MR_Word NewPragmaTypeSubst_37;
  MR_Word NewPragmaTVarSet_38;
  MR_Word Pragma_39;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Box conv1_PragmaToPredMap_25;
  MR_Word EffTypeSubst_31;

  UserArity_16 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_12);
  {
    MoA_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MoA_17, 0) = ((MR_Box) (UserArity_16));
  }
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_12, &PredOrFunc_18);
  switch (PredOrFunc_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        PFUMM_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PFUMM_19, 0) = ((MR_Box) (MoA_17));
      }
      break;
    case (MR_Integer) 0:
      {
        PFUMM_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFUMM_19, 0) = ((MR_Box) (MoA_17));
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_12, &PredSymName_20);
  mercury__set__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), &RecompItems_21);
  PragmaToPredSet_23 = ((MR_Word) ((MR_hl_field(0, Soln_13, 1))));
  PragmaToPreds_24 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0), PragmaToPredSet_23);
  Var_49 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[12]), PragmaToPreds_24, ((MR_Box) (Var_49)), &conv1_PragmaToPredMap_25);
  PragmaToPredMap_25 = ((MR_Word) (conv1_PragmaToPredMap_25));
  HeadTVarSubst_26 = ((MR_Word) ((MR_hl_field(0, TypeSubst_14, 0))));
  TailTVarSubsts_27 = ((MR_Word) ((MR_hl_field(0, TypeSubst_14, 1))));
  {
    TVarSubsts_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TVarSubsts_28, 0) = ((MR_Box) (HeadTVarSubst_26));
    MR_hl_field(1, TVarSubsts_28, 1) = ((MR_Box) (TailTVarSubsts_27));
  }
  Var_50 = mercury__set__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]));
  hlds__make_hlds__add_pragma_type_spec__find_type_vars_in_tvar_substs_5_p_0(PragmaToPredMap_25, TVarSubsts_28, &EffTVarSubsts_29, Var_50, &EffTypeSubstTVars_30);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), EffTVarSubsts_29, &EffTypeSubst_31);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_12, &PredTVarSet_32);
  Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), EffTypeSubstTVars_30);
  Var_53 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]));
  hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvarset_components_9_p_0(PredTVarSet_32, PragmaToPredMap_25, Var_51, (MR_Integer) 1, &NewPragmaNumTVars_33, Var_53, &NewPragmaTVarNames_34, Var_54, &Renaming_35);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[2]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_49_44_32_51_93_95_48_8_p_0_2));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Renaming_35));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), Var_55, EffTVarSubsts_29, &NewPragmaTVarSubsts_36);
  mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), NewPragmaTVarSubsts_36, &NewPragmaTypeSubst_37);
  mercury__varset__construct_varset_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NewPragmaNumTVars_33, NewPragmaTVarNames_34, &NewPragmaTVarSet_38);
  Var_56 = mercury__term_context__dummy_context_0_f_0();
  {
    Pragma_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Pragma_39, 0) = ((MR_Box) (PFUMM_19));
    MR_hl_field(0, Pragma_39, 1) = ((MR_Box) (PredSymName_20));
    MR_hl_field(0, Pragma_39, 2) = ((MR_Box) (PragmaModuleName_10));
    MR_hl_field(0, Pragma_39, 3) = ((MR_Box) (NewPragmaTypeSubst_37));
    MR_hl_field(0, Pragma_39, 4) = ((MR_Box) (NewPragmaTVarSet_38));
    MR_hl_field(0, Pragma_39, 5) = ((MR_Box) (RecompItems_21));
    MR_hl_field(0, Pragma_39, 6) = ((MR_Box) (Var_56));
    MR_hl_field(0, Pragma_39, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Pragmas_47 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Pragma_39));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Pragmas_0_46));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__construct_pragma_tvarset_components_9_p_0(
  MR_Word PredTVarSet_1,
  MR_Word RevTVarMap_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_PragmaNumTVars_0_4,
  MR_Integer * STATE_VARIABLE_PragmaNumTVars_5,
  MR_Word STATE_VARIABLE_PragmaTVarNames_0_6,
  MR_Word * STATE_VARIABLE_PragmaTVarNames_7,
  MR_Word STATE_VARIABLE_Renaming_0_8,
  MR_Word * STATE_VARIABLE_Renaming_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_9 = STATE_VARIABLE_Renaming_0_8;
      *STATE_VARIABLE_PragmaTVarNames_7 = STATE_VARIABLE_PragmaTVarNames_0_6;
      *STATE_VARIABLE_PragmaNumTVars_5 = STATE_VARIABLE_PragmaNumTVars_0_4;
    }
    else
    {
      MR_Word VoGTVar_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word VoGTVars_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_Renaming_1_37;
      MR_Word STATE_VARIABLE_PragmaTVarNames_1_38;
      MR_Integer STATE_VARIABLE_PragmaNumTVars_1_39;
      MR_String PredTVarName_30;
      MR_Word PredTVar_29;
      MR_Box conv0_PredTVar_29;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_PragmaNumTVars_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PragmaTVarNames_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_8;

      Var_28 = mercury__term__force_construct_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), STATE_VARIABLE_PragmaNumTVars_0_4);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (VoGTVar_23)), ((MR_Box) (Var_28)), STATE_VARIABLE_Renaming_0_8, &STATE_VARIABLE_Renaming_1_37);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), RevTVarMap_2, ((MR_Box) (VoGTVar_23)), &conv0_PredTVar_29);
      if (succeeded)
      {
        PredTVar_29 = ((MR_Word) (conv0_PredTVar_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTVarSet_1, PredTVar_29, &PredTVarName_30);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_28)), ((MR_Box) (PredTVarName_30)), STATE_VARIABLE_PragmaTVarNames_0_6, &STATE_VARIABLE_PragmaTVarNames_1_38);
      else
        STATE_VARIABLE_PragmaTVarNames_1_38 = STATE_VARIABLE_PragmaTVarNames_0_6;
      STATE_VARIABLE_PragmaNumTVars_1_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_PragmaNumTVars_0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = VoGTVars_24;
      next_value_of_STATE_VARIABLE_PragmaNumTVars_0_4 = STATE_VARIABLE_PragmaNumTVars_1_39;
      next_value_of_STATE_VARIABLE_PragmaTVarNames_0_6 = STATE_VARIABLE_PragmaTVarNames_1_38;
      next_value_of_STATE_VARIABLE_Renaming_0_8 = STATE_VARIABLE_Renaming_1_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_PragmaNumTVars_0_4 = next_value_of_STATE_VARIABLE_PragmaNumTVars_0_4;
      STATE_VARIABLE_PragmaTVarNames_0_6 = next_value_of_STATE_VARIABLE_PragmaTVarNames_0_6;
      STATE_VARIABLE_Renaming_0_8 = next_value_of_STATE_VARIABLE_Renaming_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_type_vars_in_tvar_substs_5_p_0(
  MR_Word PragmaToPredMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_TVars_0_4,
  MR_Word * STATE_VARIABLE_TVars_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TVars_5 = STATE_VARIABLE_TVars_0_4;
    }
    else
    {
      MR_Word HeadTVarSubst_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailTVarSubsts_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word HeadTVar_15 = ((MR_Word) ((MR_hl_field(0, HeadTVarSubst_11, 0))));
      MR_Word HeadType_16 = ((MR_Word) ((MR_hl_field(0, HeadTVarSubst_11, 1))));
      MR_Box conv0_Var_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), PragmaToPredMap_1, ((MR_Box) (HeadTVar_15)), &conv0_Var_17);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word HeadTypeTVars_18;
        MR_Word TailEffTVarSubsts_19;
        MR_Word STATE_VARIABLE_TVars_1_22;
        MR_Word STATE_VARIABLE_TVars_2_23;

        mercury__set__insert_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (HeadTVar_15)), STATE_VARIABLE_TVars_0_4, &STATE_VARIABLE_TVars_1_22);
        parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(HeadType_16, &HeadTypeTVars_18);
        mercury__set__union_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), HeadTypeTVars_18, STATE_VARIABLE_TVars_1_22, &STATE_VARIABLE_TVars_2_23);
        hlds__make_hlds__add_pragma_type_spec__find_type_vars_in_tvar_substs_5_p_0(PragmaToPredMap_1, TailTVarSubsts_12, &TailEffTVarSubsts_19, STATE_VARIABLE_TVars_2_23, STATE_VARIABLE_TVars_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadTVarSubst_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailEffTVarSubsts_19));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = TailTVarSubsts_12;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__acc_class_ground_substs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word PragmaTVarSet_9,
  MR_Word PredTVarSet_10,
  MR_Word ClassConstraintMap_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_SolnsMap_0_18,
  MR_Word * STATE_VARIABLE_SolnsMap_19)
{
  hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_99_108_97_115_115_95_103_114_111_117_110_100_95_115_117_98_115_116_115_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(ClassConstraintMap_11, Constraint_12, STATE_VARIABLE_SolnsMap_0_18, STATE_VARIABLE_SolnsMap_19);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_99_108_97_115_115_95_103_114_111_117_110_100_95_115_117_98_115_116_115_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(
  MR_Word ClassConstraintMap_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_SolnsMap_0_18,
  MR_Word * STATE_VARIABLE_SolnsMap_19)
{
  MR_bool succeeded;
  MR_Word ClassId_14;
  MR_Word Types_15 = ((MR_Word) ((MR_hl_field(0, Constraint_12, 1))));
  MR_Word ClassSymName_23 = ((MR_Word) ((MR_hl_field(0, Constraint_12, 0))));
  MR_Integer NumTypes_24;
  MR_Word OoMClassArgVectors_16;
  MR_Box conv0_OoMClassArgVectors_16;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_15, &NumTypes_24);
  {
    ClassId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_14, 0) = ((MR_Box) (ClassSymName_23));
    MR_hl_field(0, ClassId_14, 1) = ((MR_Box) (NumTypes_24));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]), ClassConstraintMap_11, ((MR_Box) (ClassId_14)), &conv0_OoMClassArgVectors_16);
  if (succeeded)
  {
    OoMClassArgVectors_16 = ((MR_Word) (conv0_OoMClassArgVectors_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ClassArgVectors_17;

    ClassArgVectors_17 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), OoMClassArgVectors_16);
    hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(ClassId_14, Types_15, ClassArgVectors_17, STATE_VARIABLE_SolnsMap_0_18, STATE_VARIABLE_SolnsMap_19);
  }
  else
    *STATE_VARIABLE_SolnsMap_19 = STATE_VARIABLE_SolnsMap_0_18;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_54;

  conv1_LambdaHeadVar__2_54 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__588__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_54));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_52;

  conv0_LambdaHeadVar__2_52 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__acc_matching_arg_vectors__582__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_109_97_116_99_104_105_110_103_95_97_114_103_95_118_101_99_116_111_114_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_p_0(
  MR_Word ClassId_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_SolnsMap_0_7,
  MR_Word * STATE_VARIABLE_SolnsMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SolnsMap_8 = STATE_VARIABLE_SolnsMap_0_7;
    else
    {
      MR_Word ArgVector_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ArgVectors_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word VarOrGroundTypes_25 = (MR_Word) (ArgVector_22);
      MR_Word STATE_VARIABLE_SolnsMap_1_55;
      MR_Word Subst_26;
      MR_Word RevTVarMap_27;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_SolnsMap_0_7;

      Var_49 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0));
      Var_50 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]));
      succeeded = hlds__make_hlds__add_pragma_type_spec__is_matching_arg_vector_6_p_0(HeadVar__5_5, VarOrGroundTypes_25, Var_49, &Subst_26, Var_50, &RevTVarMap_27);
      if (succeeded)
      {
        MR_Word SubstAL_28;
        MR_Word GroundOrTVarSubsts_32;
        MR_Word GroundOrTVarSubstSet_33;
        MR_Word RevTVarMapAL_34;
        MR_Word PragmaToPreds_38;
        MR_Word PragmaToPredsSet_39;
        MR_Word SubstSoln_40;
        MR_Word SubstSolns0_41;
        MR_Box conv2_SubstSolns0_41;

        mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Subst_26, &SubstAL_28);
        GroundOrTVarSubsts_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[2]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[10]), SubstAL_28);
        GroundOrTVarSubstSet_33 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0), GroundOrTVarSubsts_32);
        mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), RevTVarMap_27, &RevTVarMapAL_34);
        PragmaToPreds_38 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[3]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[11]), RevTVarMapAL_34);
        PragmaToPredsSet_39 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0), PragmaToPreds_38);
        {
          SubstSoln_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubstSoln_40, 0) = ((MR_Box) (GroundOrTVarSubstSet_33));
          MR_hl_field(0, SubstSoln_40, 1) = ((MR_Box) (PragmaToPredsSet_39));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]), STATE_VARIABLE_SolnsMap_0_7, ((MR_Box) (ClassId_4)), &conv2_SubstSolns0_41);
        if (succeeded)
        {
          SubstSolns0_41 = ((MR_Word) (conv2_SubstSolns0_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word SubstSolns_42;

          mercury__set__insert_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), ((MR_Box) (SubstSoln_40)), SubstSolns0_41, &SubstSolns_42);
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]), ((MR_Box) (ClassId_4)), ((MR_Box) (SubstSolns_42)), STATE_VARIABLE_SolnsMap_0_7, &STATE_VARIABLE_SolnsMap_1_55);
        }
        else
        {
          MR_Word SubstSolns_86;

          SubstSolns_86 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), ((MR_Box) (SubstSoln_40)));
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]), ((MR_Box) (ClassId_4)), ((MR_Box) (SubstSolns_86)), STATE_VARIABLE_SolnsMap_0_7, &STATE_VARIABLE_SolnsMap_1_55);
        }
      }
      else
        STATE_VARIABLE_SolnsMap_1_55 = STATE_VARIABLE_SolnsMap_0_7;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ArgVectors_23;
      next_value_of_STATE_VARIABLE_SolnsMap_0_7 = STATE_VARIABLE_SolnsMap_1_55;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_SolnsMap_0_7 = next_value_of_STATE_VARIABLE_SolnsMap_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__is_matching_arg_vector_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4,
  MR_Word STATE_VARIABLE_RevTVarMap_0_5,
  MR_Word * STATE_VARIABLE_RevTVarMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_RevTVarMap_6 = STATE_VARIABLE_RevTVarMap_0_5;
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Types_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word VarOrGroundType_15;
      MR_Word VarOrGroundTypes_16;
      MR_Word STATE_VARIABLE_Subst_1_23;
      MR_Word STATE_VARIABLE_RevTVarMap_1_24;
      MR_Word TVar_25;
      MR_Word Var_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevTVarMap_0_5;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VarOrGroundType_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        VarOrGroundTypes_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = ((MR_tag((MR_Word) Type_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_25 = ((MR_Word) ((MR_hl_field(0, Type_13, 0))));
          Var_34 = ((MR_Word) ((MR_hl_field(0, Type_13, 1))));
          succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word OldBinding_26;
          MR_Box conv0_OldBinding_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), STATE_VARIABLE_Subst_0_3, ((MR_Box) (TVar_25)), &conv0_OldBinding_26);
          if (succeeded)
          {
            OldBinding_26 = ((MR_Word) (conv0_OldBinding_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) VarOrGroundType_15)) == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = parse_tree__prog_item____Unify____var_or_ground_type_0_0(OldBinding_26, VarOrGroundType_15);
              if (succeeded)
              {
                STATE_VARIABLE_RevTVarMap_1_24 = STATE_VARIABLE_RevTVarMap_0_5;
                STATE_VARIABLE_Subst_1_23 = STATE_VARIABLE_Subst_0_3;
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), ((MR_Box) (TVar_25)), ((MR_Box) (VarOrGroundType_15)), STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_1_23);
            if (((MR_tag((MR_Word) VarOrGroundType_15)) == (MR_Integer) 1))
            {
              STATE_VARIABLE_RevTVarMap_1_24 = STATE_VARIABLE_RevTVarMap_0_5;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word VoGTypeVar_31 = ((MR_Word) ((MR_hl_field(0, VarOrGroundType_15, 0))));

              succeeded = mercury__map__insert_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (VoGTypeVar_31)), ((MR_Box) (TVar_25)), STATE_VARIABLE_RevTVarMap_0_5, &STATE_VARIABLE_RevTVarMap_1_24);
            }
          }
        }
        else
        {
          if (((MR_tag((MR_Word) VarOrGroundType_15)) == (MR_Integer) 1))
          {
            MR_Word GroundType_33 = ((MR_Word) ((MR_hl_field(1, VarOrGroundType_15, 0))));
            MR_Word Var_42 = (MR_Word) (GroundType_33);

            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_13, Var_42);
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
          {
            STATE_VARIABLE_RevTVarMap_1_24 = STATE_VARIABLE_RevTVarMap_0_5;
            STATE_VARIABLE_Subst_1_23 = STATE_VARIABLE_Subst_0_3;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Types_14;
          next_value_of_HeadVar__2_2 = VarOrGroundTypes_16;
          next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_23;
          next_value_of_STATE_VARIABLE_RevTVarMap_0_5 = STATE_VARIABLE_RevTVarMap_1_24;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
          STATE_VARIABLE_RevTVarMap_0_5 = next_value_of_STATE_VARIABLE_RevTVarMap_0_5;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Pragmas_19;

  hlds__make_hlds__add_pragma_type_spec__generate_pragma_type_specs_for_pred_soln_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Pragmas_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Pragmas_19));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SolnsMap_19;

  hlds__make_hlds__add_pragma_type_spec__acc_class_ground_substs_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SolnsMap_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SolnsMap_19));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PragmaModuleName_10,
  MR_Word ClassConstraintMap_11,
  MR_Word PragmaTVarSet_12,
  MR_Word OoMTypeSubsts_13,
  MR_Word PredInfo_14,
  MR_Word STATE_VARIABLE_Pragmas_0_29,
  MR_Word * STATE_VARIABLE_Pragmas_30)
{
  MR_bool succeeded;
  MR_Word PredModuleName_16;
  MR_Word UnivConstraints_18;
  MR_Word ClassContext_17;
  MR_Word Origin_22;
  MR_Word Var_31;

  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_14, &PredModuleName_16);
  succeeded = mdbcomp__sym_name__is_same_module_or_submodule_2_p_0(PredModuleName_16, PragmaModuleName_10);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_14, &ClassContext_17);
    UnivConstraints_18 = ((MR_Word) ((MR_hl_field(0, ClassContext_17, 0))));
    succeeded = (UnivConstraints_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_22);
      Var_31 = hlds__make_hlds__add_pragma_type_spec__is_pred_origin_type_spec_1_f_0(Origin_22);
      succeeded = (Var_31 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Solns_28;
    MR_Word Var_42;
    MR_Word PredTVarSet_48;
    MR_Word ClassSolnsMap_49;
    MR_Word ClassSolnsMapAL_50;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Box conv1_ClassSolnsMap_49;
    MR_Box conv3_STATE_VARIABLE_Pragmas_30;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_14, &PredTVarSet_48);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_9[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_1));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (PragmaTVarSet_12));
      MR_hl_field(0, Var_54, 5) = ((MR_Box) (PredTVarSet_48));
      MR_hl_field(0, Var_54, 6) = ((MR_Box) (ClassConstraintMap_11));
    }
    Var_55 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[1]), Var_54, UnivConstraints_18, ((MR_Box) (Var_55)), &conv1_ClassSolnsMap_49);
    ClassSolnsMap_49 = ((MR_Word) (conv1_ClassSolnsMap_49));
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5]), ClassSolnsMap_49, &ClassSolnsMapAL_50);
    if ((ClassSolnsMapAL_50 == (MR_Word) ((MR_Unsigned) 0U)))
      Solns_28 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadClassSoln_51 = ((MR_Word) ((MR_hl_field(1, ClassSolnsMapAL_50, 0))));
      MR_Word TailClassSolns_52 = ((MR_Word) ((MR_hl_field(1, ClassSolnsMapAL_50, 1))));
      MR_Word SolnSet_53;

      hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_108_108_95_103_114_111_117_110_100_95_115_117_98_115_116_95_99_111_109_98_105_110_97_116_105_111_110_115_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(HeadClassSoln_51, TailClassSolns_52, &SolnSet_53);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), SolnSet_53, &Solns_28);
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[3]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0_2));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_42, 4) = ((MR_Box) (PragmaModuleName_10));
      MR_hl_field(0, Var_42, 5) = ((MR_Box) (PragmaTVarSet_12));
      MR_hl_field(0, Var_42, 6) = ((MR_Box) (PredInfo_14));
      MR_hl_field(0, Var_42, 7) = ((MR_Box) (OoMTypeSubsts_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), Var_42, Solns_28, ((MR_Box) (STATE_VARIABLE_Pragmas_0_29)), &conv3_STATE_VARIABLE_Pragmas_30);
    *STATE_VARIABLE_Pragmas_30 = ((MR_Word) (conv3_STATE_VARIABLE_Pragmas_30));
  }
  else
    *STATE_VARIABLE_Pragmas_30 = STATE_VARIABLE_Pragmas_0_29;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_108_108_95_103_114_111_117_110_100_95_115_117_98_115_116_95_99_111_109_98_105_110_97_116_105_111_110_115_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word HeadVar__4_4,
  MR_Word TailClassIdsSubstSolns_12,
  MR_Word * FinalSubstSet_13)
{
  while (MR_TRUE)
  {
    MR_Word HeadSubstSolnSet_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailClassIdsSubstSolns_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *FinalSubstSet_13 = HeadSubstSolnSet_11;
    else
    {
      MR_Word HeadTailClassIdSubstSoln_16 = ((MR_Word) ((MR_hl_field(1, TailClassIdsSubstSolns_12, 0))));
      MR_Word TailTailClassIdsSubstSolns_17 = ((MR_Word) ((MR_hl_field(1, TailClassIdsSubstSolns_12, 1))));
      MR_Word HeadTailClassId_19 = ((MR_Word) ((MR_hl_field(0, HeadTailClassIdSubstSoln_16, 0))));
      MR_Word HeadTailSubstSolnSet_20 = ((MR_Word) ((MR_hl_field(0, HeadTailClassIdSubstSoln_16, 1))));
      MR_Word HeadSubstSolns_21;
      MR_Word HeadTailSubstSolns_22;
      MR_Word NextSubstSolnSet_23;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_TailClassIdsSubstSolns_12;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), HeadSubstSolnSet_11, &HeadSubstSolns_21);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), HeadTailSubstSolnSet_20, &HeadTailSubstSolns_22);
      Var_38 = mercury__set__init_0_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0));
      hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_outer_loop_4_p_0(HeadSubstSolns_21, HeadTailSubstSolns_22, Var_38, &NextSubstSolnSet_23);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (HeadTailClassId_19));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (NextSubstSolnSet_23));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_39;
      next_value_of_TailClassIdsSubstSolns_12 = TailTailClassIdsSubstSolns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      TailClassIdsSubstSolns_12 = next_value_of_TailClassIdsSubstSolns_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_outer_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnifiedSolns_0_3,
  MR_Word * STATE_VARIABLE_UnifiedSolns_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnifiedSolns_4 = STATE_VARIABLE_UnifiedSolns_0_3;
    else
    {
      MR_Word SubstA_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SolnsA_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_UnifiedSolns_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UnifiedSolns_0_3;

      hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_inner_loop_4_p_0(SubstA_9, HeadVar__2_2, STATE_VARIABLE_UnifiedSolns_0_3, &STATE_VARIABLE_UnifiedSolns_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SolnsA_10;
      next_value_of_STATE_VARIABLE_UnifiedSolns_0_3 = STATE_VARIABLE_UnifiedSolns_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UnifiedSolns_0_3 = next_value_of_STATE_VARIABLE_UnifiedSolns_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_soln_lists_inner_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UnifiedSolns_0_3,
  MR_Word * STATE_VARIABLE_UnifiedSolns_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnifiedSolns_4 = STATE_VARIABLE_UnifiedSolns_0_3;
    else
    {
      MR_Word SolnB_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word SolnsB_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_UnifiedSolns_1_16;
      MR_Word UnifiedSoln_13;
      MR_Word TypeCtorInfo_11_32;
      MR_Word TVarSubstSetA_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      MR_Word PragmaToPredSetA_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Word TVarSubstSetB_20 = ((MR_Word) ((MR_hl_field(0, SolnB_10, 0))));
      MR_Word PragmaToPredSetB_21 = ((MR_Word) ((MR_hl_field(0, SolnB_10, 1))));
      MR_Word TVarSubstsA_22;
      MR_Word TVarSubstsB_23;
      MR_Word UnifiedSubsts_24;
      MR_Word UnifiedSubstsSet_25;
      MR_Word PragmaToPredSet_26;
      MR_Word PragmaToPredListAB_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_UnifiedSolns_0_3;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0), TVarSubstSetA_18, &TVarSubstsA_22);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0), TVarSubstSetB_20, &TVarSubstsB_23);
      succeeded = hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(TVarSubstsA_22, TVarSubstsB_23, &UnifiedSubsts_24);
      if (succeeded)
      {
        mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0), UnifiedSubsts_24, &UnifiedSubstsSet_25);
        TypeCtorInfo_11_32 = (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0);
        mercury__set__union_3_p_0(TypeCtorInfo_11_32, PragmaToPredSetA_19, PragmaToPredSetB_21, &PragmaToPredSet_26);
        mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_11_32, PragmaToPredSet_26, &PragmaToPredListAB_29);
        if ((PragmaToPredListAB_29 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word HeadPragmaToPredAB_30 = ((MR_Word) ((MR_hl_field(1, PragmaToPredListAB_29, 0))));
          MR_Word TailPragmaToPredAB_31 = ((MR_Word) ((MR_hl_field(1, PragmaToPredListAB_29, 1))));

          succeeded = hlds__make_hlds__add_pragma_type_spec__no_pragma_tvar_is_double_mapped_2_p_0(HeadPragmaToPredAB_30, TailPragmaToPredAB_31);
        }
        if (succeeded)
        {
          {
            UnifiedSoln_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnifiedSoln_13, 0) = ((MR_Box) (UnifiedSubstsSet_25));
            MR_hl_field(0, UnifiedSoln_13, 1) = ((MR_Box) (PragmaToPredSet_26));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0), ((MR_Box) (UnifiedSoln_13)), STATE_VARIABLE_UnifiedSolns_0_3, &STATE_VARIABLE_UnifiedSolns_1_16);
      else
        STATE_VARIABLE_UnifiedSolns_1_16 = STATE_VARIABLE_UnifiedSolns_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SolnsB_11;
      next_value_of_STATE_VARIABLE_UnifiedSolns_0_3 = STATE_VARIABLE_UnifiedSolns_1_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_UnifiedSolns_0_3 = next_value_of_STATE_VARIABLE_UnifiedSolns_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__no_pragma_tvar_is_double_mapped_2_p_0(
  MR_Word Head_3,
  MR_Word Tail_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Tail_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word HeadTail_5 = ((MR_Word) ((MR_hl_field(1, Tail_4, 0))));
      MR_Word TailTail_6 = ((MR_Word) ((MR_hl_field(1, Tail_4, 1))));
      MR_Word HeadPragmaTVar_7 = ((MR_Word) ((MR_hl_field(0, Head_3, 0))));
      MR_Word HeadTailPragmaTVar_9 = ((MR_Word) ((MR_hl_field(0, HeadTail_5, 0))));
      MR_Word next_value_of_Head_3;
      MR_Word next_value_of_Tail_4;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), ((MR_Box) (HeadPragmaTVar_7)), ((MR_Box) (HeadTailPragmaTVar_9)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Head_3 = HeadTail_5;
        next_value_of_Tail_4 = TailTail_6;
        Head_3 = next_value_of_Head_3;
        Tail_4 = next_value_of_Tail_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(
  MR_Word TVarSubstsA_4,
  MR_Word TVarSubstsB_5,
  MR_Word * UnifiedSubst_6)
{
  MR_bool succeeded;

  if ((TVarSubstsA_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((TVarSubstsB_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *UnifiedSubst_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      *UnifiedSubst_6 = TVarSubstsB_5;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, TVarSubstsA_4, 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, TVarSubstsA_4, 0))));

    if ((TVarSubstsB_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *UnifiedSubst_6 = TVarSubstsA_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadTVarSubstB_13 = ((MR_Word) ((MR_hl_field(1, TVarSubstsB_5, 0))));
      MR_Word TailTVarSubstsB_14 = ((MR_Word) ((MR_hl_field(1, TVarSubstsB_5, 1))));
      MR_Word TVarA_15 = ((MR_Word) ((MR_hl_field(0, Var_25, 0))));
      MR_Word VoGTypeA_16 = ((MR_Word) ((MR_hl_field(0, Var_25, 1))));
      MR_Word TVarB_17 = ((MR_Word) ((MR_hl_field(0, HeadTVarSubstB_13, 0))));
      MR_Word VoGTypeB_18 = ((MR_Word) ((MR_hl_field(0, HeadTVarSubstB_13, 1))));
      MR_Word Cmp_19;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), &Cmp_19, ((MR_Box) (TVarA_15)), ((MR_Box) (TVarB_17)));
      switch (Cmp_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word TailUnifiedSubst_21;

            succeeded = hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(Var_24, TVarSubstsB_5, &TailUnifiedSubst_21);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *UnifiedSubst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailUnifiedSubst_21));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word TailUnifiedSubst_20;

            succeeded = parse_tree__prog_item____Unify____var_or_ground_type_0_0(VoGTypeA_16, VoGTypeB_18);
            if (succeeded)
            {
              succeeded = hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(Var_24, TailTVarSubstsB_14, &TailUnifiedSubst_20);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *UnifiedSubst_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailUnifiedSubst_20));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TailUnifiedSubst_22;

            succeeded = hlds__make_hlds__add_pragma_type_spec__unify_two_subst_lists_loop_3_p_0(TVarSubstsA_4, TailTVarSubstsB_14, &TailUnifiedSubst_22);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *UnifiedSubst_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadTVarSubstB_13));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailUnifiedSubst_22));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__is_pred_origin_type_spec_1_f_0(
  MR_Word Origin_3)
{
  while (MR_TRUE)
  {
    MR_Word IsTypeSpec_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Origin_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        IsTypeSpec_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredTransform_11 = ((MR_Word) ((MR_hl_field(2, Origin_3, 0))));
          MR_Word BeforeTransformOrigin_16 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));

          switch (MR_tag((MR_Word) PredTransform_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_Origin_3 = BeforeTransformOrigin_16;

                // direct tailcall eliminated
                ;
                Origin_3 = next_value_of_Origin_3;
                continue;
              }
              break;
            case (MR_Integer) 1:
              IsTypeSpec_4 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word BeforeTransformOrigin_8 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));
          MR_Word next_value_of_Origin_3 = BeforeTransformOrigin_8;

          // direct tailcall eliminated
          ;
          Origin_3 = next_value_of_Origin_3;
          continue;
        }
        break;
    }
    return IsTypeSpec_4;
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ClassConstraintMap_29;

  hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ClassConstraintMap_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ClassConstraintMap_29));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ClassTable_10,
  MR_Word PragmaTVarSet_11,
  MR_Word Context_12,
  MR_Word Subst0_13,
  MR_Word Constraint_14,
  MR_Word STATE_VARIABLE_ClassConstraintMap_0_28,
  MR_Word * STATE_VARIABLE_ClassConstraintMap_29)
{
  MR_bool succeeded;
  MR_Word ClassId_16;
  MR_Word Types_17 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 1))));
  MR_Word ClassSymName_71 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 0))));
  MR_Integer NumTypes_72;
  MR_Word ClassDefn_18;
  MR_Box conv0_ClassDefn_18;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_17, &NumTypes_72);
  {
    ClassId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_16, 0) = ((MR_Box) (ClassSymName_71));
    MR_hl_field(0, ClassId_16, 1) = ((MR_Box) (NumTypes_72));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_10, ((MR_Box) (ClassId_16)), &conv0_ClassDefn_18);
  if (succeeded)
  {
    ClassDefn_18 = ((MR_Word) (conv0_ClassDefn_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word VarOrGroundTypes_19;
    MR_Word ArgVector_20;
    MR_Word ClassTVars_25;
    MR_Word Subst_26;
    MR_Word Supers_27;
    MR_Word STATE_VARIABLE_ClassConstraintMap_1_30;
    MR_Word Var_34;
    MR_Word ArgVectors0_21;
    MR_Box conv1_ArgVectors0_21;
    MR_Box conv3_STATE_VARIABLE_ClassConstraintMap_29;

    hlds__make_hlds__add_pragma_type_spec__compute_superclass_arg_types_3_p_0(Subst0_13, Types_17, &VarOrGroundTypes_19);
    ArgVector_20 = (MR_Word) (VarOrGroundTypes_19);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]), STATE_VARIABLE_ClassConstraintMap_0_28, ((MR_Box) (ClassId_16)), &conv1_ArgVectors0_21);
    if (succeeded)
    {
      ArgVectors0_21 = ((MR_Word) (conv1_ArgVectors0_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__one_or_more__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ArgVector_20)), ArgVectors0_21);
      if (succeeded)
        STATE_VARIABLE_ClassConstraintMap_1_30 = STATE_VARIABLE_ClassConstraintMap_0_28;
      else
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ClassId_16)), ((MR_Box) (ArgVector_20)), STATE_VARIABLE_ClassConstraintMap_0_28, &STATE_VARIABLE_ClassConstraintMap_1_30);
    }
    else
      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ClassId_16)), ((MR_Box) (ArgVector_20)), STATE_VARIABLE_ClassConstraintMap_0_28, &STATE_VARIABLE_ClassConstraintMap_1_30);
    ClassTVars_25 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, 3))));
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), ClassTVars_25, VarOrGroundTypes_19, &Subst_26);
    Supers_27 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, 4))));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[2]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0_1));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (ClassTable_10));
      MR_hl_field(0, Var_34, 5) = ((MR_Box) (PragmaTVarSet_11));
      MR_hl_field(0, Var_34, 6) = ((MR_Box) (Context_12));
      MR_hl_field(0, Var_34, 7) = ((MR_Box) (Subst_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), Var_34, Supers_27, ((MR_Box) (STATE_VARIABLE_ClassConstraintMap_1_30)), &conv3_STATE_VARIABLE_ClassConstraintMap_29);
    *STATE_VARIABLE_ClassConstraintMap_29 = ((MR_Word) (conv3_STATE_VARIABLE_ClassConstraintMap_29));
  }
  else
    *STATE_VARIABLE_ClassConstraintMap_29 = STATE_VARIABLE_ClassConstraintMap_0_28;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__compute_superclass_arg_types_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Types_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word VarOrGroundType_8;
    MR_Word VarOrGroundTypes_9;
    MR_Word Var_10;

    succeeded = ((MR_tag((MR_Word) Type_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(0, Type_6, 0))));
      {
        MR_Box conv0_VarOrGroundType_8;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Subst_1, ((MR_Box) (Var_10)), &conv0_VarOrGroundType_8);
        VarOrGroundType_8 = ((MR_Word) (conv0_VarOrGroundType_8));
      }
    }
    else
    {
      MR_Word GroundType_12;

      succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_6, &GroundType_12);
      if (succeeded)
        {
          VarOrGroundType_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarOrGroundType_8, 0) = ((MR_Box) (GroundType_12));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.compute_superclass_arg_types\'/3", (MR_String) "type is not var or ground");
          return;
        }
    }
    hlds__make_hlds__add_pragma_type_spec__compute_superclass_arg_types_3_p_0(Subst_1, Types_7, &VarOrGroundTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarOrGroundType_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarOrGroundTypes_9));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ClassConstraintMap_29;

  hlds__make_hlds__add_pragma_type_spec__build_superclass_constraint_map_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ClassConstraintMap_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ClassConstraintMap_29));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ClassTable_11,
  MR_Word ApplyToSupers_12,
  MR_Word PragmaTVarSet_13,
  MR_Word Constraint_14,
  MR_Word STATE_VARIABLE_ClassConstraintMap_0_33,
  MR_Word * STATE_VARIABLE_ClassConstraintMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded;
  MR_Word ClassSymName_17 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 0))));
  MR_Word VarOrGroundTypes_18 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 1))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 2))));
  MR_Integer NumTypes_20;
  MR_Word ClassId_21;
  MR_Word ClassDefn_22;
  MR_Box conv0_ClassDefn_22;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), VarOrGroundTypes_18, &NumTypes_20);
  {
    ClassId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_21, 0) = ((MR_Box) (ClassSymName_17));
    MR_hl_field(0, ClassId_21, 1) = ((MR_Box) (NumTypes_20));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_11, ((MR_Box) (ClassId_21)), &conv0_ClassDefn_22);
  if (succeeded)
  {
    ClassDefn_22 = ((MR_Word) (conv0_ClassDefn_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ArgVector_23 = (MR_Word) (VarOrGroundTypes_18);
    MR_Word STATE_VARIABLE_ClassConstraintMap_1_37;
    MR_Word ArgVectors0_24;
    MR_Box conv1_ArgVectors0_24;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]), STATE_VARIABLE_ClassConstraintMap_0_33, ((MR_Box) (ClassId_21)), &conv1_ArgVectors0_24);
    if (succeeded)
    {
      ArgVectors0_24 = ((MR_Word) (conv1_ArgVectors0_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__one_or_more__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ArgVector_23)), ArgVectors0_24);
      if (succeeded)
        STATE_VARIABLE_ClassConstraintMap_1_37 = STATE_VARIABLE_ClassConstraintMap_0_33;
      else
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ClassId_21)), ((MR_Box) (ArgVector_23)), STATE_VARIABLE_ClassConstraintMap_0_33, &STATE_VARIABLE_ClassConstraintMap_1_37);
    }
    else
      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0), ((MR_Box) (ClassId_21)), ((MR_Box) (ArgVector_23)), STATE_VARIABLE_ClassConstraintMap_0_33, &STATE_VARIABLE_ClassConstraintMap_1_37);
    switch (ApplyToSupers_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ClassTVars_28 = ((MR_Word) ((MR_hl_field(0, ClassDefn_22, 3))));
          MR_Word Subst0_29;
          MR_Word Supers_30;
          MR_Word Var_45;
          MR_Box conv3_STATE_VARIABLE_ClassConstraintMap_34;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), ClassTVars_28, VarOrGroundTypes_18, &Subst0_29);
          Supers_30 = ((MR_Word) ((MR_hl_field(0, ClassDefn_22, 4))));
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[2]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0_1));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (ProgressStream_10));
            MR_hl_field(0, Var_45, 4) = ((MR_Box) (ClassTable_11));
            MR_hl_field(0, Var_45, 5) = ((MR_Box) (PragmaTVarSet_13));
            MR_hl_field(0, Var_45, 6) = ((MR_Box) (Context_19));
            MR_hl_field(0, Var_45, 7) = ((MR_Box) (Subst0_29));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), Var_45, Supers_30, ((MR_Box) (STATE_VARIABLE_ClassConstraintMap_1_37)), &conv3_STATE_VARIABLE_ClassConstraintMap_34);
          *STATE_VARIABLE_ClassConstraintMap_34 = ((MR_Word) (conv3_STATE_VARIABLE_ClassConstraintMap_34));
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ClassConstraintMap_34 = STATE_VARIABLE_ClassConstraintMap_1_37;
        break;
    }
    *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
  }
  else
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_79;

    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 26U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (ClassId_21));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[38])));
    }
    Var_66 = parse_tree__error_spec__color_as_subject_1_f_0(Var_67);
    Var_79 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[44])));
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[45])));
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[40])), Var_78);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_73);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[36])), Var_65);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.build_class_constraint_map\'/9"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_19));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_36 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
    }
    *STATE_VARIABLE_ClassConstraintMap_34 = STATE_VARIABLE_ClassConstraintMap_0_33;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_46;
  MR_Word conv1_STATE_VARIABLE_QualInfo_48;
  MR_Word conv0_STATE_VARIABLE_Specs_50;

  hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_48, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_50);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_46));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_48));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_50));
}

void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0(
  MR_Word TypeSpec_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_QualInfo_0_35,
  MR_Word * STATE_VARIABLE_QualInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_Word PFUMM_12 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 0))));
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 1))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 6))));
  MR_Word PredTable_20;
  MR_Word MaybePredOrFunc_23;
  MR_Word UserArity_26;
  MR_Word PredIds_27;
  MR_Word AllArityPredIds_28;
  MR_Word STATE_VARIABLE_Specs_1_42;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredTable_20);
  switch (MR_tag((MR_Word) PFUMM_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_70 = ((MR_Word) ((MR_hl_field(0, PFUMM_12, 0))));
        MR_Word PredFormArity_73;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_3[3]));
        if (((MR_tag((MR_Word) ModesOrArity_70)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_70, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_26, &PredFormArity_73);
        }
        else
        {
          MR_Word Modes_66 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_70, 0))));

          PredFormArity_73 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_66);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_26, PredFormArity_73);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_13, PredFormArity_73, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_13, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_1_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_21 = ((MR_Word) ((MR_hl_field(1, PFUMM_12, 0))));
        MR_Word PredFormArity_25;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_3[2]));
        if (((MR_tag((MR_Word) ModesOrArity_21)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_21, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_26, &PredFormArity_25);
        }
        else
        {
          MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_21, 0))));

          PredFormArity_25 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_24);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_26, PredFormArity_25);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_13, PredFormArity_25, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_13, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_1_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 2:
      {
        UserArity_26 = ((MR_Word) ((MR_hl_field(2, PFUMM_12, 0))));
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_33, (MR_String) "type_spec", PFUMM_12, SymName_13, Context_18, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_1_42);
        MaybePredOrFunc_23 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, SymName_13, UserArity_26, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_20, (MR_Integer) 0, SymName_13, &AllArityPredIds_28);
      }
      break;
  }
  if ((PredIds_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredIdTable_29;
    MR_Word OtherUserArities_30;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredIdTable_29);
    hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_29, AllArityPredIds_28, UserArity_26, &OtherUserArities_30);
    hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_23, SymName_13, UserArity_26, OtherUserArities_30, Context_18, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[25])), STATE_VARIABLE_Specs_1_42, STATE_VARIABLE_Specs_38);
    *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
    *STATE_VARIABLE_QualInfo_36 = STATE_VARIABLE_QualInfo_0_35;
  }
  else
  {
    MR_Word Var_53;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_34;
    MR_Box conv4_STATE_VARIABLE_QualInfo_36;
    MR_Box conv3_STATE_VARIABLE_Specs_38;

    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[1]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (TypeSpec_8));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[1]), Var_53, PredIds_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_33)), &conv5_STATE_VARIABLE_ModuleInfo_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_35)), &conv4_STATE_VARIABLE_QualInfo_36, ((MR_Box) (STATE_VARIABLE_Specs_1_42)), &conv3_STATE_VARIABLE_Specs_38);
    *STATE_VARIABLE_ModuleInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_34));
    *STATE_VARIABLE_QualInfo_36 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_36));
    *STATE_VARIABLE_Specs_38 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ModuleInfo_34;
  MR_Word conv9_STATE_VARIABLE_QualInfo_36;
  MR_Word conv8_STATE_VARIABLE_Specs_38;

  hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ModuleInfo_34, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_QualInfo_36, ((MR_Word) (wrapper_arg_6)), &conv8_STATE_VARIABLE_Specs_38);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_34));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_QualInfo_36));
  *wrapper_arg_7 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_38));
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__2_74;

  conv7_LambdaHeadVar__2_74 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__add_pragma_type_spec_constr__155__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_74));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__3_3;

  conv6_HeadVar__3_3 = parse_tree__parse_tree_out_pragma__mercury_pragma_type_spec_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Pragmas_30;

  hlds__make_hlds__add_pragma_type_spec__maybe_generate_pragma_type_specs_for_pred_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Pragmas_30);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Pragmas_30));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ClassConstraintMap_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  hlds__make_hlds__add_pragma_type_spec__build_class_constraint_map_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ClassConstraintMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ClassConstraintMap_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
}

void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word TypeSpecConstr_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr_10, 0))));
  MR_Word OoMConstraints_15 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr_10, 1))));
  MR_Word ApplyToSupers_16 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstr_10, 2))) & (MR_Integer) 1);
  MR_Word OoMTypeSubsts_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr_10, 3))));
  MR_Word PragmaTVarSet_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr_10, 4))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr_10, 6))));
  MR_Word ClassTable_22;
  MR_Word Constraints_23;
  MR_Word ClassConstraintMap_24;
  MR_Word ClassSpecs_25;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Box conv3_ClassConstraintMap_24;
  MR_Box conv2_ClassSpecs_25;

  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &ClassTable_22);
  Constraints_23 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), OoMConstraints_15);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_4[0]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_1));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (ClassTable_22));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (ApplyToSupers_16));
    MR_hl_field(0, Var_55, 6) = ((MR_Box) (PragmaTVarSet_18));
  }
  Var_56 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[1]), Var_55, Constraints_23, ((MR_Box) (Var_56)), &conv3_ClassConstraintMap_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_ClassSpecs_25);
  ClassConstraintMap_24 = ((MR_Word) (conv3_ClassConstraintMap_24));
  ClassSpecs_25 = ((MR_Word) (conv2_ClassSpecs_25));
  if ((ClassSpecs_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredTable_28;
    MR_Word PredIdTable_29;
    MR_Word Pragmas_30;
    MR_Word SortedPragmas_31;
    MR_Word Globals_32;
    MR_Word Inform_33;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_Specs_1_98;
    MR_Box conv5_Pragmas_30;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_50;
    MR_Box conv12_STATE_VARIABLE_QualInfo_52;
    MR_Box conv11_STATE_VARIABLE_Specs_54;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &PredTable_28);
    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_28, &PredIdTable_29);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_constr_8_p_0_2));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) (ModuleName_14));
      MR_hl_field(0, Var_62, 5) = ((MR_Box) (ClassConstraintMap_24));
      MR_hl_field(0, Var_62, 6) = ((MR_Box) (PragmaTVarSet_18));
      MR_hl_field(0, Var_62, 7) = ((MR_Box) (OoMTypeSubsts_17));
    }
    mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_62, PredIdTable_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Pragmas_30);
    Pragmas_30 = ((MR_Word) (conv5_Pragmas_30));
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), Pragmas_30, &SortedPragmas_31);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &Globals_32);
    libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 693, &Inform_33);
    switch (Inform_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_1_98 = STATE_VARIABLE_Specs_0_53;
        break;
      case (MR_Integer) 1:
        {
          MR_Word PragmaStrs_34;
          MR_Word Pieces0_35;
          MR_Word PragmaPieceLists_38;
          MR_Word PragmaPieces_39;
          MR_Word Pieces_40;
          MR_Word Spec_46;

          PragmaStrs_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_7[0]), SortedPragmas_31);
          Pieces0_35 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[15]));
          PragmaPieceLists_38 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[8]), PragmaStrs_34);
          mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PragmaPieceLists_38, &PragmaPieces_39);
          if ((PragmaStrs_34 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_35, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[17])));
          else
          {
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(1, PragmaStrs_34, 1))));

            if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_84;

              Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[19])), PragmaPieces_39);
              Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_35, Var_84);
            }
            else
            {
              MR_Word Var_90;

              Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[21])), PragmaPieces_39);
              Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_35, Var_90);
            }
          }
          {
            Spec_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.add_pragma_type_spec_constr\'/8"));
            MR_hl_field(0, Spec_46, 1) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_3[0])));
            MR_hl_field(0, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_46, 3) = ((MR_Box) (Context_20));
            MR_hl_field(0, Spec_46, 4) = ((MR_Box) (Pieces_40));
          }
          {
            STATE_VARIABLE_Specs_1_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_98, 0) = ((MR_Box) (Spec_46));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_98, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
          }
        }
        break;
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[9]), SortedPragmas_31, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_49)), &conv13_STATE_VARIABLE_ModuleInfo_50, ((MR_Box) (STATE_VARIABLE_QualInfo_0_51)), &conv12_STATE_VARIABLE_QualInfo_52, ((MR_Box) (STATE_VARIABLE_Specs_1_98)), &conv11_STATE_VARIABLE_Specs_54);
    *STATE_VARIABLE_ModuleInfo_50 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_50));
    *STATE_VARIABLE_QualInfo_52 = ((MR_Word) (conv12_STATE_VARIABLE_QualInfo_52));
    *STATE_VARIABLE_Specs_54 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_54));
  }
  else
  {
    *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ClassSpecs_25, STATE_VARIABLE_Specs_0_53);
    *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
    *STATE_VARIABLE_QualInfo_52 = STATE_VARIABLE_QualInfo_0_51;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____arg_vector_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____arg_vector_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____class_solns_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____class_solns_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____ground_or_tvar_subst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____ground_or_tvar_subst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____is_origin_type_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____is_origin_type_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____pragma_to_pred_tvar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____pragma_to_pred_tvar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____subst_soln_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____subst_soln_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_type_spec____Unify____type_spec_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_type_spec____Compare____type_spec_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_arg_vector_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_class_solns_map_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_ground_or_tvar_subst_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_is_origin_type_spec_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_pragma_to_pred_tvar_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_subst_soln_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_type_spec__hlds__make_hlds__add_pragma_type_spec__type_ctor_info_type_spec_constraint_map_0);
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_type_spec__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_type_spec.
