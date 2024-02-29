/*
** Automatically generated from `unused_imports.m'
** by the Mercury compiler,
** version rotd-2024-02-29
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
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_ordinal_ordered_anywhere_or_interface_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0[2];

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0[2];

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__511__1_4_p_0(
  MR_Word Visibility_5,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

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
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(
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
  MR_Word STATE_VARIABLE_UsedModules_0_70,
  MR_Word * STATE_VARIABLE_UsedModules_71);

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
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34);

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
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

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
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

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
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(
  MR_Word TopModuleName_8,
  MR_Word UnusedAnywhereImports_9,
  MR_Word UnusedInterfaceImports_10,
  MR_Word ModuleName_11,
  MR_Word AvailEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_5_f_0(
  MR_Word ModuleName_7,
  MR_Word UnusedModuleName_8,
  MR_Word ImportOrUse_9,
  MR_Word Context_10,
  MR_Word AnywhereOrInterface_11);

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
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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


static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[28][2];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[12][3];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[16][7];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_5[3][8];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_6[2][9];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_7[3][4];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][10];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_9[5][6];




static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[28][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is redundant."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the location of the previous"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that makes this one redundant."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[6])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but is not used"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[6])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "anywhere in the module"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[20])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[26])))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[0])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[2])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[4])),
    ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[0])),
    ((MR_Box) (check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[1])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_95_115_116_114_117_99_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[2])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[3])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_9[4])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "char")) },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[16][7] = {
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
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row  15 */
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
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
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
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[14])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[15])),
    ((MR_Box) (check_hlds__unused_imports__case_used_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
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

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__511__1_4_p_0(
  MR_Word Visibility_5,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_27, (MR_Integer) 1))));

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Var_32, LambdaHeadVar__2_28, LambdaHeadVar__3_29);
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
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_19;

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_19));
}

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word BoundFunctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11)
{
  MR_Word ConsId_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_6, (MR_Integer) 0))));
  MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_6, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_UsedModules_12_12;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0(Visibility_5, ConsId_8, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_12_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_13, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_12_12)), &conv1_STATE_VARIABLE_UsedModules_11);
  *STATE_VARIABLE_UsedModules_11 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__var_table_entry_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12)
{
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, Entry_6, (MR_Integer) 1))));

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
  MR_Word conv0_STATE_VARIABLE_UsedModules_34;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_34);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_34));
}

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10)
{
  MR_Word MainConsId_6 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 0))));
  MR_Word OtherConsIds_7 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 1))));
  MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_UsedModules_12_12;
  MR_Word STATE_VARIABLE_UsedModules_14_14;
  MR_Box conv1_STATE_VARIABLE_UsedModules_14_14;

  check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, MainConsId_6, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_12_12);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[2]), OtherConsIds_7, ((MR_Box) (STATE_VARIABLE_UsedModules_12_12)), &conv1_STATE_VARIABLE_UsedModules_14_14);
  STATE_VARIABLE_UsedModules_14_14 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_14_14));
  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Goal_8, STATE_VARIABLE_UsedModules_14_14, STATE_VARIABLE_UsedModules_10);
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
  MR_Word conv4_STATE_VARIABLE_UsedModules_71;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_71);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_71));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_71;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_71);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_71));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_71;

  check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_71);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_71));
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_UsedModules_0_70,
  MR_Word * STATE_VARIABLE_UsedModules_71)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_52 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_52;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_0_70;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_119 = ((MR_Word) ((MR_hl_field(1, RHS_9, (MR_Integer) 0))));

                check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_119, STATE_VARIABLE_UsedModules_0_70, STATE_VARIABLE_UsedModules_71);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goal_129 = ((MR_Word) ((MR_hl_field(2, RHS_9, (MR_Integer) 5))));
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
          MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 5))));
          MR_String Name_19;
          MR_Word STATE_VARIABLE_UsedModules_74_74;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, SymName_18, STATE_VARIABLE_UsedModules_0_70, &STATE_VARIABLE_UsedModules_74_74);
          Name_19 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
          succeeded = (strcmp(Name_19, (MR_String) "format") == 0);
          if (succeeded)
            parse_tree__prog_data_used_modules__record_format_modules_as_used_2_p_0(STATE_VARIABLE_UsedModules_74_74, STATE_VARIABLE_UsedModules_71);
          else
            *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_74_74;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Call_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Call_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_0_70;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ClassId_27 = ((MR_Word) ((MR_hl_field(1, Call_20, (MR_Integer) 2))));
                    MR_Word CallId_28 = ((MR_Word) ((MR_hl_field(1, Call_20, (MR_Integer) 3))));
                    MR_Word ClassName_29 = ((MR_Word) ((MR_hl_field(0, ClassId_27, (MR_Integer) 0))));
                    MR_Word MethodName_32 = ((MR_Word) ((MR_hl_field(0, CallId_28, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_UsedModules_77_77;

                    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, ClassName_29, STATE_VARIABLE_UsedModules_0_70, &STATE_VARIABLE_UsedModules_77_77);
                    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, MethodName_32, STATE_VARIABLE_UsedModules_77_77, STATE_VARIABLE_UsedModules_71);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_0_70;
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_0_70;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_UsedModules_71 = STATE_VARIABLE_UsedModules_0_70;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_UsedModules_71;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[8]), Goals_48, ((MR_Box) (STATE_VARIABLE_UsedModules_0_70)), &conv1_STATE_VARIABLE_UsedModules_71);
              *STATE_VARIABLE_UsedModules_71 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_71));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_UsedModules_71;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[9]), Goals_113, ((MR_Box) (STATE_VARIABLE_UsedModules_0_70)), &conv3_STATE_VARIABLE_UsedModules_71);
              *STATE_VARIABLE_UsedModules_71 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_71));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Box conv7_STATE_VARIABLE_UsedModules_71;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[11]), Cases_51, ((MR_Box) (STATE_VARIABLE_UsedModules_0_70)), &conv7_STATE_VARIABLE_UsedModules_71);
              *STATE_VARIABLE_UsedModules_71 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_71));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4 = SubGoal_117;

              // direct tailcall eliminated
              ;
              Goal_4 = next_value_of_Goal_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_UsedModules_85_85;
              MR_Word STATE_VARIABLE_UsedModules_86_86;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_70;

              check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Cond_55, STATE_VARIABLE_UsedModules_0_70, &STATE_VARIABLE_UsedModules_85_85);
              check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(Then_56, STATE_VARIABLE_UsedModules_85_85, &STATE_VARIABLE_UsedModules_86_86);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_57;
              next_value_of_STATE_VARIABLE_UsedModules_0_70 = STATE_VARIABLE_UsedModules_86_86;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_UsedModules_0_70 = next_value_of_STATE_VARIABLE_UsedModules_0_70;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_58)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_59 = ((MR_Word) ((MR_hl_field(0, ShortHand_58, (MR_Integer) 0))));
                    MR_Word GoalB_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_58, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_UsedModules_88_88;
                    MR_Word next_value_of_Goal_4;
                    MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_70;

                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(GoalA_59, STATE_VARIABLE_UsedModules_0_70, &STATE_VARIABLE_UsedModules_88_88);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = GoalB_60;
                    next_value_of_STATE_VARIABLE_UsedModules_0_70 = STATE_VARIABLE_UsedModules_88_88;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_UsedModules_0_70 = next_value_of_STATE_VARIABLE_UsedModules_0_70;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_65 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 4))));
                    MR_Word OrElseGoals_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_UsedModules_90_90;
                    MR_Box conv5_STATE_VARIABLE_UsedModules_71;

                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(MainGoal_65, STATE_VARIABLE_UsedModules_0_70, &STATE_VARIABLE_UsedModules_90_90);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[10]), OrElseGoals_66, ((MR_Box) (STATE_VARIABLE_UsedModules_90_90)), &conv5_STATE_VARIABLE_UsedModules_71);
                    *STATE_VARIABLE_UsedModules_71 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_71));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(2, ShortHand_58, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_94;

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

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_13);
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

  check_hlds__unused_imports__var_table_entry_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_12);
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
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
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
  MR_Word STATE_VARIABLE_UsedModules_18_18;
  MR_Word STATE_VARIABLE_UsedModules_20_20;
  MR_Box conv1_STATE_VARIABLE_UsedModules_18_18;
  MR_Box conv3_STATE_VARIABLE_UsedModules_20_20;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_10);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_11);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, HeadVars_11, &HeadVarTypes_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Visibility_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_17, HeadVarTypes_12, ((MR_Box) (STATE_VARIABLE_UsedModules_0_15)), &conv1_STATE_VARIABLE_UsedModules_18_18);
  STATE_VARIABLE_UsedModules_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_18_18));
  parse_tree__var_table__foldl_var_table_4_p_0((MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[1]), VarTable_10, ((MR_Box) (STATE_VARIABLE_UsedModules_18_18)), &conv3_STATE_VARIABLE_UsedModules_20_20);
  STATE_VARIABLE_UsedModules_20_20 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_20_20));
  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_8, &MaybeArgModes_13);
  if ((MaybeArgModes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UsedModules_16 = STATE_VARIABLE_UsedModules_20_20;
  else
  {
    MR_Word Modes_14 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes_13, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Box conv5_STATE_VARIABLE_UsedModules_16;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_3));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (Visibility_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_22, Modes_14, ((MR_Box) (STATE_VARIABLE_UsedModules_20_20)), &conv5_STATE_VARIABLE_UsedModules_16);
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

  check_hlds__unused_imports__proc_info_used_modules_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_UsedModules_16);
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

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
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
        MR_Word STATE_VARIABLE_UsedModules_34_34;
        MR_Word STATE_VARIABLE_UsedModules_36_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_UsedModules_38_38;
        MR_Word Exported_104;
        MR_Word ClausesRep_105;
        MR_Word Clauses_107;
        MR_Box conv1_STATE_VARIABLE_UsedModules_34_34;
        MR_Box conv2_STATE_VARIABLE_UsedModules_36_36;
        MR_Box conv4_STATE_VARIABLE_UsedModules_38_38;
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
        UnivConstraints_15 = ((MR_Word) ((MR_hl_field(0, Constraints_14, (MR_Integer) 0))));
        ExistConstraints_16 = ((MR_Word) ((MR_hl_field(0, Constraints_14, (MR_Integer) 1))));
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[9]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (Visibility_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, UnivConstraints_15, ((MR_Box) (STATE_VARIABLE_UsedModules_0_31)), &conv1_STATE_VARIABLE_UsedModules_34_34);
        STATE_VARIABLE_UsedModules_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_34_34));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_33, ExistConstraints_16, ((MR_Box) (STATE_VARIABLE_UsedModules_34_34)), &conv2_STATE_VARIABLE_UsedModules_36_36);
        STATE_VARIABLE_UsedModules_36_36 = ((MR_Word) (conv2_STATE_VARIABLE_UsedModules_36_36));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_17);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[2]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_44_32_50_93_95_48_5_p_0_2));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Visibility_13));
        }
        mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_37, ProcTable_17, ((MR_Box) (STATE_VARIABLE_UsedModules_36_36)), &conv4_STATE_VARIABLE_UsedModules_38_38);
        STATE_VARIABLE_UsedModules_38_38 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_38_38));
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClausesInfo_18);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_18, &ClausesRep_105, &_ItemNumbers_106);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_105, &Clauses_107);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[7]), Clauses_107, ((MR_Box) (STATE_VARIABLE_UsedModules_38_38)), &conv6_STATE_VARIABLE_UsedModules_32);
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
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(1, ConstStructArg_4, (MR_Integer) 0))));
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(1, ConstStructArg_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_UsedModules_12_12;

    check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_7, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_12_12);
    check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, Type_8, STATE_VARIABLE_UsedModules_12_12, STATE_VARIABLE_UsedModules_10);
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
  MR_Word ConstStruct_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 0))));
  MR_Word ConstStructArgs_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 1))));
  MR_Word Type_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 2))));
  MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 3))));
  MR_Word DefinedWhere_14 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 4))) & (MR_Integer) 1);

  switch (DefinedWhere_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_UsedModules_26_26;
        MR_Word STATE_VARIABLE_UsedModules_28_28;
        MR_Word STATE_VARIABLE_UsedModules_30_30;
        MR_Box conv1_STATE_VARIABLE_UsedModules_28_28;

        check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, ConsId_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_26_26);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[6]), ConstStructArgs_11, ((MR_Box) (STATE_VARIABLE_UsedModules_26_26)), &conv1_STATE_VARIABLE_UsedModules_28_28);
        STATE_VARIABLE_UsedModules_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_28_28));
        check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, Type_12, STATE_VARIABLE_UsedModules_28_28, &STATE_VARIABLE_UsedModules_30_30);
        check_hlds__unused_imports__mer_inst_used_modules_4_p_0((MR_Integer) 1, Inst_13, STATE_VARIABLE_UsedModules_30_30, STATE_VARIABLE_UsedModules_24);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__cons_id_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34)
{
  switch (MR_tag((MR_Word) ConsId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_35 = (MR_Word) (MR_body((MR_Word) (ConsId_6), (MR_Integer) 1));
        MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));

        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, SymName_37, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 2:
          {
            MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, SymName_8, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, ModuleName_36, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));

            parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, ModuleName_12, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
          }
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
          break;
        case (MR_Integer) 14:
          *STATE_VARIABLE_UsedModules_34 = STATE_VARIABLE_UsedModules_0_33;
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

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_11);
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
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
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
  MR_Word ClassName_12 = ((MR_Word) ((MR_hl_field(0, ClassId_9, (MR_Integer) 0))));
  MR_Word InstanceModuleName_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, (MR_Integer) 0))));
  MR_Word InstanceStatus_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, (MR_Integer) 1))));
  MR_Word Types_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, (MR_Integer) 4))));
  MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_10, (MR_Integer) 5))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModuleName_8, InstanceModuleName_14);
  if (succeeded)
  {
    MR_Word Visibility_26;
    MR_Word STATE_VARIABLE_UsedModules_41_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_UsedModules_43_43;
    MR_Word Var_44;
    MR_Word Exported_72;
    MR_Box conv1_STATE_VARIABLE_UsedModules_43_43;
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
    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_26, ClassName_12, STATE_VARIABLE_UsedModules_0_27, &STATE_VARIABLE_UsedModules_41_41);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (Visibility_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_42, Types_18, ((MR_Box) (STATE_VARIABLE_UsedModules_41_41)), &conv1_STATE_VARIABLE_UsedModules_43_43);
    STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_43_43));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[9]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_97_110_99_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_6_p_0_2));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Visibility_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_44, Constraints_19, ((MR_Box) (STATE_VARIABLE_UsedModules_43_43)), &conv3_STATE_VARIABLE_UsedModules_28);
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

  check_hlds__unused_imports__instance_used_modules_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_28);
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

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ClassDefn_7,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  MR_Word Name_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word TypeClassStatus_9 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 0))));
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
        MR_Word STATE_VARIABLE_UsedModules_14_14;
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
        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_11, Name_5, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_14_14);
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[9]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__class_used_modules_4_p_0_1));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (Visibility_11));
        }
        Var_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 4))));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_UsedModules_14_14)), &conv1_STATE_VARIABLE_UsedModules_13);
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
  MR_Word Name_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ModeStatus_9 = ((MR_Word) ((MR_hl_field(0, ModeDefn_7, (MR_Integer) 4))));
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
        MR_Word STATE_VARIABLE_UsedModules_15_15;
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
        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_11, Name_5, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_15_15);
        Var_16 = ((MR_Word) ((MR_hl_field(0, ModeDefn_7, (MR_Integer) 2))));
        Mode_12 = (MR_Word) (Var_16);
        check_hlds__unused_imports__mer_mode_used_modules_4_p_0(Visibility_11, Mode_12, STATE_VARIABLE_UsedModules_15_15, STATE_VARIABLE_UsedModules_14);
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

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_19);
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
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(0, Mode_6, (MR_Integer) 0))));
    MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(0, Mode_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_UsedModules_14_14;

    check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, Inst0_8, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_14_14);
    check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, Inst_9, STATE_VARIABLE_UsedModules_14_14, STATE_VARIABLE_UsedModules_13);
  }
  else
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Mode_6, (MR_Integer) 0))));
    MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, Mode_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_UsedModules_16_16;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_UsedModules_13;

    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_10, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_16_16);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (Visibility_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_17, Insts_11, ((MR_Box) (STATE_VARIABLE_UsedModules_16_16)), &conv1_STATE_VARIABLE_UsedModules_13);
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
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, (MR_Integer) 0))));

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

  check_hlds__unused_imports__type_ctor_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word InstDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_19,
  MR_Word * STATE_VARIABLE_UsedModules_20)
{
  MR_Word InstBody_10 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, (MR_Integer) 2))));
  MR_Word InstForTypeCtor_11 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, (MR_Integer) 3))));
  MR_Word InstStatus_13 = ((MR_Word) ((MR_hl_field(0, InstDefn_6, (MR_Integer) 5))));
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
        MR_Word STATE_VARIABLE_UsedModules_21_21;
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
        check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_15, Inst_16, STATE_VARIABLE_UsedModules_0_19, &STATE_VARIABLE_UsedModules_21_21);
        switch (MR_tag((MR_Word) InstForTypeCtor_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstForTypeCtor_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_21_21;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_21_21;
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_UsedModules_20 = STATE_VARIABLE_UsedModules_21_21;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_17 = ((MR_Word) ((MR_hl_field(1, InstForTypeCtor_11, (MR_Integer) 0))));
              MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(0, TypeCtor_17, (MR_Integer) 0))));

              parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_33, STATE_VARIABLE_UsedModules_21_21, STATE_VARIABLE_UsedModules_20);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtors_18 = ((MR_Word) ((MR_hl_field(2, InstForTypeCtor_11, (MR_Integer) 0))));
              MR_Word Var_23;
              MR_Box conv1_STATE_VARIABLE_UsedModules_20;

              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[13]));
                MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
                MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_23, 3) = ((MR_Box) (Visibility_15));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_23, TypeCtors_18, ((MR_Box) (STATE_VARIABLE_UsedModules_21_21)), &conv1_STATE_VARIABLE_UsedModules_20);
              *STATE_VARIABLE_UsedModules_20 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_20));
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstForTypeCtor_11, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtor_29 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, (MR_Integer) 1))));
                  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(0, TypeCtor_29, (MR_Integer) 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_35, STATE_VARIABLE_UsedModules_21_21, STATE_VARIABLE_UsedModules_20);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtor_31 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, (MR_Integer) 1))));
                  MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(0, TypeCtor_31, (MR_Integer) 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_39, STATE_VARIABLE_UsedModules_21_21, STATE_VARIABLE_UsedModules_20);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeCtor_30 = ((MR_Word) ((MR_hl_field(3, InstForTypeCtor_11, (MR_Integer) 1))));
                  MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(0, TypeCtor_30, (MR_Integer) 0))));

                  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_15, SymName_37, STATE_VARIABLE_UsedModules_21_21, STATE_VARIABLE_UsedModules_20);
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
  MR_Word conv4_STATE_VARIABLE_UsedModules_13;

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_13));
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_11;

  check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_11));
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

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_13);
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

  check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_19);
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
          MR_Word HOInstInfo_27 = ((MR_Word) ((MR_hl_field(1, Inst_6, (MR_Integer) 1))));

          if ((HOInstInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
          else
          {
            MR_Word Modes_37;
            MR_Word Var_40 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_27), (MR_Integer) 1));
            MR_Word Var_41;
            MR_Box conv5_STATE_VARIABLE_UsedModules_19;

            Modes_37 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
              MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3));
              MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_41, 3) = ((MR_Box) (Visibility_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Modes_37, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv5_STATE_VARIABLE_UsedModules_19);
            STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
          MR_Word Var_21;
          MR_Box conv3_STATE_VARIABLE_UsedModules_19;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[11]));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2));
            MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_21, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_21, BoundInsts_14, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv3_STATE_VARIABLE_UsedModules_19);
          STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_19));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
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
              MR_Word SubInst_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
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
              MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));

              if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
              else
              {
                MR_Word Modes_29;
                MR_Word Var_32 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));
                MR_Word Var_33;
                MR_Box conv1_STATE_VARIABLE_UsedModules_19;

                Modes_29 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
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
          MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 0))));
          MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModules_25_25;
          MR_Word Var_26;
          MR_Box conv7_STATE_VARIABLE_UsedModules_24;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_8, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_25_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__unused_imports__inst_name_used_modules_4_p_0_4));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_26, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_25_25)), &conv7_STATE_VARIABLE_UsedModules_24);
          STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_24));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_44 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 1))));
          MR_Word InstB_45 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_UsedModules_28_46;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_44, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_28_46);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_45;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_28_46;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 0))));
          MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModules_28_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_28_28;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_41 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_14 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_43 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_42 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word Type_22 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_22, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_UsedModules_32_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_35, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_32_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_34;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_32_32;
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
          MR_Word HOInstInfo_27 = ((MR_Word) ((MR_hl_field(1, Inst_6, (MR_Integer) 1))));

          if ((HOInstInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
          else
          {
            MR_Word Modes_37;
            MR_Word Var_40 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_27), (MR_Integer) 1));
            MR_Word Var_41;
            MR_Box conv5_STATE_VARIABLE_UsedModules_19;

            Modes_37 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
              MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3));
              MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_41, 3) = ((MR_Box) (Visibility_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Modes_37, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv5_STATE_VARIABLE_UsedModules_19);
            STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
          MR_Word Var_21;
          MR_Box conv3_STATE_VARIABLE_UsedModules_19;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[11]));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2));
            MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_21, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_21, BoundInsts_14, ((MR_Box) (STATE_VARIABLE_UsedModules_0_18)), &conv3_STATE_VARIABLE_UsedModules_19);
          STATE_VARIABLE_UsedModules_19 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_19));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
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
              MR_Word SubInst_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
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
              MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));

              if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_UsedModules_19 = STATE_VARIABLE_UsedModules_0_18;
              else
              {
                MR_Word Modes_29;
                MR_Word Var_32 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_10), (MR_Integer) 1));
                MR_Word Var_33;
                MR_Box conv1_STATE_VARIABLE_UsedModules_19;

                Modes_29 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
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
          MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 0))));
          MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModules_25_25;
          MR_Word Var_26;
          MR_Box conv7_STATE_VARIABLE_UsedModules_24;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_8, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_25_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[12]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__unused_imports__inst_name_used_modules_4_p_0_4));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_26, Insts_9, ((MR_Box) (STATE_VARIABLE_UsedModules_25_25)), &conv7_STATE_VARIABLE_UsedModules_24);
          STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_24));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_44 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 1))));
          MR_Word InstB_45 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_UsedModules_28_46;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_44, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_28_46);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_45;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_28_46;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 0))));
          MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModules_28_28;
          MR_Word next_value_of_tscc_proc_1_input_1_Visibility_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;

          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(Visibility_5, InstA_10, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Visibility_5 = Visibility_5;
          next_value_of_tscc_proc_1_input_2_Inst_6 = InstB_11;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = STATE_VARIABLE_UsedModules_28_28;
          tscc_proc_1_input_1_Visibility_5 = next_value_of_tscc_proc_1_input_1_Visibility_5;
          tscc_proc_1_input_2_Inst_6 = next_value_of_tscc_proc_1_input_2_Inst_6;
          tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_UsedModules_0_18;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_41 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_14 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_43 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word SubInstName_42 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
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
              MR_Word Type_22 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_22, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_UsedModules_32_32;
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));
              MR_Word Type_35 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Visibility_5;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23;

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_5, Type_35, STATE_VARIABLE_UsedModules_0_23, &STATE_VARIABLE_UsedModules_32_32);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Visibility_5 = Visibility_5;
              next_value_of_tscc_proc_2_input_2_InstName_6 = SubInstName_34;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_UsedModules_0_23 = STATE_VARIABLE_UsedModules_32_32;
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
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint_6, (MR_Integer) 0))));
  MR_Word ArgTypes_9 = ((MR_Word) ((MR_hl_field(0, Constraint_6, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_UsedModules_12_12;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_UsedModules_11;

  parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, ClassName_8, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_12_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_13, ArgTypes_9, ((MR_Box) (STATE_VARIABLE_UsedModules_12_12)), &conv1_STATE_VARIABLE_UsedModules_11);
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

  check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__511__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_29);
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

  check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_11));
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22)
{
  MR_Word MaybeExistConstraints_9 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 1))));
  MR_Word Args_11 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_UsedModules_24_24;
  MR_Word Var_25;
  MR_Box conv3_STATE_VARIABLE_UsedModules_22;

  if ((MaybeExistConstraints_9 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_UsedModules_24_24 = STATE_VARIABLE_UsedModules_0_21;
  else
  {
    MR_Word ExistConstraints_14 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_9), (MR_Integer) 1));
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_14, (MR_Integer) 1))));
    MR_Word Var_23;
    MR_Box conv1_STATE_VARIABLE_UsedModules_24_24;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[9]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Visibility_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_23, Constraints_16, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv1_STATE_VARIABLE_UsedModules_24_24);
    STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_24_24));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[10]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Visibility_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, Args_11, ((MR_Box) (STATE_VARIABLE_UsedModules_24_24)), &conv3_STATE_VARIABLE_UsedModules_22);
  *STATE_VARIABLE_UsedModules_22 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
check_hlds__unused_imports__type_used_modules_4_p_0(
  MR_Word _TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(TypeDefn_6, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24);
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

  check_hlds__unused_imports__ctor_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
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
      *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Visibility_11;
        MR_Word Exported_33;

        Exported_33 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(TypeStatus_8);
        switch (Exported_33) {
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
              MR_Word Ctors_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, (MR_Integer) 0))));
              MR_Word MaybeSuperType_14 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, (MR_Integer) 1))));
              MR_Word Var_25;
              MR_Word Var_26;
              MR_Word STATE_VARIABLE_UsedModules_27_27;
              MR_Box conv1_STATE_VARIABLE_UsedModules_27_27;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[8]));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
                MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_25, 3) = ((MR_Box) (Visibility_11));
              }
              Var_26 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_13);
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, Var_26, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv1_STATE_VARIABLE_UsedModules_27_27);
              STATE_VARIABLE_UsedModules_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_27_27));
              if ((MaybeSuperType_14 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_27_27;
              else
              {
                MR_Word SuperType_18 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_14, (MR_Integer) 0))));

                check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_11, SuperType_18, STATE_VARIABLE_UsedModules_27_27, STATE_VARIABLE_UsedModules_24);
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_19 = ((MR_Word) ((MR_hl_field(2, TypeBody_9, (MR_Integer) 0))));

              check_hlds__unused_imports__mer_type_used_modules_4_p_0(Visibility_11, EqvType_19, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
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
  MR_Word conv8_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_27));
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

  check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_13);
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
  MR_Word conv4_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0(
  MR_Word Visibility_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_UsedModules_27 = STATE_VARIABLE_UsedModules_0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_10 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 0))));
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModules_28_28;
          MR_Word Var_29;
          MR_Box conv3_STATE_VARIABLE_UsedModules_27;

          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_5, Name_10, STATE_VARIABLE_UsedModules_0_26, &STATE_VARIABLE_UsedModules_28_28);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
            MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_2));
            MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_29, 3) = ((MR_Box) (Visibility_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_29, Args_11, ((MR_Box) (STATE_VARIABLE_UsedModules_28_28)), &conv3_STATE_VARIABLE_UsedModules_27);
          *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_27));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_13 = ((MR_Word) ((MR_hl_field(2, Type_6, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_UsedModules_27 = STATE_VARIABLE_UsedModules_0_26;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_UsedModules_27 = STATE_VARIABLE_UsedModules_0_26;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CharModuleName_15;

                    CharModuleName_15 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0((MR_Word) (&check_hlds__unused_imports_scalar_common_3[0]));
                    parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, CharModuleName_15, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_UsedModules_27 = STATE_VARIABLE_UsedModules_0_26;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
              MR_Word Var_37;
              MR_Box conv9_STATE_VARIABLE_UsedModules_27;

              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
                MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_5));
                MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_37, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_37, ArgTypes_20, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv9_STATE_VARIABLE_UsedModules_27);
              *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv9_STATE_VARIABLE_UsedModules_27));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 3))));
              MR_Word Var_34;
              MR_Word STATE_VARIABLE_UsedModules_35_35;
              MR_Word Args_42 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));
              MR_Box conv5_STATE_VARIABLE_UsedModules_35_35;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
                MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_3));
                MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_34, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_34, Args_42, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv5_STATE_VARIABLE_UsedModules_35_35);
              STATE_VARIABLE_UsedModules_35_35 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_35_35));
              if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_UsedModules_27 = STATE_VARIABLE_UsedModules_35_35;
              else
              {
                MR_Word Modes_65;
                MR_Word Var_68 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));
                MR_Word Var_69;
                MR_Box conv7_STATE_VARIABLE_UsedModules_27;

                Modes_65 = ((MR_Word) ((MR_hl_field(0, Var_68, (MR_Integer) 1))));
                {
                  Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_69, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[7]));
                  MR_hl_field(0, Var_69, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_4));
                  MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_69, 3) = ((MR_Box) (Visibility_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_69, Modes_65, ((MR_Box) (STATE_VARIABLE_UsedModules_35_35)), &conv7_STATE_VARIABLE_UsedModules_27);
                *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_27));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_39;
              MR_Word ArgTypes_43 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_UsedModules_27;

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[6]));
                MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_1));
                MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_39, 3) = ((MR_Box) (Visibility_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_39, ArgTypes_43, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv1_STATE_VARIABLE_UsedModules_27);
              *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv1_STATE_VARIABLE_UsedModules_27));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgType_24 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = ArgType_24;

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

static void MR_CALL 
check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ThisAvail_7,
  MR_Word PrevAvail_8,
  MR_Word STATE_VARIABLE_Msgs_0_19,
  MR_Word * STATE_VARIABLE_Msgs_20)
{
  MR_bool succeeded;
  MR_Word ThisSection_10 = ((((MR_Unsigned) ((MR_hl_field(0, ThisAvail_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ThisImportOrUse_11 = ((MR_Unsigned) ((MR_hl_field(0, ThisAvail_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PrevSection_13 = ((((MR_Unsigned) ((MR_hl_field(0, PrevAvail_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word PrevImportOrUse_14 = ((MR_Unsigned) ((MR_hl_field(0, PrevAvail_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PrevContext_15 = ((MR_Word) ((MR_hl_field(0, PrevAvail_8, (MR_Integer) 1))));

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

    DeclName_16 = parse_tree__item_util__import_or_use_decl_name_1_f_0(PrevImportOrUse_14);
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (DeclName_16));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[12])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[10])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[4])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[9])));
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
  MR_Word SectionA_7 = ((((MR_Unsigned) ((MR_hl_field(0, AvailA_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUseA_8 = ((MR_Unsigned) ((MR_hl_field(0, AvailA_4, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextA_9 = ((MR_Word) ((MR_hl_field(0, AvailA_4, (MR_Integer) 1))));
  MR_Word SectionB_10 = ((((MR_Unsigned) ((MR_hl_field(0, AvailB_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUseB_11 = ((MR_Unsigned) ((MR_hl_field(0, AvailB_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextB_12 = ((MR_Word) ((MR_hl_field(0, AvailB_5, (MR_Integer) 1))));

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
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1(
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
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(
  MR_Word TopModuleName_8,
  MR_Word UnusedAnywhereImports_9,
  MR_Word UnusedInterfaceImports_10,
  MR_Word ModuleName_11,
  MR_Word AvailEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Avails_16 = ((MR_Word) ((MR_hl_field(0, AvailEntry_12, (MR_Integer) 1))));
  MR_Word SortedAvails_17;

  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[5]), Avails_16, &SortedAvails_17);
  if ((SortedAvails_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  else
  {
    MR_Word HeadAvail_18 = ((MR_Word) ((MR_hl_field(1, SortedAvails_17, (MR_Integer) 0))));
    MR_Word Section_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadAvail_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ImportOrUse_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadAvail_18, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word HeadContext_22 = ((MR_Word) ((MR_hl_field(0, HeadAvail_18, (MR_Integer) 1))));
    MR_Word AnywhereWarning_24;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Word TypeCtorInfo_39_39;

    check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(ModuleName_11, SortedAvails_17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_30_30);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), UnusedAnywhereImports_9);
    if (succeeded)
    {
      MR_Word AnywhereSpec_23;
      MR_String ImportOrUseDeclName_42;
      MR_Word Pieces_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;

      ImportOrUseDeclName_42 = parse_tree__item_util__import_or_use_decl_name_1_f_0(ImportOrUse_21);
      {
        Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_47, 1) = ((MR_Box) (TopModuleName_8));
      }
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (ModuleName_11));
      }
      {
        Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_62, 1) = ((MR_Box) (ImportOrUseDeclName_42));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[27])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[16])));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[15])));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[14])));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
      }
      {
        Pieces_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[13])));
        MR_hl_field(1, Pieces_43, 1) = ((MR_Box) (Var_46));
      }
      {
        AnywhereSpec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AnywhereSpec_23, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.unused_imports.generate_unused_import_warning\'/5"));
        MR_hl_field(1, AnywhereSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(1, AnywhereSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 108U));
        MR_hl_field(1, AnywhereSpec_23, 3) = ((MR_Box) (HeadContext_22));
        MR_hl_field(1, AnywhereSpec_23, 4) = ((MR_Box) (Pieces_43));
      }
      {
        STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (AnywhereSpec_23));
        MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_30_30));
      }
      AnywhereWarning_24 = (MR_Integer) 1;
    }
    else
    {
      AnywhereWarning_24 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_30_30;
    }
    succeeded = (Section_20 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_39_39 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_39_39, ((MR_Box) (ModuleName_11)), UnusedInterfaceImports_10);
      if (succeeded)
        succeeded = (AnywhereWarning_24 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word InterfaceSpec_25;

      InterfaceSpec_25 = check_hlds__unused_imports__generate_unused_import_warning_5_f_0(TopModuleName_8, ModuleName_11, ImportOrUse_21, HeadContext_22, (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InterfaceSpec_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_32));
      }
    }
    else
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_32_32;
  }
}

static MR_Word MR_CALL 
check_hlds__unused_imports__generate_unused_import_warning_5_f_0(
  MR_Word ModuleName_7,
  MR_Word UnusedModuleName_8,
  MR_Word ImportOrUse_9,
  MR_Word Context_10,
  MR_Word AnywhereOrInterface_11)
{
  MR_Word Spec_12;
  MR_String DeclInTheLocn_13;
  MR_String NotUsedInTheLocn_14;
  MR_String ImportOrUseDeclName_15;
  MR_Word Pieces_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;

  switch (AnywhereOrInterface_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DeclInTheLocn_13 = (MR_String) "";
        NotUsedInTheLocn_14 = (MR_String) "anywhere in the module";
      }
      break;
    case (MR_Integer) 1:
      {
        DeclInTheLocn_13 = (MR_String) "in the interface";
        NotUsedInTheLocn_14 = (MR_String) "in the interface";
      }
      break;
  }
  ImportOrUseDeclName_15 = parse_tree__item_util__import_or_use_decl_name_1_f_0(ImportOrUse_9);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (UnusedModuleName_8));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (ImportOrUseDeclName_15));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (DeclInTheLocn_13));
  }
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (NotUsedInTheLocn_14));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[20])));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[18])));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[17])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[4])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[16])));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[15])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[14])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    Pieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[13])));
    MR_hl_field(1, Pieces_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.unused_imports.generate_unused_import_warning\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 108U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_10));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_16));
  }
  return Spec_12;
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

  check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Msgs_20);
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
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PrevMsgs_16;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_PrevAvails_31_31;
      MR_Word STATE_VARIABLE_Specs_56_56;
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
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[1]), Var_29, STATE_VARIABLE_PrevAvails_0_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PrevMsgs_16);
      PrevMsgs_16 = ((MR_Word) (conv1_PrevMsgs_16));
      if ((PrevMsgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Avail_12));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PrevAvails_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), STATE_VARIABLE_PrevAvails_0_3, Var_32);
        STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_4;
      }
      else
      {
        MR_Word ImportOrUse_20 = ((MR_Unsigned) ((MR_hl_field(0, Avail_12, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Avail_12, (MR_Integer) 1))));
        MR_String DeclName_22;
        MR_Word MainPieces_23;
        MR_Word MainMsg_24;
        MR_Word Spec_25;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_55;

        DeclName_22 = parse_tree__item_util__import_or_use_decl_name_1_f_0(ImportOrUse_20);
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (DeclName_22));
        }
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (HeadVar__1_1));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__unused_imports_scalar_common_1[8])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[5])));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[4])));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          MainPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MainPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__unused_imports_scalar_common_1[3])));
          MR_hl_field(1, MainPieces_23, 1) = ((MR_Box) (Var_36));
        }
        {
          MainMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainMsg_24, 0) = ((MR_Box) (Context_21));
          MR_hl_field(0, MainMsg_24, 1) = ((MR_Box) (MainPieces_23));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MainMsg_24));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (PrevMsgs_16));
        }
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.unused_imports.maybe_generate_redundant_avail_warnings\'/5"));
          MR_hl_field(0, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 108U));
          MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Var_55));
        }
        {
          STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
        STATE_VARIABLE_PrevAvails_31_31 = STATE_VARIABLE_PrevAvails_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Avails_13;
      next_value_of_STATE_VARIABLE_PrevAvails_0_3 = STATE_VARIABLE_PrevAvails_31_31;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_56_56;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PrevAvails_0_3 = next_value_of_STATE_VARIABLE_PrevAvails_0_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Specs_27;

  check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Specs_27);
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Specs_27));
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

  parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__4_4);
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

  check_hlds__unused_imports__class_instances_used_modules_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_UsedModules_14);
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

  check_hlds__unused_imports__pred_info_used_modules_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_UsedModules_32);
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

  check_hlds__unused_imports__const_struct_used_modules_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UsedModules_24);
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
  MR_Word conv0_STATE_VARIABLE_UsedModules_24;

  check_hlds__unused_imports__type_used_modules_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_UsedModules_24);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_24));
}

void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word ModuleInfo_5,
  MR_Word * Specs_6)
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
  MR_Word UnusedInterfaceImports_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_53;
  MR_Word UsedModulesInit_70;
  MR_Word TypeTable_71;
  MR_Word UsedModulesTypeCtor_72;
  MR_Word InstTable_73;
  MR_Word UserInstTable_74;
  MR_Word UsedModulesUserInst_75;
  MR_Word ModeTable_76;
  MR_Word ModeDefns_77;
  MR_Word UsedModulesMode_78;
  MR_Word ConstStructDb_79;
  MR_Word ConstStructs_80;
  MR_Word UsedModulesConstStruct_81;
  MR_Word PredIdTable_82;
  MR_Word UsedModulesPredInfo_83;
  MR_Word ClassTable_84;
  MR_Word UsedModulesClass_85;
  MR_Word InstanceTable_86;
  MR_Word UsedModulesInstance_87;
  MR_Word ImplicitImports_88;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Box conv1_UsedModulesTypeCtor_72;
  MR_Box conv3_UsedModulesUserInst_75;
  MR_Box conv5_UsedModulesMode_78;
  MR_Box conv7_UsedModulesConstStruct_81;
  MR_Box conv9_UsedModulesPredInfo_83;
  MR_Box conv11_UsedModulesClass_85;
  MR_Box conv13_UsedModulesInstance_87;
  MR_Box conv15_UsedModules_8;
  MR_Box conv17_Specs_6;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_7);
  hlds__hlds_module__module_info_get_used_modules_2_p_0(ModuleInfo_5, &UsedModulesInit_70);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_71);
  hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[1]), TypeTable_71, ((MR_Box) (UsedModulesInit_70)), &conv1_UsedModulesTypeCtor_72);
  UsedModulesTypeCtor_72 = ((MR_Word) (conv1_UsedModulesTypeCtor_72));
  hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_5, &InstTable_73);
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_73, &UserInstTable_74);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[2]), UserInstTable_74, ((MR_Box) (UsedModulesTypeCtor_72)), &conv3_UsedModulesUserInst_75);
  UsedModulesUserInst_75 = ((MR_Word) (conv3_UsedModulesUserInst_75));
  hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, &ModeTable_76);
  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_76, &ModeDefns_77);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[3]), ModeDefns_77, ((MR_Box) (UsedModulesUserInst_75)), &conv5_UsedModulesMode_78);
  UsedModulesMode_78 = ((MR_Word) (conv5_UsedModulesMode_78));
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_79);
  hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_79, &ConstStructs_80);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[3]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_4));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (ProgressStream_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__unused_imports_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_92, ConstStructs_80, ((MR_Box) (UsedModulesMode_78)), &conv7_UsedModulesConstStruct_81);
  UsedModulesConstStruct_81 = ((MR_Word) (conv7_UsedModulesConstStruct_81));
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_5, &PredIdTable_82);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[0]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_5));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (ProgressStream_4));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_93, PredIdTable_82, ((MR_Box) (UsedModulesConstStruct_81)), &conv9_UsedModulesPredInfo_83);
  UsedModulesPredInfo_83 = ((MR_Word) (conv9_UsedModulesPredInfo_83));
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_84);
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_2[4]), ClassTable_84, ((MR_Box) (UsedModulesPredInfo_83)), &conv11_UsedModulesClass_85);
  UsedModulesClass_85 = ((MR_Word) (conv11_UsedModulesClass_85));
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_5, &InstanceTable_86);
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_6[0]));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_7));
    MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_95, 3) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Var_95, 4) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_95, InstanceTable_86, ((MR_Box) (UsedModulesClass_85)), &conv13_UsedModulesInstance_87);
  UsedModulesInstance_87 = ((MR_Word) (conv13_UsedModulesInstance_87));
  ImplicitImports_88 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_7[0]), ImplicitImports_88, ((MR_Box) (UsedModulesInstance_87)), &conv15_UsedModules_8);
  UsedModules_8 = ((MR_Word) (conv15_UsedModules_8));
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_5, &AvailModuleMap_9);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_9, &ModuleAvails_10);
  Var_21 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_22 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(ModuleAvails_10, Var_21, &AvailAnywhereCord_11, Var_22, &AvailInterfaceCord_12);
  Var_23 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailAnywhereCord_11);
  mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_23, &AvailAnywhereModules_13);
  Var_24 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailInterfaceCord_12);
  mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, &AvailInterfaceModules_14);
  UsedInInterface_15 = ((MR_Word) ((MR_hl_field(0, UsedModules_8, (MR_Integer) 0))));
  UsedInImplementation_16 = ((MR_Word) ((MR_hl_field(0, UsedModules_8, (MR_Integer) 1))));
  UsedAnywhere_17 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedInInterface_15, UsedInImplementation_16);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailAnywhereModules_13, UsedAnywhere_17, &UnusedAnywhereImports_18);
  UnusedInterfaceImports_19 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailInterfaceModules_14, UsedInInterface_15);
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_8[0]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_3_p_0_9));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) (UnusedAnywhereImports_18));
    MR_hl_field(0, Var_53, 5) = ((MR_Box) (UnusedInterfaceImports_19));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&check_hlds__unused_imports_scalar_common_1[0]), Var_53, AvailModuleMap_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv17_Specs_6);
  *Specs_6 = ((MR_Word) (conv17_Specs_6));
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
      MR_Word ModuleEntry_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModuleEntries_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, ModuleEntry_12, (MR_Integer) 0))));
      MR_Word Entry_17 = ((MR_Word) ((MR_hl_field(0, ModuleEntry_12, (MR_Integer) 1))));
      MR_Word Section_18 = ((((MR_Unsigned) ((MR_hl_field(0, Entry_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_AvailAnywhereCord_25_25;
      MR_Word STATE_VARIABLE_AvailInterfaceCord_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4;

      STATE_VARIABLE_AvailAnywhereCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_AvailAnywhereCord_0_2, ((MR_Box) (ModuleName_16)));
      switch (Section_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_AvailInterfaceCord_26_26 = STATE_VARIABLE_AvailInterfaceCord_0_4;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_AvailInterfaceCord_26_26 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_AvailInterfaceCord_0_4, ((MR_Box) (ModuleName_16)));
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ModuleEntries_13;
      next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2 = STATE_VARIABLE_AvailAnywhereCord_25_25;
      next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4 = STATE_VARIABLE_AvailInterfaceCord_26_26;
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

void mercury__check_hlds__unused_imports__init(void)
{
}

void mercury__check_hlds__unused_imports__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__unused_imports__check_hlds__unused_imports__type_ctor_info_anywhere_or_interface_0);
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
