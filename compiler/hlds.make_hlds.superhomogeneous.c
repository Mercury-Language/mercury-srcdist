/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2022-03-12
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_test.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__superhomogeneous__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__type_ctor_info_context_0;

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

static MR_String MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__2034__1_3_f_0(
  MR_Word InstVarSet_47,
  MR_Word HeadVar__2_106,
  MR_Word HeadVar__3_201);

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
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_SVarState_0_7,
  MR_Word * STATE_VARIABLE_SVarState_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__have_seen_arg_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVar_5);

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
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(
  MR_Word XTerm_22,
  MR_Word YTerm_23,
  MR_Word Context_24,
  MR_Word MainContext_25,
  MR_Word SubContext_26,
  MR_Word Purity_27,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_57,
  MR_Word * Expansion_30,
  MR_Word STATE_VARIABLE_SVarState_0_58,
  MR_Word * STATE_VARIABLE_SVarState_59,
  MR_Word STATE_VARIABLE_SVarStore_0_60,
  MR_Word * STATE_VARIABLE_SVarStore_61,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

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
  MR_Word STATE_VARIABLE_SVarState_0_162,
  MR_Word * STATE_VARIABLE_SVarState_163,
  MR_Word STATE_VARIABLE_SVarStore_0_164,
  MR_Word * STATE_VARIABLE_SVarStore_165,
  MR_Word STATE_VARIABLE_VarSet_0_166,
  MR_Word * STATE_VARIABLE_VarSet_167,
  MR_Word STATE_VARIABLE_ModuleInfo_0_168,
  MR_Word * STATE_VARIABLE_ModuleInfo_169,
  MR_Word STATE_VARIABLE_QualInfo_0_170,
  MR_Word * STATE_VARIABLE_QualInfo_171,
  MR_Word STATE_VARIABLE_Specs_0_172,
  MR_Word * STATE_VARIABLE_Specs_173);

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
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(
  MR_Word XVar_22,
  MR_Word YTerm_23,
  MR_Word Context_24,
  MR_Word MainContext_25,
  MR_Word SubContext_26,
  MR_Word Purity_27,
  MR_Word AncestorVarMap_29,
  MR_Word * Expansion_30,
  MR_Word STATE_VARIABLE_SVarState_0_43,
  MR_Word * STATE_VARIABLE_SVarState_44,
  MR_Word STATE_VARIABLE_SVarStore_0_45,
  MR_Word * STATE_VARIABLE_SVarStore_46,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(
  MR_Word XVar_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word ArgContext_24,
  MR_Integer ArgNum_26,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_44,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_45,
  MR_Word * STATE_VARIABLE_SVarState_46,
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
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(
  MR_Word XVar_24,
  MR_Word YFunctor_25,
  MR_Word YArgTerms0_26,
  MR_Word YFunctorContext_27,
  MR_Word Context_28,
  MR_Word MainContext_29,
  MR_Word SubContext_30,
  MR_Word Purity_31,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_55,
  MR_Word * Expansion_34,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_SVarStore_0_58,
  MR_Word * STATE_VARIABLE_SVarStore_59,
  MR_Word STATE_VARIABLE_VarSet_0_60,
  MR_Word * STATE_VARIABLE_VarSet_61,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63,
  MR_Word STATE_VARIABLE_QualInfo_0_64,
  MR_Word * STATE_VARIABLE_QualInfo_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67);

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
  MR_Word STATE_VARIABLE_SVarState_0_50,
  MR_Word STATE_VARIABLE_SVarStore_0_51,
  MR_Word * STATE_VARIABLE_SVarStore_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_SVarStore_0_8,
  MR_Word * STATE_VARIABLE_SVarStore_9,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_QualInfo_0_14,
  MR_Word * STATE_VARIABLE_QualInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_21_p_0(
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
  MR_Word STATE_VARIABLE_SVarStore_0_12,
  MR_Word * STATE_VARIABLE_SVarStore_13,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
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
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_SVarStore_0_93,
  MR_Word * STATE_VARIABLE_SVarStore_94,
  MR_Word STATE_VARIABLE_VarSet_0_95,
  MR_Word * STATE_VARIABLE_VarSet_96,
  MR_Word STATE_VARIABLE_ModuleInfo_0_97,
  MR_Word * STATE_VARIABLE_ModuleInfo_98,
  MR_Word STATE_VARIABLE_QualInfo_0_99,
  MR_Word * STATE_VARIABLE_QualInfo_100,
  MR_Word STATE_VARIABLE_Specs_0_101,
  MR_Word * STATE_VARIABLE_Specs_102);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_22_p_0(
  MR_Word XVar_23,
  MR_Word ConsId_24,
  MR_Word MaybeQualifiedYArgTerms_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_49,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_50,
  MR_Word * STATE_VARIABLE_SVarState_51,
  MR_Word STATE_VARIABLE_SVarStore_0_52,
  MR_Word * STATE_VARIABLE_SVarStore_53,
  MR_Word STATE_VARIABLE_VarSet_0_54,
  MR_Word * STATE_VARIABLE_VarSet_55,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_QualInfo_0_58,
  MR_Word * STATE_VARIABLE_QualInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0_1(
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
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(
  MR_Word PurityPFArgsDetTerm_8,
  MR_Word MaybeDCGVars_9,
  MR_Word * MaybeLambdaHead_10,
  MR_Word STATE_VARIABLE_VarSet_0_61,
  MR_Word * STATE_VARIABLE_VarSet_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64);

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
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_7_p_0(
  MR_Word VarSet_8,
  MR_Word Functor_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Word * ConsId_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_17,
  MR_Word * STATE_VARIABLE_AncestorVarMap_18);

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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__occurs_check_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word AncestorVarMap_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

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


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[116][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[5][1];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[5][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_7[1][7];


struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
  const MR_Word hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[5];

struct hlds__make_hlds__superhomogeneous__vector_common_type_8_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_8_0_s hlds__make_hlds__superhomogeneous_vector_common_8[32];



static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[116][2] = {
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unexpected implementation defined literal"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044grade"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044pred"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044module"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044file"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044line"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The only valid implementation defined literals are"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[32])))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the clause neck operator"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can be used only in expressions of the form"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a field update expression:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the right hand side"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a field selection expression:"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the body of lambda expression:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have at least arguments."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that is defined by a DCG clause"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the head of a lambda expression"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in clauses for functions."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: DCG notation is not allowed"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or one of those forms preceded by either"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg>"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg>"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(<args>) = <retarg> is <determinism>"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<args>) = <retarg> is <determinism>"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(<args>) is <determinism>"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<args>) is <determinism>"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have one of the following forms:"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the clause head part of a lambda expression"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "some but not all arguments have modes."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in head of lambda expression:"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "none of the arguments have modes."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in head of predicate lambda expression:"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of the lambda expression:"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a valid determinism."))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the constraints on the inst"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are inconsistent."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the variable"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is unified with a term containing itself."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[7][3] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[5][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[5][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_7[1][7] = {
  /* row   0 */
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__type_ctor_info_context_0) },
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_0[1] = {
  (MR_Integer) 0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_unify_var_term_num_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_unify_var_term_num_context_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_unify_var_term_num_context_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_unify_var_term_num_context_0[1] = {
  (MR_Integer) 0
};

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

static MR_String MR_CALL 
hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__2034__1_3_f_0(
  MR_Word InstVarSet_47,
  MR_Word HeadVar__2_106,
  MR_Word HeadVar__3_201)
{
  MR_String HeadVar__4_202;

  HeadVar__4_202 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_47, HeadVar__2_106, HeadVar__3_201);
  return HeadVar__4_202;
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

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
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
    }
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX8_24)), ((MR_Box) (ArgY8_25)));
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
                  MR_Integer Var_59 = (MR_Integer) (Var_55);
                  MR_Integer Var_60 = (MR_Integer) (ArgY2_8);

                  succeeded = (Var_59 < Var_60);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_59 > Var_60);
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
                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY3_42)));
                }
              }
              break;
          }
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Integer Var_22;
          MR_Integer Var_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
  MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 2))));
  MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 4))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (LambdaVar_4));
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Mode_5));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_mode_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 4))));

  return Mode_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word LambdaVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 2))));

  return LambdaVar_4;
}

static MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(
  MR_Word LambdaArg_3)
{
  MR_Word ArgTerm_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaArg_3, (MR_Integer) 1))));

  return ArgTerm_4;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4)
{
  *GoalCord_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(
  MR_Word Args_10,
  MR_Word * Vars_11,
  MR_Word * VarsArgs_12,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_SVarState_0_19,
  MR_Word * STATE_VARIABLE_SVarState_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word RevVarsArgs_16;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_10_p_0(Args_10, Vars_11, (MR_Word) ((MR_Unsigned) 0U), &RevVarsArgs_16, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18, STATE_VARIABLE_SVarState_0_19, STATE_VARIABLE_SVarState_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_unify_var_term_0), RevVarsArgs_16, VarsArgs_12);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_SVarState_0_7,
  MR_Word * STATE_VARIABLE_SVarState_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_SVarState_8 = STATE_VARIABLE_SVarState_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
    *STATE_VARIABLE_RevVarsArgs_4 = STATE_VARIABLE_RevVarsArgs_0_3;
  }
  else
  {
    MR_Word Arg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_25;
    MR_Word Vars_26;
    MR_Word STATE_VARIABLE_RevVarsArgs_39_39;
    MR_Word STATE_VARIABLE_VarSet_40_40;
    MR_Word STATE_VARIABLE_SVarState_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Word Arg_61;
    MR_Word STATE_VARIABLE_VarSet_31_67;
    MR_Word Var_73;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(Arg_23, &Arg_61, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_31_67, STATE_VARIABLE_SVarState_0_7, &STATE_VARIABLE_SVarState_41_41, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_42_42);
    if (((MR_tag((MR_Word) Arg_61)) == (MR_Integer) 0))
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_25, STATE_VARIABLE_VarSet_31_67, &STATE_VARIABLE_VarSet_40_40);
    else
    {
      MR_Word ArgVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_61, (MR_Integer) 0))));

      succeeded = hlds__make_hlds__superhomogeneous__have_seen_arg_var_2_p_0(STATE_VARIABLE_RevVarsArgs_0_3, ArgVar_62);
      if (succeeded)
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_25, STATE_VARIABLE_VarSet_31_67, &STATE_VARIABLE_VarSet_40_40);
      else
      {
        Var_25 = ArgVar_62;
        STATE_VARIABLE_VarSet_40_40 = STATE_VARIABLE_VarSet_31_67;
      }
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Arg_61));
    }
    {
      STATE_VARIABLE_RevVarsArgs_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarsArgs_39_39, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarsArgs_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsArgs_0_3));
    }
    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_10_p_0(Args_24, &Vars_26, STATE_VARIABLE_RevVarsArgs_39_39, STATE_VARIABLE_RevVarsArgs_4, STATE_VARIABLE_VarSet_40_40, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_SVarState_41_41, STATE_VARIABLE_SVarState_8, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_26));
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
      RevUnifyVarTerm_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      RevUnifyVarTerms_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      RevVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevUnifyVarTerm_3, (MR_Integer) 0))));
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
  MR_Word Expansion_34;
  MR_Word GoalInfo_35;

  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(LHS0_20, RHS0_21, Context_22, MainContext_23, SubContext_24, Purity_25, &Expansion_34, STATE_VARIABLE_SVarState_0_36, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_35);
  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(GoalInfo_35, Expansion_34, Goal_26);
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
  MR_Word LHS_35;
  MR_Word RHS_36;
  MR_Word STATE_VARIABLE_VarSet_49_49;
  MR_Word STATE_VARIABLE_SVarState_50_50;
  MR_Word STATE_VARIABLE_Specs_51_51;
  MR_Word STATE_VARIABLE_VarSet_52_52;
  MR_Word STATE_VARIABLE_SVarState_53_53;
  MR_Word STATE_VARIABLE_Specs_54_54;
  MR_Word Var_55;

  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(LHS0_21, &LHS_35, STATE_VARIABLE_VarSet_0_41, &STATE_VARIABLE_VarSet_49_49, STATE_VARIABLE_SVarState_0_37, &STATE_VARIABLE_SVarState_50_50, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_51_51);
  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(RHS0_22, &RHS_36, STATE_VARIABLE_VarSet_49_49, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_SVarState_50_50, &STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_54_54);
  Var_55 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(LHS_35, RHS_36, Context_23, MainContext_24, SubContext_25, Purity_26, Var_55, Expansion_28, STATE_VARIABLE_SVarState_53_53, STATE_VARIABLE_SVarState_38, STATE_VARIABLE_SVarStore_0_39, STATE_VARIABLE_SVarStore_40, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarSet_42, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_48);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(
  MR_Word XTerm_22,
  MR_Word YTerm_23,
  MR_Word Context_24,
  MR_Word MainContext_25,
  MR_Word SubContext_26,
  MR_Word Purity_27,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_57,
  MR_Word * Expansion_30,
  MR_Word STATE_VARIABLE_SVarState_0_58,
  MR_Word * STATE_VARIABLE_SVarState_59,
  MR_Word STATE_VARIABLE_SVarStore_0_60,
  MR_Word * STATE_VARIABLE_SVarStore_61,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word STATE_VARIABLE_QualInfo_0_66,
  MR_Word * STATE_VARIABLE_QualInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  if (((MR_tag((MR_Word) XTerm_22)) == (MR_Integer) 0))
  {
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_22, (MR_Integer) 2))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_22, (MR_Integer) 1))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), XTerm_22, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) YTerm_23)) == (MR_Integer) 0))
    {
      MR_Word TmpVar_50;
      MR_Word ExpansionX_51;
      MR_Word ExpansionY_52;
      MR_Word GoalInfo_53;
      MR_Word MaybeWrappedGoalCordX_54;
      MR_Word MaybeWrappedGoalCordY_55;
      MR_Word GoalCord_56;
      MR_Word STATE_VARIABLE_VarSet_70_70;
      MR_Word STATE_VARIABLE_SVarState_71_71;
      MR_Word STATE_VARIABLE_SVarStore_72_72;
      MR_Word STATE_VARIABLE_VarSet_73_73;
      MR_Word STATE_VARIABLE_ModuleInfo_74_74;
      MR_Word STATE_VARIABLE_QualInfo_75_75;
      MR_Word STATE_VARIABLE_Specs_76_76;
      MR_Word YFunctor_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 0))));
      MR_Word YArgTerms_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 1))));
      MR_Word YFunctorContext_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 2))));

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &TmpVar_50, STATE_VARIABLE_VarSet_0_62, &STATE_VARIABLE_VarSet_70_70);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(TmpVar_50, Var_113, Var_112, Var_111, Context_24, MainContext_25, SubContext_26, Purity_27, STATE_VARIABLE_AncestorVarMap_0_57, &ExpansionX_51, STATE_VARIABLE_SVarState_0_58, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_60, &STATE_VARIABLE_SVarStore_72_72, STATE_VARIABLE_VarSet_70_70, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_64, &STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_QualInfo_0_66, &STATE_VARIABLE_QualInfo_75_75, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_76_76);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(TmpVar_50, YFunctor_102, YArgTerms_103, YFunctorContext_104, Context_24, MainContext_25, SubContext_26, Purity_27, STATE_VARIABLE_AncestorVarMap_0_57, &ExpansionY_52, STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarState_59, STATE_VARIABLE_SVarStore_72_72, STATE_VARIABLE_SVarStore_61, STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_VarSet_63, STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_QualInfo_75_75, STATE_VARIABLE_QualInfo_67, STATE_VARIABLE_Specs_76_76, STATE_VARIABLE_Specs_69);
      hlds__hlds_goal__goal_info_init_2_p_0(Context_24, &GoalInfo_53);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(GoalInfo_53, ExpansionX_51, &MaybeWrappedGoalCordX_54);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(GoalInfo_53, ExpansionY_52, &MaybeWrappedGoalCordY_55);
      GoalCord_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWrappedGoalCordX_54, MaybeWrappedGoalCordY_55);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_30 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_56));
      }
    }
    else
    {
      MR_Word YVar_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_23, (MR_Integer) 0))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(YVar_101, Var_113, Var_112, Var_111, Context_24, MainContext_25, SubContext_26, Purity_27, STATE_VARIABLE_AncestorVarMap_0_57, Expansion_30, STATE_VARIABLE_SVarState_0_58, STATE_VARIABLE_SVarState_59, STATE_VARIABLE_SVarStore_0_60, STATE_VARIABLE_SVarStore_61, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_QualInfo_0_66, STATE_VARIABLE_QualInfo_67, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
    }
  }
  else
  {
    MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), XTerm_22, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) YTerm_23)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 0))));
      MR_Word YArgTerms_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 1))));
      MR_Word YFunctorContext_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 2))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(Var_115, YFunctor_43, YArgTerms_44, YFunctorContext_45, Context_24, MainContext_25, SubContext_26, Purity_27, STATE_VARIABLE_AncestorVarMap_0_57, Expansion_30, STATE_VARIABLE_SVarState_0_58, STATE_VARIABLE_SVarState_59, STATE_VARIABLE_SVarStore_0_60, STATE_VARIABLE_SVarStore_61, STATE_VARIABLE_VarSet_0_62, STATE_VARIABLE_VarSet_63, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65, STATE_VARIABLE_QualInfo_0_66, STATE_VARIABLE_QualInfo_67, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
    }
    else
    {
      MR_Word YVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_23, (MR_Integer) 0))));
      MR_Word Goal_41;
      MR_Word Var_96;
      MR_Word Var_99;

      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (YVar_39));
      }
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(Var_115, Var_96, Context_24, MainContext_25, SubContext_26, Purity_27, &Goal_41, STATE_VARIABLE_QualInfo_0_66, STATE_VARIABLE_QualInfo_67);
      Var_99 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_41)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Expansion_30 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_99));
      }
      *STATE_VARIABLE_SVarState_59 = STATE_VARIABLE_SVarState_0_58;
      *STATE_VARIABLE_SVarStore_61 = STATE_VARIABLE_SVarStore_0_60;
      *STATE_VARIABLE_VarSet_63 = STATE_VARIABLE_VarSet_0_62;
      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
      *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_0_68;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_6;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0(
  MR_Word XVarsArgTermsArgNumsContexts0_17,
  MR_Word Context_18,
  MR_Word Goal0_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_SVarStore_0_34,
  MR_Word * STATE_VARIABLE_SVarStore_35,
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_Word XVarsArgTermsArgNumsContexts_27;
  MR_Word AncestorVarMap_28;
  MR_Word Expansions_29;
  MR_Word GoalInfo0_31;
  MR_Word STATE_VARIABLE_VarSet_44_44;
  MR_Word STATE_VARIABLE_SVarState_45_45;
  MR_Word STATE_VARIABLE_Specs_46_46;
  MR_Word BaseGoals_60;
  MR_Word ExpansionGoalCords_61;
  MR_Word ExpansionGoals_62;
  MR_Word Var_63;
  MR_Word Var_64;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_8_p_0(XVarsArgTermsArgNumsContexts0_17, &XVarsArgTermsArgNumsContexts_27, STATE_VARIABLE_VarSet_0_36, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_SVarState_0_32, &STATE_VARIABLE_SVarState_45_45, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_46_46);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &AncestorVarMap_28);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_17_p_0(XVarsArgTermsArgNumsContexts_27, Context_18, AncestorVarMap_28, &Expansions_29, STATE_VARIABLE_SVarState_45_45, STATE_VARIABLE_SVarState_33, STATE_VARIABLE_SVarStore_0_34, STATE_VARIABLE_SVarStore_35, STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarSet_37, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_QualInfo_0_40, STATE_VARIABLE_QualInfo_41, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_43);
  GoalInfo0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_19, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_19, &BaseGoals_60);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0_1));
    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (GoalInfo0_31));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_63, Expansions_29, &ExpansionGoalCords_61);
  ExpansionGoals_62 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_61);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_62, BaseGoals_60);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_64, GoalInfo0_31, Goal_20);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word UVTNC0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word UVTNCs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word UVTNC_20;
    MR_Word UVTNCs_21;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UVTNC0_18, (MR_Integer) 0))));
    MR_Word Arg0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UVTNC0_18, (MR_Integer) 1))));
    MR_Integer ArgNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UVTNC0_18, (MR_Integer) 2))));
    MR_Word ArgContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UVTNC0_18, (MR_Integer) 3))));
    MR_Word Arg_29;
    MR_Word STATE_VARIABLE_VarSet_36_36;
    MR_Word STATE_VARIABLE_State_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(Arg0_26, &Arg_29, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_37_37, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_38_38);
    {
      UVTNC_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UVTNC_20, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), UVTNC_20, 1) = ((MR_Box) (Arg_29));
      MR_hl_field(MR_mktag(0), UVTNC_20, 2) = ((MR_Box) (ArgNum_27));
      MR_hl_field(MR_mktag(0), UVTNC_20, 3) = ((MR_Box) (ArgContext_28));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_8_p_0(UVTNCs0_19, &UVTNCs_21, STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_State_37_37, STATE_VARIABLE_State_6, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UVTNC_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UVTNCs_21));
    }
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
  MR_Word STATE_VARIABLE_SVarState_0_162,
  MR_Word * STATE_VARIABLE_SVarState_163,
  MR_Word STATE_VARIABLE_SVarStore_0_164,
  MR_Word * STATE_VARIABLE_SVarStore_165,
  MR_Word STATE_VARIABLE_VarSet_0_166,
  MR_Word * STATE_VARIABLE_VarSet_167,
  MR_Word STATE_VARIABLE_ModuleInfo_0_168,
  MR_Word * STATE_VARIABLE_ModuleInfo_169,
  MR_Word STATE_VARIABLE_QualInfo_0_170,
  MR_Word * STATE_VARIABLE_QualInfo_171,
  MR_Word STATE_VARIABLE_Specs_0_172,
  MR_Word * STATE_VARIABLE_Specs_173)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(YAtom_24)) & (MR_Integer) 31);
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
            MR_Word TypeCtorInfo_534_534;
            MR_Word LVal_48;
            MR_Word RVal_49;
            MR_Word ExpansionL_50;
            MR_Word ExpansionR_51;
            MR_Word GoalCordL_53;
            MR_Word GoalCordR_55;
            MR_Word STATE_VARIABLE_SVarState_402_402;
            MR_Word STATE_VARIABLE_SVarStore_403_403;
            MR_Word STATE_VARIABLE_VarSet_404_404;
            MR_Word STATE_VARIABLE_ModuleInfo_405_405;
            MR_Word STATE_VARIABLE_QualInfo_406_406;
            MR_Word STATE_VARIABLE_Specs_407_407;
            MR_Word Var_414;
            MR_Word Var_415;
            MR_Word Var_1010;
            MR_Word Var_1012;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LVal_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_1012 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_1012 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RVal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1012, (MR_Integer) 0))));
                Var_1010 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1012, (MR_Integer) 1))));
                succeeded = (Var_1010 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, LVal_48, Context_27, MainContext_28, SubContext_29, Purity_30, &ExpansionL_50, STATE_VARIABLE_SVarState_0_162, &STATE_VARIABLE_SVarState_402_402, STATE_VARIABLE_SVarStore_0_164, &STATE_VARIABLE_SVarStore_403_403, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_404_404, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_405_405, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_406_406, STATE_VARIABLE_Specs_0_172, &STATE_VARIABLE_Specs_407_407);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, RVal_49, Context_27, MainContext_28, SubContext_29, Purity_30, &ExpansionR_51, STATE_VARIABLE_SVarState_402_402, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_SVarStore_403_403, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_404_404, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_405_405, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_406_406, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_407_407, STATE_VARIABLE_Specs_173);
                  GoalCordL_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpansionL_50, (MR_Integer) 1))));
                  GoalCordR_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpansionR_51, (MR_Integer) 1))));
                  Var_414 = (MR_Word) ((MR_Unsigned) 0U);
                  TypeCtorInfo_534_534 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  Var_415 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_534_534, GoalCordL_53, GoalCordR_55);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Expansion_32 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_414));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_415));
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
            MR_Word YTerm_156;
            MR_Word Var_184;

            {
              Var_184 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_184, 0) = ((MR_Box) (YAtom_24));
            }
            {
              YTerm_156 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), YTerm_156, 0) = ((MR_Box) (Var_184));
              MR_hl_field(MR_mktag(0), YTerm_156, 1) = ((MR_Box) (YArgTerms_25));
              MR_hl_field(MR_mktag(0), YTerm_156, 2) = ((MR_Box) (YFunctorContext_26));
            }
            hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, YTerm_156, (MR_Word) ((MR_Unsigned) 0U), Expansion_32, STATE_VARIABLE_SVarState_0_162, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_0_166, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_0_168, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_0_172, STATE_VARIABLE_Specs_173);
            *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "coerce"
          ;
          {
            MR_Word TypeCtorInfo_536_536;
            MR_Word RValTerm0_61;
            MR_Word RValTermVar_62;
            MR_Word RValGoalCord_64;
            MR_Word CoerceGoalExpr_70;
            MR_Word CoerceGoalInfo_71;
            MR_Word CoerceGoal_72;
            MR_Word CoerceGoalCord_73;
            MR_Word Var_371;
            MR_Word Var_383;
            MR_Word Var_385;
            MR_Word Var_386;
            MR_Word Var_388;
            MR_Word Var_389;
            MR_Word Var_390;
            MR_Word Var_391;
            MR_Word Var_392;
            MR_Word Var_393;
            MR_Word Var_394;
            MR_Word Var_395;
            MR_Word Var_396;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_371 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) RValTerm0_61)) == (MR_Integer) 0))
                {
                  MR_Word RValTermExpansion_68;
                  MR_Word STATE_VARIABLE_VarSet_372_372;
                  MR_Word STATE_VARIABLE_SVarState_373_373;
                  MR_Word STATE_VARIABLE_Specs_374_374;
                  MR_Word STATE_VARIABLE_VarSet_376_376;
                  MR_Word RValTerm_432;

                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(RValTerm0_61, &RValTerm_432, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_372_372, STATE_VARIABLE_SVarState_0_162, &STATE_VARIABLE_SVarState_373_373, STATE_VARIABLE_Specs_0_172, &STATE_VARIABLE_Specs_374_374);
                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(RValTerm0_61, &RValTermVar_62, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_VarSet_372_372, &STATE_VARIABLE_VarSet_376_376);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(RValTermVar_62, RValTerm_432, Context_27, MainContext_28, SubContext_29, Purity_30, &RValTermExpansion_68, STATE_VARIABLE_SVarState_373_373, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_376_376, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_0_168, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_374_374, STATE_VARIABLE_Specs_173);
                  RValGoalCord_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RValTermExpansion_68, (MR_Integer) 1))));
                }
                else
                {
                  RValTermVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RValTerm0_61, (MR_Integer) 0))));
                  RValGoalCord_64 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                  *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
                  *STATE_VARIABLE_SVarStore_165 = STATE_VARIABLE_SVarStore_0_164;
                  *STATE_VARIABLE_VarSet_167 = STATE_VARIABLE_VarSet_0_166;
                  *STATE_VARIABLE_ModuleInfo_169 = STATE_VARIABLE_ModuleInfo_0_168;
                  *STATE_VARIABLE_QualInfo_171 = STATE_VARIABLE_QualInfo_0_170;
                  *STATE_VARIABLE_Specs_173 = STATE_VARIABLE_Specs_0_172;
                }
                Var_383 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_3[2]));
                {
                  Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_386, 0) = ((MR_Box) (XVar_23));
                  MR_hl_field(MR_mktag(1), Var_386, 1) = ((MR_Box) (Var_371));
                }
                {
                  Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (RValTermVar_62));
                  MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (Var_386));
                }
                Var_389 = parse_tree__prog_mode__in_mode_0_f_0();
                Var_391 = parse_tree__prog_mode__out_mode_0_f_0();
                Var_392 = (MR_Word) ((MR_Unsigned) 0U);
                Var_393 = (MR_Word) ((MR_Unsigned) 0U);
                Var_394 = (MR_Integer) 0;
                {
                  Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_390, 0) = ((MR_Box) (Var_391));
                  MR_hl_field(MR_mktag(1), Var_390, 1) = ((MR_Box) (Var_392));
                }
                {
                  Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_388, 0) = ((MR_Box) (Var_389));
                  MR_hl_field(MR_mktag(1), Var_388, 1) = ((MR_Box) (Var_390));
                }
                {
                  CoerceGoalExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 1) = ((MR_Box) (Var_383));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 2) = ((MR_Box) (Var_385));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 3) = ((MR_Box) (Var_388));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 4) = ((MR_Box) (Var_393));
                  MR_hl_field(MR_mktag(3), CoerceGoalExpr_70, 5) = (MR_Box) ((MR_Unsigned) (Var_394));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &CoerceGoalInfo_71);
                TypeCtorInfo_536_536 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                {
                  CoerceGoal_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CoerceGoal_72, 0) = ((MR_Box) (CoerceGoalExpr_70));
                  MR_hl_field(MR_mktag(0), CoerceGoal_72, 1) = ((MR_Box) (CoerceGoalInfo_71));
                }
                CoerceGoalCord_73 = mercury__cord__singleton_1_f_0(TypeCtorInfo_536_536, ((MR_Box) (CoerceGoal_72)));
                Var_395 = (MR_Word) ((MR_Unsigned) 0U);
                Var_396 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_536_536, RValGoalCord_64, CoerceGoalCord_73);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_395));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_396));
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
            MR_Word TypeCtorInfo_537_840;
            MR_Word TypeCtorInfo_538_841;
            MR_Word TypeCtorInfo_539_842;
            MR_Word CondThenTerm0_74;
            MR_Word Var_322;
            MR_Word Var_323;
            MR_Word Var_324;
            MR_String Var_325;
            MR_Word Var_326;
            MR_Word Var_327;
            MR_Word Var_328;
            MR_String Var_329;
            MR_Word Var_330;
            MR_Word Var_331;
            MR_Word Var_332;
            MR_Word Var_333;
            MR_Word CondTerm_775;
            MR_Word MaybeVarsCond_776;
            MR_Word STATE_VARIABLE_VarSet_334_809;
            MR_Word ContextPieces_839;
            MR_Word ElseTerm0_923;
            MR_Word CondTerm0_924;
            MR_Word ThenTerm0_925;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondThenTerm0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_322 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_923 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 0))));
                Var_323 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 1))));
                succeeded = (Var_323 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) CondThenTerm0_74)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_324 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_74, (MR_Integer) 0))));
                    Var_326 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_74, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_324)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_325 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_324, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_325, (MR_String) "if") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_326 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_327 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 0))));
                          Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 1))));
                          succeeded = (Var_333 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_327)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_327, (MR_Integer) 0))));
                              Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_327, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_328)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_329 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_328, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_329, (MR_String) "then") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_330 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    CondTerm0_924 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_330, (MR_Integer) 0))));
                                    Var_331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_330, (MR_Integer) 1))));
                                    succeeded = (Var_331 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ThenTerm0_925 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_331, (MR_Integer) 0))));
                                      Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_331, (MR_Integer) 1))));
                                      succeeded = (Var_332 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_537_840 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                        TypeCtorInfo_538_841 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                        mercury__term__coerce_2_p_0(TypeCtorInfo_537_840, TypeCtorInfo_538_841, CondTerm0_924, &CondTerm_775);
                                        TypeCtorInfo_539_842 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                                        ContextPieces_839 = mercury__cord__init_0_f_0(TypeCtorInfo_539_842);
                                        parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_775, ContextPieces_839, &MaybeVarsCond_776, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_334_809);
                                        if (((MR_tag((MR_Word) MaybeVarsCond_776)) == (MR_Integer) 0))
                                        {
                                          MR_Word VarsCondSpecs_641 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeVarsCond_776, (MR_Integer) 0))));
                                          MR_Word Var_643;
                                          MR_Word Var_644;

                                          *STATE_VARIABLE_Specs_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarsCondSpecs_641, STATE_VARIABLE_Specs_0_172);
                                          Var_644 = hlds__make_goal__true_goal_with_context_1_f_0(Context_27);
                                          Var_643 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_644)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_32 = base;
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_643));
                                          }
                                          *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
                                          *STATE_VARIABLE_SVarStore_165 = STATE_VARIABLE_SVarStore_0_164;
                                          *STATE_VARIABLE_VarSet_167 = STATE_VARIABLE_VarSet_334_809;
                                          *STATE_VARIABLE_ModuleInfo_169 = STATE_VARIABLE_ModuleInfo_0_168;
                                          *STATE_VARIABLE_QualInfo_171 = STATE_VARIABLE_QualInfo_0_170;
                                        }
                                        else
                                        {
                                          MR_Word Vars_647 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_776, (MR_Integer) 0))));
                                          MR_Word StateVars_648 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_776, (MR_Integer) 1))));
                                          MR_Word CondParseTree_649 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_776, (MR_Integer) 2))));
                                          MR_Word CondWarningSpecs_650 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_776, (MR_Integer) 3))));
                                          MR_Word BeforeInsideSVarState_652;
                                          MR_Word EmptySubst_653;
                                          MR_Word CondGoal_654;
                                          MR_Word AfterCondInsideSVarState_655;
                                          MR_Word ThenTerm_656;
                                          MR_Word AfterThenInsideSVarState0_657;
                                          MR_Word AncestorVarMap_658;
                                          MR_Word ThenExpansion_659;
                                          MR_Word AfterThenInsideSVarState_660;
                                          MR_Word ThenGoalInfo_661;
                                          MR_Word ThenGoal0_662;
                                          MR_Word Globals_663;
                                          MR_Word ModuleName_664;
                                          MR_Word AfterThenSVarState_665;
                                          MR_Word ElseTerm_666;
                                          MR_Word AfterElseSVarState0_667;
                                          MR_Word ElseExpansion_668;
                                          MR_Word AfterElseSVarState_669;
                                          MR_Word ElseGoalInfo_670;
                                          MR_Word ElseGoal0_671;
                                          MR_Word ThenGoal_672;
                                          MR_Word ElseGoal_673;
                                          MR_Word GoalExpr_675;
                                          MR_Word GoalInfo_676;
                                          MR_Word Goal_677;
                                          MR_Word STATE_VARIABLE_Specs_339_678;
                                          MR_Word STATE_VARIABLE_Specs_340_679;
                                          MR_Word STATE_VARIABLE_SVarStore_342_681;
                                          MR_Word STATE_VARIABLE_VarSet_343_682;
                                          MR_Word STATE_VARIABLE_ModuleInfo_344_683;
                                          MR_Word STATE_VARIABLE_QualInfo_345_684;
                                          MR_Word STATE_VARIABLE_Specs_346_685;
                                          MR_Word STATE_VARIABLE_VarSet_347_686;
                                          MR_Word STATE_VARIABLE_Specs_348_687;
                                          MR_Word STATE_VARIABLE_SVarStore_349_688;
                                          MR_Word STATE_VARIABLE_VarSet_350_689;
                                          MR_Word STATE_VARIABLE_ModuleInfo_351_690;
                                          MR_Word STATE_VARIABLE_QualInfo_352_691;
                                          MR_Word STATE_VARIABLE_Specs_353_692;
                                          MR_Word Var_693;
                                          MR_Word STATE_VARIABLE_VarSet_355_694;
                                          MR_Word STATE_VARIABLE_Specs_356_695;
                                          MR_Word STATE_VARIABLE_SVarStore_357_696;
                                          MR_Word STATE_VARIABLE_VarSet_358_697;
                                          MR_Word STATE_VARIABLE_Specs_361_698;
                                          MR_Word Var_699;
                                          MR_Word Var_701;
                                          MR_Word Var_703;

                                          STATE_VARIABLE_Specs_339_678 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_650, STATE_VARIABLE_Specs_0_172);
                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_27, STATE_VARIABLE_VarSet_334_809, StateVars_648, STATE_VARIABLE_SVarState_0_162, &BeforeInsideSVarState_652, STATE_VARIABLE_Specs_339_678, &STATE_VARIABLE_Specs_340_679);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptySubst_653);
                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, CondParseTree_649, EmptySubst_653, &CondGoal_654, BeforeInsideSVarState_652, &AfterCondInsideSVarState_655, STATE_VARIABLE_SVarStore_0_164, &STATE_VARIABLE_SVarStore_342_681, STATE_VARIABLE_VarSet_334_809, &STATE_VARIABLE_VarSet_343_682, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_344_683, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_345_684, STATE_VARIABLE_Specs_340_679, &STATE_VARIABLE_Specs_346_685);
                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ThenTerm0_925, &ThenTerm_656, STATE_VARIABLE_VarSet_343_682, &STATE_VARIABLE_VarSet_347_686, AfterCondInsideSVarState_655, &AfterThenInsideSVarState0_657, STATE_VARIABLE_Specs_346_685, &STATE_VARIABLE_Specs_348_687);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &AncestorVarMap_658);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(XVar_23, ThenTerm_656, Context_27, MainContext_28, SubContext_29, Purity_30, AncestorVarMap_658, &ThenExpansion_659, AfterThenInsideSVarState0_657, &AfterThenInsideSVarState_660, STATE_VARIABLE_SVarStore_342_681, &STATE_VARIABLE_SVarStore_349_688, STATE_VARIABLE_VarSet_347_686, &STATE_VARIABLE_VarSet_350_689, STATE_VARIABLE_ModuleInfo_344_683, &STATE_VARIABLE_ModuleInfo_351_690, STATE_VARIABLE_QualInfo_345_684, &STATE_VARIABLE_QualInfo_352_691, STATE_VARIABLE_Specs_348_687, &STATE_VARIABLE_Specs_353_692);
                                          Var_693 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_537_840, ThenTerm_656);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_693, &ThenGoalInfo_661);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ThenGoalInfo_661, ThenExpansion_659, &ThenGoal0_662);
                                          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_351_690, &Globals_663);
                                          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_351_690, &ModuleName_664);
                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_663, ModuleName_664, StateVars_648, STATE_VARIABLE_SVarState_0_162, AfterThenInsideSVarState_660, &AfterThenSVarState_665);
                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ElseTerm0_923, &ElseTerm_666, STATE_VARIABLE_VarSet_350_689, &STATE_VARIABLE_VarSet_355_694, STATE_VARIABLE_SVarState_0_162, &AfterElseSVarState0_667, STATE_VARIABLE_Specs_353_692, &STATE_VARIABLE_Specs_356_695);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(XVar_23, ElseTerm_666, Context_27, MainContext_28, SubContext_29, Purity_30, AncestorVarMap_658, &ElseExpansion_668, AfterElseSVarState0_667, &AfterElseSVarState_669, STATE_VARIABLE_SVarStore_349_688, &STATE_VARIABLE_SVarStore_357_696, STATE_VARIABLE_VarSet_355_694, &STATE_VARIABLE_VarSet_358_697, STATE_VARIABLE_ModuleInfo_351_690, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_352_691, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_356_695, &STATE_VARIABLE_Specs_361_698);
                                          Var_699 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_537_840, ElseTerm_666);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_699, &ElseGoalInfo_670);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ElseGoalInfo_670, ElseExpansion_668, &ElseGoal0_671);
                                          hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_663, ModuleName_664, (MR_Integer) 1, Context_27, StateVars_648, ThenGoal0_662, &ThenGoal_672, ElseGoal0_671, &ElseGoal_673, STATE_VARIABLE_SVarState_0_162, AfterCondInsideSVarState_655, AfterThenSVarState_665, AfterElseSVarState_669, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_VarSet_358_697, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_SVarStore_357_696, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_Specs_361_698, STATE_VARIABLE_Specs_173);
                                          Var_701 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_648, Vars_647);
                                          {
                                            GoalExpr_675 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(3), GoalExpr_675, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                            MR_hl_field(MR_mktag(3), GoalExpr_675, 1) = ((MR_Box) (Var_701));
                                            MR_hl_field(MR_mktag(3), GoalExpr_675, 2) = ((MR_Box) (CondGoal_654));
                                            MR_hl_field(MR_mktag(3), GoalExpr_675, 3) = ((MR_Box) (ThenGoal_672));
                                            MR_hl_field(MR_mktag(3), GoalExpr_675, 4) = ((MR_Box) (ElseGoal_673));
                                          }
                                          hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_676);
                                          {
                                            Goal_677 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), Goal_677, 0) = ((MR_Box) (GoalExpr_675));
                                            MR_hl_field(MR_mktag(0), Goal_677, 1) = ((MR_Box) (GoalInfo_676));
                                          }
                                          Var_703 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_677)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_32 = base;
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_703));
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
            MR_Word PurityPFArgsDetTerm_149;
            MR_Word BodyGoalTerm_150;
            MR_Word Var_191;
            MR_Word Var_192;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_191 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 0))));
                Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 1))));
                succeeded = (Var_192 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_193;
              MR_Tuple Var_199;

              {
                Var_199 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (BodyGoalTerm_150));
              }
              {
                Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Var_199));
              }
              hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, PurityPFArgsDetTerm_149, Var_193, Expansion_32, STATE_VARIABLE_SVarState_0_162, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_0_166, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_0_168, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_0_172, STATE_VARIABLE_Specs_173);
            }
            else
            {
              MR_String Form_153;
              MR_Word Pieces_154;
              MR_Word Spec_155;
              MR_String Var_200;
              MR_Word Var_203;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_208;
              MR_Word Var_209;
              MR_Word Var_223;

              Var_200 = mercury__string__f_43_43_2_f_0(YAtom_24, (MR_String) " <lambda expression body>");
              Form_153 = mercury__string__f_43_43_2_f_0((MR_String) "<lambda expression head> ", Var_200);
              {
                Var_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_204, 1) = ((MR_Box) (YAtom_24));
              }
              {
                Var_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_209, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_209, 1) = ((MR_Box) (Form_153));
              }
              {
                Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (Var_209));
                MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])));
              }
              {
                Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[37])));
                MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (Var_208));
              }
              {
                Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Var_204));
                MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_205));
              }
              {
                Pieces_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[36])));
                MR_hl_field(MR_mktag(1), Pieces_154, 1) = ((MR_Box) (Var_203));
              }
              {
                Spec_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_155, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/22"));
                MR_hl_field(MR_mktag(1), Spec_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_155, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_155, 3) = ((MR_Box) (YFunctorContext_26));
                MR_hl_field(MR_mktag(1), Spec_155, 4) = ((MR_Box) (Pieces_154));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_173 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_155));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_172));
              }
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171);
              Var_223 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_32 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_223));
              }
              *STATE_VARIABLE_ModuleInfo_169 = STATE_VARIABLE_ModuleInfo_0_168;
              *STATE_VARIABLE_VarSet_167 = STATE_VARIABLE_VarSet_0_166;
              *STATE_VARIABLE_SVarStore_165 = STATE_VARIABLE_SVarStore_0_164;
            }
            *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
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
            MR_Word TypeCtorInfo_529_529;
            MR_Word TypeCtorInfo_530_530;
            MR_Word TypeCtorInfo_531_531;
            MR_Word RValTerm_39;
            MR_Word DeclTypeTerm0_40;
            MR_Word DeclTypeTerm1_41;
            MR_Word ContextPieces_42;
            MR_Word GenericVarSet_43;
            MR_Word DeclTypeResult_44;
            MR_Word Var_416;
            MR_Word Var_417;
            MR_Word Var_418;
            MR_Word Var_420;
            MR_Word STATE_VARIABLE_ModuleInfo_423_423;
            MR_Word STATE_VARIABLE_QualInfo_424_424;
            MR_Word STATE_VARIABLE_Specs_425_425;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_416 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_416 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                DeclTypeTerm0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_416, (MR_Integer) 0))));
                Var_417 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_416, (MR_Integer) 1))));
                succeeded = (Var_417 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeCtorInfo_529_529 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  TypeCtorInfo_530_530 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  mercury__term__coerce_2_p_0(TypeCtorInfo_529_529, TypeCtorInfo_530_530, DeclTypeTerm0_40, &DeclTypeTerm1_41);
                  TypeCtorInfo_531_531 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                  Var_418 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[38]));
                  ContextPieces_42 = mercury__cord__singleton_1_f_0(TypeCtorInfo_531_531, ((MR_Box) (Var_418)));
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_529_529, TypeCtorInfo_530_530, STATE_VARIABLE_VarSet_0_166, &GenericVarSet_43);
                  Var_420 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_3[1]));
                  parse_tree__parse_type_name__parse_type_5_p_0(Var_420, GenericVarSet_43, ContextPieces_42, DeclTypeTerm1_41, &DeclTypeResult_44);
                  if (((MR_tag((MR_Word) DeclTypeResult_44)) == (MR_Integer) 0))
                  {
                    MR_Word DeclTypeSpecs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclTypeResult_44, (MR_Integer) 0))));

                    STATE_VARIABLE_Specs_425_425 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DeclTypeSpecs_47, STATE_VARIABLE_Specs_0_172);
                    STATE_VARIABLE_ModuleInfo_423_423 = STATE_VARIABLE_ModuleInfo_0_168;
                    STATE_VARIABLE_QualInfo_424_424 = STATE_VARIABLE_QualInfo_0_170;
                  }
                  else
                  {
                    MR_Word DeclType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclTypeResult_44, (MR_Integer) 0))));
                    MR_Word DeclVarSet_46;

                    mercury__varset__coerce_2_p_0(TypeCtorInfo_529_529, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), STATE_VARIABLE_VarSet_0_166, &DeclVarSet_46);
                    hlds__make_hlds__qual_info__process_type_qualification_10_p_0(XVar_23, DeclType_45, DeclVarSet_46, YFunctorContext_26, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_423_423, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_424_424, STATE_VARIABLE_Specs_0_172, &STATE_VARIABLE_Specs_425_425);
                  }
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(XVar_23, RValTerm_39, Context_27, MainContext_28, SubContext_29, Purity_30, Expansion_32, STATE_VARIABLE_SVarState_0_162, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_0_166, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_423_423, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_424_424, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_425_425, STATE_VARIABLE_Specs_173);
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
            MR_Word PurityPFArgsDetTerm_582;
            MR_Word BodyGoalTerm_583;
            MR_Word Var_553;
            MR_Word Var_554;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_582 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_553 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_553 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_583 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_553, (MR_Integer) 0))));
                Var_554 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_553, (MR_Integer) 1))));
                succeeded = (Var_554 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_555;
              MR_Tuple Var_556;

              {
                Var_556 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_556, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), Var_556, 1) = ((MR_Box) (BodyGoalTerm_583));
              }
              {
                Var_555 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_555, 0) = ((MR_Box) (Var_556));
              }
              hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, PurityPFArgsDetTerm_582, Var_555, Expansion_32, STATE_VARIABLE_SVarState_0_162, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_0_166, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_0_168, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_0_172, STATE_VARIABLE_Specs_173);
            }
            else
            {
              MR_String Form_561;
              MR_Word Pieces_562;
              MR_Word Spec_563;
              MR_String Var_564;
              MR_Word Var_567;
              MR_Word Var_568;
              MR_Word Var_569;
              MR_Word Var_572;
              MR_Word Var_573;
              MR_Word Var_580;

              Var_564 = mercury__string__f_43_43_2_f_0(YAtom_24, (MR_String) " <lambda expression body>");
              Form_561 = mercury__string__f_43_43_2_f_0((MR_String) "<lambda expression head> ", Var_564);
              {
                Var_568 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_568, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_568, 1) = ((MR_Box) (YAtom_24));
              }
              {
                Var_573 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_573, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_573, 1) = ((MR_Box) (Form_561));
              }
              {
                Var_572 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_572, 0) = ((MR_Box) (Var_573));
                MR_hl_field(MR_mktag(1), Var_572, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[13])));
              }
              {
                Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_569, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[37])));
                MR_hl_field(MR_mktag(1), Var_569, 1) = ((MR_Box) (Var_572));
              }
              {
                Var_567 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_567, 0) = ((MR_Box) (Var_568));
                MR_hl_field(MR_mktag(1), Var_567, 1) = ((MR_Box) (Var_569));
              }
              {
                Pieces_562 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_562, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[36])));
                MR_hl_field(MR_mktag(1), Pieces_562, 1) = ((MR_Box) (Var_567));
              }
              {
                Spec_563 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_563, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/22"));
                MR_hl_field(MR_mktag(1), Spec_563, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_563, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_563, 3) = ((MR_Box) (YFunctorContext_26));
                MR_hl_field(MR_mktag(1), Spec_563, 4) = ((MR_Box) (Pieces_562));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_173 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_563));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_172));
              }
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171);
              Var_580 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_32 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_580));
              }
              *STATE_VARIABLE_ModuleInfo_169 = STATE_VARIABLE_ModuleInfo_0_168;
              *STATE_VARIABLE_VarSet_167 = STATE_VARIABLE_VarSet_0_166;
              *STATE_VARIABLE_SVarStore_165 = STATE_VARIABLE_SVarStore_0_164;
            }
            *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 26:
        {
          // case ";"
          ;
          {
            MR_Word TypeCtorInfo_537_537;
            MR_Word TypeCtorInfo_538_538;
            MR_Word TypeCtorInfo_539_539;
            MR_Word ElseTerm0_75;
            MR_Word CondTerm0_76;
            MR_Word ThenTerm0_77;
            MR_Word CondTerm_81;
            MR_Word MaybeVarsCond_82;
            MR_Word Var_315;
            MR_Word Var_316;
            MR_Word Var_317;
            MR_String Var_318;
            MR_Word Var_319;
            MR_Word Var_320;
            MR_Word Var_321;
            MR_Word STATE_VARIABLE_VarSet_334_334;
            MR_Word CondThenTerm0_437;
            MR_Word ContextPieces_438;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondThenTerm0_437 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_315 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 0))));
                Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 1))));
                succeeded = (Var_316 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) CondThenTerm0_437)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_437, (MR_Integer) 0))));
                    Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm0_437, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_317)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_318 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_317, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_318, (MR_String) "->") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_319 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondTerm0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_319, (MR_Integer) 0))));
                          Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_319, (MR_Integer) 1))));
                          succeeded = (Var_320 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenTerm0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_320, (MR_Integer) 0))));
                            Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_320, (MR_Integer) 1))));
                            succeeded = (Var_321 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              TypeCtorInfo_537_537 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              TypeCtorInfo_538_538 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                              mercury__term__coerce_2_p_0(TypeCtorInfo_537_537, TypeCtorInfo_538_538, CondTerm0_76, &CondTerm_81);
                              TypeCtorInfo_539_539 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
                              ContextPieces_438 = mercury__cord__init_0_f_0(TypeCtorInfo_539_539);
                              parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_81, ContextPieces_438, &MaybeVarsCond_82, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_334_334);
                              if (((MR_tag((MR_Word) MaybeVarsCond_82)) == (MR_Integer) 0))
                              {
                                MR_Word VarsCondSpecs_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeVarsCond_82, (MR_Integer) 0))));
                                MR_Word Var_337;
                                MR_Word Var_338;

                                *STATE_VARIABLE_Specs_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), VarsCondSpecs_114, STATE_VARIABLE_Specs_0_172);
                                Var_338 = hlds__make_goal__true_goal_with_context_1_f_0(Context_27);
                                Var_337 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_338)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_32 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_337));
                                }
                                *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
                                *STATE_VARIABLE_SVarStore_165 = STATE_VARIABLE_SVarStore_0_164;
                                *STATE_VARIABLE_VarSet_167 = STATE_VARIABLE_VarSet_334_334;
                                *STATE_VARIABLE_ModuleInfo_169 = STATE_VARIABLE_ModuleInfo_0_168;
                                *STATE_VARIABLE_QualInfo_171 = STATE_VARIABLE_QualInfo_0_170;
                              }
                              else
                              {
                                MR_Word Vars_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_82, (MR_Integer) 0))));
                                MR_Word StateVars_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_82, (MR_Integer) 1))));
                                MR_Word CondParseTree_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_82, (MR_Integer) 2))));
                                MR_Word CondWarningSpecs_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_82, (MR_Integer) 3))));
                                MR_Word BeforeInsideSVarState_88;
                                MR_Word EmptySubst_89;
                                MR_Word CondGoal_90;
                                MR_Word AfterCondInsideSVarState_91;
                                MR_Word ThenTerm_92;
                                MR_Word AfterThenInsideSVarState0_93;
                                MR_Word AncestorVarMap_94;
                                MR_Word ThenExpansion_95;
                                MR_Word AfterThenInsideSVarState_96;
                                MR_Word ThenGoalInfo_97;
                                MR_Word ThenGoal0_98;
                                MR_Word Globals_99;
                                MR_Word ModuleName_100;
                                MR_Word AfterThenSVarState_101;
                                MR_Word ElseTerm_102;
                                MR_Word AfterElseSVarState0_103;
                                MR_Word ElseExpansion_104;
                                MR_Word AfterElseSVarState_105;
                                MR_Word ElseGoalInfo_106;
                                MR_Word ElseGoal0_107;
                                MR_Word ThenGoal_108;
                                MR_Word ElseGoal_109;
                                MR_Word GoalExpr_111;
                                MR_Word GoalInfo_112;
                                MR_Word Goal_113;
                                MR_Word STATE_VARIABLE_Specs_339_339;
                                MR_Word STATE_VARIABLE_Specs_340_340;
                                MR_Word STATE_VARIABLE_SVarStore_342_342;
                                MR_Word STATE_VARIABLE_VarSet_343_343;
                                MR_Word STATE_VARIABLE_ModuleInfo_344_344;
                                MR_Word STATE_VARIABLE_QualInfo_345_345;
                                MR_Word STATE_VARIABLE_Specs_346_346;
                                MR_Word STATE_VARIABLE_VarSet_347_347;
                                MR_Word STATE_VARIABLE_Specs_348_348;
                                MR_Word STATE_VARIABLE_SVarStore_349_349;
                                MR_Word STATE_VARIABLE_VarSet_350_350;
                                MR_Word STATE_VARIABLE_ModuleInfo_351_351;
                                MR_Word STATE_VARIABLE_QualInfo_352_352;
                                MR_Word STATE_VARIABLE_Specs_353_353;
                                MR_Word Var_354;
                                MR_Word STATE_VARIABLE_VarSet_355_355;
                                MR_Word STATE_VARIABLE_Specs_356_356;
                                MR_Word STATE_VARIABLE_SVarStore_357_357;
                                MR_Word STATE_VARIABLE_VarSet_358_358;
                                MR_Word STATE_VARIABLE_Specs_361_361;
                                MR_Word Var_362;
                                MR_Word Var_368;
                                MR_Word Var_370;

                                STATE_VARIABLE_Specs_339_339 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_86, STATE_VARIABLE_Specs_0_172);
                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_27, STATE_VARIABLE_VarSet_334_334, StateVars_84, STATE_VARIABLE_SVarState_0_162, &BeforeInsideSVarState_88, STATE_VARIABLE_Specs_339_339, &STATE_VARIABLE_Specs_340_340);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptySubst_89);
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, CondParseTree_85, EmptySubst_89, &CondGoal_90, BeforeInsideSVarState_88, &AfterCondInsideSVarState_91, STATE_VARIABLE_SVarStore_0_164, &STATE_VARIABLE_SVarStore_342_342, STATE_VARIABLE_VarSet_334_334, &STATE_VARIABLE_VarSet_343_343, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_344_344, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_345_345, STATE_VARIABLE_Specs_340_340, &STATE_VARIABLE_Specs_346_346);
                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ThenTerm0_77, &ThenTerm_92, STATE_VARIABLE_VarSet_343_343, &STATE_VARIABLE_VarSet_347_347, AfterCondInsideSVarState_91, &AfterThenInsideSVarState0_93, STATE_VARIABLE_Specs_346_346, &STATE_VARIABLE_Specs_348_348);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &AncestorVarMap_94);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(XVar_23, ThenTerm_92, Context_27, MainContext_28, SubContext_29, Purity_30, AncestorVarMap_94, &ThenExpansion_95, AfterThenInsideSVarState0_93, &AfterThenInsideSVarState_96, STATE_VARIABLE_SVarStore_342_342, &STATE_VARIABLE_SVarStore_349_349, STATE_VARIABLE_VarSet_347_347, &STATE_VARIABLE_VarSet_350_350, STATE_VARIABLE_ModuleInfo_344_344, &STATE_VARIABLE_ModuleInfo_351_351, STATE_VARIABLE_QualInfo_345_345, &STATE_VARIABLE_QualInfo_352_352, STATE_VARIABLE_Specs_348_348, &STATE_VARIABLE_Specs_353_353);
                                Var_354 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_537_537, ThenTerm_92);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_354, &ThenGoalInfo_97);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ThenGoalInfo_97, ThenExpansion_95, &ThenGoal0_98);
                                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_351_351, &Globals_99);
                                hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_351_351, &ModuleName_100);
                                hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_99, ModuleName_100, StateVars_84, STATE_VARIABLE_SVarState_0_162, AfterThenInsideSVarState_96, &AfterThenSVarState_101);
                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(ElseTerm0_75, &ElseTerm_102, STATE_VARIABLE_VarSet_350_350, &STATE_VARIABLE_VarSet_355_355, STATE_VARIABLE_SVarState_0_162, &AfterElseSVarState0_103, STATE_VARIABLE_Specs_353_353, &STATE_VARIABLE_Specs_356_356);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(XVar_23, ElseTerm_102, Context_27, MainContext_28, SubContext_29, Purity_30, AncestorVarMap_94, &ElseExpansion_104, AfterElseSVarState0_103, &AfterElseSVarState_105, STATE_VARIABLE_SVarStore_349_349, &STATE_VARIABLE_SVarStore_357_357, STATE_VARIABLE_VarSet_355_355, &STATE_VARIABLE_VarSet_358_358, STATE_VARIABLE_ModuleInfo_351_351, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_352_352, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_356_356, &STATE_VARIABLE_Specs_361_361);
                                Var_362 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_537_537, ElseTerm_102);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_362, &ElseGoalInfo_106);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(ElseGoalInfo_106, ElseExpansion_104, &ElseGoal0_107);
                                hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_99, ModuleName_100, (MR_Integer) 1, Context_27, StateVars_84, ThenGoal0_98, &ThenGoal_108, ElseGoal0_107, &ElseGoal_109, STATE_VARIABLE_SVarState_0_162, AfterCondInsideSVarState_91, AfterThenSVarState_101, AfterElseSVarState_105, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_VarSet_358_358, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_SVarStore_357_357, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_Specs_361_361, STATE_VARIABLE_Specs_173);
                                Var_368 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_84, Vars_83);
                                {
                                  GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                  MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Var_368));
                                  MR_hl_field(MR_mktag(3), GoalExpr_111, 2) = ((MR_Box) (CondGoal_90));
                                  MR_hl_field(MR_mktag(3), GoalExpr_111, 3) = ((MR_Box) (ThenGoal_108));
                                  MR_hl_field(MR_mktag(3), GoalExpr_111, 4) = ((MR_Box) (ElseGoal_109));
                                }
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_112);
                                {
                                  Goal_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Goal_113, 0) = ((MR_Box) (GoalExpr_111));
                                  MR_hl_field(MR_mktag(0), Goal_113, 1) = ((MR_Box) (GoalInfo_112));
                                }
                                Var_370 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_113)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_32 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_370));
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
            MR_Word FuncArgsTerm_157;
            MR_String FuncTermFunctor_159;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word YTerm_525;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncArgsTerm_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_174 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_174, (MR_Integer) 1))));
                succeeded = (Var_175 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncArgsTerm_157)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_157, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_176)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_159 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_176, (MR_Integer) 0))));
                      if ((strcmp(FuncTermFunctor_159, (MR_String) "func") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(FuncTermFunctor_159, (MR_String) "any_func") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                      if (succeeded)
                      {
                        Var_178 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_177 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (YAtom_24));
                        }
                        {
                          YTerm_525 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), YTerm_525, 0) = ((MR_Box) (Var_177));
                          MR_hl_field(MR_mktag(0), YTerm_525, 1) = ((MR_Box) (YArgTerms_25));
                          MR_hl_field(MR_mktag(0), YTerm_525, 2) = ((MR_Box) (YFunctorContext_26));
                        }
                        hlds__make_hlds__superhomogeneous__parse_lambda_expr_19_p_0(XVar_23, Purity_30, Context_27, MainContext_28, SubContext_29, YTerm_525, Var_178, Expansion_32, STATE_VARIABLE_SVarState_0_162, STATE_VARIABLE_SVarStore_0_164, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_0_166, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_0_168, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_0_170, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_0_172, STATE_VARIABLE_Specs_173);
                        *STATE_VARIABLE_SVarState_163 = STATE_VARIABLE_SVarState_0_162;
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
            MR_Word TypeInfo_549_549;
            MR_Word TypeCtorInfo_550_550;
            MR_Word TypeCtorInfo_551_551;
            MR_Word FieldDescrTerm_133;
            MR_Word FieldValueTerm0_134;
            MR_Word FieldValueTerm_136;
            MR_Word FieldValueVar_137;
            MR_Word InnerFunctor_138;
            MR_Word FieldSubContext_139;
            MR_Word SetGoal_140;
            MR_Integer TermArgNumber_141;
            MR_Word TermArgContext_142;
            MR_Word InputVTNC_143;
            MR_Integer FieldArgNumber_144;
            MR_Word FieldArgContext_145;
            MR_Word FieldVTNC_146;
            MR_Word InputFieldArgExpansions_147;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_String Var_227;
            MR_Word Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word STATE_VARIABLE_VarSet_246_246;
            MR_Word STATE_VARIABLE_SVarState_247_247;
            MR_Word STATE_VARIABLE_Specs_248_248;
            MR_Word Var_249;
            MR_Word STATE_VARIABLE_VarSet_250_250;
            MR_Word STATE_VARIABLE_VarSet_251_251;
            MR_Word STATE_VARIABLE_SVarState_252_252;
            MR_Word STATE_VARIABLE_Specs_253_253;
            MR_Word Var_254;
            MR_Word STATE_VARIABLE_VarSet_255_255;
            MR_Word Var_256;
            MR_Word Var_257;
            MR_Word STATE_VARIABLE_SVarState_258_258;
            MR_Word STATE_VARIABLE_SVarStore_259_259;
            MR_Word STATE_VARIABLE_VarSet_260_260;
            MR_Word STATE_VARIABLE_ModuleInfo_261_261;
            MR_Word STATE_VARIABLE_QualInfo_262_262;
            MR_Word STATE_VARIABLE_Specs_263_263;
            MR_Word Var_264;
            MR_Word Var_271;
            MR_Word Var_272;
            MR_Word Var_273;
            MR_Word Var_274;
            MR_Word AncestorVarMap_462;
            MR_Word GoalInfo_463;
            MR_Word Goal_464;
            MR_Word InputTerm_465;
            MR_Word InputTermVar_466;
            MR_Word Functor_467;
            MR_Word FieldNames_477;
            MR_Word FieldNameContextPieces_494;
            MR_Word MaybeFieldNames_495;
            MR_Word InputTerm0_504;
            MR_Word FieldNameTerm_505;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDescrTerm_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_224 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldValueTerm0_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_224, (MR_Integer) 0))));
                Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_224, (MR_Integer) 1))));
                succeeded = (Var_225 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FieldDescrTerm_133)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDescrTerm_133, (MR_Integer) 0))));
                    Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDescrTerm_133, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_226)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_227 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_226, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_227, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_228 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          InputTerm0_504 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 0))));
                          Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 1))));
                          succeeded = (Var_229 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldNameTerm_505 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 0))));
                            Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 1))));
                            succeeded = (Var_230 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              FieldNameContextPieces_494 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[48]));
                              hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_505, STATE_VARIABLE_VarSet_0_166, FieldNameContextPieces_494, &MaybeFieldNames_495);
                              succeeded = ((MR_tag((MR_Word) MaybeFieldNames_495)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                FieldNames_477 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_495, (MR_Integer) 0))));
                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(InputTerm0_504, &InputTerm_465, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_246_246, STATE_VARIABLE_SVarState_0_162, &STATE_VARIABLE_SVarState_247_247, STATE_VARIABLE_Specs_0_172, &STATE_VARIABLE_Specs_248_248);
                                Var_249 = (MR_Word) ((MR_Unsigned) 0U);
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_465, &InputTermVar_466, Var_249, STATE_VARIABLE_VarSet_246_246, &STATE_VARIABLE_VarSet_250_250);
                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(FieldValueTerm0_134, &FieldValueTerm_136, STATE_VARIABLE_VarSet_250_250, &STATE_VARIABLE_VarSet_251_251, STATE_VARIABLE_SVarState_247_247, &STATE_VARIABLE_SVarState_252_252, STATE_VARIABLE_Specs_248_248, &STATE_VARIABLE_Specs_253_253);
                                Var_256 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (InputTermVar_466));
                                  MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (Var_256));
                                }
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(FieldValueTerm_136, &FieldValueVar_137, Var_254, STATE_VARIABLE_VarSet_251_251, &STATE_VARIABLE_VarSet_255_255);
                                hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_27, MainContext_28, SubContext_29, FieldNames_477, FieldValueVar_137, InputTermVar_466, XVar_23, &Functor_467, &Var_257, &SetGoal_140, STATE_VARIABLE_SVarState_252_252, &STATE_VARIABLE_SVarState_258_258, STATE_VARIABLE_SVarStore_0_164, &STATE_VARIABLE_SVarStore_259_259, STATE_VARIABLE_VarSet_255_255, &STATE_VARIABLE_VarSet_260_260, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_261_261, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_262_262, STATE_VARIABLE_Specs_253_253, &STATE_VARIABLE_Specs_263_263);
                                InnerFunctor_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_257, (MR_Integer) 0))));
                                FieldSubContext_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_257, (MR_Integer) 1))));
                                TermArgNumber_141 = (MR_Integer) 1;
                                FieldArgNumber_144 = (MR_Integer) 2;
                                TypeInfo_549_549 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                                TypeCtorInfo_550_550 = (MR_Word) (&mercury__term__term__type_ctor_info_context_0);
                                {
                                  TermArgContext_142 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), TermArgContext_142, 0) = ((MR_Box) (Functor_467));
                                  MR_hl_field(MR_mktag(2), TermArgContext_142, 1) = ((MR_Box) (MainContext_28));
                                  MR_hl_field(MR_mktag(2), TermArgContext_142, 2) = ((MR_Box) (SubContext_29));
                                }
                                {
                                  InputVTNC_143 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), InputVTNC_143, 0) = ((MR_Box) (InputTermVar_466));
                                  MR_hl_field(MR_mktag(0), InputVTNC_143, 1) = ((MR_Box) (InputTerm_465));
                                  MR_hl_field(MR_mktag(0), InputVTNC_143, 2) = ((MR_Box) (TermArgNumber_141));
                                  MR_hl_field(MR_mktag(0), InputVTNC_143, 3) = ((MR_Box) (TermArgContext_142));
                                }
                                {
                                  FieldArgContext_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), FieldArgContext_145, 0) = ((MR_Box) (InnerFunctor_138));
                                  MR_hl_field(MR_mktag(2), FieldArgContext_145, 1) = ((MR_Box) (MainContext_28));
                                  MR_hl_field(MR_mktag(2), FieldArgContext_145, 2) = ((MR_Box) (FieldSubContext_139));
                                }
                                {
                                  FieldVTNC_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), FieldVTNC_146, 0) = ((MR_Box) (FieldValueVar_137));
                                  MR_hl_field(MR_mktag(0), FieldVTNC_146, 1) = ((MR_Box) (FieldValueTerm_136));
                                  MR_hl_field(MR_mktag(0), FieldVTNC_146, 2) = ((MR_Box) (FieldArgNumber_144));
                                  MR_hl_field(MR_mktag(0), FieldVTNC_146, 3) = ((MR_Box) (FieldArgContext_145));
                                }
                                mercury__map__init_1_p_0(TypeInfo_549_549, TypeCtorInfo_550_550, &AncestorVarMap_462);
                                Var_272 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (FieldVTNC_146));
                                  MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (Var_272));
                                }
                                {
                                  Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (InputVTNC_143));
                                  MR_hl_field(MR_mktag(1), Var_264, 1) = ((MR_Box) (Var_271));
                                }
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_17_p_0(Var_264, Context_27, AncestorVarMap_462, &InputFieldArgExpansions_147, STATE_VARIABLE_SVarState_258_258, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_SVarStore_259_259, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_260_260, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_261_261, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_262_262, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_263_263, STATE_VARIABLE_Specs_173);
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_463);
                                hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(GoalInfo_463, InputFieldArgExpansions_147, SetGoal_140, &Goal_464);
                                Var_273 = (MR_Word) ((MR_Unsigned) 0U);
                                TypeCtorInfo_551_551 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                                Var_274 = mercury__cord__singleton_1_f_0(TypeCtorInfo_551_551, ((MR_Box) (Goal_464)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_32 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_273));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_274));
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
            MR_Word TypeInfo_546_546;
            MR_Word TypeCtorInfo_547_547;
            MR_Word TypeCtorInfo_548_548;
            MR_Word InputTerm0_115;
            MR_Word FieldNameTerm_116;
            MR_Word FieldNameContextPieces_117;
            MR_Word MaybeFieldNames_118;
            MR_Word FieldNames_119;
            MR_Word InputTerm_120;
            MR_Word InputTermVar_121;
            MR_Word Functor_122;
            MR_Word GetGoal_124;
            MR_Word ArgContext_125;
            MR_Word InputArgExpansion_126;
            MR_Word STATE_VARIABLE_VarSet_295_295;
            MR_Word STATE_VARIABLE_SVarState_296_296;
            MR_Word STATE_VARIABLE_Specs_297_297;
            MR_Word Var_298;
            MR_Word STATE_VARIABLE_VarSet_299_299;
            MR_Word STATE_VARIABLE_SVarState_300_300;
            MR_Word STATE_VARIABLE_SVarStore_301_301;
            MR_Word STATE_VARIABLE_VarSet_302_302;
            MR_Word STATE_VARIABLE_ModuleInfo_303_303;
            MR_Word STATE_VARIABLE_QualInfo_304_304;
            MR_Word STATE_VARIABLE_Specs_305_305;
            MR_Integer Var_306;
            MR_Word Var_313;
            MR_Word Var_314;
            MR_Word AncestorVarMap_441;
            MR_Word GoalInfo_442;
            MR_Word Goal_443;
            MR_Word Var_1015;
            MR_Word Var_1017;
            MR_Word Var_123;

            succeeded = (YArgTerms_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InputTerm0_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 0))));
              Var_1017 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_25, (MR_Integer) 1))));
              succeeded = (Var_1017 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldNameTerm_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1017, (MR_Integer) 0))));
                Var_1015 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1017, (MR_Integer) 1))));
                succeeded = (Var_1015 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FieldNameContextPieces_117 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[54]));
                  hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_116, STATE_VARIABLE_VarSet_0_166, FieldNameContextPieces_117, &MaybeFieldNames_118);
                  succeeded = ((MR_tag((MR_Word) MaybeFieldNames_118)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    FieldNames_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_118, (MR_Integer) 0))));
                    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(InputTerm0_115, &InputTerm_120, STATE_VARIABLE_VarSet_0_166, &STATE_VARIABLE_VarSet_295_295, STATE_VARIABLE_SVarState_0_162, &STATE_VARIABLE_SVarState_296_296, STATE_VARIABLE_Specs_0_172, &STATE_VARIABLE_Specs_297_297);
                    Var_298 = (MR_Word) ((MR_Unsigned) 0U);
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(InputTerm_120, &InputTermVar_121, Var_298, STATE_VARIABLE_VarSet_295_295, &STATE_VARIABLE_VarSet_299_299);
                    hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(Context_27, MainContext_28, SubContext_29, FieldNames_119, XVar_23, InputTermVar_121, Purity_30, &Functor_122, &Var_123, &GetGoal_124, STATE_VARIABLE_SVarState_296_296, &STATE_VARIABLE_SVarState_300_300, STATE_VARIABLE_SVarStore_0_164, &STATE_VARIABLE_SVarStore_301_301, STATE_VARIABLE_VarSet_299_299, &STATE_VARIABLE_VarSet_302_302, STATE_VARIABLE_ModuleInfo_0_168, &STATE_VARIABLE_ModuleInfo_303_303, STATE_VARIABLE_QualInfo_0_170, &STATE_VARIABLE_QualInfo_304_304, STATE_VARIABLE_Specs_297_297, &STATE_VARIABLE_Specs_305_305);
                    TypeInfo_546_546 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                    TypeCtorInfo_547_547 = (MR_Word) (&mercury__term__term__type_ctor_info_context_0);
                    {
                      ArgContext_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgContext_125, 0) = ((MR_Box) (Functor_122));
                      MR_hl_field(MR_mktag(2), ArgContext_125, 1) = ((MR_Box) (MainContext_28));
                      MR_hl_field(MR_mktag(2), ArgContext_125, 2) = ((MR_Box) (SubContext_29));
                    }
                    mercury__map__init_1_p_0(TypeInfo_546_546, TypeCtorInfo_547_547, &AncestorVarMap_441);
                    Var_306 = (MR_Integer) 1;
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(InputTermVar_121, InputTerm_120, YFunctorContext_26, ArgContext_125, Var_306, AncestorVarMap_441, &InputArgExpansion_126, STATE_VARIABLE_SVarState_300_300, STATE_VARIABLE_SVarState_163, STATE_VARIABLE_SVarStore_301_301, STATE_VARIABLE_SVarStore_165, STATE_VARIABLE_VarSet_302_302, STATE_VARIABLE_VarSet_167, STATE_VARIABLE_ModuleInfo_303_303, STATE_VARIABLE_ModuleInfo_169, STATE_VARIABLE_QualInfo_304_304, STATE_VARIABLE_QualInfo_171, STATE_VARIABLE_Specs_305_305, STATE_VARIABLE_Specs_173);
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_442);
                    hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(GoalInfo_442, InputArgExpansion_126, GetGoal_124, &Goal_443);
                    Var_313 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeCtorInfo_548_548 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                    Var_314 = mercury__cord__singleton_1_f_0(TypeCtorInfo_548_548, ((MR_Box) (Goal_443)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Expansion_32 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_313));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_314));
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
  MR_Word RHS_35;
  MR_Word STATE_VARIABLE_VarSet_48_48;
  MR_Word STATE_VARIABLE_SVarState_49_49;
  MR_Word STATE_VARIABLE_Specs_50_50;
  MR_Word Var_51;

  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(RHS0_22, &RHS_35, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_SVarState_0_36, &STATE_VARIABLE_SVarState_49_49, STATE_VARIABLE_Specs_0_46, &STATE_VARIABLE_Specs_50_50);
  Var_51 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(LHSVar_21, RHS_35, Context_23, MainContext_24, SubContext_25, Purity_26, Var_51, Expansion_28, STATE_VARIABLE_SVarState_49_49, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Specs_47);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_21_p_0(
  MR_Word XVar_22,
  MR_Word YTerm_23,
  MR_Word Context_24,
  MR_Word MainContext_25,
  MR_Word SubContext_26,
  MR_Word Purity_27,
  MR_Word AncestorVarMap_29,
  MR_Word * Expansion_30,
  MR_Word STATE_VARIABLE_SVarState_0_43,
  MR_Word * STATE_VARIABLE_SVarState_44,
  MR_Word STATE_VARIABLE_SVarStore_0_45,
  MR_Word * STATE_VARIABLE_SVarStore_46,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  if (((MR_tag((MR_Word) YTerm_23)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 0))));
    MR_Word YArgTerms_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 1))));
    MR_Word YFunctorContext_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_23, (MR_Integer) 2))));

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(XVar_22, YFunctor_40, YArgTerms_41, YFunctorContext_42, Context_24, MainContext_25, SubContext_26, Purity_27, AncestorVarMap_29, Expansion_30, STATE_VARIABLE_SVarState_0_43, STATE_VARIABLE_SVarState_44, STATE_VARIABLE_SVarStore_0_45, STATE_VARIABLE_SVarStore_46, STATE_VARIABLE_VarSet_0_47, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_ModuleInfo_50, STATE_VARIABLE_QualInfo_0_51, STATE_VARIABLE_QualInfo_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
  }
  else
  {
    MR_Word YVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_23, (MR_Integer) 0))));
    MR_Word Goal_39;
    MR_Word Var_62;
    MR_Word Var_65;

    hlds__make_hlds__superhomogeneous__occurs_check_6_p_0(STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_VarSet_0_47, AncestorVarMap_29, YVar_37, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (YVar_37));
    }
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_22, Var_62, Context_24, MainContext_25, SubContext_26, Purity_27, &Goal_39, STATE_VARIABLE_QualInfo_0_51, STATE_VARIABLE_QualInfo_52);
    Var_65 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_39)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_65));
    }
    *STATE_VARIABLE_SVarState_44 = STATE_VARIABLE_SVarState_0_43;
    *STATE_VARIABLE_SVarStore_46 = STATE_VARIABLE_SVarStore_0_45;
    *STATE_VARIABLE_VarSet_48 = STATE_VARIABLE_VarSet_0_47;
    *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(
  MR_Word XVar_21,
  MR_Word YTerm_22,
  MR_Word Context_23,
  MR_Word ArgContext_24,
  MR_Integer ArgNum_26,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_44,
  MR_Word * Expansion_28,
  MR_Word STATE_VARIABLE_SVarState_0_45,
  MR_Word * STATE_VARIABLE_SVarState_46,
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
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Specs_57_57;

  hlds__make_hlds__superhomogeneous__occurs_check_6_p_0(STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_AncestorVarMap_0_44, XVar_21, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_57_57);
  if (((MR_tag((MR_Word) YTerm_22)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 0))));
    MR_Word YArgTerms_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 1))));
    MR_Word YFunctorContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), YTerm_22, (MR_Integer) 2))));
    MR_Word MainContext_69;
    MR_Word SubContext_70;

    switch (MR_tag((MR_Word) ArgContext_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgContext_24, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word PredFormArity_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgContext_24, (MR_Integer) 1))));
          MR_Integer PredFormArityInt_80;

          succeeded = (PredOrFunc_78 == (MR_Integer) 1);
          if (succeeded)
          {
            PredFormArityInt_80 = (MR_Integer) (PredFormArity_79);
            succeeded = (ArgNum_26 == PredFormArityInt_80);
          }
          if (succeeded)
            MainContext_69 = (MR_Word) ((MR_Unsigned) 4U);
          else
            {
              MainContext_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MainContext_69, 0) = ((MR_Box) (ArgNum_26));
            }
          SubContext_70 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContext_24, (MR_Integer) 0))));

          {
            MainContext_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MainContext_69, 0) = ((MR_Box) (PredId_81));
            MR_hl_field(MR_mktag(2), MainContext_69, 1) = ((MR_Box) (ArgNum_26));
          }
          SubContext_70 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 0))));
          MR_Word SubContexts0_83;
          MR_Word SubContext_84;

          MainContext_69 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 1))));
          SubContexts0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 2))));
          {
            SubContext_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SubContext_84, 0) = ((MR_Box) (ConsId_82));
            MR_hl_field(MR_mktag(0), SubContext_84, 1) = ((MR_Box) (ArgNum_26));
          }
          {
            SubContext_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SubContext_70, 0) = ((MR_Box) (SubContext_84));
            MR_hl_field(MR_mktag(1), SubContext_70, 1) = ((MR_Box) (SubContexts0_83));
          }
        }
        break;
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(XVar_21, YFunctor_41, YArgTerms_42, YFunctorContext_43, Context_23, MainContext_69, SubContext_70, (MR_Integer) 0, STATE_VARIABLE_AncestorVarMap_0_44, Expansion_28, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_SVarStore_0_47, STATE_VARIABLE_SVarStore_48, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54, STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Specs_56);
  }
  else
  {
    MR_Word YVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_22, (MR_Integer) 0))));
    MR_Word YVarContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YTerm_22, (MR_Integer) 1))));
    MR_Word GoalCord_37;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_21)), ((MR_Box) (YVar_35)));
    if (succeeded)
    {
      GoalCord_37 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      *STATE_VARIABLE_QualInfo_54 = STATE_VARIABLE_QualInfo_0_53;
    }
    else
    {
      MR_Word MainContext_38;
      MR_Word SubContext_39;
      MR_Word Goal_40;
      MR_Word Var_65;

      switch (MR_tag((MR_Word) ArgContext_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PredOrFunc_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgContext_24, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredFormArity_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgContext_24, (MR_Integer) 1))));
            MR_Integer PredFormArityInt_91;

            succeeded = (PredOrFunc_89 == (MR_Integer) 1);
            if (succeeded)
            {
              PredFormArityInt_91 = (MR_Integer) (PredFormArity_90);
              succeeded = (ArgNum_26 == PredFormArityInt_91);
            }
            if (succeeded)
              MainContext_38 = (MR_Word) ((MR_Unsigned) 4U);
            else
              {
                MainContext_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MainContext_38, 0) = ((MR_Box) (ArgNum_26));
              }
            SubContext_39 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgContext_24, (MR_Integer) 0))));

            {
              MainContext_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MainContext_38, 0) = ((MR_Box) (PredId_92));
              MR_hl_field(MR_mktag(2), MainContext_38, 1) = ((MR_Box) (ArgNum_26));
            }
            SubContext_39 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConsId_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 0))));
            MR_Word SubContexts0_94;
            MR_Word SubContext_95;

            MainContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 1))));
            SubContexts0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgContext_24, (MR_Integer) 2))));
            {
              SubContext_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SubContext_95, 0) = ((MR_Box) (ConsId_93));
              MR_hl_field(MR_mktag(0), SubContext_95, 1) = ((MR_Box) (ArgNum_26));
            }
            {
              SubContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SubContext_39, 0) = ((MR_Box) (SubContext_95));
              MR_hl_field(MR_mktag(1), SubContext_39, 1) = ((MR_Box) (SubContexts0_94));
            }
          }
          break;
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (YVar_35));
      }
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_21, Var_65, YVarContext_36, MainContext_38, SubContext_39, (MR_Integer) 0, &Goal_40, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
      GoalCord_37 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_40)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalCord_37));
    }
    *STATE_VARIABLE_SVarState_46 = STATE_VARIABLE_SVarState_0_45;
    *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
    *STATE_VARIABLE_VarSet_50 = STATE_VARIABLE_VarSet_0_49;
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_57_57;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_23_p_0(
  MR_Word XVar_24,
  MR_Word YFunctor_25,
  MR_Word YArgTerms0_26,
  MR_Word YFunctorContext_27,
  MR_Word Context_28,
  MR_Word MainContext_29,
  MR_Word SubContext_30,
  MR_Word Purity_31,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_55,
  MR_Word * Expansion_34,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_SVarStore_0_58,
  MR_Word * STATE_VARIABLE_SVarStore_59,
  MR_Word STATE_VARIABLE_VarSet_0_60,
  MR_Word * STATE_VARIABLE_VarSet_61,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63,
  MR_Word STATE_VARIABLE_QualInfo_0_64,
  MR_Word * STATE_VARIABLE_QualInfo_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  MR_bool succeeded;
  MR_Word YArgTerms_41;
  MR_Word STATE_VARIABLE_VarSet_68_68;
  MR_Word STATE_VARIABLE_SVarState_69_69;
  MR_Word STATE_VARIABLE_Specs_70_70;
  MR_Word ExpansionPrime_43;
  MR_Word STATE_VARIABLE_SVarState_71_71;
  MR_Word STATE_VARIABLE_SVarStore_72_72;
  MR_Word STATE_VARIABLE_VarSet_73_73;
  MR_Word STATE_VARIABLE_ModuleInfo_74_74;
  MR_Word STATE_VARIABLE_QualInfo_75_75;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_String YAtom_42;

  hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(YArgTerms0_26, &YArgTerms_41, STATE_VARIABLE_VarSet_0_60, &STATE_VARIABLE_VarSet_68_68, STATE_VARIABLE_SVarState_0_56, &STATE_VARIABLE_SVarState_69_69, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_70_70);
  succeeded = ((MR_tag((MR_Word) YFunctor_25)) == (MR_Integer) 0);
  if (succeeded)
  {
    YAtom_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), YFunctor_25, (MR_Integer) 0))));
    succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(XVar_24, YAtom_42, YArgTerms_41, YFunctorContext_27, Context_28, MainContext_29, SubContext_30, Purity_31, &ExpansionPrime_43, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_58, &STATE_VARIABLE_SVarStore_72_72, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_62, &STATE_VARIABLE_ModuleInfo_74_74, STATE_VARIABLE_QualInfo_0_64, &STATE_VARIABLE_QualInfo_75_75, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
  }
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_76_76;
    *STATE_VARIABLE_QualInfo_65 = STATE_VARIABLE_QualInfo_75_75;
    *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_74_74;
    *STATE_VARIABLE_VarSet_61 = STATE_VARIABLE_VarSet_73_73;
    *STATE_VARIABLE_SVarStore_59 = STATE_VARIABLE_SVarStore_72_72;
    *STATE_VARIABLE_SVarState_57 = STATE_VARIABLE_SVarState_71_71;
    *Expansion_34 = ExpansionPrime_43;
  }
  else
  {
    MR_Word MaybeQualifiedYArgTerms_52;
    MR_Word ConsId_54;
    MR_Word STATE_VARIABLE_Specs_85_85;
    MR_Word STATE_VARIABLE_SVarState_86_86;
    MR_Word STATE_VARIABLE_VarSet_87_87;
    MR_Word FunctorName_50;
    MR_Word MaybeQualifiedYArgTermsPrime_51;
    MR_Word STATE_VARIABLE_VarSet_80_80;
    MR_Word STATE_VARIABLE_SVarState_81_81;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_String YAtom_94;
    MR_Word ModuleNameTerm_44;
    MR_Word NameArgsTerm_45;
    MR_Word Var_77;
    MR_Word Var_78;

    succeeded = ((MR_tag((MR_Word) YFunctor_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      YAtom_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), YFunctor_25, (MR_Integer) 0))));
      succeeded = (strcmp(YAtom_94, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (YArgTerms_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleNameTerm_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_41, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), YArgTerms_41, (MR_Integer) 1))));
          succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 0))));
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 1))));
            succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_97_97;
        MR_String Name_46;
        MR_Word NameArgTerms_47;
        MR_Word ModuleName_49;
        MR_Word Var_79;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_45)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_45, (MR_Integer) 0))));
          NameArgTerms_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameArgsTerm_45, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
            TypeCtorInfo_97_97 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_97_97, ModuleNameTerm_44, &ModuleName_49);
            if (succeeded)
            {
              {
                FunctorName_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), FunctorName_50, 0) = ((MR_Box) (ModuleName_49));
                MR_hl_field(MR_mktag(1), FunctorName_50, 1) = ((MR_Box) (Name_46));
              }
              hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(NameArgTerms_47, &MaybeQualifiedYArgTermsPrime_51, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_81_81, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_82_82);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        FunctorName_50 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(YAtom_94, (MR_String) "__");
        MaybeQualifiedYArgTermsPrime_51 = YArgTerms_41;
        STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_70_70;
        STATE_VARIABLE_VarSet_80_80 = STATE_VARIABLE_VarSet_68_68;
        STATE_VARIABLE_SVarState_81_81 = STATE_VARIABLE_SVarState_69_69;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer Arity_53;
      MR_Word Var_84;

      STATE_VARIABLE_Specs_85_85 = STATE_VARIABLE_Specs_82_82;
      STATE_VARIABLE_VarSet_87_87 = STATE_VARIABLE_VarSet_80_80;
      STATE_VARIABLE_SVarState_86_86 = STATE_VARIABLE_SVarState_81_81;
      MaybeQualifiedYArgTerms_52 = MaybeQualifiedYArgTermsPrime_51;
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), MaybeQualifiedYArgTerms_52, &Arity_53);
      Var_84 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        ConsId_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_54, 1) = ((MR_Box) (FunctorName_50));
        MR_hl_field(MR_mktag(3), ConsId_54, 2) = ((MR_Box) (Arity_53));
        MR_hl_field(MR_mktag(3), ConsId_54, 3) = ((MR_Box) (Var_84));
      }
    }
    else
    {
      hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_7_p_0(STATE_VARIABLE_VarSet_68_68, YFunctor_25, YArgTerms_41, YFunctorContext_27, &ConsId_54, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_85_85);
      MaybeQualifiedYArgTerms_52 = YArgTerms_41;
      STATE_VARIABLE_VarSet_87_87 = STATE_VARIABLE_VarSet_68_68;
      STATE_VARIABLE_SVarState_86_86 = STATE_VARIABLE_SVarState_69_69;
    }
    hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_22_p_0(XVar_24, ConsId_54, MaybeQualifiedYArgTerms_52, YFunctorContext_27, Context_28, MainContext_29, SubContext_30, Purity_31, STATE_VARIABLE_AncestorVarMap_0_55, Expansion_34, STATE_VARIABLE_SVarState_86_86, STATE_VARIABLE_SVarState_57, STATE_VARIABLE_SVarStore_0_58, STATE_VARIABLE_SVarStore_59, STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_VarSet_61, STATE_VARIABLE_ModuleInfo_0_62, STATE_VARIABLE_ModuleInfo_63, STATE_VARIABLE_QualInfo_0_64, STATE_VARIABLE_QualInfo_65, STATE_VARIABLE_Specs_85_85, STATE_VARIABLE_Specs_67);
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
  MR_Word STATE_VARIABLE_SVarState_0_50,
  MR_Word STATE_VARIABLE_SVarStore_0_51,
  MR_Word * STATE_VARIABLE_SVarStore_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_Word MaybeBodyGoal_35;
  MR_Word MaybeDCGVars_36;
  MR_Word MaybeLambdaHead_47;
  MR_Word STATE_VARIABLE_VarSet_65_65;
  MR_Word STATE_VARIABLE_Specs_66_66;
  MR_Word STATE_VARIABLE_VarSet_67_67;
  MR_Word STATE_VARIABLE_QualInfo_68_68;

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
    STATE_VARIABLE_VarSet_65_65 = STATE_VARIABLE_VarSet_0_53;
    STATE_VARIABLE_Specs_66_66 = STATE_VARIABLE_Specs_0_59;
  }
  else
  {
    MR_Word LambdaBodyKind_37;
    MR_Word BodyGoalTerm_38;
    MR_Word ContextPieces_39;
    MR_Word GenericBodyGoalTerm_40;
    MR_Word MaybeBodyGoal0_41;
    MR_Tuple Var_61 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeLambdaBody_26, (MR_Integer) 0))));

    LambdaBodyKind_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
    BodyGoalTerm_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1))));
    ContextPieces_39 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[55]))));
    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyGoalTerm_38, &GenericBodyGoalTerm_40);
    switch (LambdaBodyKind_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word DCGVar0_42;
          MR_Word DCGVarN_43;

          parse_tree__parse_dcg_goal__parse_dcg_pred_goal_7_p_0(GenericBodyGoalTerm_40, ContextPieces_39, &MaybeBodyGoal0_41, &DCGVar0_42, &DCGVarN_43, STATE_VARIABLE_VarSet_0_53, &STATE_VARIABLE_VarSet_65_65);
          {
            MaybeDCGVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDCGVars_36, 0) = ((MR_Box) (DCGVar0_42));
            MR_hl_field(MR_mktag(1), MaybeDCGVars_36, 1) = ((MR_Box) (DCGVarN_43));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_goal__parse_goal_5_p_0(GenericBodyGoalTerm_40, ContextPieces_39, &MaybeBodyGoal0_41, STATE_VARIABLE_VarSet_0_53, &STATE_VARIABLE_VarSet_65_65);
          MaybeDCGVars_36 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    if (((MR_tag((MR_Word) MaybeBodyGoal0_41)) == (MR_Integer) 0))
    {
      MR_Word BodyGoalSpecs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal0_41, (MR_Integer) 0))));

      {
        MaybeBodyGoal_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeBodyGoal_35, 0) = ((MR_Box) (BodyGoalSpecs_46));
      }
      STATE_VARIABLE_Specs_66_66 = STATE_VARIABLE_Specs_0_59;
    }
    else
    {
      MR_Word BodyGoal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal0_41, (MR_Integer) 0))));
      MR_Word BodyGoalWarningSpecs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal0_41, (MR_Integer) 1))));

      STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_45, STATE_VARIABLE_Specs_0_59);
      {
        MaybeBodyGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeBodyGoal_35, 0) = ((MR_Box) (BodyGoal_44));
      }
    }
  }
  hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(PurityPFArgsDetTerm_25, MaybeDCGVars_36, &MaybeLambdaHead_47, STATE_VARIABLE_VarSet_65_65, &STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_QualInfo_0_57, &STATE_VARIABLE_QualInfo_68_68);
  if (((MR_tag((MR_Word) MaybeLambdaHead_47)) == (MR_Integer) 0))
  {
    MR_Word LambdaHeadSpecs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLambdaHead_47, (MR_Integer) 0))));
    MR_Word Var_78;

    *STATE_VARIABLE_Specs_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LambdaHeadSpecs_48, STATE_VARIABLE_Specs_66_66);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_68_68, STATE_VARIABLE_QualInfo_58);
    Var_78 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
    }
    *STATE_VARIABLE_SVarStore_52 = STATE_VARIABLE_SVarStore_0_51;
    *STATE_VARIABLE_VarSet_54 = STATE_VARIABLE_VarSet_67_67;
    *STATE_VARIABLE_ModuleInfo_56 = STATE_VARIABLE_ModuleInfo_0_55;
  }
  else
  {
    MR_Word LambdaHead_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaHead_47, (MR_Integer) 0))));

    hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0(XVar_20, Purity_21, Context_22, MainContext_23, SubContext_24, LambdaHead_49, MaybeBodyGoal_35, Expansion_27, STATE_VARIABLE_SVarState_0_50, STATE_VARIABLE_SVarStore_0_51, STATE_VARIABLE_SVarStore_52, STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarSet_54, STATE_VARIABLE_ModuleInfo_0_55, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_QualInfo_68_68, STATE_VARIABLE_QualInfo_58, STATE_VARIABLE_Specs_66_66, STATE_VARIABLE_Specs_60);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_SVarStore_0_8,
  MR_Word * STATE_VARIABLE_SVarStore_9,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_QualInfo_0_14,
  MR_Word * STATE_VARIABLE_QualInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    *STATE_VARIABLE_QualInfo_15 = STATE_VARIABLE_QualInfo_0_14;
    *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
    *STATE_VARIABLE_VarSet_11 = STATE_VARIABLE_VarSet_0_10;
    *STATE_VARIABLE_SVarStore_9 = STATE_VARIABLE_SVarStore_0_8;
    *STATE_VARIABLE_SVarState_7 = STATE_VARIABLE_SVarState_0_6;
  }
  else
  {
    MR_Word HeadXVarYTermArgContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailXVarsYTermsArgContexts_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadXVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadXVarYTermArgContext_39, (MR_Integer) 0))));
    MR_Word HeadYTerm_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadXVarYTermArgContext_39, (MR_Integer) 1))));
    MR_Integer HeadArgNumber_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadXVarYTermArgContext_39, (MR_Integer) 2))));
    MR_Word HeadArgContext_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadXVarYTermArgContext_39, (MR_Integer) 3))));
    MR_Word HeadExpansion_55;
    MR_Word TailExpansions_56;
    MR_Word STATE_VARIABLE_SVarState_69_69;
    MR_Word STATE_VARIABLE_SVarStore_70_70;
    MR_Word STATE_VARIABLE_VarSet_71_71;
    MR_Word STATE_VARIABLE_ModuleInfo_72_72;
    MR_Word STATE_VARIABLE_QualInfo_73_73;
    MR_Word STATE_VARIABLE_Specs_74_74;

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(HeadXVar_51, HeadYTerm_52, HeadVar__2_2, HeadArgContext_54, HeadArgNumber_53, HeadVar__4_4, &HeadExpansion_55, STATE_VARIABLE_SVarState_0_6, &STATE_VARIABLE_SVarState_69_69, STATE_VARIABLE_SVarStore_0_8, &STATE_VARIABLE_SVarStore_70_70, STATE_VARIABLE_VarSet_0_10, &STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_QualInfo_0_14, &STATE_VARIABLE_QualInfo_73_73, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_74_74);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_17_p_0(TailXVarsYTermsArgContexts_40, HeadVar__2_2, HeadVar__4_4, &TailExpansions_56, STATE_VARIABLE_SVarState_69_69, STATE_VARIABLE_SVarState_7, STATE_VARIABLE_SVarStore_70_70, STATE_VARIABLE_SVarStore_9, STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarSet_11, STATE_VARIABLE_ModuleInfo_72_72, STATE_VARIABLE_ModuleInfo_13, STATE_VARIABLE_QualInfo_73_73, STATE_VARIABLE_QualInfo_15, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadExpansion_55));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailExpansions_56));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_21_p_0(
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
  MR_Word STATE_VARIABLE_SVarStore_0_12,
  MR_Word * STATE_VARIABLE_SVarStore_13,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    *STATE_VARIABLE_QualInfo_19 = STATE_VARIABLE_QualInfo_0_18;
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
    *STATE_VARIABLE_VarSet_15 = STATE_VARIABLE_VarSet_0_14;
    *STATE_VARIABLE_SVarStore_13 = STATE_VARIABLE_SVarStore_0_12;
    *STATE_VARIABLE_SVarState_11 = STATE_VARIABLE_SVarState_0_10;
  }
  else
  {
    MR_Word YTerm_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word YTerms_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word XVar_54;
    MR_Word XVars_55;
    MR_Word Expansion_56;
    MR_Word Expansions_57;
    MR_Word STATE_VARIABLE_VarSet_77_77;
    MR_Word STATE_VARIABLE_SeenXVars_78_78;
    MR_Word STATE_VARIABLE_SVarState_79_79;
    MR_Word STATE_VARIABLE_SVarStore_80_80;
    MR_Word STATE_VARIABLE_VarSet_81_81;
    MR_Word STATE_VARIABLE_ModuleInfo_82_82;
    MR_Word STATE_VARIABLE_QualInfo_83_83;
    MR_Word STATE_VARIABLE_Specs_84_84;
    MR_Integer Var_85;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(YTerm_46, &XVar_54, HeadVar__6_6, STATE_VARIABLE_VarSet_0_14, &STATE_VARIABLE_VarSet_77_77);
    {
      STATE_VARIABLE_SeenXVars_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SeenXVars_78_78, 0) = ((MR_Box) (XVar_54));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SeenXVars_78_78, 1) = ((MR_Box) (HeadVar__6_6));
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(XVar_54, YTerm_46, HeadVar__2_2, HeadVar__3_3, HeadVar__5_5, HeadVar__7_7, &Expansion_56, STATE_VARIABLE_SVarState_0_10, &STATE_VARIABLE_SVarState_79_79, STATE_VARIABLE_SVarStore_0_12, &STATE_VARIABLE_SVarStore_80_80, STATE_VARIABLE_VarSet_77_77, &STATE_VARIABLE_VarSet_81_81, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_QualInfo_0_18, &STATE_VARIABLE_QualInfo_83_83, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_84_84);
    Var_85 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_21_p_0(YTerms_47, HeadVar__2_2, HeadVar__3_3, Var_85, STATE_VARIABLE_SeenXVars_78_78, HeadVar__7_7, &XVars_55, &Expansions_57, STATE_VARIABLE_SVarState_79_79, STATE_VARIABLE_SVarState_11, STATE_VARIABLE_SVarStore_80_80, STATE_VARIABLE_SVarStore_13, STATE_VARIABLE_VarSet_81_81, STATE_VARIABLE_VarSet_15, STATE_VARIABLE_ModuleInfo_82_82, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_QualInfo_83_83, STATE_VARIABLE_QualInfo_19, STATE_VARIABLE_Specs_84_84, STATE_VARIABLE_Specs_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (XVar_54));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (XVars_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Expansion_56));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Expansions_57));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
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
    MR_Word XVar_43;
    MR_Word YTerm_44;
    MR_Word XVarsYTerms_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Expansion_51;
    MR_Word Expansions_52;
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_SVarState_72_72;
    MR_Word STATE_VARIABLE_SVarStore_73_73;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word STATE_VARIABLE_QualInfo_76_76;
    MR_Word STATE_VARIABLE_Specs_77_77;
    MR_Integer Var_78;

    XVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
    YTerm_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 1))));
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_20_p_0(XVar_43, YTerm_44, HeadVar__2_2, HeadVar__3_3, HeadVar__5_5, HeadVar__6_6, &Expansion_51, STATE_VARIABLE_SVarState_0_8, &STATE_VARIABLE_SVarState_72_72, STATE_VARIABLE_SVarStore_0_10, &STATE_VARIABLE_SVarStore_73_73, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_QualInfo_0_16, &STATE_VARIABLE_QualInfo_76_76, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_77_77);
    Var_78 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_19_p_0(XVarsYTerms_45, HeadVar__2_2, HeadVar__3_3, Var_78, HeadVar__6_6, &Expansions_52, STATE_VARIABLE_SVarState_72_72, STATE_VARIABLE_SVarState_9, STATE_VARIABLE_SVarStore_73_73, STATE_VARIABLE_SVarStore_11, STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_15, STATE_VARIABLE_QualInfo_76_76, STATE_VARIABLE_QualInfo_17, STATE_VARIABLE_Specs_77_77, STATE_VARIABLE_Specs_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Expansion_51));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Expansions_52));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaVar_4;

  conv4_LambdaVar_4 = hlds__make_hlds__superhomogeneous__project_lambda_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaVar_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = hlds__make_hlds__superhomogeneous__project_lambda_var_arg_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_ArgTerm_4;

  conv2_ArgTerm_4 = hlds__make_hlds__superhomogeneous__project_lambda_arg_term_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_ArgTerm_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_202;

  conv0_HeadVar__4_202 = hlds__make_hlds__superhomogeneous__IntroducedFrom__func__build_lambda_expression__2034__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_202));
  return wrapper_arg_2;
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
  MR_Word STATE_VARIABLE_SVarStore_0_93,
  MR_Word * STATE_VARIABLE_SVarStore_94,
  MR_Word STATE_VARIABLE_VarSet_0_95,
  MR_Word * STATE_VARIABLE_VarSet_96,
  MR_Word STATE_VARIABLE_ModuleInfo_0_97,
  MR_Word * STATE_VARIABLE_ModuleInfo_98,
  MR_Word STATE_VARIABLE_QualInfo_0_99,
  MR_Word * STATE_VARIABLE_QualInfo_100,
  MR_Word STATE_VARIABLE_Specs_0_101,
  MR_Word * STATE_VARIABLE_Specs_102)
{
  MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word LambdaArgs0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 2))));
  MR_Word BadModeSpecs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 3))));
  MR_Word SVarSpecs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 4))));
  MR_Word MaybeDetism_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 5))));
  MR_Word LambdaArgs1_42;
  MR_Word Modes_43;
  MR_Word InconsistentVars_44;
  MR_Word Detism_51;
  MR_Word BodyGoal_53;
  MR_Word ArgSpecs_55;
  MR_Word Goal_58;
  MR_Word STATE_VARIABLE_QualInfo_103_103;
  MR_Word STATE_VARIABLE_Specs_104_104;
  MR_Word STATE_VARIABLE_Specs_125_125;
  MR_Word STATE_VARIABLE_Specs_126_126;
  MR_Word STATE_VARIABLE_Specs_127_127;
  MR_Word STATE_VARIABLE_QualInfo_129_129;
  MR_Word Var_196;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHead_25, (MR_Integer) 0)));

  hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0(LambdaArgs0_38, &LambdaArgs1_42, &Modes_43, STATE_VARIABLE_QualInfo_0_99, &STATE_VARIABLE_QualInfo_103_103, STATE_VARIABLE_Specs_0_101, &STATE_VARIABLE_Specs_104_104);
  parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(Modes_43, &InconsistentVars_44);
  if ((InconsistentVars_44 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_104_104;
  else
  {
    MR_Word InstVarSet_47;
    MR_Word InconsistentVarStrs_48;
    MR_Word InconsistentVarPieces_49;
    MR_Word InconsistentVarSpec_50;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_String Var_112;
    MR_Word Var_115;
    MR_Box conv1_Var_112;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), STATE_VARIABLE_VarSet_0_95, &InstVarSet_47);
    {
      Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__build_lambda_expression_19_p_0_1));
      MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (InstVarSet_47));
      MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    InconsistentVarStrs_48 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, InconsistentVars_44);
    conv1_Var_112 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InconsistentVars_44, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_112 = ((MR_String) (conv1_Var_112));
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Var_112));
    }
    Var_115 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(InconsistentVarStrs_48);
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[110])));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
    }
    InconsistentVarPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_107, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[112])));
    {
      InconsistentVarSpec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InconsistentVarSpec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.build_lambda_expression\'/19"));
      MR_hl_field(MR_mktag(1), InconsistentVarSpec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), InconsistentVarSpec_50, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), InconsistentVarSpec_50, 3) = ((MR_Box) (Context_22));
      MR_hl_field(MR_mktag(1), InconsistentVarSpec_50, 4) = ((MR_Box) (InconsistentVarPieces_49));
    }
    {
      STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (InconsistentVarSpec_50));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_104_104));
    }
  }
  if (((MR_tag((MR_Word) MaybeDetism_41)) == (MR_Integer) 0))
  {
    MR_Word DetismSpecs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDetism_41, (MR_Integer) 0))));

    STATE_VARIABLE_Specs_126_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DetismSpecs_52, STATE_VARIABLE_Specs_125_125);
    Detism_51 = (MR_Integer) 0;
  }
  else
  {
    Detism_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_41, (MR_Integer) 0))));
    STATE_VARIABLE_Specs_126_126 = STATE_VARIABLE_Specs_125_125;
  }
  if (((MR_tag((MR_Word) MaybeBodyGoal_26)) == (MR_Integer) 0))
  {
    MR_Word BodyGoalSpecs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeBodyGoal_26, (MR_Integer) 0))));

    STATE_VARIABLE_Specs_127_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BodyGoalSpecs_54, STATE_VARIABLE_Specs_126_126);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_103_103, &STATE_VARIABLE_QualInfo_129_129);
    {
      BodyGoal_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BodyGoal_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BodyGoal_53, 1) = ((MR_Box) (Context_22));
    }
  }
  else
  {
    BodyGoal_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_26, (MR_Integer) 0))));
    STATE_VARIABLE_QualInfo_129_129 = STATE_VARIABLE_QualInfo_103_103;
    STATE_VARIABLE_Specs_127_127 = STATE_VARIABLE_Specs_126_126;
  }
  ArgSpecs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), BadModeSpecs_39, SVarSpecs_40);
  if ((ArgSpecs_55 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTerms1_60;
    MR_Word ArgTerms_61;
    MR_Word FinalSVarMap_62;
    MR_Word InitialSVarState_63;
    MR_Word NonOutputLambdaVarsArgs_64;
    MR_Word OutputLambdaVarsArgs_65;
    MR_Word PredFormArity_66;
    MR_Word ArgContext_67;
    MR_Word HeadBefore0_68;
    MR_Word HeadBefore_69;
    MR_Word Substitution_70;
    MR_Word Body_71;
    MR_Word HeadAfter0_72;
    MR_Word HeadAfter_73;
    MR_Word LambdaVarsModes_74;
    MR_Word LambdaVars_75;
    MR_Word FinalSVarState_79;
    MR_Word Globals_80;
    MR_Word ModuleName_81;
    MR_Word HLDS_Goal0_82;
    MR_Word QuantifiedArgTerms_83;
    MR_Word QuantifiedVars0_85;
    MR_Word QuantifiedVars_86;
    MR_Word GoalInfo_87;
    MR_Word HLDS_GoalExpr_88;
    MR_Word HLDS_Goal_89;
    MR_Word LambdaNonLocals_91;
    MR_Word LambdaRHS_92;
    MR_Word STATE_VARIABLE_VarSet_132_132;
    MR_Word STATE_VARIABLE_Specs_133_133;
    MR_Word STATE_VARIABLE_SVarState_134_134;
    MR_Word STATE_VARIABLE_SVarStore_135_135;
    MR_Word STATE_VARIABLE_VarSet_136_136;
    MR_Word STATE_VARIABLE_ModuleInfo_137_137;
    MR_Word STATE_VARIABLE_QualInfo_138_138;
    MR_Word STATE_VARIABLE_Specs_139_139;
    MR_Word STATE_VARIABLE_SVarState_141_141;
    MR_Word STATE_VARIABLE_SVarStore_142_142;
    MR_Word STATE_VARIABLE_VarSet_143_143;
    MR_Word STATE_VARIABLE_ModuleInfo_144_144;
    MR_Word STATE_VARIABLE_QualInfo_145_145;
    MR_Word STATE_VARIABLE_Specs_146_146;
    MR_Word STATE_VARIABLE_SVarStore_148_148;
    MR_Word STATE_VARIABLE_QualInfo_151_151;
    MR_Word Var_182;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_187;
    MR_Word STATE_VARIABLE_LambdaGoalVars_188_188;
    MR_Word STATE_VARIABLE_LambdaGoalVars_189_189;
    MR_Word STATE_VARIABLE_LambdaGoalVars_190_190;

    ArgTerms1_60 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[4]), LambdaArgs1_42);
    hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(Context_22, ArgTerms1_60, &ArgTerms_61, &FinalSVarMap_62, OutsideSVarState_28, &InitialSVarState_63, STATE_VARIABLE_VarSet_0_95, &STATE_VARIABLE_VarSet_132_132, STATE_VARIABLE_Specs_127_127, &STATE_VARIABLE_Specs_133_133);
    hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(STATE_VARIABLE_ModuleInfo_0_97, LambdaArgs1_42, ArgTerms_61, &NonOutputLambdaVarsArgs_64, &OutputLambdaVarsArgs_65);
    PredFormArity_66 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_61);
    {
      ArgContext_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgContext_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_36));
      MR_hl_field(MR_mktag(0), ArgContext_67, 1) = ((MR_Box) (PredFormArity_66));
    }
    HeadBefore0_68 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(NonOutputLambdaVarsArgs_64, Context_22, ArgContext_67, HeadBefore0_68, &HeadBefore_69, InitialSVarState_63, &STATE_VARIABLE_SVarState_134_134, STATE_VARIABLE_SVarStore_0_93, &STATE_VARIABLE_SVarStore_135_135, STATE_VARIABLE_VarSet_132_132, &STATE_VARIABLE_VarSet_136_136, STATE_VARIABLE_ModuleInfo_0_97, &STATE_VARIABLE_ModuleInfo_137_137, STATE_VARIABLE_QualInfo_129_129, &STATE_VARIABLE_QualInfo_138_138, STATE_VARIABLE_Specs_133_133, &STATE_VARIABLE_Specs_139_139);
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &Substitution_70);
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, BodyGoal_53, Substitution_70, &Body_71, STATE_VARIABLE_SVarState_134_134, &STATE_VARIABLE_SVarState_141_141, STATE_VARIABLE_SVarStore_135_135, &STATE_VARIABLE_SVarStore_142_142, STATE_VARIABLE_VarSet_136_136, &STATE_VARIABLE_VarSet_143_143, STATE_VARIABLE_ModuleInfo_137_137, &STATE_VARIABLE_ModuleInfo_144_144, STATE_VARIABLE_QualInfo_138_138, &STATE_VARIABLE_QualInfo_145_145, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_146_146);
    HeadAfter0_72 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(OutputLambdaVarsArgs_65, Context_22, ArgContext_67, HeadAfter0_72, &HeadAfter_73, STATE_VARIABLE_SVarState_141_141, &FinalSVarState_79, STATE_VARIABLE_SVarStore_142_142, &STATE_VARIABLE_SVarStore_148_148, STATE_VARIABLE_VarSet_143_143, STATE_VARIABLE_VarSet_96, STATE_VARIABLE_ModuleInfo_144_144, STATE_VARIABLE_ModuleInfo_98, STATE_VARIABLE_QualInfo_145_145, &STATE_VARIABLE_QualInfo_151_151, STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Specs_102);
    LambdaVarsModes_74 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[5]), LambdaArgs1_42);
    LambdaVars_75 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[6]), LambdaArgs1_42);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_98, &Globals_80);
    hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_98, &ModuleName_81);
    {
      Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (HeadAfter_73));
      MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Body_71));
      MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_185));
    }
    {
      Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (HeadBefore_69));
      MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_184));
    }
    hlds__make_hlds__state_var__svar_finish_lambda_body_10_p_0(Globals_80, ModuleName_81, Context_22, FinalSVarMap_62, Var_182, &HLDS_Goal0_82, InitialSVarState_63, FinalSVarState_79, STATE_VARIABLE_SVarStore_148_148, STATE_VARIABLE_SVarStore_94);
    switch (PredOrFunc_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box conv5__ReturnValTerm_84;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_61, &QuantifiedArgTerms_83, &conv5__ReturnValTerm_84);
        }
        break;
      case (MR_Integer) 0:
        QuantifiedArgTerms_83 = ArgTerms_61;
        break;
    }
    mercury__term__vars_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedArgTerms_83, &QuantifiedVars0_85);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), QuantifiedVars0_85, &QuantifiedVars_86);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_87);
    {
      Var_187 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (QuantifiedVars_86));
    }
    {
      HLDS_GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HLDS_GoalExpr_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), HLDS_GoalExpr_88, 1) = ((MR_Box) (Var_187));
      MR_hl_field(MR_mktag(3), HLDS_GoalExpr_88, 2) = ((MR_Box) (HLDS_Goal0_82));
    }
    {
      HLDS_Goal_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HLDS_Goal_89, 0) = ((MR_Box) (HLDS_GoalExpr_88));
      MR_hl_field(MR_mktag(0), HLDS_Goal_89, 1) = ((MR_Box) (GoalInfo_87));
    }
    hlds__goal_util__goal_vars_2_p_0(HLDS_Goal_89, &STATE_VARIABLE_LambdaGoalVars_188_188);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_75, STATE_VARIABLE_LambdaGoalVars_188_188, &STATE_VARIABLE_LambdaGoalVars_189_189);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantifiedVars_86, STATE_VARIABLE_LambdaGoalVars_189_189, &STATE_VARIABLE_LambdaGoalVars_190_190);
    LambdaNonLocals_91 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaGoalVars_190_190);
    {
      LambdaRHS_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 1) = NULL;
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 2) = ((MR_Box) (LambdaNonLocals_91));
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 3) = ((MR_Box) (LambdaVarsModes_74));
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 4) = (MR_Box) ((MR_Unsigned) (Detism_51));
      MR_hl_field(MR_mktag(2), LambdaRHS_92, 5) = ((MR_Box) (HLDS_Goal_89));
    }
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(LHSVar_20, LambdaRHS_92, Context_22, MainContext_23, SubContext_24, UnificationPurity_21, &Goal_58, STATE_VARIABLE_QualInfo_151_151, STATE_VARIABLE_QualInfo_100);
  }
  else
  {
    *STATE_VARIABLE_Specs_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgSpecs_55, STATE_VARIABLE_Specs_127_127);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_129_129, STATE_VARIABLE_QualInfo_100);
    Goal_58 = hlds__make_goal__true_goal_with_context_1_f_0(Context_22);
    *STATE_VARIABLE_SVarStore_94 = STATE_VARIABLE_SVarStore_0_93;
    *STATE_VARIABLE_VarSet_96 = STATE_VARIABLE_VarSet_0_95;
    *STATE_VARIABLE_ModuleInfo_98 = STATE_VARIABLE_ModuleInfo_0_97;
  }
  Var_196 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_58)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Expansion_27 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_196));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_22_p_0(
  MR_Word XVar_23,
  MR_Word ConsId_24,
  MR_Word MaybeQualifiedYArgTerms_25,
  MR_Word YFunctorContext_26,
  MR_Word Context_27,
  MR_Word MainContext_28,
  MR_Word SubContext_29,
  MR_Word Purity_30,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_49,
  MR_Word * Expansion_32,
  MR_Word STATE_VARIABLE_SVarState_0_50,
  MR_Word * STATE_VARIABLE_SVarState_51,
  MR_Word STATE_VARIABLE_SVarStore_0_52,
  MR_Word * STATE_VARIABLE_SVarStore_53,
  MR_Word STATE_VARIABLE_VarSet_0_54,
  MR_Word * STATE_VARIABLE_VarSet_55,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_QualInfo_0_58,
  MR_Word * STATE_VARIABLE_QualInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
{
  if ((MaybeQualifiedYArgTerms_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RHS_39;
    MR_Word FunctorGoal_40;
    MR_Word Goal_41;
    MR_Word Var_91;
    MR_Word Var_93;

    {
      RHS_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_39, 0) = ((MR_Box) (ConsId_24));
      MR_hl_field(MR_mktag(1), RHS_39, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, RHS_39, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_40, STATE_VARIABLE_QualInfo_0_58, STATE_VARIABLE_QualInfo_59);
    hlds__hlds_goal__goal_set_purity_3_p_0(Purity_30, FunctorGoal_40, &Goal_41);
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (XVar_23));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_93 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_41)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_93));
    }
    *STATE_VARIABLE_SVarState_51 = STATE_VARIABLE_SVarState_0_50;
    *STATE_VARIABLE_SVarStore_53 = STATE_VARIABLE_SVarStore_0_52;
    *STATE_VARIABLE_VarSet_55 = STATE_VARIABLE_VarSet_0_54;
    *STATE_VARIABLE_ModuleInfo_57 = STATE_VARIABLE_ModuleInfo_0_56;
    *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_0_60;
  }
  else
  {
    MR_Word ArgContext_44;
    MR_Word STATE_VARIABLE_AncestorVarMap_62_62;

    {
      ArgContext_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ArgContext_44, 0) = ((MR_Box) (ConsId_24));
      MR_hl_field(MR_mktag(2), ArgContext_44, 1) = ((MR_Box) (MainContext_28));
      MR_hl_field(MR_mktag(2), ArgContext_44, 2) = ((MR_Box) (SubContext_29));
    }
    hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(STATE_VARIABLE_ModuleInfo_0_56, XVar_23, ConsId_24, Context_27, STATE_VARIABLE_AncestorVarMap_0_49, &STATE_VARIABLE_AncestorVarMap_62_62);
    switch (Purity_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Goal0_48;
          MR_Word STATE_VARIABLE_QualInfo_70_70;
          MR_Word Var_75;
          MR_Word RHS_96;
          MR_Word FunctorGoal_97;
          MR_Word Goal_98;
          MR_Word YVars_99;
          MR_Word ArgExpansions_100;
          MR_Word GoalInfo_101;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_21_p_0(MaybeQualifiedYArgTerms_25, YFunctorContext_26, ArgContext_44, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_62_62, &YVars_99, &ArgExpansions_100, STATE_VARIABLE_SVarState_0_50, STATE_VARIABLE_SVarState_51, STATE_VARIABLE_SVarStore_0_52, STATE_VARIABLE_SVarStore_53, STATE_VARIABLE_VarSet_0_54, STATE_VARIABLE_VarSet_55, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_QualInfo_0_58, &STATE_VARIABLE_QualInfo_70_70, STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
          {
            RHS_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RHS_96, 0) = ((MR_Box) (ConsId_24));
            MR_hl_field(MR_mktag(1), RHS_96, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), RHS_96, 2) = ((MR_Box) (YVars_99));
          }
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, RHS_96, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_97, STATE_VARIABLE_QualInfo_70_70, STATE_VARIABLE_QualInfo_59);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_101);
          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(GoalInfo_101, ArgExpansions_100, FunctorGoal_97, &Goal0_48);
          hlds__hlds_goal__goal_set_purity_3_p_0(Purity_30, Goal0_48, &Goal_98);
          Var_75 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_98)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Expansion_32 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_75));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word YVars_45;
          MR_Word ArgExpansions_46;
          MR_Word GoalInfo_47;
          MR_Word STATE_VARIABLE_QualInfo_83_83;
          MR_Word RHS_94;
          MR_Word FunctorGoal_95;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_21_p_0(MaybeQualifiedYArgTerms_25, YFunctorContext_26, ArgContext_44, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_62_62, &YVars_45, &ArgExpansions_46, STATE_VARIABLE_SVarState_0_50, STATE_VARIABLE_SVarState_51, STATE_VARIABLE_SVarStore_0_52, STATE_VARIABLE_SVarStore_53, STATE_VARIABLE_VarSet_0_54, STATE_VARIABLE_VarSet_55, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_QualInfo_0_58, &STATE_VARIABLE_QualInfo_83_83, STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
          {
            RHS_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RHS_94, 0) = ((MR_Box) (ConsId_24));
            MR_hl_field(MR_mktag(1), RHS_94, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), RHS_94, 2) = ((MR_Box) (YVars_45));
          }
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_23, RHS_94, YFunctorContext_26, MainContext_28, SubContext_29, Purity_30, &FunctorGoal_95, STATE_VARIABLE_QualInfo_83_83, STATE_VARIABLE_QualInfo_59);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_47);
          hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(GoalInfo_47, XVar_23, FunctorGoal_95, (MR_Integer) 1, ArgExpansions_46, Expansion_32);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_6;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(
  MR_Word XVarsArgTerms0_18,
  MR_Word Context_19,
  MR_Word ArgContext_20,
  MR_Word Goal0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_SVarState_0_34,
  MR_Word * STATE_VARIABLE_SVarState_35,
  MR_Word STATE_VARIABLE_SVarStore_0_36,
  MR_Word * STATE_VARIABLE_SVarStore_37,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_Word XVarsArgTerms_29;
  MR_Word AncestorVarMap_30;
  MR_Word Expansions_31;
  MR_Word GoalInfo0_33;
  MR_Word STATE_VARIABLE_VarSet_46_46;
  MR_Word STATE_VARIABLE_SVarState_47_47;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word BaseGoals_63;
  MR_Word ExpansionGoalCords_64;
  MR_Word ExpansionGoals_65;
  MR_Word Var_66;
  MR_Word Var_67;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_8_p_0(XVarsArgTerms0_18, &XVarsArgTerms_29, STATE_VARIABLE_VarSet_0_38, &STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_SVarState_0_34, &STATE_VARIABLE_SVarState_47_47, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_48_48);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &AncestorVarMap_30);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_19_p_0(XVarsArgTerms_29, Context_19, ArgContext_20, (MR_Integer) 1, AncestorVarMap_30, &Expansions_31, STATE_VARIABLE_SVarState_47_47, STATE_VARIABLE_SVarState_35, STATE_VARIABLE_SVarStore_0_36, STATE_VARIABLE_SVarStore_37, STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarSet_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_QualInfo_0_42, STATE_VARIABLE_QualInfo_43, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_45);
  GoalInfo0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_21, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_21, &BaseGoals_63);
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0_1));
    MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (GoalInfo0_33));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_66, Expansions_31, &ExpansionGoalCords_64);
  ExpansionGoals_65 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_64);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_65, BaseGoals_63);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_67, GoalInfo0_33, Goal_22);
}

static MR_Box MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0_1(
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
hlds__make_hlds__superhomogeneous__qualify_lambda_arg_modes_if_not_opt_imported_7_p_0(
  MR_Word LambdaArgs0_8,
  MR_Word * LambdaArgs_9,
  MR_Word * Modes_10,
  MR_Word STATE_VARIABLE_QualInfo_0_17,
  MR_Word * STATE_VARIABLE_QualInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
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
        *Modes_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_lambda_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[3]), *LambdaArgs_9);
        *STATE_VARIABLE_QualInfo_18 = STATE_VARIABLE_QualInfo_0_17;
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
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
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.partition_args_and_lambda_vars\'/5", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word ArgTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgTerms_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InputLambdaVarsArgTermsTail_28;
      MR_Word OutputLambdaVarsArgTermsTail_29;
      MR_Word LambdaVar_32;
      MR_Word Mode_35;
      MR_Word LambdaVarArgTerm_37;
      MR_Word Var_42;
      MR_Word Var_43;

      hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_5_p_0(ModuleInfo_1, Var_38, ArgTerms_25, &InputLambdaVarsArgTermsTail_28, &OutputLambdaVarsArgTermsTail_29);
      LambdaVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 2))));
      Mode_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 4))));
      {
        LambdaVarArgTerm_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LambdaVarArgTerm_37, 0) = ((MR_Box) (LambdaVar_32));
        MR_hl_field(MR_mktag(0), LambdaVarArgTerm_37, 1) = ((MR_Box) (ArgTerm_24));
      }
      succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_35, &Var_42, &Var_43);
      if (succeeded)
        succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, Mode_35);
      if (succeeded)
      {
        *HeadVar__4_4 = InputLambdaVarsArgTermsTail_28;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaVarArgTerm_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputLambdaVarsArgTermsTail_29));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaVarArgTerm_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InputLambdaVarsArgTermsTail_28));
        }
        *HeadVar__5_5 = OutputLambdaVarsArgTermsTail_29;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_lambda_purity_pf_args_det_term_7_p_0(
  MR_Word PurityPFArgsDetTerm_8,
  MR_Word MaybeDCGVars_9,
  MR_Word * MaybeLambdaHead_10,
  MR_Word STATE_VARIABLE_VarSet_0_61,
  MR_Word * STATE_VARIABLE_VarSet_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64)
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
  MR_Word Var_65;
  MR_String Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;

  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PurityPFArgsDetTerm_8, &GenericPurityPFArgsDetTerm_13);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_117_114_105_116_121_95_97_110_110_111_116_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(GenericPurityPFArgsDetTerm_13, &LambdaPurity_14, &PFArgsDetTerm_15);
  succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 0))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
      succeeded = (strcmp(Var_66, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeIsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
          succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DetismTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) BeforeIsTerm_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 0))));
                BeforeIsArgTerms_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 1))));
                Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_16, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BeforeIsFunctor_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 0))));
                  if ((strcmp(BeforeIsFunctor_19, (MR_String) "=") == 0))
                  {
                    MR_Word FuncArgsTerm_25;
                    MR_Word FuncRetArgModeTerm0_26;
                    MR_String FuncTermFunctor_27;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;

                    succeeded = (BeforeIsArgTerms_20 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncArgsTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_20, (MR_Integer) 0))));
                      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_20, (MR_Integer) 1))));
                      succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FuncRetArgModeTerm0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                        succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) FuncArgsTerm_25)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_25, (MR_Integer) 0))));
                            ArgModeTerms0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_25, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              FuncTermFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0))));
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

    hlds__make_hlds__superhomogeneous__parse_lambda_detism_3_p_0(STATE_VARIABLE_VarSet_0_61, DetismTerm_17, &MaybeDetism_29);
    if ((MaybeDCGVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFuncRetArgModeTerm_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LambdaArgs_32;
        MR_Word BadModeSpecs_33;
        MR_Word SVarSpecs_34;
        MR_Word LambdaHead_35;

        hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_21, ArgModeTerms0_23, &LambdaArgs_32, STATE_VARIABLE_VarSet_0_61, STATE_VARIABLE_VarSet_62, &BadModeSpecs_33, &SVarSpecs_34);
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
        MR_Word LambdaArgs_223;
        MR_Word BadModeSpecs_224;
        MR_Word SVarSpecs_225;
        MR_Word LambdaHead_226;
        MR_Word FuncRetArgModeTerm_308 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFuncRetArgModeTerm_24, (MR_Integer) 0))));

        hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_21, ArgModeTerms0_23, FuncRetArgModeTerm_308, &LambdaArgs_223, STATE_VARIABLE_VarSet_0_61, STATE_VARIABLE_VarSet_62, &BadModeSpecs_224, &SVarSpecs_225);
        {
          LambdaHead_226 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LambdaHead_226, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_22) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), LambdaHead_226, 1) = NULL;
          MR_hl_field(MR_mktag(0), LambdaHead_226, 2) = ((MR_Box) (LambdaArgs_223));
          MR_hl_field(MR_mktag(0), LambdaHead_226, 3) = ((MR_Box) (BadModeSpecs_224));
          MR_hl_field(MR_mktag(0), LambdaHead_226, 4) = ((MR_Box) (SVarSpecs_225));
          MR_hl_field(MR_mktag(0), LambdaHead_226, 5) = ((MR_Box) (MaybeDetism_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLambdaHead_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_226));
        }
      }
    else
    {
      MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDCGVars_9, (MR_Integer) 1))));
      MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDCGVars_9, (MR_Integer) 0))));

      if ((MaybeFuncRetArgModeTerm_24 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgModeTerms0_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_40;
          MR_Word Var_120;
          MR_Word Var_121;

          {
            Spec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/7"));
            MR_hl_field(MR_mktag(1), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_40, 3) = ((MR_Box) (Context_21));
            MR_hl_field(MR_mktag(1), Spec_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[61])));
          }
          Var_121 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Spec_40));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeLambdaHead_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_120));
          }
          *STATE_VARIABLE_VarSet_62 = STATE_VARIABLE_VarSet_0_61;
        }
        else
        {
          MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModeTerms0_23, (MR_Integer) 1))));
          MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModeTerms0_23, (MR_Integer) 0))));

          if ((Var_315 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_292;
            MR_Word Var_296;
            MR_Word Var_297;

            {
              Spec_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_292, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/7"));
              MR_hl_field(MR_mktag(1), Spec_292, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_292, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_292, 3) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(1), Spec_292, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[61])));
            }
            Var_297 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
            {
              Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_296, 0) = ((MR_Box) (Spec_292));
              MR_hl_field(MR_mktag(1), Var_296, 1) = ((MR_Box) (Var_297));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeLambdaHead_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_296));
            }
            *STATE_VARIABLE_VarSet_62 = STATE_VARIABLE_VarSet_0_61;
          }
          else
          {
            MR_Word ArgModeTerm2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 0))));
            MR_Word ArgModeTerms3plus_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 1))));
            MR_Word NonDCGArgModeTerms_44;
            MR_Word DCGModeTerm0_45;
            MR_Word DCGModeTermN_46;
            MR_Word DCGContext0_47;
            MR_Word DCGContextN_48;
            MR_Word DCGVarTerm0_49;
            MR_Word DCGVarTermN_50;
            MR_Word GenericDCGVarTerm0_51;
            MR_Word GenericDCGVarTermN_52;
            MR_Word DCGArgModeTerm0_53;
            MR_Word DCGArgModeTermN_54;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word ArgModeTerms_208;
            MR_Word LambdaArgs_209;
            MR_Word BadModeSpecs_210;
            MR_Word SVarSpecs_211;
            MR_Word LambdaHead_212;
            MR_Box conv1_DCGModeTerm0_45;
            MR_Box conv0_DCGModeTermN_46;

            hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_116_119_111_95_95_91_49_93_95_48_6_p_0(((MR_Box) (Var_316)), ((MR_Box) (ArgModeTerm2_42)), ArgModeTerms3plus_43, &NonDCGArgModeTerms_44, &conv1_DCGModeTerm0_45, &conv0_DCGModeTermN_46);
            DCGModeTerm0_45 = ((MR_Word) (conv1_DCGModeTerm0_45));
            DCGModeTermN_46 = ((MR_Word) (conv0_DCGModeTermN_46));
            DCGContext0_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTerm0_45);
            DCGContextN_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGModeTermN_46);
            {
              DCGVarTerm0_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DCGVarTerm0_49, 0) = ((MR_Box) (Var_314));
              MR_hl_field(MR_mktag(1), DCGVarTerm0_49, 1) = ((MR_Box) (DCGContext0_47));
            }
            {
              DCGVarTermN_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DCGVarTermN_50, 0) = ((MR_Box) (Var_313));
              MR_hl_field(MR_mktag(1), DCGVarTermN_50, 1) = ((MR_Box) (DCGContextN_48));
            }
            mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTerm0_49, &GenericDCGVarTerm0_51);
            mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DCGVarTermN_50, &GenericDCGVarTermN_52);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (DCGModeTerm0_45));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (GenericDCGVarTerm0_51));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
            }
            {
              DCGArgModeTerm0_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DCGArgModeTerm0_53, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[3]));
              MR_hl_field(MR_mktag(0), DCGArgModeTerm0_53, 1) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), DCGArgModeTerm0_53, 2) = ((MR_Box) (DCGContext0_47));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (DCGModeTermN_46));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (GenericDCGVarTermN_52));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
            }
            {
              DCGArgModeTermN_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DCGArgModeTermN_54, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[3]));
              MR_hl_field(MR_mktag(0), DCGArgModeTermN_54, 1) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), DCGArgModeTermN_54, 2) = ((MR_Box) (DCGContextN_48));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (DCGArgModeTermN_54));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (DCGArgModeTerm0_53));
              MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
            }
            ArgModeTerms_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[3]), NonDCGArgModeTerms_44, Var_100);
            hlds__make_hlds__superhomogeneous__parse_lambda_args_pred_7_p_0(Context_21, ArgModeTerms_208, &LambdaArgs_209, STATE_VARIABLE_VarSet_0_61, STATE_VARIABLE_VarSet_62, &BadModeSpecs_210, &SVarSpecs_211);
            {
              LambdaHead_212 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LambdaHead_212, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_22) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
              MR_hl_field(MR_mktag(0), LambdaHead_212, 1) = NULL;
              MR_hl_field(MR_mktag(0), LambdaHead_212, 2) = ((MR_Box) (LambdaArgs_209));
              MR_hl_field(MR_mktag(0), LambdaHead_212, 3) = ((MR_Box) (BadModeSpecs_210));
              MR_hl_field(MR_mktag(0), LambdaHead_212, 4) = ((MR_Box) (SVarSpecs_211));
              MR_hl_field(MR_mktag(0), LambdaHead_212, 5) = ((MR_Box) (MaybeDetism_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLambdaHead_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_212));
            }
          }
        }
      else
      {
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Spec_228;

        {
          Spec_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_228, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/7"));
          MR_hl_field(MR_mktag(1), Spec_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_228, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_228, 3) = ((MR_Box) (Context_21));
          MR_hl_field(MR_mktag(1), Spec_228, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[65])));
        }
        Var_86 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_29);
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_228));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLambdaHead_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
        }
        *STATE_VARIABLE_VarSet_62 = STATE_VARIABLE_VarSet_0_61;
      }
    }
    *STATE_VARIABLE_QualInfo_64 = STATE_VARIABLE_QualInfo_0_63;
  }
  else
  {
    MR_Word Var_126;
    MR_Word Context_272;
    MR_Word Groundness_273;
    MR_Word ArgModeTerms_278;
    MR_Word FuncRetArgModeTerm_285;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_String BeforeIsFunctor_242;
    MR_Word BeforeIsArgTerms_243;
    MR_Word FuncArgsTerm_244;
    MR_String FuncTermFunctor_245;

    succeeded = ((MR_tag((MR_Word) PFArgsDetTerm_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 0))));
      BeforeIsArgTerms_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 1))));
      Context_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFArgsDetTerm_15, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_124)) == (MR_Integer) 0);
      if (succeeded)
      {
        BeforeIsFunctor_242 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_124, (MR_Integer) 0))));
        succeeded = (strcmp(BeforeIsFunctor_242, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (BeforeIsArgTerms_243 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncArgsTerm_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_243, (MR_Integer) 0))));
            Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BeforeIsArgTerms_243, (MR_Integer) 1))));
            succeeded = (Var_125 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncRetArgModeTerm_285 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 0))));
              Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 1))));
              succeeded = (Var_126 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FuncArgsTerm_244)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_244, (MR_Integer) 0))));
                  ArgModeTerms_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncArgsTerm_244, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_127)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    FuncTermFunctor_245 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_127, (MR_Integer) 0))));
                    if ((strcmp(FuncTermFunctor_245, (MR_String) "func") == 0))
                    {
                      Groundness_273 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(FuncTermFunctor_245, (MR_String) "any_func") == 0))
                    {
                      Groundness_273 = (MR_Integer) 1;
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
        MR_Word LambdaArgs_247;
        MR_Word BadModeSpecs_248;
        MR_Word SVarSpecs_249;
        MR_Word LambdaHead_250;

        hlds__make_hlds__superhomogeneous__parse_lambda_args_func_8_p_0(Context_272, ArgModeTerms_278, FuncRetArgModeTerm_285, &LambdaArgs_247, STATE_VARIABLE_VarSet_0_61, STATE_VARIABLE_VarSet_62, &BadModeSpecs_248, &SVarSpecs_249);
        {
          LambdaHead_250 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LambdaHead_250, 0) = (MR_Box) (((((MR_Unsigned) (LambdaPurity_14) << 2)) | (((((MR_Unsigned) (Groundness_273) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), LambdaHead_250, 1) = NULL;
          MR_hl_field(MR_mktag(0), LambdaHead_250, 2) = ((MR_Box) (LambdaArgs_247));
          MR_hl_field(MR_mktag(0), LambdaHead_250, 3) = ((MR_Box) (BadModeSpecs_248));
          MR_hl_field(MR_mktag(0), LambdaHead_250, 4) = ((MR_Box) (SVarSpecs_249));
          MR_hl_field(MR_mktag(0), LambdaHead_250, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_3[4])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLambdaHead_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHead_250));
        }
      }
      else
      {
        MR_Word Var_139;
        MR_Word Spec_252;

        {
          Spec_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_252, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/7"));
          MR_hl_field(MR_mktag(1), Spec_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_252, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_252, 3) = ((MR_Box) (Context_272));
          MR_hl_field(MR_mktag(1), Spec_252, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[65])));
        }
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Spec_252));
          MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_126));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeLambdaHead_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
        }
        *STATE_VARIABLE_VarSet_62 = STATE_VARIABLE_VarSet_0_61;
      }
      *STATE_VARIABLE_QualInfo_64 = STATE_VARIABLE_QualInfo_0_63;
    }
    else
    {
      MR_Word Var_203;
      MR_Word Var_206;
      MR_Word Spec_269;

      Var_203 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PFArgsDetTerm_15);
      {
        Spec_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_269, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_purity_pf_args_det_term\'/7"));
        MR_hl_field(MR_mktag(1), Spec_269, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_269, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_269, 3) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(1), Spec_269, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[96])));
      }
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_63, STATE_VARIABLE_QualInfo_64);
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Spec_269));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLambdaHead_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_206));
      }
      *STATE_VARIABLE_VarSet_62 = STATE_VARIABLE_VarSet_0_61;
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
  MR_bool succeeded = ((MR_tag((MR_Word) DetismTerm_5)) == (MR_Integer) 0);
  MR_Word Detism_9;
  MR_String DetString_7;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetismTerm_5, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetismTerm_5, (MR_Integer) 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        DetString_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
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
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_29;
    MR_Word Var_30;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, &GenericVarSet_10);
    TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), GenericVarSet_10, DetismTerm_5);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (TermStr_11));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[109])));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_18));
    }
    Var_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_5);
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_lambda_detism\'/3"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDetism_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
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
    MR_Word Spec_39;

    {
      Spec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_pred_no_args_have_modes_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_39, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[104])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_30_30));
    }
  }
  else
  {
    MR_Word Spec_58;

    {
      Spec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_some_not_all_args_have_modes_error\'/4"));
      MR_hl_field(MR_mktag(1), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_58, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[100])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_58));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_30_30));
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
    MR_Word Spec_51;

    {
      Spec_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.add_some_not_all_args_have_modes_error\'/4"));
      MR_hl_field(MR_mktag(1), Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_51, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Spec_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[100])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeSpecs_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_51));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeSpecs_39_39));
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
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[107])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[105])));
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
  *STATE_VARIABLE_ArgNum_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_36 + (MR_Unsigned) 1);
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * MaybeWrappedGoalCord_6)
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word Expansion_5,
  MR_Word * Goal_6)
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
        return;
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

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_7_p_0(
  MR_Word VarSet_8,
  MR_Word Functor_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Word * ConsId_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Functor_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_9, (MR_Integer) 0))));
        MR_Integer Arity_15;
        MR_Word Var_87;
        MR_Word Var_88;

        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), ArgTerms_10, &Arity_15);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Name_14));
        }
        Var_88 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_15));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_88));
        }
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_9, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Integer_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_9, (MR_Integer) 1))));
        MR_Word Signedness_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_9, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_9, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_Word MaybeConsId_20;

        parse_tree__parse_util__parse_integer_cons_id_6_p_0(Base_16, Integer_17, Signedness_18, Size_19, Context_11, &MaybeConsId_20);
        if (((MR_tag((MR_Word) MaybeConsId_20)) == (MR_Integer) 0))
        {
          MR_Word ConsIdSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeConsId_20, (MR_Integer) 0))));

          *ConsId_12 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[35]));
          *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConsIdSpecs_21, STATE_VARIABLE_Specs_0_29);
        }
        else
        {
          *ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_20, (MR_Integer) 0))));
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String String_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), Functor_9, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (String_23));
        }
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsId_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(Float_22);
            }
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Name_89 = ((MR_String) ((MR_hl_field(MR_mktag(3), Functor_9, (MR_Integer) 1))));
            MR_Word IDCKind_24;
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 4;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string simple lookup switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(Name_89, ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                IDCKind_24 = ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_1;
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
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ConsId_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (IDCKind_24));
              }
              *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
            }
            else
            {
              MR_Word ErrorTerm_25;
              MR_String TermStr_26;
              MR_Word Pieces_27;
              MR_Word Spec_28;
              MR_Word Var_33;
              MR_Word Var_36;
              MR_Word Var_37;

              {
                ErrorTerm_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ErrorTerm_25, 0) = ((MR_Box) (Functor_9));
                MR_hl_field(MR_mktag(0), ErrorTerm_25, 1) = ((MR_Box) (ArgTerms_10));
                MR_hl_field(MR_mktag(0), ErrorTerm_25, 2) = ((MR_Box) (Context_11));
              }
              TermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, ErrorTerm_25);
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (TermStr_26));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[33])));
              }
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
              }
              {
                Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[9])));
                MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_33));
              }
              {
                Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_ordinary_cons_id\'/7"));
                MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_30 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
              }
              *ConsId_12 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[34]));
            }
          }
          break;
      }
      break;
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
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, STATE_VARIABLE_VarSet_0_12, STATE_VARIABLE_VarSet_13);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_17,
  MR_Word * STATE_VARIABLE_AncestorVarMap_18)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word SymName_12;
  MR_Integer Arity_13;
  MR_Integer Var_19;

  if (succeeded)
  {
    SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
    Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
    Var_19 = (MR_Integer) 0;
    succeeded = (Arity_13 > Var_19);
    if (succeeded)
    {
      {
        MR_Word ConsTable_15;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &ConsTable_15);
        succeeded = hlds__hlds_cons__is_known_data_cons_2_p_0(ConsTable_15, ConsId_9);
      }
      if (!(succeeded))
      {
        MR_String Var_20;

        succeeded = ((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_20, (MR_String) "{}") == 0);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word _OldContext_16;

    mercury__map__search_insert_5_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (XVar_8)), ((MR_Box) (Context_10)), &_OldContext_16, STATE_VARIABLE_AncestorVarMap_0_17, STATE_VARIABLE_AncestorVarMap_18);
  }
  else
    *STATE_VARIABLE_AncestorVarMap_18 = STATE_VARIABLE_AncestorVarMap_0_17;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
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
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_6;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
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
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
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

        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[2]), ArgExpansions_11, &ArgGoalCords_23);
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
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_6;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_6));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Expansions_6,
  MR_Word BaseGoal_7,
  MR_Word * Goal_8)
{
  MR_Word BaseGoals_9;
  MR_Word ExpansionGoalCords_10;
  MR_Word ExpansionGoals_11;
  MR_Word Var_12;
  MR_Word Var_13;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_7, &BaseGoals_9);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (GoalInfo_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), Var_12, Expansions_6, &ExpansionGoalCords_10);
  ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_10);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_11, BaseGoals_9);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_13, GoalInfo_5, Goal_8);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__occurs_check_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word AncestorVarMap_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word AncestorContext_12;
  MR_Box conv0_AncestorContext_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), AncestorVarMap_9, ((MR_Box) (Var_10)), &conv0_AncestorContext_12);
  if (succeeded)
  {
    AncestorContext_12 = ((MR_Word) (conv0_AncestorContext_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Globals_13;
    MR_Word WarnOccursCheck_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 61, &WarnOccursCheck_14);
    switch (WarnOccursCheck_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_String VarName_15;
          MR_Word Pieces_16;
          MR_Word Spec_17;
          MR_Word Var_23;
          MR_Word Var_24;

          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, Var_10, &VarName_15);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (VarName_15));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[115])));
          }
          {
            Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[113])));
            MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_23));
          }
          {
            Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.occurs_check\'/6"));
            MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (AncestorContext_12));
            MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
          }
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word UVT0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word UVTs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word UVT_20;
    MR_Word UVTs_21;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UVT0_18, (MR_Integer) 0))));
    MR_Word Arg0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UVT0_18, (MR_Integer) 1))));
    MR_Word Arg_27;
    MR_Word STATE_VARIABLE_VarSet_34_34;
    MR_Word STATE_VARIABLE_State_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(Arg0_26, &Arg_27, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_35_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_36_36);
    {
      UVT_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UVT_20, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), UVT_20, 1) = ((MR_Box) (Arg_27));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_8_p_0(UVTs0_19, &UVTs_21, STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_State_35_35, STATE_VARIABLE_State_6, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UVT_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UVTs_21));
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
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.pair_vars_with_terms\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Term_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word VarTerm_18;
      MR_Word VarsTerms_19;

      {
        VarTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarTerm_18, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), VarTerm_18, 1) = ((MR_Box) (Term_16));
      }
      hlds__make_hlds__superhomogeneous__pair_vars_with_terms_3_p_0(Var_20, Terms_17, &VarsTerms_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarTerm_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarsTerms_19));
      }
    }
  }
}

MR_Word MR_CALL 
hlds__make_hlds__superhomogeneous__unify_var_term_project_var_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

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
