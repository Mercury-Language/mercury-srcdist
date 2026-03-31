/*
** Automatically generated from `recompilation.usage.m'
** by the Mercury compiler,
** version rotd-2026-03-31
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
#include "enum.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "recompilation.used_file.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__used_file__type_ctor_info_module_imported_items_0;

static const MR_EnumFunctorDesc recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_0;

static const MR_EnumFunctorDesc recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_1;

static const MR_EnumFunctorDescPtr recompilation__usage__recompilation__usage__enum_ordinal_ordered_maybe_recorded_0[2];

static const MR_EnumFunctorDescPtr recompilation__usage__recompilation__usage__enum_name_ordered_maybe_recorded_0[2];

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_maybe_recorded_0[2];

static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__item_types__type_ctor_info_recomp_item_id_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__used_file__type_ctor_info_module_imported_items_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0;

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0;

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7];

static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7];

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0;

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1];

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1];

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1];

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1];

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_recompilation__usage__type_ctor_info_maybe_recorded_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0;

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_items_used_by_type_spec__843__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__344__1_1_f_0(
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__323__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__254__1_2_f_0(
  MR_Word ModuleInfo_17,
  MR_Word LambdaHeadVar__1_36);

static void MR_CALL 
recompilation__usage____Compare____record_item_pred_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____record_item_pred_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_2_p_0(
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
recompilation__usage____Compare____maybe_recorded_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage____Unify____maybe_recorded_0_0(
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
recompilation__usage__find_items_used_by_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_functor_3_p_0(
  MR_Word BoundFunctor_4,
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
  MR_Word NameArity_7,
  MR_Word MatchingIdMap_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
  MR_String Name_6,
  MR_Integer _Arity_7,
  MR_Word ResolverFunctor_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
  MR_String Name_6,
  MR_Word ResolverFunctor_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
recompilation__usage__record_resolved_item_2__ho4_9_p_0(
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
  MR_Word NameArity_5,
  MR_Word MatchingCtorMap_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
recompilation__usage__find_items_used_by_pred_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word NameArity_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

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
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word HeadVar__5_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
  MR_Word NameArity_7,
  MR_Word MatchingPredMap_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

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
recompilation__usage__find_items_used_by_class_decl_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0(
  MR_Word Decl_4,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

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
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

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
recompilation__usage__can_resolve_pred_or_func_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word _SymName_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10);

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_114_101_115_111_108_118_101_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10);

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
  MR_Word VisibleModule_4,
  MR_Word STATE_VARIABLE_ImportedItemsMap_0_7,
  MR_Word * STATE_VARIABLE_ImportedItemsMap_8);

static void MR_CALL 
recompilation__usage__construct_used_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0(
  MR_Word UsedItems_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
recompilation__usage__process_imported_item_to_fixpoint_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__usage__process_imported_items_in_queue_3_p_0(
  MR_Word STATE_VARIABLE_Queue_0_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

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
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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
recompilation__usage__find_items_used_by_inst_name_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_21);

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_21);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
recompilation__usage__set_module_imported_items_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MII_0_3,
  MR_Word * STATE_VARIABLE_MII_4);

static void MR_CALL 
recompilation__usage__get_module_imported_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__usage__item_is_recorded_used_3_p_0(
  MR_Word Info_4,
  MR_Word ItemType_5,
  MR_Word ItemName_6);

static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Id_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_95_104_111_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_42,
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_IdSet_0_19,
  MR_Word * STATE_VARIABLE_IdSet_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_51_95_95_91_53_93_95_48_9_p_0(
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
  MR_Word STATE_VARIABLE_MatchingNames_0_29,
  MR_Word * STATE_VARIABLE_MatchingNames_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
recompilation__usage____Unify____maybe_recorded_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__usage____Compare____maybe_recorded_0_0_10001(
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
recompilation__usage____Unify____record_item_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__usage____Compare____record_item_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box recompilation__usage_scalar_common_1[54][3];

static /* final */ const MR_Box recompilation__usage_scalar_common_2[9][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_3[14][6];

static /* final */ const MR_Box recompilation__usage_scalar_common_4[5][8];

static /* final */ const MR_Box recompilation__usage_scalar_common_5[4][7];

static /* final */ const MR_Box recompilation__usage_scalar_common_6[7][4];

static /* final */ const MR_Box recompilation__usage_scalar_common_7[3][5];

static /* final */ const MR_Box recompilation__usage_scalar_common_8[2][10];

static /* final */ const MR_Box recompilation__usage_scalar_common_9[1][9];




static /* final */ const MR_Box recompilation__usage_scalar_common_1[54][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[1])),
    ((MR_Box) (recompilation__usage__maybe_record_item_to_process_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[3])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[5])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_mode_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[7])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[9])),
    ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_5[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_5[2])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[10])),
    ((MR_Box) (recompilation__usage__construct_used_file_contents_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_7[0])),
    ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_7[1])),
    ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[1])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_decl_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_decl_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_decl_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_decl_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_decl_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_and_mode_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_arg_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[8])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[1])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  45 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_5[3])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[13])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  47 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  48 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  49 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  50 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_7[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  51 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  52 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[6])),
    ((MR_Box) (recompilation__usage__find_items_used_by_bound_functor_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  53 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_3[2])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraint_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[5]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_3[14][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__used_file__type_ctor_info_module_imported_items_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__used_file__type_ctor_info_module_imported_items_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_4[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row   3 */
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

static /* final */ const MR_Box recompilation__usage_scalar_common_6[7][4] = {
  /* row   0 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   3 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   4 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row   5 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[2])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[2])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_7[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_8[2][10] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_9[1][9] = {
  /* row   0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__used_file__type_ctor_info_module_imported_items_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0)
  }
};

static const MR_EnumFunctorDesc recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_0 = {
  (MR_String) "not_recorded",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_1 = {
  (MR_String) "recorded",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr recompilation__usage__recompilation__usage__enum_ordinal_ordered_maybe_recorded_0[2] = {
  &recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_0,
  &recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_1
};

static const MR_EnumFunctorDescPtr recompilation__usage__recompilation__usage__enum_name_ordered_maybe_recorded_0[2] = {
  &recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_0,
  &recompilation__usage__recompilation__usage__enum_functor_desc_maybe_recorded_0_1
};

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_maybe_recorded_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_maybe_recorded_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation__usage____Unify____maybe_recorded_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____maybe_recorded_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "maybe_recorded",
  { recompilation__usage__recompilation__usage__enum_name_ordered_maybe_recorded_0 },
  { recompilation__usage__recompilation__usage__enum_ordinal_ordered_maybe_recorded_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__usage__recompilation__usage__functor_number_map_maybe_recorded_0,

};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__item_types__type_ctor_info_recomp_item_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__used_file__type_ctor_info_module_imported_items_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0),
    (MR_TypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__queue__ti_queue_1recompilation__item_types__type_ctor_info_recomp_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__used_file__type_ctor_info_module_imported_items_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__tree234__ti_tree234_2recompilation__item_types__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_used_items_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__item_types__type_ctor_info_recomp_item_name_0)
};

static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7] = {
  (MR_String) "module_info",
  (MR_String) "item_queue",
  (MR_String) "imported_items",
  (MR_String) "module_instances",
  (MR_String) "dependencies",
  (MR_String) "resolved_used_items",
  (MR_String) "used_typeclasses"
};

static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0 = {
  (MR_String) "recompilation_usage_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0,
  recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1] = { &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0 };

static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1] = { &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0 };

static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____recompilation_usage_info_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____recompilation_usage_info_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "recompilation_usage_info",
  { recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0 },
  { recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_recompilation__usage__type_ctor_info_maybe_recorded_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_maybe_recorded_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0),
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_record_item_pred_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____record_item_pred_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____record_item_pred_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "record_item_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_recompilation__usage__type_ctor_info_maybe_recorded_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_items_used_by_type_spec__843__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, 1))));

  return LambdaHeadVar__2_25;
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__344__1_1_f_0(
  MR_Word LambdaHeadVar__1_47)
{
  MR_Word LambdaHeadVar__2_48;
  MR_Word FieldDuCtor_33 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, 3))));
  MR_Word ConsName_35 = ((MR_Word) ((MR_hl_field(0, FieldDuCtor_33, 0))));
  MR_Integer ConsArity_36 = ((MR_Integer) ((MR_hl_field(0, FieldDuCtor_33, 1))));
  MR_Word ConsCtor_38;
  MR_Word TypeCtor_55 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, 2))));

  {
    ConsCtor_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConsCtor_38, 0) = ((MR_Box) (ConsName_35));
    MR_hl_field(0, ConsCtor_38, 1) = ((MR_Box) (ConsArity_36));
    MR_hl_field(0, ConsCtor_38, 2) = ((MR_Box) (TypeCtor_55));
  }
  LambdaHeadVar__2_48 = (MR_Word) ((MR_Word) (ConsCtor_38));
  return LambdaHeadVar__2_48;
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__323__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  MR_Word LambdaHeadVar__2_43;
  MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_42, 0))));

  {
    LambdaHeadVar__2_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, LambdaHeadVar__2_43, 0) = ((MR_Box) (TypeCtor_20));
  }
  return LambdaHeadVar__2_43;
}

static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__254__1_2_f_0(
  MR_Word ModuleInfo_17,
  MR_Word LambdaHeadVar__1_36)
{
  MR_Word LambdaHeadVar__2_37;
  MR_Word PredModule_26;
  MR_Word PredInfo_27;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, LambdaHeadVar__1_36, &PredInfo_27);
  PredModule_26 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
  {
    LambdaHeadVar__2_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_37, 0) = ((MR_Box) (LambdaHeadVar__1_36));
    MR_hl_field(0, LambdaHeadVar__2_37, 1) = ((MR_Box) (PredModule_26));
  }
  return LambdaHeadVar__2_37;
}

static void MR_CALL 
recompilation__usage____Compare____record_item_pred_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
recompilation__usage____Unify____record_item_pred_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_105_116_101_109_95_112_114_101_100_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_2[8]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[7]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_1[8]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              recompilation__used_file____Compare____resolved_used_items_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__usage_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&recompilation__usage_scalar_common_2[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&recompilation__usage_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&recompilation__usage_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&recompilation__usage_scalar_common_1[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = recompilation__used_file____Unify____resolved_used_items_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&recompilation__usage_scalar_common_2[0]);
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

static void MR_CALL 
recompilation__usage____Compare____maybe_recorded_0_0(
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
recompilation__usage____Unify____maybe_recorded_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word DepItemType_6 = ((MR_Unsigned) ((MR_hl_field(0, Item_4, 0))) & (MR_Integer) 15);
  MR_Word DepItemId_7 = ((MR_Word) ((MR_hl_field(0, Item_4, 1))));

  recompilation__usage__maybe_record_item_to_process_4_p_0(DepItemType_6, DepItemId_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(0, Constraint_4, 0))));
  MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, 1))));
  MR_Word ItemName_8;
  MR_Integer Var_11;
  MR_Word STATE_VARIABLE_Info_1_13;
  MR_Box conv1_STATE_VARIABLE_Info_10;

  Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_7);
  {
    ItemName_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_8, 0) = ((MR_Box) (ClassName_6));
    MR_hl_field(0, ItemName_8, 1) = ((MR_Box) (Var_11));
  }
  recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, ItemName_8, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_13);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[53]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_Info_1_13)), &conv1_STATE_VARIABLE_Info_10);
  *STATE_VARIABLE_Info_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_functor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_21;

  recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_bound_functor_3_p_0(
  MR_Word BoundFunctor_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;
  MR_Word ConsId_6 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 0))));
  MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_4, 1))));
  MR_Word STATE_VARIABLE_Info_1_15;
  MR_Word Name_8;
  MR_Integer Arity_9;
  MR_Word Var_13;
  MR_Box conv2_STATE_VARIABLE_Info_12;

  succeeded = ((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_13 = (MR_Word) (MR_body((MR_Word) (ConsId_6), (MR_Integer) 1));
    Name_8 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
    Arity_9 = ((MR_Integer) ((MR_hl_field(0, Var_13, 1))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word UsedItems0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, 5))));
    MR_Word IdSet0_19 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 5))));
    MR_Word IdSet_20;
    MR_Word UsedItems_21;
    MR_Word STATE_VARIABLE_Info_1_23;
    MR_String UnqualifiedName_54;
    MR_Word ModuleQualifier_55;
    MR_Word MatchingNames1_57;
    MR_Word Recorded_58;
    MR_Word MatchingNames_59;
    MR_Word MatchingNames0_56;
    MR_Box conv0_MatchingNames0_56;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;

    UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_8);
    ModuleQualifier_55 = recompilation__record_uses__find_module_qualifier_1_f_0(Name_8);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), IdSet0_19, ((MR_Box) (UnqualifiedName_54)), &conv0_MatchingNames0_56);
    if (succeeded)
    {
      MatchingNames0_56 = ((MR_Word) (conv0_MatchingNames0_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      MatchingNames1_57 = MatchingNames0_56;
    else
      MatchingNames1_57 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__usage__record_resolved_item_2__ho4_9_p_0(ModuleQualifier_55, Name_8, Arity_9, &Recorded_58, MatchingNames1_57, &MatchingNames_59, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_1_23);
    switch (Recorded_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IdSet_20 = IdSet0_19;
        break;
      case (MR_Integer) 1:
        mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), ((MR_Box) (UnqualifiedName_54)), ((MR_Box) (MatchingNames_59)), IdSet0_19, &IdSet_20);
        break;
    }
    Var_37 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 4))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 7))));
    {
      UsedItems_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UsedItems_21, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, UsedItems_21, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, UsedItems_21, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, UsedItems_21, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, UsedItems_21, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, UsedItems_21, 5) = ((MR_Box) (IdSet_20));
      MR_hl_field(0, UsedItems_21, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, UsedItems_21, 7) = ((MR_Box) (Var_44));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 6))));
    {
      STATE_VARIABLE_Info_1_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 1) = ((MR_Box) (Var_46));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 2) = ((MR_Box) (Var_47));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 3) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 4) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 5) = ((MR_Box) (UsedItems_21));
      MR_hl_field(0, STATE_VARIABLE_Info_1_15, 6) = ((MR_Box) (Var_51));
    }
  }
  else
    STATE_VARIABLE_Info_1_15 = STATE_VARIABLE_Info_0_11;
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[52]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_1_15)), &conv2_STATE_VARIABLE_Info_12);
  *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
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
  MR_Word Var_16;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Module_12));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Name_9));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (Arity_10));
  }
  recompilation__usage__maybe_record_item_to_process_4_p_0(ItemType_8, Var_16, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
  MR_Word ItemType_6,
  MR_Word NameArity_7,
  MR_Word MatchingIdMap_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(0, NameArity_7, 0))));
  MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, NameArity_7, 1))));
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_Info_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ItemType_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Name_10));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Arity_11));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_14, MatchingIdMap_8, ((MR_Box) (STATE_VARIABLE_Info_0_12)), &conv1_STATE_VARIABLE_Info_13);
  *STATE_VARIABLE_Info_13 = ((MR_Word) (conv1_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
  MR_String Name_6,
  MR_Integer _Arity_7,
  MR_Word ResolverFunctor_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(Name_6, ResolverFunctor_8, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
  MR_String Name_6,
  MR_Word ResolverFunctor_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  switch (MR_tag((MR_Word) ResolverFunctor_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ConsCtor_16 = (MR_Word) ((MR_Word) (ResolverFunctor_8));
        MR_Word TypeCtor_26 = ((MR_Word) ((MR_hl_field(0, ConsCtor_16, 2))));
        MR_Word ItemName_27;

        ItemName_27 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_26);
        recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, ItemName_27, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, ResolverFunctor_8, 0))));
        MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(1, ResolverFunctor_8, 1))) & (MR_Integer) 1);
        MR_Word PredModule_12 = ((MR_Word) ((MR_hl_field(1, ResolverFunctor_8, 2))));
        MR_Integer PredFormArity_13;
        MR_Word NameArity_14;
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, ResolverFunctor_8, 3))));
        MR_Word Var_23;

        PredFormArity_13 = (MR_Integer) (Var_22);
        {
          NameArity_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameArity_14, 0) = ((MR_Box) (Name_6));
          MR_hl_field(0, NameArity_14, 1) = ((MR_Box) (PredFormArity_13));
        }
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (PredId_10));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (PredModule_12));
        }
        recompilation__usage__find_items_used_by_pred_5_p_0(PredOrFunc_11, NameArity_14, Var_23, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(2, ResolverFunctor_8, 0))));
        MR_Word ItemName_19;

        ItemName_19 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_15);
        recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, ItemName_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
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
  MR_bool succeeded;
  MR_Word SymName_16;
  MR_Word UsedItems0_18;
  MR_Word IdSet0_19;
  MR_Word IdSet_20;
  MR_Word UsedItems_21;
  MR_Word STATE_VARIABLE_Info_1_23;
  MR_String UnqualifiedName_54;
  MR_Word ModuleQualifier_55;
  MR_Word MatchingNames1_57;
  MR_Word Recorded_58;
  MR_Word MatchingNames_59;
  MR_Word MatchingNames0_56;
  MR_Box conv0_MatchingNames0_56;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;

  SymName_16 = recompilation__record_uses__module_qualify_name_2_f_0(Qualifier_9, Name_7);
  UsedItems0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, 5))));
  IdSet0_19 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 5))));
  UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
  ModuleQualifier_55 = recompilation__record_uses__find_module_qualifier_1_f_0(SymName_16);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), IdSet0_19, ((MR_Box) (UnqualifiedName_54)), &conv0_MatchingNames0_56);
  if (succeeded)
  {
    MatchingNames0_56 = ((MR_Word) (conv0_MatchingNames0_56));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    MatchingNames1_57 = MatchingNames0_56;
  else
    MatchingNames1_57 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__usage__record_resolved_item_2__ho4_9_p_0(ModuleQualifier_55, SymName_16, Arity_8, &Recorded_58, MatchingNames1_57, &MatchingNames_59, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_1_23);
  switch (Recorded_58) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      IdSet_20 = IdSet0_19;
      break;
    case (MR_Integer) 1:
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), ((MR_Box) (UnqualifiedName_54)), ((MR_Box) (MatchingNames_59)), IdSet0_19, &IdSet_20);
      break;
  }
  Var_37 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 0))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 1))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 2))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 3))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 4))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 6))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, UsedItems0_18, 7))));
  {
    UsedItems_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UsedItems_21, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, UsedItems_21, 1) = ((MR_Box) (Var_38));
    MR_hl_field(0, UsedItems_21, 2) = ((MR_Box) (Var_39));
    MR_hl_field(0, UsedItems_21, 3) = ((MR_Box) (Var_40));
    MR_hl_field(0, UsedItems_21, 4) = ((MR_Box) (Var_41));
    MR_hl_field(0, UsedItems_21, 5) = ((MR_Box) (IdSet_20));
    MR_hl_field(0, UsedItems_21, 6) = ((MR_Box) (Var_43));
    MR_hl_field(0, UsedItems_21, 7) = ((MR_Box) (Var_44));
  }
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 4))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (UsedItems_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
  }
}

static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho4_9_p_0(
  MR_Word ModuleQualifier_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * Recorded_5,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_List_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Map0_17;

    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), &Map0_17);
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), Map0_17, ((MR_Box) (ModuleQualifier_1)));
    if (succeeded)
    {
      *Recorded_5 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
    }
    else
    {
      MR_Word Map_67;

      recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, Map0_17, &Map_67, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
              MR_hl_field(0, Var_25, 0) = ((MR_Box) (Arity_3));
              MR_hl_field(0, Var_25, 1) = ((MR_Box) (Map_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_List_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word ListRest0_36 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_List_0_6, 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_List_0_6, 0))));

    ThisArity_34 = ((MR_Integer) ((MR_hl_field(0, Var_45, 0))));
    ArityMap0_35 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
    succeeded = (Arity_3 < ThisArity_34);
    if (succeeded)
    {
      MR_Word NewArityMap0_37;

      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), &NewArityMap0_37);
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), NewArityMap0_37, ((MR_Box) (ModuleQualifier_1)));
      if (succeeded)
      {
        *Recorded_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
        *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
      }
      else
      {
        MR_Word NewArityMap_68;

        recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, NewArityMap0_37, &NewArityMap_68, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
                MR_hl_field(0, Var_48, 0) = ((MR_Box) (Arity_3));
                MR_hl_field(0, Var_48, 1) = ((MR_Box) (NewArityMap_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_6));
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
        succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), ArityMap0_35, ((MR_Box) (ModuleQualifier_1)));
        if (succeeded)
        {
          *Recorded_5 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
          *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
        }
        else
        {
          MR_Word ArityMap_69;

          recompilation__usage__do_record_used_functor_8_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ArityMap0_35, &ArityMap_69, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
                  MR_hl_field(0, Var_51, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(0, Var_51, 1) = ((MR_Box) (ArityMap_69));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(1, base, 1) = ((MR_Box) (ListRest0_36));
                }
              }
              break;
          }
        }
      }
      else
      {
        MR_Word ListRest_40;

        recompilation__usage__record_resolved_item_2__ho4_9_p_0(ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ListRest0_36, &ListRest_40, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
        switch (*Recorded_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_List_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, base, 1) = ((MR_Box) (ListRest_40));
            }
            break;
        }
      }
    }
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  recompilation__usage__find_items_used_by_functors_3_6_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
  MR_Word NameArity_5,
  MR_Word MatchingCtorMap_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_String Name_8 = ((MR_String) ((MR_hl_field(0, NameArity_5, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, NameArity_5, 1))));
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_Info_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&recompilation__usage_scalar_common_9[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_functors_2_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Name_8));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Arity_9));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_12, MatchingCtorMap_6, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv1_STATE_VARIABLE_Info_11);
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv1_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_9));
}

static MR_Box MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_25;

  conv4_LambdaHeadVar__2_25 = recompilation__usage__IntroducedFrom__func__find_items_used_by_type_spec__843__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
  MR_Word TypeSpecInfo_4,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word PFUMM_6 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_4, 0))));
  MR_Word Subst_9 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_4, 3))));
  MR_Word SubstTypes_17;
  MR_Word STATE_VARIABLE_Info_1_22;
  MR_Word Var_26;
  MR_Box conv6_STATE_VARIABLE_Info_21;

  switch (MR_tag((MR_Word) PFUMM_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_37 = ((MR_Word) ((MR_hl_field(0, PFUMM_6, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_37)) == (MR_Integer) 1))
          STATE_VARIABLE_Info_1_22 = STATE_VARIABLE_Info_0_20;
        else
        {
          MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_37, 0))));
          MR_Box conv3_STATE_VARIABLE_Info_1_22;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[49]), Modes_35, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv3_STATE_VARIABLE_Info_1_22);
          STATE_VARIABLE_Info_1_22 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_22));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_14 = ((MR_Word) ((MR_hl_field(1, PFUMM_6, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_14)) == (MR_Integer) 1))
          STATE_VARIABLE_Info_1_22 = STATE_VARIABLE_Info_0_20;
        else
        {
          MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_14, 0))));
          MR_Box conv1_STATE_VARIABLE_Info_1_22;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[48]), Modes_15, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv1_STATE_VARIABLE_Info_1_22);
          STATE_VARIABLE_Info_1_22 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_22));
        }
      }
      break;
    case (MR_Integer) 2:
      STATE_VARIABLE_Info_1_22 = STATE_VARIABLE_Info_0_20;
      break;
  }
  Var_26 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), Subst_9);
  SubstTypes_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage_scalar_common_1[50]), Var_26);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[51]), SubstTypes_17, ((MR_Box) (STATE_VARIABLE_Info_1_22)), &conv6_STATE_VARIABLE_Info_21);
  *STATE_VARIABLE_Info_21 = ((MR_Word) (conv6_STATE_VARIABLE_Info_21));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word ArgModes_8;
  MR_Box conv1_STATE_VARIABLE_Info_10;

  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_6, &ArgModes_8);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[47]), ArgModes_8, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv1_STATE_VARIABLE_Info_10);
  *STATE_VARIABLE_Info_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_21;

  recompilation__usage__find_items_used_by_type_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_Info_10);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_9;

  recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word NameArity_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word PredModule_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word ItemType_11;
  MR_Word ModuleInfo_12;
  MR_Word PredInfo_13;
  MR_String Name_14;
  MR_Integer Arity_15;
  MR_Word ItemName_16;
  MR_Word Var_39;

  ItemType_11 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_6);
  ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_8, &PredInfo_13);
  Name_14 = ((MR_String) ((MR_hl_field(0, NameArity_7, 0))));
  Arity_15 = ((MR_Integer) ((MR_hl_field(0, NameArity_7, 1))));
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (PredModule_9));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Name_14));
  }
  {
    ItemName_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_16, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, ItemName_16, 1) = ((MR_Box) (Arity_15));
  }
  succeeded = recompilation__usage__item_is_recorded_used_3_p_0(STATE_VARIABLE_Info_0_37, ItemType_11, ItemName_16);
  if (!(succeeded))
  {
    MR_Word ModuleName_72;
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, ItemName_16, 0))));
    MR_Word Var_76;
    MR_Word Var_83;

    succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_72 = ((MR_Word) ((MR_hl_field(1, Var_75, 0))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, 0))));
      hlds__hlds_module__module_info_get_name_2_p_0(Var_76, &Var_83);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_72, Var_83);
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
  else
  {
    MR_Word Markers_17;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_13, &Markers_17);
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_17, (MR_Integer) 12);
    if (succeeded)
    {
      MR_Word MethodClassContext_18;
      MR_Word MethodUnivConstraints_19;
      MR_Word ClassName_23;
      MR_Integer ClassArity_25;
      MR_Word ClassItemName_26;

      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_13, &MethodClassContext_18);
      MethodUnivConstraints_19 = ((MR_Word) ((MR_hl_field(0, MethodClassContext_18, 0))));
      if ((MethodUnivConstraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.find_items_used_by_pred\'/5", (MR_String) "class method with no class constraints");
          return;
        }
      else
      {
        MR_Word MethodUnivConstraint_21 = ((MR_Word) ((MR_hl_field(1, MethodUnivConstraints_19, 0))));
        MR_Word ClassArgTypes_24;

        ClassName_23 = ((MR_Word) ((MR_hl_field(0, MethodUnivConstraint_21, 0))));
        ClassArgTypes_24 = ((MR_Word) ((MR_hl_field(0, MethodUnivConstraint_21, 1))));
        ClassArity_25 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassArgTypes_24);
      }
      {
        ClassItemName_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassItemName_26, 0) = ((MR_Box) (ClassName_23));
        MR_hl_field(0, ClassItemName_26, 1) = ((MR_Box) (ClassArity_25));
      }
      recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, ClassItemName_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
    }
    else
    {
      MR_Word ArgTypes_27;
      MR_Word Procs_28;
      MR_Word ClassContext_29;
      MR_Word TypeSpecTables_30;
      MR_Word PragmaMap_34;
      MR_Word Var_45;
      MR_Word STATE_VARIABLE_Info_2_46;
      MR_Word STATE_VARIABLE_Info_3_47;
      MR_Word STATE_VARIABLE_Info_4_48;
      MR_Word STATE_VARIABLE_Info_5_50;
      MR_Word STATE_VARIABLE_Info_6_51;
      MR_Word ItemName_54;
      MR_Word Dependencies_85;
      MR_Word EquivTypes_86;
      MR_Word Var_87;
      MR_Box conv0_EquivTypes_86;
      MR_Box conv4_STATE_VARIABLE_Info_4_48;
      MR_Box conv6_STATE_VARIABLE_Info_5_50;
      MR_Word OoMTypeSpecPragmas_35;
      MR_Box conv7_OoMTypeSpecPragmas_35;

      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (PredModule_9));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Name_14));
      }
      {
        ItemName_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemName_54, 0) = ((MR_Box) (Var_45));
        MR_hl_field(0, ItemName_54, 1) = ((MR_Box) (Arity_15));
      }
      Dependencies_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, 4))));
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_87, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
        MR_hl_field(0, Var_87, 1) = ((MR_Box) (ItemName_54));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[7]), Dependencies_85, ((MR_Box) (Var_87)), &conv0_EquivTypes_86);
      if (succeeded)
      {
        EquivTypes_86 = ((MR_Word) (conv0_EquivTypes_86));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_89;
        MR_Box conv2_STATE_VARIABLE_Info_2_46;

        Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), EquivTypes_86);
        mercury__list__foldl_4_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[43]), Var_89, ((MR_Box) (STATE_VARIABLE_Info_0_37)), &conv2_STATE_VARIABLE_Info_2_46);
        STATE_VARIABLE_Info_2_46 = ((MR_Word) (conv2_STATE_VARIABLE_Info_2_46));
      }
      else
        STATE_VARIABLE_Info_2_46 = STATE_VARIABLE_Info_0_37;
      recompilation__usage__record_imported_item_4_p_0(ItemType_11, ItemName_54, STATE_VARIABLE_Info_2_46, &STATE_VARIABLE_Info_3_47);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_13, &ArgTypes_27);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[44]), ArgTypes_27, ((MR_Box) (STATE_VARIABLE_Info_3_47)), &conv4_STATE_VARIABLE_Info_4_48);
      STATE_VARIABLE_Info_4_48 = ((MR_Word) (conv4_STATE_VARIABLE_Info_4_48));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_13, &Procs_28);
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[45]), Procs_28, ((MR_Box) (STATE_VARIABLE_Info_4_48)), &conv6_STATE_VARIABLE_Info_5_50);
      STATE_VARIABLE_Info_5_50 = ((MR_Word) (conv6_STATE_VARIABLE_Info_5_50));
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_13, &ClassContext_29);
      recompilation__usage__find_items_used_by_class_context_3_p_0(ClassContext_29, STATE_VARIABLE_Info_5_50, &STATE_VARIABLE_Info_6_51);
      hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo_12, &TypeSpecTables_30);
      PragmaMap_34 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_30, 3))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[6]), PragmaMap_34, ((MR_Box) (PredId_8)), &conv7_OoMTypeSpecPragmas_35);
      if (succeeded)
      {
        OoMTypeSpecPragmas_35 = ((MR_Word) (conv7_OoMTypeSpecPragmas_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeSpecPragmas_36;
        MR_Box conv9_STATE_VARIABLE_Info_38;

        TypeSpecPragmas_36 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), OoMTypeSpecPragmas_35);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[46]), TypeSpecPragmas_36, ((MR_Box) (STATE_VARIABLE_Info_6_51)), &conv9_STATE_VARIABLE_Info_38);
        *STATE_VARIABLE_Info_38 = ((MR_Word) (conv9_STATE_VARIABLE_Info_38));
      }
      else
        *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_6_51;
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word UnivConstraints_6 = ((MR_Word) ((MR_hl_field(0, Constraints_4, 0))));
  MR_Word ExistConstraints_7 = ((MR_Word) ((MR_hl_field(0, Constraints_4, 1))));
  MR_Word STATE_VARIABLE_Info_1_10;
  MR_Box conv1_STATE_VARIABLE_Info_1_10;
  MR_Box conv3_STATE_VARIABLE_Info_9;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[41]), UnivConstraints_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_1_10);
  STATE_VARIABLE_Info_1_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_10));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[42]), ExistConstraints_7, ((MR_Box) (STATE_VARIABLE_Info_1_10)), &conv3_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv3_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word HeadVar__5_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(PredOrFunc_8, Name_9, Arity_10, ModuleQualifier_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
  MR_Word PredOrFunc_8,
  MR_String Name_9,
  MR_Integer Arity_10,
  MR_Word ModuleQualifier_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word SymName_14;
  MR_Word ItemName_15;

  SymName_14 = recompilation__record_uses__module_qualify_name_2_f_0(ModuleQualifier_11, Name_9);
  {
    ItemName_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_15, 0) = ((MR_Box) (SymName_14));
    MR_hl_field(0, ItemName_15, 1) = ((MR_Box) (Arity_10));
  }
  recompilation__usage__record_used_pred_or_func_4_p_0(PredOrFunc_8, ItemName_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  recompilation__usage__find_items_used_by_preds_3_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word NameArity_7,
  MR_Word MatchingPredMap_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(0, NameArity_7, 0))));
  MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, NameArity_7, 1))));
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_Info_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_2_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (PredOrFunc_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Name_10));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Arity_11));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_14, MatchingPredMap_8, ((MR_Box) (STATE_VARIABLE_Info_0_12)), &conv1_STATE_VARIABLE_Info_13);
  *STATE_VARIABLE_Info_13 = ((MR_Word) (conv1_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
  MR_Word CtorArg_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_bool succeeded;
  MR_Word ArgType_6 = ((MR_Word) ((MR_hl_field(0, CtorArg_4, 1))));
  MR_Word TypeCtor_11;
  MR_Word TypeArgs_12;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_6, &TypeCtor_11, &TypeArgs_12);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Info_1_13;
    MR_Box conv1_STATE_VARIABLE_Info_8;

    recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_11, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_13);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[40]), TypeArgs_12, ((MR_Box) (STATE_VARIABLE_Info_1_13)), &conv1_STATE_VARIABLE_Info_8);
    *STATE_VARIABLE_Info_8 = ((MR_Word) (conv1_STATE_VARIABLE_Info_8));
  }
  else
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_8;

  recompilation__usage__find_items_used_by_ctor_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_8));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
  MR_Word Ctor_4,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word MaybeExistConstraints_7 = ((MR_Word) ((MR_hl_field(0, Ctor_4, 1))));
  MR_Word CtorArgs_9 = ((MR_Word) ((MR_hl_field(0, Ctor_4, 3))));
  MR_Word STATE_VARIABLE_Info_1_19;
  MR_Box conv3_STATE_VARIABLE_Info_18;

  if ((MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Info_1_19 = STATE_VARIABLE_Info_0_17;
  else
  {
    MR_Word ExistConstraints_12 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_7), (MR_Integer) 1));
    MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_12, 1))));
    MR_Box conv1_STATE_VARIABLE_Info_1_19;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[38]), Constraints_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv1_STATE_VARIABLE_Info_1_19);
    STATE_VARIABLE_Info_1_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_19));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[39]), CtorArgs_9, ((MR_Box) (STATE_VARIABLE_Info_1_19)), &conv3_STATE_VARIABLE_Info_18);
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv3_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
  MR_Word TypeAndMode_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, TypeAndMode_4, 0))));
  MR_Word Mode_7 = ((MR_Word) ((MR_hl_field(0, TypeAndMode_4, 1))));
  MR_Word STATE_VARIABLE_Info_1_10;
  MR_Word TypeCtor_11;
  MR_Word TypeArgs_12;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_11, &TypeArgs_12);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Info_1_13;
    MR_Box conv1_STATE_VARIABLE_Info_1_10;

    recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_11, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_1_13);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[37]), TypeArgs_12, ((MR_Box) (STATE_VARIABLE_Info_1_13)), &conv1_STATE_VARIABLE_Info_1_10);
    STATE_VARIABLE_Info_1_10 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_10));
  }
  else
    STATE_VARIABLE_Info_1_10 = STATE_VARIABLE_Info_0_8;
  recompilation__usage__find_items_used_by_mode_3_p_0(Mode_7, STATE_VARIABLE_Info_1_10, STATE_VARIABLE_Info_9);
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_and_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_class_decl_3_p_0(
  MR_Word Decl_4,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  if (((MR_tag((MR_Word) Decl_4)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo_21 = (MR_Word) (MR_body((MR_Word) (Decl_4), (MR_Integer) 1));
    MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(0, ModeInfo_21, 2))));
    MR_Box conv1_STATE_VARIABLE_Info_30;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[32]), Modes_24, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv1_STATE_VARIABLE_Info_30);
    *STATE_VARIABLE_Info_30 = ((MR_Word) (conv1_STATE_VARIABLE_Info_30));
  }
  else
  {
    MR_Word PredOrFuncInfo_6 = (MR_Word) ((MR_Word) (Decl_4));
    MR_Word ArgTypesAndMaybeModes_9 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_6, 2))));
    MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_6, 10))));
    MR_Word STATE_VARIABLE_Info_1_31;
    MR_Word UnivConstraints_48 = ((MR_Word) ((MR_hl_field(0, Constraints_17, 0))));
    MR_Word ExistConstraints_49 = ((MR_Word) ((MR_hl_field(0, Constraints_17, 1))));
    MR_Word STATE_VARIABLE_Info_1_50;
    MR_Box conv3_STATE_VARIABLE_Info_1_50;
    MR_Box conv5_STATE_VARIABLE_Info_1_31;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[33]), UnivConstraints_48, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv3_STATE_VARIABLE_Info_1_50);
    STATE_VARIABLE_Info_1_50 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_50));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[34]), ExistConstraints_49, ((MR_Box) (STATE_VARIABLE_Info_1_50)), &conv5_STATE_VARIABLE_Info_1_31);
    STATE_VARIABLE_Info_1_31 = ((MR_Word) (conv5_STATE_VARIABLE_Info_1_31));
    switch (MR_tag((MR_Word) ArgTypesAndMaybeModes_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_1_31;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_19 = ((MR_Word) ((MR_hl_field(1, ArgTypesAndMaybeModes_9, 0))));
          MR_Box conv9_STATE_VARIABLE_Info_30;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[36]), ArgTypes_19, ((MR_Box) (STATE_VARIABLE_Info_1_31)), &conv9_STATE_VARIABLE_Info_30);
          *STATE_VARIABLE_Info_30 = ((MR_Word) (conv9_STATE_VARIABLE_Info_30));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgTypesAndModes_20 = ((MR_Word) ((MR_hl_field(2, ArgTypesAndMaybeModes_9, 0))));
          MR_Box conv7_STATE_VARIABLE_Info_30;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[35]), ArgTypesAndModes_20, ((MR_Box) (STATE_VARIABLE_Info_1_31)), &conv7_STATE_VARIABLE_Info_30);
          *STATE_VARIABLE_Info_30 = ((MR_Word) (conv7_STATE_VARIABLE_Info_30));
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
  MR_Word ClassId_5,
  MR_Word Defn_6,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word InstanceModuleName_8 = ((MR_Word) ((MR_hl_field(0, Defn_6, 0))));
  MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(0, Defn_6, 4))));
  MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(0, Defn_6, 5))));
  MR_Word ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
  MR_Word Var_54;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_19, &Var_54);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(InstanceModuleName_8, Var_54);
  if (succeeded)
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  else
  {
    MR_Word ModuleInstances0_20;
    MR_Word ClassIds1_22;
    MR_Word ClassIds_23;
    MR_Word ModuleInstances_24;
    MR_Word STATE_VARIABLE_Info_1_27;
    MR_Word STATE_VARIABLE_Info_2_28;
    MR_Box conv1_STATE_VARIABLE_Info_1_27;
    MR_Box conv3_STATE_VARIABLE_Info_2_28;
    MR_Word ClassIdsPrime_21;
    MR_Box conv4_ClassIdsPrime_21;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[30]), Constraints_13, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv1_STATE_VARIABLE_Info_1_27);
    STATE_VARIABLE_Info_1_27 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_27));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[31]), ArgTypes_12, ((MR_Box) (STATE_VARIABLE_Info_1_27)), &conv3_STATE_VARIABLE_Info_2_28);
    STATE_VARIABLE_Info_2_28 = ((MR_Word) (conv3_STATE_VARIABLE_Info_2_28));
    ModuleInstances0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[0]), ModuleInstances0_20, ((MR_Box) (InstanceModuleName_8)), &conv4_ClassIdsPrime_21);
    if (succeeded)
    {
      ClassIdsPrime_21 = ((MR_Word) (conv4_ClassIdsPrime_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ClassIds1_22 = ClassIdsPrime_21;
    else
      mercury__set__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), &ClassIds1_22);
    mercury__set__insert_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), ((MR_Box) (ClassId_5)), ClassIds1_22, &ClassIds_23);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[0]), ((MR_Box) (InstanceModuleName_8)), ((MR_Box) (ClassIds_23)), ModuleInstances0_20, &ModuleInstances_24);
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 5))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_28, 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 3) = ((MR_Box) (ModuleInstances_24));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_26;

  recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_26);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_9;

  recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefns_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;
  MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, ClassId_5, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, ClassId_5, 1))));
  MR_Word ClassIdItem_10;
  MR_Word ModuleName_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_32;

  {
    ClassIdItem_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassIdItem_10, 0) = ((MR_Box) (Name_8));
    MR_hl_field(0, ClassIdItem_10, 1) = ((MR_Box) (Arity_9));
  }
  Var_24 = ((MR_Word) ((MR_hl_field(0, ClassIdItem_10, 0))));
  succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    ModuleName_21 = ((MR_Word) ((MR_hl_field(1, Var_24, 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, 0))));
    hlds__hlds_module__module_info_get_name_2_p_0(Var_25, &Var_32);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_21, Var_32);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Info_1_14;
    MR_Word Var_15;
    MR_Word Dependencies_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, 4))));
    MR_Word EquivTypes_35;
    MR_Word Var_36;
    MR_Box conv0_EquivTypes_35;
    MR_Box conv4_STATE_VARIABLE_Info_12;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (ClassIdItem_10));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[7]), Dependencies_34, ((MR_Box) (Var_36)), &conv0_EquivTypes_35);
    if (succeeded)
    {
      EquivTypes_35 = ((MR_Word) (conv0_EquivTypes_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_38;
      MR_Box conv2_STATE_VARIABLE_Info_1_14;

      Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), EquivTypes_35);
      mercury__list__foldl_4_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[29]), Var_38, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_1_14);
      STATE_VARIABLE_Info_1_14 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_14));
    }
    else
      STATE_VARIABLE_Info_1_14 = STATE_VARIABLE_Info_0_11;
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[0]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_2));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (ClassIdItem_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_15, InstanceDefns_6, ((MR_Box) (STATE_VARIABLE_Info_1_14)), &conv4_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv4_STATE_VARIABLE_Info_12));
  }
  else
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
}

static MR_bool MR_CALL 
recompilation__usage__can_resolve_pred_or_func_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word _SymName_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10)
{
  MR_bool succeeded;

  succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_114_101_115_111_108_118_101_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_91_50_93_95_48_5_p_0(ModuleInfo_6, Arity_8, PredId_9, ResolvedCtor_10);
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_114_101_115_111_108_118_101_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word * ResolvedCtor_10)
{
  MR_bool succeeded;
  MR_Word PredInfo_11;
  MR_Word PredOrFunc_12;
  MR_Word PredModule_13;
  MR_Word OrigPredFormArity_14;
  MR_Word OrigUserArity_15;
  MR_Integer OrigUserArityInt_16;
  MR_Word PredExistQVars_17;
  MR_Word Var_18;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_9, &PredInfo_11);
  PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
  PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &OrigPredFormArity_14);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_12, &OrigUserArity_15, OrigPredFormArity_14);
  OrigUserArityInt_16 = (MR_Integer) (OrigUserArity_15);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_11, &PredExistQVars_17);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = (OrigUserArityInt_16 >= Arity_8);
        if (succeeded)
        {
          succeeded = (PredExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            succeeded = (OrigUserArityInt_16 == Arity_8);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = (OrigUserArityInt_16 >= Arity_8);
        if (succeeded)
          succeeded = (PredExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
  if (succeeded)
  {
    Var_18 = (MR_Word) (OrigUserArityInt_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *ResolvedCtor_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(1, base, 2) = ((MR_Box) (PredModule_13));
      MR_hl_field(1, base, 3) = ((MR_Box) (Var_18));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  recompilation__usage__find_items_used_by_functor_5_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
}

static MR_Box MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_48;

  conv2_LambdaHeadVar__2_48 = recompilation__usage__IntroducedFrom__func__find_matching_functors__344__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ResolvedCtor_10;

  succeeded = recompilation__usage__can_resolve_pred_or_func_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ResolvedCtor_10);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ResolvedCtor_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_43;

  conv0_LambdaHeadVar__2_43 = recompilation__usage__IntroducedFrom__func__find_matching_functors__323__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 0))));
  MR_Word MatchingCtors_16;
  MR_String Name_17;
  MR_Word Var_22;
  MR_Word Ctors_36;
  MR_Word DuCtor_37;
  MR_Word ConsDefns1_39;
  MR_Word ConsDefns_43;
  MR_Word MatchingConstructorRFs_44;
  MR_Word PredicateTable_45;
  MR_Word PredIds_46;
  MR_Word MatchingPredRFs_47;
  MR_Word MatchingFieldAccessRFs_52;
  MR_Word Var_53;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word ConsDefns0_38;
  MR_Word ConsDefns2_42;
  MR_Word SymNameMinusNew_40;
  MR_Word DuCtorMinusNew_41;
  MR_Word Var_54;
  MR_Word OoMFieldDefns_50;
  MR_Integer Var_69;
  MR_Word _AccessType_48;
  MR_Word _FieldName_49;
  MR_Box conv4_STATE_VARIABLE_Info_21;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_15, &Ctors_36);
  Var_53 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    DuCtor_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_37, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, DuCtor_37, 1) = ((MR_Box) (Arity_11));
    MR_hl_field(0, DuCtor_37, 2) = ((MR_Box) (Var_53));
  }
  succeeded = hlds__hlds_cons__search_cons_table_3_p_0(Ctors_36, DuCtor_37, &ConsDefns0_38);
  if (succeeded)
    ConsDefns1_39 = ConsDefns0_38;
  else
    ConsDefns1_39 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(SymName_10, &SymNameMinusNew_40);
  if (succeeded)
  {
    Var_54 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      DuCtorMinusNew_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuCtorMinusNew_41, 0) = ((MR_Box) (SymNameMinusNew_40));
      MR_hl_field(0, DuCtorMinusNew_41, 1) = ((MR_Box) (Arity_11));
      MR_hl_field(0, DuCtorMinusNew_41, 2) = ((MR_Box) (Var_54));
    }
    succeeded = hlds__hlds_cons__search_cons_table_3_p_0(Ctors_36, DuCtorMinusNew_41, &ConsDefns2_42);
  }
  if (succeeded)
    ConsDefns_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), ConsDefns1_39, ConsDefns2_42);
  else
    ConsDefns_43 = ConsDefns1_39;
  MatchingConstructorRFs_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage_scalar_common_1[27]), ConsDefns_43);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_15, &PredicateTable_45);
  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_45, (MR_Integer) 1, SymName_10, &PredIds_46);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[3]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_2));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (SymName_10));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) (Arity_11));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), Var_57, PredIds_46, &MatchingPredRFs_47);
  succeeded = hlds__hlds_pred__is_field_access_function_name_6_p_0(ModuleInfo_15, SymName_10, &Var_69, &_AccessType_48, &_FieldName_49, &OoMFieldDefns_50);
  if (succeeded)
    succeeded = (Arity_11 == Var_69);
  if (succeeded)
  {
    MR_Word FieldDefns_51;

    FieldDefns_51 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), OoMFieldDefns_50);
    MatchingFieldAccessRFs_52 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage_scalar_common_1[28]), FieldDefns_51);
  }
  else
    MatchingFieldAccessRFs_52 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MatchingFieldAccessRFs_52));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MatchingPredRFs_47));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MatchingConstructorRFs_44));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  Var_59 = mercury__list__condense_1_f_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), Var_60);
  MatchingCtors_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), Var_59);
  Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[4]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_4));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Name_17));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (Arity_11));
  }
  mercury__set__fold_4_p_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_22, MatchingCtors_16, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv4_STATE_VARIABLE_Info_21);
  *STATE_VARIABLE_Info_21 = ((MR_Word) (conv4_STATE_VARIABLE_Info_21));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), MatchingCtors_16);
  if (succeeded)
  {
    *Recorded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_ResolvedCtorMap_19 = STATE_VARIABLE_ResolvedCtorMap_0_18;
  }
  else
  {
    *Recorded_12 = (MR_Integer) 1;
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[1]), ((MR_Box) (ModuleQualifier_9)), ((MR_Box) (MatchingCtors_16)), STATE_VARIABLE_ResolvedCtorMap_0_18, STATE_VARIABLE_ResolvedCtorMap_19);
  }
}

static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
  MR_Word VisibleModule_4,
  MR_Word STATE_VARIABLE_ImportedItemsMap_0_7,
  MR_Word * STATE_VARIABLE_ImportedItemsMap_8)
{
  MR_Word ModuleItems_6;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  Var_9 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_10 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_11 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_12 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_13 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_14 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_15 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  Var_16 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
  {
    ModuleItems_6 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModuleItems_6, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, ModuleItems_6, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, ModuleItems_6, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, ModuleItems_6, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, ModuleItems_6, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, ModuleItems_6, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, ModuleItems_6, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, ModuleItems_6, 7) = ((MR_Box) (Var_16));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0), ((MR_Box) (VisibleModule_4)), ((MR_Box) (ModuleItems_6)), STATE_VARIABLE_ImportedItemsMap_0_7, STATE_VARIABLE_ImportedItemsMap_8);
}

static void MR_CALL 
recompilation__usage__construct_used_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImportedItemsMap_8;

  recompilation__usage__insert_into_imported_items_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImportedItemsMap_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImportedItemsMap_8));
}

void MR_CALL 
recompilation__usage__construct_used_file_contents_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RecompInfo_7,
  MR_Word MaybeTopModule_8,
  MR_Word TimestampMap_9,
  MR_Word * Contents_10)
{
  MR_Word MaybeTopModuleUsedFile_13;
  MR_Word AllVisibleModules_14;
  MR_Word ModuleName_15;
  MR_Word ImportedVisibleModules_16;
  MR_Word ImportedItems0_17;
  MR_Word ImportedItems1_18;
  MR_Word ItemsToProcess0_19;
  MR_Word ModuleUsedClasses_20;
  MR_Word UsedClasses0_21;
  MR_Word UsedItems_22;
  MR_Word TypeNames_23;
  MR_Word TypeDefns_24;
  MR_Word Insts_25;
  MR_Word Modes_26;
  MR_Word Classes_27;
  MR_Word ResolvedCtors_31;
  MR_Word ResolvedPreds_32;
  MR_Word ResolvedFuncs_33;
  MR_Word ResolvedUsedItems0_34;
  MR_Word Dependencies_35;
  MR_Word Info0_36;
  MR_Word Info_37;
  MR_Word ImportedItems_38;
  MR_Word ModuleInstances_39;
  MR_Word UsedTypeClasses_40;
  MR_Word ResolvedUsedItems_41;
  MR_Word ModuleItemVersionNumbersMap_42;
  MR_Box conv1_ImportedItems1_18;

  if ((MaybeTopModule_8 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTopModuleUsedFile_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SubModuleSet_11 = ((MR_Word) ((MR_hl_field(1, MaybeTopModule_8, 0))));
    MR_Word SubModules_12;

    SubModules_12 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModuleSet_11);
    {
      MaybeTopModuleUsedFile_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModuleUsedFile_13, 0) = ((MR_Box) (SubModules_12));
    }
  }
  hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_6, &AllVisibleModules_14);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_15);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_15)), AllVisibleModules_14, &ImportedVisibleModules_16);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0), &ImportedItems0_17);
  mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_1[0]), (MR_Word) (&recompilation__usage_scalar_common_1[26]), ImportedVisibleModules_16, ((MR_Box) (ImportedItems0_17)), &conv1_ImportedItems1_18);
  ImportedItems1_18 = ((MR_Word) (conv1_ImportedItems1_18));
  mercury__queue__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), &ItemsToProcess0_19);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[0]), &ModuleUsedClasses_20);
  mercury__set__init_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), &UsedClasses0_21);
  UsedItems_22 = ((MR_Word) ((MR_hl_field(0, RecompInfo_7, 1))));
  TypeNames_23 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, 0))));
  TypeDefns_24 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, 1))));
  Insts_25 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, 2))));
  Modes_26 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, 3))));
  Classes_27 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, 4))));
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[2]), &ResolvedCtors_31);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), &ResolvedPreds_32);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), &ResolvedFuncs_33);
  {
    ResolvedUsedItems0_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResolvedUsedItems0_34, 0) = ((MR_Box) (TypeNames_23));
    MR_hl_field(0, ResolvedUsedItems0_34, 1) = ((MR_Box) (TypeDefns_24));
    MR_hl_field(0, ResolvedUsedItems0_34, 2) = ((MR_Box) (Insts_25));
    MR_hl_field(0, ResolvedUsedItems0_34, 3) = ((MR_Box) (Modes_26));
    MR_hl_field(0, ResolvedUsedItems0_34, 4) = ((MR_Box) (Classes_27));
    MR_hl_field(0, ResolvedUsedItems0_34, 5) = ((MR_Box) (ResolvedCtors_31));
    MR_hl_field(0, ResolvedUsedItems0_34, 6) = ((MR_Box) (ResolvedPreds_32));
    MR_hl_field(0, ResolvedUsedItems0_34, 7) = ((MR_Box) (ResolvedFuncs_33));
  }
  Dependencies_35 = ((MR_Word) ((MR_hl_field(0, RecompInfo_7, 2))));
  {
    Info0_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_36, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Info0_36, 1) = ((MR_Box) (ItemsToProcess0_19));
    MR_hl_field(0, Info0_36, 2) = ((MR_Box) (ImportedItems1_18));
    MR_hl_field(0, Info0_36, 3) = ((MR_Box) (ModuleUsedClasses_20));
    MR_hl_field(0, Info0_36, 4) = ((MR_Box) (Dependencies_35));
    MR_hl_field(0, Info0_36, 5) = ((MR_Box) (ResolvedUsedItems0_34));
    MR_hl_field(0, Info0_36, 6) = ((MR_Box) (UsedClasses0_21));
  }
  recompilation__usage__find_all_used_imported_items_3_p_0(UsedItems_22, Info0_36, &Info_37);
  ImportedItems_38 = ((MR_Word) ((MR_hl_field(0, Info_37, 2))));
  ModuleInstances_39 = ((MR_Word) ((MR_hl_field(0, Info_37, 3))));
  ResolvedUsedItems_41 = ((MR_Word) ((MR_hl_field(0, Info_37, 5))));
  UsedTypeClasses_40 = ((MR_Word) ((MR_hl_field(0, Info_37, 6))));
  ModuleItemVersionNumbersMap_42 = ((MR_Word) ((MR_hl_field(0, RecompInfo_7, 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Contents_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTopModuleUsedFile_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (TimestampMap_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (ModuleItemVersionNumbersMap_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (ResolvedUsedItems_41));
    MR_hl_field(0, base, 5) = ((MR_Box) (UsedTypeClasses_40));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImportedItems_38));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModuleInstances_39));
  }
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Info_11;

  recompilation__usage__find_items_used_by_functors_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Info_11);
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_preds_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv14_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_preds_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Info_13);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  recompilation__usage__find_items_used_by_instances_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
recompilation__usage__find_all_used_imported_items_3_p_0(
  MR_Word UsedItems_4,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word ModuleInfo_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 0))));
  MR_Word Instances_7;
  MR_Word TypeNames_8;
  MR_Word TypeDefns_9;
  MR_Word Insts_10;
  MR_Word Modes_11;
  MR_Word Classes_12;
  MR_Word Functors_13;
  MR_Word Predicates_14;
  MR_Word Functions_15;
  MR_Word STATE_VARIABLE_Info_1_19;
  MR_Word STATE_VARIABLE_Info_2_21;
  MR_Word STATE_VARIABLE_Info_3_23;
  MR_Word STATE_VARIABLE_Info_4_25;
  MR_Word STATE_VARIABLE_Info_5_27;
  MR_Word STATE_VARIABLE_Info_6_29;
  MR_Word STATE_VARIABLE_Info_7_31;
  MR_Word STATE_VARIABLE_Info_8_33;
  MR_Word STATE_VARIABLE_Info_9_34;
  MR_Box conv1_STATE_VARIABLE_Info_1_19;
  MR_Box conv3_STATE_VARIABLE_Info_2_21;
  MR_Box conv5_STATE_VARIABLE_Info_3_23;
  MR_Box conv7_STATE_VARIABLE_Info_4_25;
  MR_Box conv9_STATE_VARIABLE_Info_5_27;
  MR_Box conv11_STATE_VARIABLE_Info_6_29;
  MR_Box conv13_STATE_VARIABLE_Info_7_31;
  MR_Box conv15_STATE_VARIABLE_Info_8_33;
  MR_Box conv17_STATE_VARIABLE_Info_9_34;

  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_6, &Instances_7);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[24]), Instances_7, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv1_STATE_VARIABLE_Info_1_19);
  STATE_VARIABLE_Info_1_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_19));
  TypeNames_8 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 0))));
  TypeDefns_9 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 1))));
  Insts_10 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 2))));
  Modes_11 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 3))));
  Classes_12 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 4))));
  Functors_13 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 5))));
  Predicates_14 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 6))));
  Functions_15 = ((MR_Word) ((MR_hl_field(0, UsedItems_4, 7))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[0]), TypeNames_8, ((MR_Box) (STATE_VARIABLE_Info_1_19)), &conv3_STATE_VARIABLE_Info_2_21);
  STATE_VARIABLE_Info_2_21 = ((MR_Word) (conv3_STATE_VARIABLE_Info_2_21));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[1]), TypeDefns_9, ((MR_Box) (STATE_VARIABLE_Info_2_21)), &conv5_STATE_VARIABLE_Info_3_23);
  STATE_VARIABLE_Info_3_23 = ((MR_Word) (conv5_STATE_VARIABLE_Info_3_23));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[2]), Insts_10, ((MR_Box) (STATE_VARIABLE_Info_3_23)), &conv7_STATE_VARIABLE_Info_4_25);
  STATE_VARIABLE_Info_4_25 = ((MR_Word) (conv7_STATE_VARIABLE_Info_4_25));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[3]), Modes_11, ((MR_Box) (STATE_VARIABLE_Info_4_25)), &conv9_STATE_VARIABLE_Info_5_27);
  STATE_VARIABLE_Info_5_27 = ((MR_Word) (conv9_STATE_VARIABLE_Info_5_27));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[4]), Classes_12, ((MR_Box) (STATE_VARIABLE_Info_5_27)), &conv11_STATE_VARIABLE_Info_6_29);
  STATE_VARIABLE_Info_6_29 = ((MR_Word) (conv11_STATE_VARIABLE_Info_6_29));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[5]), Predicates_14, ((MR_Box) (STATE_VARIABLE_Info_6_29)), &conv13_STATE_VARIABLE_Info_7_31);
  STATE_VARIABLE_Info_7_31 = ((MR_Word) (conv13_STATE_VARIABLE_Info_7_31));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_6[6]), Functions_15, ((MR_Box) (STATE_VARIABLE_Info_7_31)), &conv15_STATE_VARIABLE_Info_8_33);
  STATE_VARIABLE_Info_8_33 = ((MR_Word) (conv15_STATE_VARIABLE_Info_8_33));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__usage_scalar_common_1[6]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[25]), Functors_13, ((MR_Box) (STATE_VARIABLE_Info_8_33)), &conv17_STATE_VARIABLE_Info_9_34);
  STATE_VARIABLE_Info_9_34 = ((MR_Word) (conv17_STATE_VARIABLE_Info_9_34));
  recompilation__usage__process_imported_item_to_fixpoint_2_p_0(STATE_VARIABLE_Info_9_34, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
recompilation__usage__process_imported_item_to_fixpoint_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Queue0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
    MR_Word Queue_5;
    MR_Word STATE_VARIABLE_Info_1_8;
    MR_Word Var_9;
    MR_Word STATE_VARIABLE_Info_2_10;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_9 = mercury__queue__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))));
    {
      STATE_VARIABLE_Info_1_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 1) = ((MR_Box) (Var_9));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 3) = ((MR_Box) (Var_20));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 4) = ((MR_Box) (Var_21));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 5) = ((MR_Box) (Var_22));
      MR_hl_field(0, STATE_VARIABLE_Info_1_8, 6) = ((MR_Box) (Var_23));
    }
    recompilation__usage__process_imported_items_in_queue_3_p_0(Queue0_4, STATE_VARIABLE_Info_1_8, &STATE_VARIABLE_Info_2_10);
    Queue_5 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_10, 1))));
    succeeded = mercury__queue__is_empty_1_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), Queue_5);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_2_10;
    else
    {
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_2_10;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
recompilation__usage__process_imported_items_in_queue_3_p_0(
  MR_Word STATE_VARIABLE_Queue_0_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Item_6;
    MR_Word STATE_VARIABLE_Queue_1_12;
    MR_Box conv0_Item_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), &conv0_Item_6, STATE_VARIABLE_Queue_0_9, &STATE_VARIABLE_Queue_1_12);
    if (succeeded)
    {
      Item_6 = ((MR_Word) (conv0_Item_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ItemType_7 = ((MR_Unsigned) ((MR_hl_field(0, Item_6, 0))) & (MR_Integer) 15);
      MR_Word ItemId_8 = ((MR_Word) ((MR_hl_field(0, Item_6, 1))));
      MR_Word STATE_VARIABLE_Info_1_13;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

      recompilation__usage__find_items_used_by_item_4_p_0(ItemType_7, ItemId_8, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_13);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Queue_0_9 = STATE_VARIABLE_Queue_1_12;
      next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_13;
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
recompilation__usage__find_items_used_by_item_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_26;

  recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_26);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Info_30;

  recompilation__usage__find_items_used_by_class_decl_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_30);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_30));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_10;

  recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;

  switch (ItemType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 9:
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      break;
    case (MR_Integer) 7:
      recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 1, ItemName_6, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      break;
    case (MR_Integer) 5:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.find_items_used_by_item\'/4", (MR_String) "functor");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Insts_14;
        MR_Word UserInstTable_15;
        MR_Word InstCtor_16;
        MR_Word InstDefn_17;
        MR_Word ModuleInfo_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
        MR_Box conv0_InstDefn_17;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_54, &Insts_14);
        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(Insts_14, &UserInstTable_15);
        InstCtor_16 = recompilation__item_types__recomp_item_name_to_inst_ctor_1_f_0(ItemName_6);
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_15, ((MR_Box) (InstCtor_16)), &conv0_InstDefn_17);
        InstDefn_17 = ((MR_Word) (conv0_InstDefn_17));
        recompilation__usage__find_items_used_by_inst_defn_3_p_0(InstDefn_17, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Modes_18;
        MR_Word ModeDefns_19;
        MR_Word ModeCtor_20;
        MR_Word ModeDefn_21;
        MR_Word ModuleInfo_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
        MR_Box conv1_ModeDefn_21;

        hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_55, &Modes_18);
        hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_18, &ModeDefns_19);
        ModeCtor_20 = recompilation__item_types__recomp_item_name_to_mode_ctor_1_f_0(ItemName_6);
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_19, ((MR_Box) (ModeCtor_20)), &conv1_ModeDefn_21);
        ModeDefn_21 = ((MR_Word) (conv1_ModeDefn_21));
        recompilation__usage__find_items_used_by_mode_defn_3_p_0(ModeDefn_21, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      }
      break;
    case (MR_Integer) 8:
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      break;
    case (MR_Integer) 6:
      recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 0, ItemName_6, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
        MR_Word TypeTable_50;
        MR_Word TypeCtor_51;
        MR_Word TypeDefn_52;
        MR_Word TypeBody_53;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_49, &TypeTable_50);
        TypeCtor_51 = recompilation__item_types__recomp_item_name_to_type_ctor_1_f_0(ItemName_6);
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_50, TypeCtor_51, &TypeDefn_52);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_52, &TypeBody_53);
        recompilation__usage__find_items_used_by_type_body_3_p_0(TypeBody_53, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
        MR_Word TypeTable_9;
        MR_Word TypeCtor_10;
        MR_Word TypeDefn_11;
        MR_Word TypeBody_12;
        MR_Word Type_13;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_9);
        TypeCtor_10 = recompilation__item_types__recomp_item_name_to_type_ctor_1_f_0(ItemName_6);
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_10, &TypeDefn_11);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
        succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_Integer) 2);
        if (succeeded)
        {
          Type_13 = ((MR_Word) ((MR_hl_field(2, TypeBody_12, 0))));
          recompilation__usage__find_items_used_by_type_3_p_0(Type_13, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
        }
        else
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word ClassName_22 = ((MR_Word) ((MR_hl_field(0, ItemName_6, 0))));
        MR_Integer ClassArity_23 = ((MR_Integer) ((MR_hl_field(0, ItemName_6, 1))));
        MR_Word ClassId_24;
        MR_Word Classes_25;
        MR_Word ClassDefn_26;
        MR_Word Constraints_27;
        MR_Word ClassInterface_28;
        MR_Word Instances_30;
        MR_Word STATE_VARIABLE_Info_5_38;
        MR_Word STATE_VARIABLE_Info_6_40;
        MR_Word ModuleInfo_56;
        MR_Box conv2_ClassDefn_26;
        MR_Box conv4_STATE_VARIABLE_Info_5_38;
        MR_Word InstanceDefns_31;
        MR_Box conv7_InstanceDefns_31;

        {
          ClassId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassId_24, 0) = ((MR_Box) (ClassName_22));
          MR_hl_field(0, ClassId_24, 1) = ((MR_Box) (ClassArity_23));
        }
        ModuleInfo_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_56, &Classes_25);
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_25, ((MR_Box) (ClassId_24)), &conv2_ClassDefn_26);
        ClassDefn_26 = ((MR_Word) (conv2_ClassDefn_26));
        Constraints_27 = ((MR_Word) ((MR_hl_field(0, ClassDefn_26, 4))));
        ClassInterface_28 = ((MR_Word) ((MR_hl_field(0, ClassDefn_26, 7))));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[22]), Constraints_27, ((MR_Box) (STATE_VARIABLE_Info_0_32)), &conv4_STATE_VARIABLE_Info_5_38);
        STATE_VARIABLE_Info_5_38 = ((MR_Word) (conv4_STATE_VARIABLE_Info_5_38));
        if ((ClassInterface_28 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Info_6_40 = STATE_VARIABLE_Info_5_38;
        else
        {
          MR_Word ClassDecls_29 = ((MR_Word) ((MR_hl_field(1, ClassInterface_28, 0))));
          MR_Box conv6_STATE_VARIABLE_Info_6_40;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[23]), ClassDecls_29, ((MR_Box) (STATE_VARIABLE_Info_5_38)), &conv6_STATE_VARIABLE_Info_6_40);
          STATE_VARIABLE_Info_6_40 = ((MR_Word) (conv6_STATE_VARIABLE_Info_6_40));
        }
        hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_56, &Instances_30);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[5]), Instances_30, ((MR_Box) (ClassId_24)), &conv7_InstanceDefns_31);
        if (succeeded)
        {
          InstanceDefns_31 = ((MR_Word) (conv7_InstanceDefns_31));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_41;
          MR_Box conv9_STATE_VARIABLE_Info_33;

          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_41, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[0]));
            MR_hl_field(0, Var_41, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_3));
            MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_41, 3) = ((MR_Box) (ItemName_6));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_41, InstanceDefns_31, ((MR_Box) (STATE_VARIABLE_Info_6_40)), &conv9_STATE_VARIABLE_Info_33);
          *STATE_VARIABLE_Info_33 = ((MR_Word) (conv9_STATE_VARIABLE_Info_33));
        }
        else
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_6_40;
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word TypeCtor_6;
  MR_Word TypeArgs_7;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &TypeArgs_7);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Info_1_10;
    MR_Box conv1_STATE_VARIABLE_Info_9;

    recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_6, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_1_10);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[21]), TypeArgs_7, ((MR_Box) (STATE_VARIABLE_Info_1_10)), &conv1_STATE_VARIABLE_Info_9);
    *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
  }
  else
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_13;

  recompilation__usage__find_items_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word InstBody_8 = ((MR_Word) ((MR_hl_field(0, Defn_4, 2))));
  MR_Word IFTC_9 = ((MR_Word) ((MR_hl_field(0, Defn_4, 3))));
  MR_Word Inst_12 = (MR_Word) (InstBody_8);
  MR_Word STATE_VARIABLE_Info_1_20;

  recompilation__usage__find_items_used_by_inst_3_p_0(Inst_12, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_1_20);
  switch (MR_tag((MR_Word) IFTC_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(IFTC_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForTypeCtor_13 = ((MR_Word) ((MR_hl_field(1, IFTC_9, 0))));

        recompilation__usage__find_items_used_by_type_ctor_3_p_0(ForTypeCtor_13, STATE_VARIABLE_Info_1_20, STATE_VARIABLE_Info_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MatchingTypeCtors_14 = ((MR_Word) ((MR_hl_field(2, IFTC_9, 0))));
        MR_Box conv1_STATE_VARIABLE_Info_19;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[20]), MatchingTypeCtors_14, ((MR_Box) (STATE_VARIABLE_Info_1_20)), &conv1_STATE_VARIABLE_Info_19);
        *STATE_VARIABLE_Info_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IFTC_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_1_20;
          break;
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Mode_8;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Defn_4, 2))));

  Mode_8 = (MR_Word) (Var_13);
  recompilation__usage__find_items_used_by_mode_3_p_0(Mode_8, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * STATE_VARIABLE_Info_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Inst1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word Inst2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word STATE_VARIABLE_Info_1_9;

    recompilation__usage__find_items_used_by_inst_3_p_0(Inst1_4, STATE_VARIABLE_Info_0_2, &STATE_VARIABLE_Info_1_9);
    recompilation__usage__find_items_used_by_inst_3_p_0(Inst2_5, STATE_VARIABLE_Info_1_9, STATE_VARIABLE_Info_3);
  }
  else
  {
    MR_Word ModeName_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgInsts_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ItemName_14;
    MR_Integer Var_17;
    MR_Word STATE_VARIABLE_Info_1_19;
    MR_Box conv1_STATE_VARIABLE_Info_3;

    Var_17 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_12);
    {
      ItemName_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemName_14, 0) = ((MR_Box) (ModeName_11));
      MR_hl_field(0, ItemName_14, 1) = ((MR_Box) (Var_17));
    }
    recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, ItemName_14, STATE_VARIABLE_Info_0_2, &STATE_VARIABLE_Info_1_19);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[19]), ArgInsts_12, ((MR_Box) (STATE_VARIABLE_Info_1_19)), &conv1_STATE_VARIABLE_Info_3);
    *STATE_VARIABLE_Info_3 = ((MR_Word) (conv1_STATE_VARIABLE_Info_3));
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_12;

  recompilation__usage__find_items_used_by_bound_functor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_3;

  recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_3));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_21;

  recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_21)
{
  MR_Word tscc_proc_2_input_1_InstName_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_21;

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
    MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
    MR_Word STATE_VARIABLE_Info_21;

    switch (MR_tag((MR_Word) Inst_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_43 = ((MR_Word) ((MR_hl_field(1, Inst_4, 1))));

          if ((HOInstInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
          else
          {
            MR_Word Modes_34;
            MR_Word Var_37 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_43), (MR_Integer) 1));
            MR_Box conv3_STATE_VARIABLE_Info_21;

            Modes_34 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[14]), Modes_34, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv3_STATE_VARIABLE_Info_21);
            STATE_VARIABLE_Info_21 = ((MR_Word) (conv3_STATE_VARIABLE_Info_21));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_4, 2))));
          MR_Box conv5_STATE_VARIABLE_Info_21;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[15]), BoundFunctors_16, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv5_STATE_VARIABLE_Info_21);
          STATE_VARIABLE_Info_21 = ((MR_Word) (conv5_STATE_VARIABLE_Info_21));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_19;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Inst_4 = SubInst_18;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_8 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));

              if ((HOInstInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
              else
              {
                MR_Word Modes_11;
                MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_8), (MR_Integer) 1));
                MR_Box conv1_STATE_VARIABLE_Info_21;

                Modes_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[13]), Modes_11, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv1_STATE_VARIABLE_Info_21);
                STATE_VARIABLE_Info_21 = ((MR_Word) (conv1_STATE_VARIABLE_Info_21));
              }
            }
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
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
          MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, InstName_4, 0))));
          MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(0, InstName_4, 1))));
          MR_Word ItemName_8;
          MR_Integer Var_24;
          MR_Word STATE_VARIABLE_Info_1_26;
          MR_Box conv11_STATE_VARIABLE_Info_23;

          Var_24 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_7);
          {
            ItemName_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemName_8, 0) = ((MR_Box) (Name_6));
            MR_hl_field(0, ItemName_8, 1) = ((MR_Box) (Var_24));
          }
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 2, ItemName_8, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_26);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[18]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_1_26)), &conv11_STATE_VARIABLE_Info_23);
          STATE_VARIABLE_Info_23 = ((MR_Word) (conv11_STATE_VARIABLE_Info_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_40 = ((MR_Word) ((MR_hl_field(1, InstName_4, 1))));
          MR_Word InstB_41 = ((MR_Word) ((MR_hl_field(1, InstName_4, 2))));
          MR_Word STATE_VARIABLE_Info_3_42;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;

          recompilation__usage__find_items_used_by_inst_3_p_0(InstA_40, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_3_42);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_41;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_3_42;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(2, InstName_4, 0))));
          MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(2, InstName_4, 1))));
          MR_Word STATE_VARIABLE_Info_3_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;

          recompilation__usage__find_items_used_by_inst_3_p_0(InstA_9, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_3_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_10;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_3_28;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_37 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_13 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_39 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_38 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word Type_21 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word TypeCtor_43;
              MR_Word TypeArgs_44;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_43, &TypeArgs_44);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Info_1_45;
                MR_Box conv7_STATE_VARIABLE_Info_23;

                recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_43, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_45);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[16]), TypeArgs_44, ((MR_Box) (STATE_VARIABLE_Info_1_45)), &conv7_STATE_VARIABLE_Info_23);
                STATE_VARIABLE_Info_23 = ((MR_Word) (conv7_STATE_VARIABLE_Info_23));
              }
              else
                STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Info_7_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word TypeCtor_49;
              MR_Word TypeArgs_50;
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_35, &TypeCtor_49, &TypeArgs_50);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Info_1_51;
                MR_Box conv9_STATE_VARIABLE_Info_7_32;

                recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_49, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_51);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[17]), TypeArgs_50, ((MR_Box) (STATE_VARIABLE_Info_1_51)), &conv9_STATE_VARIABLE_Info_7_32);
                STATE_VARIABLE_Info_7_32 = ((MR_Word) (conv9_STATE_VARIABLE_Info_7_32));
              }
              else
                STATE_VARIABLE_Info_7_32 = STATE_VARIABLE_Info_0_22;
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_7_32;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_23;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_21 = tscc_output_1_STATE_VARIABLE_Info_21;
  return;
}

static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_21)
{
  MR_Word tscc_proc_1_input_1_Inst_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_21;

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
    MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
    MR_Word STATE_VARIABLE_Info_21;

    switch (MR_tag((MR_Word) Inst_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_43 = ((MR_Word) ((MR_hl_field(1, Inst_4, 1))));

          if ((HOInstInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
          else
          {
            MR_Word Modes_34;
            MR_Word Var_37 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_43), (MR_Integer) 1));
            MR_Box conv3_STATE_VARIABLE_Info_21;

            Modes_34 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[14]), Modes_34, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv3_STATE_VARIABLE_Info_21);
            STATE_VARIABLE_Info_21 = ((MR_Word) (conv3_STATE_VARIABLE_Info_21));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_4, 2))));
          MR_Box conv5_STATE_VARIABLE_Info_21;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[15]), BoundFunctors_16, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv5_STATE_VARIABLE_Info_21);
          STATE_VARIABLE_Info_21 = ((MR_Word) (conv5_STATE_VARIABLE_Info_21));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_19;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Inst_4 = SubInst_18;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_8 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));

              if ((HOInstInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
              else
              {
                MR_Word Modes_11;
                MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_8), (MR_Integer) 1));
                MR_Box conv1_STATE_VARIABLE_Info_21;

                Modes_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[13]), Modes_11, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv1_STATE_VARIABLE_Info_21);
                STATE_VARIABLE_Info_21 = ((MR_Word) (conv1_STATE_VARIABLE_Info_21));
              }
            }
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
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
          MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, InstName_4, 0))));
          MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(0, InstName_4, 1))));
          MR_Word ItemName_8;
          MR_Integer Var_24;
          MR_Word STATE_VARIABLE_Info_1_26;
          MR_Box conv11_STATE_VARIABLE_Info_23;

          Var_24 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_7);
          {
            ItemName_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemName_8, 0) = ((MR_Box) (Name_6));
            MR_hl_field(0, ItemName_8, 1) = ((MR_Box) (Var_24));
          }
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 2, ItemName_8, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_26);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[18]), ArgInsts_7, ((MR_Box) (STATE_VARIABLE_Info_1_26)), &conv11_STATE_VARIABLE_Info_23);
          STATE_VARIABLE_Info_23 = ((MR_Word) (conv11_STATE_VARIABLE_Info_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_40 = ((MR_Word) ((MR_hl_field(1, InstName_4, 1))));
          MR_Word InstB_41 = ((MR_Word) ((MR_hl_field(1, InstName_4, 2))));
          MR_Word STATE_VARIABLE_Info_3_42;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;

          recompilation__usage__find_items_used_by_inst_3_p_0(InstA_40, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_3_42);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_41;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_3_42;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(2, InstName_4, 0))));
          MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(2, InstName_4, 1))));
          MR_Word STATE_VARIABLE_Info_3_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;

          recompilation__usage__find_items_used_by_inst_3_p_0(InstA_9, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_3_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_10;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_3_28;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_37 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_13 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_39 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word SubInstName_38 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
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
              MR_Word Type_21 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word TypeCtor_43;
              MR_Word TypeArgs_44;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_43, &TypeArgs_44);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Info_1_45;
                MR_Box conv7_STATE_VARIABLE_Info_23;

                recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_43, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_45);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[16]), TypeArgs_44, ((MR_Box) (STATE_VARIABLE_Info_1_45)), &conv7_STATE_VARIABLE_Info_23);
                STATE_VARIABLE_Info_23 = ((MR_Word) (conv7_STATE_VARIABLE_Info_23));
              }
              else
                STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Info_7_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word TypeCtor_49;
              MR_Word TypeArgs_50;
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_35, &TypeCtor_49, &TypeArgs_50);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Info_1_51;
                MR_Box conv9_STATE_VARIABLE_Info_7_32;

                recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_49, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_51);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[17]), TypeArgs_50, ((MR_Box) (STATE_VARIABLE_Info_1_51)), &conv9_STATE_VARIABLE_Info_7_32);
                STATE_VARIABLE_Info_7_32 = ((MR_Word) (conv9_STATE_VARIABLE_Info_7_32));
              }
              else
                STATE_VARIABLE_Info_7_32 = STATE_VARIABLE_Info_0_22;
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = STATE_VARIABLE_Info_7_32;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Info_0_22;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_23;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_21 = tscc_output_1_STATE_VARIABLE_Info_21;
  return;
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_18;

  recompilation__usage__find_items_used_by_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_9;

  recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
  MR_Word TypeBody_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeBody_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_6 = (MR_Word) ((MR_Word) (TypeBody_4));
        MR_Word Ctors_7 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_6, 0))));
        MR_Word MaybeSuperType_9 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_6, 2))));
        MR_Word STATE_VARIABLE_Info_1_20;
        MR_Word Var_22;
        MR_Box conv3_STATE_VARIABLE_Info_19;

        if ((MaybeSuperType_9 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Info_1_20 = STATE_VARIABLE_Info_0_18;
        else
        {
          MR_Word SuperType_13 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_9, 0))));
          MR_Word TypeCtor_28;
          MR_Word TypeArgs_29;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SuperType_13, &TypeCtor_28, &TypeArgs_29);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Info_1_30;
            MR_Box conv1_STATE_VARIABLE_Info_1_20;

            recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_28, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_1_30);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[10]), TypeArgs_29, ((MR_Box) (STATE_VARIABLE_Info_1_30)), &conv1_STATE_VARIABLE_Info_1_20);
            STATE_VARIABLE_Info_1_20 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_20));
          }
          else
            STATE_VARIABLE_Info_1_20 = STATE_VARIABLE_Info_0_18;
        }
        Var_22 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_7);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[11]), Var_22, ((MR_Box) (STATE_VARIABLE_Info_1_20)), &conv3_STATE_VARIABLE_Info_19);
        *STATE_VARIABLE_Info_19 = ((MR_Word) (conv3_STATE_VARIABLE_Info_19));
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      break;
    case (MR_Integer) 2:
      {
        MR_Word EqvType_14 = ((MR_Word) ((MR_hl_field(2, TypeBody_4, 0))));
        MR_Word TypeCtor_34;
        MR_Word TypeArgs_35;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(EqvType_14, &TypeCtor_34, &TypeArgs_35);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_1_36;
          MR_Box conv5_STATE_VARIABLE_Info_19;

          recompilation__usage__find_items_used_by_type_ctor_3_p_0(TypeCtor_34, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_1_36);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[12]), TypeArgs_35, ((MR_Box) (STATE_VARIABLE_Info_1_36)), &conv5_STATE_VARIABLE_Info_19);
          *STATE_VARIABLE_Info_19 = ((MR_Word) (conv5_STATE_VARIABLE_Info_19));
        }
        else
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
          break;
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, 0))));
  MR_Word Var_9;
  MR_Word Var_10;

  succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_ctor_is_higher_order_3_p_0(TypeCtor_4, &Var_9, &Var_10);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word TypeCtorItem_11;

    TypeCtorItem_11 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_4);
    recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 0, TypeCtorItem_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
  }
  else
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
}

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_9;

  recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded = (ItemType_5 == (MR_Integer) 4);
  MR_Word STATE_VARIABLE_Info_1_14;

  if (succeeded)
  {
    MR_Word Classes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 6))));
    MR_Word Classes_9;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    mercury__set__insert_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0), ((MR_Box) (ItemName_6)), Classes0_8, &Classes_9);
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 3))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 4))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 5))));
    {
      STATE_VARIABLE_Info_1_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 3) = ((MR_Box) (Var_27));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 4) = ((MR_Box) (Var_28));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, STATE_VARIABLE_Info_1_14, 6) = ((MR_Box) (Classes_9));
    }
  }
  else
    STATE_VARIABLE_Info_1_14 = STATE_VARIABLE_Info_0_12;
  succeeded = recompilation__usage__item_is_recorded_used_3_p_0(STATE_VARIABLE_Info_1_14, ItemType_5, ItemName_6);
  if (succeeded)
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_1_14;
  else
  {
    MR_Word ModuleName_46;
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, ItemName_6, 0))));
    MR_Word Var_50;
    MR_Word Var_57;

    succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_46 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 0))));
      hlds__hlds_module__module_info_get_name_2_p_0(Var_50, &Var_57);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_46, Var_57);
    }
    if (succeeded)
      *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_1_14;
    else
    {
      MR_Word Queue0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 1))));
      MR_Word Queue_11;
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_Info_2_16;
      MR_Word STATE_VARIABLE_Info_3_17;
      MR_Word Dependencies_59;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word EquivTypes_60;
      MR_Box conv0_EquivTypes_60;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = (MR_Box) ((MR_Unsigned) (ItemType_5));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (ItemName_6));
      }
      mercury__queue__put_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), ((MR_Box) (Var_15)), Queue0_10, &Queue_11);
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 2))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 3))));
      Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 4))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 5))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_14, 6))));
      {
        STATE_VARIABLE_Info_2_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 0) = ((MR_Box) (Var_37));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 1) = ((MR_Box) (Queue_11));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 2) = ((MR_Box) (Var_39));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 3) = ((MR_Box) (Var_40));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 4) = ((MR_Box) (Var_41));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 5) = ((MR_Box) (Var_42));
        MR_hl_field(0, STATE_VARIABLE_Info_2_16, 6) = ((MR_Box) (Var_43));
      }
      recompilation__usage__record_imported_item_4_p_0(ItemType_5, ItemName_6, STATE_VARIABLE_Info_2_16, &STATE_VARIABLE_Info_3_17);
      Dependencies_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_17, 4))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage_scalar_common_2[7]), Dependencies_59, ((MR_Box) (Var_15)), &conv0_EquivTypes_60);
      if (succeeded)
      {
        EquivTypes_60 = ((MR_Word) (conv0_EquivTypes_60));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_63;
        MR_Box conv2_STATE_VARIABLE_Info_13;

        Var_63 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), EquivTypes_60);
        mercury__list__foldl_4_p_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), (MR_Word) (&recompilation__usage_scalar_common_1[9]), Var_63, ((MR_Box) (STATE_VARIABLE_Info_3_17)), &conv2_STATE_VARIABLE_Info_13);
        *STATE_VARIABLE_Info_13 = ((MR_Word) (conv2_STATE_VARIABLE_Info_13));
      }
      else
        *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_3_17;
    }
  }
}

static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
  MR_Word ItemType_5,
  MR_Word ItemName_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemName_6, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, ItemName_6, 1))));
  MR_Word Module_12;
  MR_String Name_13;
  MR_Word ImportedItems0_15;
  MR_Word ModuleItems1_17;
  MR_Word ModuleItemIds0_18;
  MR_Word ModuleItemIds_19;
  MR_Word ModuleItems_20;
  MR_Word ImportedItems_21;
  MR_Word Var_26;
  MR_Word ModuleItems0_16;
  MR_Box conv0_ModuleItems0_16;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;

  if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
  {
    Module_12 = ((MR_Word) ((MR_hl_field(1, SymName_8, 0))));
    Name_13 = ((MR_String) ((MR_hl_field(1, SymName_8, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.record_imported_item\'/4", (MR_String) "unqualified item");
      return;
    }
  ImportedItems0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0), ImportedItems0_15, ((MR_Box) (Module_12)), &conv0_ModuleItems0_16);
  if (succeeded)
  {
    ModuleItems0_16 = ((MR_Word) (conv0_ModuleItems0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ModuleItems1_17 = ModuleItems0_16;
  else
  {
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    Var_45 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_46 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_48 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_50 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    Var_52 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    {
      ModuleItems1_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleItems1_17, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, ModuleItems1_17, 1) = ((MR_Box) (Var_46));
      MR_hl_field(0, ModuleItems1_17, 2) = ((MR_Box) (Var_47));
      MR_hl_field(0, ModuleItems1_17, 3) = ((MR_Box) (Var_48));
      MR_hl_field(0, ModuleItems1_17, 4) = ((MR_Box) (Var_49));
      MR_hl_field(0, ModuleItems1_17, 5) = ((MR_Box) (Var_50));
      MR_hl_field(0, ModuleItems1_17, 6) = ((MR_Box) (Var_51));
      MR_hl_field(0, ModuleItems1_17, 7) = ((MR_Box) (Var_52));
    }
  }
  recompilation__usage__get_module_imported_items_3_p_0(ModuleItems1_17, ItemType_5, &ModuleItemIds0_18);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (Arity_9));
  }
  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), ((MR_Box) (Var_26)), ModuleItemIds0_18, &ModuleItemIds_19);
  recompilation__usage__set_module_imported_items_4_p_0(ItemType_5, ModuleItemIds_19, ModuleItems1_17, &ModuleItems_20);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0), ((MR_Box) (Module_12)), ((MR_Box) (ModuleItems_20)), ImportedItems0_15, &ImportedItems_21);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 0))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 1))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 3))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 4))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 5))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_23 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (ImportedItems_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
  }
}

static void MR_CALL 
recompilation__usage__set_module_imported_items_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MII_0_3,
  MR_Word * STATE_VARIABLE_MII_4)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 9:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.set_module_imported_items\'/4", (MR_String) "recomp_foreign_proc");
        return;
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_115));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_116));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_117));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_118));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_119));
          MR_hl_field(0, base, 7) = ((MR_Box) (HeadVar__2_2));
        }
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_98));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_99));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_100));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_101));
          MR_hl_field(0, base, 5) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_103));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_104));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
          MR_hl_field(0, base, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_76));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_77));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_78));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_79));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_80));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_82));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_83));
          MR_hl_field(0, base, 3) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_85));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_86));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_87));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_88));
        }
      }
      break;
    case (MR_Integer) 8:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.set_module_imported_items\'/4", (MR_String) "recomp_mutable");
        return;
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_106));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_107));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_108));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_109));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
          MR_hl_field(0, base, 6) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_112));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
          MR_hl_field(0, base, 1) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_70));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_71));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_72));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 4))));
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_58));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_59));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_60));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_61));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_62));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_63));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_64));
        }
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 0))));
        MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 1))));
        MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 2))));
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 3))));
        MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 5))));
        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 6))));
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MII_0_3, 7))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_MII_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_89));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_90));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_91));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 4) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_96));
        }
      }
      break;
  }
}

static void MR_CALL 
recompilation__usage__get_module_imported_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 9:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.get_module_imported_items\'/3", (MR_String) "recomp_foreign_proc");
        return;
      }
      break;
    case (MR_Integer) 7:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
      break;
    case (MR_Integer) 5:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
      break;
    case (MR_Integer) 2:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
      break;
    case (MR_Integer) 3:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
      break;
    case (MR_Integer) 8:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.get_module_imported_items\'/3", (MR_String) "recomp_mutable");
        return;
      }
      break;
    case (MR_Integer) 6:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      break;
    case (MR_Integer) 4:
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
      break;
  }
}

static MR_bool MR_CALL 
recompilation__usage__item_is_recorded_used_3_p_0(
  MR_Word Info_4,
  MR_Word ItemType_5,
  MR_Word ItemName_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_21_21;
  MR_Word TypeCtorInfo_22_22;
  MR_Word TypeCtorInfo_23_23;
  MR_Word ImportedItems_7 = ((MR_Word) ((MR_hl_field(0, Info_4, 2))));
  MR_Word ModuleName_8;
  MR_String Name_9;
  MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(0, ItemName_6, 1))));
  MR_Word ModuleImportedItems_11;
  MR_Word ModuleItemIdSet_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, ItemName_6, 0))));
  MR_Word Var_14;
  MR_Box conv0_ModuleImportedItems_11;

  succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
  if (succeeded)
  {
    ModuleName_8 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
    Name_9 = ((MR_String) ((MR_hl_field(1, Var_13, 1))));
    TypeCtorInfo_21_21 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeCtorInfo_22_22 = (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_module_imported_items_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_21, TypeCtorInfo_22_22, ImportedItems_7, ((MR_Box) (ModuleName_8)), &conv0_ModuleImportedItems_11);
    if (succeeded)
    {
      ModuleImportedItems_11 = ((MR_Word) (conv0_ModuleImportedItems_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      switch (ItemType_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.get_module_imported_items\'/3", (MR_String) "recomp_foreign_proc");
          break;
        case (MR_Integer) 7:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 7))));
          break;
        case (MR_Integer) 5:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 5))));
          break;
        case (MR_Integer) 2:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 2))));
          break;
        case (MR_Integer) 3:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 3))));
          break;
        case (MR_Integer) 8:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.usage.get_module_imported_items\'/3", (MR_String) "recomp_mutable");
          break;
        case (MR_Integer) 6:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 6))));
          break;
        case (MR_Integer) 1:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 1))));
          break;
        case (MR_Integer) 0:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 0))));
          break;
        case (MR_Integer) 4:
          ModuleItemIdSet_12 = ((MR_Word) ((MR_hl_field(0, ModuleImportedItems_11, 4))));
          break;
      }
      TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (Name_9));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (Arity_10));
      }
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (Var_14)), ModuleItemIdSet_12);
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word Id_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, Id_6, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Id_6, 1))));
  MR_Word UsedItems0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, 5))));
  MR_Word UsedItems_13;
  MR_Word STATE_VARIABLE_Info_1_17;
  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 7))));
  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 6))));
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;

  switch (PredOrFunc_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word IdSet_22;
        MR_String UnqualifiedName_92;
        MR_Word ModuleQualifier_93;
        MR_Word MatchingNames1_95;
        MR_Word Recorded_96;
        MR_Word MatchingNames_97;
        MR_Word MatchingNames0_94;
        MR_Box conv0_MatchingNames0_94;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;

        UnqualifiedName_92 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
        ModuleQualifier_93 = recompilation__record_uses__find_module_qualifier_1_f_0(SymName_8);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), Var_84, ((MR_Box) (UnqualifiedName_92)), &conv0_MatchingNames0_94);
        if (succeeded)
        {
          MatchingNames0_94 = ((MR_Word) (conv0_MatchingNames0_94));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          MatchingNames1_95 = MatchingNames0_94;
        else
          MatchingNames1_95 = (MR_Word) ((MR_Unsigned) 0U);
        recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_51_95_95_91_53_93_95_48_9_p_0(PredOrFunc_5, ModuleQualifier_93, SymName_8, Arity_9, &Recorded_96, MatchingNames1_95, &MatchingNames_97, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_1_17);
        switch (Recorded_96) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IdSet_22 = Var_84;
            break;
          case (MR_Integer) 1:
            mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), ((MR_Box) (UnqualifiedName_92)), ((MR_Box) (MatchingNames_97)), Var_84, &IdSet_22);
            break;
        }
        Var_51 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 0))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 1))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 2))));
        Var_54 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 3))));
        Var_55 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 4))));
        Var_56 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 5))));
        Var_57 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 6))));
        {
          UsedItems_13 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UsedItems_13, 0) = ((MR_Box) (Var_51));
          MR_hl_field(0, UsedItems_13, 1) = ((MR_Box) (Var_52));
          MR_hl_field(0, UsedItems_13, 2) = ((MR_Box) (Var_53));
          MR_hl_field(0, UsedItems_13, 3) = ((MR_Box) (Var_54));
          MR_hl_field(0, UsedItems_13, 4) = ((MR_Box) (Var_55));
          MR_hl_field(0, UsedItems_13, 5) = ((MR_Box) (Var_56));
          MR_hl_field(0, UsedItems_13, 6) = ((MR_Box) (Var_57));
          MR_hl_field(0, UsedItems_13, 7) = ((MR_Box) (IdSet_22));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word IdSet_12;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_43;

        recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_95_104_111_50_95_95_91_52_93_95_48_7_p_0(PredOrFunc_5, SymName_8, Arity_9, Var_85, &IdSet_12, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_1_17);
        Var_36 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 1))));
        Var_38 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 2))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 3))));
        Var_40 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 4))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 5))));
        Var_43 = ((MR_Word) ((MR_hl_field(0, UsedItems0_10, 7))));
        {
          UsedItems_13 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UsedItems_13, 0) = ((MR_Box) (Var_36));
          MR_hl_field(0, UsedItems_13, 1) = ((MR_Box) (Var_37));
          MR_hl_field(0, UsedItems_13, 2) = ((MR_Box) (Var_38));
          MR_hl_field(0, UsedItems_13, 3) = ((MR_Box) (Var_39));
          MR_hl_field(0, UsedItems_13, 4) = ((MR_Box) (Var_40));
          MR_hl_field(0, UsedItems_13, 5) = ((MR_Box) (Var_41));
          MR_hl_field(0, UsedItems_13, 6) = ((MR_Box) (IdSet_12));
          MR_hl_field(0, UsedItems_13, 7) = ((MR_Box) (Var_43));
        }
      }
      break;
  }
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 0))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 1))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 2))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 3))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 4))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_17, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 5) = ((MR_Box) (UsedItems_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_65));
  }
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_95_104_111_50_95_95_91_52_93_95_48_7_p_0(
  MR_Word Var_42,
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word STATE_VARIABLE_IdSet_0_19,
  MR_Word * STATE_VARIABLE_IdSet_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_String UnqualifiedName_13;
  MR_Word ModuleQualifier_14;
  MR_Word MatchingNames1_16;
  MR_Word Recorded_17;
  MR_Word MatchingNames_18;
  MR_Word MatchingNames0_15;
  MR_Box conv0_MatchingNames0_15;

  UnqualifiedName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
  ModuleQualifier_14 = recompilation__record_uses__find_module_qualifier_1_f_0(SymName_8);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), STATE_VARIABLE_IdSet_0_19, ((MR_Box) (UnqualifiedName_13)), &conv0_MatchingNames0_15);
  if (succeeded)
  {
    MatchingNames0_15 = ((MR_Word) (conv0_MatchingNames0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    MatchingNames1_16 = MatchingNames0_15;
  else
    MatchingNames1_16 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_51_95_95_91_53_93_95_48_9_p_0(Var_42, ModuleQualifier_14, SymName_8, Arity_9, &Recorded_17, MatchingNames1_16, &MatchingNames_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  switch (Recorded_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_IdSet_20 = STATE_VARIABLE_IdSet_0_19;
      break;
    case (MR_Integer) 1:
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__usage_scalar_common_2[4]), ((MR_Box) (UnqualifiedName_13)), ((MR_Box) (MatchingNames_18)), STATE_VARIABLE_IdSet_0_19, STATE_VARIABLE_IdSet_20);
      break;
  }
}

static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_51_95_95_91_53_93_95_48_9_p_0(
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
  MR_bool succeeded;

  if ((STATE_VARIABLE_List_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Map0_17;

    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &Map0_17);
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), Map0_17, ((MR_Box) (ModuleQualifier_1)));
    if (succeeded)
    {
      *Recorded_5 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
    }
    else
    {
      MR_Word Map_65;

      recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, Map0_17, &Map_65, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
              MR_hl_field(0, Var_25, 0) = ((MR_Box) (Arity_3));
              MR_hl_field(0, Var_25, 1) = ((MR_Box) (Map_65));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_List_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word ListRest0_36 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_List_0_6, 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_List_0_6, 0))));

    ThisArity_34 = ((MR_Integer) ((MR_hl_field(0, Var_45, 0))));
    ArityMap0_35 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
    succeeded = (Arity_3 < ThisArity_34);
    if (succeeded)
    {
      MR_Word NewArityMap0_37;

      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), &NewArityMap0_37);
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), NewArityMap0_37, ((MR_Box) (ModuleQualifier_1)));
      if (succeeded)
      {
        *Recorded_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
        *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
      }
      else
      {
        MR_Word NewArityMap_66;

        recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, NewArityMap0_37, &NewArityMap_66, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
                MR_hl_field(0, Var_48, 0) = ((MR_Box) (Arity_3));
                MR_hl_field(0, Var_48, 1) = ((MR_Box) (NewArityMap_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_List_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_6));
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
        succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), ArityMap0_35, ((MR_Box) (ModuleQualifier_1)));
        if (succeeded)
        {
          *Recorded_5 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
          *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
        }
        else
        {
          MR_Word ArityMap_67;

          recompilation__usage__do_record_used_pred_or_func_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ArityMap0_35, &ArityMap_67, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
                  MR_hl_field(0, Var_51, 0) = ((MR_Box) (Arity_3));
                  MR_hl_field(0, Var_51, 1) = ((MR_Box) (ArityMap_67));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_List_7 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(1, base, 1) = ((MR_Box) (ListRest0_36));
                }
              }
              break;
          }
        }
      }
      else
      {
        MR_Word ListRest_40;

        recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_51_95_95_91_53_93_95_48_9_p_0(Var_58, ModuleQualifier_1, SymName_2, Arity_3, Recorded_5, ListRest0_36, &ListRest_40, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
        switch (*Recorded_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_List_7 = STATE_VARIABLE_List_0_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_List_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, base, 1) = ((MR_Box) (ListRest_40));
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_38;

  recompilation__usage__find_items_used_by_pred_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_38);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_38));
}

static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  conv0_LambdaHeadVar__2_37 = recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__254__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
  return wrapper_arg_2;
}

static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word ModuleQualifier_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word * Recorded_14,
  MR_Word STATE_VARIABLE_MatchingNames_0_29,
  MR_Word * STATE_VARIABLE_MatchingNames_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, 0))));
  MR_Word PredTable_18;
  MR_Integer PredFormArityInt_19;
  MR_Word PredFormArity_20;
  MR_Word MatchingPredIds_21;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredTable_18);
  parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_10, &PredFormArityInt_19, Arity_13);
  PredFormArity_20 = (MR_Word) (PredFormArityInt_19);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_18, (MR_Integer) 1, PredOrFunc_10, SymName_12, PredFormArity_20, &MatchingPredIds_21);
  if ((MatchingPredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Recorded_14 = (MR_Integer) 0;
    *STATE_VARIABLE_MatchingNames_30 = STATE_VARIABLE_MatchingNames_0_29;
    *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
  }
  else
  {
    MR_Word PredModules_24;
    MR_Word NameArity_28;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Box conv2_STATE_VARIABLE_Info_32;

    *Recorded_14 = (MR_Integer) 1;
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&recompilation__usage_scalar_common_3[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (ModuleInfo_17));
    }
    Var_34 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&recompilation__usage_scalar_common_1[3]), Var_35, MatchingPredIds_21);
    PredModules_24 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__usage_scalar_common_1[3]), Var_34);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__usage_scalar_common_2[3]), ((MR_Box) (ModuleQualifier_11)), ((MR_Box) (PredModules_24)), STATE_VARIABLE_MatchingNames_0_29, STATE_VARIABLE_MatchingNames_30);
    Var_39 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
    {
      NameArity_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameArity_28, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, NameArity_28, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (PredOrFunc_10));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (NameArity_28));
    }
    mercury__set__fold_4_p_0((MR_Word) (&recompilation__usage_scalar_common_1[3]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0), Var_40, PredModules_24, ((MR_Box) (STATE_VARIABLE_Info_0_31)), &conv2_STATE_VARIABLE_Info_32);
    *STATE_VARIABLE_Info_32 = ((MR_Word) (conv2_STATE_VARIABLE_Info_32));
  }
}

static MR_bool MR_CALL 
recompilation__usage____Unify____maybe_recorded_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__usage____Unify____maybe_recorded_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__usage____Compare____maybe_recorded_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__usage____Compare____maybe_recorded_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__usage____Unify____recompilation_usage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__usage____Compare____recompilation_usage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__usage____Unify____record_item_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = recompilation__usage____Unify____record_item_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
recompilation__usage____Compare____record_item_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__usage____Compare____record_item_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__recompilation__usage__init(void)
{
}

void mercury__recompilation__usage__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_maybe_recorded_0);
  MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0);
  MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_record_item_pred_1);
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
