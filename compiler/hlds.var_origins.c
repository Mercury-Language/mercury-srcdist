/*
** Automatically generated from `var_origins.m'
** by the Mercury compiler,
** version rotd-2025-07-28
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
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_foreign_call_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_foreign_call_0_0[3];

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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_plain_call_0_0[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_plain_call_0_0[3];

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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_4[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_4[3];

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4;

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_5[3];

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_5[3];

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
hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__659__1_3_p_0(
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
hlds__var_origins__pred_arg_num_description_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Unsigned ArgNum_9,
  MR_Word * PredOrFunc_10,
  MR_Word * SymName_11,
  MR_Word * Pieces_12);

static void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMapList_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMapList_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8);

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
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_83,
  MR_Word * STATE_VARIABLE_OriginsMap_84,
  MR_Box STATE_VARIABLE_Acc_0_85,
  MR_Box * STATE_VARIABLE_Acc_86);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_4,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_5,
  MR_Box STATE_VARIABLE_Acc_0_6,
  MR_Box * STATE_VARIABLE_Acc_7);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_4,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_5,
  MR_Box STATE_VARIABLE_Acc_0_6,
  MR_Box * STATE_VARIABLE_Acc_7);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OriginsMap_0_3,
  MR_Word * STATE_VARIABLE_OriginsMap_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6);

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
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
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
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17);

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
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


static /* final */ const MR_Box hlds__var_origins_scalar_common_1[42][2];

static /* final */ const MR_Box hlds__var_origins_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__var_origins_scalar_common_3[1][6];




static /* final */ const MR_Box hlds__var_origins_scalar_common_1[42][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type cast."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of an existential type cast."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type coercion."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a type and inst cast."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call to method"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the callee of the"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher order"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "call here."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the lambda expression."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[8])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "represents the term"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of the function symbol"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unified with"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is unified with"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function result"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[25]))),
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
    ((MR_Box) (hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__var_origins_scalar_common_3[0])),
    ((MR_Box) (hlds__var_origins__compute_var_origins_in_pred_5_p_0_1)),
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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_foreign_call_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1hlds__hlds_goal__type_ctor_info_foreign_arg_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_foreign_call_0_0[3] = {
  (MR_String) "ofc_context",
  (MR_String) "ofc_callee",
  (MR_String) "ofc_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_foreign_call_0_0 = {
  (MR_String) "origin_foreign_call",
  INT16_C(3),
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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_origin_plain_call_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__var_origins__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_origin_plain_call_0_0[3] = {
  (MR_String) "opc_context",
  (MR_String) "opc_callee",
  (MR_String) "opc_args"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_origin_plain_call_0_0 = {
  (MR_String) "origin_plain_call",
  INT16_C(3),
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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_4[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_4[3] = {
  (MR_String) "vopc_context",
  (MR_String) "vopc_callee",
  (MR_String) "vopc_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_4 = {
  (MR_String) "var_origin_plain_call",
  INT16_C(3),
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

static const MR_PseudoTypeInfo hlds__var_origins__hlds__var_origins__field_types_var_origin_0_5[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString hlds__var_origins__hlds__var_origins__field_names_var_origin_0_5[3] = {
  (MR_String) "vofc_context",
  (MR_String) "vofc_callee",
  (MR_String) "vofc_arg_num"
};

static const MR_DuFunctorDesc hlds__var_origins__hlds__var_origins__du_functor_desc_var_origin_0_5 = {
  (MR_String) "var_origin_foreign_call",
  INT16_C(3),
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
hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__659__1_3_p_0(
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
  MR_Integer CastX_57 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_58 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_57 == CastY_58);
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
                MR_Integer Var_79 = (MR_Integer) (ArgX2_15);
                MR_Integer Var_80 = (MR_Integer) (ArgY2_16);

                succeeded = (Var_79 < Var_80);
                if (succeeded)
                {
                  SubResult2_17 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_79 > Var_80);
                  if (succeeded)
                  {
                    SubResult2_17 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult2_17 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
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
                      MR_Unsigned ArgX3_39 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Unsigned ArgY3_40 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))));
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
                          succeeded = (ArgX3_39 < ArgY3_40);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_39 > ArgY3_40);
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
                      MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Unsigned ArgX3_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Unsigned ArgY3_48 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_43;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_43, ArgX1_41, ArgY1_42);
                      succeeded = (SubResult1_43 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_43;
                      else
                      {
                        MR_Word SubResult2_46;

                        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_46, ArgX2_44, ArgY2_45);
                        succeeded = (SubResult2_46 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_46;
                        else
                        {
                          succeeded = (ArgX3_47 < ArgY3_48);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_47 > ArgY3_48);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
                      MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Unsigned ArgX3_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Unsigned ArgY3_56 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_51;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_51, ArgX1_49, ArgY1_50);
                      succeeded = (SubResult1_51 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_51;
                      else
                      {
                        MR_Word SubResult2_54;

                        hlds__hlds_goal____Compare____generic_call_0_0(&SubResult2_54, ArgX2_52, ArgY2_53);
                        succeeded = (SubResult2_54 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_54;
                        else
                        {
                          succeeded = (ArgX3_55 < ArgY3_56);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_55 > ArgY3_56);
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
  MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_43 == CastY_44);
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
              MR_Unsigned ArgX3_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Unsigned ArgY3_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_25, ArgY1_26);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_27, ArgY2_28);
                  if (succeeded)
                    succeeded = (ArgX3_29 == ArgY3_30);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_34;
              MR_Unsigned ArgX3_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Unsigned ArgY3_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_31, ArgY1_32);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_33, ArgY2_34);
                  if (succeeded)
                    succeeded = (ArgX3_35 == ArgY3_36);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_40;
              MR_Unsigned ArgX3_41 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Unsigned ArgY3_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_37, ArgY1_38);
                if (succeeded)
                {
                  succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX2_39, ArgY2_40);
                  if (succeeded)
                    succeeded = (ArgX3_41 == ArgY3_42);
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

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_plain_call_0_0(
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
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
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

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__var_origins____Unify____origin_foreign_call_0_0(
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
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__var_origins_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
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
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_60;

        Context_12 = ((MR_Word) ((MR_hl_field(0, Origin_9, 0))));
        ClauseNum_13 = ((MR_Unsigned) ((MR_hl_field(0, Origin_9, 1))));
        ArgNum_14 = ((MR_Unsigned) ((MR_hl_field(0, Origin_9, 2))));
        ArgNumInt_15 = mercury__uint__cast_to_int_1_f_0(ArgNum_14);
        ClauseNumInt_16 = mercury__uint__cast_to_int_1_f_0(ClauseNum_13);
        {
          Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_47, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (ArgNumInt_15));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (ClauseNumInt_16));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[7])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[6])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_48));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Unsigned ArgNum_288;
        MR_Integer ArgNumInt_289;

        Context_12 = ((MR_Word) ((MR_hl_field(1, Origin_9, 0))));
        ArgNum_288 = ((MR_Unsigned) ((MR_hl_field(1, Origin_9, 2))));
        ArgNumInt_289 = mercury__uint__cast_to_int_1_f_0(ArgNum_288);
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (ArgNumInt_289));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[34])));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSorRHS_19;
        MR_Word OtherVar_20;
        MR_String OtherVarStr_21;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_88;

        Context_12 = ((MR_Word) ((MR_hl_field(2, Origin_9, 0))));
        LHSorRHS_19 = ((MR_Word) ((MR_hl_field(2, Origin_9, 1))));
        if (((MR_tag((MR_Word) LHSorRHS_19)) == (MR_Integer) 0))
          OtherVar_20 = ((MR_Word) ((MR_hl_field(0, LHSorRHS_19, 0))));
        else
          OtherVar_20 = ((MR_Word) ((MR_hl_field(1, LHSorRHS_19, 0))));
        OtherVarStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, (MR_Integer) 0, OtherVar_20);
        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (VarStr_11));
        }
        {
          Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_88, 1) = ((MR_Box) (OtherVarStr_21));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[38])));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_84));
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
              MR_Word Var_95;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_101;
              MR_Word Var_102;

              {
                Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_95, 0) = ((MR_Box) (VarTable_7));
              }
              TermStr_25 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_6, Var_95, (MR_Integer) 0, ConsId_22, RHSArgVars_24);
              {
                Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_97, 1) = ((MR_Box) (VarStr_11));
              }
              {
                Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_102, 1) = ((MR_Box) (TermStr_25));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[35])));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
              }
              {
                Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_97));
                MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_98));
              }
            }
            else
            {
              MR_Word LHSVar_26 = ((MR_Word) ((MR_hl_field(1, LHSorRHSArg_23, 0))));
              MR_String ConsIdStr_27;
              MR_String LHSVarStr_28;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Unsigned ArgNum_290 = ((MR_Unsigned) ((MR_hl_field(1, LHSorRHSArg_23, 1))));
              MR_Integer ArgNumInt_291;

              ArgNumInt_291 = mercury__uint__cast_to_int_1_f_0(ArgNum_290);
              ConsIdStr_27 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_22);
              LHSVarStr_28 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, (MR_Integer) 0, LHSVar_26);
              {
                Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_112, 1) = ((MR_Box) (VarStr_11));
              }
              {
                Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_117, 1) = ((MR_Box) (ArgNumInt_291));
              }
              {
                Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_122, 1) = ((MR_Box) (ConsIdStr_27));
              }
              {
                Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_127, 1) = ((MR_Box) (LHSVarStr_28));
              }
              {
                Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
                MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
              }
              {
                Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[37])));
                MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
              }
              {
                Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
              }
              {
                Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_118, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[36])));
                MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_121));
              }
              {
                Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
                MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
              }
              {
                Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
              }
              {
                Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_112));
                MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_113));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_314;
            MR_Word PredOrFunc_315;
            MR_Word SymName_316;
            MR_Word ArgNumDescPieces_317;
            MR_Word Var_318;
            MR_Word Var_319;
            MR_Word Var_324;
            MR_Word Var_325;
            MR_Word Var_328;
            MR_Word Var_329;
            MR_Word Var_330;
            MR_Word Var_333;
            MR_Word Var_334;
            MR_Unsigned ArgNum_336;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            PredId_314 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            ArgNum_336 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 3))));
            hlds__var_origins__pred_arg_num_description_6_p_0(ModuleInfo_6, PredId_314, ArgNum_336, &PredOrFunc_315, &SymName_316, &ArgNumDescPieces_317);
            {
              Var_319 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_319, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_319, 1) = ((MR_Box) (VarStr_11));
            }
            {
              Var_318 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_318, 0) = ((MR_Box) (Var_319));
              MR_hl_field(1, Var_318, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
            }
            {
              Var_329 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_329, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_329, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_315));
            }
            {
              Var_334 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_334, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_334, 1) = ((MR_Box) (SymName_316));
            }
            {
              Var_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_333, 0) = ((MR_Box) (Var_334));
              MR_hl_field(1, Var_333, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[15])));
            }
            {
              Var_330 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_330, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[13])));
              MR_hl_field(1, Var_330, 1) = ((MR_Box) (Var_333));
            }
            {
              Var_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_328, 0) = ((MR_Box) (Var_329));
              MR_hl_field(1, Var_328, 1) = ((MR_Box) (Var_330));
            }
            {
              Var_325 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_325, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
              MR_hl_field(1, Var_325, 1) = ((MR_Box) (Var_328));
            }
            Var_324 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_317, Var_325);
            Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_318, Var_324);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_29;
            MR_Word PredOrFunc_30;
            MR_Word SymName_31;
            MR_Word ArgNumDescPieces_32;
            MR_Word Var_134;
            MR_Word Var_135;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Unsigned ArgNum_296;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            PredId_29 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            ArgNum_296 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 3))));
            hlds__var_origins__pred_arg_num_description_6_p_0(ModuleInfo_6, PredId_29, ArgNum_296, &PredOrFunc_30, &SymName_31, &ArgNumDescPieces_32);
            {
              Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_135, 1) = ((MR_Box) (VarStr_11));
            }
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
            }
            {
              Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_145, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_30));
            }
            {
              Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_150, 1) = ((MR_Box) (SymName_31));
            }
            {
              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
              MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[15])));
            }
            {
              Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_146, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[13])));
              MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_149));
            }
            {
              Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
              MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_146));
            }
            {
              Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
              MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_144));
            }
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_32, Var_141);
            Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, Var_140);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GenericCall_33;
            MR_Unsigned ArgNum_310;

            Context_12 = ((MR_Word) ((MR_hl_field(3, Origin_9, 1))));
            GenericCall_33 = ((MR_Word) ((MR_hl_field(3, Origin_9, 2))));
            ArgNum_310 = ((MR_Unsigned) ((MR_hl_field(3, Origin_9, 3))));
            switch (MR_tag((MR_Word) GenericCall_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer NumArgs_36;
                  MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, GenericCall_33, 2))));
                  MR_Word PredOrFunc_299 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_33, 1))) & (MR_Integer) 1);

                  NumArgs_36 = (MR_Integer) (Var_157);
                  succeeded = (ArgNum_310 == (MR_Unsigned) 1U);
                  if (succeeded)
                  {
                    MR_Word Var_158;
                    MR_Word Var_159;
                    MR_Word Var_162;
                    MR_Word Var_165;
                    MR_Word Var_166;

                    {
                      Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_158, 1) = ((MR_Box) (VarStr_11));
                    }
                    {
                      Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(3, Var_166, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_299));
                    }
                    {
                      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
                      MR_hl_field(1, Var_165, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[15])));
                    }
                    {
                      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_162, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[28])));
                      MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_165));
                    }
                    {
                      Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_159, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[27])));
                      MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_162));
                    }
                    {
                      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_158));
                      MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_159));
                    }
                  }
                  else
                  {
                    MR_Integer Var_173 = (MR_Integer) ((MR_Unsigned) NumArgs_36 - (MR_Unsigned) 1);
                    MR_Word Var_175;
                    MR_Word Var_176;
                    MR_Word Var_181;
                    MR_Word Var_182;
                    MR_Word Var_185;
                    MR_Word Var_188;
                    MR_Word Var_189;
                    MR_Word ArgNumDescPieces_297;

                    ArgNumDescPieces_297 = hlds__var_origins__arg_num_description_3_f_0(PredOrFunc_299, Var_173, ArgNum_310);
                    {
                      Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_176, 1) = ((MR_Box) (VarStr_11));
                    }
                    {
                      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
                      MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
                    }
                    {
                      Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(3, Var_189, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_299));
                    }
                    {
                      Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_188, 0) = ((MR_Box) (Var_189));
                      MR_hl_field(1, Var_188, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[30])));
                    }
                    {
                      Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_185, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[28])));
                      MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_188));
                    }
                    {
                      Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_182, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
                      MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_185));
                    }
                    Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_297, Var_182);
                    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_181);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PfSNA_41 = ((MR_Word) ((MR_hl_field(1, GenericCall_33, 3))));
                  MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, PfSNA_41, 2))));
                  MR_Word Var_197;
                  MR_Word Var_198;
                  MR_Word Var_203;
                  MR_Word Var_204;
                  MR_Word Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_212;
                  MR_Word Var_213;
                  MR_Word PredOrFunc_301 = ((MR_Unsigned) ((MR_hl_field(0, PfSNA_41, 0))) & (MR_Integer) 1);
                  MR_Word SymName_302 = ((MR_Word) ((MR_hl_field(0, PfSNA_41, 1))));
                  MR_Word ArgNumDescPieces_303;
                  MR_Integer NumArgs_304 = (MR_Integer) (Var_196);

                  ArgNumDescPieces_303 = hlds__var_origins__arg_num_description_3_f_0(PredOrFunc_301, NumArgs_304, ArgNum_310);
                  {
                    Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_198, 1) = ((MR_Box) (VarStr_11));
                  }
                  {
                    Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_197, 0) = ((MR_Box) (Var_198));
                    MR_hl_field(1, Var_197, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[11])));
                  }
                  {
                    Var_208 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_208, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                    MR_hl_field(3, Var_208, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_301));
                  }
                  {
                    Var_213 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_213, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(3, Var_213, 1) = ((MR_Box) (SymName_302));
                  }
                  {
                    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_212, 0) = ((MR_Box) (Var_213));
                    MR_hl_field(1, Var_212, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[15])));
                  }
                  {
                    Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_209, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[24])));
                    MR_hl_field(1, Var_209, 1) = ((MR_Box) (Var_212));
                  }
                  {
                    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_207, 0) = ((MR_Box) (Var_208));
                    MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_209));
                  }
                  {
                    Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_204, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[12])));
                    MR_hl_field(1, Var_204, 1) = ((MR_Box) (Var_207));
                  }
                  Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumDescPieces_303, Var_204);
                  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_197, Var_203);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_42 = ((MR_String) ((MR_hl_field(2, GenericCall_33, 0))));
                  MR_Word Var_220;
                  MR_Word Var_221;
                  MR_Word Var_224;
                  MR_Word Var_225;
                  MR_Word Var_226;
                  MR_Word Var_229;
                  MR_Word Var_232;
                  MR_Word Var_233;
                  MR_Integer ArgNumInt_305;

                  ArgNumInt_305 = mercury__uint__cast_to_int_1_f_0(ArgNum_310);
                  {
                    Var_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_220, 1) = ((MR_Box) (VarStr_11));
                  }
                  {
                    Var_225 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_225, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_225, 1) = ((MR_Box) (ArgNumInt_305));
                  }
                  {
                    Var_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_233, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_233, 1) = ((MR_Box) (EventName_42));
                  }
                  {
                    Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_232, 0) = ((MR_Box) (Var_233));
                    MR_hl_field(1, Var_232, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[10])));
                  }
                  {
                    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_229, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[26])));
                    MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_232));
                  }
                  {
                    Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[25])));
                    MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
                  }
                  {
                    Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_224, 0) = ((MR_Box) (Var_225));
                    MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
                  }
                  {
                    Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_221, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                    MR_hl_field(1, Var_221, 1) = ((MR_Box) (Var_224));
                  }
                  {
                    Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_220));
                    MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_221));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastKind_43 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_33, 0))) & (MR_Integer) 7);
                  MR_String InOrOut_44;

                  succeeded = (ArgNum_310 == (MR_Unsigned) 1U);
                  if (succeeded)
                    InOrOut_44 = (MR_String) "input";
                  else
                    InOrOut_44 = (MR_String) "output";
                  switch (CastKind_43) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_240;
                        MR_Word Var_241;
                        MR_Word Var_244;
                        MR_Word Var_245;

                        {
                          Var_240 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_240, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_240, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_245 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_245, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_245, 1) = ((MR_Box) (InOrOut_44));
                        }
                        {
                          Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_244, 0) = ((MR_Box) (Var_245));
                          MR_hl_field(1, Var_244, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[17])));
                        }
                        {
                          Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_241, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_241, 1) = ((MR_Box) (Var_244));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_240));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_241));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_264;
                        MR_Word Var_265;
                        MR_Word Var_268;
                        MR_Word Var_269;

                        {
                          Var_264 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_264, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_264, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_269 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_269, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_269, 1) = ((MR_Box) (InOrOut_44));
                        }
                        {
                          Var_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_268, 0) = ((MR_Box) (Var_269));
                          MR_hl_field(1, Var_268, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[19])));
                        }
                        {
                          Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_265, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_265, 1) = ((MR_Box) (Var_268));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_264));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_265));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_276;
                        MR_Word Var_277;
                        MR_Word Var_280;
                        MR_Word Var_281;

                        {
                          Var_276 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_276, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_276, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_281 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_281, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_281, 1) = ((MR_Box) (InOrOut_44));
                        }
                        {
                          Var_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_280, 0) = ((MR_Box) (Var_281));
                          MR_hl_field(1, Var_280, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[21])));
                        }
                        {
                          Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_277, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_277, 1) = ((MR_Box) (Var_280));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_276));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_277));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_252;
                        MR_Word Var_253;
                        MR_Word Var_256;
                        MR_Word Var_257;

                        {
                          Var_252 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_252, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, Var_252, 1) = ((MR_Box) (VarStr_11));
                        }
                        {
                          Var_257 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_257, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_257, 1) = ((MR_Box) (InOrOut_44));
                        }
                        {
                          Var_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_256, 0) = ((MR_Box) (Var_257));
                          MR_hl_field(1, Var_256, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[23])));
                        }
                        {
                          Var_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_253, 0) = ((MR_Box) (MR_mkword(3, &hlds__var_origins_scalar_common_1[5])));
                          MR_hl_field(1, Var_253, 1) = ((MR_Box) (Var_256));
                        }
                        {
                          Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_252));
                          MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_253));
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
    Pieces_8 = (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[40]));
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
      MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[41])));
    }
  }
  return Pieces_8;
}

static void MR_CALL 
hlds__var_origins__pred_arg_num_description_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Unsigned ArgNum_9,
  MR_Word * PredOrFunc_10,
  MR_Word * SymName_11,
  MR_Word * Pieces_12)
{
  MR_bool succeeded;
  MR_Word PredInfo_13;
  MR_Integer NumArgs_14;
  MR_Word Var_15;
  MR_Integer ArgNumInt_16;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_13);
  *PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
  hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_13, SymName_11);
  Var_15 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_13);
  NumArgs_14 = (MR_Integer) (Var_15);
  ArgNumInt_16 = mercury__uint__cast_to_int_1_f_0(ArgNum_9);
  succeeded = (*PredOrFunc_10 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (ArgNumInt_16 == NumArgs_14);
  if (succeeded)
    *Pieces_12 = (MR_Word) (MR_mkword(1, &hlds__var_origins_scalar_common_1[40]));
  else
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (ArgNumInt_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__var_origins_scalar_common_1[41])));
    }
  }
}

static void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__659__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_12));
}

void MR_CALL 
hlds__var_origins__compute_var_origins_in_pred_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word CollectPred_6,
  MR_Word PredInfo0_7,
  MR_Word * OriginsMap_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word ClausesInfo0_10;
  MR_Word HeadVars_11;
  MR_Word ClausesRep0_12;
  MR_Word Clauses_14;
  MR_Word RevOriginsMapList_16;
  MR_Word OriginsMapList_17;
  MR_Word _ItemNumbers_13;
  MR_Word _ClausesRep_15;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_7, &ClausesInfo0_10);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo0_10, &HeadVars_11);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_10, &ClausesRep0_12, &_ItemNumbers_13);
  hlds__hlds_clauses__get_clause_list_3_p_0(&Clauses_14, ClausesRep0_12, &_ClausesRep_15);
  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_8_p_0(CollectPred_6, HeadVars_11, (MR_Unsigned) 1U, Clauses_14, (MR_Word) ((MR_Unsigned) 0U), &RevOriginsMapList_16, STATE_VARIABLE_Acc_0_18, STATE_VARIABLE_Acc_19);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__var_origins_scalar_common_2[0]), RevOriginsMapList_16, &OriginsMapList_17);
  if ((OriginsMapList_17 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), OriginsMap_8);
  else
  {
    MR_Word HeadOriginsMap_24 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_17, 0))));
    MR_Word TailOriginsMaps_25 = ((MR_Word) ((MR_hl_field(1, OriginsMapList_17, 1))));

    mercury__map__union_list_4_p_1((MR_Word) (&hlds__var_origins_scalar_common_1[1]), (MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_2[4]), HeadOriginsMap_24, TailOriginsMaps_25, OriginsMap_8);
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_108_97_117_115_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevOriginsMapList_0_5,
  MR_Word * STATE_VARIABLE_RevOriginsMapList_6,
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
      *STATE_VARIABLE_RevOriginsMapList_6 = STATE_VARIABLE_RevOriginsMapList_0_5;
    }
    else
    {
      MR_Word Clause_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Clauses_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word BodyGoal_26 = ((MR_Word) ((MR_hl_field(0, Clause_21, 1))));
      MR_Word Lang_27 = ((MR_Word) ((MR_hl_field(0, Clause_21, 2))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, Clause_21, 3))));
      MR_Unsigned NextClauseNum_35;
      MR_Box STATE_VARIABLE_Acc_2_42;
      MR_Word STATE_VARIABLE_RevOriginsMapList_1_43;
      MR_Unsigned next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMapList_0_5;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_7;

      if ((Lang_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OriginsMap1_33;
        MR_Word OriginsMap_34;
        MR_Box STATE_VARIABLE_Acc_1_41;
        MR_Word STATE_VARIABLE_OriginsMap_1_49;

        mercury__map__init_1_p_0((MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_1[1]), &STATE_VARIABLE_OriginsMap_1_49);
        hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_99_108_97_117_115_101_95_104_101_97_100_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(HeadVar__1_1, Context_28, HeadVar__3_3, (MR_Unsigned) 1U, HeadVar__2_2, STATE_VARIABLE_OriginsMap_1_49, &OriginsMap1_33, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_1_41);
        hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(HeadVar__1_1, BodyGoal_26, OriginsMap1_33, &OriginsMap_34, STATE_VARIABLE_Acc_1_41, &STATE_VARIABLE_Acc_2_42);
        {
          STATE_VARIABLE_RevOriginsMapList_1_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevOriginsMapList_1_43, 0) = ((MR_Box) (OriginsMap_34));
          MR_hl_field(1, STATE_VARIABLE_RevOriginsMapList_1_43, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMapList_0_5));
        }
        NextClauseNum_35 = (HeadVar__3_3 + (MR_Unsigned) 1U);
      }
      else
      {
        NextClauseNum_35 = HeadVar__3_3;
        STATE_VARIABLE_RevOriginsMapList_1_43 = STATE_VARIABLE_RevOriginsMapList_0_5;
        STATE_VARIABLE_Acc_2_42 = STATE_VARIABLE_Acc_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextClauseNum_35;
      next_value_of_HeadVar__4_4 = Clauses_22;
      next_value_of_STATE_VARIABLE_RevOriginsMapList_0_5 = STATE_VARIABLE_RevOriginsMapList_1_43;
      next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_2_42;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevOriginsMapList_0_5 = next_value_of_STATE_VARIABLE_RevOriginsMapList_0_5;
      STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
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
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_12;

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__659__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_12));
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_83,
  MR_Word * STATE_VARIABLE_OriginsMap_84,
  MR_Box STATE_VARIABLE_Acc_0_85,
  MR_Box * STATE_VARIABLE_Acc_86)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_8, 1))));
    MR_Word Context_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_60 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Word _OriginsMapAfterNegation_61;

          hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, SubGoal_60, STATE_VARIABLE_OriginsMap_0_83, &_OriginsMapAfterNegation_61, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
          *STATE_VARIABLE_OriginsMap_84 = STATE_VARIABLE_OriginsMap_0_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, 0))));
          MR_Word RHS_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, 1))));

          switch (MR_tag((MR_Word) RHS_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(0, RHS_15, 0))));
                MR_Word OriginUnifyVar_20;

                {
                  OriginUnifyVar_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginUnifyVar_20, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(0, OriginUnifyVar_20, 1) = ((MR_Box) (LHSVar_14));
                  MR_hl_field(0, OriginUnifyVar_20, 2) = ((MR_Box) (RHSVar_19));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_118_97_114_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginUnifyVar_20, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_21 = ((MR_Word) ((MR_hl_field(1, RHS_15, 0))));
                MR_Word RHSVars_23 = ((MR_Word) ((MR_hl_field(1, RHS_15, 2))));
                MR_Word OriginUnifyFunc_24;

                {
                  OriginUnifyFunc_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginUnifyFunc_24, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(0, OriginUnifyFunc_24, 1) = ((MR_Box) (LHSVar_14));
                  MR_hl_field(0, OriginUnifyFunc_24, 2) = ((MR_Box) (ConsId_21));
                  MR_hl_field(0, OriginUnifyFunc_24, 3) = ((MR_Box) (RHSVars_23));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_117_110_105_102_121_95_102_117_110_99_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginUnifyFunc_24, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredOrFunc_27 = ((MR_Unsigned) ((MR_hl_field(2, RHS_15, 0))) & (MR_Integer) 1);
                MR_Word VarsModes_29 = ((MR_Word) ((MR_hl_field(2, RHS_15, 2))));
                MR_Word LambdaGoal_31 = ((MR_Word) ((MR_hl_field(2, RHS_15, 4))));
                MR_Word OriginLambdaHead_32;
                MR_Word OriginsMapAfterLambdaHead_33;
                MR_Box STATE_VARIABLE_Acc_3_91;
                MR_Word _OriginsMapAfterLambda_34;

                {
                  OriginLambdaHead_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OriginLambdaHead_32, 0) = ((MR_Box) (Context_13));
                  MR_hl_field(0, OriginLambdaHead_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_27));
                  MR_hl_field(0, OriginLambdaHead_32, 2) = ((MR_Box) (VarsModes_29));
                }
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_108_97_109_98_100_97_95_104_101_97_100_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginLambdaHead_32, STATE_VARIABLE_OriginsMap_0_83, &OriginsMapAfterLambdaHead_33, STATE_VARIABLE_Acc_0_85, &STATE_VARIABLE_Acc_3_91);
                hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, LambdaGoal_31, OriginsMapAfterLambdaHead_33, &_OriginsMapAfterLambda_34, STATE_VARIABLE_Acc_3_91, STATE_VARIABLE_Acc_86);
                *STATE_VARIABLE_OriginsMap_84 = STATE_VARIABLE_OriginsMap_0_83;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, 0))));
          MR_Word ArgVars_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, 2))));
          MR_Word OriginPlainCall_41;

          {
            OriginPlainCall_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OriginPlainCall_41, 0) = ((MR_Box) (Context_13));
            MR_hl_field(0, OriginPlainCall_41, 1) = ((MR_Box) (PredId_35));
            MR_hl_field(0, OriginPlainCall_41, 2) = ((MR_Box) (ArgVars_37));
          }
          hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginPlainCall_41, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GCall_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word OriginGenericCall_52;
              MR_Word ArgVars_120 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));

              {
                OriginGenericCall_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OriginGenericCall_52, 0) = ((MR_Box) (Context_13));
                MR_hl_field(0, OriginGenericCall_52, 1) = ((MR_Box) (GCall_48));
                MR_hl_field(0, OriginGenericCall_52, 2) = ((MR_Box) (ArgVars_120));
              }
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginGenericCall_52, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OriginForeignCall_47;
              MR_Word PredId_118 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word ArgVars_119 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));

              {
                OriginForeignCall_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OriginForeignCall_47, 0) = ((MR_Box) (Context_13));
                MR_hl_field(0, OriginForeignCall_47, 1) = ((MR_Box) (PredId_118));
                MR_hl_field(0, OriginForeignCall_47, 2) = ((MR_Box) (ArgVars_119));
              }
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, OriginForeignCall_47, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_6_p_0(CollectPred_7, Conjuncts_54, STATE_VARIABLE_OriginsMap_0_83, STATE_VARIABLE_OriginsMap_84, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word OriginsMaps_56;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(CollectPred_7, STATE_VARIABLE_OriginsMap_0_83, Disjuncts_55, (MR_Word) ((MR_Unsigned) 0U), &OriginsMaps_56, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
              hlds__var_origins__represent_origins_on_all_branches_2_p_0(OriginsMaps_56, STATE_VARIABLE_OriginsMap_84);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word OriginsMaps_121;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(CollectPred_7, STATE_VARIABLE_OriginsMap_0_83, Cases_59, (MR_Word) ((MR_Unsigned) 0U), &OriginsMaps_121, STATE_VARIABLE_Acc_0_85, STATE_VARIABLE_Acc_86);
              hlds__var_origins__represent_origins_on_all_branches_2_p_0(OriginsMaps_121, STATE_VARIABLE_OriginsMap_84);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word next_value_of_Goal_8 = SubGoal_122;

              // direct tailcall eliminated
              ;
              Goal_8 = next_value_of_Goal_8;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word ThenGoal_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word ElseGoal_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
              MR_Word OriginsMapAfterCond_68;
              MR_Word OriginsMapAfterElse_70;
              MR_Box STATE_VARIABLE_Acc_13_110;
              MR_Box STATE_VARIABLE_Acc_14_111;
              MR_Word HeadOriginsMap_126;
              MR_Word TailOriginsMaps_127;

              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, CondGoal_64, STATE_VARIABLE_OriginsMap_0_83, &OriginsMapAfterCond_68, STATE_VARIABLE_Acc_0_85, &STATE_VARIABLE_Acc_13_110);
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, ThenGoal_65, OriginsMapAfterCond_68, &HeadOriginsMap_126, STATE_VARIABLE_Acc_13_110, &STATE_VARIABLE_Acc_14_111);
              hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(CollectPred_7, ElseGoal_66, STATE_VARIABLE_OriginsMap_0_83, &OriginsMapAfterElse_70, STATE_VARIABLE_Acc_14_111, STATE_VARIABLE_Acc_86);
              {
                TailOriginsMaps_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TailOriginsMaps_127, 0) = ((MR_Box) (OriginsMapAfterElse_70));
                MR_hl_field(1, TailOriginsMaps_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__union_list_4_p_1((MR_Word) (&hlds__var_origins_scalar_common_1[1]), (MR_Word) (&hlds__var_origins_scalar_common_1[0]), (MR_Word) (&hlds__var_origins_scalar_common_2[3]), HeadOriginsMap_126, TailOriginsMaps_127, STATE_VARIABLE_OriginsMap_84);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));

              switch (MR_tag((MR_Word) Shorthand_71)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_OriginsMap_84 = STATE_VARIABLE_OriginsMap_0_83;
                    *STATE_VARIABLE_Acc_86 = STATE_VARIABLE_Acc_0_85;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_OriginsMap_84 = STATE_VARIABLE_OriginsMap_0_83;
                    *STATE_VARIABLE_Acc_86 = STATE_VARIABLE_Acc_0_85;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_124 = ((MR_Word) ((MR_hl_field(2, Shorthand_71, 2))));
                    MR_Word next_value_of_Goal_8 = SubGoal_124;

                    // direct tailcall eliminated
                    ;
                    Goal_8 = next_value_of_Goal_8;
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
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_4,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_5,
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
      *STATE_VARIABLE_RevOriginsMaps_5 = STATE_VARIABLE_RevOriginsMaps_0_4;
    }
    else
    {
      MR_Word Case_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubGoal_24 = ((MR_Word) ((MR_hl_field(0, Case_18, 2))));
      MR_Word CaseOriginsMap_25;
      MR_Box STATE_VARIABLE_Acc_1_30;
      MR_Word STATE_VARIABLE_RevOriginsMaps_1_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_6;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(HeadVar__1_1, SubGoal_24, HeadVar__2_2, &CaseOriginsMap_25, STATE_VARIABLE_Acc_0_6, &STATE_VARIABLE_Acc_1_30);
      {
        STATE_VARIABLE_RevOriginsMaps_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_31, 0) = ((MR_Box) (CaseOriginsMap_25));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMaps_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cases_19;
      next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4 = STATE_VARIABLE_RevOriginsMaps_1_31;
      next_value_of_STATE_VARIABLE_Acc_0_6 = STATE_VARIABLE_Acc_1_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevOriginsMaps_0_4 = next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4;
      STATE_VARIABLE_Acc_0_6 = next_value_of_STATE_VARIABLE_Acc_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOriginsMaps_0_4,
  MR_Word * STATE_VARIABLE_RevOriginsMaps_5,
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
      *STATE_VARIABLE_RevOriginsMaps_5 = STATE_VARIABLE_RevOriginsMaps_0_4;
    }
    else
    {
      MR_Word Disjunct_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Disjuncts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word DisjunctOriginsMap_22;
      MR_Box STATE_VARIABLE_Acc_1_27;
      MR_Word STATE_VARIABLE_RevOriginsMaps_1_28;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_6;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(HeadVar__1_1, Disjunct_18, HeadVar__2_2, &DisjunctOriginsMap_22, STATE_VARIABLE_Acc_0_6, &STATE_VARIABLE_Acc_1_27);
      {
        STATE_VARIABLE_RevOriginsMaps_1_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_28, 0) = ((MR_Box) (DisjunctOriginsMap_22));
        MR_hl_field(1, STATE_VARIABLE_RevOriginsMaps_1_28, 1) = ((MR_Box) (STATE_VARIABLE_RevOriginsMaps_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Disjuncts_19;
      next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4 = STATE_VARIABLE_RevOriginsMaps_1_28;
      next_value_of_STATE_VARIABLE_Acc_0_6 = STATE_VARIABLE_Acc_1_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevOriginsMaps_0_4 = next_value_of_STATE_VARIABLE_RevOriginsMaps_0_4;
      STATE_VARIABLE_Acc_0_6 = next_value_of_STATE_VARIABLE_Acc_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_99_111_110_106_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OriginsMap_0_3,
  MR_Word * STATE_VARIABLE_OriginsMap_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
      *STATE_VARIABLE_OriginsMap_4 = STATE_VARIABLE_OriginsMap_0_3;
    }
    else
    {
      MR_Word Conjunct_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Conjuncts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_OriginsMap_1_23;
      MR_Box STATE_VARIABLE_Acc_1_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_5;

      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_105_110_95_103_111_97_108_95_95_91_49_93_95_48_6_p_0(HeadVar__1_1, Conjunct_15, STATE_VARIABLE_OriginsMap_0_3, &STATE_VARIABLE_OriginsMap_1_23, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Conjuncts_16;
      next_value_of_STATE_VARIABLE_OriginsMap_0_3 = STATE_VARIABLE_OriginsMap_1_23;
      next_value_of_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OriginsMap_0_3 = next_value_of_STATE_VARIABLE_OriginsMap_0_3;
      STATE_VARIABLE_Acc_0_5 = next_value_of_STATE_VARIABLE_Acc_0_5;
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
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 0))));
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 1))));
  MR_Word ForeignArgs_13 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 2))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(CollectPred_7, Context_11, PredId_12, (MR_Unsigned) 1U, ForeignArgs_13, STATE_VARIABLE_OriginsMap_0_14, STATE_VARIABLE_OriginsMap_15, STATE_VARIABLE_Acc_0_16, STATE_VARIABLE_Acc_17);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_102_111_114_101_105_103_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
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
      MR_Word ForeignArg_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ForeignArgs_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ArgVar_28;
      MR_Word OriginArg_29;
      MR_Word STATE_VARIABLE_OriginsMap_1_34;
      MR_Box STATE_VARIABLE_Acc_1_35;
      MR_Unsigned Var_36;
      MR_Unsigned next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OriginsMap_0_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_8;

      ArgVar_28 = hlds__hlds_goal__foreign_arg_var_1_f_0(ForeignArg_24);
      {
        OriginArg_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OriginArg_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, OriginArg_29, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, OriginArg_29, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(3, OriginArg_29, 3) = ((MR_Box) (HeadVar__4_4));
      }
      hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_95_95_91_49_93_95_48_7_p_0(HeadVar__1_1, ArgVar_28, OriginArg_29, STATE_VARIABLE_OriginsMap_0_6, &STATE_VARIABLE_OriginsMap_1_34, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_1_35);
      Var_36 = (HeadVar__4_4 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_36;
      next_value_of_HeadVar__5_5 = ForeignArgs_25;
      next_value_of_STATE_VARIABLE_OriginsMap_0_6 = STATE_VARIABLE_OriginsMap_1_34;
      next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_1_35;
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
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_95_91_49_93_95_48_6_p_0(
  MR_Word CollectPred_7,
  MR_Word OriginPlainCall_8,
  MR_Word STATE_VARIABLE_OriginsMap_0_14,
  MR_Word * STATE_VARIABLE_OriginsMap_15,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 0))));
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 1))));
  MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(0, OriginPlainCall_8, 2))));

  hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(CollectPred_7, Context_11, PredId_12, (MR_Unsigned) 1U, ArgVars_13, STATE_VARIABLE_OriginsMap_0_14, STATE_VARIABLE_OriginsMap_15, STATE_VARIABLE_Acc_0_16, STATE_VARIABLE_Acc_17);
}

static void MR_CALL 
hlds__var_origins__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_118_97_114_95_111_114_105_103_105_110_115_95_112_108_97_105_110_95_99_97_108_108_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
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
        MR_hl_field(3, OriginArg_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
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

  hlds__var_origins__IntroducedFrom__pred__represent_origins_on_all_branches__659__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_12);
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
