/*
** Automatically generated from `recompilation.usage.m'
** by the Mercury compiler,
** version rotd-2018-10-08
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


// :- module recompilation.usage.
// :- implementation.

/*
INIT mercury__recompilation__usage__init
ENDINIT
*/

#include "recompilation.usage.mih"


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
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7];

static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7];

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0;

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1];

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1];

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1];

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1];

static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0;

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4];

static const MR_DuArgLocn recompilation__usage__recompilation__usage__field_locns_resolved_functor_0_0[4];

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0;

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1];

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1;

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2];

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2;

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1];

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1];

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1];

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0[3];

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3];

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3];

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(
  MR_Word LambdaHeadVar__1_41);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(
  MR_Word ModuleInfo_17,
  MR_Word LambdaHeadVar__1_35);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__268__1_3_f_0(
  MR_Word ModuleUsedItems_12,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49);

static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
  MR_Word BoundInst_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
  MR_Word ItemType_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word HeadVar__4_11,
  MR_Word Module_12,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_Word ItemType_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word Module_12,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
  MR_Word ItemType_6,
  MR_Word HeadVar__2_2,
  MR_Word MatchingIdMap_9,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
  MR_String Name_1,
  MR_Integer _Arity_2,
  MR_Word ResolverFunctor_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
  MR_String Name_1,
  MR_Word ResolverFunctor_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word Qualifier_9,
  MR_Word HeadVar__4_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word Qualifier_9,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingCtorMap_7,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
  MR_Word TypeSpecInfo_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
  MR_Integer _ProcId_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
  MR_Word Info_3,
  MR_Word ItemName_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word HeadVar__5_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word HeadVar__2_2,
  MR_Word MatchingPredMap_9,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
  MR_Word CtorArg_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
  MR_Word Ctor_4,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
  MR_Word TypeAndMode_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
  MR_Word Method_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * STATE_VARIABLE_Info_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
  MR_Word ClassId_5,
  MR_Word Defn_6,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefns_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word _SymName_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10);

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10);

static void MR_CALL 
recompilation__usage__record_used_functor_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
  MR_Word ModuleQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_ResolvedMap_0_17,
  MR_Word * STATE_VARIABLE_ResolvedMap_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
  MR_Word ModuleQualifier_9,
  MR_Word SymName_10,
  MR_Integer Arity_11,
  MR_Word * Recorded_12,
  MR_Word STATE_VARIABLE_ResolvedCtorMap_0_18,
  MR_Word * STATE_VARIABLE_ResolvedCtorMap_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SymName_6,
  MR_Integer Arity_7,
  MR_Word * ResolvedConstructors_8);

static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
  MR_Word VisibleModule_4,
  MR_Word STATE_VARIABLE_ImportedItemsMap_0_7,
  MR_Word * STATE_VARIABLE_ImportedItemsMap_8);

static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
  MR_Word ResolvedFunctor_4);

static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word WriteMatches_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WriteMatches_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
  MR_Word RecompInfo_8,
  MR_Word TimestampMap_9,
  MR_Word ModuleInstances_10,
  MR_Word ModuleName_11,
  MR_Word ModuleUsedItems_12);

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word NestedSubModules_8,
  MR_Word RecompInfo_9,
  MR_Word TimestampMap_10);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UsedItems_9,
  MR_Word Dependencies_10,
  MR_Word * ResolvedUsedItems_11,
  MR_Word * UsedTypeClasses_12,
  MR_Word * ImportedItems_13,
  MR_Word * ModuleInstances_14);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
  MR_Word UsedItems_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
  MR_Word ItemType_5,
  MR_Word Set_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Set_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
  MR_Word STATE_VARIABLE_Queue_0_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * STATE_VARIABLE_Info_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_25);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_25);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
  MR_Word TypeBody_4,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word NameArity_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Id_6,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_58,
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_25,
  MR_Word ModuleQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_ResolvedMap_0_17,
  MR_Word * STATE_VARIABLE_ResolvedMap_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word ModuleQualifier_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_MatchingNames_0_28,
  MR_Word * STATE_VARIABLE_MatchingNames_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
  MR_Word Ids_6,
  MR_Word STATE_VARIABLE_WriteComma_0_9,
  MR_Word * STATE_VARIABLE_WriteComma_10);

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
  MR_Word ItemType_7,
  MR_Word UsedItems_8,
  MR_Word STATE_VARIABLE_WriteComma_0_12,
  MR_Word * STATE_VARIABLE_WriteComma_13);

static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
  MR_Word ItemType_7,
  MR_Word UsedItems_8,
  MR_Word STATE_VARIABLE_WriteComma_0_12,
  MR_Word * STATE_VARIABLE_WriteComma_13);

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box recompilation__usage_scalar_common_1[67][3];

static /* final */ const MR_Box recompilation__usage_scalar_common_2[12][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_3[3][4];

static /* final */ const MR_Box recompilation__usage_scalar_common_4[21][6];

static /* final */ const MR_Integer recompilation__usage_scalar_common_5[1][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_6[7][8];

static /* final */ const MR_Box recompilation__usage_scalar_common_7[4][5];

static /* final */ const MR_Box recompilation__usage_scalar_common_8[5][7];

static /* final */ const MR_Box recompilation__usage_scalar_common_9[3][10];

static /* final */ const MR_Box recompilation__usage_scalar_common_10[1][9];




static /* final */ const MR_Box recompilation__usage_scalar_common_1[67][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[5]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[2]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_3[0]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[1]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[10]))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[0])),
    ((MR_Box) (recompilation__usage__write_simple_item_matches_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[3]))
  },
  /* row 19 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[2])),
    ((MR_Box) (recompilation__usage__write_functor_matches_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[5]))
  },
  /* row 21 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[4])),
    ((MR_Box) (recompilation__usage__record_expanded_items_used_by_item_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[5])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[7])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[9])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[7])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[7])),
    ((MR_Box) (recompilation__usage__find_items_used_by_mode_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[10])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraints_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_8[1])),
    ((MR_Box) (recompilation__usage__find_items_used_by_functors_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_8[2])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[13])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[15])),
    ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[16])),
    ((MR_Box) (recompilation__usage__write_simple_item_matches_3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[17])),
    ((MR_Box) (recompilation__usage__write_functor_matches_2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_7[2])),
    ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_7[3])),
    ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_and_mode_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_arg_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_8[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[20])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 62 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[8])),
    ((MR_Box) (recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 63 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[7])),
    ((MR_Box) (recompilation__usage__find_items_used_by_bound_inst_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraint_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_2[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[9]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[7])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[10]))
  },
  /* row 2 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_4[21][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Integer recompilation__usage_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_6[7][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&recompilation__usage_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&recompilation__usage_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_7[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[0])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[2])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[17]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[0])),
    ((MR_Box) (recompilation__usage__write_functor_matches_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[4])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[19]))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_8[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_9[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_item_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_item_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_module_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____module_imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____module_imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "module_imported_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0)
};

static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7] = {
  (MR_String) "module_info",
  (MR_String) "item_queue",
  (MR_String) "imported_items",
  (MR_String) "module_instances",
  (MR_String) "dependencies",
  (MR_String) "used_items",
  (MR_String) "used_typeclasses"
};

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0 = {
  (MR_String) "recompilation_usage_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0,
  recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____recompilation_usage_info_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____recompilation_usage_info_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "recompilation_usage_info",
  {     recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0 },
  {     recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0
};

static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_record_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____record_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____record_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "record_resolved_item",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn recompilation__usage__recompilation__usage__field_locns_resolved_functor_0_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0 = {
  (MR_String) "resolved_functor_pred_or_func",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0,
  NULL,
  recompilation__usage__recompilation__usage__field_locns_resolved_functor_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
};

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1 = {
  (MR_String) "resolved_functor_constructor",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
};

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2 = {
  (MR_String) "resolved_functor_field",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2
};

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor",
  {     recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0 },
  {     recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_list_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_list_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_map_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_map_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_set_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_set_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_used_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_used_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_used_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_write_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____write_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____write_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "write_resolved_item",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(
  MR_Word LambdaHeadVar__1_47)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_48;
    MR_Word FieldConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_47, (MR_Integer) 3))));
    MR_Word TypeCtor_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_47, (MR_Integer) 2))));
    MR_Word ConsName_35;
    MR_Integer ConsArity_36;

    succeeded = ((((MR_tag((MR_Word) FieldConsId_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldConsId_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      ConsName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldConsId_33, (MR_Integer) 1))));
      ConsArity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldConsId_33, (MR_Integer) 2))));
      {
        MR_Word Var_49;
        MR_Word Var_50;

        Var_49 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_60);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ConsName_35));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ConsArity_36));
        }
        {
          LambdaHeadVar__2_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), LambdaHeadVar__2_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(2), LambdaHeadVar__2_48, 1) = ((MR_Box) (Var_50));
        }
      }
    }
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_matching_functors\'/4", (MR_String) "weird cons_id in hlds_field_defn");
    }
    return LambdaHeadVar__2_48;
  }
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(
  MR_Word LambdaHeadVar__1_41)
{
  {
    MR_Word LambdaHeadVar__2_42;
    MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_41, (MR_Integer) 0))));
    MR_Word Var_43;

    Var_43 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_20);
    {
      LambdaHeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_42, 0) = ((MR_Box) (Var_43));
    }
    return LambdaHeadVar__2_42;
  }
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(
  MR_Word ModuleInfo_17,
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_Word LambdaHeadVar__2_36;
    MR_Word PredModule_25;
    MR_Word PredInfo_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, LambdaHeadVar__1_35, &PredInfo_26);
    PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
    {
      LambdaHeadVar__2_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 0) = ((MR_Box) (LambdaHeadVar__1_35));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_36, 1) = ((MR_Box) (PredModule_25));
    }
    return LambdaHeadVar__2_36;
  }
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__268__1_3_f_0(
  MR_Word ModuleUsedItems_12,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49)
{
  {
    MR_Word LambdaHeadVar__3_50;
    MR_Word ModuleItemNames_24;
    MR_Box conv0_ModuleItemNames_24;

    conv0_ModuleItemNames_24 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ModuleUsedItems_12, LambdaHeadVar__1_48);
    ModuleItemNames_24 = ((MR_Word) (conv0_ModuleItemNames_24));
    mercury__map__select_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), LambdaHeadVar__2_49, ModuleItemNames_24, &LambdaHeadVar__3_50);
    return LambdaHeadVar__3_50;
  }
}

static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_3[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_11_11));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_13_13));
    }
    mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_15_15, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_14_14;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
    }
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_12_12));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_14_14, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_12_12;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
    }
    mercury__list____Compare____list_1_0(TypeInfo_12_12, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_9_9));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_11_11, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_50 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_51 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_50 == CastY_51);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_6;

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, Var_65, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, Var_64, ArgY2_8);
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                    {
                      MR_Word SubResult3_12;
                      MR_Integer Var_66 = (MR_Integer) (Var_63);
                      MR_Integer Var_67 = (MR_Integer) (ArgY3_11);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&SubResult3_12, Var_66, Var_67);
                      succeeded = (SubResult3_12 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_12;
                      else
                        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_62, ArgY4_14);
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
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  recompilation____Compare____item_name_0_0(HeadVar__1_1, Var_59, ArgY1_32);
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
            MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_47;

                  recompilation____Compare____item_name_0_0(&SubResult1_47, Var_61, ArgY1_46);
                  succeeded = (SubResult1_47 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_47;
                  else
                    recompilation____Compare____item_name_0_0(HeadVar__1_1, Var_60, ArgY2_49);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word ArgY3_8;
            MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
            MR_Integer ArgY4_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
                if (succeeded)
                {
                  succeeded = (ArgX3_7 == ArgY3_8);
                  if (succeeded)
                    succeeded = (ArgX4_9 == ArgY4_10);
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = recompilation____Unify____item_name_0_0(ArgX1_11, ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_14;
            MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = recompilation____Unify____item_name_0_0(ArgX1_13, ArgY1_14);
              if (succeeded)
                succeeded = recompilation____Unify____item_name_0_0(ArgX2_15, ArgY2_16);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_2[11]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[13]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[14]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[15]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_3[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
recompilation__usage____Unify____recompilation_usage_info_0_0(
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
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&recompilation__usage_scalar_common_2[11]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&recompilation__usage_scalar_common_1[13]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&recompilation__usage_scalar_common_1[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&recompilation__usage_scalar_common_1[15]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&recompilation__usage_scalar_common_3[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&recompilation__usage_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
recompilation__usage____Compare____module_imported_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_3[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word DepItemType_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Item_4, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word DepItemId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item_4, (MR_Integer) 1))));

    recompilation__usage__maybe_record_item_to_process_4_p_0(DepItemType_6, DepItemId_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
    MR_Integer ClassArity_8;
    MR_Word Var_12;
    MR_Word STATE_VARIABLE_Info_13_13;
    MR_Box conv1_STATE_VARIABLE_Info_10;

    ClassArity_8 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_7);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (ClassName_6));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ClassArity_8));
    }
    recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, Var_12, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_13_13);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[66]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_Info_13_13)), &conv1_STATE_VARIABLE_Info_10);
    *STATE_VARIABLE_Info_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
  MR_Word BoundInst_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_bool succeeded;
    MR_Word ConsId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 0))));
    MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_14_14;
    MR_Word Name_8;
    MR_Integer Arity_9;
    MR_Box conv1_STATE_VARIABLE_Info_12;

    succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
      Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 2))));
      {
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Name_8));
          MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Arity_9));
        }
        recompilation__usage__record_used_functor_3_p_0(Var_13, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_14_14);
      }
    }
    else
      STATE_VARIABLE_Info_14_14 = STATE_VARIABLE_Info_0_11;
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[65]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_14_14)), &conv1_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv1_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
  MR_Word ItemType_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word HeadVar__4_11,
  MR_Word Module_12,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(ItemType_8, Name_9, Arity_10, Module_12, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_Word ItemType_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word Module_12,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word Var_16;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Module_12));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Name_9));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_10));
    }
    recompilation__usage__maybe_record_item_to_process_4_p_0(ItemType_8, Var_16, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_15;

    recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_15);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
  MR_Word ItemType_6,
  MR_Word HeadVar__2_2,
  MR_Word MatchingIdMap_9,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_Info_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ItemType_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Arity_8));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_13, MatchingIdMap_9, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv1_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv1_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
  MR_String Name_1,
  MR_Integer _Arity_2,
  MR_Word ResolverFunctor_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(Name_1, ResolverFunctor_3, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
  MR_String Name_1,
  MR_Word ResolverFunctor_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  switch (MR_tag((MR_Word) ResolverFunctor_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResolverFunctor_3, (MR_Integer) 0))));
        MR_Word PredModule_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResolverFunctor_3, (MR_Integer) 1))));
        MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ResolverFunctor_3, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer PredArity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ResolverFunctor_3, (MR_Integer) 3))));
        MR_Word Var_16;
        MR_Word Var_17;

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Name_1));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (PredArity_13));
        }
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (PredId_10));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (PredModule_11));
        }
        recompilation__usage__find_items_used_by_pred_5_p_0(PredOrFunc_12, Var_16, Var_17, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResolverFunctor_3, (MR_Integer) 0))));

        recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, TypeCtor_23, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtor_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResolverFunctor_3, (MR_Integer) 0))));

        recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, TypeCtor_32, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word Qualifier_9,
  MR_Word HeadVar__4_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(Name_7, Arity_8, Qualifier_9, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word Qualifier_9,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word SymName_12;
    MR_Word Var_15;

    SymName_12 = recompilation__module_qualify_name_2_f_0(Qualifier_9, Name_7);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (SymName_12));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Arity_8));
    }
    recompilation__usage__record_used_functor_3_p_0(Var_15, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    recompilation__usage__find_items_used_by_functors_3_6_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingCtorMap_7,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_String Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Box conv1_STATE_VARIABLE_Info_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&recompilation__usage_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_functors_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Name_5));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Arity_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_11, MatchingCtorMap_7, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv1_STATE_VARIABLE_Info_10);
    *STATE_VARIABLE_Info_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
  MR_Word TypeSpecInfo_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word MaybeModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_4, (MR_Integer) 4))));
    MR_Word Subst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_4, (MR_Integer) 5))));
    MR_Word SubstTypes_15;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Box conv3_STATE_VARIABLE_Info_17;

    if ((MaybeModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Info_18_18 = STATE_VARIABLE_Info_0_16;
    else
    {
      MR_Word Modes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_10, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_Info_18_18;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[63]), Modes_14, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv1_STATE_VARIABLE_Info_18_18);
      STATE_VARIABLE_Info_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_Info_18_18));
    }
    mercury__assoc_list__values_2_p_0((MR_Word) (&recompilation__usage_scalar_common_2[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_11, &SubstTypes_15);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[64]), SubstTypes_15, ((MR_Box) (STATE_VARIABLE_Info_18_18)), &conv3_STATE_VARIABLE_Info_17);
    *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
  MR_Integer _ProcId_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(ProcInfo_6, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word ArgModes_8;
    MR_Box conv1_STATE_VARIABLE_Info_10;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_6, &ArgModes_8);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[62]), ArgModes_8, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv1_STATE_VARIABLE_Info_10);
    *STATE_VARIABLE_Info_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Info_17;

    recompilation__usage__find_items_used_by_type_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Info_10);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PredModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ItemType_12;
    MR_Word ModuleInfo_13;
    MR_Word PredInfo_14;
    MR_Word ItemName_15;
    MR_Word Var_36;

    ItemType_12 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_6);
    ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_9, &PredInfo_14);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (PredModule_10));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Name_7));
    }
    {
      ItemName_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemName_15, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), ItemName_15, 1) = ((MR_Box) (Arity_8));
    }
    {
      MR_Word TypeCtorInfo_21_92;
      MR_Word TypeInfo_22_93;
      MR_Word TypeInfo_23_94;
      MR_Word TypeInfo_24_95;
      MR_Word ImportedItems_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 2))));
      MR_Word ModuleName_79;
      MR_String Name_80;
      MR_Integer Arity_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_15, (MR_Integer) 1))));
      MR_Word ModuleIdSet_82;
      MR_Word ModuleItemIdSet_83;
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_15, (MR_Integer) 0))));
      MR_Word Var_85;
      MR_Box conv0_ModuleIdSet_82;
      MR_Box conv1_ModuleItemIdSet_83;

      succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleName_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0))));
        Name_80 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 1))));
        TypeCtorInfo_21_92 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        TypeInfo_22_93 = (MR_Word) (&recompilation__usage_scalar_common_3[0]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_92, TypeInfo_22_93, ImportedItems_78, ((MR_Box) (ModuleName_79)), &conv0_ModuleIdSet_82);
        if (succeeded)
        {
          ModuleIdSet_82 = ((MR_Word) (conv0_ModuleIdSet_82));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeInfo_23_94 = (MR_Word) (&recompilation__usage_scalar_common_2[0]);
          conv1_ModuleItemIdSet_83 = recompilation__extract_ids_2_f_0(TypeInfo_23_94, ModuleIdSet_82, ItemType_12);
          ModuleItemIdSet_83 = ((MR_Word) (conv1_ModuleItemIdSet_83));
          TypeInfo_24_95 = (MR_Word) (&recompilation__usage_scalar_common_1[0]);
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Name_80));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Arity_81));
          }
          succeeded = mercury__set__member_2_p_0(TypeInfo_24_95, ((MR_Box) (Var_85)), ModuleItemIdSet_83);
        }
      }
    }
    if (!(succeeded))
      succeeded = recompilation__usage__item_is_local_2_p_0(STATE_VARIABLE_Info_0_34, ItemName_15);
    if (succeeded)
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
    else
    {
      MR_Word Markers_16;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_14, &Markers_16);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, (MR_Integer) 11);
      if (succeeded)
      {
        MR_Word MethodClassContext_17;
        MR_Word MethodUnivConstraints_18;
        MR_Word ClassName_22;
        MR_Integer ClassArity_24;
        MR_Word Var_42;

        hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_14, &MethodClassContext_17);
        MethodUnivConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodClassContext_17, (MR_Integer) 0))));
        if ((MethodUnivConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_pred\'/5", (MR_String) "class method with no class constraints");
            return;
          }
        }
        else
        {
          MR_Word MethodUnivConstraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MethodUnivConstraints_18, (MR_Integer) 0))));
          MR_Word ClassArgTypes_23;

          ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodUnivConstraint_20, (MR_Integer) 0))));
          ClassArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodUnivConstraint_20, (MR_Integer) 1))));
          ClassArity_24 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassArgTypes_23);
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (ClassName_22));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ClassArity_24));
        }
        recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, Var_42, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      }
      else
      {
        MR_Word ArgTypes_25;
        MR_Word Procs_26;
        MR_Word ClassContext_27;
        MR_Word TypeSpecInfo_28;
        MR_Word PragmaMap_32;
        MR_Word Var_44;
        MR_Word STATE_VARIABLE_Info_45_45;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word ItemName_53;
        MR_Box conv3_STATE_VARIABLE_Info_49_49;
        MR_Word TypeSpecPragmas_33;
        MR_Box conv4_TypeSpecPragmas_33;

        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (PredModule_10));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Name_7));
        }
        {
          ItemName_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemName_53, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), ItemName_53, 1) = ((MR_Box) (Arity_8));
        }
        recompilation__usage__record_expanded_items_used_by_item_4_p_0(ItemType_12, ItemName_53, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
        recompilation__usage__record_imported_item_4_p_0(ItemType_12, ItemName_53, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_14, &ArgTypes_25);
        recompilation__usage__find_items_used_by_types_3_p_0(ArgTypes_25, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_14, &Procs_26);
        mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[60]), Procs_26, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv3_STATE_VARIABLE_Info_49_49);
        STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv3_STATE_VARIABLE_Info_49_49));
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_14, &ClassContext_27);
        recompilation__usage__find_items_used_by_class_context_3_p_0(ClassContext_27, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
        hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_13, &TypeSpecInfo_28);
        PragmaMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 3))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[8]), PragmaMap_32, ((MR_Box) (PredId_9)), &conv4_TypeSpecPragmas_33);
        if (succeeded)
        {
          TypeSpecPragmas_33 = ((MR_Word) (conv4_TypeSpecPragmas_33));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box conv6_STATE_VARIABLE_Info_35;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[61]), TypeSpecPragmas_33, ((MR_Box) (STATE_VARIABLE_Info_50_50)), &conv6_STATE_VARIABLE_Info_35);
          *STATE_VARIABLE_Info_35 = ((MR_Word) (conv6_STATE_VARIABLE_Info_35));
        }
        else
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_50_50;
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
  MR_Word Info_3,
  MR_Word ItemName_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_4, (MR_Integer) 0))));
    MR_Word Var_9;
    MR_Word Var_16;

    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
      hlds__hlds_module__module_info_get_name_2_p_0(Var_9, &Var_16);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, Var_16);
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Word Constraints1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_9_9;
    MR_Box conv1_STATE_VARIABLE_Info_9_9;
    MR_Box conv3_STATE_VARIABLE_Info_8;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[58]), Constraints1_4, ((MR_Box) (STATE_VARIABLE_Info_0_7)), &conv1_STATE_VARIABLE_Info_9_9);
    STATE_VARIABLE_Info_9_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9_9));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[59]), Constraints2_5, ((MR_Box) (STATE_VARIABLE_Info_9_9)), &conv3_STATE_VARIABLE_Info_8);
    *STATE_VARIABLE_Info_8 = ((MR_Word) (conv3_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_Info_7;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[57]), Types_4, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv1_STATE_VARIABLE_Info_7);
    *STATE_VARIABLE_Info_7 = ((MR_Word) (conv1_STATE_VARIABLE_Info_7));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word HeadVar__5_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(PredOrFunc_8, Name_9, Arity_10, ModuleQualifier_11, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word SymName_14;
    MR_Word Var_17;

    SymName_14 = recompilation__module_qualify_name_2_f_0(ModuleQualifier_11, Name_9);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (SymName_14));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Arity_10));
    }
    recompilation__usage__record_used_pred_or_func_4_p_0(PredOrFunc_8, Var_17, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    recompilation__usage__find_items_used_by_preds_3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word HeadVar__2_2,
  MR_Word MatchingPredMap_9,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_Info_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_2_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (PredOrFunc_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Arity_8));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_13, MatchingPredMap_9, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv1_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv1_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
  MR_Word CtorArg_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_4, (MR_Integer) 1))));
    MR_Word TypeCtor_16;
    MR_Word TypeArgs_17;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_6, &TypeCtor_16, &TypeArgs_17);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_10_18;
      MR_Box conv1_STATE_VARIABLE_Info_8;

      recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_16, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_10_18);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[56]), TypeArgs_17, ((MR_Box) (STATE_VARIABLE_Info_10_18)), &conv1_STATE_VARIABLE_Info_8);
      *STATE_VARIABLE_Info_8 = ((MR_Word) (conv1_STATE_VARIABLE_Info_8));
    }
    else
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_8;

    recompilation__usage__find_items_used_by_ctor_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
  MR_Word Ctor_4,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word MaybeExistConstraints_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1))));
    MR_Word CtorArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Box conv3_STATE_VARIABLE_Info_18;

    if ((MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Info_19_19 = STATE_VARIABLE_Info_0_17;
    else
    {
      MR_Word ExistConstraints_12 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_7), (MR_Integer) 1));
      MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_12, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_Info_19_19;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[54]), Constraints_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv1_STATE_VARIABLE_Info_19_19);
      STATE_VARIABLE_Info_19_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19_19));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[55]), CtorArgs_9, ((MR_Box) (STATE_VARIABLE_Info_19_19)), &conv3_STATE_VARIABLE_Info_18);
    *STATE_VARIABLE_Info_18 = ((MR_Word) (conv3_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
  MR_Word TypeAndMode_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;
    MR_Word Type_6;
    MR_Word STATE_VARIABLE_Info_10_10;
    MR_Word TypeCtor_16;
    MR_Word TypeArgs_17;

    if (((MR_tag((MR_Word) TypeAndMode_4)) == (MR_Integer) 1))
    {
      MR_Word Mode_7;

      Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode_4, (MR_Integer) 0))));
      Mode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode_4, (MR_Integer) 1))));
      recompilation__usage__find_items_used_by_mode_3_p_0(Mode_7, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_10_10);
    }
    else
    {
      Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode_4, (MR_Integer) 0))));
      STATE_VARIABLE_Info_10_10 = STATE_VARIABLE_Info_0_8;
    }
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_16, &TypeArgs_17);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_10_18;
      MR_Box conv1_STATE_VARIABLE_Info_9;

      recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_16, STATE_VARIABLE_Info_10_10, &STATE_VARIABLE_Info_10_18);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[53]), TypeArgs_17, ((MR_Box) (STATE_VARIABLE_Info_10_18)), &conv1_STATE_VARIABLE_Info_9);
      *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
    }
    else
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_10_10;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_and_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
  MR_Word Method_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * STATE_VARIABLE_Info_3)
{
  if (((MR_tag((MR_Word) Method_1)) == (MR_Integer) 0))
  {
    MR_Word ArgTypesAndModes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_1, (MR_Integer) 2))));
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_1, (MR_Integer) 10))));
    MR_Word STATE_VARIABLE_Info_20_20;
    MR_Word Constraints1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_16, (MR_Integer) 0))));
    MR_Word Constraints2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_16, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_9_45;
    MR_Box conv1_STATE_VARIABLE_Info_9_45;
    MR_Box conv3_STATE_VARIABLE_Info_20_20;
    MR_Box conv5_STATE_VARIABLE_Info_3;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[49]), Constraints1_42, ((MR_Box) (STATE_VARIABLE_Info_0_2)), &conv1_STATE_VARIABLE_Info_9_45);
    STATE_VARIABLE_Info_9_45 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9_45));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[50]), Constraints2_43, ((MR_Box) (STATE_VARIABLE_Info_9_45)), &conv3_STATE_VARIABLE_Info_20_20);
    STATE_VARIABLE_Info_20_20 = ((MR_Word) (conv3_STATE_VARIABLE_Info_20_20));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[51]), ArgTypesAndModes_8, ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv5_STATE_VARIABLE_Info_3);
    *STATE_VARIABLE_Info_3 = ((MR_Word) (conv5_STATE_VARIABLE_Info_3));
  }
  else
  {
    MR_Word Modes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method_1, (MR_Integer) 2))));
    MR_Box conv7_STATE_VARIABLE_Info_3;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[52]), Modes_27, ((MR_Box) (STATE_VARIABLE_Info_0_2)), &conv7_STATE_VARIABLE_Info_3);
    *STATE_VARIABLE_Info_3 = ((MR_Word) (conv7_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
  MR_Word ClassId_5,
  MR_Word Defn_6,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word InstanceModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 0))));
    MR_Word ArgTypes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 1))));
    MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 5))));
    MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
    MR_Word Var_54;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_18, &Var_54);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(InstanceModuleName_8, Var_54);
    if (succeeded)
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
    else
    {
      MR_Word ModuleInstances0_19;
      MR_Word ClassIds1_21;
      MR_Word ClassIds_22;
      MR_Word ModuleInstances_23;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Box conv1_STATE_VARIABLE_Info_26_26;
      MR_Box conv3_STATE_VARIABLE_Info_27_27;
      MR_Word ClassIdsPrime_20;
      MR_Box conv4_ClassIdsPrime_20;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[47]), Constraints_13, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv1_STATE_VARIABLE_Info_26_26);
      STATE_VARIABLE_Info_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_Info_26_26));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[48]), ArgTypes_9, ((MR_Box) (STATE_VARIABLE_Info_26_26)), &conv3_STATE_VARIABLE_Info_27_27);
      STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv3_STATE_VARIABLE_Info_27_27));
      ModuleInstances0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), ModuleInstances0_19, ((MR_Box) (InstanceModuleName_8)), &conv4_ClassIdsPrime_20);
      if (succeeded)
      {
        ClassIdsPrime_20 = ((MR_Word) (conv4_ClassIdsPrime_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ClassIds1_21 = ClassIdsPrime_20;
      else
      {
        mercury__set__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), &ClassIds1_21);
      }
      mercury__set__insert_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), ((MR_Box) (ClassId_5)), ClassIds1_21, &ClassIds_22);
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), ((MR_Box) (InstanceModuleName_8)), ((MR_Box) (ClassIds_22)), ModuleInstances0_19, &ModuleInstances_23);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 1))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 2))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 4))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 5))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_25 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleInstances_23));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_9;

    recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefns_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_bool succeeded;
    MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 1))));
    MR_Word ClassIdItem_10;
    MR_Word ModuleName_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_35;

    {
      ClassIdItem_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassIdItem_10, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), ClassIdItem_10, 1) = ((MR_Box) (Arity_9));
    }
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassIdItem_10, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
      hlds__hlds_module__module_info_get_name_2_p_0(Var_28, &Var_35);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_35);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_14_14;
      MR_Word Var_15;
      MR_Word Dependencies_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
      MR_Word EquivTypes_43;
      MR_Word Var_44;
      MR_Box conv0_EquivTypes_43;
      MR_Box conv4_STATE_VARIABLE_Info_12;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ClassIdItem_10));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[10]), Dependencies_42, ((MR_Box) (Var_44)), &conv0_EquivTypes_43);
      if (succeeded)
      {
        EquivTypes_43 = ((MR_Word) (conv0_EquivTypes_43));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_46;
        MR_Box conv2_STATE_VARIABLE_Info_14_14;

        Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), EquivTypes_43);
        mercury__list__foldl_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[46]), Var_46, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_14_14);
        STATE_VARIABLE_Info_14_14 = ((MR_Word) (conv2_STATE_VARIABLE_Info_14_14));
      }
      else
        STATE_VARIABLE_Info_14_14 = STATE_VARIABLE_Info_0_11;
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ClassIdItem_10));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_15, InstanceDefns_6, ((MR_Box) (STATE_VARIABLE_Info_14_14)), &conv4_STATE_VARIABLE_Info_12);
      *STATE_VARIABLE_Info_12 = ((MR_Word) (conv4_STATE_VARIABLE_Info_12));
    }
    else
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
  }
}

static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word _SymName_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(ModuleInfo_6, Arity_8, PredId_9, ResolvedCtor_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_11;
    MR_Word PredOrFunc_12;
    MR_Word PredModule_13;
    MR_Integer PredArity_14;
    MR_Word PredExistQVars_15;
    MR_Integer OrigArity_16;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_9, &PredInfo_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
    PredArity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_11, &PredExistQVars_15);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_12, &OrigArity_16, PredArity_14);
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = (OrigArity_16 >= Arity_8);
          if (succeeded)
          {
            succeeded = (PredExistQVars_15 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              succeeded = (OrigArity_16 == Arity_8);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = (OrigArity_16 >= Arity_8);
          if (succeeded)
            succeeded = (PredExistQVars_15 == (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *ResolvedCtor_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredModule_13));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigArity_16));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage__record_used_functor_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_bool succeeded;
    MR_Word SymName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ItemSet0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
    MR_Word IdSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 5))));
    MR_Word IdSet_9;
    MR_Word ItemSet_10;
    MR_Word STATE_VARIABLE_Info_14_14;
    MR_String UnqualifiedName_67;
    MR_Word ModuleQualifier_68;
    MR_Word MatchingNames1_70;
    MR_Word Recorded_71;
    MR_Word MatchingNames_72;
    MR_Word MatchingNames0_69;
    MR_Box conv0_MatchingNames0_69;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;

    UnqualifiedName_67 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
    ModuleQualifier_68 = recompilation__find_module_qualifier_1_f_0(SymName_4);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), IdSet0_8, ((MR_Box) (UnqualifiedName_67)), &conv0_MatchingNames0_69);
    if (succeeded)
    {
      MatchingNames0_69 = ((MR_Word) (conv0_MatchingNames0_69));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      MatchingNames1_70 = MatchingNames0_69;
    else
      MatchingNames1_70 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__usage__record_resolved_item_2__ho6_9_p_0(ModuleQualifier_68, SymName_4, Arity_5, &Recorded_71, MatchingNames1_70, &MatchingNames_72, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_14_14);
    switch (Recorded_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IdSet_9 = IdSet0_8;
        break;
      case (MR_Integer) 1:
        {
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), ((MR_Box) (UnqualifiedName_67)), ((MR_Box) (MatchingNames_72)), IdSet0_8, &IdSet_9);
        }
        break;
    }
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 4))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 6))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 7))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 8))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemSet0_7, (MR_Integer) 9))));
    {
      ItemSet_10 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemSet_10, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), ItemSet_10, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), ItemSet_10, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), ItemSet_10, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), ItemSet_10, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), ItemSet_10, 5) = ((MR_Box) (IdSet_9));
      MR_hl_field(MR_mktag(0), ItemSet_10, 6) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), ItemSet_10, 7) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), ItemSet_10, 8) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), ItemSet_10, 9) = ((MR_Box) (Var_40));
    }
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 2))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 3))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ItemSet_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_List_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Map0_17;

      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), &Map0_17);
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), Map0_17, ((MR_Box) (ModuleQualifier_1)));
      if (succeeded)
      {
        *Recorded_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
        *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
      }
      else
      {
        MR_Word Map_90;

        recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, Map0_17, &Map_90, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
        switch (*Recorded_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Arity_3));
                MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Map_90));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Integer ThisArity_34;
      MR_Word ArityMap0_35;
      MR_Word ListRest0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_6, (MR_Integer) 0))));

      ThisArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
      ArityMap0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
      succeeded = (Arity_3 < ThisArity_34);
      if (succeeded)
      {
        MR_Word NewArityMap0_37;

        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), &NewArityMap0_37);
        succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), NewArityMap0_37, ((MR_Box) (ModuleQualifier_1)));
        if (succeeded)
        {
          *Recorded_5 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
          *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
        }
        else
        {
          MR_Word NewArityMap_91;

          recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, NewArityMap0_37, &NewArityMap_91, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_48;

                {
                  Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (NewArityMap_91));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_6));
                }
              }
              break;
          }
        }
      }
      else
      {
        succeeded = (Arity_3 == ThisArity_34);
        if (succeeded)
        {
          MR_Word ArityMap_39;

          recompilation__usage__record_resolved_item_3__ho7_9_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ArityMap0_35, &ArityMap_39, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_51;

                {
                  Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ArityMap_39));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ListRest0_36));
                }
              }
              break;
          }
        }
        else
        {
          MR_Word ListRest_40;

          recompilation__usage__record_resolved_item_2__ho6_9_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ListRest0_36, &ListRest_40, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ListRest_40));
              }
              break;
          }
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
  MR_Word ModuleQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_ResolvedMap_0_17,
  MR_Word * STATE_VARIABLE_ResolvedMap_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (ModuleQualifier_10)));
    if (succeeded)
    {
      *Recorded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      *STATE_VARIABLE_ResolvedMap_18 = STATE_VARIABLE_ResolvedMap_0_17;
    }
    else
      recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_10, SymName_11, Arity_12, Recorded_14, STATE_VARIABLE_ResolvedMap_0_17, STATE_VARIABLE_ResolvedMap_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
}

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_5;

    recompilation__usage__find_items_used_by_functor_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_5));
  }
}

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
  MR_Word ModuleQualifier_9,
  MR_Word SymName_10,
  MR_Integer Arity_11,
  MR_Word * Recorded_12,
  MR_Word STATE_VARIABLE_ResolvedCtorMap_0_18,
  MR_Word * STATE_VARIABLE_ResolvedCtorMap_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
    MR_Word MatchingCtors_16;
    MR_String Name_17;
    MR_Word Var_22;
    MR_Box conv1_STATE_VARIABLE_Info_21;

    recompilation__usage__find_matching_functors_4_p_0(ModuleInfo_15, SymName_10, Arity_11, &MatchingCtors_16);
    Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Name_17));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Arity_11));
    }
    mercury__set__fold_4_p_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_22, MatchingCtors_16, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv1_STATE_VARIABLE_Info_21);
    *STATE_VARIABLE_Info_21 = ((MR_Word) (conv1_STATE_VARIABLE_Info_21));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), MatchingCtors_16);
    if (succeeded)
    {
      *Recorded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_ResolvedCtorMap_19 = STATE_VARIABLE_ResolvedCtorMap_0_18;
    }
    else
    {
      *Recorded_12 = (MR_Integer) 1;
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), ((MR_Box) (ModuleQualifier_9)), ((MR_Box) (MatchingCtors_16)), STATE_VARIABLE_ResolvedCtorMap_0_18, STATE_VARIABLE_ResolvedCtorMap_19);
    }
  }
}

static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_48;

    conv3_LambdaHeadVar__2_48 = recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_48));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_ResolvedCtor_10;

    succeeded = recompilation__usage__get_pred_or_func_ctors_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ResolvedCtor_10);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_ResolvedCtor_10));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_42;

    conv0_LambdaHeadVar__2_42 = recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_42));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SymName_6,
  MR_Integer Arity_7,
  MR_Word * ResolvedConstructors_8)
{
  {
    MR_bool succeeded;
    MR_Word Ctors_9;
    MR_Word ConsId_10;
    MR_Word ConsDefns1_12;
    MR_Word ConsDefns_16;
    MR_Word MatchingConstructors_17;
    MR_Word PredicateTable_21;
    MR_Word PredIds_22;
    MR_Word MatchingPreds_23;
    MR_Word MatchingFields_28;
    MR_Word Var_38;
    MR_Word Var_45;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word ConsDefns0_11;
    MR_Word ConsDefns2_15;
    MR_Word SymNameMinusNew_13;
    MR_Word ConsIdMinusNew_14;
    MR_Word Var_39;
    MR_Word FieldDefns_27;
    MR_Word TypeCtorInfo_78_78;
    MR_Word TypeInfo_79_79;
    MR_Word FieldName_25;
    MR_Word CtorFields_26;
    MR_Integer Var_81;
    MR_Word Var_24;
    MR_Box conv2_FieldDefns_27;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_9);
    Var_38 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_10, 1) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(3), ConsId_10, 2) = ((MR_Box) (Arity_7));
      MR_hl_field(MR_mktag(3), ConsId_10, 3) = ((MR_Box) (Var_38));
    }
    succeeded = hlds__hlds_data__search_cons_table_3_p_0(Ctors_9, ConsId_10, &ConsDefns0_11);
    if (succeeded)
      ConsDefns1_12 = ConsDefns0_11;
    else
      ConsDefns1_12 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(SymName_6, &SymNameMinusNew_13);
    if (succeeded)
    {
      Var_39 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        ConsIdMinusNew_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsIdMinusNew_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsIdMinusNew_14, 1) = ((MR_Box) (SymNameMinusNew_13));
        MR_hl_field(MR_mktag(3), ConsIdMinusNew_14, 2) = ((MR_Box) (Arity_7));
        MR_hl_field(MR_mktag(3), ConsIdMinusNew_14, 3) = ((MR_Box) (Var_39));
      }
      succeeded = hlds__hlds_data__search_cons_table_3_p_0(Ctors_9, ConsIdMinusNew_14, &ConsDefns2_15);
    }
    if (succeeded)
    {
      ConsDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0), ConsDefns1_12, ConsDefns2_15);
    }
    else
      ConsDefns_16 = ConsDefns1_12;
    MatchingConstructors_17 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage_scalar_common_1[44]), ConsDefns_16);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredicateTable_21);
    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_21, (MR_Integer) 1, SymName_6, &PredIds_22);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (Arity_7));
    }
    MatchingPreds_23 = mercury__list__filter_map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Var_45, PredIds_22);
    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_5, SymName_6, &Var_81, &Var_24, &FieldName_25);
    if (succeeded)
    {
      succeeded = (Arity_7 == Var_81);
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_5, &CtorFields_26);
        TypeCtorInfo_78_78 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        TypeInfo_79_79 = (MR_Word) (&recompilation__usage_scalar_common_2[7]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_78_78, TypeInfo_79_79, CtorFields_26, ((MR_Box) (FieldName_25)), &conv2_FieldDefns_27);
        if (succeeded)
        {
          FieldDefns_27 = ((MR_Word) (conv2_FieldDefns_27));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MatchingFields_28 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage_scalar_common_1[45]), FieldDefns_27);
    }
    else
      MatchingFields_28 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MatchingFields_28));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MatchingPreds_23));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MatchingConstructors_17));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    Var_54 = mercury__list__condense_1_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Var_55);
    *ResolvedConstructors_8 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Var_54);
  }
}

static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
  MR_Word VisibleModule_4,
  MR_Word STATE_VARIABLE_ImportedItemsMap_0_7,
  MR_Word * STATE_VARIABLE_ImportedItemsMap_8)
{
  {
    MR_Word ModuleItems_6;
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&recompilation__usage_scalar_common_1[0]));
    ModuleItems_6 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ((MR_Box) (Var_9)));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_3[0]), ((MR_Box) (VisibleModule_4)), ((MR_Box) (ModuleItems_6)), STATE_VARIABLE_ImportedItemsMap_0_7, STATE_VARIABLE_ImportedItemsMap_8);
  }
}

static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
  MR_Word ResolvedFunctor_4)
{
  switch (MR_tag((MR_Word) ResolvedFunctor_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_4, (MR_Integer) 1))));
        MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_4, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_4, (MR_Integer) 3))));

        parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_8);
        mercury__io__write_string_3_p_0((MR_String) "(");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_7);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_int_3_p_0(Arity_9);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResolvedFunctor_4, (MR_Integer) 0))));
        MR_Word TypeName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_10, (MR_Integer) 0))));
        MR_Integer Arity_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_10, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "ctor(");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, TypeName_11);
        mercury__io__write_string_3_p_0((MR_String) "/");
        mercury__io__write_int_3_p_0(Arity_53);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeItemName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResolvedFunctor_4, (MR_Integer) 0))));
        MR_Word ConsItemName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResolvedFunctor_4, (MR_Integer) 1))));
        MR_Integer TypeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeItemName_12, (MR_Integer) 1))));
        MR_Word ConsName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsItemName_13, (MR_Integer) 0))));
        MR_Integer ConsArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsItemName_13, (MR_Integer) 1))));
        MR_Word TypeName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeItemName_12, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "field(");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, TypeName_54);
        mercury__io__write_string_3_p_0((MR_String) "/");
        mercury__io__write_int_3_p_0(TypeArity_14);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, ConsName_15);
        mercury__io__write_string_3_p_0((MR_String) "/");
        mercury__io__write_int_3_p_0(ConsArity_16);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word WriteMatches_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TypeInfo_22_22;
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Matches_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MatchList_9;

    mercury__io__write_int_3_p_0(Arity_6);
    mercury__io__write_string_3_p_0((MR_String) " - (");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_for_T_19, Matches_7, &MatchList_9);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_T_19));
    }
    mercury__io__write_list_5_p_0(TypeInfo_22_22, (MR_Word) (MatchList_9), (MR_String) ",\n\t\t\t\t", (MR_Word) (WriteMatches_5));
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_resolved_item_set_3_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word WriteMatches_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_29_29;
    MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word MatchesAL_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Word Var_16;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Name_6));
    }
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Var_11);
    mercury__io__write_string_3_p_0((MR_String) " - (");
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (recompilation__usage__write_resolved_item_set_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (WriteMatches_5));
    }
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_27_27));
    }
    mercury__io__write_list_5_p_0(TypeInfo_29_29, (MR_Word) (MatchesAL_7), (MR_String) ",\n\t\t\t", (MR_Word) (Var_16));
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_resolved_functor_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Qualifier_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MatchingCtors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_12;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Qualifier_4);
    mercury__io__write_string_3_p_0((MR_String) " => (");
    Var_12 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), MatchingCtors_5);
    mercury__io__write_list_5_p_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Var_12, (MR_String) ", ", (MR_Word) (&recompilation__usage_scalar_common_1[43]));
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Qualifier_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PredIdModuleNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ModuleNames_7;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_26;

    Var_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__usage_scalar_common_1[4]), PredIdModuleNames_5);
    ModuleNames_7 = mercury__assoc_list__values_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_10);
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Qualifier_4);
    succeeded = (ModuleNames_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleNames_7, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleNames_7, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Qualifier_4, Var_26);
      if (succeeded)
        succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      mercury__io__write_string_3_p_0((MR_String) " => (");
      mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_7, (MR_String) ", ", (MR_Word) (&recompilation__usage_scalar_common_1[42]));
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Qualifier_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Qualifier_4);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Qualifier_4, ModuleName_5);
    if (!(succeeded))
    {
      mercury__io__write_string_3_p_0((MR_String) " => ");
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_5);
    }
  }
}

static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_simple_item_matches_4_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Name_4;
    MR_Integer Arity_5;
    MR_Word Matches_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MatchList_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_13;

    Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Name_4));
    }
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, Var_13);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(Arity_5);
    mercury__io__write_string_3_p_0((MR_String) " - (");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Matches_6, &MatchList_8);
    mercury__io__write_list_5_p_0((MR_Word) (&recompilation__usage_scalar_common_1[12]), MatchList_8, (MR_String) ", ", (MR_Word) (&recompilation__usage_scalar_common_1[41]));
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ClassName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ClassArity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ClassName_4);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(ClassArity_5);
  }
}

static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_50;

    conv2_LambdaHeadVar__3_50 = recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__268__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_50));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
  MR_Word RecompInfo_8,
  MR_Word TimestampMap_9,
  MR_Word ModuleInstances_10,
  MR_Word ModuleName_11,
  MR_Word ModuleUsedItems_12)
{
  {
    MR_bool succeeded;
    MR_Word FileKind_14;
    MR_Word ModuleTimestamp_15;
    MR_Word NeedQualifier_16;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Box conv0_Var_36;
    MR_Word ModuleVersions_17;
    MR_Word TypeCtorInfo_66_66;
    MR_Word Var_46;
    MR_Box conv1_ModuleVersions_17;

    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "(");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_11);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), TimestampMap_9, ((MR_Box) (ModuleName_11)), &conv0_Var_36);
    Var_36 = ((MR_Word) (conv0_Var_36));
    FileKind_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
    ModuleTimestamp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
    NeedQualifier_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_37 = parse_tree__file_kind__file_kind_to_extension_1_f_0(FileKind_14);
    mercury__io__write_string_3_p_0(Var_37);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    recompilation__write_version_number_3_p_0(ModuleTimestamp_15);
    switch (NeedQualifier_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) ", used)");
        }
        break;
    }
    succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecompInfo_8, (MR_Integer) 3))));
      TypeCtorInfo_66_66 = (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeCtorInfo_66_66, Var_46, ((MR_Box) (ModuleName_11)), &conv1_ModuleVersions_17);
      if (succeeded)
      {
        ModuleVersions_17 = ((MR_Word) (conv1_ModuleVersions_17));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word ModuleItemVersions_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleVersions_17, (MR_Integer) 0))));
      MR_Word ModuleInstanceVersions_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleVersions_17, (MR_Integer) 1))));
      MR_Word ModuleUsedItemVersions_20;
      MR_Word ModuleUsedInstanceVersions_26;
      MR_Word ModuleUsedVersionNumbers_27;
      MR_Word Var_47;
      MR_Word Var_51;
      MR_Word ModuleUsedInstances_25;
      MR_Box conv3_ModuleUsedInstances_25;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[3]));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (recompilation__usage__write_module_name_and_used_items_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleUsedItems_12));
      }
      Var_51 = mercury__map__init_0_f_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
      ModuleUsedItemVersions_20 = recompilation__map_ids_3_f_0((MR_Word) (&recompilation__usage_scalar_common_1[1]), (MR_Word) (&recompilation__usage_scalar_common_1[1]), Var_47, ModuleItemVersions_18, ((MR_Box) (Var_51)));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), ModuleInstances_10, ((MR_Box) (ModuleName_11)), &conv3_ModuleUsedInstances_25);
      if (succeeded)
      {
        ModuleUsedInstances_25 = ((MR_Word) (conv3_ModuleUsedInstances_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__select_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ModuleInstanceVersions_19, ModuleUsedInstances_25, &ModuleUsedInstanceVersions_26);
      }
      else
      {
        mercury__map__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), &ModuleUsedInstanceVersions_26);
      }
      mercury__io__write_string_3_p_0((MR_String) " => ");
      {
        ModuleUsedVersionNumbers_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleUsedVersionNumbers_27, 0) = ((MR_Box) (ModuleUsedItemVersions_20));
        MR_hl_field(MR_mktag(0), ModuleUsedVersionNumbers_27, 1) = ((MR_Box) (ModuleUsedInstanceVersions_26));
      }
      recompilation__version__write_version_numbers_3_p_0(ModuleUsedVersionNumbers_27);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

void MR_CALL 
recompilation__usage__write_usage_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word NestedSubModules_7,
  MR_Word MaybeTimestampMap_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeRecompInfo_10;
    MR_Word RecompInfo_11;
    MR_Word TimestampMap_12;

    hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(ModuleInfo_6, &MaybeRecompInfo_10);
    succeeded = (MaybeRecompInfo_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RecompInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo_10, (MR_Integer) 0))));
      succeeded = (MaybeTimestampMap_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        TimestampMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_8, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Globals_13;
      MR_Word Verbose_14;
      MR_Word ModuleName_15;
      MR_String FileName_16;
      MR_Word FileResult_17;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_13);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 60, &Verbose_14);
      libs__file_util__maybe_write_string_4_p_0(Verbose_14, (MR_String) "% Writing recompilation compilation dependency information\n");
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_15);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, (MR_String) ".used", ModuleName_15, &FileName_16);
      mercury__io__open_output_4_p_0(FileName_16, &FileResult_17);
      if (((MR_tag((MR_Word) FileResult_17)) == (MR_Integer) 1))
      {
        MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileResult_17, (MR_Integer) 0))));
        MR_String IOErrorMessage_22;

        mercury__io__error_message_2_p_0(IOError_21, &IOErrorMessage_22);
        mercury__io__write_string_3_p_0((MR_String) "\nError opening \140");
        mercury__io__write_string_3_p_0(FileName_16);
        mercury__io__write_string_3_p_0((MR_String) "\'for output: ");
        mercury__io__write_string_3_p_0(IOErrorMessage_22);
        mercury__io__write_string_3_p_0((MR_String) ".\n");
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word Stream0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileResult_17, (MR_Integer) 0))));
        MR_Word OldStream_19;
        MR_Word Stream_20;
        MR_Word Var_43;

        mercury__io__set_output_stream_4_p_0(Stream0_18, &OldStream_19);
        Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_7);
        recompilation__usage__write_usage_file_2_6_p_0(ModuleInfo_6, Var_43, RecompInfo_11, TimestampMap_12);
        mercury__io__set_output_stream_4_p_0(OldStream_19, &Stream_20);
        mercury__io__close_output_3_p_0(Stream_20);
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_module_name_and_used_items_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_classname_and_arity_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word NestedSubModules_8,
  MR_Word RecompInfo_9,
  MR_Word TimestampMap_10)
{
  {
    MR_bool succeeded;
    MR_Word ThisModuleName_12;
    MR_Word ThisModuleTimestamp_14;
    MR_Word UsedItems_18;
    MR_Word ResolvedUsedItems_19;
    MR_Word UsedClasses_20;
    MR_Word ImportedItems_21;
    MR_Word ModuleInstances_22;
    MR_Integer Var_27;
    MR_Integer Var_31;
    MR_Word Var_35;
    MR_Word Var_95;
    MR_Word Var_101;
    MR_Box conv0_Var_35;
    MR_Word Var_131;
    MR_Box conv1_STATE_VARIABLE_IO_96_96;

    Var_27 = recompilation__usage__usage_file_version_number_0_f_0();
    mercury__io__write_int_3_p_0(Var_27);
    mercury__io__write_string_3_p_0((MR_String) ",");
    Var_31 = recompilation__version__version_numbers_version_number_0_f_0();
    mercury__io__write_int_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ThisModuleName_12);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), TimestampMap_10, ((MR_Box) (ThisModuleName_12)), &conv0_Var_35);
    Var_35 = ((MR_Word) (conv0_Var_35));
    ThisModuleTimestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0((MR_String) "(");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ThisModuleName_12);
    mercury__io__write_string_3_p_0((MR_String) ", \".m\", ");
    recompilation__write_version_number_3_p_0(ThisModuleTimestamp_14);
    mercury__io__write_string_3_p_0((MR_String) ").\n\n");
    if ((NestedSubModules_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "sub_modules.\n\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "sub_modules(");
      mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_8, (MR_String) ", ", (MR_Word) (&recompilation__usage_scalar_common_1[39]));
      mercury__io__write_string_3_p_0((MR_String) ").\n\n");
    }
    UsedItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecompInfo_9, (MR_Integer) 1))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecompInfo_9, (MR_Integer) 2))));
    recompilation__usage__find_all_used_imported_items_7_p_0(ModuleInfo_7, UsedItems_18, Var_101, &ResolvedUsedItems_19, &UsedClasses_20, &ImportedItems_21, &ModuleInstances_22);
    Var_131 = recompilation__init_used_items_0_f_0();
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__usage_scalar_common_3[2]), ((MR_Box) (UsedItems_18)), ((MR_Box) (Var_131)));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "used_items.\n");
    }
    else
    {
      MR_Word STATE_VARIABLE_WriteComma_60_60;
      MR_Word STATE_VARIABLE_WriteComma_63_63;
      MR_Word STATE_VARIABLE_WriteComma_66_66;
      MR_Word STATE_VARIABLE_WriteComma_69_69;
      MR_Word STATE_VARIABLE_WriteComma_72_72;
      MR_Word STATE_VARIABLE_WriteComma_75_75;
      MR_Word STATE_VARIABLE_WriteComma_78_78;
      MR_Word Var_80;
      MR_Word STATE_VARIABLE_WriteComma_81_81;

      mercury__io__write_string_3_p_0((MR_String) "used_items(\n\t");
      recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 0, ResolvedUsedItems_19, (MR_Integer) 0, &STATE_VARIABLE_WriteComma_60_60);
      recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 1, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_60_60, &STATE_VARIABLE_WriteComma_63_63);
      recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 2, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_63_63, &STATE_VARIABLE_WriteComma_66_66);
      recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 3, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_66_66, &STATE_VARIABLE_WriteComma_69_69);
      recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 4, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_69_69, &STATE_VARIABLE_WriteComma_72_72);
      recompilation__usage__write_pred_or_func_matches_6_p_0((MR_Integer) 6, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_72_72, &STATE_VARIABLE_WriteComma_75_75);
      recompilation__usage__write_pred_or_func_matches_6_p_0((MR_Integer) 7, ResolvedUsedItems_19, STATE_VARIABLE_WriteComma_75_75, &STATE_VARIABLE_WriteComma_78_78);
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResolvedUsedItems_19, (MR_Integer) 5))));
      recompilation__usage__write_functor_matches_5_p_0(Var_80, STATE_VARIABLE_WriteComma_78_78, &STATE_VARIABLE_WriteComma_81_81);
      mercury__io__write_string_3_p_0((MR_String) "\n).\n\n");
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), UsedClasses_20);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "used_classes.\n");
    }
    else
    {
      MR_Word Var_89;

      mercury__io__write_string_3_p_0((MR_String) "used_classes(");
      Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), UsedClasses_20);
      mercury__io__write_list_5_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), Var_89, (MR_String) ", ", (MR_Word) (&recompilation__usage_scalar_common_1[40]));
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&recompilation__usage_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (RecompInfo_9));
      MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) (TimestampMap_10));
      MR_hl_field(MR_mktag(0), Var_95, 5) = ((MR_Box) (ModuleInstances_22));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_95, ImportedItems_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_96_96);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "done.\n");
  }
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImportedItemsMap_8;

    recompilation__usage__insert_into_imported_items_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImportedItemsMap_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImportedItemsMap_8));
  }
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UsedItems_9,
  MR_Word Dependencies_10,
  MR_Word * ResolvedUsedItems_11,
  MR_Word * UsedTypeClasses_12,
  MR_Word * ImportedItems_13,
  MR_Word * ModuleInstances_14)
{
  {
    MR_Word AllVisibleModules_15;
    MR_Word ModuleName_16;
    MR_Word ImportedVisibleModules_17;
    MR_Word ImportedItems0_18;
    MR_Word ImportedItems1_19;
    MR_Word ItemsToProcess0_20;
    MR_Word ModuleUsedClasses_21;
    MR_Word UsedClasses0_22;
    MR_Word Types_23;
    MR_Word TypeBodies_24;
    MR_Word Modes_25;
    MR_Word Insts_26;
    MR_Word Classes_27;
    MR_Word ResolvedCtors_33;
    MR_Word ResolvedPreds_34;
    MR_Word ResolvedFuncs_35;
    MR_Word ResolvedMutables_36;
    MR_Word ResolvedForeignProcs_37;
    MR_Word ResolvedUsedItems0_38;
    MR_Word Info0_39;
    MR_Word Info_40;
    MR_Box conv1_ImportedItems1_19;

    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_8, &AllVisibleModules_15);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_16);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_16)), AllVisibleModules_15, &ImportedVisibleModules_17);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_3[0]), &ImportedItems0_18);
    mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_1[13]), (MR_Word) (&recompilation__usage_scalar_common_1[38]), ImportedVisibleModules_17, ((MR_Box) (ImportedItems0_18)), &conv1_ImportedItems1_19);
    ImportedItems1_19 = ((MR_Word) (conv1_ImportedItems1_19));
    mercury__queue__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), &ItemsToProcess0_20);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), &ModuleUsedClasses_21);
    mercury__set__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), &UsedClasses0_22);
    Types_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_9, (MR_Integer) 0))));
    TypeBodies_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_9, (MR_Integer) 1))));
    Modes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_9, (MR_Integer) 2))));
    Insts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_9, (MR_Integer) 3))));
    Classes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_9, (MR_Integer) 4))));
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), &ResolvedCtors_33);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &ResolvedPreds_34);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &ResolvedFuncs_35);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &ResolvedMutables_36);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &ResolvedForeignProcs_37);
    {
      ResolvedUsedItems0_38 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 0) = ((MR_Box) (Types_23));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 1) = ((MR_Box) (TypeBodies_24));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 2) = ((MR_Box) (Modes_25));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 3) = ((MR_Box) (Insts_26));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 4) = ((MR_Box) (Classes_27));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 5) = ((MR_Box) (ResolvedCtors_33));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 6) = ((MR_Box) (ResolvedPreds_34));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 7) = ((MR_Box) (ResolvedFuncs_35));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 8) = ((MR_Box) (ResolvedMutables_36));
      MR_hl_field(MR_mktag(0), ResolvedUsedItems0_38, 9) = ((MR_Box) (ResolvedForeignProcs_37));
    }
    {
      Info0_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_39, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_39, 1) = ((MR_Box) (ItemsToProcess0_20));
      MR_hl_field(MR_mktag(0), Info0_39, 2) = ((MR_Box) (ImportedItems1_19));
      MR_hl_field(MR_mktag(0), Info0_39, 3) = ((MR_Box) (ModuleUsedClasses_21));
      MR_hl_field(MR_mktag(0), Info0_39, 4) = ((MR_Box) (Dependencies_10));
      MR_hl_field(MR_mktag(0), Info0_39, 5) = ((MR_Box) (ResolvedUsedItems0_38));
      MR_hl_field(MR_mktag(0), Info0_39, 6) = ((MR_Box) (UsedClasses0_22));
    }
    recompilation__usage__find_all_used_imported_items_2_3_p_0(UsedItems_9, Info0_39, &Info_40);
    *ImportedItems_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 2))));
    *ModuleInstances_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 3))));
    *ResolvedUsedItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 5))));
    *UsedTypeClasses_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_40, (MR_Integer) 6))));
  }
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    recompilation__usage__find_items_used_by_instances_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
  MR_Word UsedItems_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word ModuleInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    MR_Word Instances_7;
    MR_Word Predicates_8;
    MR_Word Functions_9;
    MR_Word Constructors_10;
    MR_Word Types_11;
    MR_Word TypeBodies_12;
    MR_Word Modes_13;
    MR_Word Classes_14;
    MR_Word Insts_15;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Box conv1_STATE_VARIABLE_Info_19_19;

    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_6, &Instances_7);
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[37]), Instances_7, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv1_STATE_VARIABLE_Info_19_19);
    STATE_VARIABLE_Info_19_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19_19));
    Predicates_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 6))));
    recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 0, Predicates_8, STATE_VARIABLE_Info_19_19, &STATE_VARIABLE_Info_21_21);
    Functions_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 7))));
    recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 1, Functions_9, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_23_23);
    Constructors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 5))));
    recompilation__usage__find_items_used_by_functors_3_p_0(Constructors_10, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_24_24);
    Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 0))));
    recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 0, Types_11, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_26_26);
    TypeBodies_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 1))));
    recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 1, TypeBodies_12, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_28_28);
    Modes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 2))));
    recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 2, Modes_13, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_30_30);
    Classes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 4))));
    recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 4, Classes_14, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_32);
    Insts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_4, (MR_Integer) 3))));
    recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 3, Insts_15, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_34_34);
    recompilation__usage__process_imported_item_queue_2_p_0(STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
  MR_Word ItemType_5,
  MR_Word Set_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_Info_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ItemType_5));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[2]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_10, Set_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_9);
    *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_functors_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_Info_7;

    mercury__map__foldl_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[2]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[36]), Set_4, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv1_STATE_VARIABLE_Info_7);
    *STATE_VARIABLE_Info_7 = ((MR_Word) (conv1_STATE_VARIABLE_Info_7));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    recompilation__usage__find_items_used_by_preds_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Set_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_Info_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredOrFunc_5));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[2]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_10, Set_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_9);
    *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Queue0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Queue_5;
    MR_Word STATE_VARIABLE_Info_8_8;
    MR_Word Var_9;
    MR_Word STATE_VARIABLE_Info_10_10;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_9 = mercury__queue__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    {
      STATE_VARIABLE_Info_8_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_8_8, 6) = ((MR_Box) (Var_24));
    }
    recompilation__usage__process_imported_item_queue_2_3_p_0(Queue0_4, STATE_VARIABLE_Info_8_8, &STATE_VARIABLE_Info_10_10);
    Queue_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_10_10, (MR_Integer) 1))));
    succeeded = mercury__queue__is_empty_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), Queue_5);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_10_10;
    else
    {
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_10_10;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
  MR_Word STATE_VARIABLE_Queue_0_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Item_6;
    MR_Word STATE_VARIABLE_Queue_12_12;
    MR_Box conv0_Item_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), &conv0_Item_6, STATE_VARIABLE_Queue_0_9, &STATE_VARIABLE_Queue_12_12);
    if (succeeded)
    {
      Item_6 = ((MR_Word) (conv0_Item_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ItemType_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Item_6, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ItemId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_13_13;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

      recompilation__usage__find_items_used_by_item_4_p_0(ItemType_7, ItemId_8, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_13_13);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Queue_0_9 = STATE_VARIABLE_Queue_12_12;
      next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_13_13;
      STATE_VARIABLE_Queue_0_9 = next_value_of_STATE_VARIABLE_Queue_0_9;
      STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
    break;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_class_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
        break;
      case (MR_Integer) 7:
        {
          recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 1, HeadVar__2_2, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
        }
        break;
      case (MR_Integer) 5:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_item\'/4", (MR_String) "functor");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ModuleInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
          MR_Word Insts_39;
          MR_Word UserInstTable_40;
          MR_Word InstId_41;
          MR_Word InstDefn_42;
          MR_Box conv0_InstDefn_42;

          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_38, &Insts_39);
          hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(Insts_39, &UserInstTable_40);
          InstId_41 = recompilation__item_name_to_inst_id_1_f_0(HeadVar__2_2);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_40, ((MR_Box) (InstId_41)), &conv0_InstDefn_42);
          InstDefn_42 = ((MR_Word) (conv0_InstDefn_42));
          recompilation__usage__find_items_used_by_inst_defn_3_p_0(InstDefn_42, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
          MR_Word Modes_29;
          MR_Word ModeDefns_30;
          MR_Word ModeId_31;
          MR_Word ModeDefn_32;
          MR_Box conv1_ModeDefn_32;

          hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_28, &Modes_29);
          hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_29, &ModeDefns_30);
          ModeId_31 = recompilation__item_name_to_mode_id_1_f_0(HeadVar__2_2);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_30, ((MR_Box) (ModeId_31)), &conv1_ModeDefn_32);
          ModeDefn_32 = ((MR_Word) (conv1_ModeDefn_32));
          recompilation__usage__find_items_used_by_mode_defn_3_p_0(ModeDefn_32, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
        }
        break;
      case (MR_Integer) 8:
        *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
        break;
      case (MR_Integer) 6:
        {
          recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 0, HeadVar__2_2, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
          MR_Word TypeTable_8;
          MR_Word TypeCtor_9;
          MR_Word TypeDefn_10;
          MR_Word TypeBody_11;
          MR_Word Type_12;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_8);
          TypeCtor_9 = recompilation__item_name_to_type_ctor_1_f_0(HeadVar__2_2);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_9, &TypeDefn_10);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeBody_11);
          succeeded = ((MR_tag((MR_Word) TypeBody_11)) == (MR_Integer) 2);
          if (succeeded)
          {
            Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_11, (MR_Integer) 0))));
            recompilation__usage__find_items_used_by_type_3_p_0(Type_12, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
          }
          else
            *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
          MR_Word TypeTable_19;
          MR_Word TypeCtor_20;
          MR_Word TypeDefn_21;
          MR_Word TypeBody_22;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_18, &TypeTable_19);
          TypeCtor_20 = recompilation__item_name_to_type_ctor_1_f_0(HeadVar__2_2);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_19, TypeCtor_20, &TypeDefn_21);
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &TypeBody_22);
          recompilation__usage__find_items_used_by_type_body_3_p_0(TypeBody_22, STATE_VARIABLE_Info_0_3, STATE_VARIABLE_Info_4);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word ClassName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
          MR_Integer ClassArity_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word ClassId_50;
          MR_Word ModuleInfo_51;
          MR_Word Classes_52;
          MR_Word ClassDefn_53;
          MR_Word Constraints_54;
          MR_Word ClassInterface_55;
          MR_Word Instances_57;
          MR_Word STATE_VARIABLE_Info_61_61;
          MR_Word STATE_VARIABLE_Info_63_63;
          MR_Box conv2_ClassDefn_53;
          MR_Word InstanceDefns_58;
          MR_Box conv5_InstanceDefns_58;

          {
            ClassId_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_50, 0) = ((MR_Box) (ClassName_48));
            MR_hl_field(MR_mktag(0), ClassId_50, 1) = ((MR_Box) (ClassArity_49));
          }
          ModuleInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_51, &Classes_52);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_52, ((MR_Box) (ClassId_50)), &conv2_ClassDefn_53);
          ClassDefn_53 = ((MR_Word) (conv2_ClassDefn_53));
          Constraints_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_53, (MR_Integer) 1))));
          ClassInterface_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_53, (MR_Integer) 6))));
          recompilation__usage__find_items_used_by_class_constraints_3_p_0(Constraints_54, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_61_61);
          if ((ClassInterface_55 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_63_63 = STATE_VARIABLE_Info_61_61;
          else
          {
            MR_Word Methods_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassInterface_55, (MR_Integer) 0))));
            MR_Box conv4_STATE_VARIABLE_Info_63_63;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[35]), Methods_56, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv4_STATE_VARIABLE_Info_63_63);
            STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv4_STATE_VARIABLE_Info_63_63));
          }
          hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_51, &Instances_57);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[6]), Instances_57, ((MR_Box) (ClassId_50)), &conv5_InstanceDefns_58);
          if (succeeded)
          {
            InstanceDefns_58 = ((MR_Word) (conv5_InstanceDefns_58));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_64;
            MR_Box conv7_STATE_VARIABLE_Info_4;

            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (HeadVar__2_2));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_64, InstanceDefns_58, ((MR_Box) (STATE_VARIABLE_Info_63_63)), &conv7_STATE_VARIABLE_Info_4);
            *STATE_VARIABLE_Info_4 = ((MR_Word) (conv7_STATE_VARIABLE_Info_4));
          }
          else
            *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_63_63;
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_Info_7;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[34]), Constraints_4, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv1_STATE_VARIABLE_Info_7);
    *STATE_VARIABLE_Info_7 = ((MR_Word) (conv1_STATE_VARIABLE_Info_7));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_6;
    MR_Word TypeArgs_7;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &TypeArgs_7);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_10_10;
      MR_Box conv1_STATE_VARIABLE_Info_9;

      recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_6, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_10_10);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[33]), TypeArgs_7, ((MR_Box) (STATE_VARIABLE_Info_10_10)), &conv1_STATE_VARIABLE_Info_9);
      *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
    }
    else
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    recompilation__usage__find_items_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word InstBody_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_4, (MR_Integer) 2))));
    MR_Word IFTC_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_4, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Info_17_17;

    if ((InstBody_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Info_17_17 = STATE_VARIABLE_Info_0_15;
    else
    {
      MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstBody_8, (MR_Integer) 0))));

      recompilation__usage__find_items_used_by_inst_3_p_0(Inst_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_17_17);
    }
    switch (MR_tag((MR_Word) IFTC_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(IFTC_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_17_17;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_17_17;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_17_17;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForTypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IFTC_9, (MR_Integer) 0))));

          recompilation__usage__find_items_used_by_type_ctor_3_p_0(ForTypeCtor_13, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MatchingTypeCtors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IFTC_9, (MR_Integer) 0))));
          MR_Box conv1_STATE_VARIABLE_Info_16;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[32]), MatchingTypeCtors_14, ((MR_Box) (STATE_VARIABLE_Info_17_17)), &conv1_STATE_VARIABLE_Info_16);
          *STATE_VARIABLE_Info_16 = ((MR_Word) (conv1_STATE_VARIABLE_Info_16));
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Mode_8;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_4, (MR_Integer) 2))));

    Mode_8 = (MR_Word) (Var_13);
    recompilation__usage__find_items_used_by_mode_3_p_0(Mode_8, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * STATE_VARIABLE_Info_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Inst1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Inst2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_9_9;

    recompilation__usage__find_items_used_by_inst_3_p_0(Inst1_4, STATE_VARIABLE_Info_0_2, &STATE_VARIABLE_Info_9_9);
    recompilation__usage__find_items_used_by_inst_3_p_0(Inst2_5, STATE_VARIABLE_Info_9_9, STATE_VARIABLE_Info_3);
  }
  else
  {
    MR_Word ModeName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ModeArity_14;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Box conv1_STATE_VARIABLE_Info_3;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_12, &ModeArity_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (ModeName_11));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ModeArity_14));
    }
    recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 2, Var_18, STATE_VARIABLE_Info_0_2, &STATE_VARIABLE_Info_19_19);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[31]), ArgInsts_12, ((MR_Box) (STATE_VARIABLE_Info_19_19)), &conv1_STATE_VARIABLE_Info_3);
    *STATE_VARIABLE_Info_3 = ((MR_Word) (conv1_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_12;

    recompilation__usage__find_items_used_by_bound_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_3;

    recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_25;

    recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_25)
{
  {
    MR_Word tscc_proc_2_input_1_InstName_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_25;

    // The code for TSCC PROC 1: pred recompilation.usage.find_items_used_by_inst/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred recompilation.usage.find_items_used_by_inst/3-0
    ;
    // proc 2 in TSCC: pred recompilation.usage.find_items_used_by_inst_name/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Inst_4 = tscc_proc_1_input_1_Inst_4;
      MR_Word STATE_VARIABLE_Info_0_24 = tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
      MR_Word STATE_VARIABLE_Info_25;

      switch (MR_tag((MR_Word) Inst_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          break;
        case (MR_Integer) 2:
          {
            MR_Word HOInstInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_4, (MR_Integer) 1))));

            if ((HOInstInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
            else
            {
              MR_Word Modes_12;
              MR_Word Var_34 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_9), (MR_Integer) 1));
              MR_Box conv3_STATE_VARIABLE_Info_25;

              Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[25]), Modes_12, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv3_STATE_VARIABLE_Info_25);
              STATE_VARIABLE_Info_25 = ((MR_Word) (conv3_STATE_VARIABLE_Info_25));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 3))));
                MR_Box conv5_STATE_VARIABLE_Info_25;

                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[26]), BoundInsts_17, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv5_STATE_VARIABLE_Info_25);
                STATE_VARIABLE_Info_25 = ((MR_Word) (conv5_STATE_VARIABLE_Info_25));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));

                if ((HOInstInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
                else
                {
                  MR_Word Modes_46;
                  MR_Word Var_49 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_55), (MR_Integer) 1));
                  MR_Box conv7_STATE_VARIABLE_Info_25;

                  Modes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[27]), Modes_46, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv7_STATE_VARIABLE_Info_25);
                  STATE_VARIABLE_Info_25 = ((MR_Word) (conv7_STATE_VARIABLE_Info_25));
                }
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_4 = SubInst_19;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_20;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
                MR_Word ArgInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
                MR_Integer Arity_23;
                MR_Word Var_27;
                MR_Word STATE_VARIABLE_Info_28_28;
                MR_Box conv1_STATE_VARIABLE_Info_25;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_22, &Arity_23);
                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_21));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_23));
                }
                recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, Var_27, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[24]), ArgInsts_22, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv1_STATE_VARIABLE_Info_25);
                STATE_VARIABLE_Info_25 = ((MR_Word) (conv1_STATE_VARIABLE_Info_25));
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_25;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstName_4 = tscc_proc_2_input_1_InstName_4;
      MR_Word STATE_VARIABLE_Info_0_22 = tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
      MR_Word STATE_VARIABLE_Info_23;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) InstName_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_4, (MR_Integer) 0))));
            MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_4, (MR_Integer) 1))));
            MR_Integer Arity_8;
            MR_Word Var_31;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Box conv13_STATE_VARIABLE_Info_23;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_7, &Arity_8);
            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_6));
              MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Arity_8));
            }
            recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, Var_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_32_32);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[30]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv13_STATE_VARIABLE_Info_23);
            STATE_VARIABLE_Info_23 = ((MR_Word) (conv13_STATE_VARIABLE_Info_23));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstA_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_4, (MR_Integer) 1))));
            MR_Word InstB_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Info_28_42;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;

            recompilation__usage__find_items_used_by_inst_3_p_0(InstA_40, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_28_42);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_41;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_28_42;
            tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_4, (MR_Integer) 0))));
            MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_4, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_Info_28_28;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;

            recompilation__usage__find_items_used_by_inst_3_p_0(InstA_9, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_28_28);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_28_28;
            tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubInstName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_37;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubInstName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_13;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubInstName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_39;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubInstName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_38;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 2))));
                MR_Word TypeCtor_47;
                MR_Word TypeArgs_48;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_47, &TypeArgs_48);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Info_10_49;
                  MR_Box conv9_STATE_VARIABLE_Info_23;

                  recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_47, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_10_49);
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[28]), TypeArgs_48, ((MR_Box) (STATE_VARIABLE_Info_10_49)), &conv9_STATE_VARIABLE_Info_23);
                  STATE_VARIABLE_Info_23 = ((MR_Word) (conv9_STATE_VARIABLE_Info_23));
                }
                else
                  STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_Info_24_24;
                MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 2))));
                MR_Word Type_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word TypeCtor_66;
                MR_Word TypeArgs_67;
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_35, &TypeCtor_66, &TypeArgs_67);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Info_10_68;
                  MR_Box conv11_STATE_VARIABLE_Info_24_24;

                  recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_66, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_10_68);
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[29]), TypeArgs_67, ((MR_Box) (STATE_VARIABLE_Info_10_68)), &conv11_STATE_VARIABLE_Info_24_24);
                  STATE_VARIABLE_Info_24_24 = ((MR_Word) (conv11_STATE_VARIABLE_Info_24_24));
                }
                else
                  STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_22;
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_24_24;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_25 = tscc_output_1_STATE_VARIABLE_Info_25;
    return;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_25)
{
  {
    MR_Word tscc_proc_1_input_1_Inst_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_25;

    // The code for TSCC PROC 2: pred recompilation.usage.find_items_used_by_inst_name/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred recompilation.usage.find_items_used_by_inst/3-0
    ;
    // proc 2 in TSCC: pred recompilation.usage.find_items_used_by_inst_name/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Inst_4 = tscc_proc_1_input_1_Inst_4;
      MR_Word STATE_VARIABLE_Info_0_24 = tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
      MR_Word STATE_VARIABLE_Info_25;

      switch (MR_tag((MR_Word) Inst_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          break;
        case (MR_Integer) 2:
          {
            MR_Word HOInstInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_4, (MR_Integer) 1))));

            if ((HOInstInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
            else
            {
              MR_Word Modes_12;
              MR_Word Var_34 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_9), (MR_Integer) 1));
              MR_Box conv3_STATE_VARIABLE_Info_25;

              Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[25]), Modes_12, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv3_STATE_VARIABLE_Info_25);
              STATE_VARIABLE_Info_25 = ((MR_Word) (conv3_STATE_VARIABLE_Info_25));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 3))));
                MR_Box conv5_STATE_VARIABLE_Info_25;

                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[26]), BoundInsts_17, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv5_STATE_VARIABLE_Info_25);
                STATE_VARIABLE_Info_25 = ((MR_Word) (conv5_STATE_VARIABLE_Info_25));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));

                if ((HOInstInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
                else
                {
                  MR_Word Modes_46;
                  MR_Word Var_49 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_55), (MR_Integer) 1));
                  MR_Box conv7_STATE_VARIABLE_Info_25;

                  Modes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[27]), Modes_46, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv7_STATE_VARIABLE_Info_25);
                  STATE_VARIABLE_Info_25 = ((MR_Word) (conv7_STATE_VARIABLE_Info_25));
                }
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_4 = SubInst_19;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_20;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
                MR_Word ArgInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
                MR_Integer Arity_23;
                MR_Word Var_27;
                MR_Word STATE_VARIABLE_Info_28_28;
                MR_Box conv1_STATE_VARIABLE_Info_25;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_22, &Arity_23);
                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_21));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_23));
                }
                recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, Var_27, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[24]), ArgInsts_22, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv1_STATE_VARIABLE_Info_25);
                STATE_VARIABLE_Info_25 = ((MR_Word) (conv1_STATE_VARIABLE_Info_25));
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_25;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstName_4 = tscc_proc_2_input_1_InstName_4;
      MR_Word STATE_VARIABLE_Info_0_22 = tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
      MR_Word STATE_VARIABLE_Info_23;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) InstName_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_4, (MR_Integer) 0))));
            MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_4, (MR_Integer) 1))));
            MR_Integer Arity_8;
            MR_Word Var_31;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Box conv13_STATE_VARIABLE_Info_23;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_7, &Arity_8);
            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_6));
              MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Arity_8));
            }
            recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, Var_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_32_32);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[30]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv13_STATE_VARIABLE_Info_23);
            STATE_VARIABLE_Info_23 = ((MR_Word) (conv13_STATE_VARIABLE_Info_23));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstA_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_4, (MR_Integer) 1))));
            MR_Word InstB_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Info_28_42;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;

            recompilation__usage__find_items_used_by_inst_3_p_0(InstA_40, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_28_42);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_41;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_28_42;
            tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_4, (MR_Integer) 0))));
            MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_4, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_Info_28_28;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;

            recompilation__usage__find_items_used_by_inst_3_p_0(InstA_9, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_28_28);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = STATE_VARIABLE_Info_28_28;
            tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubInstName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_37;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubInstName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_13;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubInstName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_39;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubInstName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_38;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 2))));
                MR_Word TypeCtor_47;
                MR_Word TypeArgs_48;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_47, &TypeArgs_48);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Info_10_49;
                  MR_Box conv9_STATE_VARIABLE_Info_23;

                  recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_47, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_10_49);
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[28]), TypeArgs_48, ((MR_Box) (STATE_VARIABLE_Info_10_49)), &conv9_STATE_VARIABLE_Info_23);
                  STATE_VARIABLE_Info_23 = ((MR_Word) (conv9_STATE_VARIABLE_Info_23));
                }
                else
                  STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_Info_24_24;
                MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 2))));
                MR_Word Type_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_4, (MR_Integer) 1))));
                MR_Word TypeCtor_66;
                MR_Word TypeArgs_67;
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_35, &TypeCtor_66, &TypeArgs_67);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Info_10_68;
                  MR_Box conv11_STATE_VARIABLE_Info_24_24;

                  recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_66, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_10_68);
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[29]), TypeArgs_67, ((MR_Box) (STATE_VARIABLE_Info_10_68)), &conv11_STATE_VARIABLE_Info_24_24);
                  STATE_VARIABLE_Info_24_24 = ((MR_Word) (conv11_STATE_VARIABLE_Info_24_24));
                }
                else
                  STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_22;
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_24_24;
                tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_25 = tscc_output_1_STATE_VARIABLE_Info_25;
    return;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_18;

    recompilation__usage__find_items_used_by_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
  MR_Word TypeBody_4,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeBody_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 0))));
          MR_Box conv1_STATE_VARIABLE_Info_15;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[22]), Ctors_6, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv1_STATE_VARIABLE_Info_15);
          *STATE_VARIABLE_Info_15 = ((MR_Word) (conv1_STATE_VARIABLE_Info_15));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_4, (MR_Integer) 0))));
          MR_Word TypeCtor_28;
          MR_Word TypeArgs_29;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(EqvType_10, &TypeCtor_28, &TypeArgs_29);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Info_10_30;
            MR_Box conv3_STATE_VARIABLE_Info_15;

            recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_28, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_10_30);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[23]), TypeArgs_29, ((MR_Box) (STATE_VARIABLE_Info_10_30)), &conv3_STATE_VARIABLE_Info_15);
            *STATE_VARIABLE_Info_15 = ((MR_Word) (conv3_STATE_VARIABLE_Info_15));
          }
          else
            *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));
    MR_Word Var_9;
    MR_Word Var_10;

    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_4, &Var_9, &Var_10);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word TypeCtorItem_12;

      TypeCtorItem_12 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_4);
      recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 0, TypeCtorItem_12, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    }
    else
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_bool succeeded = (ItemType_5 == (MR_Integer) 4);
    MR_Word STATE_VARIABLE_Info_14_14;
    MR_Word TypeCtorInfo_21_64;
    MR_Word TypeInfo_22_65;
    MR_Word TypeInfo_23_66;
    MR_Word TypeInfo_24_67;
    MR_Word ImportedItems_50;
    MR_Word ModuleName_51;
    MR_String Name_52;
    MR_Integer Arity_53;
    MR_Word ModuleIdSet_54;
    MR_Word ModuleItemIdSet_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv0_ModuleIdSet_54;
    MR_Box conv1_ModuleItemIdSet_55;

    if (succeeded)
    {
      MR_Word Classes0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));
      MR_Word Classes_9;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;

      mercury__set__insert_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), ((MR_Box) (ItemName_6)), Classes0_8, &Classes_9);
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5))));
      {
        STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (Classes_9));
      }
    }
    else
      STATE_VARIABLE_Info_14_14 = STATE_VARIABLE_Info_0_12;
    ImportedItems_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 2))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_6, (MR_Integer) 0))));
    Arity_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))));
      Name_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1))));
      TypeCtorInfo_21_64 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      TypeInfo_22_65 = (MR_Word) (&recompilation__usage_scalar_common_3[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_64, TypeInfo_22_65, ImportedItems_50, ((MR_Box) (ModuleName_51)), &conv0_ModuleIdSet_54);
      if (succeeded)
      {
        ModuleIdSet_54 = ((MR_Word) (conv0_ModuleIdSet_54));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeInfo_23_66 = (MR_Word) (&recompilation__usage_scalar_common_2[0]);
        conv1_ModuleItemIdSet_55 = recompilation__extract_ids_2_f_0(TypeInfo_23_66, ModuleIdSet_54, ItemType_5);
        ModuleItemIdSet_55 = ((MR_Word) (conv1_ModuleItemIdSet_55));
        TypeInfo_24_67 = (MR_Word) (&recompilation__usage_scalar_common_1[0]);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Name_52));
          MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Arity_53));
        }
        succeeded = mercury__set__member_2_p_0(TypeInfo_24_67, ((MR_Box) (Var_57)), ModuleItemIdSet_55);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_14_14;
    else
    {
      MR_Word ModuleName_70;
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_6, (MR_Integer) 0))));
      MR_Word Var_74;
      MR_Word Var_81;

      succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleName_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 0))));
        hlds__hlds_module__module_info_get_name_2_p_0(Var_74, &Var_81);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_70, Var_81);
      }
      if (succeeded)
        *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_14_14;
      else
      {
        MR_Word Queue0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 1))));
        MR_Word Queue_11;
        MR_Word Var_15;
        MR_Word STATE_VARIABLE_Info_16_16;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = (MR_Box) ((MR_Unsigned) (ItemType_5));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ItemName_6));
        }
        mercury__queue__put_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), ((MR_Box) (Var_15)), Queue0_10, &Queue_11);
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 0))));
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 2))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 3))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 4))));
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 5))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 6))));
        {
          STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (Queue_11));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (Var_44));
        }
        recompilation__usage__record_imported_item_4_p_0(ItemType_5, ItemName_6, STATE_VARIABLE_Info_16_16, &STATE_VARIABLE_Info_17_17);
        recompilation__usage__record_expanded_items_used_by_item_4_p_0(ItemType_5, ItemName_6, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_13);
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_9;

    recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word NameArity_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;
    MR_Word Dependencies_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    MR_Word EquivTypes_9;
    MR_Word Var_12;
    MR_Box conv0_EquivTypes_9;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = (MR_Box) ((MR_Unsigned) (ItemType_5));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (NameArity_6));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[10]), Dependencies_8, ((MR_Box) (Var_12)), &conv0_EquivTypes_9);
    if (succeeded)
    {
      EquivTypes_9 = ((MR_Word) (conv0_EquivTypes_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_14;
      MR_Box conv2_STATE_VARIABLE_Info_11;

      Var_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), EquivTypes_9);
      mercury__list__foldl_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[21]), Var_14, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
      *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
    }
    else
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  }
}

static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemName_6, (MR_Integer) 1))));
    MR_Word Module_12;
    MR_String Name_13;
    MR_Word ImportedItems0_15;
    MR_Word ModuleItems1_17;
    MR_Word ModuleItemIds0_18;
    MR_Word ModuleItemIds_19;
    MR_Word ModuleItems_20;
    MR_Word ImportedItems_21;
    MR_Word Var_28;
    MR_Word ModuleItems0_16;
    MR_Box conv0_ModuleItems0_16;
    MR_Box conv1_ModuleItemIds0_18;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
    {
      Module_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 0))));
      Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 1))));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.record_imported_item\'/4", (MR_String) "unqualified item");
        return;
      }
    }
    ImportedItems0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_3[0]), ImportedItems0_15, ((MR_Box) (Module_12)), &conv0_ModuleItems0_16);
    if (succeeded)
    {
      ModuleItems0_16 = ((MR_Word) (conv0_ModuleItems0_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ModuleItems1_17 = ModuleItems0_16;
    else
    {
      MR_Word Var_27;

      Var_27 = mercury__set__init_0_f_0((MR_Word) (&recompilation__usage_scalar_common_1[0]));
      ModuleItems1_17 = recompilation__init_item_id_set_1_f_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ((MR_Box) (Var_27)));
    }
    conv1_ModuleItemIds0_18 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ModuleItems1_17, ItemType_5);
    ModuleItemIds0_18 = ((MR_Word) (conv1_ModuleItemIds0_18));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Arity_9));
    }
    mercury__set__insert_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), ((MR_Box) (Var_28)), ModuleItemIds0_18, &ModuleItemIds_19);
    recompilation__update_ids_4_p_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), ItemType_5, ((MR_Box) (ModuleItemIds_19)), ModuleItems1_17, &ModuleItems_20);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_3[0]), ((MR_Box) (Module_12)), ((MR_Box) (ModuleItems_20)), ImportedItems0_15, &ImportedItems_21);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ImportedItems_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Id_6,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded;
    MR_Word ItemType_8;
    MR_Word ItemSet0_9;
    MR_Word IdSet0_10;
    MR_Word SymName_11;
    MR_Integer Arity_12;
    MR_Word IdSet_13;
    MR_Word ItemSet_14;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_String UnqualifiedName_54;
    MR_Word ModuleQualifier_55;
    MR_Word MatchingNames1_57;
    MR_Word Recorded_58;
    MR_Word MatchingNames_59;
    MR_Box conv0_IdSet0_10;
    MR_Word MatchingNames0_56;
    MR_Box conv1_MatchingNames0_56;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;

    ItemType_8 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_5);
    ItemSet0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 5))));
    conv0_IdSet0_10 = recompilation__extract_pred_or_func_set_2_f_0((MR_Word) (&recompilation__usage_scalar_common_1[3]), (MR_Word) (&recompilation__usage_scalar_common_1[7]), (MR_Word) (&recompilation__usage_scalar_common_1[10]), ItemSet0_9, ItemType_8);
    IdSet0_10 = ((MR_Word) (conv0_IdSet0_10));
    SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_6, (MR_Integer) 0))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id_6, (MR_Integer) 1))));
    UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
    ModuleQualifier_55 = recompilation__find_module_qualifier_1_f_0(SymName_11);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), IdSet0_10, ((MR_Box) (UnqualifiedName_54)), &conv1_MatchingNames0_56);
    if (succeeded)
    {
      MatchingNames0_56 = ((MR_Word) (conv1_MatchingNames0_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      MatchingNames1_57 = MatchingNames0_56;
    else
      MatchingNames1_57 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(PredOrFunc_5, ModuleQualifier_55, SymName_11, Arity_12, &Recorded_58, MatchingNames1_57, &MatchingNames_59, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_18_18);
    switch (Recorded_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IdSet_13 = IdSet0_10;
        break;
      case (MR_Integer) 1:
        {
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), ((MR_Box) (UnqualifiedName_54)), ((MR_Box) (MatchingNames_59)), IdSet0_10, &IdSet_13);
        }
        break;
    }
    recompilation__update_pred_or_func_set_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[7]), (MR_Word) (&recompilation__usage_scalar_common_1[3]), (MR_Word) (&recompilation__usage_scalar_common_1[10]), ItemType_8, ((MR_Box) (IdSet_13)), ItemSet0_9, &ItemSet_14);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ItemSet_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
    }
  }
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_58,
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_List_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Map0_17;

      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), &Map0_17);
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), Map0_17, ((MR_Box) (ModuleQualifier_1)));
      if (succeeded)
      {
        *Recorded_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
        *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
      }
      else
      {
        MR_Word Map_89;

        recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, Map0_17, &Map_89, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
        switch (*Recorded_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Arity_3));
                MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Map_89));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Integer ThisArity_34;
      MR_Word ArityMap0_35;
      MR_Word ListRest0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_6, (MR_Integer) 0))));

      ThisArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
      ArityMap0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
      succeeded = (Arity_3 < ThisArity_34);
      if (succeeded)
      {
        MR_Word NewArityMap0_37;

        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), &NewArityMap0_37);
        succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), NewArityMap0_37, ((MR_Box) (ModuleQualifier_1)));
        if (succeeded)
        {
          *Recorded_5 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
          *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
        }
        else
        {
          MR_Word NewArityMap_90;

          recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, NewArityMap0_37, &NewArityMap_90, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_48;

                {
                  Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (NewArityMap_90));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_6));
                }
              }
              break;
          }
        }
      }
      else
      {
        succeeded = (Arity_3 == ThisArity_34);
        if (succeeded)
        {
          MR_Word ArityMap_39;

          recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ArityMap0_35, &ArityMap_39, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_51;

                {
                  Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ArityMap_39));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ListRest0_36));
                }
              }
              break;
          }
        }
        else
        {
          MR_Word ListRest_40;

          recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ListRest0_36, &ListRest_40, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
          switch (*Recorded_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ListRest_40));
              }
              break;
          }
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
  MR_Word Var_25,
  MR_Word ModuleQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_ResolvedMap_0_17,
  MR_Word * STATE_VARIABLE_ResolvedMap_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (ModuleQualifier_10)));
    if (succeeded)
    {
      *Recorded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      *STATE_VARIABLE_ResolvedMap_18 = STATE_VARIABLE_ResolvedMap_0_17;
    }
    else
      recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_25, ModuleQualifier_10, SymName_11, Arity_12, Recorded_14, STATE_VARIABLE_ResolvedMap_0_17, STATE_VARIABLE_ResolvedMap_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
}

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_35;

    recompilation__usage__find_items_used_by_pred_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_35);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_35));
  }
}

static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_36;

    conv0_LambdaHeadVar__2_36 = recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word ModuleQualifier_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_MatchingNames_0_28,
  MR_Word * STATE_VARIABLE_MatchingNames_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
    MR_Word PredTable_18;
    MR_Integer OrigArity_19;
    MR_Word MatchingPredIds_20;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredTable_18);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_10, &OrigArity_19, Arity_13);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_18, (MR_Integer) 1, PredOrFunc_10, SymName_12, OrigArity_19, &MatchingPredIds_20);
    if ((MatchingPredIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Recorded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_MatchingNames_29 = STATE_VARIABLE_MatchingNames_0_28;
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
    }
    else
    {
      MR_Word PredModules_23;
      MR_String Name_27;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Box conv2_STATE_VARIABLE_Info_31;

      *Recorded_14 = (MR_Integer) 1;
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ModuleInfo_17));
      }
      Var_33 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__usage_scalar_common_1[4]), Var_34, MatchingPredIds_20);
      PredModules_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__usage_scalar_common_1[4]), Var_33);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), ((MR_Box) (ModuleQualifier_11)), ((MR_Box) (PredModules_23)), STATE_VARIABLE_MatchingNames_0_28, STATE_VARIABLE_MatchingNames_29);
      Name_27 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Name_27));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Arity_13));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (PredOrFunc_10));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (Var_40));
      }
      mercury__set__fold_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[4]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_38, PredModules_23, ((MR_Box) (STATE_VARIABLE_Info_0_30)), &conv2_STATE_VARIABLE_Info_31);
      *STATE_VARIABLE_Info_31 = ((MR_Word) (conv2_STATE_VARIABLE_Info_31));
    }
  }
}

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_functor_matches_2_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
  MR_Word Ids_6,
  MR_Word STATE_VARIABLE_WriteComma_0_9,
  MR_Word * STATE_VARIABLE_WriteComma_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), Ids_6);
    if (succeeded)
      *STATE_VARIABLE_WriteComma_10 = STATE_VARIABLE_WriteComma_0_9;
    else
    {
      MR_String ItemTypeStr_40;
      MR_Word ItemList_41;

      switch (STATE_VARIABLE_WriteComma_0_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
          break;
      }
      *STATE_VARIABLE_WriteComma_10 = (MR_Integer) 1;
      recompilation__string_to_item_type_2_p_1(&ItemTypeStr_40, (MR_Integer) 5);
      mercury__io__write_string_3_p_0(ItemTypeStr_40);
      mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), Ids_6, &ItemList_41);
      mercury__io__write_list_5_p_0((MR_Word) (&recompilation__usage_scalar_common_1[20]), ItemList_41, (MR_String) ",\n\t\t", (MR_Word) (&recompilation__usage_scalar_common_7[1]));
      mercury__io__write_string_3_p_0((MR_String) "\n\t)");
    }
  }
}

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_pred_or_func_matches_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
  MR_Word ItemType_7,
  MR_Word UsedItems_8,
  MR_Word STATE_VARIABLE_WriteComma_0_12,
  MR_Word * STATE_VARIABLE_WriteComma_13)
{
  {
    MR_bool succeeded;
    MR_Word Ids_11;
    MR_Box conv0_Ids_11;

    conv0_Ids_11 = recompilation__extract_pred_or_func_set_2_f_0((MR_Word) (&recompilation__usage_scalar_common_1[3]), (MR_Word) (&recompilation__usage_scalar_common_1[7]), (MR_Word) (&recompilation__usage_scalar_common_1[10]), UsedItems_8, ItemType_7);
    Ids_11 = ((MR_Word) (conv0_Ids_11));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), Ids_11);
    if (succeeded)
      *STATE_VARIABLE_WriteComma_13 = STATE_VARIABLE_WriteComma_0_12;
    else
    {
      MR_String ItemTypeStr_51;
      MR_Word ItemList_52;

      switch (STATE_VARIABLE_WriteComma_0_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
          break;
      }
      *STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
      recompilation__string_to_item_type_2_p_1(&ItemTypeStr_51, ItemType_7);
      mercury__io__write_string_3_p_0(ItemTypeStr_51);
      mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), Ids_11, &ItemList_52);
      mercury__io__write_list_5_p_0((MR_Word) (&recompilation__usage_scalar_common_1[18]), ItemList_52, (MR_String) ",\n\t\t", (MR_Word) (&recompilation__usage_scalar_common_7[0]));
      mercury__io__write_string_3_p_0((MR_String) "\n\t)");
    }
  }
}

static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__usage__write_simple_item_matches_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
  MR_Word ItemType_7,
  MR_Word UsedItems_8,
  MR_Word STATE_VARIABLE_WriteComma_0_12,
  MR_Word * STATE_VARIABLE_WriteComma_13)
{
  {
    MR_bool succeeded;
    MR_Word Ids_11;
    MR_Box conv0_Ids_11;

    conv0_Ids_11 = recompilation__extract_simple_item_set_2_f_0((MR_Word) (&recompilation__usage_scalar_common_1[3]), (MR_Word) (&recompilation__usage_scalar_common_1[7]), (MR_Word) (&recompilation__usage_scalar_common_1[10]), UsedItems_8, ItemType_7);
    Ids_11 = ((MR_Word) (conv0_Ids_11));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[2]), Ids_11);
    if (succeeded)
      *STATE_VARIABLE_WriteComma_13 = STATE_VARIABLE_WriteComma_0_12;
    else
    {
      MR_String ItemTypeStr_38;
      MR_Word ItemList_39;

      switch (STATE_VARIABLE_WriteComma_0_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
          break;
      }
      *STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
      recompilation__string_to_item_type_2_p_1(&ItemTypeStr_38, ItemType_7);
      mercury__io__write_string_3_p_0(ItemTypeStr_38);
      mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[2]), Ids_11, &ItemList_39);
      mercury__io__write_list_5_p_0((MR_Word) (&recompilation__usage_scalar_common_1[11]), ItemList_39, (MR_String) ",\n\t\t", (MR_Word) (&recompilation__usage_scalar_common_1[16]));
      mercury__io__write_string_3_p_0((MR_String) "\n\t)");
    }
  }
}

MR_Integer MR_CALL 
recompilation__usage__usage_file_version_number_0_f_0(void)
{
  {
    return (MR_Integer) 2;
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____imported_item_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____imported_item_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____imported_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____imported_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____module_imported_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____module_imported_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____recompilation_usage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____recompilation_usage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____record_resolved_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____record_resolved_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_functor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_functor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_functor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_functor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_functor_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_functor_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_item_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_item_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_item_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_item_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_item_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_item_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_pred_or_func_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_pred_or_func_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_pred_or_func_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_pred_or_func_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____resolved_used_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____resolved_used_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__usage____Unify____write_resolved_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__usage____Compare____write_resolved_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__recompilation__usage__init(void)
{
}

void mercury__recompilation__usage__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_imported_item_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_imported_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_module_imported_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_record_resolved_item_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_map_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_list_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_map_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_set_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_map_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_used_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_write_resolved_item_1);
}

void mercury__recompilation__usage__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__recompilation__usage__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module recompilation.usage.
