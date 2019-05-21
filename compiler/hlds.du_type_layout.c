/*
** Automatically generated from `du_type_layout.m'
** by the Mercury compiler,
** version 2018-02-19
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


// :- module hlds.du_type_layout.
// :- implementation.

/*
INIT mercury__hlds__du_type_layout__init
ENDINIT
*/

#include "hlds.du_type_layout.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.add_foreign_enum.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.du_type_layout_old.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0[3];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0[3];

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[7];

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[7];

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[7];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0[1];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0[4];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0[4];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_fill_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_fill_kind_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_fill_kind_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0[2];

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1198__1_2_p_0(
  MR_Integer ConsArity_18,
  MR_Integer HeadVar__2_44);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__548__1_2_p_0(
  MR_Integer Arity_31,
  MR_Integer HeadVar__2_52);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__547__1_2_p_0(
  MR_Word Args_30,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__545__1_2_p_0(
  MR_Word MaybeExistConstraints_28,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__359__1_2_p_0(
  MR_Word Ctors_26,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__358__1_2_p_0(
  MR_Word MaybeRepn0_28,
  MR_Word HeadVar__2_56);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(
  MR_Word MustBeSingleFunctorTagTypes_36);

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____fill_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____fill_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__du_type_layout__add_repn_to_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout__add_repn_to_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21);

static MR_Word MR_CALL 
hlds__du_type_layout__add_default_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3);

static MR_Word MR_CALL 
hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0(
  MR_Word ComponentTypeMap_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word TypeIsImported_11,
  MR_Word TypeDefinedHere_12,
  MR_Word AssertedDirectArgCtors_13,
  MR_Word Ctor_14);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtor_13,
  MR_Word CtorTagMap_14,
  MR_Word Ctor_15,
  MR_Word * CtorRepn_16,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_26,
  MR_Word * STATE_VARIABLE_CtorRepnMap_27);

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtorTypeDefn0_13,
  MR_Word * TypeCtorTypeDefn_14,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Params_12,
  MR_Word ComponentTypeMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Ctors_16,
  MR_Word * Repn_18,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__du_type_layout__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepns_5,
  MR_Word * CheaperTagTest_6);

static void MR_CALL 
hlds__du_type_layout__check_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer MaxPtag_2,
  MR_Integer STATE_VARIABLE_CurPtag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6);

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Ptag_2,
  MR_Integer STATE_VARIABLE_CurSecTag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  MR_Integer MaxPtag_2,
  MR_Integer STATE_VARIABLE_CurPtag_0_3,
  MR_Integer * STATE_VARIABLE_CurPtag_4,
  MR_Word HeadVar__5_5,
  MR_Word NonDirectArgCtors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTagMap_0_8,
  MR_Word * STATE_VARIABLE_CtorTagMap_9);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_constants_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Ptag_2,
  MR_Integer CurSecTag_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word TypeCtor_12,
  MR_Word SingleCtor_13,
  MR_Word * Repn_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurShift_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word TypeCtorToForeignEnumMap_16,
  MR_Word TypeCtorTypeDefn0_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_43,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_44,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_45,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_46,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(
  MR_Word Params_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Body0_18,
  MR_Word SingleCtorSymName_19,
  MR_Word SingleArg_20,
  MR_Word SingleCtorContext_21,
  MR_Word * TypeCtorTypeDefn_22,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_50,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(
  MR_Word Params_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Body0_16,
  MR_Word Ctors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_50,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurTag_0_4,
  MR_Integer * STATE_VARIABLE_CurTag_5,
  MR_Word STATE_VARIABLE_ConsIdToTagMap_0_6,
  MR_Word * STATE_VARIABLE_ConsIdToTagMap_7,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_8,
  MR_Word * STATE_VARIABLE_CtorRepnMap_9);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(
  MR_Word Params_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefn0_14,
  MR_Word Body0_15,
  MR_Word Ctors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_Word MR_CALL 
hlds__du_type_layout__type_ctor_sna_1_f_0(
  MR_Word TypeCtor_3);

static MR_bool MR_CALL 
hlds__du_type_layout__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__du_type_layout__add_abstract_if_fits_in_n_bits_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word AbstractDetails_6,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_11,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_12);

static void MR_CALL 
hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word TypeCtor_11,
  MR_Word ForeignType_12,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_24,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_bool MR_CALL 
hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(
  MR_Word ForeignType_4,
  MR_Word Target_5,
  MR_Word * Assertions_6);

static void MR_CALL 
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(
  MR_Word Params_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word MaybeForeign_12,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_24,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_25,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_26);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__du_type_layout__are_floats_double_word_2_p_0(
  MR_Word Globals_3,
  MR_Word * DoubleWordFloats_4);

static void MR_CALL 
hlds__du_type_layout__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3);

static void MR_CALL 
hlds__du_type_layout__are_direct_args_enabled_3_p_0(
  MR_Word Globals_4,
  MR_Word Target_5,
  MR_Word * MaybeDirectArgs_6);

static void MR_CALL 
hlds__du_type_layout__compare_type_tables_4_p_0(
  MR_Word ModuleInfoA_5,
  MR_Word ModuleInfoB_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____fill_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____fill_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[47][2];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[12][3];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[1][16];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[2][12];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[1][4];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[1][7];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[7][5];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_11[1][10];




static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[47][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_2[1]))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "old and new type tables differ."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration and a direct_arg specification."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it has function symbols whose arity is not zero."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "yet it has a direct_arg specification."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "have arity zero,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a no_tag type,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[29])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it also has a direct_arg specification."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a foreign language representation on this backend,"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "sole argument."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be represented as a direct pointer to its"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_3[2]))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: all the function symbols of"))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[7]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[6]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_8[0])),
    ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_9[0])),
    ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_10[5])),
    ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_10[6])),
    ((MR_Box) (hlds__du_type_layout__add_repn_to_ctor_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[14])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_fill_kind_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0 = {
  (MR_String) "fits_in_n_bits",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1 = {
  (MR_String) "is_word_aligned_ptr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2 = {
  (MR_String) "is_eqv_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0[3] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0
  }
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[7] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_compilation_target_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0,
  (MR_PseudoTypeInfo) &hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[7] = {
  (MR_String) "ddp_target",
  (MR_String) "ddp_double_word_floats",
  (MR_String) "ddp_unboxed_no_tag_types",
  (MR_String) "ddp_maybe_primary_tags",
  (MR_String) "ddp_target_word_bits",
  (MR_String) "ddp_maybe_direct_args",
  (MR_String) "ddp_direct_arg_map"
};

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0 = {
  (MR_String) "decide_du_params",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____decide_du_params_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____decide_du_params_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "decide_du_params",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0 = {
  (MR_String) "direct_arg_asserted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1 = {
  (MR_String) "arg_type_is_word_aligned_pointer",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_type_status_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3 = {
  (MR_String) "arg_type_defined_in_different_module",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0[3] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0[4] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_direct_arg_cond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "direct_arg_cond",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_0 = {
  (MR_String) "fill_with_zero",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_1 = {
  (MR_String) "fill_with_sign",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_fill_kind_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_fill_kind_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_fill_kind_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_fill_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_fill_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____fill_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____fill_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "fill_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_fill_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_fill_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_fill_kind_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0 = {
  (MR_String) "direct_args_disabled",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1 = {
  (MR_String) "direct_args_enabled",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_direct_args",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0 = {
  (MR_String) "no_double_word_floats",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1 = {
  (MR_String) "use_double_word_floats",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_double_word_floats",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0 = {
  (MR_String) "no_primary_tags",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1 = {
  (MR_String) "max_primary_tag",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_primary_tags",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0 = {
  (MR_String) "no_unboxed_no_tag_types",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1 = {
  (MR_String) "use_unboxed_no_tag_types",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_unboxed_no_tag_types",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_type_repn_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____type_repn_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____type_repn_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0 = {
  (MR_String) "foreign_type_assertion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1 = {
  (MR_String) "mercury_type_defn",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____word_aligned_why_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____word_aligned_why_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "word_aligned_why",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0
};

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1198__1_2_p_0(
  MR_Integer ConsArity_18,
  MR_Integer HeadVar__2_44)
{
  {
    MR_bool succeeded = (ConsArity_18 == HeadVar__2_44);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__548__1_2_p_0(
  MR_Integer Arity_31,
  MR_Integer HeadVar__2_52)
{
  {
    MR_bool succeeded = (Arity_31 == HeadVar__2_52);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__547__1_2_p_0(
  MR_Word Args_30,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_1[8], ((MR_Box) (Args_30)), ((MR_Box) (HeadVar__2_48)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__545__1_2_p_0(
  MR_Word MaybeExistConstraints_28,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_28, HeadVar__2_44);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__359__1_2_p_0(
  MR_Word Ctors_26,
  MR_Word HeadVar__2_60)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_1[5], ((MR_Box) (Ctors_26)), ((MR_Box) (HeadVar__2_60)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__358__1_2_p_0(
  MR_Word MaybeRepn0_28,
  MR_Word HeadVar__2_56)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_1[4], ((MR_Box) (MaybeRepn0_28)), ((MR_Box) (HeadVar__2_56)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(
  MR_Word MustBeSingleFunctorTagTypes_36)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, MustBeSingleFunctorTagTypes_36);
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__du_type_layout_scalar_common_2[6], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_2[6], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____fill_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____fill_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  hlds__status____Compare____type_status_0_0(HeadVar__1_1, Var_15, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = hlds__status____Unify____type_status_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
      MR_Word ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_18;
      MR_Integer Var_33 = (MR_Integer) ArgX1_4;
      MR_Integer Var_34 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_18, Var_33, Var_34);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;
        MR_Integer Var_35 = (MR_Integer) ArgX2_6;
        MR_Integer Var_36 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, Var_35, Var_36);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;
          MR_Integer Var_37 = (MR_Integer) ArgX3_8;
          MR_Integer Var_38 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, Var_37, Var_38);
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            hlds__du_type_layout____Compare____maybe_primary_tags_0_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, ArgX5_12, ArgY5_13);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;
                MR_Integer Var_39 = (MR_Integer) ArgX6_14;
                MR_Integer Var_40 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_23, Var_39, Var_40);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__du_type_layout_scalar_common_2[5], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__du_type_layout____Unify____maybe_primary_tags_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_19_19 = (MR_Word) &hlds__du_type_layout_scalar_common_2[5];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__du_type_layout_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_30 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_37 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_28 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 0);

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_37, ArgY1_28);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_8;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_36, ArgY1_5);
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                  {
                    MR_Integer Var_39 = (MR_Integer) Var_35;
                    MR_Integer Var_40 = (MR_Integer) ArgY2_7;

                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_39, Var_40);
                  }
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
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  hlds__du_type_layout____Compare____word_aligned_why_0_0(HeadVar__1_1, Var_38, ArgY1_19);
                }
                break;
            }
          }
          break;
      }
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_9 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_10 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = hlds__du_type_layout____Unify____word_aligned_why_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout__add_repn_to_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsArgRepn_4;

    conv1_ConsArgRepn_4 = hlds__du_type_layout__add_default_repn_to_ctor_arg_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_ConsArgRepn_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_repn_to_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21)
{
  {
    MR_Word MaybeExistConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
    MR_Word SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1)));
    MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2)));
    MR_Integer Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3)));
    MR_Word Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4)));
    MR_Word ConsId_17;
    MR_Word ConsTag_18;
    MR_Word ArgRepns_19;
    MR_Box conv0_ConsTag_18;

    {
      ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_17, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(3), ConsId_17, 2) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(3), ConsId_17, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_8, ((MR_Box) (ConsId_17)), &conv0_ConsTag_18);
    ConsTag_18 = ((MR_Word) conv0_ConsTag_18);
    ArgRepns_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, (MR_Word) &hlds__du_type_layout_scalar_common_2[11], Args_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeExistConstraints_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsTag_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgRepns_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_16));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_10, STATE_VARIABLE_CtorRepnMap_0_20, STATE_VARIABLE_CtorRepnMap_21);
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__add_default_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3)
{
  {
    MR_Word ConsArgRepn_4;
    MR_Word MaybeFieldName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 0)));
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 1)));
    MR_Word Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 2)));

    {
      ConsArgRepn_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 0) = ((MR_Box) (MaybeFieldName_5));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 3) = ((MR_Box) (Context_7));
    }
    return ConsArgRepn_4;
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Name_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_6));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1198__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0(
  MR_Word ComponentTypeMap_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word TypeIsImported_11,
  MR_Word TypeDefinedHere_12,
  MR_Word AssertedDirectArgCtors_13,
  MR_Word Ctor_14)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
    MR_Word ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
    MR_Word ConsArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
    MR_Integer ConsArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
    MR_Word ConsArg_20;
    MR_Word ArgType_22;
    MR_Word ArgTypeCtor_24;
    MR_Word ArgTypeCtorArgTypes_25;
    MR_Word ConsConsId_26;
    MR_Word ArgCond_27;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_String Var_42;
    MR_String Var_43;
    MR_Integer Var_44;
    MR_Word OldImportStatus_55;
    MR_Word _CtorContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));
    MR_Word _MaybeFieldName_21;
    MR_Word _ArgContext_23;
    MR_Word TypeCtorInfo_47_47;

    succeeded = (MaybeExistConstraints_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ConsArgs_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ConsArg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_17, (MR_Integer) 0)));
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_17, (MR_Integer) 1)));
        succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          Var_44 = (MR_Integer) 1;
          Var_42 = (MR_String) "predicate \140hlds.du_type_layout.is_direct_arg_ctor\'/7";
          Var_43 = (MR_String) "ConsArity != 1";
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[2]));
            MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ConsArity_18));
            MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Var_44));
          }
          mercury__require__expect_3_p_0(Var_41, Var_42, Var_43);
          _MaybeFieldName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_20, (MR_Integer) 0)));
          ArgType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_20, (MR_Integer) 1)));
          _ArgContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_20, (MR_Integer) 2)));
          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_22, &ArgTypeCtor_24, &ArgTypeCtorArgTypes_25);
          if (succeeded)
          {
            {
              ConsConsId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsConsId_26, 0) = ((MR_Box) (ConsSymName_16));
              MR_hl_field(MR_mktag(0), ConsConsId_26, 1) = ((MR_Box) (ConsArity_18));
            }
            succeeded = (TypeIsImported_11 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
              succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_47_47, AssertedDirectArgCtors_13, ((MR_Box) (ConsConsId_26)));
            }
            if (succeeded)
            {
              ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ArgTypeCtor_24);
              if (succeeded)
              {
                ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word ArgComponentKind_28;
                MR_Word WordAlignedWhy_29;
                MR_Box conv0_ArgComponentKind_28;

                succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ComponentTypeMap_8, ((MR_Box) (ArgTypeCtor_24)), &conv0_ArgComponentKind_28);
                if (succeeded)
                {
                  ArgComponentKind_28 = ((MR_Word) conv0_ArgComponentKind_28);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgComponentKind_28)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    WordAlignedWhy_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ArgComponentKind_28, (MR_Integer) 0)));
                    if ((WordAlignedWhy_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word ArgTypeDefn_30;
                      MR_Word ArgTypeDefnBody_31;
                      MR_Word ArgMaybeForeign_35;
                      MR_Word _ArgCtors_32;
                      MR_Word _ArgMaybeUserEqComp_33;
                      MR_Word _ArgMaybeRepn_34;
                      MR_Word TypeCtorInfo_50_50;

                      succeeded = (ArgTypeCtorArgTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        ArgTypeDefn_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordAlignedWhy_29, (MR_Integer) 0)));
                        hlds__hlds_data__get_type_defn_body_2_p_0(ArgTypeDefn_30, &ArgTypeDefnBody_31);
                        succeeded = ((MR_tag((MR_Word) ArgTypeDefnBody_31)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          _ArgCtors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_31, (MR_Integer) 0)));
                          _ArgMaybeUserEqComp_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_31, (MR_Integer) 1)));
                          _ArgMaybeRepn_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_31, (MR_Integer) 2)));
                          ArgMaybeForeign_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_31, (MR_Integer) 3)));
                          succeeded = (ArgMaybeForeign_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = (TypeDefinedHere_12 == (MR_Integer) 1);
                            if (succeeded)
                            {
                              TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                              succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_50_50, AssertedDirectArgCtors_13, ((MR_Box) (ConsConsId_26)));
                            }
                            if (succeeded)
                            {
                              ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word ArgTypeCtorSymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeCtor_24, (MR_Integer) 0)));
                              MR_Word ArgTypeCtorModule_38;
                              MR_Integer _ArgTypeCtorArity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgTypeCtor_24, (MR_Integer) 1)));

                              succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(ArgTypeCtorSymName_36, &ArgTypeCtorModule_38);
                              if (succeeded)
                              {
                                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModule_9, ArgTypeCtorModule_38);
                                if (succeeded)
                                {
                                  MR_Word ArgTypeStatus_39;

                                  hlds__hlds_data__get_type_defn_status_2_p_0(ArgTypeDefn_30, &ArgTypeStatus_39);
                                  {
                                    ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ArgCond_27, 0) = ((MR_Box) (ArgTypeStatus_39));
                                  }
                                }
                                else
                                  ArgCond_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
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
            if (succeeded)
            {
              OldImportStatus_55 = (MR_Word) TypeStatus_10;
              switch (MR_tag((MR_Word) OldImportStatus_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OldImportStatus_55)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      succeeded = (ArgCond_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 6:
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout", (MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 7:
                      switch (MR_tag((MR_Word) ArgCond_27)) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgCond_27)) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                              succeeded = MR_TRUE;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgTypeStatus_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_27, (MR_Integer) 0)));
                            MR_Word ArgOldTypeStatus_57 = (MR_Word) ArgTypeStatus_56;

                            if ((OldImportStatus_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                              succeeded = (ArgOldTypeStatus_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                            else
                              switch (MR_tag((MR_Word) ArgOldTypeStatus_57)) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 0:
                                  switch (MR_unmkbody(ArgOldTypeStatus_57)) {
                                    default:
                                      succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 3:
                                      succeeded = MR_TRUE;
                                      break;
                                    case (MR_Integer) 5:
                                      succeeded = MR_TRUE;
                                      break;
                                    case (MR_Integer) 7:
                                      succeeded = MR_TRUE;
                                      break;
                                  }
                                  break;
                              }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 4:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      succeeded = MR_TRUE;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout", (MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeImportLocn_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), OldImportStatus_55, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) ArgCond_27)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgCond_27)) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgImportLocn_59;
                          MR_Word Var_65;
                          MR_Word ArgTypeStatus_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_27, (MR_Integer) 0)));

                          Var_65 = (MR_Word) ArgTypeStatus_66;
                          succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 2)));
                          if (succeeded)
                          {
                            ArgImportLocn_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_65, (MR_Integer) 0)));
                            succeeded = (ArgImportLocn_59 == (MR_Integer) 3);
                            if (succeeded)
                            {
                              succeeded = (TypeImportLocn_58 == (MR_Integer) 3);
                              succeeded = !(succeeded);
                            }
                            succeeded = !(succeeded);
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtor_13,
  MR_Word CtorTagMap_14,
  MR_Word Ctor_15,
  MR_Word * CtorRepn_16,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_26,
  MR_Word * STATE_VARIABLE_CtorRepnMap_27)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 0)));
    MR_Word CtorSymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 1)));
    MR_Word CtorArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 2)));
    MR_Integer CtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 3)));
    MR_Word CtorContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 4)));
    MR_Word CtorArgRepns_23;
    MR_Word ConsId_24;
    MR_Word CtorTag_25;
    MR_Word CtorArgRepnsBase_36;
    MR_Word CtorArgRepnsPacked_37;
    MR_Word Var_39;
    MR_Integer UnpackedLength_47;
    MR_Integer PackedLength_48;
    MR_Word Var_51;
    MR_Box conv0_CtorTag_25;

    Var_39 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
    hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_10, Params_11, Var_39, (MR_Integer) 0, CtorArgs_20, &CtorArgRepnsBase_36);
    hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_10, Params_11, ComponentTypeMap_12, (MR_Integer) 0, CtorArgs_20, &CtorArgRepnsPacked_37);
    hlds__du_type_layout__count_words_3_p_0(CtorArgRepnsBase_36, (MR_Integer) 0, &UnpackedLength_47);
    hlds__du_type_layout__count_words_3_p_0(CtorArgRepnsPacked_37, (MR_Integer) 0, &PackedLength_48);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (PackedLength_48));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (UnpackedLength_47));
    }
    mercury__require__expect_3_p_0(Var_51, (MR_String) "function \140hlds.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
    succeeded = (PackedLength_48 < UnpackedLength_47);
    if (succeeded)
    {
      MR_Integer Var_54;
      MR_Integer Var_55;

      succeeded = mercury__int__even_1_p_0(PackedLength_48);
      if (succeeded)
        Var_54 = PackedLength_48;
      else
      {
        Var_54 = (PackedLength_48 + (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_47);
      if (succeeded)
        Var_55 = UnpackedLength_47;
      else
      {
        Var_55 = (UnpackedLength_47 + (MR_Integer) 1);
      }
      succeeded = (Var_54 < Var_55);
      if (succeeded)
        CtorArgRepns_23 = CtorArgRepnsPacked_37;
      else
        CtorArgRepns_23 = CtorArgRepnsBase_36;
    }
    else
      CtorArgRepns_23 = CtorArgRepnsBase_36;
    {
      ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (CtorSymName_19));
      MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (CtorArity_21));
      MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_13));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, CtorTagMap_14, ((MR_Box) (ConsId_24)), &conv0_CtorTag_25);
    CtorTag_25 = ((MR_Word) conv0_CtorTag_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeExistConstraints_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorSymName_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorTag_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CtorArgRepns_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CtorArity_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CtorContext_22));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_16, STATE_VARIABLE_CtorRepnMap_0_26, STATE_VARIABLE_CtorRepnMap_27);
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtorTypeDefn0_13,
  MR_Word * TypeCtorTypeDefn_14,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_13, (MR_Integer) 0)));
    MR_Word TypeDefn0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_13, (MR_Integer) 1)));
    MR_Word Body0_19;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_18, &Body0_19);
    switch (MR_tag((MR_Word) Body0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 0)));
          MR_Word MaybeRepn0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 2)));
          MR_Word MaybeCanonical_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 1)));
          MR_Word _MaybeForeign_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 3)));

          if ((MaybeRepn0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word Repn_25;
            MR_Word Body_26;
            MR_Word TypeDefn_27;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_29_59;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_42;
            MR_Word Var_41;

            succeeded = mercury__set_tree234__remove_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (TypeCtor_17)), STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32, &STATE_VARIABLE_MustBeSingleFunctorTagTypes_29_59);
            if (succeeded)
            {
              MR_Word SingleCtor_58;
              MR_Word SingleCtorPrime_57;
              MR_Word Var_60;

              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_29_59;
              succeeded = ((MR_tag((MR_Word) Ctors_20)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                SingleCtorPrime_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 0)));
                Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 1)));
                succeeded = (Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (succeeded)
                SingleCtor_58 = SingleCtorPrime_57;
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type\'/12", (MR_String) "unexpected type in MustBeSingleFunctorTagTypes");
                  return;
                }
              }
              hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(ModuleInfo_10, Params_11, ComponentTypeMap_12, TypeCtor_17, SingleCtor_58, &Repn_25, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
            }
            else
            {
              MR_Word SingleCtor_68;
              MR_Word Var_64;

              succeeded = ((MR_tag((MR_Word) Ctors_20)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                SingleCtor_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 0)));
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 1)));
                succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (succeeded)
                hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(ModuleInfo_10, Params_11, ComponentTypeMap_12, TypeCtor_17, SingleCtor_68, &Repn_25, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
              else
                hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(ModuleInfo_10, Params_11, ComponentTypeMap_12, TypeCtor_17, TypeDefn0_18, Ctors_20, &Repn_25, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Repn_25));
            }
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 0)));
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 1)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 2)));
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 3)));
            {
              Body_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Body_26, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Body_26, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Body_26, 2) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Body_26, 3) = ((MR_Box) (Var_42));
            }
            hlds__hlds_data__set_type_defn_body_3_p_0(Body_26, TypeDefn0_18, &TypeDefn_27);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypeCtorTypeDefn_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_17));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_27));
            }
          }
          else
          {
            *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
            *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
            *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
      case (MR_Integer) 3:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_CtorRepn_16;
    MR_Word conv2_STATE_VARIABLE_CtorRepnMap_27;

    hlds__du_type_layout__decide_complex_du_type_ctor_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), &conv3_CtorRepn_16, ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_CtorRepnMap_27);
    *wrapper_arg_2 = ((MR_Box) (conv3_CtorRepn_16));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CtorRepnMap_27));
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__is_direct_arg_ctor_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Params_12,
  MR_Word ComponentTypeMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Ctors_16,
  MR_Word * Repn_18,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrimaryTags_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1)));
    MR_Word CtorTagMap_21;
    MR_Word DirectArgFunctorNames_22;
    MR_Word CtorRepns_44;
    MR_Word CtorRepnMap_45;
    MR_Word CheaperTagTest_46;
    MR_Word MaybeDirectArgFunctorNames_47;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word Var_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Integer Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 2)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 4)));
    MR_Box conv4_CtorRepnMap_45;

    if ((MaybePrimaryTags_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_66;

      Var_66 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0);
      hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_6_p_0(TypeCtor_14, (MR_Integer) 0, (MR_Integer) 0, Ctors_16, Var_66, &CtorTagMap_21);
      DirectArgFunctorNames_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
    }
    else
    {
      MR_Integer MaxPtag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybePrimaryTags_20, (MR_Integer) 0)));
      MR_Word Constants_24;
      MR_Word Functors_25;
      MR_Word MaybeDirectArgs_26;
      MR_Word DirectArgFunctors_36;
      MR_Word NonDirectArgFunctors_37;
      MR_Word LeftOverDirectArgFunctors_43;
      MR_Word STATE_VARIABLE_CtorTagMap_56_56;
      MR_Word STATE_VARIABLE_CtorTagMap_57_57;
      MR_Integer STATE_VARIABLE_CurPtag_58_58;
      MR_Integer STATE_VARIABLE_CurPtag_60_60;
      MR_Word STATE_VARIABLE_CtorTagMap_61_61;
      MR_Word Var_62;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Integer Var_80;
      MR_Word Var_81;

      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_16, &Constants_24, &Functors_25);
      Var_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) & (MR_Integer) 3);
      Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1)));
      Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 2)));
      MaybeDirectArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 4)));
      switch (MaybeDirectArgs_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DirectArgFunctors_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            DirectArgFunctorNames_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            NonDirectArgFunctors_37 = Functors_25;
            *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_93_93;
            MR_Word TypeCtorSymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0)));
            MR_Word TypeCtorModuleName_29;
            MR_Word DirectArgMap_30;
            MR_Word AssertedDirectArgFunctors_32;
            MR_Word TypeStatus_33;
            MR_Word TypeIsImported_34;
            MR_Word TypeDefinedHere_35;
            MR_Word Var_52;
            MR_Integer _TypeCtorArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 1)));
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Integer Var_86;
            MR_Word Var_87;
            MR_Word DirectArgMapEntry_31;
            MR_Box conv0_DirectArgMapEntry_31;

            mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_27, &TypeCtorModuleName_29);
            Var_82 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) & (MR_Integer) 3);
            Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1)));
            Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 2)));
            Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
            DirectArgMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 4)));
            succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[6], DirectArgMap_30, ((MR_Box) (TypeCtor_14)), &conv0_DirectArgMapEntry_31);
            if (succeeded)
            {
              DirectArgMapEntry_31 = ((MR_Word) conv0_DirectArgMapEntry_31);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              AssertedDirectArgFunctors_32 = DirectArgMapEntry_31;
            else
              AssertedDirectArgFunctors_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_15, &TypeStatus_33);
            TypeIsImported_34 = hlds__status__type_status_is_imported_1_f_0(TypeStatus_33);
            TypeDefinedHere_35 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_33);
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ComponentTypeMap_13));
              MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (TypeCtorModuleName_29));
              MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (TypeStatus_33));
              MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (TypeIsImported_34));
              MR_hl_field(MR_mktag(0), Var_52, 7) = ((MR_Box) (TypeDefinedHere_35));
              MR_hl_field(MR_mktag(0), Var_52, 8) = ((MR_Box) (AssertedDirectArgFunctors_32));
            }
            TypeCtorInfo_93_93 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            mercury__list__filter_4_p_0(TypeCtorInfo_93_93, Var_52, Functors_25, &DirectArgFunctors_36, &NonDirectArgFunctors_37);
            hlds__du_type_layout__check_direct_arg_assertions_4_p_0(AssertedDirectArgFunctors_32, NonDirectArgFunctors_37, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
            DirectArgFunctorNames_22 = mercury__list__map_2_f_0(TypeCtorInfo_93_93, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__du_type_layout_scalar_common_2[9], DirectArgFunctors_36);
          }
          break;
      }
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, &STATE_VARIABLE_CtorTagMap_56_56);
      if ((Constants_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        STATE_VARIABLE_CtorTagMap_57_57 = STATE_VARIABLE_CtorTagMap_56_56;
        STATE_VARIABLE_CurPtag_58_58 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Ctor_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_24, (MR_Integer) 0)));
        MR_Word Ctors_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_24, (MR_Integer) 1)));
        MR_Word SymName_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_118, (MR_Integer) 1)));
        MR_Integer Arity_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_118, (MR_Integer) 3)));
        MR_Word ConsId_126;
        MR_Word STATE_VARIABLE_CtorTagMap_28_130;
        MR_Word _MaybeExistConstraints_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_118, (MR_Integer) 0)));
        MR_Word _Args_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_118, (MR_Integer) 2)));
        MR_Word _Context_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_118, (MR_Integer) 4)));

        {
          ConsId_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_126, 1) = ((MR_Box) (SymName_122));
          MR_hl_field(MR_mktag(3), ConsId_126, 2) = ((MR_Box) (Arity_124));
          MR_hl_field(MR_mktag(3), ConsId_126, 3) = ((MR_Box) (TypeCtor_14));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_126)), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_2[10]))), STATE_VARIABLE_CtorTagMap_56_56, &STATE_VARIABLE_CtorTagMap_28_130);
        hlds__du_type_layout__assign_tags_to_constants_6_p_0(TypeCtor_14, (MR_Integer) 0, ((MR_Integer) 0 + (MR_Integer) 1), Ctors_119, STATE_VARIABLE_CtorTagMap_28_130, &STATE_VARIABLE_CtorTagMap_57_57);
        STATE_VARIABLE_CurPtag_58_58 = ((MR_Integer) 0 + (MR_Integer) 1);
      }
      hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(TypeCtor_14, MaxPtag_23, STATE_VARIABLE_CurPtag_58_58, &STATE_VARIABLE_CurPtag_60_60, DirectArgFunctors_36, NonDirectArgFunctors_37, &LeftOverDirectArgFunctors_43, STATE_VARIABLE_CtorTagMap_57_57, &STATE_VARIABLE_CtorTagMap_61_61);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, LeftOverDirectArgFunctors_43, NonDirectArgFunctors_37);
      hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_6_p_0(TypeCtor_14, MaxPtag_23, STATE_VARIABLE_CurPtag_60_60, Var_62, STATE_VARIABLE_CtorTagMap_61_61, &CtorTagMap_21);
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (Params_12));
      MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (ComponentTypeMap_13));
      MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (TypeCtor_14));
      MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (CtorTagMap_21));
    }
    Var_68 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7]);
    mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0, (MR_Word) &hlds__du_type_layout_scalar_common_2[4], Var_67, Ctors_16, &CtorRepns_44, ((MR_Box) (Var_68)), &conv4_CtorRepnMap_45);
    CtorRepnMap_45 = ((MR_Word) conv4_CtorRepnMap_45);
    hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(TypeCtor_14, CtorRepns_44, &CheaperTagTest_46);
    if ((DirectArgFunctorNames_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeDirectArgFunctorNames_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MaybeDirectArgFunctorNames_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDirectArgFunctorNames_47, 0) = ((MR_Box) (DirectArgFunctorNames_22));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Repn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CtorTagMap_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepns_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorRepnMap_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CheaperTagTest_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDirectArgFunctorNames_47));
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Ctor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Ctors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Constants0_8;
      MR_Word Functors0_9;
      MR_Word Args_10;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Word Var_15;
      MR_Word Var_11;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Integer Var_18;
      MR_Word Var_19;

      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_5, &Constants0_8, &Functors0_9);
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1)));
      Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 2)));
      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 4)));
      succeeded = (Args_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 0)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 2)));
        Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 4)));
        succeeded = (Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constants0_8));
        }
        *HeadVar__3_3 = Functors0_9;
      }
      else
      {
        *HeadVar__2_2 = Constants0_8;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Functors0_9));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepns_5,
  MR_Word * CheaperTagTest_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) CtorRepns_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word CtorRepnA_7;
    MR_Word CtorRepnB_8;
    MR_Word Var_23;
    MR_Word Var_24;

    if (succeeded)
    {
      CtorRepnA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 0)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CtorRepnB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word CtorSymNameA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 1)));
      MR_Word CtorTagA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 2)));
      MR_Integer CtorArityA_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 4)));
      MR_Word CtorSymNameB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 1)));
      MR_Word CtorTagB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 2)));
      MR_Integer CtorArityB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 4)));
      MR_Word _MaybeExistA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 0)));
      MR_Word _CtorArgsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 3)));
      MR_Word _CtorContextA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 5)));
      MR_Word _MaybeExistB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 0)));
      MR_Word _CtorArgsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 3)));
      MR_Word _CtorContextB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 5)));
      MR_Integer Var_25;

      succeeded = (CtorArityB_19 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 0;
        succeeded = (CtorArityA_13 > Var_25);
      }
      if (succeeded)
      {
        MR_Word ConsIdA_21;
        MR_Word ConsIdB_22;

        {
          ConsIdA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsIdA_21, 1) = ((MR_Box) (CtorSymNameA_10));
          MR_hl_field(MR_mktag(3), ConsIdA_21, 2) = ((MR_Box) (CtorArityA_13));
          MR_hl_field(MR_mktag(3), ConsIdA_21, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          ConsIdB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsIdB_22, 1) = ((MR_Box) (CtorSymNameB_16));
          MR_hl_field(MR_mktag(3), ConsIdB_22, 2) = ((MR_Box) (CtorArityB_19));
          MR_hl_field(MR_mktag(3), ConsIdB_22, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CheaperTagTest_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdA_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorTagA_11));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdB_22));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (CtorTagB_17));
        }
      }
      else
      {
        MR_Integer Var_26;

        succeeded = (CtorArityA_13 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 0;
          succeeded = (CtorArityB_19 > Var_26);
        }
        if (succeeded)
        {
          MR_Word ConsIdA_27;
          MR_Word ConsIdB_28;

          {
            ConsIdA_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdA_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsIdA_27, 1) = ((MR_Box) (CtorSymNameA_10));
            MR_hl_field(MR_mktag(3), ConsIdA_27, 2) = ((MR_Box) (CtorArityA_13));
            MR_hl_field(MR_mktag(3), ConsIdA_27, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            ConsIdB_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdB_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsIdB_28, 1) = ((MR_Box) (CtorSymNameB_16));
            MR_hl_field(MR_mktag(3), ConsIdB_28, 2) = ((MR_Box) (CtorArityB_19));
            MR_hl_field(MR_mktag(3), ConsIdB_28, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *CheaperTagTest_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdB_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorTagB_17));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdA_27));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (CtorTagA_11));
          }
        }
        else
          *CheaperTagTest_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      *CheaperTagTest_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
hlds__du_type_layout__check_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1)));
      MR_Integer Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3)));
      MR_Word Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4)));
      MR_Word SymNameArity_18;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 0)));
      MR_Word _Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      {
        SymNameArity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SymNameArity_18, 0) = ((MR_Box) (SymName_14));
        MR_hl_field(MR_mktag(0), SymNameArity_18, 1) = ((MR_Box) (Arity_16));
      }
      succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, HeadVar__1_1, ((MR_Box) (SymNameArity_18)));
      if (succeeded)
      {
        MR_Word Pieces_19;
        MR_Word Msg_20;
        MR_Word Spec_21;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_43;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (SymNameArity_18));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[41])));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_17));
          MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_43));
        }
        {
          STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_3));
        }
      }
      else
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_3;
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ctors_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_45_45;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer MaxPtag_2,
  MR_Integer STATE_VARIABLE_CurPtag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTagMap_6 = STATE_VARIABLE_CtorTagMap_0_5;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Word _Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Word Var_25;
      MR_Word Var_26;

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (Name_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (STATE_VARIABLE_CurPtag_0_3 == MaxPtag_2);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Ctors_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 0)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        MR_Word Ctor_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        MR_Word Ctors_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        MR_Word SymName_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_50, (MR_Integer) 1)));
        MR_Integer Arity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_50, (MR_Integer) 3)));
        MR_Word ConsId_58;
        MR_Word Tag_59;
        MR_Word STATE_VARIABLE_CtorTagMap_29_63;
        MR_Word _MaybeExistConstraints_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_50, (MR_Integer) 0)));
        MR_Word _Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_50, (MR_Integer) 2)));
        MR_Word _Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_50, (MR_Integer) 4)));

        {
          ConsId_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_58, 1) = ((MR_Box) (SymName_54));
          MR_hl_field(MR_mktag(3), ConsId_58, 2) = ((MR_Box) (Arity_56));
          MR_hl_field(MR_mktag(3), ConsId_58, 3) = ((MR_Box) (TypeCtor_1));
        }
        {
          Tag_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
          MR_hl_field(MR_mktag(3), Tag_59, 1) = ((MR_Box) (STATE_VARIABLE_CurPtag_0_3));
          MR_hl_field(MR_mktag(3), Tag_59, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_58)), ((MR_Box) (Tag_59)), STATE_VARIABLE_CtorTagMap_0_5, &STATE_VARIABLE_CtorTagMap_29_63);
        hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_6_p_0(TypeCtor_1, STATE_VARIABLE_CurPtag_0_3, ((MR_Integer) 0 + (MR_Integer) 1), Ctors_51, STATE_VARIABLE_CtorTagMap_29_63, STATE_VARIABLE_CtorTagMap_6);
      }
      else
      {
        MR_Word Tag_27;
        MR_Word STATE_VARIABLE_CtorTagMap_34_34;
        MR_Integer STATE_VARIABLE_CurPtag_35_38;
        MR_Integer next_value_of_STATE_VARIABLE_CurPtag_0_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_5;

        {
          Tag_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Tag_27, 1) = ((MR_Box) (STATE_VARIABLE_CurPtag_0_3));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_27)), STATE_VARIABLE_CtorTagMap_0_5, &STATE_VARIABLE_CtorTagMap_34_34);
        STATE_VARIABLE_CurPtag_35_38 = (STATE_VARIABLE_CurPtag_0_3 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_STATE_VARIABLE_CurPtag_0_3 = STATE_VARIABLE_CurPtag_35_38;
        next_value_of_HeadVar__4_4 = Ctors_17;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_5 = STATE_VARIABLE_CtorTagMap_34_34;
        STATE_VARIABLE_CurPtag_0_3 = next_value_of_STATE_VARIABLE_CurPtag_0_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_CtorTagMap_0_5 = next_value_of_STATE_VARIABLE_CtorTagMap_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Ptag_2,
  MR_Integer STATE_VARIABLE_CurSecTag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTagMap_6 = STATE_VARIABLE_CtorTagMap_0_5;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word Tag_25;
      MR_Word STATE_VARIABLE_CtorTagMap_29_29;
      MR_Integer STATE_VARIABLE_CurSecTag_30_30;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Word _Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Integer next_value_of_STATE_VARIABLE_CurSecTag_0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_5;

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Tag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Tag_25, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), Tag_25, 2) = ((MR_Box) (STATE_VARIABLE_CurSecTag_0_3));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_25)), STATE_VARIABLE_CtorTagMap_0_5, &STATE_VARIABLE_CtorTagMap_29_29);
      STATE_VARIABLE_CurSecTag_30_30 = (STATE_VARIABLE_CurSecTag_0_3 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_STATE_VARIABLE_CurSecTag_0_3 = STATE_VARIABLE_CurSecTag_30_30;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_5 = STATE_VARIABLE_CtorTagMap_29_29;
      STATE_VARIABLE_CurSecTag_0_3 = next_value_of_STATE_VARIABLE_CurSecTag_0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_CtorTagMap_0_5 = next_value_of_STATE_VARIABLE_CtorTagMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  MR_Integer MaxPtag_2,
  MR_Integer STATE_VARIABLE_CurPtag_0_3,
  MR_Integer * STATE_VARIABLE_CurPtag_4,
  MR_Word HeadVar__5_5,
  MR_Word NonDirectArgCtors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTagMap_0_8,
  MR_Word * STATE_VARIABLE_CtorTagMap_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CtorTagMap_9 = STATE_VARIABLE_CtorTagMap_0_8;
      *STATE_VARIABLE_CurPtag_4 = STATE_VARIABLE_CurPtag_0_3;
    }
    else
    {
      MR_Word DirectArgCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word DirectArgCtors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word Name_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 1)));
      MR_Integer Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 3)));
      MR_Word ConsId_32;
      MR_Word _MaybeExistConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 0)));
      MR_Word _Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 2)));
      MR_Word _Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 4)));

      {
        ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_32, 1) = ((MR_Box) (Name_28));
        MR_hl_field(MR_mktag(3), ConsId_32, 2) = ((MR_Box) (Arity_30));
        MR_hl_field(MR_mktag(3), ConsId_32, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (STATE_VARIABLE_CurPtag_0_3 == MaxPtag_2);
      if (succeeded)
      {
        {
          MR_Word Var_33;
          MR_Word Var_34;

          succeeded = ((MR_tag((MR_Word) DirectArgCtors_23)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), DirectArgCtors_23, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), DirectArgCtors_23, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_35;
          MR_Word Var_36;

          succeeded = ((MR_tag((MR_Word) NonDirectArgCtors_6)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonDirectArgCtors_6, (MR_Integer) 0)));
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonDirectArgCtors_6, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__7_7 = HeadVar__5_5;
        *STATE_VARIABLE_CtorTagMap_9 = STATE_VARIABLE_CtorTagMap_0_8;
        *STATE_VARIABLE_CurPtag_4 = STATE_VARIABLE_CurPtag_0_3;
      }
      else
      {
        MR_Word Tag_37;
        MR_Word STATE_VARIABLE_CtorTagMap_42_42;
        MR_Integer STATE_VARIABLE_CurPtag_43_43;
        MR_Integer next_value_of_STATE_VARIABLE_CurPtag_0_3;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_8;

        {
          Tag_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Tag_37, 1) = ((MR_Box) (STATE_VARIABLE_CurPtag_0_3));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_32)), ((MR_Box) (Tag_37)), STATE_VARIABLE_CtorTagMap_0_8, &STATE_VARIABLE_CtorTagMap_42_42);
        STATE_VARIABLE_CurPtag_43_43 = (STATE_VARIABLE_CurPtag_0_3 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_STATE_VARIABLE_CurPtag_0_3 = STATE_VARIABLE_CurPtag_43_43;
        next_value_of_HeadVar__5_5 = DirectArgCtors_23;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_8 = STATE_VARIABLE_CtorTagMap_42_42;
        STATE_VARIABLE_CurPtag_0_3 = next_value_of_STATE_VARIABLE_CurPtag_0_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_CtorTagMap_0_8 = next_value_of_STATE_VARIABLE_CtorTagMap_0_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_constants_6_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Ptag_2,
  MR_Integer CurSecTag_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTagMap_6 = STATE_VARIABLE_CtorTagMap_0_5;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word Tag_25;
      MR_Word STATE_VARIABLE_CtorTagMap_28_28;
      MR_Integer Var_29;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Word _Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Integer next_value_of_CurSecTag_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_5;

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Tag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Tag_25, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), Tag_25, 2) = ((MR_Box) (CurSecTag_3));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_25)), STATE_VARIABLE_CtorTagMap_0_5, &STATE_VARIABLE_CtorTagMap_28_28);
      Var_29 = (CurSecTag_3 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_CurSecTag_3 = Var_29;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_5 = STATE_VARIABLE_CtorTagMap_28_28;
      CurSecTag_3 = next_value_of_CurSecTag_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_CtorTagMap_0_5 = next_value_of_STATE_VARIABLE_CtorTagMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word TypeCtor_12,
  MR_Word SingleCtor_13,
  MR_Word * Repn_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 0)));
    MR_Word SingleCtorSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 1)));
    MR_Word SingleCtorArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 2)));
    MR_Integer SingleCtorArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 3)));
    MR_Word SingleCtorContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 4)));
    MR_Word SingleCtorTag_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word SingleCtorArgRepns_22;
    MR_Word SingleCtorRepn_23;
    MR_Word SingleConsId_24;
    MR_Word ConsIdToTagMap_25;
    MR_Word CtorRepnMap_26;
    MR_String Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word CtorArgRepnsBase_46;
    MR_Word CtorArgRepnsPacked_47;
    MR_Word Var_49;
    MR_Integer UnpackedLength_57;
    MR_Integer PackedLength_58;
    MR_Word Var_61;

    Var_49 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
    hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_9, Params_10, Var_49, (MR_Integer) 0, SingleCtorArgs_18, &CtorArgRepnsBase_46);
    hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_9, Params_10, ComponentTypeMap_11, (MR_Integer) 0, SingleCtorArgs_18, &CtorArgRepnsPacked_47);
    hlds__du_type_layout__count_words_3_p_0(CtorArgRepnsBase_46, (MR_Integer) 0, &UnpackedLength_57);
    hlds__du_type_layout__count_words_3_p_0(CtorArgRepnsPacked_47, (MR_Integer) 0, &PackedLength_58);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (PackedLength_58));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (UnpackedLength_57));
    }
    mercury__require__expect_3_p_0(Var_61, (MR_String) "function \140hlds.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
    succeeded = (PackedLength_58 < UnpackedLength_57);
    if (succeeded)
    {
      MR_Integer Var_64;
      MR_Integer Var_65;

      succeeded = mercury__int__even_1_p_0(PackedLength_58);
      if (succeeded)
        Var_64 = PackedLength_58;
      else
      {
        Var_64 = (PackedLength_58 + (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_57);
      if (succeeded)
        Var_65 = UnpackedLength_57;
      else
      {
        Var_65 = (UnpackedLength_57 + (MR_Integer) 1);
      }
      succeeded = (Var_64 < Var_65);
      if (succeeded)
        SingleCtorArgRepns_22 = CtorArgRepnsPacked_47;
      else
        SingleCtorArgRepns_22 = CtorArgRepnsBase_46;
    }
    else
      SingleCtorArgRepns_22 = CtorArgRepnsBase_46;
    {
      SingleCtorRepn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 0) = ((MR_Box) (MaybeExistConstraints_16));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 1) = ((MR_Box) (SingleCtorSymName_17));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 2) = ((MR_Box) (SingleCtorTag_21));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 3) = ((MR_Box) (SingleCtorArgRepns_22));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 4) = ((MR_Box) (SingleCtorArity_19));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_23, 5) = ((MR_Box) (SingleCtorContext_20));
    }
    {
      SingleConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SingleConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), SingleConsId_24, 1) = ((MR_Box) (SingleCtorSymName_17));
      MR_hl_field(MR_mktag(3), SingleConsId_24, 2) = ((MR_Box) (SingleCtorArity_19));
      MR_hl_field(MR_mktag(3), SingleConsId_24, 3) = ((MR_Box) (TypeCtor_12));
    }
    ConsIdToTagMap_25 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (SingleConsId_24)), ((MR_Box) (SingleCtorTag_21)));
    Var_31 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_17);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SingleCtorRepn_23));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    CtorRepnMap_26 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7], ((MR_Box) (Var_31)), ((MR_Box) (Var_32)));
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (SingleCtorRepn_23));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Repn_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsIdToTagMap_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorRepnMap_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
}

static void MR_CALL 
hlds__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Count_3 = STATE_VARIABLE_Count_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 2)));
      MR_Integer STATE_VARIABLE_Count_20_20;
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 3)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Count_0_2;

      switch (MR_tag((MR_Word) ArgWidth_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgWidth_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Count_20_20 = STATE_VARIABLE_Count_0_2;
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_Count_0_2 = STATE_VARIABLE_Count_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Count_0_2 = next_value_of_STATE_VARIABLE_Count_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurShift_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word ArgRepn_17;
      MR_Word ArgRepns_18;
      MR_Word ArgName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 0)));
      MR_Word ArgType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 1)));
      MR_Word ArgContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 2)));
      MR_Word Var_38;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Integer Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(ModuleInfo_1, ArgType_20);
      if (succeeded)
      {
        Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) & (MR_Integer) 3);
        Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 1)));
        Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 3)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 4)));
        succeeded = (Var_38 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        {
          ArgRepn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgRepn_17, 0) = ((MR_Box) (ArgName_19));
          MR_hl_field(MR_mktag(0), ArgRepn_17, 1) = ((MR_Box) (ArgType_20));
          MR_hl_field(MR_mktag(0), ArgRepn_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), ArgRepn_17, 3) = ((MR_Box) (ArgContext_21));
        }
        hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, (MR_Integer) 0, Args_16, &ArgRepns_18);
      }
      else
      {
        MR_Integer NumArgBits_25;
        MR_Integer TargetWordBits_27;
        MR_Word TypeCtorInfo_65_65;
        MR_Word TypeCtorInfo_66_66;
        MR_Word ArgTypeCtor_23;
        MR_Word ComponentKind_24;
        MR_Integer Var_40;
        MR_Box conv0_ComponentKind_24;
        MR_Word _FillKind_26;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;

        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType_20, &ArgTypeCtor_23);
        if (succeeded)
        {
          TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
          TypeCtorInfo_66_66 = (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0;
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_65_65, TypeCtorInfo_66_66, ComponentTypeMap_3, ((MR_Box) (ArgTypeCtor_23)), &conv0_ComponentKind_24);
          if (succeeded)
          {
            ComponentKind_24 = ((MR_Word) conv0_ComponentKind_24);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ComponentKind_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              NumArgBits_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ComponentKind_24, (MR_Integer) 0)));
              _FillKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ComponentKind_24, (MR_Integer) 1)));
              Var_40 = (MR_Integer) 0;
              succeeded = (NumArgBits_25 > Var_40);
              if (succeeded)
              {
                Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) & (MR_Integer) 3);
                Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 1)));
                TargetWordBits_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2)));
                Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 3)));
                Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 4)));
                succeeded = (NumArgBits_25 < TargetWordBits_27);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Integer ArgMask_28;
          MR_Word ArgWidth_35;
          MR_Integer Var_41;
          MR_Integer Var_44;

          Var_41 = mercury__int__pow_2_f_0((MR_Integer) 2, NumArgBits_25);
          ArgMask_28 = (Var_41 - (MR_Integer) 1);
          Var_44 = (CurShift_4 + NumArgBits_25);
          succeeded = (Var_44 <= TargetWordBits_27);
          if (succeeded)
          {
            succeeded = (CurShift_4 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word ArgWidth0_29;
              MR_Integer NextShift_47;
              MR_Word NextArgRepn_31;
              MR_Word Var_45;
              MR_Word Var_32;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Integer Var_33;
              MR_Integer Var_34;

              {
                ArgWidth0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgWidth0_29, 0) = ((MR_Box) (ArgMask_28));
              }
              NextShift_47 = (CurShift_4 + NumArgBits_25);
              hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextShift_47, Args_16, &ArgRepns_18);
              succeeded = ((MR_tag((MR_Word) ArgRepns_18)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                NextArgRepn_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRepns_18, (MR_Integer) 0)));
                Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRepns_18, (MR_Integer) 1)));
                Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_31, (MR_Integer) 0)));
                Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_31, (MR_Integer) 1)));
                Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_31, (MR_Integer) 2)));
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_31, (MR_Integer) 3)));
                succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_45, (MR_Integer) 0)));
                  Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_45, (MR_Integer) 1)));
                }
              }
              if (succeeded)
                ArgWidth_35 = ArgWidth0_29;
              else
                ArgWidth_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            else
            {
              MR_Integer NextShift_100;

              {
                ArgWidth_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgWidth_35, 0) = ((MR_Box) (CurShift_4));
                MR_hl_field(MR_mktag(2), ArgWidth_35, 1) = ((MR_Box) (ArgMask_28));
              }
              NextShift_100 = (CurShift_4 + NumArgBits_25);
              hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextShift_100, Args_16, &ArgRepns_18);
            }
          }
          else
          {
            MR_Word ArgWidth0_89;
            MR_Word NextArgRepn_73;
            MR_Word Var_77;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Integer Var_71;
            MR_Integer Var_72;

            {
              ArgWidth0_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgWidth0_89, 0) = ((MR_Box) (ArgMask_28));
            }
            hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NumArgBits_25, Args_16, &ArgRepns_18);
            succeeded = ((MR_tag((MR_Word) ArgRepns_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              NextArgRepn_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRepns_18, (MR_Integer) 0)));
              Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRepns_18, (MR_Integer) 1)));
              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_73, (MR_Integer) 0)));
              Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_73, (MR_Integer) 1)));
              Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_73, (MR_Integer) 2)));
              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArgRepn_73, (MR_Integer) 3)));
              succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_77, (MR_Integer) 0)));
                Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_77, (MR_Integer) 1)));
              }
            }
            if (succeeded)
              ArgWidth_35 = ArgWidth0_89;
            else
              ArgWidth_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          {
            ArgRepn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgRepn_17, 0) = ((MR_Box) (ArgName_19));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 1) = ((MR_Box) (ArgType_20));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 2) = ((MR_Box) (ArgWidth_35));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 3) = ((MR_Box) (ArgContext_21));
          }
        }
        else
        {
          {
            ArgRepn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgRepn_17, 0) = ((MR_Box) (ArgName_19));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 1) = ((MR_Box) (ArgType_20));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ArgRepn_17, 3) = ((MR_Box) (ArgContext_21));
          }
          hlds__du_type_layout__decide_complex_du_ctor_args_loop_6_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, (MR_Integer) 0, Args_16, &ArgRepns_18);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_18));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__359__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__358__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word TypeCtorToForeignEnumMap_16,
  MR_Word TypeCtorTypeDefn0_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_43,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_44,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_45,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_46,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_17, (MR_Integer) 0)));
    MR_Word TypeDefn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_17, (MR_Integer) 1)));
    MR_Word Body0_25;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_24, &Body0_25);
    switch (MR_tag((MR_Word) Body0_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignType_38 = (MR_Word) MR_body(((MR_Word) Body0_25), (MR_Integer) 0);

          hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(ModuleInfo_14, Params_15, TypeCtor_23, ForeignType_38, STATE_VARIABLE_ComponentTypeMap_0_44, STATE_VARIABLE_ComponentTypeMap_45, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
          *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
          *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 0)));
          MR_Word MaybeCanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 1)));
          MR_Word MaybeRepn0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 2)));
          MR_Word MaybeForeign_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 3)));
          MR_Word Var_53;
          MR_Word Var_57;
          MR_Tuple ForeignEnumTagMap_33;
          MR_Word TCFE_30;
          MR_Word MaybeForeignEnumTagMap_32;
          MR_Box conv0_TCFE_30;
          MR_Word _LangContextMap_31;

          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[3]));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (MaybeRepn0_28));
            MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140hlds.du_type_layout.decide_if_simple_du_type\'/13", (MR_String) "MaybeRepn0 != no");
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[4]));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Ctors_26));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_not_3_p_0(Var_57, (MR_String) "predicate \140hlds.du_type_layout.decide_if_simple_du_type\'/13", (MR_String) "Ctors != []");
          succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0, TypeCtorToForeignEnumMap_16, ((MR_Box) (TypeCtor_23)), &conv0_TCFE_30);
          if (succeeded)
          {
            TCFE_30 = ((MR_Word) conv0_TCFE_30);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            _LangContextMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE_30, (MR_Integer) 0)));
            MaybeForeignEnumTagMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE_30, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) MaybeForeignEnumTagMap_32)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              ForeignEnumTagMap_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeForeignEnumTagMap_32, (MR_Integer) 0)));
          }
          if (succeeded)
          {
            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, Ctors_26, ForeignEnumTagMap_33, TypeCtorTypeDefn_18, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
            *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
            *STATE_VARIABLE_ComponentTypeMap_45 = STATE_VARIABLE_ComponentTypeMap_0_44;
            *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
          }
          else
          {
            succeeded = hlds__du_type_layout__ctors_are_all_constants_1_p_0(Ctors_26);
            if (succeeded)
            {
              hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, Ctors_26, TypeCtorTypeDefn_18, STATE_VARIABLE_ComponentTypeMap_0_44, STATE_VARIABLE_ComponentTypeMap_45, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
              *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
            }
            else
            {
              MR_Word SingleCtor_34;
              MR_Word Var_64;

              succeeded = ((MR_tag((MR_Word) Ctors_26)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                SingleCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_26, (MR_Integer) 0)));
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_26, (MR_Integer) 1)));
                succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word SingleCtorSymName_35;
                MR_Word SingleArg_36;
                MR_Word SingleCtorContext_37;
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Integer Var_68;
                MR_Word Var_69;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Integer Var_77;
                MR_Word Var_78;
                MR_Word Var_79;

                succeeded = (MaybeCanonical_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 0)));
                  SingleCtorSymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 1)));
                  Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 2)));
                  Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 3)));
                  SingleCtorContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 4)));
                  succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    succeeded = (Var_68 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        SingleArg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0)));
                        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1)));
                        succeeded = (Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          Var_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) & (MR_Integer) 3);
                          Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          Var_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1)));
                          Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2)));
                          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
                          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4)));
                          succeeded = (Var_69 == (MR_Integer) 1);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, SingleCtorSymName_35, SingleArg_36, SingleCtorContext_37, TypeCtorTypeDefn_18, STATE_VARIABLE_NoTagTypeMap_0_46, STATE_VARIABLE_NoTagTypeMap_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
                  *STATE_VARIABLE_ComponentTypeMap_45 = STATE_VARIABLE_ComponentTypeMap_0_44;
                  *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
                }
                else
                {
                  hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(Params_15, TypeCtor_23, TypeDefn0_24, MaybeForeign_29, STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42, STATE_VARIABLE_MustBeSingleFunctorTagTypes_43, STATE_VARIABLE_ComponentTypeMap_0_44, STATE_VARIABLE_ComponentTypeMap_45);
                  *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
                  *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
                  *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
                }
              }
              else
              {
                *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
                *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
                *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
                *STATE_VARIABLE_ComponentTypeMap_45 = STATE_VARIABLE_ComponentTypeMap_0_44;
                *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
          *STATE_VARIABLE_ComponentTypeMap_45 = STATE_VARIABLE_ComponentTypeMap_0_44;
          *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
          *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_25, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
              *STATE_VARIABLE_ComponentTypeMap_45 = STATE_VARIABLE_ComponentTypeMap_0_44;
              *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
              *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractDetails_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Body0_25, (MR_Integer) 1)));

              hlds__du_type_layout__add_abstract_if_fits_in_n_bits_4_p_0(TypeCtor_23, AbstractDetails_39, STATE_VARIABLE_ComponentTypeMap_0_44, STATE_VARIABLE_ComponentTypeMap_45);
              *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_43 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_42;
              *STATE_VARIABLE_NoTagTypeMap_47 = STATE_VARIABLE_NoTagTypeMap_0_46;
              *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(
  MR_Word Params_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Body0_18,
  MR_Word SingleCtorSymName_19,
  MR_Word SingleArg_20,
  MR_Word SingleCtorContext_21,
  MR_Word * TypeCtorTypeDefn_22,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_50,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSingleArgFieldName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 0)));
    MR_Word SingleArgType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 1)));
    MR_Word SingleArgContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 2)));
    MR_Word SingleArgRepn_29;
    MR_Word SingleCtorRepn_30;
    MR_Word CtorRepnMap_31;
    MR_Word SingleConsId_32;
    MR_Word ConsIdToTagMap_33;
    MR_Word MaybeSingleArgName_35;
    MR_Word DuTypeKind_38;
    MR_Word DirectArgMap_39;
    MR_Word Repn_45;
    MR_Word Body_46;
    MR_Word TypeDefn_47;
    MR_Word TypeParams_48;
    MR_Word NoTagType_49;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Word Var_95;
    MR_Word _DirectArgFunctors_40;
    MR_Box conv0__DirectArgFunctors_40;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_98;

    {
      SingleArgRepn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 0) = ((MR_Box) (MaybeSingleArgFieldName_26));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 3) = ((MR_Box) (SingleArgContext_28));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (SingleArgRepn_29));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      SingleCtorRepn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 1) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 3) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 5) = ((MR_Box) (SingleCtorContext_21));
    }
    Var_59 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7]);
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(SingleCtorRepn_30, Var_59, &CtorRepnMap_31);
    {
      SingleConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SingleConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), SingleConsId_32, 1) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(3), SingleConsId_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SingleConsId_32, 3) = ((MR_Box) (TypeCtor_16));
    }
    ConsIdToTagMap_33 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (SingleConsId_32)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    if ((MaybeSingleArgFieldName_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeSingleArgName_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word SingleArgSymName_36;
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSingleArgFieldName_26, (MR_Integer) 0)));
      MR_String Var_63;
      MR_Word _FieldContext_37;

      SingleArgSymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0)));
      _FieldContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1)));
      Var_63 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleArgSymName_36);
      {
        MaybeSingleArgName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeSingleArgName_35, 0) = ((MR_Box) (Var_63));
      }
    }
    {
      DuTypeKind_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), DuTypeKind_38, 0) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(2), DuTypeKind_38, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(2), DuTypeKind_38, 2) = ((MR_Box) (MaybeSingleArgName_35));
    }
    Var_90 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) & (MR_Integer) 3);
    Var_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1)));
    Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
    DirectArgMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[6], DirectArgMap_39, ((MR_Box) (TypeCtor_16)), &conv0__DirectArgFunctors_40);
    if (succeeded)
    {
      _DirectArgFunctors_40 = ((MR_Word) conv0__DirectArgFunctors_40);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Pieces_41;
      MR_Word Msg_42;
      MR_Word Spec_43;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_83;

      Var_67 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_16);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[33])));
      }
      {
        Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_66));
      }
      Var_77 = mercury__term__context_init_0_f_0();
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Pieces_41));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_42, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), Msg_42, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Msg_42));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_43, 2) = ((MR_Box) (Var_83));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_53 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_52));
      }
    }
    else
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (SingleCtorRepn_30));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Repn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_45, 0) = ((MR_Box) (ConsIdToTagMap_33));
      MR_hl_field(MR_mktag(0), Repn_45, 1) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Repn_45, 2) = ((MR_Box) (CtorRepnMap_31));
      MR_hl_field(MR_mktag(0), Repn_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Repn_45, 4) = ((MR_Box) (DuTypeKind_38));
      MR_hl_field(MR_mktag(0), Repn_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Repn_45));
    }
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 0)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 1)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 2)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 3)));
    {
      Body_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_46, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Body_46, 1) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(1), Body_46, 2) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Body_46, 3) = ((MR_Box) (Var_99));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_46, TypeDefn0_17, &TypeDefn_47);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_47));
    }
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn0_17, &TypeParams_48);
    {
      NoTagType_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NoTagType_49, 0) = ((MR_Box) (TypeParams_48));
      MR_hl_field(MR_mktag(0), NoTagType_49, 1) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(0), NoTagType_49, 2) = ((MR_Box) (SingleArgType_27));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (TypeCtor_16)), ((MR_Box) (NoTagType_49)), STATE_VARIABLE_NoTagTypeMap_0_50, STATE_VARIABLE_NoTagTypeMap_51);
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(
  MR_Word Params_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Body0_16,
  MR_Word Ctors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_50,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;
    MR_Word DuTypeKind_22;
    MR_Integer NumBits_23;
    MR_Word CtorRepns_31;
    MR_Word ConsIdToTagMap_33;
    MR_Word CtorRepnMap_34;
    MR_Word DirectArgMap_39;
    MR_Word Repn_46;
    MR_Word Body_47;
    MR_Word TypeDefn_48;
    MR_Word ComponentKind_49;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Integer Var_98;
    MR_Word Var_99;
    MR_Word _DirectArgFunctors_40;
    MR_Box conv0__DirectArgFunctors_40;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_102;

    if ((Ctors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_simple_type_dummy_or_mercury_enum\'/11", (MR_String) "no constant constructors");
        return;
      }
    }
    else
    {
      MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 1)));
      MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 0)));

      if ((Var_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeCtorInfo_104_104;
        MR_Word TypeCtorInfo_105_105;
        MR_Word SingleCtorSymName_25;
        MR_Integer SingleCtorArity_27;
        MR_Word SingleCtorContext_28;
        MR_Word SingleCtorTag_29;
        MR_Word SingleCtorRepn_30;
        MR_Word SingleCtorConsId_32;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word _MaybeExistConstraints_24;
        MR_Word _Args_26;

        DuTypeKind_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        NumBits_23 = (MR_Integer) 0;
        _MaybeExistConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 0)));
        SingleCtorSymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 1)));
        _Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 2)));
        SingleCtorArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 3)));
        SingleCtorContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 4)));
        SingleCtorTag_29 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[45]);
        {
          SingleCtorRepn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 1) = ((MR_Box) (SingleCtorSymName_25));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 2) = ((MR_Box) (SingleCtorTag_29));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 4) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 5) = ((MR_Box) (SingleCtorContext_28));
        }
        {
          CtorRepns_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CtorRepns_31, 0) = ((MR_Box) (SingleCtorRepn_30));
          MR_hl_field(MR_mktag(1), CtorRepns_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          SingleCtorConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SingleCtorConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), SingleCtorConsId_32, 1) = ((MR_Box) (SingleCtorSymName_25));
          MR_hl_field(MR_mktag(3), SingleCtorConsId_32, 2) = ((MR_Box) (SingleCtorArity_27));
          MR_hl_field(MR_mktag(3), SingleCtorConsId_32, 3) = ((MR_Box) (TypeCtor_14));
        }
        TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
        Var_65 = mercury__map__init_0_f_0(TypeCtorInfo_104_104, TypeCtorInfo_105_105);
        mercury__map__det_insert_4_p_0(TypeCtorInfo_104_104, TypeCtorInfo_105_105, ((MR_Box) (SingleCtorConsId_32)), ((MR_Box) (SingleCtorTag_29)), Var_65, &ConsIdToTagMap_33);
        Var_66 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7]);
        hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(SingleCtorRepn_30, Var_66, &CtorRepnMap_34);
      }
      else
      {
        MR_Integer NextTag_38;
        MR_Word Var_56;
        MR_Word Var_57;

        DuTypeKind_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_56 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0);
        Var_57 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7]);
        hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0(TypeCtor_14, Ctors_17, &CtorRepns_31, (MR_Integer) 0, &NextTag_38, Var_56, &ConsIdToTagMap_33, Var_57, &CtorRepnMap_34);
        mercury__int__log2_2_p_0(NextTag_38, &NumBits_23);
      }
    }
    Var_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0)))) & (MR_Integer) 3);
    Var_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 1)));
    Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 2)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)));
    DirectArgMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 4)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[6], DirectArgMap_39, ((MR_Box) (TypeCtor_14)), &conv0__DirectArgFunctors_40);
    if (succeeded)
    {
      _DirectArgFunctors_40 = ((MR_Word) conv0__DirectArgFunctors_40);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Pieces_41;
      MR_Word Msg_42;
      MR_Word Spec_43;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_88;

      Var_72 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_14);
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[31])));
      }
      {
        Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_71));
      }
      Var_82 = mercury__term__context_init_0_f_0();
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Pieces_41));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_42, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), Msg_42, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Msg_42));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_43, 2) = ((MR_Box) (Var_88));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_53 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_52));
      }
    }
    else
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
    {
      Repn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_46, 0) = ((MR_Box) (ConsIdToTagMap_33));
      MR_hl_field(MR_mktag(0), Repn_46, 1) = ((MR_Box) (CtorRepns_31));
      MR_hl_field(MR_mktag(0), Repn_46, 2) = ((MR_Box) (CtorRepnMap_34));
      MR_hl_field(MR_mktag(0), Repn_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Repn_46, 4) = ((MR_Box) (DuTypeKind_22));
      MR_hl_field(MR_mktag(0), Repn_46, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Repn_46));
    }
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 0)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 1)));
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 2)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 3)));
    {
      Body_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_47, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(1), Body_47, 1) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Body_47, 2) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(1), Body_47, 3) = ((MR_Box) (Var_103));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_47, TypeDefn0_15, &TypeDefn_48);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_48));
    }
    {
      ComponentKind_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ComponentKind_49, 0) = ((MR_Box) (NumBits_23));
      MR_hl_field(MR_mktag(1), ComponentKind_49, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_14)), ((MR_Box) (ComponentKind_49)), STATE_VARIABLE_ComponentTypeMap_0_50, STATE_VARIABLE_ComponentTypeMap_51);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__548__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__547__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__545__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurTag_0_4,
  MR_Integer * STATE_VARIABLE_CurTag_5,
  MR_Word STATE_VARIABLE_ConsIdToTagMap_0_6,
  MR_Word * STATE_VARIABLE_ConsIdToTagMap_7,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_8,
  MR_Word * STATE_VARIABLE_CtorRepnMap_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CtorRepnMap_9 = STATE_VARIABLE_CtorRepnMap_0_8;
      *STATE_VARIABLE_ConsIdToTagMap_7 = STATE_VARIABLE_ConsIdToTagMap_0_6;
      *STATE_VARIABLE_CurTag_5 = STATE_VARIABLE_CurTag_0_4;
    }
    else
    {
      MR_Word Ctor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word CtorRepn_23;
      MR_Word CtorRepns_24;
      MR_Word MaybeExistConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 0)));
      MR_Word SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 1)));
      MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 2)));
      MR_Integer Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 3)));
      MR_Word Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 4)));
      MR_Word CtorTag_33;
      MR_Word ConsId_34;
      MR_Word Var_41;
      MR_Word Var_45;
      MR_Word Var_49;
      MR_Word Var_53;
      MR_Integer STATE_VARIABLE_CurTag_57_57;
      MR_Word STATE_VARIABLE_ConsIdToTagMap_59_59;
      MR_Word STATE_VARIABLE_CtorRepnMap_60_60;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (MaybeExistConstraints_28));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/9", (MR_String) "enum constant has existential constraints");
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Args_30));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/9", (MR_String) "enum constant has arguments");
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0_3));
        MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Arity_31));
        MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/9", (MR_String) "enum constant has nonzero arity");
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_CurTag_0_4));
      }
      {
        CtorTag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CtorTag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), CtorTag_33, 1) = ((MR_Box) (Var_53));
      }
      {
        CtorRepn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorRepn_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), CtorRepn_23, 1) = ((MR_Box) (SymName_29));
        MR_hl_field(MR_mktag(0), CtorRepn_23, 2) = ((MR_Box) (CtorTag_33));
        MR_hl_field(MR_mktag(0), CtorRepn_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), CtorRepn_23, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), CtorRepn_23, 5) = ((MR_Box) (Context_32));
      }
      STATE_VARIABLE_CurTag_57_57 = (STATE_VARIABLE_CurTag_0_4 + (MR_Integer) 1);
      {
        ConsId_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_34, 1) = ((MR_Box) (SymName_29));
        MR_hl_field(MR_mktag(3), ConsId_34, 2) = ((MR_Box) (Arity_31));
        MR_hl_field(MR_mktag(3), ConsId_34, 3) = ((MR_Box) (TypeCtor_1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_34)), ((MR_Box) (CtorTag_33)), STATE_VARIABLE_ConsIdToTagMap_0_6, &STATE_VARIABLE_ConsIdToTagMap_59_59);
      hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(CtorRepn_23, STATE_VARIABLE_CtorRepnMap_0_8, &STATE_VARIABLE_CtorRepnMap_60_60);
      hlds__du_type_layout__assign_tags_to_enum_constants_9_p_0(TypeCtor_1, Ctors_22, &CtorRepns_24, STATE_VARIABLE_CurTag_57_57, STATE_VARIABLE_CurTag_5, STATE_VARIABLE_ConsIdToTagMap_59_59, STATE_VARIABLE_ConsIdToTagMap_7, STATE_VARIABLE_CtorRepnMap_60_60, STATE_VARIABLE_CtorRepnMap_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorRepn_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorRepns_24));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorRepn_10;
    MR_Word conv1_STATE_VARIABLE_CtorRepnMap_21;

    hlds__du_type_layout__add_repn_to_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_CtorRepn_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_CtorRepnMap_21);
    *wrapper_arg_2 = ((MR_Box) (conv2_CtorRepn_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CtorRepnMap_21));
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(
  MR_Word Params_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefn0_14,
  MR_Word Body0_15,
  MR_Word Ctors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ForeignEnumTagMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 0)));
    MR_Word Lang_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 1)));
    MR_Word DuKind_22;
    MR_Word DirectArgMap_23;
    MR_Word CtorRepns_31;
    MR_Word CtorRepnMap_32;
    MR_Word Repn_35;
    MR_Word Body_36;
    MR_Word TypeDefn_37;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Integer Var_100;
    MR_Word Var_101;
    MR_Word _DirectArgFunctors_24;
    MR_Box conv0__DirectArgFunctors_24;
    MR_Box conv3_CtorRepnMap_32;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_104;

    {
      DuKind_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DuKind_22, 0) = ((MR_Box) (Lang_21));
    }
    Var_96 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) & (MR_Integer) 3);
    Var_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1)));
    Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 2)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
    DirectArgMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 4)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[6], DirectArgMap_23, ((MR_Box) (TypeCtor_13)), &conv0__DirectArgFunctors_24);
    if (succeeded)
    {
      _DirectArgFunctors_24 = ((MR_Word) conv0__DirectArgFunctors_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DirectArgPieces_25;
      MR_Word DirectArgMsg_26;
      MR_Word DirectArgSpec_27;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_62;

      Var_43 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[20])));
      }
      {
        DirectArgPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 1) = ((MR_Box) (Var_42));
      }
      Var_56 = mercury__term__context_init_0_f_0();
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (DirectArgPieces_25));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        DirectArgMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgMsg_26, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), DirectArgMsg_26, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (DirectArgMsg_26));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        DirectArgSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 2) = ((MR_Box) (Var_62));
      }
      {
        STATE_VARIABLE_Specs_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_64_64, 0) = ((MR_Box) (DirectArgSpec_27));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_64_64, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
      }
    }
    else
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_38;
    succeeded = hlds__du_type_layout__ctors_are_all_constants_1_p_0(Ctors_16);
    if (succeeded)
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_64_64;
    else
    {
      MR_Word NonEnumArgPieces_28;
      MR_Word NonEnumArgMsg_29;
      MR_Word NonEnumArgSpec_30;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_90;

      Var_68 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[27])));
      }
      {
        NonEnumArgPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_28, 1) = ((MR_Box) (Var_67));
      }
      Var_84 = mercury__term__context_init_0_f_0();
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (NonEnumArgPieces_28));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        NonEnumArgMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NonEnumArgMsg_29, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), NonEnumArgMsg_29, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (NonEnumArgMsg_29));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        NonEnumArgSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 2) = ((MR_Box) (Var_90));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_39 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonEnumArgSpec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_64_64));
      }
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (ForeignEnumTagMap_20));
    }
    Var_94 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[7]);
    mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0, (MR_Word) &hlds__du_type_layout_scalar_common_2[4], Var_93, Ctors_16, &CtorRepns_31, ((MR_Box) (Var_94)), &conv3_CtorRepnMap_32);
    CtorRepnMap_32 = ((MR_Word) conv3_CtorRepnMap_32);
    {
      Repn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_35, 0) = ((MR_Box) (ForeignEnumTagMap_20));
      MR_hl_field(MR_mktag(0), Repn_35, 1) = ((MR_Box) (CtorRepns_31));
      MR_hl_field(MR_mktag(0), Repn_35, 2) = ((MR_Box) (CtorRepnMap_32));
      MR_hl_field(MR_mktag(0), Repn_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Repn_35, 4) = ((MR_Box) (DuKind_22));
      MR_hl_field(MR_mktag(0), Repn_35, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Repn_35));
    }
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 0)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 1)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 2)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 3)));
    {
      Body_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_36, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Body_36, 1) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Body_36, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), Body_36, 3) = ((MR_Box) (Var_105));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_36, TypeDefn0_14, &TypeDefn_37);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_37));
    }
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__type_ctor_sna_1_f_0(
  MR_Word TypeCtor_3)
{
  {
    MR_Word Piece_4;
    MR_Word TypeCtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0)));
    MR_Integer TypeCtorArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1)));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (TypeCtorSymName_5));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (TypeCtorArity_6));
    }
    {
      Piece_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Piece_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Piece_4, 1) = ((MR_Box) (Var_7));
    }
    return Piece_4;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Ctor_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Ctors_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word MaybeExistConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 0)));
      MR_Word Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 2)));
      MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 3)));
      MR_Word _Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 1)));
      MR_Word _Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (MaybeExistConstraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (Arity_7 == (MR_Integer) 0);
          if (succeeded)
          {
            // direct tailcall eliminated
            next_value_of_HeadVar__1_1 = Ctors_3;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_abstract_if_fits_in_n_bits_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word AbstractDetails_6,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_11,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_12)
{
  switch (MR_tag((MR_Word) AbstractDetails_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(AbstractDetails_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
        case (MR_Integer) 1:
          {
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_5)), ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[44]))), STATE_VARIABLE_ComponentTypeMap_0_11, STATE_VARIABLE_ComponentTypeMap_12);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumBits_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), AbstractDetails_6, (MR_Integer) 0)));
        MR_Word ComponentKind_10;

        {
          ComponentKind_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ComponentKind_10, 0) = ((MR_Box) (NumBits_8));
          MR_hl_field(MR_mktag(1), ComponentKind_10, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_5)), ((MR_Box) (ComponentKind_10)), STATE_VARIABLE_ComponentTypeMap_0_11, STATE_VARIABLE_ComponentTypeMap_12);
      }
      break;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word TypeCtor_11,
  MR_Word ForeignType_12,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_24,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word DirectArgMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 4)));
    MR_Word Globals_20;
    MR_Word Target_21;
    MR_Word Var_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1)));
    MR_Integer Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)));
    MR_Word _DirectArgFunctors_16;
    MR_Box conv0__DirectArgFunctors_16;
    MR_Word Assertions_22;

    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_scalar_common_1[6], DirectArgMap_15, ((MR_Box) (TypeCtor_11)), &conv0__DirectArgFunctors_16);
    if (succeeded)
    {
      _DirectArgFunctors_16 = ((MR_Word) conv0__DirectArgFunctors_16);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DirectArgPieces_17;
      MR_Word DirectArgMsg_18;
      MR_Word DirectArgSpec_19;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_47;
      MR_Word TypeCtorSymName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0)));
      MR_Integer TypeCtorArity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1)));
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (TypeCtorSymName_66));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (TypeCtorArity_67));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[37])));
      }
      {
        DirectArgPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 1) = ((MR_Box) (Var_30));
      }
      Var_41 = mercury__term__context_init_0_f_0();
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (DirectArgPieces_17));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        DirectArgMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgMsg_18, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), DirectArgMsg_18, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (DirectArgMsg_18));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        DirectArgSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 2) = ((MR_Box) (Var_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DirectArgSpec_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
    }
    else
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_20);
    libs__globals__get_target_2_p_0(Globals_20, &Target_21);
    succeeded = hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(ForeignType_12, Target_21, &Assertions_22);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_22);
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_11)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_3[1]))), STATE_VARIABLE_ComponentTypeMap_0_24, STATE_VARIABLE_ComponentTypeMap_25);
      }
      else
        *STATE_VARIABLE_ComponentTypeMap_25 = STATE_VARIABLE_ComponentTypeMap_0_24;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.add_foreign_if_word_aligned_ptr\'/8", (MR_String) "foreign type is not for this backend");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(
  MR_Word ForeignType_4,
  MR_Word Target_5,
  MR_Word * Assertions_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 3)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 2)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 0)));

    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22;
          MR_Word Var_7;
          MR_Word Var_8;

          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
            Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
            Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
            *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_18;
          MR_Word Var_11;
          MR_Word Var_12;

          succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0)));
            Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
            Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
            *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_16;
          MR_Word Var_14;

          succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0)));
            Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));
            *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20;
          MR_Word Var_9;
          MR_Word Var_10;

          succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0)));
            Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
            Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
            *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2)));
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(
  MR_Word Params_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word MaybeForeign_12,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_24,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_25,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_26)
{
  {
    MR_bool succeeded;
    MR_Integer TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1)));
    MR_Word DirectArgMap_17;
    MR_Word _TypeCtorSymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0)));
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Integer Var_37;
    MR_Word Var_38;
    MR_Word TypeCtorInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word _DirectArgFunctors_18;
    MR_Box conv0__DirectArgFunctors_18;

    succeeded = (TypeCtorArity_16 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) & (MR_Integer) 3);
      Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 1)));
      Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 2)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 3)));
      DirectArgMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 4)));
      TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
      TypeInfo_46_46 = (MR_Word) &hlds__du_type_layout_scalar_common_1[6];
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_45_45, TypeInfo_46_46, DirectArgMap_17, ((MR_Box) (TypeCtor_10)), &conv0__DirectArgFunctors_18);
      if (succeeded)
      {
        _DirectArgFunctors_18 = ((MR_Word) conv0__DirectArgFunctors_18);
        succeeded = MR_TRUE;
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
      MR_Word Assertions_21;
      MR_Word Foreign_19;
      MR_Word Target_20;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Integer Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      mercury__set_tree234__insert_3_p_0(TypeCtorInfo_47_47, ((MR_Box) (TypeCtor_10)), STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23, STATE_VARIABLE_MustBeSingleFunctorTagTypes_24);
      succeeded = ((MR_tag((MR_Word) MaybeForeign_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Foreign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeign_12, (MR_Integer) 0)));
        Target_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) & (MR_Integer) 3);
        Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 1)));
        Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 2)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 3)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 4)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Foreign_19, (MR_Integer) 0)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Foreign_19, (MR_Integer) 1)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Foreign_19, (MR_Integer) 2)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Foreign_19, (MR_Integer) 3)));
        switch (Target_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_68;
              MR_Word Var_53;
              MR_Word Var_54;

              succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0)));
                Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
                Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
                Assertions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_64;
              MR_Word Var_57;
              MR_Word Var_58;

              succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
                Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0)));
                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1)));
                Assertions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_62;
              MR_Word Var_60;

              succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_81, (MR_Integer) 0)));
                Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1)));
                Assertions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_66;
              MR_Word Var_55;
              MR_Word Var_56;

              succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0)));
                Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0)));
                Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1)));
                Assertions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      }
      if (succeeded)
      {
        succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_21);
        if (succeeded)
        {
          mercury__map__det_insert_4_p_0(TypeCtorInfo_47_47, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_10)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_3[1]))), STATE_VARIABLE_ComponentTypeMap_0_25, STATE_VARIABLE_ComponentTypeMap_26);
        }
        else
          *STATE_VARIABLE_ComponentTypeMap_26 = STATE_VARIABLE_ComponentTypeMap_0_25;
      }
      else
      {
        MR_Word Var_30;
        MR_Word ComponentKind_32;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TypeDefn_11));
        }
        {
          ComponentKind_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ComponentKind_32, 0) = ((MR_Box) (Var_30));
        }
        mercury__map__det_insert_4_p_0(TypeCtorInfo_47_47, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, ((MR_Box) (TypeCtor_10)), ((MR_Box) (ComponentKind_32)), STATE_VARIABLE_ComponentTypeMap_0_25, STATE_VARIABLE_ComponentTypeMap_26);
      }
    }
    else
    {
      *STATE_VARIABLE_ComponentTypeMap_26 = STATE_VARIABLE_ComponentTypeMap_0_25;
      *STATE_VARIABLE_MustBeSingleFunctorTagTypes_24 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_HeadVar__4_4;

    hlds__add_special_pred__add_special_pred_decl_defns_for_type_maybe_lazily_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv22_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv22_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__3_3;
    MR_Word conv18_HeadVar__5_5;

    hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv19_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv18_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__5_5));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_TypeCtorTypeDefn_14;
    MR_Word conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33;
    MR_Word conv13_STATE_VARIABLE_Specs_35;

    hlds__du_type_layout__decide_if_complex_du_type_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv15_TypeCtorTypeDefn_14, ((MR_Word) wrapper_arg_3), &conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33, ((MR_Word) wrapper_arg_5), &conv13_STATE_VARIABLE_Specs_35);
    *wrapper_arg_2 = ((MR_Box) (conv15_TypeCtorTypeDefn_14));
    *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33));
    *wrapper_arg_6 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_35));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_TypeCtorTypeDefn_18;
    MR_Word conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_43;
    MR_Word conv6_STATE_VARIABLE_ComponentTypeMap_45;
    MR_Word conv5_STATE_VARIABLE_NoTagTypeMap_47;
    MR_Word conv4_STATE_VARIABLE_Specs_49;

    hlds__du_type_layout__decide_if_simple_du_type_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv8_TypeCtorTypeDefn_18, ((MR_Word) wrapper_arg_3), &conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_43, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_ComponentTypeMap_45, ((MR_Word) wrapper_arg_7), &conv5_STATE_VARIABLE_NoTagTypeMap_47, ((MR_Word) wrapper_arg_9), &conv4_STATE_VARIABLE_Specs_49);
    *wrapper_arg_2 = ((MR_Box) (conv8_TypeCtorTypeDefn_18));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_43));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_ComponentTypeMap_45));
    *wrapper_arg_8 = ((MR_Box) (conv5_STATE_VARIABLE_NoTagTypeMap_47));
    *wrapper_arg_10 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_49));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_4), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_68_68;
    MR_Word TypeInfo_78_78;
    MR_Word TypeInfo_91_91;
    MR_Word TypeInfo_92_92;
    MR_Word TypeCtorInfo_108_108;
    MR_Word OldModuleInfo_7;
    MR_Word TypeRepnDec_9;
    MR_Word TypeRepns_10;
    MR_Word DirectArgMap_11;
    MR_Word ForeignEnums_12;
    MR_Word ForeignExportEnums_13;
    MR_Word Globals_14;
    MR_Word Target_15;
    MR_Word DoubleWordFloats_16;
    MR_Word UnboxedNoTagTypesBool_17;
    MR_Word UnboxedNoTagTypes_18;
    MR_Integer NumPtagBits_19;
    MR_Word MaybePrimaryTags_20;
    MR_Integer TargetWordBits_21;
    MR_Word MaybeDirectArgs_22;
    MR_Word Params_23;
    MR_Word TypeCtorToForeignEnumMap_25;
    MR_Word TypeTable0_26;
    MR_Word TypeCtorsTypeDefns0_27;
    MR_Word MustBeSingleFunctorTagTypes0_28;
    MR_Word ComponentTypeMap0_29;
    MR_Word NoTagTypeMap0_30;
    MR_Word TypeCtorsTypeDefns1_31;
    MR_Word MustBeSingleFunctorTagTypes1_32;
    MR_Word ComponentTypeMap_33;
    MR_Word NoTagTypeMap_34;
    MR_Word TypeCtorsTypeDefns_35;
    MR_Word MustBeSingleFunctorTagTypes_36;
    MR_Word TypeTable_37;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_Specs_54_54;
    MR_Word STATE_VARIABLE_ModuleInfo_55_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_ModuleInfo_61_61;
    MR_Word STATE_VARIABLE_ModuleInfo_63_63;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_Word _OldSpecs_8;
    MR_Word _TypeRepnMap_24;
    MR_Box conv3_TypeCtorToForeignEnumMap_25;
    MR_Box conv2_STATE_VARIABLE_Specs_52_52;
    MR_Box conv12_MustBeSingleFunctorTagTypes1_32;
    MR_Box conv11_ComponentTypeMap_33;
    MR_Box conv10_NoTagTypeMap_34;
    MR_Box conv9_STATE_VARIABLE_Specs_54_54;
    MR_Box conv17_MustBeSingleFunctorTagTypes_36;
    MR_Box conv16_STATE_VARIABLE_Specs_57_57;
    MR_Box conv21_STATE_VARIABLE_ModuleInfo_63_63;
    MR_Box conv20_STATE_VARIABLE_Specs_64_64;
    MR_Box conv23_STATE_VARIABLE_ModuleInfo_39;

    hlds__du_type_layout_old__decide_type_repns_4_p_0(STATE_VARIABLE_ModuleInfo_0_38, &OldModuleInfo_7, STATE_VARIABLE_Specs_0_40, &_OldSpecs_8);
    hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &TypeRepnDec_9);
    TypeRepns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_9, (MR_Integer) 0)));
    DirectArgMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_9, (MR_Integer) 1)));
    ForeignEnums_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_9, (MR_Integer) 2)));
    ForeignExportEnums_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_9, (MR_Integer) 3)));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_14);
    libs__globals__get_target_2_p_0(Globals_14, &Target_15);
    hlds__du_type_layout__are_floats_double_word_2_p_0(Globals_14, &DoubleWordFloats_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 258, &UnboxedNoTagTypesBool_17);
    switch (UnboxedNoTagTypesBool_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedNoTagTypes_18 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        UnboxedNoTagTypes_18 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_14, (MR_Integer) 252, &NumPtagBits_19);
    succeeded = (NumPtagBits_19 == (MR_Integer) 0);
    if (succeeded)
      MaybePrimaryTags_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer Var_44;
      MR_Integer Var_45;

      Var_45 = mercury__int__pow_2_f_0((MR_Integer) 2, NumPtagBits_19);
      Var_44 = (Var_45 - (MR_Integer) 1);
      {
        MaybePrimaryTags_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePrimaryTags_20, 0) = ((MR_Box) (Var_44));
      }
    }
    libs__globals__lookup_int_option_3_p_0(Globals_14, (MR_Integer) 259, &TargetWordBits_21);
    hlds__du_type_layout__are_direct_args_enabled_3_p_0(Globals_14, Target_15, &MaybeDirectArgs_22);
    {
      Params_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_23, 0) = ((MR_Box) ((Target_15 | ((((DoubleWordFloats_16 << (MR_Integer) 2)) | ((UnboxedNoTagTypes_18 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), Params_23, 1) = ((MR_Box) (MaybePrimaryTags_20));
      MR_hl_field(MR_mktag(0), Params_23, 2) = ((MR_Box) (TargetWordBits_21));
      MR_hl_field(MR_mktag(0), Params_23, 3) = ((MR_Box) (MaybeDirectArgs_22));
      MR_hl_field(MR_mktag(0), Params_23, 4) = ((MR_Box) (DirectArgMap_11));
    }
    TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    Var_49 = mercury__map__init_0_f_0(TypeCtorInfo_68_68, (MR_Word) &hlds__du_type_layout_scalar_common_1[0]);
    hlds__du_type_layout__build_type_repn_map_3_p_0(TypeRepns_10, Var_49, &_TypeRepnMap_24);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
    }
    Var_51 = mercury__map__init_0_f_0(TypeCtorInfo_68_68, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0);
    TypeInfo_78_78 = (MR_Word) &hlds__du_type_layout_scalar_common_1[1];
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0, (MR_Word) &hlds__du_type_layout_scalar_common_2[0], TypeInfo_78_78, Var_50, ForeignEnums_12, ((MR_Box) (Var_51)), &conv3_TypeCtorToForeignEnumMap_25, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv2_STATE_VARIABLE_Specs_52_52);
    TypeCtorToForeignEnumMap_25 = ((MR_Word) conv3_TypeCtorToForeignEnumMap_25);
    STATE_VARIABLE_Specs_52_52 = ((MR_Word) conv2_STATE_VARIABLE_Specs_52_52);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &TypeTable0_26);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable0_26, &TypeCtorsTypeDefns0_27);
    MustBeSingleFunctorTagTypes0_28 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_68_68);
    mercury__map__init_1_p_0(TypeCtorInfo_68_68, (MR_Word) &hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0, &ComponentTypeMap0_29);
    mercury__map__init_1_p_0(TypeCtorInfo_68_68, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, &NoTagTypeMap0_30);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Params_23));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (TypeCtorToForeignEnumMap_25));
    }
    TypeInfo_91_91 = (MR_Word) &hlds__du_type_layout_scalar_common_2[1];
    TypeInfo_92_92 = (MR_Word) &hlds__du_type_layout_scalar_common_1[2];
    mercury__list__map_foldl4_11_p_1(TypeInfo_91_91, TypeInfo_91_91, TypeInfo_92_92, (MR_Word) &hlds__du_type_layout_scalar_common_2[2], (MR_Word) &hlds__du_type_layout_scalar_common_2[3], TypeInfo_78_78, Var_53, TypeCtorsTypeDefns0_27, &TypeCtorsTypeDefns1_31, ((MR_Box) (MustBeSingleFunctorTagTypes0_28)), &conv12_MustBeSingleFunctorTagTypes1_32, ((MR_Box) (ComponentTypeMap0_29)), &conv11_ComponentTypeMap_33, ((MR_Box) (NoTagTypeMap0_30)), &conv10_NoTagTypeMap_34, ((MR_Box) (STATE_VARIABLE_Specs_52_52)), &conv9_STATE_VARIABLE_Specs_54_54);
    MustBeSingleFunctorTagTypes1_32 = ((MR_Word) conv12_MustBeSingleFunctorTagTypes1_32);
    ComponentTypeMap_33 = ((MR_Word) conv11_ComponentTypeMap_33);
    NoTagTypeMap_34 = ((MR_Word) conv10_NoTagTypeMap_34);
    STATE_VARIABLE_Specs_54_54 = ((MR_Word) conv9_STATE_VARIABLE_Specs_54_54);
    hlds__hlds_module__module_info_set_no_tag_types_3_p_0(NoTagTypeMap_34, STATE_VARIABLE_ModuleInfo_0_38, &STATE_VARIABLE_ModuleInfo_55_55);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_55_55));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Params_23));
      MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (ComponentTypeMap_33));
    }
    mercury__list__map_foldl2_7_p_0(TypeInfo_91_91, TypeInfo_91_91, TypeInfo_92_92, TypeInfo_78_78, Var_56, TypeCtorsTypeDefns1_31, &TypeCtorsTypeDefns_35, ((MR_Box) (MustBeSingleFunctorTagTypes1_32)), &conv17_MustBeSingleFunctorTagTypes_36, ((MR_Box) (STATE_VARIABLE_Specs_54_54)), &conv16_STATE_VARIABLE_Specs_57_57);
    MustBeSingleFunctorTagTypes_36 = ((MR_Word) conv17_MustBeSingleFunctorTagTypes_36);
    STATE_VARIABLE_Specs_57_57 = ((MR_Word) conv16_STATE_VARIABLE_Specs_57_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (MustBeSingleFunctorTagTypes_36));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140hlds.du_type_layout.decide_type_repns\'/4", (MR_String) "some MustBeSingleFunctionTag type is not SingleFunctionTag");
    hlds__hlds_data__set_all_type_ctor_defns_2_p_0(TypeCtorsTypeDefns_35, &TypeTable_37);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_37, STATE_VARIABLE_ModuleInfo_55_55, &STATE_VARIABLE_ModuleInfo_61_61);
    TypeCtorInfo_108_108 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0, TypeCtorInfo_108_108, TypeInfo_78_78, (MR_Word) &hlds__du_type_layout_scalar_common_2[7], ForeignExportEnums_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_61_61)), &conv21_STATE_VARIABLE_ModuleInfo_63_63, ((MR_Box) (STATE_VARIABLE_Specs_57_57)), &conv20_STATE_VARIABLE_Specs_64_64);
    STATE_VARIABLE_ModuleInfo_63_63 = ((MR_Word) conv21_STATE_VARIABLE_ModuleInfo_63_63);
    STATE_VARIABLE_Specs_64_64 = ((MR_Word) conv20_STATE_VARIABLE_Specs_64_64);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(TypeCtorInfo_108_108, (MR_Word) &hlds__du_type_layout_scalar_common_2[8], TypeTable_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_63_63)), &conv23_STATE_VARIABLE_ModuleInfo_39);
    *STATE_VARIABLE_ModuleInfo_39 = ((MR_Word) conv23_STATE_VARIABLE_ModuleInfo_39);
    hlds__du_type_layout__compare_type_tables_4_p_0(OldModuleInfo_7, *STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_41);
  }
}

static void MR_CALL 
hlds__du_type_layout__are_floats_double_word_2_p_0(
  MR_Word Globals_3,
  MR_Word * DoubleWordFloats_4)
{
  {
    MR_bool succeeded;
    MR_Word AllowDoubleWords_5;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 260, &AllowDoubleWords_5);
    switch (AllowDoubleWords_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *DoubleWordFloats_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer TargetWordBits_6;
          MR_Word SinglePrec_7;

          libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 253, &TargetWordBits_6);
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 239, &SinglePrec_7);
          succeeded = (TargetWordBits_6 == (MR_Integer) 32);
          if (succeeded)
            succeeded = (SinglePrec_7 == (MR_Integer) 0);
          if (succeeded)
            *DoubleWordFloats_4 = (MR_Integer) 1;
          else
            *DoubleWordFloats_4 = (MR_Integer) 0;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_TypeRepnMap_3 = STATE_VARIABLE_TypeRepnMap_0_2;
    else
    {
      MR_Word TypeRepn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TypeRepns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TypeCtorSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 0)));
      MR_Word ArgTVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 1)));
      MR_Integer Arity_16;
      MR_Word TypeCtor_17;
      MR_Word STATE_VARIABLE_TypeRepnMap_20_20;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 2)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 3)));
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 4)));
      MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;

      mercury__list__length_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_1[3], ArgTVars_11, &Arity_16);
      {
        TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_17, 0) = ((MR_Box) (TypeCtorSymName_10));
        MR_hl_field(MR_mktag(0), TypeCtor_17, 1) = ((MR_Box) (Arity_16));
      }
      mercury__multi_map__add_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0, ((MR_Box) (TypeCtor_17)), ((MR_Box) (TypeRepn_7)), STATE_VARIABLE_TypeRepnMap_0_2, &STATE_VARIABLE_TypeRepnMap_20_20);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = TypeRepns_8;
      next_value_of_STATE_VARIABLE_TypeRepnMap_0_2 = STATE_VARIABLE_TypeRepnMap_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeRepnMap_0_2 = next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__are_direct_args_enabled_3_p_0(
  MR_Word Globals_4,
  MR_Word Target_5,
  MR_Word * MaybeDirectArgs_6)
{
  {
    MR_bool succeeded;

    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermSizeWords_7;
          MR_Word TermSizeCells_8;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 227, &TermSizeWords_7);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 228, &TermSizeCells_8);
          succeeded = (TermSizeWords_7 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (TermSizeCells_8 == (MR_Integer) 0);
          if (succeeded)
            *MaybeDirectArgs_6 = (MR_Integer) 1;
          else
            *MaybeDirectArgs_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *MaybeDirectArgs_6 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__compare_type_tables_4_p_0(
  MR_Word ModuleInfoA_5,
  MR_Word ModuleInfoB_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeTableA_8;
    MR_Word TypeTableB_9;
    MR_Word TypeCtorDefnsA_10;
    MR_Word TypeCtorDefnsB_11;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfoA_5, &TypeTableA_8);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfoB_6, &TypeTableB_9);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTableA_8, &TypeCtorDefnsA_10);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTableB_9, &TypeCtorDefnsB_11);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_scalar_common_1[9], ((MR_Box) (TypeCtorDefnsA_10)), ((MR_Box) (TypeCtorDefnsB_11)));
    if (succeeded)
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    else
    {
      MR_Word Msg_13;
      MR_Word Spec_14;
      MR_Word Var_25;
      MR_Word Var_31;

      Var_25 = mercury__term__context_init_0_f_0();
      {
        Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[42])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Msg_13));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____component_type_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____component_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____component_type_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____component_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____decide_du_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____decide_du_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____direct_arg_cond_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____direct_arg_cond_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____fill_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____fill_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____fill_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____fill_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_direct_args_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_direct_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_primary_tags_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_primary_tags_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____type_repn_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____type_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____word_aligned_why_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____word_aligned_why_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__du_type_layout__init(void)
{
}

void mercury__hlds__du_type_layout__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_map_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_direct_arg_cond_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_fill_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_type_repn_map_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0);
}

void mercury__hlds__du_type_layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__du_type_layout__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.du_type_layout.
