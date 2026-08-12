/*
** Automatically generated from `unused_imports.m'
** by the Mercury compiler,
** version rotd-2026-08-12
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


// :- module check_hlds.unused_imports.
// :- implementation.

/*
INIT mercury__check_hlds__unused_imports__init
ENDINIT
*/

#include "check_hlds.unused_imports.mih"


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
#include "version_array.mih"
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
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unused_imports__one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__tree234__pti_tree234_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_msg_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_ordinal_ordered_anywhere_or_interface_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0[2];

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0[2];

static const MR_PseudoTypeInfo check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_0_0[2];

static const MR_DuFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_0_0;

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_0_0[1];

static const MR_DuPtagLayout check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_0[1];

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_0[1];

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__unused_imports__tree234__ti_tree234_2check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0;

static const MR_PseudoTypeInfo check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_msg_kind_0_0[2];

static const MR_DuArgLocn check_hlds__unused_imports__check_hlds__unused_imports__field_locns_unused_avail_msg_kind_0_0[2];

static const MR_DuFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_msg_kind_0_0;

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_msg_kind_0_0[1];

static const MR_DuPtagLayout check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_msg_kind_0[1];

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_msg_kind_0[1];

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_msg_kind_0[1];

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__639__1_4_p_0(
  MR_Word Visibility_5,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

static MR_Word MR_CALL 
check_hlds__unused_imports__IntroducedFrom__func__generate_unused_import_warning__447__1_1_f_0(
  MR_Word LambdaHeadVar__1_129);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word BoundFunctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__var_table_entry_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12);

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10);

static void MR_CALL 
check_hlds__unused_imports__clause_used_modules_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_UsedModules_0_71,
  MR_Word * STATE_VARIABLE_UsedModules_72);

static void MR_CALL 
check_hlds__unused_imports__proc_info_used_modules_5_p_0(
  MR_Word Visibility_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_15,
  MR_Word * STATE_VARIABLE_UsedModules_16);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word Visibility_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_15,
  MR_Word * STATE_VARIABLE_UsedModules_16);

static void MR_CALL 
check_hlds__unused_imports__pred_info_used_modules_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32);

static void MR_CALL 
check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(
  MR_Word ConstStructArg_4,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10);

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
check_hlds__unused_imports__cons_id_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_UsedModules_0_32,
  MR_Word * STATE_VARIABLE_UsedModules_33);

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ThisModuleName_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word ThisModuleName_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefns_10,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ClassDefn_7,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
check_hlds__unused_imports__mode_used_modules_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeDefn_7,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
check_hlds__unused_imports__type_ctor_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__user_inst_used_modules_4_p_0(
  MR_Word _InstCtor_5,
  MR_Word InstDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_19,
  MR_Word * STATE_VARIABLE_UsedModules_20);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word InstDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_19,
  MR_Word * STATE_VARIABLE_UsedModules_20);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0(
  MR_Word tscc_proc_1_input_1_Visibility_5,
  MR_Word tscc_proc_1_input_2_Inst_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19);

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0(
  MR_Word tscc_proc_2_input_1_Visibility_5,
  MR_Word tscc_proc_2_input_2_InstName_6,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19);

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22);

static void MR_CALL 
check_hlds__unused_imports__type_used_modules_4_p_0(
  MR_Word _TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

static MR_Box MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_4_p_0(
  MR_Word ModuleName_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ThisAvail_7,
  MR_Word PrevAvail_8,
  MR_Word STATE_VARIABLE_Msgs_0_19,
  MR_Word * STATE_VARIABLE_Msgs_20);

static void MR_CALL 
check_hlds__unused_imports__compare_avails_3_p_0(
  MR_Word AvailA_4,
  MR_Word AvailB_5,
  MR_Word * Result_6);

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_8_p_0(
  MR_Word UnusedAnywhereImports_9,
  MR_Word UnusedInterfaceImports_10,
  MR_Word ModuleName_11,
  MR_Word AvailEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_UnusedAvailMap_0_29,
  MR_Word * STATE_VARIABLE_UnusedAvailMap_30);

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PrevAvails_0_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AvailAnywhereCord_0_2,
  MR_Word * STATE_VARIABLE_AvailAnywhereCord_3,
  MR_Word STATE_VARIABLE_AvailInterfaceCord_0_4,
  MR_Word * STATE_VARIABLE_AvailInterfaceCord_5);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[36][2];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[15][3];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[17][7];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_5[3][8];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_6[2][9];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_7[3][4];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][11];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_9[5][6];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_10[1][5];




static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[36][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location of the previous"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that makes this one redundant."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not used"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: the following modules have"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are not used"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[15][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0)),
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0)),
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[0])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[2])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[4])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[0])),
    ((MR_Box) (check_hlds__unused_imports__maybe_warn_about_avail_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_10[0])),
    ((MR_Box) (check_hlds__unused_imports__generate_unused_import_warning_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[1])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[2])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[4])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 164U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "char")) },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[17][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__pair__pti_pair_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_5[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_msg_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_msg_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_7[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[5])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[15])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[16])),
    ((MR_Box) (check_hlds__unused_imports__case_used_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__unused_imports__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&check_hlds__unused_imports__tree234__pti_tree234_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0)),
    ((MR_Box) (&check_hlds__unused_imports__tree234__pti_tree234_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_9[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_10[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unused_imports__one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__tree234__pti_tree234_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0),
    (MR_PseudoTypeInfo) (&check_hlds__unused_imports__one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0__plain_one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0),
    (MR_PseudoTypeInfo) (&check_hlds__unused_imports__one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0) }
};

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0 = {
  (MR_String) "aoi_anywhere",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1 = {
  (MR_String) "aoi_interface",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_ordinal_ordered_anywhere_or_interface_0[2] = {
  &check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0,
  &check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0[2] = {
  &check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0,
  &check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1
};

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_anywhere_or_interface_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001)),
  ((MR_Box) (check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001)),
  (MR_String) "check_hlds.unused_imports",
  (MR_String) "anywhere_or_interface",
  { check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0 },
  { check_hlds__unused_imports__check_hlds__unused_imports__enum_ordinal_ordered_anywhere_or_interface_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0,

};

static const MR_PseudoTypeInfo check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_0_0 = {
  (MR_String) "unused_avail",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_0_0[1] = { &check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_0_0 };

static const MR_DuPtagLayout check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_0[1] = { &check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_0_0 };

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unused_imports____Unify____unused_avail_0_0_10001)),
  ((MR_Box) (check_hlds__unused_imports____Compare____unused_avail_0_0_10001)),
  (MR_String) "check_hlds.unused_imports",
  (MR_String) "unused_avail",
  { check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_0 },
  { check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__unused_imports__tree234__ti_tree234_2check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0),
    (MR_TypeInfo) (&check_hlds__unused_imports__one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unused_imports____Unify____unused_avail_map_0_0_10001)),
  ((MR_Box) (check_hlds__unused_imports____Compare____unused_avail_map_0_0_10001)),
  (MR_String) "check_hlds.unused_imports",
  (MR_String) "unused_avail_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__unused_imports__tree234__ti_tree234_2check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0one_or_more__ti_one_or_more_1check_hlds__unused_imports__type_ctor_info_unused_avail_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_msg_kind_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_anywhere_or_interface_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)
};

static const MR_DuArgLocn check_hlds__unused_imports__check_hlds__unused_imports__field_locns_unused_avail_msg_kind_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_msg_kind_0_0 = {
  (MR_String) "unused_avail_msg_kind",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unused_imports__check_hlds__unused_imports__field_types_unused_avail_msg_kind_0_0,
  NULL,
  check_hlds__unused_imports__check_hlds__unused_imports__field_locns_unused_avail_msg_kind_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_msg_kind_0_0[1] = { &check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_msg_kind_0_0 };

static const MR_DuPtagLayout check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_msg_kind_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unused_imports__check_hlds__unused_imports__du_stag_ordered_unused_avail_msg_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_msg_kind_0[1] = { &check_hlds__unused_imports__check_hlds__unused_imports__du_functor_desc_unused_avail_msg_kind_0_0 };

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_msg_kind_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0_10001)),
  ((MR_Box) (check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0_10001)),
  (MR_String) "check_hlds.unused_imports",
  (MR_String) "unused_avail_msg_kind",
  { check_hlds__unused_imports__check_hlds__unused_imports__du_name_ordered_unused_avail_msg_kind_0 },
  { check_hlds__unused_imports__check_hlds__unused_imports__du_ptag_ordered_unused_avail_msg_kind_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_unused_avail_msg_kind_0,

};

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__639__1_4_p_0(
  MR_Word Visibility_5,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_27, 1))));

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Var_32, LambdaHeadVar__2_28, LambdaHeadVar__3_29);
}

static MR_Word MR_CALL 
check_hlds__unused_imports__IntroducedFrom__func__generate_unused_import_warning__447__1_1_f_0(
  MR_Word LambdaHeadVar__1_129)
{
  MR_Word LambdaHeadVar__2_130;
  MR_Word ModulePieces_30;
  MR_Word Var_131;
  MR_Word Ctxt_142 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_129, 0))));
  MR_Word MN_143 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_129, 1))));
  MR_String ModuleNameStr_148;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;

  ModuleNameStr_148 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MN_143);
  {
    Var_155 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_155, 0) = ((MR_Box) (ModuleNameStr_148));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_153 = parse_tree__error_spec__color_as_subject_1_f_0(Var_154);
  Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[35])), Var_153);
  ModulePieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])));
  {
    LambdaHeadVar__2_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_130, 0) = ((MR_Box) (Ctxt_142));
    MR_hl_field(0, LambdaHeadVar__2_130, 1) = ((MR_Box) (ModulePieces_30));
  }
  return LambdaHeadVar__2_130;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unused_imports_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unused_imports_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_0_0(
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

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_0_0(
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

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(
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
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_19;

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_19));
}

static void MR_CALL 
check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word BoundFunctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11)
{
  MR_Word ConsId_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_6, 0))));
  MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_6, 1))));
  MR_Word STATE_VARIABLE_UsedModules_1_12;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0(Visibility_5, ConsId_8, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_1_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[13]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_13, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_1_12)), &conv1_STATE_VARIABLE_UsedModules_11);
  *STATE_VARIABLE_UsedModules_11 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__var_table_entry_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12)
{
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, Entry_6, 1))));

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_9, STATE_VARIABLE_UsedModules_0_11, STATE_VARIABLE_UsedModules_12);
}

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_33;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_33);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_33));
}

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10)
{
  MR_Word MainConsId_6 = ((MR_Word) ((MR_hl_field(0, Case_4, 0))));
  MR_Word OtherConsIds_7 = ((MR_Word) ((MR_hl_field(0, Case_4, 1))));
  MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_4, 2))));
  MR_Word STATE_VARIABLE_UsedModules_1_12;
  MR_Word STATE_VARIABLE_UsedModules_2_14;
  MR_Box conv1_STATE_VARIABLE_UsedModules_2_14;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, MainConsId_6, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_12);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[2]), OtherConsIds_7, ((MR_Box) (STATE_VARIABLE_UsedModules_1_12)), &conv1_STATE_VARIABLE_UsedModules_2_14);
  STATE_VARIABLE_UsedModules_2_14 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_2_14));
  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Goal_8, STATE_VARIABLE_UsedModules_2_14, STATE_VARIABLE_UsedModules_10);
}

static void MR_CALL 
check_hlds__unused_imports__clause_used_modules_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7)
{
  MR_Word Var_8;

  Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Var_8, STATE_VARIABLE_UsedModules_0_6, STATE_VARIABLE_UsedModules_7);
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UsedModules_10;

  check_hlds__unused_imports__case_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_UsedModules_10));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_UsedModules_72;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_72);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_72));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_72;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_72);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_72));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_72;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_72);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_72));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_UsedModules_0_71,
  MR_Word * STATE_VARIABLE_UsedModules_72)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_53 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_53;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));

          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_0_71;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_120 = ((MR_Word) ((MR_hl_field(1, RHS_9, 0))));

                check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_120, STATE_VARIABLE_UsedModules_0_71, STATE_VARIABLE_UsedModules_72);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goal_129 = ((MR_Word) ((MR_hl_field(2, RHS_9, 4))));
                MR_Word next_value_of_Goal_4 = Goal_129;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 5))));
          MR_String Name_19;
          MR_Word STATE_VARIABLE_UsedModules_2_75;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, SymName_18, STATE_VARIABLE_UsedModules_0_71, &STATE_VARIABLE_UsedModules_2_75);
          Name_19 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
          succeeded = (strcmp(Name_19, (MR_String) "format") == 0);
          if (succeeded)
            parse_tree__prog_data_used_modules__record_format_modules_as_used_2_p_0(STATE_VARIABLE_UsedModules_2_75, STATE_VARIABLE_UsedModules_72);
          else
            *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_2_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Call_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Call_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_0_71;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ClassId_27 = ((MR_Word) ((MR_hl_field(1, Call_20, 2))));
                    MR_Word CallId_28 = ((MR_Word) ((MR_hl_field(1, Call_20, 3))));
                    MR_Word ClassName_29 = ((MR_Word) ((MR_hl_field(0, ClassId_27, 0))));
                    MR_Word MethodName_32 = ((MR_Word) ((MR_hl_field(0, CallId_28, 1))));
                    MR_Word STATE_VARIABLE_UsedModules_4_78;

                    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, ClassName_29, STATE_VARIABLE_UsedModules_0_71, &STATE_VARIABLE_UsedModules_4_78);
                    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, MethodName_32, STATE_VARIABLE_UsedModules_4_78, STATE_VARIABLE_UsedModules_72);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_0_71;
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_0_71;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_UsedModules_72 = STATE_VARIABLE_UsedModules_0_71;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Box conv1_STATE_VARIABLE_UsedModules_72;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[11]), Goals_49, ((MR_Box) (STATE_VARIABLE_UsedModules_0_71)), &conv1_STATE_VARIABLE_UsedModules_72);
              *STATE_VARIABLE_UsedModules_72 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_72));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_114 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Box conv3_STATE_VARIABLE_UsedModules_72;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[12]), Goals_114, ((MR_Box) (STATE_VARIABLE_UsedModules_0_71)), &conv3_STATE_VARIABLE_UsedModules_72);
              *STATE_VARIABLE_UsedModules_72 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_72));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Box conv7_STATE_VARIABLE_UsedModules_72;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[14]), Cases_52, ((MR_Box) (STATE_VARIABLE_UsedModules_0_71)), &conv7_STATE_VARIABLE_UsedModules_72);
              *STATE_VARIABLE_UsedModules_72 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_72));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_118 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word next_value_of_Goal_4 = SubGoal_118;

              // direct tailcall eliminated
              ;
              Goal_4 = next_value_of_Goal_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_UsedModules_9_86;
              MR_Word STATE_VARIABLE_UsedModules_10_87;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_71;

              check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Cond_56, STATE_VARIABLE_UsedModules_0_71, &STATE_VARIABLE_UsedModules_9_86);
              check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Then_57, STATE_VARIABLE_UsedModules_9_86, &STATE_VARIABLE_UsedModules_10_87);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_58;
              next_value_of_STATE_VARIABLE_UsedModules_0_71 = STATE_VARIABLE_UsedModules_10_87;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_UsedModules_0_71 = next_value_of_STATE_VARIABLE_UsedModules_0_71;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) ShortHand_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_59, 0))));
                    MR_Word GoalB_61 = ((MR_Word) ((MR_hl_field(0, ShortHand_59, 1))));
                    MR_Word STATE_VARIABLE_UsedModules_12_89;
                    MR_Word next_value_of_Goal_4;
                    MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_71;

                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(GoalA_60, STATE_VARIABLE_UsedModules_0_71, &STATE_VARIABLE_UsedModules_12_89);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = GoalB_61;
                    next_value_of_STATE_VARIABLE_UsedModules_0_71 = STATE_VARIABLE_UsedModules_12_89;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_UsedModules_0_71 = next_value_of_STATE_VARIABLE_UsedModules_0_71;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_59, 4))));
                    MR_Word OrElseGoals_67 = ((MR_Word) ((MR_hl_field(1, ShortHand_59, 5))));
                    MR_Word STATE_VARIABLE_UsedModules_14_91;
                    MR_Box conv5_STATE_VARIABLE_UsedModules_72;

                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(MainGoal_66, STATE_VARIABLE_UsedModules_0_71, &STATE_VARIABLE_UsedModules_14_91);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[13]), OrElseGoals_67, ((MR_Box) (STATE_VARIABLE_UsedModules_14_91)), &conv5_STATE_VARIABLE_UsedModules_72);
                    *STATE_VARIABLE_UsedModules_72 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_72));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_95 = ((MR_Word) ((MR_hl_field(2, ShortHand_59, 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_95;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
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
check_hlds__unused_imports__proc_info_used_modules_5_p_0(
  MR_Word Visibility_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_15,
  MR_Word * STATE_VARIABLE_UsedModules_16)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(Visibility_6, ProcInfo_8, STATE_VARIABLE_UsedModules_0_15, STATE_VARIABLE_UsedModules_16);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_12;

  check_hlds__unused_imports__var_table_entry_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_12));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word Visibility_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_15,
  MR_Word * STATE_VARIABLE_UsedModules_16)
{
  MR_Word VarTable_10;
  MR_Word HeadVars_11;
  MR_Word HeadVarTypes_12;
  MR_Word MaybeArgModes_13;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_UsedModules_1_18;
  MR_Word STATE_VARIABLE_UsedModules_2_20;
  MR_Box conv1_STATE_VARIABLE_UsedModules_1_18;
  MR_Box conv3_STATE_VARIABLE_UsedModules_2_20;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_10);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_11);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, HeadVars_11, &HeadVarTypes_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Visibility_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_17, HeadVarTypes_12, ((MR_Box) (STATE_VARIABLE_UsedModules_0_15)), &conv1_STATE_VARIABLE_UsedModules_1_18);
  STATE_VARIABLE_UsedModules_1_18 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_1_18));
  parse_tree__var_table__foldl_var_table_values_4_p_0((MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[1]), VarTable_10, ((MR_Box) (STATE_VARIABLE_UsedModules_1_18)), &conv3_STATE_VARIABLE_UsedModules_2_20);
  STATE_VARIABLE_UsedModules_2_20 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_2_20));
  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_8, &MaybeArgModes_13);
  if ((MaybeArgModes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UsedModules_16 = STATE_VARIABLE_UsedModules_2_20;
  else
  {
    MR_Word Modes_14 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_13, 0))));
    MR_Word Var_22;
    MR_Box conv5_STATE_VARIABLE_UsedModules_16;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_3));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (Visibility_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_22, Modes_14, ((MR_Box) (STATE_VARIABLE_UsedModules_2_20)), &conv5_STATE_VARIABLE_UsedModules_16);
    *STATE_VARIABLE_UsedModules_16 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_16));
  }
}

static void MR_CALL 
check_hlds__unused_imports__pred_info_used_modules_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0(PredInfo_8, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_UsedModules_7;

  check_hlds__unused_imports__clause_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_UsedModules_7);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_UsedModules_7));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_UsedModules_16;

  check_hlds__unused_imports__proc_info_used_modules_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_UsedModules_16);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_UsedModules_16));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32)
{
  MR_Word PredStatus_10;
  MR_Word DefinedInThisModule_11;

  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_8, &PredStatus_10);
  DefinedInThisModule_11 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_10);
  switch (DefinedInThisModule_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_32 = STATE_VARIABLE_UsedModules_0_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_13;
        MR_Word Constraints_14;
        MR_Word UnivConstraints_15;
        MR_Word ExistConstraints_16;
        MR_Word ProcTable_17;
        MR_Word ClausesInfo_18;
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_UsedModules_1_34;
        MR_Word STATE_VARIABLE_UsedModules_2_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_UsedModules_3_38;
        MR_Word Exported_104;
        MR_Word ClausesRep_105;
        MR_Word Clauses_107;
        MR_Box conv1_STATE_VARIABLE_UsedModules_1_34;
        MR_Box conv2_STATE_VARIABLE_UsedModules_2_36;
        MR_Box conv4_STATE_VARIABLE_UsedModules_3_38;
        MR_Word _ItemNumbers_106;
        MR_Box conv6_STATE_VARIABLE_UsedModules_32;

        Exported_104 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_10);
        switch (Exported_104) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Visibility_13 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Visibility_13 = (MR_Integer) 0;
            break;
        }
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_8, &Constraints_14);
        UnivConstraints_15 = ((MR_Word) ((MR_hl_field(0, Constraints_14, 0))));
        ExistConstraints_16 = ((MR_Word) ((MR_hl_field(0, Constraints_14, 1))));
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[10]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (Visibility_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, UnivConstraints_15, ((MR_Box) (STATE_VARIABLE_UsedModules_0_31)), &conv1_STATE_VARIABLE_UsedModules_1_34);
        STATE_VARIABLE_UsedModules_1_34 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_1_34));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, ExistConstraints_16, ((MR_Box) (STATE_VARIABLE_UsedModules_1_34)), &conv2_STATE_VARIABLE_UsedModules_2_36);
        STATE_VARIABLE_UsedModules_2_36 = ((MR_Word) (conv2_STATE_VARIABLE_UsedModules_2_36));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_17);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[2]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Visibility_13));
        }
        mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_37, ProcTable_17, ((MR_Box) (STATE_VARIABLE_UsedModules_2_36)), &conv4_STATE_VARIABLE_UsedModules_3_38);
        STATE_VARIABLE_UsedModules_3_38 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_3_38));
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClausesInfo_18);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_18, &ClausesRep_105, &_ItemNumbers_106);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_105, &Clauses_107);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[10]), Clauses_107, ((MR_Box) (STATE_VARIABLE_UsedModules_3_38)), &conv6_STATE_VARIABLE_UsedModules_32);
        *STATE_VARIABLE_UsedModules_32 = ((MR_Word) (conv6_STATE_VARIABLE_UsedModules_32));
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(
  MR_Word ConstStructArg_4,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10)
{
  if (((MR_tag((MR_Word) ConstStructArg_4)) == (MR_Integer) 0))
    *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
  else
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(1, ConstStructArg_4, 0))));
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(1, ConstStructArg_4, 1))));
    MR_Word STATE_VARIABLE_UsedModules_1_12;

    check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_7, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_12);
    check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, Type_8, STATE_VARIABLE_UsedModules_1_12, STATE_VARIABLE_UsedModules_10);
  }
}

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_10;

  check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_10));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  MR_Word ConstStruct_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, 0))));
  MR_Word ConstStructArgs_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, 1))));
  MR_Word Type_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, 2))));
  MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, 3))));
  MR_Word DefinedWhere_14 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct_7, 4))) & (MR_Integer) 1);

  switch (DefinedWhere_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_UsedModules_1_26;
        MR_Word STATE_VARIABLE_UsedModules_2_28;
        MR_Word STATE_VARIABLE_UsedModules_3_30;
        MR_Box conv1_STATE_VARIABLE_UsedModules_2_28;

        check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_1_26);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[9]), ConstStructArgs_11, ((MR_Box) (STATE_VARIABLE_UsedModules_1_26)), &conv1_STATE_VARIABLE_UsedModules_2_28);
        STATE_VARIABLE_UsedModules_2_28 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_2_28));
        check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, Type_12, STATE_VARIABLE_UsedModules_2_28, &STATE_VARIABLE_UsedModules_3_30);
        check_hlds__unused_imports__mer_inst_used_modules_4_p_0((MR_Integer) 1, Inst_13, STATE_VARIABLE_UsedModules_3_30, STATE_VARIABLE_UsedModules_24);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__cons_id_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_UsedModules_0_32,
  MR_Word * STATE_VARIABLE_UsedModules_33)
{
  switch (MR_tag((MR_Word) ConsId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_8;
        MR_Word Var_34 = (MR_Word) (MR_body((MR_Word) (ConsId_6), (MR_Integer) 1));

        SymName_8 = ((MR_Word) ((MR_hl_field(0, Var_34, 0))));
        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, SymName_8, STATE_VARIABLE_UsedModules_0_32, STATE_VARIABLE_UsedModules_33);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, ConsId_6, 1))));
            MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, Var_35, 0))));

            parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, SymName_37, STATE_VARIABLE_UsedModules_0_32, STATE_VARIABLE_UsedModules_33);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(3, ConsId_6, 1))));

            parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, ModuleName_36, STATE_VARIABLE_UsedModules_0_32, STATE_VARIABLE_UsedModules_33);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(3, ConsId_6, 1))));

            parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, ModuleName_12, STATE_VARIABLE_UsedModules_0_32, STATE_VARIABLE_UsedModules_33);
          }
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
        case (MR_Integer) 14:
          *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_0_32;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ThisModuleName_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0(ThisModuleName_8, ClassId_9, InstanceDefn_10, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word ThisModuleName_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  MR_bool succeeded;
  MR_Word ClassName_12 = ((MR_Word) ((MR_hl_field(0, ClassId_9, 0))));
  MR_Word InstanceModuleName_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, 0))));
  MR_Word InstanceStatus_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, 1))));
  MR_Word Types_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, 4))));
  MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, 5))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModuleName_8, InstanceModuleName_14);
  if (succeeded)
  {
    MR_Word Visibility_26;
    MR_Word STATE_VARIABLE_UsedModules_1_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_UsedModules_2_43;
    MR_Word Var_44;
    MR_Word Exported_72;
    MR_Box conv1_STATE_VARIABLE_UsedModules_2_43;
    MR_Box conv3_STATE_VARIABLE_UsedModules_28;

    Exported_72 = hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(InstanceStatus_15);
    switch (Exported_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Visibility_26 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Visibility_26 = (MR_Integer) 0;
        break;
    }
    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_26, ClassName_12, STATE_VARIABLE_UsedModules_0_27, &STATE_VARIABLE_UsedModules_1_41);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (Visibility_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_42, Types_18, ((MR_Box) (STATE_VARIABLE_UsedModules_1_41)), &conv1_STATE_VARIABLE_UsedModules_2_43);
    STATE_VARIABLE_UsedModules_2_43 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_2_43));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[10]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_2));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Visibility_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_44, Constraints_19, ((MR_Box) (STATE_VARIABLE_UsedModules_2_43)), &conv3_STATE_VARIABLE_UsedModules_28);
    *STATE_VARIABLE_UsedModules_28 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_28));
  }
  else
    *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
}

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  check_hlds__unused_imports__instance_used_modules_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_Word ClassId_9,
  MR_Word InstanceDefns_10,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  MR_Word ThisModuleName_12;
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_UsedModules_14;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ThisModuleName_12);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_6[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__class_instances_used_modules_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ProgressStream_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (ThisModuleName_12));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (ClassId_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_15, InstanceDefns_10, ((MR_Box) (STATE_VARIABLE_UsedModules_0_13)), &conv1_STATE_VARIABLE_UsedModules_14);
  *STATE_VARIABLE_UsedModules_14 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_14));
}

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ClassDefn_7,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  MR_Word Name_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TypeClassStatus_9 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 0))));
  MR_Word DefinedInThisModule_10;

  DefinedInThisModule_10 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(TypeClassStatus_9);
  switch (DefinedInThisModule_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_13 = STATE_VARIABLE_UsedModules_0_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_11;
        MR_Word STATE_VARIABLE_UsedModules_1_14;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Exported_42;
        MR_Box conv1_STATE_VARIABLE_UsedModules_13;

        Exported_42 = hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(TypeClassStatus_9);
        switch (Exported_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Visibility_11 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Visibility_11 = (MR_Integer) 0;
            break;
        }
        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_11, Name_5, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_1_14);
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[10]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__class_used_modules_4_p_0_1));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (Visibility_11));
        }
        Var_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, 4))));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_UsedModules_1_14)), &conv1_STATE_VARIABLE_UsedModules_13);
        *STATE_VARIABLE_UsedModules_13 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_13));
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__mode_used_modules_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeDefn_7,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  MR_Word Name_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word ModeStatus_9 = ((MR_Word) ((MR_hl_field(0, ModeDefn_7, 4))));
  MR_Word DefinedInThisModule_10;

  DefinedInThisModule_10 = hlds__status__mode_status_defined_in_this_module_1_f_0(ModeStatus_9);
  switch (DefinedInThisModule_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_14 = STATE_VARIABLE_UsedModules_0_13;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_11;
        MR_Word Mode_12;
        MR_Word STATE_VARIABLE_UsedModules_1_15;
        MR_Word Var_16;
        MR_Word Exported_25;

        Exported_25 = hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(ModeStatus_9);
        switch (Exported_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Visibility_11 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Visibility_11 = (MR_Integer) 0;
            break;
        }
        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_11, Name_5, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_1_15);
        Var_16 = ((MR_Word) ((MR_hl_field(0, ModeDefn_7, 2))));
        Mode_12 = (MR_Word) (Var_16);
        check_hlds__unused_imports__mer_mode_used_modules_4_p_0(Visibility_11, Mode_12, STATE_VARIABLE_UsedModules_1_15, STATE_VARIABLE_UsedModules_14);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_19;

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_19));
}

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Mode_6,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  if (((MR_tag((MR_Word) Mode_6)) == (MR_Integer) 0))
  {
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(0, Mode_6, 0))));
    MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(0, Mode_6, 1))));
    MR_Word STATE_VARIABLE_UsedModules_1_14;

    check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, Inst0_8, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_1_14);
    check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, Inst_9, STATE_VARIABLE_UsedModules_1_14, STATE_VARIABLE_UsedModules_13);
  }
  else
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Mode_6, 0))));
    MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, Mode_6, 1))));
    MR_Word STATE_VARIABLE_UsedModules_3_16;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_UsedModules_13;

    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_10, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_3_16);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[13]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (Visibility_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_17, Insts_11, ((MR_Box) (STATE_VARIABLE_UsedModules_3_16)), &conv1_STATE_VARIABLE_UsedModules_13);
    *STATE_VARIABLE_UsedModules_13 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__type_ctor_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));

  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, SymName_8, STATE_VARIABLE_UsedModules_0_10, STATE_VARIABLE_UsedModules_11);
}

static void MR_CALL 
check_hlds__unused_imports__user_inst_used_modules_4_p_0(
  MR_Word _InstCtor_5,
  MR_Word InstDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_19,
  MR_Word * STATE_VARIABLE_UsedModules_20)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(InstDefn_6, STATE_VARIABLE_UsedModules_0_19, STATE_VARIABLE_UsedModules_20);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__type_ctor_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word InstDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_19,
  MR_Word * STATE_VARIABLE_UsedModules_20)
{
  MR_Word InstBody_10 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, 2))));
  MR_Word InstForTypeCtor_11 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, 3))));
  MR_Word InstStatus_13 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, 5))));
  MR_Word DefinedInThisModule_14;

  DefinedInThisModule_14 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_13);
  switch (DefinedInThisModule_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_15;
        MR_Word Inst_16;
        MR_Word STATE_VARIABLE_UsedModules_1_21;
        MR_Word Exported_32;

        Exported_32 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(InstStatus_13);
        switch (Exported_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Visibility_15 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Visibility_15 = (MR_Integer) 0;
            break;
        }
        Inst_16 = (MR_Word) (InstBody_10);
        check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_15, Inst_16, STATE_VARIABLE_UsedModules_0_19, &STATE_VARIABLE_UsedModules_1_21);
        switch (MR_tag((MR_Word) InstForTypeCtor_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstForTypeCtor_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_1_21;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_1_21;
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_1_21;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_17 = ((MR_Word) ((MR_hl_field(1, InstForTypeCtor_11, 0))));
              MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(0, TypeCtor_17, 0))));

              parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_33, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_20);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtors_18 = ((MR_Word) ((MR_hl_field(2, InstForTypeCtor_11, 0))));
              MR_Word Var_23;
              MR_Box conv1_STATE_VARIABLE_UsedModules_20;

              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[14]));
                MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
                MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_23, 3) = ((MR_Box) (Visibility_15));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_23, TypeCtors_18, ((MR_Box) (STATE_VARIABLE_UsedModules_1_21)), &conv1_STATE_VARIABLE_UsedModules_20);
              *STATE_VARIABLE_UsedModules_20 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_20));
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstForTypeCtor_11, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtor_29 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, 1))));
                  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(0, TypeCtor_29, 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_35, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_20);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtor_31 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, 1))));
                  MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(0, TypeCtor_31, 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_39, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_20);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeCtor_30 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, 1))));
                  MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, TypeCtor_30, 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_37, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_20);
                }
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__bound_functor_info_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UsedModules_19;

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_19);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_UsedModules_19));
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0(
  MR_Word tscc_proc_1_input_1_Visibility_5,
  MR_Word tscc_proc_1_input_2_Inst_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19)
{
  MR_Word tscc_proc_2_input_1_Visibility_5;
  MR_Word tscc_proc_2_input_2_InstName_6;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
  MR_Word tscc_output_1_STATE_VARIABLE_UsedModules_19;

  // The code for TSCC PROC 1: pred check_hlds.unused_imports.mer_inst_used_modules/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.unused_imports.mer_inst_used_modules/4-0
  ;
  // proc 2 in TSCC: pred check_hlds.unused_imports.inst_name_used_modules/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Visibility_5 = tscc_proc_1_input_1_Visibility_5;
    MR_Word Inst_6 = tscc_proc_1_input_2_Inst_6;
    MR_Word STATE_VARIABLE_UsedModules_0_18 = tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
    MR_Word STATE_VARIABLE_UsedModules_19;

    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_27 = ((MR_Word) ((MR_hl_field(1, Inst_6, 1))));

          if ((HOInstInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
          else
          {
            MR_Word Modes_37;
            MR_Word Var_40 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_27), (MR_Integer) 1));
            MR_Word Var_41;
            MR_Box conv3_STATE_VARIABLE_UsedModules_19;

            Modes_37 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
              MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2));
              MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_41, 3) = ((MR_Box) (Visibility_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Modes_37, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv3_STATE_VARIABLE_UsedModules_19);
            STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, 2))));
          MR_Word Var_21;
          MR_Box conv5_STATE_VARIABLE_UsedModules_19;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3));
            MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_21, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_21, BoundFunctors_14, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv5_STATE_VARIABLE_UsedModules_19);
          STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_19));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(3, Inst_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = InstName_17;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Inst_6 = SubInst_16;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
              tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
              tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));

              if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
              else
              {
                MR_Word Modes_29;
                MR_Word Var_32 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));
                MR_Word Var_33;
                MR_Box conv1_STATE_VARIABLE_UsedModules_19;

                Modes_29 = ((MR_Word) ((MR_hl_field(0, Var_32, 1))));
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
                  MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1));
                  MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_33, 3) = ((MR_Box) (Visibility_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, Modes_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv1_STATE_VARIABLE_UsedModules_19);
                STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_19));
              }
            }
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_19;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Visibility_5 = tscc_proc_2_input_1_Visibility_5;
    MR_Word InstName_6 = tscc_proc_2_input_2_InstName_6;
    MR_Word STATE_VARIABLE_UsedModules_0_23 = tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
    MR_Word STATE_VARIABLE_UsedModules_24;

    switch (MR_tag((MR_Word) InstName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, InstName_6, 0))));
          MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, 1))));
          MR_Word STATE_VARIABLE_UsedModules_1_25;
          MR_Word Var_26;
          MR_Box conv7_STATE_VARIABLE_UsedModules_24;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_8, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_1_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[13]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__unused_imports__inst_name_used_modules_4_p_0_4));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_26, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_1_25)), &conv7_STATE_VARIABLE_UsedModules_24);
          STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_24));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_44 = ((MR_Word) ((MR_hl_field(1, InstName_6, 1))));
          MR_Word InstB_45 = ((MR_Word) ((MR_hl_field(1, InstName_6, 2))));
          MR_Word STATE_VARIABLE_UsedModules_3_46;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_44, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_3_46);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_45;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_3_46;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(2, InstName_6, 0))));
          MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(2, InstName_6, 1))));
          MR_Word STATE_VARIABLE_UsedModules_3_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_3_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_3_28;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_41 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_41;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_14 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_14;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_43 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_43;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_42 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_42;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_22 = ((MR_Word) ((MR_hl_field(3, InstName_6, 2))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_22, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_UsedModules_7_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_6, 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_35, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_7_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_34;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_7_32;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_24;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19 = tscc_output_1_STATE_VARIABLE_UsedModules_19;
  return;
}

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0(
  MR_Word tscc_proc_2_input_1_Visibility_5,
  MR_Word tscc_proc_2_input_2_InstName_6,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19)
{
  MR_Word tscc_proc_1_input_1_Visibility_5;
  MR_Word tscc_proc_1_input_2_Inst_6;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
  MR_Word tscc_output_1_STATE_VARIABLE_UsedModules_19;

  // The code for TSCC PROC 2: pred check_hlds.unused_imports.inst_name_used_modules/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.unused_imports.mer_inst_used_modules/4-0
  ;
  // proc 2 in TSCC: pred check_hlds.unused_imports.inst_name_used_modules/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Visibility_5 = tscc_proc_1_input_1_Visibility_5;
    MR_Word Inst_6 = tscc_proc_1_input_2_Inst_6;
    MR_Word STATE_VARIABLE_UsedModules_0_18 = tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
    MR_Word STATE_VARIABLE_UsedModules_19;

    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_27 = ((MR_Word) ((MR_hl_field(1, Inst_6, 1))));

          if ((HOInstInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
          else
          {
            MR_Word Modes_37;
            MR_Word Var_40 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_27), (MR_Integer) 1));
            MR_Word Var_41;
            MR_Box conv3_STATE_VARIABLE_UsedModules_19;

            Modes_37 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
              MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2));
              MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_41, 3) = ((MR_Box) (Visibility_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Modes_37, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv3_STATE_VARIABLE_UsedModules_19);
            STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, 2))));
          MR_Word Var_21;
          MR_Box conv5_STATE_VARIABLE_UsedModules_19;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3));
            MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_21, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_21, BoundFunctors_14, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv5_STATE_VARIABLE_UsedModules_19);
          STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_19));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(3, Inst_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = InstName_17;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Inst_6 = SubInst_16;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
              tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
              tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));

              if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
              else
              {
                MR_Word Modes_29;
                MR_Word Var_32 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));
                MR_Word Var_33;
                MR_Box conv1_STATE_VARIABLE_UsedModules_19;

                Modes_29 = ((MR_Word) ((MR_hl_field(0, Var_32, 1))));
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
                  MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1));
                  MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_33, 3) = ((MR_Box) (Visibility_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, Modes_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv1_STATE_VARIABLE_UsedModules_19);
                STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_19));
              }
            }
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_19;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Visibility_5 = tscc_proc_2_input_1_Visibility_5;
    MR_Word InstName_6 = tscc_proc_2_input_2_InstName_6;
    MR_Word STATE_VARIABLE_UsedModules_0_23 = tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
    MR_Word STATE_VARIABLE_UsedModules_24;

    switch (MR_tag((MR_Word) InstName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, InstName_6, 0))));
          MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, 1))));
          MR_Word STATE_VARIABLE_UsedModules_1_25;
          MR_Word Var_26;
          MR_Box conv7_STATE_VARIABLE_UsedModules_24;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_8, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_1_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[13]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__unused_imports__inst_name_used_modules_4_p_0_4));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_26, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_1_25)), &conv7_STATE_VARIABLE_UsedModules_24);
          STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_24));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_44 = ((MR_Word) ((MR_hl_field(1, InstName_6, 1))));
          MR_Word InstB_45 = ((MR_Word) ((MR_hl_field(1, InstName_6, 2))));
          MR_Word STATE_VARIABLE_UsedModules_3_46;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_44, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_3_46);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_45;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_3_46;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(2, InstName_6, 0))));
          MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(2, InstName_6, 1))));
          MR_Word STATE_VARIABLE_UsedModules_3_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_3_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_3_28;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_41 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_41;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_14 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_14;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_43 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_43;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_42 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_42;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_0_23;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_22 = ((MR_Word) ((MR_hl_field(3, InstName_6, 2))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_22, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_UsedModules_7_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_6, 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_6, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_35, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_7_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_34;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_7_32;
              tscc_proc_2_input_1_Visibility_5 = next_value_of_tscc_proc_2_input_1_Visibility_5;
              tscc_proc_2_input_2_InstName_6 = next_value_of_tscc_proc_2_input_2_InstName_6;
              tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_24;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_UsedModules_19 = tscc_output_1_STATE_VARIABLE_UsedModules_19;
  return;
}

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint_6, 0))));
  MR_Word ArgTypes_9 = ((MR_Word) ((MR_hl_field(0, Constraint_6, 1))));
  MR_Word STATE_VARIABLE_UsedModules_1_12;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_UsedModules_11;

  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, ClassName_8, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_1_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_13, ArgTypes_9, ((MR_Box) (STATE_VARIABLE_UsedModules_1_12)), &conv1_STATE_VARIABLE_UsedModules_11);
  *STATE_VARIABLE_UsedModules_11 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_29;

  check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__639__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_29));
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22)
{
  MR_Word MaybeExistConstraints_9 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 1))));
  MR_Word Args_11 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 3))));
  MR_Word STATE_VARIABLE_UsedModules_1_24;
  MR_Word Var_25;
  MR_Box conv3_STATE_VARIABLE_UsedModules_22;

  if ((MaybeExistConstraints_9 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_UsedModules_1_24 = STATE_VARIABLE_UsedModules_0_21;
  else
  {
    MR_Word ExistConstraints_14 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_9), (MR_Integer) 1));
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_14, 1))));
    MR_Word Var_23;
    MR_Box conv1_STATE_VARIABLE_UsedModules_1_24;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[10]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Visibility_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_23, Constraints_16, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv1_STATE_VARIABLE_UsedModules_1_24);
    STATE_VARIABLE_UsedModules_1_24 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_1_24));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[11]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, Args_11, ((MR_Box) (STATE_VARIABLE_UsedModules_1_24)), &conv3_STATE_VARIABLE_UsedModules_22);
  *STATE_VARIABLE_UsedModules_22 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
check_hlds__unused_imports__type_used_modules_4_p_0(
  MR_Word _TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(TypeDefn_6, STATE_VARIABLE_UsedModules_0_24, STATE_VARIABLE_UsedModules_25);
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_22;

  check_hlds__unused_imports__ctor_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25)
{
  MR_Word TypeStatus_8;
  MR_Word TypeBody_9;
  MR_Word DefinedInThisModule_10;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_6, &TypeStatus_8);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_9);
  DefinedInThisModule_10 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
  switch (DefinedInThisModule_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_25 = STATE_VARIABLE_UsedModules_0_24;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_11;
        MR_Word Exported_34;

        Exported_34 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(TypeStatus_8);
        switch (Exported_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Visibility_11 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Visibility_11 = (MR_Integer) 0;
            break;
        }
        switch (MR_tag((MR_Word) TypeBody_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_12 = (MR_Word) ((MR_Word) (TypeBody_9));
              MR_Word Ctors_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 0))));
              MR_Word MaybeSuperType_15 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 2))));
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word STATE_VARIABLE_UsedModules_1_28;
              MR_Box conv1_STATE_VARIABLE_UsedModules_1_28;

              {
                Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[9]));
                MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
                MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_26, 3) = ((MR_Box) (Visibility_11));
              }
              Var_27 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_13);
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_26, Var_27, ((MR_Box) (STATE_VARIABLE_UsedModules_0_24)), &conv1_STATE_VARIABLE_UsedModules_1_28);
              STATE_VARIABLE_UsedModules_1_28 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_1_28));
              if ((MaybeSuperType_15 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_UsedModules_25 = STATE_VARIABLE_UsedModules_1_28;
              else
              {
                MR_Word SuperType_19 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_15, 0))));

                check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_11, SuperType_19, STATE_VARIABLE_UsedModules_1_28, STATE_VARIABLE_UsedModules_25);
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_UsedModules_25 = STATE_VARIABLE_UsedModules_0_24;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_20 = ((MR_Word) ((MR_hl_field(2, TypeBody_9, 0))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_11, EqvType_20, STATE_VARIABLE_UsedModules_0_24, STATE_VARIABLE_UsedModules_25);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_9, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_UsedModules_25 = STATE_VARIABLE_UsedModules_0_24;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_UsedModules_25 = STATE_VARIABLE_UsedModules_0_24;
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Type_6, 0))));
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, Type_6, 1))));
          MR_Word STATE_VARIABLE_UsedModules_1_27;
          MR_Word Var_28;
          MR_Box conv3_STATE_VARIABLE_UsedModules_26;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_10, STATE_VARIABLE_UsedModules_0_25, &STATE_VARIABLE_UsedModules_1_27);
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_2));
            MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_28, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Args_11, ((MR_Box) (STATE_VARIABLE_UsedModules_1_27)), &conv3_STATE_VARIABLE_UsedModules_26);
          *STATE_VARIABLE_UsedModules_26 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_26));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(2, Type_6, 0))));

          switch (MR_tag((MR_Word) BuiltinType_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CharModuleName_15;

                    CharModuleName_15 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0((MR_Word) (&check_hlds__unused_imports_scalar_common_3[1]));
                    parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, CharModuleName_15, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_19 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));
              MR_Word Var_36;
              MR_Box conv9_STATE_VARIABLE_UsedModules_26;

              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
                MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_5));
                MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_36, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_36, ArgTypes_19, ((MR_Box) (STATE_VARIABLE_UsedModules_0_25)), &conv9_STATE_VARIABLE_UsedModules_26);
              *STATE_VARIABLE_UsedModules_26 = ((MR_Word) (conv9_STATE_VARIABLE_UsedModules_26));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(3, Type_6, 3))));
              MR_Word Var_33;
              MR_Word STATE_VARIABLE_UsedModules_4_34;
              MR_Word Args_41 = ((MR_Word) ((MR_hl_field(3, Type_6, 2))));
              MR_Box conv5_STATE_VARIABLE_UsedModules_4_34;

              {
                Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
                MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_3));
                MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_33, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, Args_41, ((MR_Box) (STATE_VARIABLE_UsedModules_0_25)), &conv5_STATE_VARIABLE_UsedModules_4_34);
              STATE_VARIABLE_UsedModules_4_34 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_4_34));
              if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_4_34;
              else
              {
                MR_Word Modes_64;
                MR_Word Var_67 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));
                MR_Word Var_68;
                MR_Box conv7_STATE_VARIABLE_UsedModules_26;

                Modes_64 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
                  MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_4));
                  MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_68, 3) = ((MR_Box) (Visibility_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_68, Modes_64, ((MR_Box) (STATE_VARIABLE_UsedModules_4_34)), &conv7_STATE_VARIABLE_UsedModules_26);
                *STATE_VARIABLE_UsedModules_26 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_26));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_38;
              MR_Word ArgTypes_42 = ((MR_Word) ((MR_hl_field(3, Type_6, 2))));
              MR_Box conv1_STATE_VARIABLE_UsedModules_26;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_1));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_38, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_38, ArgTypes_42, ((MR_Box) (STATE_VARIABLE_UsedModules_0_25)), &conv1_STATE_VARIABLE_UsedModules_26);
              *STATE_VARIABLE_UsedModules_26 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_26));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgType_23 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));
              MR_Word next_value_of_Type_6 = ArgType_23;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_130;

  conv0_LambdaHeadVar__2_130 = check_hlds__unused_imports__IntroducedFrom__func__generate_unused_import_warning__447__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_130));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_4_p_0(
  MR_Word ModuleName_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word MsgKind_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word OoMUnusedAvails0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word AnywhereOrInterface_9 = ((((MR_Unsigned) ((MR_hl_field(0, MsgKind_6, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUse_10 = ((MR_Unsigned) ((MR_hl_field(0, MsgKind_6, 0))) & (MR_Integer) 1);
  MR_String DeclInTheLocn_11;
  MR_String NotUsedInTheLocn_12;
  MR_String ImportOrUseDeclName_13;
  MR_String ImportOrUseAAn_14;
  MR_Word OoMUnusedAvails_15;
  MR_Word HeadUnusedAvail_16;
  MR_Word TailUnusedAvails_17;
  MR_Word HeadContext_18;
  MR_Word HeadModuleName_19;
  MR_Word Spec_21;

  switch (AnywhereOrInterface_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DeclInTheLocn_11 = (MR_String) "";
        NotUsedInTheLocn_12 = (MR_String) "anywhere in the module";
      }
      break;
    case (MR_Integer) 1:
      {
        DeclInTheLocn_11 = (MR_String) "in the interface";
        NotUsedInTheLocn_12 = (MR_String) "in the interface";
      }
      break;
  }
  ImportOrUseDeclName_13 = parse_tree__convert_import_use__import_or_use_decl_name_1_f_0(ImportOrUse_10);
  switch (ImportOrUse_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ImportOrUseAAn_14 = (MR_String) "an";
      break;
    case (MR_Integer) 1:
      ImportOrUseAAn_14 = (MR_String) "a";
      break;
  }
  mercury__one_or_more__sort_2_p_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0), OoMUnusedAvails0_7, &OoMUnusedAvails_15);
  HeadUnusedAvail_16 = ((MR_Word) ((MR_hl_field(0, OoMUnusedAvails_15, 0))));
  TailUnusedAvails_17 = ((MR_Word) ((MR_hl_field(0, OoMUnusedAvails_15, 1))));
  HeadContext_18 = ((MR_Word) ((MR_hl_field(0, HeadUnusedAvail_16, 0))));
  HeadModuleName_19 = ((MR_Word) ((MR_hl_field(0, HeadUnusedAvail_16, 1))));
  if ((TailUnusedAvails_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_20;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String ModuleNameStr_149;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;

    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (ModuleName_5));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[22])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[17])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    ModuleNameStr_149 = mdbcomp__sym_name__sym_name_to_string_1_f_0(HeadModuleName_19);
    {
      Var_156 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_156, 0) = ((MR_Box) (ModuleNameStr_149));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
      MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_154 = parse_tree__error_spec__color_as_subject_1_f_0(Var_155);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[35])), Var_154);
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (ImportOrUseAAn_14));
    }
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (ImportOrUseDeclName_13));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (DeclInTheLocn_11));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[27])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[6])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[23])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_76, 1) = ((MR_Box) (NotUsedInTheLocn_12));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[30])));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[28])));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
    }
    Var_71 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_72);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])));
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_70);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
    Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_48);
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.unused_imports.generate_unused_import_warning\'/4"));
      MR_hl_field(0, Spec_21, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_3[0])));
      MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 112U));
      MR_hl_field(0, Spec_21, 3) = ((MR_Box) (HeadContext_18));
      MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
    }
  }
  else
  {
    MR_Word MainPieces_24;
    MR_Word MainMsg_25;
    MR_Word ModuleMsgs_31;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_135;
    MR_Word Var_140;

    {
      Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_92, 1) = ((MR_Box) (ModuleName_5));
    }
    {
      Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_102, 1) = ((MR_Box) (ImportOrUseDeclName_13));
    }
    {
      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_107, 1) = ((MR_Box) (DeclInTheLocn_11));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[27])));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[32])));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[31])));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[21])));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[17])));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_121, 1) = ((MR_Box) (NotUsedInTheLocn_12));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[30])));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[33])));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
    }
    Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_117);
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])));
    MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_115);
    {
      MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_25, 0) = ((MR_Box) (HeadContext_18));
      MR_hl_field(0, MainMsg_25, 1) = ((MR_Box) (MainPieces_24));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) (HeadUnusedAvail_16));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (TailUnusedAvails_17));
    }
    ModuleMsgs_31 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_msg_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[8]), Var_135);
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (ModuleMsgs_31));
    }
    {
      Spec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.unused_imports.generate_unused_import_warning\'/4"));
      MR_hl_field(2, Spec_21, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_3[0])));
      MR_hl_field(2, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 112U));
      MR_hl_field(2, Spec_21, 3) = ((MR_Box) (Var_140));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_33 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
  }
}

static void MR_CALL 
check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ThisAvail_7,
  MR_Word PrevAvail_8,
  MR_Word STATE_VARIABLE_Msgs_0_19,
  MR_Word * STATE_VARIABLE_Msgs_20)
{
  MR_bool succeeded;
  MR_Word ThisSection_10 = ((((MR_Unsigned) ((MR_hl_field(0, ThisAvail_7, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ThisImportOrUse_11 = ((MR_Unsigned) ((MR_hl_field(0, ThisAvail_7, 0))) & (MR_Integer) 1);
  MR_Word PrevSection_13 = ((((MR_Unsigned) ((MR_hl_field(0, PrevAvail_8, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word PrevImportOrUse_14 = ((MR_Unsigned) ((MR_hl_field(0, PrevAvail_8, 0))) & (MR_Integer) 1);
  MR_Word PrevContext_15 = ((MR_Word) ((MR_hl_field(0, PrevAvail_8, 1))));

  succeeded = (PrevSection_13 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (ThisSection_10 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (PrevImportOrUse_14 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ThisImportOrUse_11 == (MR_Integer) 0);
  }
  if (succeeded)
    *STATE_VARIABLE_Msgs_20 = STATE_VARIABLE_Msgs_0_19;
  else
  {
    MR_String DeclName_16;
    MR_Word Pieces_17;
    MR_Word Msg_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;

    DeclName_16 = parse_tree__convert_import_use__import_or_use_decl_name_1_f_0(PrevImportOrUse_14);
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (DeclName_16));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[16])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[14])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[6])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[13])));
      MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_23));
    }
    {
      Msg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_18, 0) = ((MR_Box) (PrevContext_15));
      MR_hl_field(0, Msg_18, 1) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Msgs_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Msgs_0_19));
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__compare_avails_3_p_0(
  MR_Word AvailA_4,
  MR_Word AvailB_5,
  MR_Word * Result_6)
{
  MR_Word SectionA_7 = ((((MR_Unsigned) ((MR_hl_field(0, AvailA_4, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUseA_8 = ((MR_Unsigned) ((MR_hl_field(0, AvailA_4, 0))) & (MR_Integer) 1);
  MR_Word ContextA_9 = ((MR_Word) ((MR_hl_field(0, AvailA_4, 1))));
  MR_Word SectionB_10 = ((((MR_Unsigned) ((MR_hl_field(0, AvailB_5, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUseB_11 = ((MR_Unsigned) ((MR_hl_field(0, AvailB_5, 0))) & (MR_Integer) 1);
  MR_Word ContextB_12 = ((MR_Word) ((MR_hl_field(0, AvailB_5, 1))));

  switch (SectionA_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (SectionB_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (ImportOrUseA_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (ImportOrUseB_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__term_context____Compare____term_context_0_0(Result_6, ContextA_9, ContextB_12);
                  break;
                case (MR_Integer) 1:
                  *Result_6 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (ImportOrUseB_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Result_6 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  mercury__term_context____Compare____term_context_0_0(Result_6, ContextA_9, ContextB_12);
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 0:
          *Result_6 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (SectionB_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *Result_6 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          switch (ImportOrUseA_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (ImportOrUseB_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__term_context____Compare____term_context_0_0(Result_6, ContextA_9, ContextB_12);
                  break;
                case (MR_Integer) 1:
                  *Result_6 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (ImportOrUseB_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Result_6 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  mercury__term_context____Compare____term_context_0_0(Result_6, ContextA_9, ContextB_12);
                  break;
              }
              break;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  check_hlds__unused_imports__compare_avails_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_8_p_0(
  MR_Word UnusedAnywhereImports_9,
  MR_Word UnusedInterfaceImports_10,
  MR_Word ModuleName_11,
  MR_Word AvailEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_UnusedAvailMap_0_29,
  MR_Word * STATE_VARIABLE_UnusedAvailMap_30)
{
  MR_bool succeeded;
  MR_Word Avails_17 = ((MR_Word) ((MR_hl_field(0, AvailEntry_12, 1))));
  MR_Word SortedAvails_18;

  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[7]), Avails_17, &SortedAvails_18);
  if ((SortedAvails_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    *STATE_VARIABLE_UnusedAvailMap_30 = STATE_VARIABLE_UnusedAvailMap_0_29;
  }
  else
  {
    MR_Word HeadAvail_19 = ((MR_Word) ((MR_hl_field(1, SortedAvails_18, 0))));
    MR_Word Section_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadAvail_19, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ImportOrUse_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadAvail_19, 0))) & (MR_Integer) 1);
    MR_Word HeadCtxt_23 = ((MR_Word) ((MR_hl_field(0, HeadAvail_19, 1))));
    MR_Word AnywhereWarning_25;
    MR_Word STATE_VARIABLE_UnusedAvailMap_1_36;
    MR_Word TypeCtorInfo_46_46;

    check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(ModuleName_11, SortedAvails_18, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnusedAnywhereImports_9, ((MR_Box) (ModuleName_11)));
    if (succeeded)
    {
      MR_Word MsgKindA_24;
      MR_Word Var_35;

      {
        MsgKindA_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MsgKindA_24, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (ImportOrUse_22)));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (HeadCtxt_23));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (ModuleName_11));
      }
      mercury__one_or_more_map__add_4_p_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0), (MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0), ((MR_Box) (MsgKindA_24)), ((MR_Box) (Var_35)), STATE_VARIABLE_UnusedAvailMap_0_29, &STATE_VARIABLE_UnusedAvailMap_1_36);
      AnywhereWarning_25 = (MR_Integer) 1;
    }
    else
    {
      AnywhereWarning_25 = (MR_Integer) 0;
      STATE_VARIABLE_UnusedAvailMap_1_36 = STATE_VARIABLE_UnusedAvailMap_0_29;
    }
    succeeded = (Section_21 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_46_46 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_46_46, UnusedInterfaceImports_10, ((MR_Box) (ModuleName_11)));
      if (succeeded)
        succeeded = (AnywhereWarning_25 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word MsgKindI_26;
      MR_Word Var_38;

      {
        MsgKindI_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MsgKindI_26, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (ImportOrUse_22)));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (HeadCtxt_23));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (ModuleName_11));
      }
      mercury__one_or_more_map__add_4_p_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0), (MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0), ((MR_Box) (MsgKindI_26)), ((MR_Box) (Var_38)), STATE_VARIABLE_UnusedAvailMap_1_36, STATE_VARIABLE_UnusedAvailMap_30);
    }
    else
      *STATE_VARIABLE_UnusedAvailMap_30 = STATE_VARIABLE_UnusedAvailMap_1_36;
  }
}

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Msgs_20;

  check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Msgs_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Msgs_20));
}

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PrevAvails_0_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PrevMsgs_16;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_PrevAvails_1_31;
      MR_Word STATE_VARIABLE_Specs_1_70;
      MR_Box conv1_PrevMsgs_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PrevAvails_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[1]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (Avail_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[2]), Var_29, STATE_VARIABLE_PrevAvails_0_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PrevMsgs_16);
      PrevMsgs_16 = ((MR_Word) (conv1_PrevMsgs_16));
      if ((PrevMsgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Avail_12));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PrevAvails_1_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), STATE_VARIABLE_PrevAvails_0_3, Var_32);
        STATE_VARIABLE_Specs_1_70 = STATE_VARIABLE_Specs_0_4;
      }
      else
      {
        MR_Word ImportOrUse_20 = ((MR_Unsigned) ((MR_hl_field(0, Avail_12, 0))) & (MR_Integer) 1);
        MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Avail_12, 1))));
        MR_String DeclName_22;
        MR_Word MainPieces_23;
        MR_Word MainMsg_24;
        MR_Word Spec_25;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_69;

        DeclName_22 = parse_tree__convert_import_use__import_or_use_decl_name_1_f_0(ImportOrUse_20);
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 35U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (DeclName_22));
        }
        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (HeadVar__1_1));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[7])));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[6])));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
        }
        Var_39 = parse_tree__error_spec__color_as_subject_1_f_0(Var_40);
        Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[11])));
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])));
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[9])), Var_56);
        Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_51);
        MainPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[5])), Var_38);
        {
          MainMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainMsg_24, 0) = ((MR_Box) (Context_21));
          MR_hl_field(0, MainMsg_24, 1) = ((MR_Box) (MainPieces_23));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (MainMsg_24));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (PrevMsgs_16));
        }
        {
          Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.unused_imports.maybe_generate_redundant_avail_warnings\'/5"));
          MR_hl_field(2, Spec_25, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__unused_imports_scalar_common_3[0])));
          MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 112U));
          MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_69));
        }
        {
          STATE_VARIABLE_Specs_1_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_70, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_70, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
        STATE_VARIABLE_PrevAvails_1_31 = STATE_VARIABLE_PrevAvails_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Avails_13;
      next_value_of_STATE_VARIABLE_PrevAvails_0_3 = STATE_VARIABLE_PrevAvails_1_31;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_70;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PrevAvails_0_3 = next_value_of_STATE_VARIABLE_PrevAvails_0_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_Specs_33;

  check_hlds__unused_imports__generate_unused_import_warning_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Specs_33);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_Specs_33));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_Specs_28;
  MR_Word conv16_STATE_VARIABLE_UnusedAvailMap_30;

  check_hlds__unused_imports__maybe_warn_about_avail_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv17_STATE_VARIABLE_Specs_28, ((MR_Word) (wrapper_arg_5)), &conv16_STATE_VARIABLE_UnusedAvailMap_30);
  *wrapper_arg_4 = ((MR_Box) (conv17_STATE_VARIABLE_Specs_28));
  *wrapper_arg_6 = ((MR_Box) (conv16_STATE_VARIABLE_UnusedAvailMap_30));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__4_4;

  parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_UsedModules_14;

  check_hlds__unused_imports__class_instances_used_modules_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_UsedModules_14);
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_UsedModules_14));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__class_used_modules_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_UsedModules_32;

  check_hlds__unused_imports__pred_info_used_modules_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_UsedModules_32);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_32));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UsedModules_24;

  check_hlds__unused_imports__const_struct_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_24);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_UsedModules_24));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_UsedModules_14;

  check_hlds__unused_imports__mode_used_modules_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_UsedModules_14);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_14));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_20;

  check_hlds__unused_imports__user_inst_used_modules_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_UsedModules_20);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_20));
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_25;

  check_hlds__unused_imports__type_used_modules_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_UsedModules_25);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_25));
}

void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word ModuleInfo_5,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word ModuleName_7;
  MR_Word UsedModules_8;
  MR_Word AvailModuleMap_9;
  MR_Word ModuleAvails_10;
  MR_Word AvailAnywhereCord_11;
  MR_Word AvailInterfaceCord_12;
  MR_Word AvailAnywhereModules_13;
  MR_Word AvailInterfaceModules_14;
  MR_Word UsedInInterface_15;
  MR_Word UsedInImplementation_16;
  MR_Word UsedAnywhere_17;
  MR_Word UnusedAnywhereImports_18;
  MR_Word UnusedInterfaceImports0_19;
  MR_Word UnusedInterfaceImports1_20;
  MR_Word UnusedInterfaceImports_21;
  MR_Word UnusedAvailMap_23;
  MR_Word UnusedAvailAL_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_Specs_1_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word UsedEqvModules_88;
  MR_Word UsedModulesInit_89;
  MR_Word TypeTable_90;
  MR_Word UsedModulesTypeCtor_91;
  MR_Word InstTable_92;
  MR_Word UserInstTable_93;
  MR_Word UsedModulesUserInst_94;
  MR_Word ModeTable_95;
  MR_Word ModeDefns_96;
  MR_Word UsedModulesMode_97;
  MR_Word ConstStructDb_98;
  MR_Word ConstStructs_99;
  MR_Word UsedModulesConstStruct_100;
  MR_Word PredIdTable_101;
  MR_Word UsedModulesPredInfo_102;
  MR_Word ClassTable_103;
  MR_Word UsedModulesClass_104;
  MR_Word InstanceTable_105;
  MR_Word UsedModulesInstance_106;
  MR_Word ImplicitImports_107;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_114;
  MR_Box conv1_UsedModulesTypeCtor_91;
  MR_Box conv3_UsedModulesUserInst_94;
  MR_Box conv5_UsedModulesMode_97;
  MR_Box conv7_UsedModulesConstStruct_100;
  MR_Box conv9_UsedModulesPredInfo_102;
  MR_Box conv11_UsedModulesClass_104;
  MR_Box conv13_UsedModulesInstance_106;
  MR_Box conv15_UsedModules_8;
  MR_Box conv19_STATE_VARIABLE_Specs_1_60;
  MR_Box conv18_UnusedAvailMap_23;
  MR_Box conv21_STATE_VARIABLE_Specs_25;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_7);
  hlds__hlds_module__module_info_get_used_eqv_modules_2_p_0(ModuleInfo_5, &UsedEqvModules_88);
  UsedModulesInit_89 = ((MR_Word) ((MR_hl_field(0, UsedEqvModules_88, 2))));
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_90);
  hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[3]), TypeTable_90, ((MR_Box) (UsedModulesInit_89)), &conv1_UsedModulesTypeCtor_91);
  UsedModulesTypeCtor_91 = ((MR_Word) (conv1_UsedModulesTypeCtor_91));
  hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_5, &InstTable_92);
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_92, &UserInstTable_93);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[4]), UserInstTable_93, ((MR_Box) (UsedModulesTypeCtor_91)), &conv3_UsedModulesUserInst_94);
  UsedModulesUserInst_94 = ((MR_Word) (conv3_UsedModulesUserInst_94));
  hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, &ModeTable_95);
  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_95, &ModeDefns_96);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[5]), ModeDefns_96, ((MR_Box) (UsedModulesUserInst_94)), &conv5_UsedModulesMode_97);
  UsedModulesMode_97 = ((MR_Word) (conv5_UsedModulesMode_97));
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_98);
  hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_98, &ConstStructs_99);
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[3]));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_4));
    MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_111, 3) = ((MR_Box) (ProgressStream_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__unused_imports_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_111, ConstStructs_99, ((MR_Box) (UsedModulesMode_97)), &conv7_UsedModulesConstStruct_100);
  UsedModulesConstStruct_100 = ((MR_Word) (conv7_UsedModulesConstStruct_100));
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_5, &PredIdTable_101);
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[0]));
    MR_hl_field(0, Var_112, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_5));
    MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_112, 3) = ((MR_Box) (ProgressStream_4));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_112, PredIdTable_101, ((MR_Box) (UsedModulesConstStruct_100)), &conv9_UsedModulesPredInfo_102);
  UsedModulesPredInfo_102 = ((MR_Word) (conv9_UsedModulesPredInfo_102));
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_103);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[6]), ClassTable_103, ((MR_Box) (UsedModulesPredInfo_102)), &conv11_UsedModulesClass_104);
  UsedModulesClass_104 = ((MR_Word) (conv11_UsedModulesClass_104));
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_5, &InstanceTable_105);
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_6[0]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_7));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_114, 3) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Var_114, 4) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_114, InstanceTable_105, ((MR_Box) (UsedModulesClass_104)), &conv13_UsedModulesInstance_106);
  UsedModulesInstance_106 = ((MR_Word) (conv13_UsedModulesInstance_106));
  ImplicitImports_107 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[0]), ImplicitImports_107, ((MR_Box) (UsedModulesInstance_106)), &conv15_UsedModules_8);
  UsedModules_8 = ((MR_Word) (conv15_UsedModules_8));
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_5, &AvailModuleMap_9);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_9, &ModuleAvails_10);
  Var_26 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_27 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(ModuleAvails_10, Var_26, &AvailAnywhereCord_11, Var_27, &AvailInterfaceCord_12);
  Var_28 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailAnywhereCord_11);
  mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_28, &AvailAnywhereModules_13);
  Var_29 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailInterfaceCord_12);
  mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_29, &AvailInterfaceModules_14);
  UsedInInterface_15 = ((MR_Word) ((MR_hl_field(0, UsedModules_8, 0))));
  UsedInImplementation_16 = ((MR_Word) ((MR_hl_field(0, UsedModules_8, 1))));
  UsedAnywhere_17 = mercury__set_tree234__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedInInterface_15, UsedInImplementation_16);
  mercury__set_tree234__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailAnywhereModules_13, UsedAnywhere_17, &UnusedAnywhereImports_18);
  mercury__set_tree234__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailInterfaceModules_14, UsedInInterface_15, &UnusedInterfaceImports0_19);
  hlds__hlds_module__module_info_get_unused_interface_imports_2_p_0(ModuleInfo_5, &UnusedInterfaceImports1_20);
  mercury__set_tree234__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnusedInterfaceImports0_19, UnusedInterfaceImports1_20, &UnusedInterfaceImports_21);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_8[0]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (UnusedAnywhereImports_18));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (UnusedInterfaceImports_21));
  }
  Var_61 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[0]));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[1]), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[0]), Var_58, AvailModuleMap_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv19_STATE_VARIABLE_Specs_1_60, ((MR_Box) (Var_61)), &conv18_UnusedAvailMap_23);
  STATE_VARIABLE_Specs_1_60 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_1_60));
  UnusedAvailMap_23 = ((MR_Word) (conv18_UnusedAvailMap_23));
  mercury__one_or_more_map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0), (MR_Word) (&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0), UnusedAvailMap_23, &UnusedAvailAL_24);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_10));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (ModuleName_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__unused_imports_scalar_common_2[1]), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[1]), Var_62, UnusedAvailAL_24, ((MR_Box) (STATE_VARIABLE_Specs_1_60)), &conv21_STATE_VARIABLE_Specs_25);
  *STATE_VARIABLE_Specs_25 = ((MR_Word) (conv21_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AvailAnywhereCord_0_2,
  MR_Word * STATE_VARIABLE_AvailAnywhereCord_3,
  MR_Word STATE_VARIABLE_AvailInterfaceCord_0_4,
  MR_Word * STATE_VARIABLE_AvailInterfaceCord_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AvailInterfaceCord_5 = STATE_VARIABLE_AvailInterfaceCord_0_4;
      *STATE_VARIABLE_AvailAnywhereCord_3 = STATE_VARIABLE_AvailAnywhereCord_0_2;
    }
    else
    {
      MR_Word ModuleEntry_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ModuleEntries_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, ModuleEntry_12, 0))));
      MR_Word Entry_17 = ((MR_Word) ((MR_hl_field(0, ModuleEntry_12, 1))));
      MR_Word Section_18 = ((((MR_Unsigned) ((MR_hl_field(0, Entry_17, 0))) >> 1)) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_AvailAnywhereCord_1_25;
      MR_Word STATE_VARIABLE_AvailInterfaceCord_1_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4;

      mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_16)), STATE_VARIABLE_AvailAnywhereCord_0_2, &STATE_VARIABLE_AvailAnywhereCord_1_25);
      switch (Section_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_AvailInterfaceCord_1_26 = STATE_VARIABLE_AvailInterfaceCord_0_4;
          break;
        case (MR_Integer) 0:
          mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_16)), STATE_VARIABLE_AvailInterfaceCord_0_4, &STATE_VARIABLE_AvailInterfaceCord_1_26);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ModuleEntries_13;
      next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2 = STATE_VARIABLE_AvailAnywhereCord_1_25;
      next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4 = STATE_VARIABLE_AvailInterfaceCord_1_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AvailAnywhereCord_0_2 = next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2;
      STATE_VARIABLE_AvailInterfaceCord_0_4 = next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unused_imports____Unify____unused_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unused_imports____Compare____unused_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unused_imports____Unify____unused_avail_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unused_imports____Compare____unused_avail_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unused_imports____Unify____unused_avail_msg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unused_imports____Compare____unused_avail_msg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__unused_imports__init(void)
{
}

void mercury__check_hlds__unused_imports__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_anywhere_or_interface_0);
  MR_register_type_ctor_info(&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_0);
  MR_register_type_ctor_info(&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_map_0);
  MR_register_type_ctor_info(&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_unused_avail_msg_kind_0);
}

void mercury__check_hlds__unused_imports__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unused_imports__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unused_imports.
