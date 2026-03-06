/*
** Automatically generated from `var_origins.m'
** by the Mercury compiler,
** version rotd-2026-03-06
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


// :- module hlds.var_origins.
// :- implementation.

/*
INIT mercury__hlds__var_origins__init
ENDINIT
*/

#include "hlds.var_origins.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "uint.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__var_origins__set_ordlist__pti_set_ordlist_1__plain_hlds__var_origins__type_ctor_info_var_origin_0;

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_0[1];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_0[1];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_1[1];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_1[1];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_1;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_1[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_0[2];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_0[2];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_0[1];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_0[1];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_1[2];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_1[2];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_1;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_1[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_arg_0[2];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_arg_0[2];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_arg_0[2];

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_clause_head_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_clause_head_0_0[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_clause_head_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_clause_head_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_clause_head_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_clause_head_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_clause_head_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_foreign_call_0_0[4];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_foreign_call_0_0[4];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_foreign_call_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_foreign_call_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_foreign_call_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_foreign_call_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_foreign_call_0[1];

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_generic_call_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_generic_call_0_0[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_generic_call_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_generic_call_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_generic_call_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_generic_call_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_generic_call_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__var_origins__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_lambda_head_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_lambda_head_0_0[3];

static const MR_DuArgLocn hlds__var_origins__hlds__var_origins__field_locns_origin_lambda_head_0_0[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_lambda_head_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_lambda_head_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_lambda_head_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_lambda_head_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_lambda_head_0[1];

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_plain_call_0_0[4];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_plain_call_0_0[4];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_plain_call_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_plain_call_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_plain_call_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_plain_call_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_plain_call_0[1];

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_unify_func_0_0[4];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_unify_func_0_0[4];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_func_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_func_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_func_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_func_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_func_0[1];

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_unify_var_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_unify_var_0_0[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_var_0_0;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_var_0_0[1];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_var_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_var_0[1];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_var_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0;

static const MR_FA_TypeInfo_Struct2 hlds__var_origins__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__var_origins____vpti_pred_5__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__var_origins__type_ctor_info_var_origin_0__pseudo_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_0[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_0;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_1[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_1[3];

static const MR_DuArgLocn hlds__var_origins__hlds__var_origins__field_locns_var_origin_0_1[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_1;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_2[2];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_2[2];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_2;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_3[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_3[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_3;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_4[4];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_4[4];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_5[4];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_5[4];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_5;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_6[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_6[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_6;

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_0[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_1[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_2[1];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_3[4];

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_var_origin_0[4];

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_var_origin_0[7];

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_var_origin_0[7];

static void MR_CALL 
hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__688__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_11,
  MR_Word * HeadVar__3_12);

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_plain_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_plain_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_lambda_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_lambda_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_generic_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_generic_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_foreign_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_foreign_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_clause_head_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_clause_head_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__var_origins__arg_num_description_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Integer NumArgs_6,
  MR_Unsigned ArgNum_7);

static void MR_CALL 
hlds__var_origins__pred_arg_num_description_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word CalleeSymName_10,
  MR_Unsigned ArgNum_11,
  MR_Word * MaybePredOrFunc_12,
  MR_Word * SymName_13,
  MR_Word * ArgNumPieces_14);

static void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevOriginsMapList_0_6,
  MR_Word * STATE_VARIABLE_RevOriginsMapList_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_99_108_97_117_115_101_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word CollectPred_8,
  MR_Word ModuleInfo_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_OriginsMap_0_86,
  MR_Word * STATE_VARIABLE_OriginsMap_87,
  MR_Box STATE_VARIABLE_Acc_0_88,
  MR_Box * STATE_VARIABLE_Acc_89);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_OriginsMap_0_4,
  MR_Word * STATE_VARIABLE_OriginsMap_5,
  MR_Box STATE_VARIABLE_Acc_0_6,
  MR_Box * STATE_VARIABLE_Acc_7);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginUnifyFunc_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_16,
  MR_Word * STATE_VARIABLE_OriginsMap_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_118_97_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginUnifyVar_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_16,
  MR_Word * STATE_VARIABLE_OriginsMap_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginLambdaHead_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word CollectPred_8,
  MR_Word Var_9,
  MR_Word VarOrigin_10,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18);

static void MR_CALL 
hlds__var_origins__represent_origins_on_all_branches_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__var_origins__represent_origins_on_all_branches_2_p_0(
  MR_Word OriginsMapList_3,
  MR_Word * OriginsMap_4);

static MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_clause_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_clause_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_foreign_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_foreign_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_generic_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_generic_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_plain_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_plain_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____record_var_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__var_origins____Compare____record_var_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__var_origins____Unify____var_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____var_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_origins____Unify____var_origins_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_origins____Compare____var_origins_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__var_origins_scalar_common_1[43][2];

static /* final */ const MR_Box hlds__var_origins_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__var_origins_scalar_common_3[1][6];




static /* final */ const MR_Box hlds__var_origins_scalar_common_1[43][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__var_origins_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__var_origins_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument inthe head of"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type cast."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of an existential type cast."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type coercion."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type and inst cast."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call to method"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the callee of the"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher order"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call here."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the lambda expression."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represents the term"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of the function symbol"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unified with"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is unified with"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function result"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__var_origins_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__var_origins_scalar_common_1[0])),
    ((MR_Box) (&hlds__var_origins_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__var_origins_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__var_origins_scalar_common_3[0])),
    ((MR_Box) (hlds__var_origins__represent_origins_on_all_branches_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__var_origins_scalar_common_3[0])),
    ((MR_Box) (hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__var_origins_scalar_common_3[0])),
    ((MR_Box) (hlds__var_origins__compute_var_origins_in_pred_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__var_origins_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__var_origins__set_ordlist__pti_set_ordlist_1__plain_hlds__var_origins__type_ctor_info_var_origin_0)),
    ((MR_Box) (&hlds__var_origins__set_ordlist__pti_set_ordlist_1__plain_hlds__var_origins__type_ctor_info_var_origin_0)),
    ((MR_Box) (&hlds__var_origins__set_ordlist__pti_set_ordlist_1__plain_hlds__var_origins__type_ctor_info_var_origin_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__var_origins__set_ordlist__pti_set_ordlist_1__plain_hlds__var_origins__type_ctor_info_var_origin_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_0[1] = { (MR_String) "rhs_var" };

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_0 = {
  (MR_String) "lor_lhs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_0,
  hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_1[1] = { (MR_String) "lhs_var" };

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_1 = {
  (MR_String) "lor_rhs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_0_1,
  hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_0 };

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_1[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_1 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_0[2] = {
  &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_0,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_0_1
};

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____lhs_or_rhs_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____lhs_or_rhs_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "lhs_or_rhs",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_0[1] = { (MR_String) "rhs_argvars" };

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_0 = {
  (MR_String) "lora_lhs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_0,
  hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_1[2] = {
  (MR_String) "lhs_var",
  (MR_String) "rhs_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_1 = {
  (MR_String) "lora_rhs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__var_origins__hlds__var_origins__field_types_lhs_or_rhs_arg_0_1,
  hlds__var_origins__hlds__var_origins__field_names_lhs_or_rhs_arg_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_0 };

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_1[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_1 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_lhs_or_rhs_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_arg_0[2] = {
  &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_0,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_lhs_or_rhs_arg_0_1
};

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____lhs_or_rhs_arg_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____lhs_or_rhs_arg_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "lhs_or_rhs_arg",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_lhs_or_rhs_arg_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_lhs_or_rhs_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_lhs_or_rhs_arg_0,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_clause_head_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_clause_head_0_0[3] = {
  (MR_String) "och_context",
  (MR_String) "och_clause",
  (MR_String) "och_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_clause_head_0_0 = {
  (MR_String) "origin_clause_head",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_clause_head_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_clause_head_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_clause_head_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_clause_head_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_clause_head_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_clause_head_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_clause_head_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_clause_head_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_clause_head_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_clause_head_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_clause_head_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_clause_head_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_clause_head",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_clause_head_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_clause_head_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_clause_head_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0) }
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_foreign_call_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1hlds__hlds_goal__type_ctor_info_foreign_arg_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_foreign_call_0_0[4] = {
  (MR_String) "ofc_context",
  (MR_String) "ofc_callee_id",
  (MR_String) "ofc_callee_sn",
  (MR_String) "ofc_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_foreign_call_0_0 = {
  (MR_String) "origin_foreign_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_foreign_call_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_foreign_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_foreign_call_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_foreign_call_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_foreign_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_foreign_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_foreign_call_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_foreign_call_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_foreign_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_foreign_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_foreign_call_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_foreign_call_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_foreign_call",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_foreign_call_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_foreign_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_foreign_call_0,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_generic_call_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_generic_call_0_0[3] = {
  (MR_String) "ogc_context",
  (MR_String) "ogc_callee",
  (MR_String) "ogc_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_generic_call_0_0 = {
  (MR_String) "origin_generic_call",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_generic_call_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_generic_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_generic_call_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_generic_call_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_generic_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_generic_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_generic_call_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_generic_call_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_generic_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_generic_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_generic_call_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_generic_call_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_generic_call",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_generic_call_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_generic_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_generic_call_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__var_origins__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__var_origins__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_lambda_head_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_mode_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_lambda_head_0_0[3] = {
  (MR_String) "olh_context",
  (MR_String) "olh_p_or_f",
  (MR_String) "olh_args"
};

static const MR_DuArgLocn hlds__var_origins__hlds__var_origins__field_locns_origin_lambda_head_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_lambda_head_0_0 = {
  (MR_String) "origin_lambda_head",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_lambda_head_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_lambda_head_0_0,
  hlds__var_origins__hlds__var_origins__field_locns_origin_lambda_head_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_lambda_head_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_lambda_head_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_lambda_head_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_lambda_head_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_lambda_head_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_lambda_head_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_lambda_head_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_lambda_head_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_lambda_head_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_lambda_head_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_lambda_head",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_lambda_head_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_lambda_head_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_lambda_head_0,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_plain_call_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_plain_call_0_0[4] = {
  (MR_String) "opc_context",
  (MR_String) "opc_callee_id",
  (MR_String) "opc_callee_sn",
  (MR_String) "opc_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_plain_call_0_0 = {
  (MR_String) "origin_plain_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_plain_call_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_plain_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_plain_call_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_plain_call_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_plain_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_plain_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_plain_call_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_plain_call_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_plain_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_plain_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_plain_call_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_plain_call_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_plain_call",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_plain_call_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_plain_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_plain_call_0,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_unify_func_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_unify_func_0_0[4] = {
  (MR_String) "ouf_context",
  (MR_String) "ouf_lhs",
  (MR_String) "ouf_cons_id",
  (MR_String) "ouf_rhs"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_func_0_0 = {
  (MR_String) "origin_unify_func",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_unify_func_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_unify_func_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_func_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_func_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_func_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_func_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_func_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_func_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_func_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_unify_func_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_unify_func_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_unify_func_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_unify_func",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_func_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_func_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_func_0,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_unify_var_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_unify_var_0_0[3] = {
  (MR_String) "ouv_context",
  (MR_String) "ouv_lhs",
  (MR_String) "ouv_rhs"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_var_0_0 = {
  (MR_String) "origin_unify_var",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_origin_unify_var_0_0,
  hlds__var_origins__hlds__var_origins__field_names_origin_unify_var_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_var_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_var_0_0 };

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_var_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_origin_unify_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_var_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_origin_unify_var_0_0 };

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_var_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_origin_unify_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____origin_unify_var_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____origin_unify_var_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "origin_unify_var",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_origin_unify_var_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_origin_unify_var_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_origin_unify_var_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__var_origins__set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__var_origins__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__var_origins__set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__var_origins____vpti_pred_5__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__var_origins__type_ctor_info_var_origin_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&hlds__var_origins__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0),
    (MR_PseudoTypeInfo) (&hlds__var_origins__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_record_var_origin_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__var_origins____Unify____record_var_origin_1_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____record_var_origin_1_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "record_var_origin",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__var_origins____vpti_pred_5__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__var_origins__type_ctor_info_var_origin_0__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_0[3] = {
  (MR_String) "voch_context",
  (MR_String) "voch_clause",
  (MR_String) "voch_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_0 = {
  (MR_String) "var_origin_clause_head",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_0,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_1[3] = {
  (MR_String) "volh_context",
  (MR_String) "volh_p_or_f",
  (MR_String) "volh_arg_num"
};

static const MR_DuArgLocn hlds__var_origins__hlds__var_origins__field_locns_var_origin_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_1 = {
  (MR_String) "var_origin_lambda_head",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_1,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_1,
  hlds__var_origins__hlds__var_origins__field_locns_var_origin_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_2[2] = {
  (MR_String) "vouv_context",
  (MR_String) "vouv_lorhs"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_2 = {
  (MR_String) "var_origin_unify_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_2,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_3[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_arg_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_3[3] = {
  (MR_String) "vouf_context",
  (MR_String) "vouf_cons_id",
  (MR_String) "vouf_lorhsa"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_3 = {
  (MR_String) "var_origin_unify_func",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_3,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_4[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_4[4] = {
  (MR_String) "vopc_context",
  (MR_String) "vopc_callee_id",
  (MR_String) "vopc_callee_sn",
  (MR_String) "vopc_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4 = {
  (MR_String) "var_origin_plain_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_4,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_5[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_5[4] = {
  (MR_String) "vofc_context",
  (MR_String) "vofc_callee_id",
  (MR_String) "vofc_callee_sn",
  (MR_String) "vofc_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_5 = {
  (MR_String) "var_origin_foreign_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_5,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_6[3] = {
  (MR_String) "vogc_context",
  (MR_String) "vogc_callee",
  (MR_String) "vogc_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_6 = {
  (MR_String) "var_origin_generic_call",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  hlds__var_origins__hlds__var_origins__field_types_var_origin_0_6,
  hlds__var_origins__hlds__var_origins__field_names_var_origin_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_0[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_0 };

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_1[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_1 };

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_2[1] = { &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_2 };

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_3[4] = {
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_3,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_5,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_6
};

static const MR_DuPtagLayout hlds__var_origins__hlds__var_origins__du_ptag_ordered_var_origin_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__var_origins__hlds__var_origins__du_stag_ordered_var_origin_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_origins__hlds__var_origins__du_name_ordered_var_origin_0[7] = {
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_0,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_5,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_6,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_1,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_3,
  &hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_2
};

static const MR_Integer hlds__var_origins__hlds__var_origins__functor_number_map_var_origin_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_origins____Unify____var_origin_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____var_origin_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "var_origin",
  { hlds__var_origins__hlds__var_origins__du_name_ordered_var_origin_0 },
  { hlds__var_origins__hlds__var_origins__du_ptag_ordered_var_origin_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  hlds__var_origins__hlds__var_origins__functor_number_map_var_origin_0,

};

const MR_TypeCtorInfo_Struct hlds__var_origins__hlds__var_origins__type_ctor_info_var_origins_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__var_origins____Unify____var_origins_map_0_0_10001)),
  ((MR_Box) (hlds__var_origins____Compare____var_origins_map_0_0_10001)),
  (MR_String) "hlds.var_origins",
  (MR_String) "var_origins_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__var_origins__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1hlds__var_origins__type_ctor_info_var_origin_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__688__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_11,
  MR_Word * HeadVar__3_12)
{
  mercury__set__union_3_p_0((MR_Word) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0), HeadVar__1_10, HeadVar__2_11, HeadVar__3_12);
}

void MR_CALL 
hlds__var_origins____Compare____var_origins_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__var_origins____Unify____var_origins_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__var_origins_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__var_origins____Compare____var_origin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_63 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_64 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_63 == CastY_64);
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
              MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
              MR_Word SubResult1_6;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                {
                  SubResult2_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX2_7 > ArgY2_8);
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
                  succeeded = (ArgX3_10 < ArgY3_11);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX3_10 > ArgY3_11);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 1);
              MR_Unsigned ArgX3_18 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Unsigned ArgY3_19 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_14;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
              succeeded = (SubResult1_14 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_14;
              else
              {
                MR_Word SubResult2_17;
                MR_Integer Var_87 = (MR_Integer) (ArgX2_15);
                MR_Integer Var_88 = (MR_Integer) (ArgY2_16);

                succeeded = (Var_87 < Var_88);
                if (succeeded)
                {
                  SubResult2_17 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_87 > Var_88);
                  if (succeeded)
                  {
                    SubResult2_17 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_17;
                else
                {
                  succeeded = (ArgX3_18 < ArgY3_19);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX3_18 > ArgY3_19);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_22;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_22, ArgX1_20, ArgY1_21);
              succeeded = (SubResult1_22 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_22;
              else
                hlds__var_origins____Compare____lhs_or_rhs_0_0(HeadVar__1_1, ArgX2_23, ArgY2_24);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_27;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_27, ArgX1_25, ArgY1_26);
                      succeeded = (SubResult1_27 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_27;
                      else
                      {
                        MR_Word SubResult2_30;

                        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_30, ArgX2_28, ArgY2_29);
                        succeeded = (SubResult2_30 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_30;
                        else
                          hlds__var_origins____Compare____lhs_or_rhs_arg_0_0(HeadVar__1_1, ArgX3_31, ArgY3_32);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Unsigned ArgX4_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Unsigned ArgY4_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_35;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_35, ArgX1_33, ArgY1_34);
                      succeeded = (SubResult1_35 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_35;
                      else
                      {
                        MR_Word SubResult2_38;

                        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_38, ArgX2_36, ArgY2_37);
                        succeeded = (SubResult2_38 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_38;
                        else
                        {
                          MR_Word SubResult3_41;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_41, ArgX3_39, ArgY3_40);
                          succeeded = (SubResult3_41 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_41;
                          else
                          {
                            succeeded = (ArgX4_42 < ArgY4_43);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX4_42 > ArgY4_43);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Unsigned ArgX4_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Unsigned ArgY4_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_46;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_46, ArgX1_44, ArgY1_45);
                      succeeded = (SubResult1_46 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_46;
                      else
                      {
                        MR_Word SubResult2_49;

                        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_49, ArgX2_47, ArgY2_48);
                        succeeded = (SubResult2_49 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_49;
                        else
                        {
                          MR_Word SubResult3_52;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_52, ArgX3_50, ArgY3_51);
                          succeeded = (SubResult3_52 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_52;
                          else
                          {
                            succeeded = (ArgX4_53 < ArgY4_54);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX4_53 > ArgY4_54);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Unsigned ArgX3_61 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Unsigned ArgY3_62 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_57;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_57, ArgX1_55, ArgY1_56);
                      succeeded = (SubResult1_57 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_57;
                      else
                      {
                        MR_Word SubResult2_60;

                        hlds__hlds_goal____Compare____generic_call_0_0(&SubResult2_60, ArgX2_58, ArgY2_59);
                        succeeded = (SubResult2_60 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_60;
                        else
                        {
                          succeeded = (ArgX3_61 < ArgY3_62);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_61 > ArgY3_62);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__var_origins____Unify____var_origin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_47 == CastY_48);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Unsigned ArgY2_6;
          MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_Unsigned ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
                succeeded = (ArgX3_7 == ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY2_12;
          MR_Unsigned ArgX3_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Unsigned ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
            ArgY3_14 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = (ArgX2_11 == ArgY2_12);
              if (succeeded)
                succeeded = (ArgX3_13 == ArgY3_14);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
              succeeded = hlds__var_origins____Unify____lhs_or_rhs_0_0(ArgX2_17, ArgY2_18);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_21, ArgY2_22);
                  if (succeeded)
                    succeeded = hlds__var_origins____Unify____lhs_or_rhs_arg_0_0(ArgX3_23, ArgY3_24);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_28;
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_30;
              MR_Unsigned ArgX4_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Unsigned ArgY4_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_25, ArgY1_26);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_27, ArgY2_28);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_29, ArgY3_30);
                    if (succeeded)
                      succeeded = (ArgX4_31 == ArgY4_32);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_36;
              MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_38;
              MR_Unsigned ArgX4_39 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Unsigned ArgY4_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_40 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_33, ArgY1_34);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_35, ArgY2_36);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_37, ArgY3_38);
                    if (succeeded)
                      succeeded = (ArgX4_39 == ArgY4_40);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_42;
              MR_Word ArgX2_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_44;
              MR_Unsigned ArgX3_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Unsigned ArgY3_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_41, ArgY1_42);
                if (succeeded)
                {
                  succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX2_43, ArgY2_44);
                  if (succeeded)
                    succeeded = (ArgX3_45 == ArgY3_46);
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__var_origins____Compare____record_var_origin_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__var_origins____Unify____record_var_origin_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_var_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_var_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_func_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_func_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__var_origins_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_plain_call_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_plain_call_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__var_origins_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_lambda_head_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_lambda_head_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__var_origins_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_generic_call_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_goal____Compare____generic_call_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_generic_call_0_0(
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
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__var_origins_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_foreign_call_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_foreign_call_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__var_origins_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_clause_head_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_clause_head_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__var_origins_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      succeeded = (ArgX2_9 < ArgY2_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_9 > ArgY2_10);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_arg_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_11_11 = (MR_Word) (&hlds__var_origins_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_12_12 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = (ArgX2_7 == ArgY2_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
  }
}

MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&hlds__var_origins_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__var_origins__explain_var_origin_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Var_8,
  MR_Word Origin_9,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word Msg_10;
  MR_String VarStr_11;
  MR_Word Context_12;
  MR_Word Pieces_17;

  VarStr_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, (MR_Integer) 0, Var_8);
  switch (MR_tag((MR_Word) Origin_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Unsigned ClauseNum_13;
        MR_Unsigned ArgNum_14;
        MR_Integer ArgNumInt_15;
        MR_Integer ClauseNumInt_16;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_63;

        Context_12 = ((MR_Word) ((MR_hl_field(0, Origin_9, 0))));
        ClauseNum_13 = ((MR_Unsigned) ((MR_hl_field(0, Origin_9, 1))));
        ArgNum_14 = ((MR_Unsigned) ((MR_hl_field(0, Origin_9, 2))));
        ArgNumInt_15 = mercury__uint__cast_to_int_1_f_0(ArgNum_14);
        ClauseNumInt_16 = mercury__uint__cast_to_int_1_f_0(ClauseNum_13);
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (ArgNumInt_15));
        }
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (ClauseNumInt_16));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[7])));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[6])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_51));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Unsigned ArgNum_294;
        MR_Integer ArgNumInt_295;

        Context_12 = ((MR_Word) ((MR_hl_field(1, Origin_9, 0))));
        ArgNum_294 = ((MR_Unsigned) ((MR_hl_field(1, Origin_9, 2))));
        ArgNumInt_295 = mercury__uint__cast_to_int_1_f_0(ArgNum_294);
        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_70, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (ArgNumInt_295));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[35])));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_71));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSorRHS_19;
        MR_Word OtherVar_20;
        MR_String OtherVarStr_21;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_90;
        MR_Word Var_91;

        Context_12 = ((MR_Word) ((MR_hl_field(2, Origin_9, 0))));
        LHSorRHS_19 = ((MR_Word) ((MR_hl_field(2, Origin_9, 1))));
        if (((MR_tag((MR_Word) LHSorRHS_19)) == (MR_Integer) 0))
          OtherVar_20 = ((MR_Word) ((MR_hl_field(0, LHSorRHS_19, 0))));
        else
          OtherVar_20 = ((MR_Word) ((MR_hl_field(1, LHSorRHS_19, 0))));
        OtherVarStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, (MR_Integer) 0, OtherVar_20);
        {
          Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_86, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_91, 1) = ((MR_Box) (OtherVarStr_21));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[39])));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_86));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_87));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Origin_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConsId_22;
            MR_Word LHSorRHSArg_23;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            ConsId_22 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            LHSorRHSArg_23 = ((MR_Word) ((MR_hl_field(3, Origin_9, 3))));
            if (((MR_tag((MR_Word) LHSorRHSArg_23)) == (MR_Integer) 0))
            {
              MR_Word RHSArgVars_24 = ((MR_Word) ((MR_hl_field(0, LHSorRHSArg_23, 0))));
              MR_String TermStr_25;
              MR_Word Var_98;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word Var_104;
              MR_Word Var_105;

              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (VarTable_7));
              }
              TermStr_25 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_6, Var_98, (MR_Integer) 0, ConsId_22, RHSArgVars_24);
              {
                Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_100, 1) = ((MR_Box) (VarStr_11));
              }
              {
                Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_105, 1) = ((MR_Box) (TermStr_25));
              }
              {
                Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
                MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[36])));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_104));
              }
              {
                Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_100));
                MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_101));
              }
            }
            else
            {
              MR_Word LHSVar_26 = ((MR_Word) ((MR_hl_field(1, LHSorRHSArg_23, 0))));
              MR_String ConsIdStr_27;
              MR_String LHSVarStr_28;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Unsigned ArgNum_296 = ((MR_Unsigned) ((MR_hl_field(1, LHSorRHSArg_23, 1))));
              MR_Integer ArgNumInt_297;

              ArgNumInt_297 = mercury__uint__cast_to_int_1_f_0(ArgNum_296);
              ConsIdStr_27 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_22);
              LHSVarStr_28 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, (MR_Integer) 0, LHSVar_26);
              {
                Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_115, 1) = ((MR_Box) (VarStr_11));
              }
              {
                Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_120, 1) = ((MR_Box) (ArgNumInt_297));
              }
              {
                Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_125, 1) = ((MR_Box) (ConsIdStr_27));
              }
              {
                Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_130, 1) = ((MR_Box) (LHSVarStr_28));
              }
              {
                Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
                MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
              }
              {
                Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_126, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[38])));
                MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
              }
              {
                Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
                MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
              }
              {
                Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[37])));
                MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
              }
              {
                Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
              }
              {
                Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
              }
              {
                Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_115));
                MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_116));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_326;
            MR_Word CalleeSymName_327;
            MR_Word MaybePredOrFunc_328;
            MR_Word SymName_329;
            MR_Word ArgNumDescPieces_330;
            MR_Word PFPieces_332;
            MR_Word Var_335;
            MR_Word Var_336;
            MR_Word Var_338;
            MR_Word Var_339;
            MR_Word Var_341;
            MR_Word Var_342;
            MR_Word Var_344;
            MR_Word Var_345;
            MR_Unsigned ArgNum_347;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            PredId_326 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            CalleeSymName_327 = ((MR_Word) ((MR_hl_field(3, Origin_9, 3))));
            ArgNum_347 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 4))));
            hlds__var_origins__pred_arg_num_description_7_p_0(ModuleInfo_6, PredId_326, CalleeSymName_327, ArgNum_347, &MaybePredOrFunc_328, &SymName_329, &ArgNumDescPieces_330);
            if ((MaybePredOrFunc_328 == (MR_Word) ((MR_Unsigned) 0U)))
              PFPieces_332 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word PredOrFunc_320 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_328, 0))));
              MR_Word Var_321;

              {
                Var_321 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_321, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_321, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_320));
              }
              {
                PFPieces_332 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PFPieces_332, 0) = ((MR_Box) (Var_321));
                MR_hl_field(1, PFPieces_332, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              Var_336 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_336, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_336, 1) = ((MR_Box) (VarStr_11));
            }
            {
              Var_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_335, 0) = ((MR_Box) (Var_336));
              MR_hl_field(1, Var_335, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
            }
            {
              Var_345 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_345, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_345, 1) = ((MR_Box) (SymName_329));
            }
            {
              Var_344 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_344, 0) = ((MR_Box) (Var_345));
              MR_hl_field(1, Var_344, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[16])));
            }
            {
              Var_342 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_342, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[14])));
              MR_hl_field(1, Var_342, 1) = ((MR_Box) (Var_344));
            }
            Var_341 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PFPieces_332, Var_342);
            Var_339 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[13])), Var_341);
            Var_338 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_330, Var_339);
            Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_335, Var_338);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_29;
            MR_Word CalleeSymName_30;
            MR_Word MaybePredOrFunc_31;
            MR_Word SymName_32;
            MR_Word ArgNumDescPieces_33;
            MR_Word PFPieces_35;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Unsigned ArgNum_302;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            PredId_29 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            CalleeSymName_30 = ((MR_Word) ((MR_hl_field(3, Origin_9, 3))));
            ArgNum_302 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 4))));
            hlds__var_origins__pred_arg_num_description_7_p_0(ModuleInfo_6, PredId_29, CalleeSymName_30, ArgNum_302, &MaybePredOrFunc_31, &SymName_32, &ArgNumDescPieces_33);
            if ((MaybePredOrFunc_31 == (MR_Word) ((MR_Unsigned) 0U)))
              PFPieces_35 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word PredOrFunc_34 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_31, 0))));
              MR_Word Var_137;

              {
                Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_137, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
              }
              {
                PFPieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PFPieces_35, 0) = ((MR_Box) (Var_137));
                MR_hl_field(1, PFPieces_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_140, 1) = ((MR_Box) (VarStr_11));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
            }
            {
              Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_156, 1) = ((MR_Box) (SymName_32));
            }
            {
              Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
              MR_hl_field(1, Var_155, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[16])));
            }
            {
              Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[14])));
              MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
            }
            Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PFPieces_35, Var_152);
            Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[13])), Var_151);
            Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_33, Var_146);
            Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, Var_145);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GenericCall_36;
            MR_Unsigned ArgNum_316;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            GenericCall_36 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            ArgNum_316 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 3))));
            switch (MR_tag((MR_Word) GenericCall_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer NumArgs_39;
                  MR_Word Var_163 = ((MR_Word) ((MR_hl_field(0, GenericCall_36, 2))));
                  MR_Word PredOrFunc_306 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_36, 1))) & (MR_Integer) 1);

                  NumArgs_39 = (MR_Integer) (Var_163);
                  succeeded = (ArgNum_316 == (MR_Unsigned) 1U);
                  if (succeeded)
                  {
                    MR_Word Var_164;
                    MR_Word Var_165;
                    MR_Word Var_168;
                    MR_Word Var_171;
                    MR_Word Var_172;

                    {
                      Var_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_164, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_164, 1) = ((MR_Box) (VarStr_11));
                    }
                    {
                      Var_172 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_172, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(3, Var_172, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_306));
                    }
                    {
                      Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
                      MR_hl_field(1, Var_171, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[16])));
                    }
                    {
                      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_168, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[29])));
                      MR_hl_field(1, Var_168, 1) = ((MR_Box) (Var_171));
                    }
                    {
                      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_165, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[28])));
                      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_168));
                    }
                    {
                      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_164));
                      MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_165));
                    }
                  }
                  else
                  {
                    MR_Integer Var_179 = (MR_Integer) ((MR_Unsigned) NumArgs_39 - (MR_Unsigned) 1);
                    MR_Word Var_181;
                    MR_Word Var_182;
                    MR_Word Var_187;
                    MR_Word Var_188;
                    MR_Word Var_191;
                    MR_Word Var_194;
                    MR_Word Var_195;
                    MR_Word ArgNumDescPieces_303;

                    ArgNumDescPieces_303 = hlds__var_origins__arg_num_description_3_f_0(PredOrFunc_306, Var_179, ArgNum_316);
                    {
                      Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_182, 1) = ((MR_Box) (VarStr_11));
                    }
                    {
                      Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
                      MR_hl_field(1, Var_181, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
                    }
                    {
                      Var_195 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_195, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(3, Var_195, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_306));
                    }
                    {
                      Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_194, 0) = ((MR_Box) (Var_195));
                      MR_hl_field(1, Var_194, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[31])));
                    }
                    {
                      Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_191, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[29])));
                      MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_194));
                    }
                    {
                      Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_188, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
                      MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_191));
                    }
                    Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_303, Var_188);
                    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_181, Var_187);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PfSNA_44 = ((MR_Word) ((MR_hl_field(1, GenericCall_36, 3))));
                  MR_Word Var_202 = ((MR_Word) ((MR_hl_field(0, PfSNA_44, 2))));
                  MR_Word Var_203;
                  MR_Word Var_204;
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_218;
                  MR_Word Var_219;
                  MR_Word SymName_307 = ((MR_Word) ((MR_hl_field(0, PfSNA_44, 1))));
                  MR_Word ArgNumDescPieces_308;
                  MR_Word PredOrFunc_309 = ((MR_Unsigned) ((MR_hl_field(0, PfSNA_44, 0))) & (MR_Integer) 1);
                  MR_Integer NumArgs_310 = (MR_Integer) (Var_202);

                  ArgNumDescPieces_308 = hlds__var_origins__arg_num_description_3_f_0(PredOrFunc_309, NumArgs_310, ArgNum_316);
                  {
                    Var_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_204, 1) = ((MR_Box) (VarStr_11));
                  }
                  {
                    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_203, 0) = ((MR_Box) (Var_204));
                    MR_hl_field(1, Var_203, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
                  }
                  {
                    Var_214 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_214, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_214, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_309));
                  }
                  {
                    Var_219 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_219, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(3, Var_219, 1) = ((MR_Box) (SymName_307));
                  }
                  {
                    Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_218, 0) = ((MR_Box) (Var_219));
                    MR_hl_field(1, Var_218, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[16])));
                  }
                  {
                    Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_215, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[25])));
                    MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_218));
                  }
                  {
                    Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_213, 0) = ((MR_Box) (Var_214));
                    MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_215));
                  }
                  {
                    Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_210, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
                    MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_213));
                  }
                  Var_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_308, Var_210);
                  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_203, Var_209);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_45 = ((MR_String) ((MR_hl_field(2, GenericCall_36, 0))));
                  MR_Word Var_226;
                  MR_Word Var_227;
                  MR_Word Var_230;
                  MR_Word Var_231;
                  MR_Word Var_232;
                  MR_Word Var_235;
                  MR_Word Var_238;
                  MR_Word Var_239;
                  MR_Integer ArgNumInt_311;

                  ArgNumInt_311 = mercury__uint__cast_to_int_1_f_0(ArgNum_316);
                  {
                    Var_226 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_226, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_226, 1) = ((MR_Box) (VarStr_11));
                  }
                  {
                    Var_231 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_231, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_231, 1) = ((MR_Box) (ArgNumInt_311));
                  }
                  {
                    Var_239 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_239, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_239, 1) = ((MR_Box) (EventName_45));
                  }
                  {
                    Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_238, 0) = ((MR_Box) (Var_239));
                    MR_hl_field(1, Var_238, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
                  }
                  {
                    Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_235, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[27])));
                    MR_hl_field(1, Var_235, 1) = ((MR_Box) (Var_238));
                  }
                  {
                    Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_232, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[26])));
                    MR_hl_field(1, Var_232, 1) = ((MR_Box) (Var_235));
                  }
                  {
                    Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_230, 0) = ((MR_Box) (Var_231));
                    MR_hl_field(1, Var_230, 1) = ((MR_Box) (Var_232));
                  }
                  {
                    Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_227, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                    MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_230));
                  }
                  {
                    Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_226));
                    MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_227));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastKind_46 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_36, 0))) & (MR_Integer) 7);
                  MR_String InOrOut_47;

                  succeeded = (ArgNum_316 == (MR_Unsigned) 1U);
                  if (succeeded)
                    InOrOut_47 = (MR_String) "input";
                  else
                    InOrOut_47 = (MR_String) "output";
                  switch (CastKind_46) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_246;
                        MR_Word Var_247;
                        MR_Word Var_250;
                        MR_Word Var_251;

                        {
                          Var_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_246, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_246, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_251 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_251, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_251, 1) = ((MR_Box) (InOrOut_47));
                        }
                        {
                          Var_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_250, 0) = ((MR_Box) (Var_251));
                          MR_hl_field(1, Var_250, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[18])));
                        }
                        {
                          Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_247, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_247, 1) = ((MR_Box) (Var_250));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_246));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_247));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_270;
                        MR_Word Var_271;
                        MR_Word Var_274;
                        MR_Word Var_275;

                        {
                          Var_270 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_270, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_270, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_275 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_275, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_275, 1) = ((MR_Box) (InOrOut_47));
                        }
                        {
                          Var_274 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_274, 0) = ((MR_Box) (Var_275));
                          MR_hl_field(1, Var_274, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[20])));
                        }
                        {
                          Var_271 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_271, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_271, 1) = ((MR_Box) (Var_274));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_270));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_271));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_282;
                        MR_Word Var_283;
                        MR_Word Var_286;
                        MR_Word Var_287;

                        {
                          Var_282 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_282, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_282, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_287 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_287, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_287, 1) = ((MR_Box) (InOrOut_47));
                        }
                        {
                          Var_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_286, 0) = ((MR_Box) (Var_287));
                          MR_hl_field(1, Var_286, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[22])));
                        }
                        {
                          Var_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_283, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_283, 1) = ((MR_Box) (Var_286));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_282));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_283));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_258;
                        MR_Word Var_259;
                        MR_Word Var_262;
                        MR_Word Var_263;

                        {
                          Var_258 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_258, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_258, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_263 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_263, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_263, 1) = ((MR_Box) (InOrOut_47));
                        }
                        {
                          Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_262, 0) = ((MR_Box) (Var_263));
                          MR_hl_field(1, Var_262, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[24])));
                        }
                        {
                          Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_259, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_259, 1) = ((MR_Box) (Var_262));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_258));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_259));
                        }
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
  {
    Msg_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg_10, 0) = ((MR_Box) (Context_12));
    MR_hl_field(0, Msg_10, 1) = ((MR_Box) (Pieces_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__5_5 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Msg_10));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Word MR_CALL 
hlds__var_origins__arg_num_description_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Integer NumArgs_6,
  MR_Unsigned ArgNum_7)
{
  MR_bool succeeded;
  MR_Word Pieces_8;
  MR_Integer ArgNumInt_9;

  ArgNumInt_9 = mercury__uint__cast_to_int_1_f_0(ArgNum_7);
  succeeded = (PredOrFunc_5 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (ArgNumInt_9 == NumArgs_6);
  if (succeeded)
    Pieces_8 = (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[42]));
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_13, 1) = ((MR_Box) (ArgNumInt_9));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[40])));
    }
  }
  return Pieces_8;
}

static void MR_CALL 
hlds__var_origins__pred_arg_num_description_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word CalleeSymName_10,
  MR_Unsigned ArgNum_11,
  MR_Word * MaybePredOrFunc_12,
  MR_Word * SymName_13,
  MR_Word * ArgNumPieces_14)
{
  MR_bool succeeded;
  MR_Word PredIdTable_15;
  MR_Word PredInfo_16;
  MR_Box conv0_PredInfo_16;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_8, &PredIdTable_15);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_15, ((MR_Box) (PredId_9)), &conv0_PredInfo_16);
  if (succeeded)
  {
    PredInfo_16 = ((MR_Word) (conv0_PredInfo_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredOrFunc_17;
    MR_Integer NumArgs_18;
    MR_Word Var_19;
    MR_Integer ArgNumInt_27;

    PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePredOrFunc_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredOrFunc_17));
    }
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_16, SymName_13);
    Var_19 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_16);
    NumArgs_18 = (MR_Integer) (Var_19);
    ArgNumInt_27 = mercury__uint__cast_to_int_1_f_0(ArgNum_11);
    succeeded = (PredOrFunc_17 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ArgNumInt_27 == NumArgs_18);
    if (succeeded)
      *ArgNumPieces_14 = (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[42]));
    else
    {
      MR_Word Var_31;

      {
        Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_31, 1) = ((MR_Box) (ArgNumInt_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgNumPieces_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[40])));
      }
    }
  }
  else
  {
    MR_Word Var_20;

    *MaybePredOrFunc_12 = (MR_Word) ((MR_Unsigned) 0U);
    *SymName_13 = CalleeSymName_10;
    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (ArgNum_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ArgNumPieces_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[40])));
    }
  }
}

static void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__688__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_12));
}

void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word CollectPred_7,
  MR_Word ModuleInfo_8,
  MR_Word PredInfo0_9,
  MR_Word * OriginsMap_10,
  MR_Box STATE_VARIABLE_Acc_0_20,
  MR_Box * STATE_VARIABLE_Acc_21)
{
  MR_Word ClausesInfo0_12;
  MR_Word HeadVars_13;
  MR_Word ClausesRep0_14;
  MR_Word Clauses_16;
  MR_Word RevOriginsMapList_18;
  MR_Word OriginsMapList_19;
  MR_Word _ItemNumbers_15;
  MR_Word _ClausesRep_17;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_9, &ClausesInfo0_12);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo0_12, &HeadVars_13);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_12, &ClausesRep0_14, &_ItemNumbers_15);
  hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses_16, ClausesRep0_14, &_ClausesRep_17);
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_9_p_0(CollectPred_7, ModuleInfo_8, HeadVars_13, (MR_Unsigned) 1U, Clauses_16, (MR_Word) ((MR_Unsigned) 0U), &RevOriginsMapList_18, STATE_VARIABLE_Acc_0_20, STATE_VARIABLE_Acc_21);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__var_origins_scalar_common_2[0]), RevOriginsMapList_18, &OriginsMapList_19);
  if ((OriginsMapList_19 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), OriginsMap_10);
  else
  {
    MR_Word HeadOriginsMap_26 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_19, 0))));
    MR_Word TailOriginsMaps_27 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_19, 1))));

    mercury__map__union_list_4_p_1((MR_Word) (&hlds__var_origins_scalar_common_1[1]), (MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_2[4]), HeadOriginsMap_26, TailOriginsMaps_27, OriginsMap_10);
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevOriginsMapList_0_6,
  MR_Word * STATE_VARIABLE_RevOriginsMapList_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_0_8;
      *STATE_VARIABLE_RevOriginsMapList_7 = STATE_VARIABLE_RevOriginsMapList_0_6;
    }
    else
    {
      MR_Word Clause_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Clauses_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word BodyGoal_29 = ((MR_Word) ((MR_hl_field(0, Clause_24, 1))));
      MR_Word Lang_30 = ((MR_Word) ((MR_hl_field(0, Clause_24, 2))));
      MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, Clause_24, 3))));
      MR_Unsigned NextClauseNum_38;
      MR_Box STATE_VARIABLE_Acc_2_45;
      MR_Word STATE_VARIABLE_RevOriginsMapList_1_46;
      MR_Unsigned next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMapList_0_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_8;

      if ((Lang_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OriginsMap1_36;
        MR_Word OriginsMap_37;
        MR_Box STATE_VARIABLE_Acc_1_44;
        MR_Word STATE_VARIABLE_OriginsMap_1_52;

        mercury__map__init_1_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), &STATE_VARIABLE_OriginsMap_1_52);
        hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_99_108_97_117_115_101_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(HeadVar__1_1, Context_31, HeadVar__4_4, (MR_Unsigned) 1U, HeadVar__3_3, STATE_VARIABLE_OriginsMap_1_52, &OriginsMap1_36, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_1_44);
        hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, BodyGoal_29, OriginsMap1_36, &OriginsMap_37, STATE_VARIABLE_Acc_1_44, &STATE_VARIABLE_Acc_2_45);
        {
          STATE_VARIABLE_RevOriginsMapList_1_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevOriginsMapList_1_46, 0) = ((MR_Box) (OriginsMap_37));
          MR_hl_field(1, STATE_VARIABLE_RevOriginsMapList_1_46, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMapList_0_6));
        }
        NextClauseNum_38 = (HeadVar__4_4 + (MR_Unsigned) 1U);
      }
      else
      {
        NextClauseNum_38 = HeadVar__4_4;
        STATE_VARIABLE_RevOriginsMapList_1_46 = STATE_VARIABLE_RevOriginsMapList_0_6;
        STATE_VARIABLE_Acc_2_45 = STATE_VARIABLE_Acc_0_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = NextClauseNum_38;
      next_value_of_HeadVar__5_5 = Clauses_25;
      next_value_of_STATE_VARIABLE_RevOriginsMapList_0_6 = STATE_VARIABLE_RevOriginsMapList_1_46;
      next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_2_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevOriginsMapList_0_6 = next_value_of_STATE_VARIABLE_RevOriginsMapList_0_6;
      STATE_VARIABLE_Acc_0_8 = next_value_of_STATE_VARIABLE_Acc_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_99_108_97_117_115_101_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_0_8;
      *STATE_VARIABLE_OriginsMap_7 = STATE_VARIABLE_OriginsMap_0_6;
    }
    else
    {
      MR_Word ArgVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ArgVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Origin_28;
      MR_Word STATE_VARIABLE_OriginsMap_1_33;
      MR_Box STATE_VARIABLE_Acc_1_34;
      MR_Unsigned Var_35;
      MR_Unsigned next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_8;

      {
        Origin_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Origin_28, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(0, Origin_28, 1) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(0, Origin_28, 2) = ((MR_Box) (HeadVar__4_4));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_24, Origin_28, STATE_VARIABLE_OriginsMap_0_6, &STATE_VARIABLE_OriginsMap_1_33, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_1_34);
      Var_35 = (HeadVar__4_4 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_35;
      next_value_of_HeadVar__5_5 = ArgVars_25;
      next_value_of_STATE_VARIABLE_OriginsMap_0_6 = STATE_VARIABLE_OriginsMap_1_33;
      next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_1_34;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_OriginsMap_0_6 = next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      STATE_VARIABLE_Acc_0_8 = next_value_of_STATE_VARIABLE_Acc_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__688__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_12));
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word CollectPred_8,
  MR_Word ModuleInfo_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_OriginsMap_0_86,
  MR_Word * STATE_VARIABLE_OriginsMap_87,
  MR_Box STATE_VARIABLE_Acc_0_88,
  MR_Box * STATE_VARIABLE_Acc_89)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
    MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));
    MR_Word Context_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    switch (MR_tag((MR_Word) GoalExpr_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_63 = (MR_Word) ((MR_Word) (GoalExpr_13));
          MR_Word _OriginsMapAfterNegation_64;

          hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, SubGoal_63, STATE_VARIABLE_OriginsMap_0_86, &_OriginsMapAfterNegation_64, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
          *STATE_VARIABLE_OriginsMap_87 = STATE_VARIABLE_OriginsMap_0_86;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr_13, 0))));
          MR_Word RHS_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_13, 1))));

          switch (MR_tag((MR_Word) RHS_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_21 = ((MR_Word) ((MR_hl_field(0, RHS_17, 0))));
                MR_Word OriginUnifyVar_22;

                {
                  OriginUnifyVar_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginUnifyVar_22, 0) = ((MR_Box) (Context_15));
                  MR_hl_field(0, OriginUnifyVar_22, 1) = ((MR_Box) (LHSVar_16));
                  MR_hl_field(0, OriginUnifyVar_22, 2) = ((MR_Box) (RHSVar_21));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_118_97_114_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginUnifyVar_22, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_23 = ((MR_Word) ((MR_hl_field(1, RHS_17, 0))));
                MR_Word RHSVars_25 = ((MR_Word) ((MR_hl_field(1, RHS_17, 2))));
                MR_Word OriginUnifyFunc_26;

                {
                  OriginUnifyFunc_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginUnifyFunc_26, 0) = ((MR_Box) (Context_15));
                  MR_hl_field(0, OriginUnifyFunc_26, 1) = ((MR_Box) (LHSVar_16));
                  MR_hl_field(0, OriginUnifyFunc_26, 2) = ((MR_Box) (ConsId_23));
                  MR_hl_field(0, OriginUnifyFunc_26, 3) = ((MR_Box) (RHSVars_25));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginUnifyFunc_26, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredOrFunc_29 = ((MR_Unsigned) ((MR_hl_field(2, RHS_17, 0))) & (MR_Integer) 1);
                MR_Word VarsModes_31 = ((MR_Word) ((MR_hl_field(2, RHS_17, 2))));
                MR_Word LambdaGoal_33 = ((MR_Word) ((MR_hl_field(2, RHS_17, 4))));
                MR_Word OriginLambdaHead_34;
                MR_Word OriginsMapAfterLambdaHead_35;
                MR_Box STATE_VARIABLE_Acc_3_94;
                MR_Word _OriginsMapAfterLambda_36;

                {
                  OriginLambdaHead_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginLambdaHead_34, 0) = ((MR_Box) (Context_15));
                  MR_hl_field(0, OriginLambdaHead_34, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
                  MR_hl_field(0, OriginLambdaHead_34, 2) = ((MR_Box) (VarsModes_31));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginLambdaHead_34, STATE_VARIABLE_OriginsMap_0_86, &OriginsMapAfterLambdaHead_35, STATE_VARIABLE_Acc_0_88, &STATE_VARIABLE_Acc_3_94);
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, LambdaGoal_33, OriginsMapAfterLambdaHead_35, &_OriginsMapAfterLambda_36, STATE_VARIABLE_Acc_3_94, STATE_VARIABLE_Acc_89);
                *STATE_VARIABLE_OriginsMap_87 = STATE_VARIABLE_OriginsMap_0_86;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, 0))));
          MR_Word ArgVars_39 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, 2))));
          MR_Word CalleeSymName_42 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, 5))));
          MR_Word OriginPlainCall_43;

          {
            OriginPlainCall_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OriginPlainCall_43, 0) = ((MR_Box) (Context_15));
            MR_hl_field(0, OriginPlainCall_43, 1) = ((MR_Box) (PredId_37));
            MR_hl_field(0, OriginPlainCall_43, 2) = ((MR_Box) (CalleeSymName_42));
            MR_hl_field(0, OriginPlainCall_43, 3) = ((MR_Box) (ArgVars_39));
          }
          hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginPlainCall_43, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_13, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GCall_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 1))));
              MR_Word OriginGenericCall_55;
              MR_Word ArgVars_124 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 2))));

              {
                OriginGenericCall_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OriginGenericCall_55, 0) = ((MR_Box) (Context_15));
                MR_hl_field(0, OriginGenericCall_55, 1) = ((MR_Box) (GCall_51));
                MR_hl_field(0, OriginGenericCall_55, 2) = ((MR_Box) (ArgVars_124));
              }
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginGenericCall_55, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredInfo_49;
              MR_Word OriginForeignCall_50;
              MR_Word PredId_121 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 2))));
              MR_Word ArgVars_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 4))));
              MR_Word CalleeSymName_123;

              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_121, &PredInfo_49);
              hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_49, &CalleeSymName_123);
              {
                OriginForeignCall_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OriginForeignCall_50, 0) = ((MR_Box) (Context_15));
                MR_hl_field(0, OriginForeignCall_50, 1) = ((MR_Box) (PredId_121));
                MR_hl_field(0, OriginForeignCall_50, 2) = ((MR_Box) (CalleeSymName_123));
                MR_hl_field(0, OriginForeignCall_50, 3) = ((MR_Box) (ArgVars_122));
              }
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_8, OriginForeignCall_50, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 2))));

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, Conjuncts_57, STATE_VARIABLE_OriginsMap_0_86, STATE_VARIABLE_OriginsMap_87, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 1))));
              MR_Word OriginsMaps_59;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_8_p_0(CollectPred_8, ModuleInfo_9, STATE_VARIABLE_OriginsMap_0_86, Disjuncts_58, (MR_Word) ((MR_Unsigned) 0U), &OriginsMaps_59, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
              hlds__var_origins__represent_origins_on_all_branches_2_p_0(OriginsMaps_59, STATE_VARIABLE_OriginsMap_87);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 3))));
              MR_Word OriginsMaps_125;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_8_p_0(CollectPred_8, ModuleInfo_9, STATE_VARIABLE_OriginsMap_0_86, Cases_62, (MR_Word) ((MR_Unsigned) 0U), &OriginsMaps_125, STATE_VARIABLE_Acc_0_88, STATE_VARIABLE_Acc_89);
              hlds__var_origins__represent_origins_on_all_branches_2_p_0(OriginsMaps_125, STATE_VARIABLE_OriginsMap_87);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_126 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 2))));
              MR_Word next_value_of_Goal_10 = SubGoal_126;

              // direct tailcall eliminated
              ;
              Goal_10 = next_value_of_Goal_10;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 2))));
              MR_Word ThenGoal_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 3))));
              MR_Word ElseGoal_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 4))));
              MR_Word OriginsMapAfterCond_71;
              MR_Word OriginsMapAfterElse_73;
              MR_Box STATE_VARIABLE_Acc_13_113;
              MR_Box STATE_VARIABLE_Acc_14_114;
              MR_Word HeadOriginsMap_130;
              MR_Word TailOriginsMaps_131;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, CondGoal_67, STATE_VARIABLE_OriginsMap_0_86, &OriginsMapAfterCond_71, STATE_VARIABLE_Acc_0_88, &STATE_VARIABLE_Acc_13_113);
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, ThenGoal_68, OriginsMapAfterCond_71, &HeadOriginsMap_130, STATE_VARIABLE_Acc_13_113, &STATE_VARIABLE_Acc_14_114);
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CollectPred_8, ModuleInfo_9, ElseGoal_69, STATE_VARIABLE_OriginsMap_0_86, &OriginsMapAfterElse_73, STATE_VARIABLE_Acc_14_114, STATE_VARIABLE_Acc_89);
              {
                TailOriginsMaps_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TailOriginsMaps_131, 0) = ((MR_Box) (OriginsMapAfterElse_73));
                MR_hl_field(1, TailOriginsMaps_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__union_list_4_p_1((MR_Word) (&hlds__var_origins_scalar_common_1[1]), (MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_2[3]), HeadOriginsMap_130, TailOriginsMaps_131, STATE_VARIABLE_OriginsMap_87);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, 1))));

              switch (MR_tag((MR_Word) Shorthand_74)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_OriginsMap_87 = STATE_VARIABLE_OriginsMap_0_86;
                    *STATE_VARIABLE_Acc_89 = STATE_VARIABLE_Acc_0_88;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_OriginsMap_87 = STATE_VARIABLE_OriginsMap_0_86;
                    *STATE_VARIABLE_Acc_89 = STATE_VARIABLE_Acc_0_88;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_128 = ((MR_Word) ((MR_hl_field(2, Shorthand_74, 2))));
                    MR_Word next_value_of_Goal_10 = SubGoal_128;

                    // direct tailcall eliminated
                    ;
                    Goal_10 = next_value_of_Goal_10;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_0_7;
      *STATE_VARIABLE_RevOriginsMaps_6 = STATE_VARIABLE_RevOriginsMaps_0_5;
    }
    else
    {
      MR_Word Case_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word SubGoal_27 = ((MR_Word) ((MR_hl_field(0, Case_21, 2))));
      MR_Word CaseOriginsMap_28;
      MR_Box STATE_VARIABLE_Acc_1_33;
      MR_Word STATE_VARIABLE_RevOriginsMaps_1_34;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_7;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, SubGoal_27, HeadVar__3_3, &CaseOriginsMap_28, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_1_33);
      {
        STATE_VARIABLE_RevOriginsMaps_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_34, 0) = ((MR_Box) (CaseOriginsMap_28));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_34, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMaps_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Cases_22;
      next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5 = STATE_VARIABLE_RevOriginsMaps_1_34;
      next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_1_33;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevOriginsMaps_0_5 = next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5;
      STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_0_7;
      *STATE_VARIABLE_RevOriginsMaps_6 = STATE_VARIABLE_RevOriginsMaps_0_5;
    }
    else
    {
      MR_Word Disjunct_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Disjuncts_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word DisjunctOriginsMap_25;
      MR_Box STATE_VARIABLE_Acc_1_30;
      MR_Word STATE_VARIABLE_RevOriginsMaps_1_31;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_7;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, Disjunct_21, HeadVar__3_3, &DisjunctOriginsMap_25, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_1_30);
      {
        STATE_VARIABLE_RevOriginsMaps_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_31, 0) = ((MR_Box) (DisjunctOriginsMap_25));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMaps_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Disjuncts_22;
      next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5 = STATE_VARIABLE_RevOriginsMaps_1_31;
      next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_1_30;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevOriginsMaps_0_5 = next_value_of_STATE_VARIABLE_RevOriginsMaps_0_5;
      STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_OriginsMap_0_4,
  MR_Word * STATE_VARIABLE_OriginsMap_5,
  MR_Box STATE_VARIABLE_Acc_0_6,
  MR_Box * STATE_VARIABLE_Acc_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_7 = STATE_VARIABLE_Acc_0_6;
      *STATE_VARIABLE_OriginsMap_5 = STATE_VARIABLE_OriginsMap_0_4;
    }
    else
    {
      MR_Word Conjunct_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Conjuncts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_OriginsMap_1_26;
      MR_Box STATE_VARIABLE_Acc_1_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_6;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, Conjunct_18, STATE_VARIABLE_OriginsMap_0_4, &STATE_VARIABLE_OriginsMap_1_26, STATE_VARIABLE_Acc_0_6, &STATE_VARIABLE_Acc_1_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Conjuncts_19;
      next_value_of_STATE_VARIABLE_OriginsMap_0_4 = STATE_VARIABLE_OriginsMap_1_26;
      next_value_of_STATE_VARIABLE_Acc_0_6 = STATE_VARIABLE_Acc_1_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_OriginsMap_0_4 = next_value_of_STATE_VARIABLE_OriginsMap_0_4;
      STATE_VARIABLE_Acc_0_6 = next_value_of_STATE_VARIABLE_Acc_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 0))));
  MR_Word GCall_12 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 1))));
  MR_Word ForeignArgs_13 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 2))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(CollectPred_7, Context_11, GCall_12, (MR_Unsigned) 1U, ForeignArgs_13, STATE_VARIABLE_OriginsMap_0_14, STATE_VARIABLE_OriginsMap_15, STATE_VARIABLE_Acc_0_16, STATE_VARIABLE_Acc_17);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_0_8;
      *STATE_VARIABLE_OriginsMap_7 = STATE_VARIABLE_OriginsMap_0_6;
    }
    else
    {
      MR_Word ArgVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ArgVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word OriginArg_28;
      MR_Word STATE_VARIABLE_OriginsMap_1_33;
      MR_Box STATE_VARIABLE_Acc_1_34;
      MR_Unsigned Var_35;
      MR_Unsigned next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_8;

      {
        OriginArg_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OriginArg_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, OriginArg_28, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, OriginArg_28, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(3, OriginArg_28, 3) = ((MR_Box) (HeadVar__4_4));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_24, OriginArg_28, STATE_VARIABLE_OriginsMap_0_6, &STATE_VARIABLE_OriginsMap_1_33, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_1_34);
      Var_35 = (HeadVar__4_4 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_35;
      next_value_of_HeadVar__5_5 = ArgVars_25;
      next_value_of_STATE_VARIABLE_OriginsMap_0_6 = STATE_VARIABLE_OriginsMap_1_33;
      next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_1_34;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_OriginsMap_0_6 = next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      STATE_VARIABLE_Acc_0_8 = next_value_of_STATE_VARIABLE_Acc_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 0))));
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 1))));
  MR_Word CalleeSymName_13 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 2))));
  MR_Word ForeignArgs_14 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 3))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(CollectPred_7, Context_11, PredId_12, CalleeSymName_13, (MR_Unsigned) 1U, ForeignArgs_14, STATE_VARIABLE_OriginsMap_0_15, STATE_VARIABLE_OriginsMap_16, STATE_VARIABLE_Acc_0_17, STATE_VARIABLE_Acc_18);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_10 = STATE_VARIABLE_Acc_0_9;
      *STATE_VARIABLE_OriginsMap_8 = STATE_VARIABLE_OriginsMap_0_7;
    }
    else
    {
      MR_Word ForeignArg_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ForeignArgs_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word ArgVar_31;
      MR_Word OriginArg_32;
      MR_Word STATE_VARIABLE_OriginsMap_1_37;
      MR_Box STATE_VARIABLE_Acc_1_38;
      MR_Unsigned Var_39;
      MR_Unsigned next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_9;

      ArgVar_31 = hlds__hlds_goal__foreign_arg_var_1_f_0(ForeignArg_27);
      {
        OriginArg_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OriginArg_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, OriginArg_32, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, OriginArg_32, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(3, OriginArg_32, 3) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, OriginArg_32, 4) = ((MR_Box) (HeadVar__5_5));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_31, OriginArg_32, STATE_VARIABLE_OriginsMap_0_7, &STATE_VARIABLE_OriginsMap_1_37, STATE_VARIABLE_Acc_0_9, &STATE_VARIABLE_Acc_1_38);
      Var_39 = (HeadVar__5_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Var_39;
      next_value_of_HeadVar__6_6 = ForeignArgs_28;
      next_value_of_STATE_VARIABLE_OriginsMap_0_7 = STATE_VARIABLE_OriginsMap_1_37;
      next_value_of_STATE_VARIABLE_Acc_0_9 = STATE_VARIABLE_Acc_1_38;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_OriginsMap_0_7 = next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      STATE_VARIABLE_Acc_0_9 = next_value_of_STATE_VARIABLE_Acc_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 0))));
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 1))));
  MR_Word CalleeSymName_13 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 2))));
  MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 3))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(CollectPred_7, Context_11, PredId_12, CalleeSymName_13, (MR_Unsigned) 1U, ArgVars_14, STATE_VARIABLE_OriginsMap_0_15, STATE_VARIABLE_OriginsMap_16, STATE_VARIABLE_Acc_0_17, STATE_VARIABLE_Acc_18);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_10 = STATE_VARIABLE_Acc_0_9;
      *STATE_VARIABLE_OriginsMap_8 = STATE_VARIABLE_OriginsMap_0_7;
    }
    else
    {
      MR_Word ArgVar_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ArgVars_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word OriginArg_31;
      MR_Word STATE_VARIABLE_OriginsMap_1_36;
      MR_Box STATE_VARIABLE_Acc_1_37;
      MR_Unsigned Var_38;
      MR_Unsigned next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_9;

      {
        OriginArg_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OriginArg_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, OriginArg_31, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, OriginArg_31, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(3, OriginArg_31, 3) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, OriginArg_31, 4) = ((MR_Box) (HeadVar__5_5));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_27, OriginArg_31, STATE_VARIABLE_OriginsMap_0_7, &STATE_VARIABLE_OriginsMap_1_36, STATE_VARIABLE_Acc_0_9, &STATE_VARIABLE_Acc_1_37);
      Var_38 = (HeadVar__5_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Var_38;
      next_value_of_HeadVar__6_6 = ArgVars_28;
      next_value_of_STATE_VARIABLE_OriginsMap_0_7 = STATE_VARIABLE_OriginsMap_1_36;
      next_value_of_STATE_VARIABLE_Acc_0_9 = STATE_VARIABLE_Acc_1_37;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_OriginsMap_0_7 = next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      STATE_VARIABLE_Acc_0_9 = next_value_of_STATE_VARIABLE_Acc_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginUnifyFunc_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_16,
  MR_Word * STATE_VARIABLE_OriginsMap_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginUnifyFunc_8, 0))));
  MR_Word LHSVar_12 = ((MR_Word) ((MR_hl_field(0, OriginUnifyFunc_8, 1))));
  MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(0, OriginUnifyFunc_8, 2))));
  MR_Word RHSVars_14 = ((MR_Word) ((MR_hl_field(0, OriginUnifyFunc_8, 3))));
  MR_Word OriginLHS_15;
  MR_Word Var_20;
  MR_Word STATE_VARIABLE_OriginsMap_1_21;
  MR_Box STATE_VARIABLE_Acc_1_22;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (RHSVars_14));
  }
  {
    OriginLHS_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OriginLHS_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, OriginLHS_15, 1) = ((MR_Box) (Context_11));
    MR_hl_field(3, OriginLHS_15, 2) = ((MR_Box) (ConsId_13));
    MR_hl_field(3, OriginLHS_15, 3) = ((MR_Box) (Var_20));
  }
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(CollectPred_7, LHSVar_12, OriginLHS_15, STATE_VARIABLE_OriginsMap_0_16, &STATE_VARIABLE_OriginsMap_1_21, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_1_22);
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(CollectPred_7, Context_11, LHSVar_12, ConsId_13, (MR_Unsigned) 1U, RHSVars_14, STATE_VARIABLE_OriginsMap_1_21, STATE_VARIABLE_OriginsMap_17, STATE_VARIABLE_Acc_1_22, STATE_VARIABLE_Acc_19);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_97_114_103_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_OriginsMap_0_7,
  MR_Word * STATE_VARIABLE_OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_10 = STATE_VARIABLE_Acc_0_9;
      *STATE_VARIABLE_OriginsMap_8 = STATE_VARIABLE_OriginsMap_0_7;
    }
    else
    {
      MR_Word RHSVar_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word RHSVars_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word OriginRHS_31;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_OriginsMap_1_37;
      MR_Box STATE_VARIABLE_Acc_1_38;
      MR_Unsigned Var_39;
      MR_Unsigned next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_9;

      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (HeadVar__5_5));
      }
      {
        OriginRHS_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OriginRHS_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, OriginRHS_31, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, OriginRHS_31, 2) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(3, OriginRHS_31, 3) = ((MR_Box) (Var_36));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, RHSVar_27, OriginRHS_31, STATE_VARIABLE_OriginsMap_0_7, &STATE_VARIABLE_OriginsMap_1_37, STATE_VARIABLE_Acc_0_9, &STATE_VARIABLE_Acc_1_38);
      Var_39 = (HeadVar__5_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Var_39;
      next_value_of_HeadVar__6_6 = RHSVars_28;
      next_value_of_STATE_VARIABLE_OriginsMap_0_7 = STATE_VARIABLE_OriginsMap_1_37;
      next_value_of_STATE_VARIABLE_Acc_0_9 = STATE_VARIABLE_Acc_1_38;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_OriginsMap_0_7 = next_value_of_STATE_VARIABLE_OriginsMap_0_7;
      STATE_VARIABLE_Acc_0_9 = next_value_of_STATE_VARIABLE_Acc_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_118_97_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginUnifyVar_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_16,
  MR_Word * STATE_VARIABLE_OriginsMap_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginUnifyVar_8, 0))));
  MR_Word LHSVar_12 = ((MR_Word) ((MR_hl_field(0, OriginUnifyVar_8, 1))));
  MR_Word RHSVar_13 = ((MR_Word) ((MR_hl_field(0, OriginUnifyVar_8, 2))));
  MR_Word OriginLHS_14;
  MR_Word OriginRHS_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_OriginsMap_1_22;
  MR_Box STATE_VARIABLE_Acc_1_23;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (RHSVar_13));
  }
  {
    OriginLHS_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, OriginLHS_14, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, OriginLHS_14, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (LHSVar_12));
  }
  {
    OriginRHS_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, OriginRHS_15, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, OriginRHS_15, 1) = ((MR_Box) (Var_21));
  }
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(CollectPred_7, LHSVar_12, OriginLHS_14, STATE_VARIABLE_OriginsMap_0_16, &STATE_VARIABLE_OriginsMap_1_22, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_1_23);
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(CollectPred_7, RHSVar_13, OriginRHS_15, STATE_VARIABLE_OriginsMap_1_22, STATE_VARIABLE_OriginsMap_17, STATE_VARIABLE_Acc_1_23, STATE_VARIABLE_Acc_19);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginLambdaHead_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginLambdaHead_8, 0))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, OriginLambdaHead_8, 1))) & (MR_Integer) 1);
  MR_Word ArgVarsModes_13 = ((MR_Word) ((MR_hl_field(0, OriginLambdaHead_8, 2))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(CollectPred_7, Context_11, PredOrFunc_12, (MR_Unsigned) 1U, ArgVarsModes_13, STATE_VARIABLE_OriginsMap_0_14, STATE_VARIABLE_OriginsMap_15, STATE_VARIABLE_Acc_0_16, STATE_VARIABLE_Acc_17);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OriginsMap_0_6,
  MR_Word * STATE_VARIABLE_OriginsMap_7,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_0_8;
      *STATE_VARIABLE_OriginsMap_7 = STATE_VARIABLE_OriginsMap_0_6;
    }
    else
    {
      MR_Word ArgVarMode_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ArgVarsModes_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ArgVar_28 = ((MR_Word) ((MR_hl_field(0, ArgVarMode_24, 0))));
      MR_Word Origin_30;
      MR_Word STATE_VARIABLE_OriginsMap_1_35;
      MR_Box STATE_VARIABLE_Acc_1_36;
      MR_Unsigned Var_37;
      MR_Unsigned next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_8;

      {
        Origin_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Origin_30, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, Origin_30, 1) = (MR_Box) ((MR_Unsigned) (HeadVar__3_3));
        MR_hl_field(1, Origin_30, 2) = ((MR_Box) (HeadVar__4_4));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_28, Origin_30, STATE_VARIABLE_OriginsMap_0_6, &STATE_VARIABLE_OriginsMap_1_35, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_1_36);
      Var_37 = (HeadVar__4_4 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_37;
      next_value_of_HeadVar__5_5 = ArgVarsModes_25;
      next_value_of_STATE_VARIABLE_OriginsMap_0_6 = STATE_VARIABLE_OriginsMap_1_35;
      next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_1_36;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_OriginsMap_0_6 = next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      STATE_VARIABLE_Acc_0_8 = next_value_of_STATE_VARIABLE_Acc_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word CollectPred_8,
  MR_Word Var_9,
  MR_Word VarOrigin_10,
  MR_Word STATE_VARIABLE_OriginsMap_0_15,
  MR_Word * STATE_VARIABLE_OriginsMap_16,
  MR_Box STATE_VARIABLE_Acc_0_17,
  MR_Box * STATE_VARIABLE_Acc_18)
{
  MR_bool succeeded;
  MR_Box conv0__VarOriginsCord0_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), STATE_VARIABLE_OriginsMap_0_15, ((MR_Box) (Var_9)), &conv0__VarOriginsCord0_13);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    *STATE_VARIABLE_Acc_18 = STATE_VARIABLE_Acc_0_17;
    *STATE_VARIABLE_OriginsMap_16 = STATE_VARIABLE_OriginsMap_0_15;
  }
  else
  {
    MR_Word VarOriginsCord_14;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    VarOriginsCord_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0), ((MR_Box) (VarOrigin_10)));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), ((MR_Box) (Var_9)), ((MR_Box) (VarOriginsCord_14)), STATE_VARIABLE_OriginsMap_0_15, STATE_VARIABLE_OriginsMap_16);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, CollectPred_8, 1))));
    func_1(((MR_Box) (CollectPred_8)), ((MR_Box) (*STATE_VARIABLE_OriginsMap_16)), ((MR_Box) (Var_9)), ((MR_Box) (VarOrigin_10)), STATE_VARIABLE_Acc_0_17, STATE_VARIABLE_Acc_18);
  }
}

static void MR_CALL 
hlds__var_origins__represent_origins_on_all_branches_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__688__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_12));
}

static void MR_CALL 
hlds__var_origins__represent_origins_on_all_branches_2_p_0(
  MR_Word OriginsMapList_3,
  MR_Word * OriginsMap_4)
{
  if ((OriginsMapList_3 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), OriginsMap_4);
  else
  {
    MR_Word HeadOriginsMap_5 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_3, 0))));
    MR_Word TailOriginsMaps_6 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_3, 1))));

    mercury__map__union_list_4_p_1((MR_Word) (&hlds__var_origins_scalar_common_1[1]), (MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_2[2]), HeadOriginsMap_5, TailOriginsMaps_6, OriginsMap_4);
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____lhs_or_rhs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____lhs_or_rhs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____lhs_or_rhs_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____lhs_or_rhs_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____lhs_or_rhs_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____lhs_or_rhs_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_clause_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_clause_head_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_clause_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_clause_head_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_foreign_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_foreign_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_foreign_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_foreign_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_generic_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_generic_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_generic_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_generic_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_lambda_head_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_lambda_head_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_lambda_head_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_lambda_head_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_plain_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_plain_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_plain_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_plain_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_unify_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_unify_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_unify_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____origin_unify_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____origin_unify_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____origin_unify_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____record_var_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____record_var_origin_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____record_var_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____record_var_origin_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____var_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____var_origin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____var_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____var_origin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____var_origins_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_origins____Unify____var_origins_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_origins____Compare____var_origins_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_origins____Compare____var_origins_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__var_origins__init(void)
{
}

void mercury__hlds__var_origins__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_lhs_or_rhs_arg_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_clause_head_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_foreign_call_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_generic_call_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_lambda_head_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_plain_call_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_unify_func_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_origin_unify_var_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_record_var_origin_1);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origin_0);
  MR_register_type_ctor_info(&hlds__var_origins__hlds__var_origins__type_ctor_info_var_origins_map_0);
}

void mercury__hlds__var_origins__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__var_origins__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.var_origins.
