/*
** Automatically generated from `unused_imports.m'
** by the Mercury compiler,
** version rotd-2017-07-25
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.unused_imports. */
/* :- implementation. */

/*
INIT mercury__check_hlds__unused_imports__init
ENDINIT
*/

#include "check_hlds.unused_imports.mih"


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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0;

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_value_ordered_anywhere_or_interface_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0[2];

static const MR_Integer check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0[2];

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__455__1_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__LambdaHeadVar__1_22,
  MR_Word check_hlds__unused_imports__LambdaHeadVar__2_23,
  MR_Word * check_hlds__unused_imports__LambdaHeadVar__3_24);

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(
  MR_Word * check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2,
  MR_Word check_hlds__unused_imports__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(
  MR_Word check_hlds__unused_imports__HeadVar__2_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2);

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__BoundFunctor_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Case_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10);

static void MR_CALL 
check_hlds__unused_imports__clause_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Clause_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_6,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_7);

static void MR_CALL 
check_hlds__unused_imports__unify_rhs_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__RHS_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_19,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_20);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Goal_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71);

static void MR_CALL 
check_hlds__unused_imports__proc_info_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__Visibility_6,
  MR_Integer check_hlds__unused_imports___ProcId_7,
  MR_Word check_hlds__unused_imports__ProcInfo_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__unused_imports__Visibility_6,
  MR_Word check_hlds__unused_imports__ProcInfo_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__pred_info_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__PredId_5,
  MR_Word check_hlds__unused_imports__PredInfo_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__PredInfo_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18);

static void MR_CALL 
check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__ConstStructArg_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10);

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_11,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12);

static void MR_CALL 
check_hlds__unused_imports__cons_id_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__ConsId_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41);

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__ThisModuleName_6,
  MR_Word check_hlds__unused_imports__ClassId_7,
  MR_Word check_hlds__unused_imports__InstanceDefn_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_24,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25);

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__ThisModuleName_6,
  MR_Word check_hlds__unused_imports__ClassId_7,
  MR_Word check_hlds__unused_imports__InstanceDefns_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__ClassDefn_7,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
check_hlds__unused_imports__mode_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__ModeDefn_7,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_14,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_15);

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Mode_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
check_hlds__unused_imports__user_inst_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports___InstId_5,
  MR_Word check_hlds__unused_imports__InstDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__InstDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__InstName_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Inst_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22);

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Constraint_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Ctor_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_16,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17);

static void MR_CALL 
check_hlds__unused_imports__type_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports___TypeCtor_5,
  MR_Word check_hlds__unused_imports__TypeDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__TypeDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_5(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Type_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(
  MR_Word check_hlds__unused_imports__ModuleName_6,
  MR_Word check_hlds__unused_imports__ThisAvail_7,
  MR_Word check_hlds__unused_imports__PrevAvail_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Msgs_0_19,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Msgs_20);

static void MR_CALL 
check_hlds__unused_imports__compare_avails_3_p_0(
  MR_Word check_hlds__unused_imports__AvailA_4,
  MR_Word check_hlds__unused_imports__AvailB_5,
  MR_Word * check_hlds__unused_imports__Result_6);

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(
  MR_Word check_hlds__unused_imports__TopModuleName_8,
  MR_Word check_hlds__unused_imports__UnusedAnywhereImports_9,
  MR_Word check_hlds__unused_imports__UnusedInterfaceImports_10,
  MR_Word check_hlds__unused_imports__ModuleName_11,
  MR_Word check_hlds__unused_imports__AvailEntry_12,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_0_26,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
check_hlds__unused_imports__generate_unused_warning_5_f_0(
  MR_Word check_hlds__unused_imports__TopModuleName_7,
  MR_Word check_hlds__unused_imports__UnusedModuleName_8,
  MR_Word check_hlds__unused_imports__ImportOrUse_9,
  MR_Word check_hlds__unused_imports__Context_10,
  MR_Word check_hlds__unused_imports__AnywhereOrInterface_11);

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_2_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_8(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_7(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_6(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_5(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4);

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0(
  MR_Word check_hlds__unused_imports__ModuleInfo_3,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_0_2,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_3,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_5);

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001(
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2);

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001(
  MR_Box * check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[22][2];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[14][3];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[14][7];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[6][6];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_5[4][8];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][1];




static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is redundant."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that makes this one redundant."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[4])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but is not used"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the previous"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for module"))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[0])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[2])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[0])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[3])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[4])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[2])),
    ((MR_Box) (check_hlds__unused_imports__const_struct_used_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[3])),
    ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[4])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[4])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[4])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_4[5])),
    ((MR_Box) (check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_3[14][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_4[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_6[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[5])),
    ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[13])),
    ((MR_Box) (check_hlds__unused_imports__case_used_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__unused_imports_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "char"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unused_imports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unused_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_0 = {
  (MR_String) "aoi_anywhere",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__unused_imports__check_hlds__unused_imports__enum_functor_desc_anywhere_or_interface_0_1 = {
  (MR_String) "aoi_interface",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__unused_imports__check_hlds__unused_imports__enum_value_ordered_anywhere_or_interface_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001)),
  ((MR_Box) (check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001)),
  (MR_String) "check_hlds.unused_imports",
  (MR_String) "anywhere_or_interface",
  {     check_hlds__unused_imports__check_hlds__unused_imports__enum_name_ordered_anywhere_or_interface_0 },
  {     check_hlds__unused_imports__check_hlds__unused_imports__enum_value_ordered_anywhere_or_interface_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unused_imports__check_hlds__unused_imports__functor_number_map_anywhere_or_interface_0
};

static void MR_CALL 
check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__455__1_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__LambdaHeadVar__1_22,
  MR_Word check_hlds__unused_imports__LambdaHeadVar__2_23,
  MR_Word * check_hlds__unused_imports__LambdaHeadVar__3_24)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__LambdaHeadVar__1_22, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__LambdaHeadVar__1_22, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__LambdaHeadVar__1_22, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__LambdaHeadVar__1_22, (MR_Integer) 3)));

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Var_27, check_hlds__unused_imports__LambdaHeadVar__2_23, check_hlds__unused_imports__LambdaHeadVar__3_24);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(
  MR_Word * check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2,
  MR_Word check_hlds__unused_imports__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Integer check_hlds__unused_imports__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unused_imports__HeadVar__2_2;
    MR_Integer check_hlds__unused_imports__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unused_imports__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unused_imports__HeadVar__1_1, check_hlds__unused_imports__Cast_HeadVar1_4, check_hlds__unused_imports__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(
  MR_Word check_hlds__unused_imports__HeadVar__2_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__HeadVar__2_1 == check_hlds__unused_imports__HeadVar__2_2);

    return check_hlds__unused_imports__succeeded;
  }
}

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22;

    {
      check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22));
  }
}

static void MR_CALL 
check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__BoundFunctor_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__BoundFunctor_6, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__BoundFunctor_6, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12;
    MR_Word check_hlds__unused_imports__Var_13;
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__cons_id_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__ConsId_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12);
    }
    {
      check_hlds__unused_imports__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[11]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_13, check_hlds__unused_imports__Insts_9, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
  }
}

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_41;

    {
      check_hlds__unused_imports__cons_id_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_41);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_41));
  }
}

static void MR_CALL 
check_hlds__unused_imports__case_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Case_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Case_4, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Case_4, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Case_4, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12;
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14;
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_14_14;

    {
      check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__MainConsId_6, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_6[1], check_hlds__unused_imports__OtherConsIds_7, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_14_14);
    }
    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_14_14);
    {
      check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__Goal_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__clause_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Clause_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_6,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_7)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Var_8;

    {
      check_hlds__unused_imports__Var_8 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__unused_imports__Clause_4);
    }
    {
      check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__Var_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_6, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_7);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__unify_rhs_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__RHS_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_19,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_20)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    switch (MR_tag((MR_Word) check_hlds__unused_imports__RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_20 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__RHS_4, (MR_Integer) 0)));
          MR_Word check_hlds__unused_imports__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__RHS_4, (MR_Integer) 1)));
          MR_Word check_hlds__unused_imports__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__RHS_4, (MR_Integer) 2)));

          {
            check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__ConsId_7, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_19, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_20);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__unused_imports__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 6)));
          MR_Word check_hlds__unused_imports__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__unused_imports__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__unused_imports__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__unused_imports__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 2)));
          MR_Word check_hlds__unused_imports__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 3)));
          MR_Word check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 4)));
          MR_Word check_hlds__unused_imports__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__RHS_4, (MR_Integer) 5)));

          {
            check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__Goal_18, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_19, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_20);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_10;

    {
      check_hlds__unused_imports__case_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_10);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_10));
  }
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_71;

    {
      check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_71);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_71));
  }
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_71;

    {
      check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_71);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_71));
  }
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_71;

    {
      check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_71);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_71));
  }
}

static void MR_CALL 
check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__Goal_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;
        MR_Word check_hlds__unused_imports__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Goal_4, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Goal_4, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__unused_imports__GoalExpr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__unused_imports__SubGoal_52 = (MR_Word) MR_body(((MR_Word) check_hlds__unused_imports__GoalExpr_6), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__unused_imports__next_value_of_Goal_4 = check_hlds__unused_imports__SubGoal_52;

                check_hlds__unused_imports__Goal_4 = check_hlds__unused_imports__next_value_of_Goal_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unused_imports__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 0)));
              MR_Word check_hlds__unused_imports__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
              MR_Word check_hlds__unused_imports__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 3)));
              MR_Word check_hlds__unused_imports__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 4)));

              {
                check_hlds__unused_imports__unify_rhs_used_modules_3_p_0(check_hlds__unused_imports__RHS_9, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unused_imports__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 5)));
              MR_String check_hlds__unused_imports__Name_19;
              MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_91_91;
              MR_Word check_hlds__unused_imports__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 0)));
              MR_Integer check_hlds__unused_imports__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
              MR_Word check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 3)));
              MR_Word check_hlds__unused_imports__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 4)));

              {
                parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, check_hlds__unused_imports__SymName_18, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_91_91);
              }
              {
                check_hlds__unused_imports__Name_19 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unused_imports__SymName_18);
              }
              check_hlds__unused_imports__succeeded = (strcmp(check_hlds__unused_imports__Name_19, (MR_String) "format") == 0);
              if (check_hlds__unused_imports__succeeded)
                {
                  parse_tree__prog_data_used_modules__record_format_modules_as_used_2_p_0(check_hlds__unused_imports__STATE_VARIABLE_UsedModules_91_91, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71);
                }
              else
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_91_91;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__unused_imports__Call_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word check_hlds__unused_imports__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 4)));
                  MR_Word check_hlds__unused_imports__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 5)));

                  switch (MR_tag((MR_Word) check_hlds__unused_imports__Call_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__unused_imports__ClassId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Call_20, (MR_Integer) 2)));
                        MR_Word check_hlds__unused_imports__CallId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Call_20, (MR_Integer) 3)));
                        MR_Word check_hlds__unused_imports__ClassName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassId_27, (MR_Integer) 0)));
                        MR_Word check_hlds__unused_imports__MethodName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__CallId_28, (MR_Integer) 1)));
                        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_87_87;
                        MR_Word check_hlds__unused_imports__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Call_20, (MR_Integer) 0)));
                        MR_Integer check_hlds__unused_imports__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Call_20, (MR_Integer) 1)));
                        MR_Integer check_hlds__unused_imports__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassId_27, (MR_Integer) 1)));
                        MR_Word check_hlds__unused_imports__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__CallId_28, (MR_Integer) 0)));
                        MR_Integer check_hlds__unused_imports__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__CallId_28, (MR_Integer) 2)));

                        {
                          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, check_hlds__unused_imports__ClassName_29, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_87_87);
                        }
                        {
                          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, check_hlds__unused_imports__MethodName_32, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_87_87, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70;
                      break;
                    case (MR_Integer) 3:
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__unused_imports__Goals_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
                  MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_71;

                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[10], check_hlds__unused_imports__Goals_48, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_71);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_71);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__unused_imports__Goals_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
                  MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_71;

                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[11], check_hlds__unused_imports__Goals_115, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_71);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_71);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__unused_imports__Cases_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word check_hlds__unused_imports__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
                  MR_Box check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_71;

                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[13], check_hlds__unused_imports__Cases_51, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70)), &check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_71);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = ((MR_Word) check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_71);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__unused_imports__SubGoal_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_Goal_4 = check_hlds__unused_imports__SubGoal_119;

                    check_hlds__unused_imports__Goal_4 = check_hlds__unused_imports__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__unused_imports__Cond_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Then_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word check_hlds__unused_imports__Else_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 4)));
                  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_78_78;
                  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_79_79;
                  MR_Word check_hlds__unused_imports__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));

                  {
                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__Cond_55, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_78_78);
                  }
                  {
                    check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__Then_56, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_78_78, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_79_79);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_Goal_4 = check_hlds__unused_imports__Else_57;
                    MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_70 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_79_79;

                    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_70;
                    check_hlds__unused_imports__Goal_4 = check_hlds__unused_imports__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__unused_imports__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__GoalExpr_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__unused_imports__ShortHand_58)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__unused_imports__GoalA_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 0)));
                        MR_Word check_hlds__unused_imports__GoalB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 1)));
                        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_76_76;

                        {
                          check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__GoalA_59, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_76_76);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__unused_imports__next_value_of_Goal_4 = check_hlds__unused_imports__GoalB_60;
                          MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_70 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_76_76;

                          check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_70;
                          check_hlds__unused_imports__Goal_4 = check_hlds__unused_imports__next_value_of_Goal_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__unused_imports__MainGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 4)));
                        MR_Word check_hlds__unused_imports__OrElseGoals_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 5)));
                        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_73_73;
                        MR_Word check_hlds__unused_imports__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 0)));
                        MR_Word check_hlds__unused_imports__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 1)));
                        MR_Word check_hlds__unused_imports__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 2)));
                        MR_Word check_hlds__unused_imports__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 3)));
                        MR_Word check_hlds__unused_imports__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 6)));
                        MR_Box check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_71;

                        {
                          check_hlds__unused_imports__hlds_goal_used_modules_3_p_0(check_hlds__unused_imports__MainGoal_65, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_70, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_73_73);
                        }
                        {
                          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[12], check_hlds__unused_imports__OrElseGoals_66, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_73_73)), &check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_71);
                        }
                        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_71 = ((MR_Word) check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_71);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__unused_imports__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 2)));
                        MR_Word check_hlds__unused_imports__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 0)));
                        MR_Word check_hlds__unused_imports__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__ShortHand_58, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__unused_imports__next_value_of_Goal_4 = check_hlds__unused_imports__SubGoal_94;

                          check_hlds__unused_imports__Goal_4 = check_hlds__unused_imports__next_value_of_Goal_4;
                        }
                        continue;
                      }
                      break;
                  }
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
check_hlds__unused_imports__proc_info_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__Visibility_6,
  MR_Integer check_hlds__unused_imports___ProcId_7,
  MR_Word check_hlds__unused_imports__ProcInfo_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    {
      check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(check_hlds__unused_imports__Visibility_6, check_hlds__unused_imports__ProcInfo_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13;

    {
      check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__unused_imports__Visibility_6,
  MR_Word check_hlds__unused_imports__ProcInfo_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_23_23;
    MR_Word check_hlds__unused_imports__VarTypes_10;
    MR_Word check_hlds__unused_imports__MaybeArgModes_11;
    MR_Word check_hlds__unused_imports__Var_15;
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16;
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__unused_imports__ProcInfo_8, &check_hlds__unused_imports__VarTypes_10);
    }
    {
      check_hlds__unused_imports__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_6));
    }
    check_hlds__unused_imports__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0;
    {
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__unused_imports__TypeCtorInfo_23_23, (MR_Word) &check_hlds__unused_imports_scalar_common_1[3], check_hlds__unused_imports__Var_15, check_hlds__unused_imports__VarTypes_10, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16);
    }
    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16);
    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(check_hlds__unused_imports__ProcInfo_8, &check_hlds__unused_imports__MaybeArgModes_11);
    }
    if ((check_hlds__unused_imports__MaybeArgModes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16;
    else
      {
        MR_Word check_hlds__unused_imports__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__MaybeArgModes_11, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__Var_17;
        MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14;

        {
          check_hlds__unused_imports__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_17, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[7]));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_17, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_50_93_95_48_5_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_17, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_6));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__unused_imports__TypeCtorInfo_23_23, check_hlds__unused_imports__Var_17, check_hlds__unused_imports__Modes_12, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14);
        }
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14);
      }
  }
}

static void MR_CALL 
check_hlds__unused_imports__pred_info_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__PredId_5,
  MR_Word check_hlds__unused_imports__PredInfo_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    {
      check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(check_hlds__unused_imports__PredInfo_6, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_7;

    {
      check_hlds__unused_imports__clause_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_7);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_7));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14;

    {
      check_hlds__unused_imports__proc_info_used_modules_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_14));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__PredInfo_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__PredStatus_8;
    MR_Word check_hlds__unused_imports__DefinedInThisModule_9;

    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__unused_imports__PredInfo_6, &check_hlds__unused_imports__PredStatus_8);
    }
    {
      check_hlds__unused_imports__DefinedInThisModule_9 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__unused_imports__PredStatus_8);
    }
    switch (check_hlds__unused_imports__DefinedInThisModule_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__TypeCtorInfo_43_43;
          MR_Word check_hlds__unused_imports__TypeCtorInfo_44_44;
          MR_Word check_hlds__unused_imports__Visibility_11;
          MR_Word check_hlds__unused_imports__Constraints_12;
          MR_Word check_hlds__unused_imports__UnivConstraints_13;
          MR_Word check_hlds__unused_imports__ExistConstraints_14;
          MR_Word check_hlds__unused_imports__ProcTable_15;
          MR_Word check_hlds__unused_imports__ClausesInfo_16;
          MR_Word check_hlds__unused_imports__Var_33;
          MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34;
          MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_36_36;
          MR_Word check_hlds__unused_imports__Var_37;
          MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38;
          MR_Word check_hlds__unused_imports__Exported_78;
          MR_Word check_hlds__unused_imports__ClausesRep_85;
          MR_Word check_hlds__unused_imports__Clauses_87;
          MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_34_34;
          MR_Box check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_36_36;
          MR_Box check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_38_38;
          MR_Word check_hlds__unused_imports___ItemNumbers_86;
          MR_Box check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_18;

          {
            check_hlds__unused_imports__Exported_78 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__PredStatus_8);
          }
          switch (check_hlds__unused_imports__Exported_78) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 0;
              break;
          }
          {
            hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__unused_imports__PredInfo_6, &check_hlds__unused_imports__Constraints_12);
          }
          check_hlds__unused_imports__UnivConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Constraints_12, (MR_Integer) 0)));
          check_hlds__unused_imports__ExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Constraints_12, (MR_Integer) 1)));
          {
            check_hlds__unused_imports__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[9]));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_11));
          }
          check_hlds__unused_imports__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
          check_hlds__unused_imports__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0;
          {
            mercury__list__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_43_43, check_hlds__unused_imports__TypeCtorInfo_44_44, check_hlds__unused_imports__Var_33, check_hlds__unused_imports__UnivConstraints_13, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_17)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_34_34);
          }
          check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_34_34);
          {
            mercury__list__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_43_43, check_hlds__unused_imports__TypeCtorInfo_44_44, check_hlds__unused_imports__Var_33, check_hlds__unused_imports__ExistConstraints_14, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34)), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_36_36);
          }
          check_hlds__unused_imports__STATE_VARIABLE_UsedModules_36_36 = ((MR_Word) check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_36_36);
          {
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__unused_imports__PredInfo_6, &check_hlds__unused_imports__ProcTable_15);
          }
          {
            check_hlds__unused_imports__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_37, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_37, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_102_111_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_37, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_11));
          }
          {
            mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__unused_imports__TypeCtorInfo_44_44, check_hlds__unused_imports__Var_37, check_hlds__unused_imports__ProcTable_15, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_36_36)), &check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_38_38);
          }
          check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38 = ((MR_Word) check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_38_38);
          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__unused_imports__PredInfo_6, &check_hlds__unused_imports__ClausesInfo_16);
          }
          {
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__unused_imports__ClausesInfo_16, &check_hlds__unused_imports__ClausesRep_85, &check_hlds__unused_imports___ItemNumbers_86);
          }
          {
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__unused_imports__ClausesRep_85, &check_hlds__unused_imports__Clauses_87);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[9], check_hlds__unused_imports__Clauses_87, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38)), &check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_18);
          }
          *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18 = ((MR_Word) check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_18);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__ConstStructArg_4,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    if (((MR_tag((MR_Word) check_hlds__unused_imports__ConstStructArg_4)) == (MR_mktag((MR_Integer) 0))))
      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9;
    else
      {
        MR_Word check_hlds__unused_imports__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ConstStructArg_4, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__ConstStructArg_4, (MR_Integer) 1)));
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12;

        {
          check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__ConsId_7, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_9, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12);
        }
        {
          check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__Type_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_10);
        }
      }
  }
}

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_3_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_10;

    {
      check_hlds__unused_imports__const_struct_arg_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_10);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_10));
  }
}

static void MR_CALL 
check_hlds__unused_imports__const_struct_used_modules_3_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_11,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ConstStruct_5, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__ConstStructArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ConstStruct_5, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ConstStruct_5, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ConstStruct_5, (MR_Integer) 3)));
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14;
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16;
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18_18;
    MR_Integer check_hlds__unused_imports___ConstNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 0)));
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16;

    {
      check_hlds__unused_imports__cons_id_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__ConsId_7, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_11, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[8], check_hlds__unused_imports__ConstStructArgs_8, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16);
    }
    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_16_16);
    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__Type_9, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18_18);
    }
    {
      check_hlds__unused_imports__mer_inst_used_modules_4_p_0((MR_Integer) 1, check_hlds__unused_imports__Inst_10, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_18_18, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__cons_id_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__ConsId_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    switch (MR_tag((MR_Word) check_hlds__unused_imports__ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__Var_43 = (MR_Word) MR_body(((MR_Word) check_hlds__unused_imports__ConsId_6), (MR_Integer) 1);
          MR_Word check_hlds__unused_imports__SymName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_43, (MR_Integer) 0)));
          MR_Integer check_hlds__unused_imports__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_43, (MR_Integer) 1)));

          {
            parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__SymName_46, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41);
          }
        }
        break;
      case (MR_Integer) 2:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 1:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unused_imports__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 1)));
              MR_Integer check_hlds__unused_imports__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 2)));
              MR_Word check_hlds__unused_imports__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 3)));

              {
                parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__SymName_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41);
              }
            }
            break;
          case (MR_Integer) 3:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 4:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 5:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 6:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 7:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 8:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 9:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 10:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 11:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 12:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 13:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 14:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 15:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 16:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 17:
            {
              MR_Word check_hlds__unused_imports__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 1)));
              MR_String check_hlds__unused_imports__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 2)));
              MR_Integer check_hlds__unused_imports__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 3)));

              {
                parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__ModuleName_45, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word check_hlds__unused_imports__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 2)));
              MR_Integer check_hlds__unused_imports__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 3)));
              MR_String check_hlds__unused_imports__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__ConsId_6, (MR_Integer) 4)));

              {
                parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__ModuleName_12, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41);
              }
            }
            break;
          case (MR_Integer) 19:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 20:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
          case (MR_Integer) 21:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_41 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_40;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__instance_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__ThisModuleName_6,
  MR_Word check_hlds__unused_imports__ClassId_7,
  MR_Word check_hlds__unused_imports__InstanceDefn_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_24,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__ClassName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassId_7, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__InstanceModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__InstanceStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 3)));
    MR_Word check_hlds__unused_imports__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 5)));
    MR_Integer check_hlds__unused_imports__ClassArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassId_7, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports___OriginalTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 4)));
    MR_Word check_hlds__unused_imports___Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 6)));
    MR_Word check_hlds__unused_imports___MaybePredProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 7)));
    MR_Word check_hlds__unused_imports___VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 8)));
    MR_Word check_hlds__unused_imports___ProofMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstanceDefn_8, (MR_Integer) 9)));

    {
      check_hlds__unused_imports__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__unused_imports__ThisModuleName_6, check_hlds__unused_imports__InstanceModuleName_12);
    }
    if (check_hlds__unused_imports__succeeded)
      {
        MR_Word check_hlds__unused_imports__TypeCtorInfo_47_47;
        MR_Word check_hlds__unused_imports__Visibility_23;
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38;
        MR_Word check_hlds__unused_imports__Var_39;
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_40_40;
        MR_Word check_hlds__unused_imports__Var_41;
        MR_Word check_hlds__unused_imports__Exported_72;
        MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_40_40;
        MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_25;

        {
          check_hlds__unused_imports__Exported_72 = hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__InstanceStatus_15);
        }
        switch (check_hlds__unused_imports__Exported_72) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unused_imports__Visibility_23 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            check_hlds__unused_imports__Visibility_23 = (MR_Integer) 0;
            break;
        }
        {
          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_23, check_hlds__unused_imports__ClassName_10, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_24, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38);
        }
        {
          check_hlds__unused_imports__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_39, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_39, 1) = ((MR_Box) (check_hlds__unused_imports__instance_used_modules_5_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_39, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_23));
        }
        check_hlds__unused_imports__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0;
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__unused_imports__TypeCtorInfo_47_47, check_hlds__unused_imports__Var_39, check_hlds__unused_imports__Types_13, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_38_38)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_40_40);
        }
        check_hlds__unused_imports__STATE_VARIABLE_UsedModules_40_40 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_40_40);
        {
          check_hlds__unused_imports__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_41, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[9]));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__instance_used_modules_5_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_41, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_23));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__unused_imports__TypeCtorInfo_47_47, check_hlds__unused_imports__Var_41, check_hlds__unused_imports__Constraints_17, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_40_40)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_25);
        }
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_25);
      }
    else
      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_24;
  }
}

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_25;

    {
      check_hlds__unused_imports__instance_used_modules_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_25);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_25));
  }
}

static void MR_CALL 
check_hlds__unused_imports__class_instances_used_modules_5_p_0(
  MR_Word check_hlds__unused_imports__ThisModuleName_6,
  MR_Word check_hlds__unused_imports__ClassId_7,
  MR_Word check_hlds__unused_imports__InstanceDefns_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Var_12;
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_12, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_12, 1) = ((MR_Box) (check_hlds__unused_imports__class_instances_used_modules_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_12, 3) = ((MR_Box) (check_hlds__unused_imports__ThisModuleName_6));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_12, 4) = ((MR_Box) (check_hlds__unused_imports__ClassId_7));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_12, check_hlds__unused_imports__InstanceDefns_8, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
  }
}

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__class_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__ClassDefn_7,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__TypeClassStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__DefinedInThisModule_10;
    MR_Integer check_hlds__unused_imports___Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 3)));
    MR_Word check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 4)));
    MR_Word check_hlds__unused_imports__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 5)));
    MR_Word check_hlds__unused_imports__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 6)));
    MR_Word check_hlds__unused_imports__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 7)));
    MR_Word check_hlds__unused_imports__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 8)));
    MR_Word check_hlds__unused_imports__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 9)));

    {
      check_hlds__unused_imports__DefinedInThisModule_10 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(check_hlds__unused_imports__TypeClassStatus_9);
    }
    switch (check_hlds__unused_imports__DefinedInThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__Visibility_11;
          MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14;
          MR_Word check_hlds__unused_imports__Var_15;
          MR_Word check_hlds__unused_imports__Var_16;
          MR_Word check_hlds__unused_imports__Exported_43;
          MR_Word check_hlds__unused_imports__Var_27;
          MR_Word check_hlds__unused_imports__Var_28;
          MR_Word check_hlds__unused_imports__Var_29;
          MR_Word check_hlds__unused_imports__Var_30;
          MR_Word check_hlds__unused_imports__Var_31;
          MR_Word check_hlds__unused_imports__Var_32;
          MR_Word check_hlds__unused_imports__Var_33;
          MR_Word check_hlds__unused_imports__Var_34;
          MR_Word check_hlds__unused_imports__Var_35;
          MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13;

          {
            check_hlds__unused_imports__Exported_43 = hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__TypeClassStatus_9);
          }
          switch (check_hlds__unused_imports__Exported_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 0;
              break;
          }
          {
            parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_11, check_hlds__unused_imports__Name_5, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14);
          }
          {
            check_hlds__unused_imports__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[9]));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__class_used_modules_4_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_11));
          }
          check_hlds__unused_imports__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 0)));
          check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 1)));
          check_hlds__unused_imports__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 2)));
          check_hlds__unused_imports__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 3)));
          check_hlds__unused_imports__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 4)));
          check_hlds__unused_imports__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 5)));
          check_hlds__unused_imports__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 6)));
          check_hlds__unused_imports__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 7)));
          check_hlds__unused_imports__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 8)));
          check_hlds__unused_imports__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ClassDefn_7, (MR_Integer) 9)));
          {
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_15, check_hlds__unused_imports__Var_16, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13);
          }
          *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__mode_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__ModeDefn_7,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_14,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_15)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__ModeStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 4)));
    MR_Word check_hlds__unused_imports__DefinedInThisModule_10;
    MR_Integer check_hlds__unused_imports___Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 3)));

    {
      check_hlds__unused_imports__DefinedInThisModule_10 = hlds__status__mode_status_defined_in_this_module_1_f_0(check_hlds__unused_imports__ModeStatus_9);
    }
    switch (check_hlds__unused_imports__DefinedInThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_15 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__Visibility_11;
          MR_Word check_hlds__unused_imports__ModeBody_12;
          MR_Word check_hlds__unused_imports__Mode_13;
          MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16;
          MR_Word check_hlds__unused_imports__Exported_28;
          MR_Word check_hlds__unused_imports__Var_22;
          MR_Word check_hlds__unused_imports__Var_23;
          MR_Word check_hlds__unused_imports__Var_24;
          MR_Word check_hlds__unused_imports__Var_25;

          {
            check_hlds__unused_imports__Exported_28 = hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__ModeStatus_9);
          }
          switch (check_hlds__unused_imports__Exported_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 0;
              break;
          }
          {
            parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_11, check_hlds__unused_imports__Name_5, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_14, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16);
          }
          check_hlds__unused_imports__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 0)));
          check_hlds__unused_imports__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 1)));
          check_hlds__unused_imports__ModeBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 2)));
          check_hlds__unused_imports__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 3)));
          check_hlds__unused_imports__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModeDefn_7, (MR_Integer) 4)));
          check_hlds__unused_imports__Mode_13 = (MR_Word) check_hlds__unused_imports__ModeBody_12;
          {
            check_hlds__unused_imports__mer_mode_used_modules_4_p_0(check_hlds__unused_imports__Visibility_11, check_hlds__unused_imports__Mode_13, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_16_16, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_15);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22;

    {
      check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_mode_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Mode_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    if (((MR_tag((MR_Word) check_hlds__unused_imports__Mode_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__unused_imports__Inst0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Mode_6, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Mode_6, (MR_Integer) 1)));
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17_17;

        {
          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Inst0_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17_17);
        }
        {
          check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Inst_9, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17_17, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13);
        }
      }
    else
      {
        MR_Word check_hlds__unused_imports__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Mode_6, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Mode_6, (MR_Integer) 1)));
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14;
        MR_Word check_hlds__unused_imports__Var_15;
        MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13;

        {
          parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Name_10, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_12, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14);
        }
        {
          check_hlds__unused_imports__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[11]));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 1) = ((MR_Box) (check_hlds__unused_imports__mer_mode_used_modules_4_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_15, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_15, check_hlds__unused_imports__Insts_11, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14_14)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13);
        }
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_13 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_13);
      }
  }
}

static void MR_CALL 
check_hlds__unused_imports__user_inst_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports___InstId_5,
  MR_Word check_hlds__unused_imports__InstDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    {
      check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(check_hlds__unused_imports__InstDefn_6, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_105_110_115_116_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__InstDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__InstStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 5)));
    MR_Word check_hlds__unused_imports__DefinedInThisModule_9;
    MR_Word check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 2)));
    MR_Word check_hlds__unused_imports__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 3)));
    MR_Word check_hlds__unused_imports__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 4)));

    {
      check_hlds__unused_imports__DefinedInThisModule_9 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__unused_imports__InstStatus_8);
    }
    switch (check_hlds__unused_imports__DefinedInThisModule_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__Visibility_10;
          MR_Word check_hlds__unused_imports__InstBody_11;
          MR_Word check_hlds__unused_imports__Exported_28;
          MR_Word check_hlds__unused_imports__Var_21;
          MR_Word check_hlds__unused_imports__Var_22;
          MR_Word check_hlds__unused_imports__Var_23;
          MR_Word check_hlds__unused_imports__Var_24;
          MR_Word check_hlds__unused_imports__Var_25;

          {
            check_hlds__unused_imports__Exported_28 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__InstStatus_8);
          }
          switch (check_hlds__unused_imports__Exported_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unused_imports__Visibility_10 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              check_hlds__unused_imports__Visibility_10 = (MR_Integer) 0;
              break;
          }
          check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 0)));
          check_hlds__unused_imports__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 1)));
          check_hlds__unused_imports__InstBody_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 2)));
          check_hlds__unused_imports__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 3)));
          check_hlds__unused_imports__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 4)));
          check_hlds__unused_imports__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstDefn_6, (MR_Integer) 5)));
          if ((check_hlds__unused_imports__InstBody_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13;
          else
            {
              MR_Word check_hlds__unused_imports__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__InstBody_11, (MR_Integer) 0)));

              {
                check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_10, check_hlds__unused_imports__Inst_12, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_13, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_14);
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22;

    {
      check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22));
  }
}

static void MR_CALL 
check_hlds__unused_imports__inst_name_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__InstName_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;

        switch (MR_tag((MR_Word) check_hlds__unused_imports__InstName_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__unused_imports__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstName_6, (MR_Integer) 0)));
              MR_Word check_hlds__unused_imports__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_31_31;
              MR_Word check_hlds__unused_imports__Var_32;
              MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_24;

              {
                parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Name_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_31_31);
              }
              {
                check_hlds__unused_imports__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_32, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[11]));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_32, 1) = ((MR_Box) (check_hlds__unused_imports__inst_name_used_modules_4_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_32, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_32, check_hlds__unused_imports__Insts_9, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_31_31)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_24);
              }
              *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_24);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unused_imports__InstA_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)));
              MR_Word check_hlds__unused_imports__InstB_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__InstName_6, (MR_Integer) 3)));
              MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_46;
              MR_Word check_hlds__unused_imports__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__InstName_6, (MR_Integer) 0)));
              MR_Word check_hlds__unused_imports__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));

              {
                check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__InstA_44, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_46);
              }
              {
                check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__InstB_45, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_46, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unused_imports__InstA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__InstName_6, (MR_Integer) 0)));
              MR_Word check_hlds__unused_imports__InstB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_29;

              {
                check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__InstA_10, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_29);
              }
              {
                check_hlds__unused_imports__mer_inst_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__InstB_11, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_29_29, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__unused_imports__SubInstName_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word check_hlds__unused_imports__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word check_hlds__unused_imports__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_InstName_6 = check_hlds__unused_imports__SubInstName_41;

                    check_hlds__unused_imports__InstName_6 = check_hlds__unused_imports__next_value_of_InstName_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__unused_imports__SubInstName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word check_hlds__unused_imports__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word check_hlds__unused_imports__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_InstName_6 = check_hlds__unused_imports__SubInstName_14;

                    check_hlds__unused_imports__InstName_6 = check_hlds__unused_imports__next_value_of_InstName_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__unused_imports__SubInstName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_InstName_6 = check_hlds__unused_imports__SubInstName_43;

                    check_hlds__unused_imports__InstName_6 = check_hlds__unused_imports__next_value_of_InstName_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__unused_imports__SubInstName_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_InstName_6 = check_hlds__unused_imports__SubInstName_42;

                    check_hlds__unused_imports__InstName_6 = check_hlds__unused_imports__next_value_of_InstName_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__unused_imports__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));

                  {
                    check_hlds__unused_imports__mer_type_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Type_22, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_24);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25_25;
                  MR_Word check_hlds__unused_imports__SubInstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Type_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__InstName_6, (MR_Integer) 1)));

                  {
                    check_hlds__unused_imports__mer_type_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Type_35, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25_25);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_InstName_6 = check_hlds__unused_imports__SubInstName_34;
                    MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_23 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_25_25;

                    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_23 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_UsedModules_0_23;
                    check_hlds__unused_imports__InstName_6 = check_hlds__unused_imports__next_value_of_InstName_6;
                  }
                  continue;
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
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13;

    {
      check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__bound_inst_info_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13;

    {
      check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22;

    {
      check_hlds__unused_imports__mer_inst_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_22));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_inst_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Inst_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;

        switch (MR_tag((MR_Word) check_hlds__unused_imports__Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__unused_imports__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21;
                break;
              case (MR_Integer) 1:
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unused_imports__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Inst_6, (MR_Integer) 0)));

              {
                check_hlds__unused_imports__mer_type_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Type_12, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unused_imports__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__Inst_6, (MR_Integer) 0)));

              if ((check_hlds__unused_imports__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21;
              else
                {
                  MR_Word check_hlds__unused_imports__Modes_49;
                  MR_Word check_hlds__unused_imports__Var_52 = (MR_Word) MR_body(((MR_Word) check_hlds__unused_imports__HOInstInfo_10), (MR_Integer) 1);
                  MR_Word check_hlds__unused_imports__Var_53;
                  MR_Word check_hlds__unused_imports__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_52, (MR_Integer) 0)));
                  MR_Word check_hlds__unused_imports__Var_50;
                  MR_Word check_hlds__unused_imports__Var_51;
                  MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_22;

                  check_hlds__unused_imports__Modes_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_52, (MR_Integer) 1)));
                  check_hlds__unused_imports__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_52, (MR_Integer) 2)));
                  check_hlds__unused_imports__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_52, (MR_Integer) 3)));
                  {
                    check_hlds__unused_imports__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_53, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_53, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_2));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_53, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_53, check_hlds__unused_imports__Modes_49, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_22);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_22);
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__unused_imports__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__unused_imports__Var_28;
                  MR_Word check_hlds__unused_imports__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports___InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 2)));
                  MR_Box check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_22;

                  {
                    check_hlds__unused_imports__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[12]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_3));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_28, check_hlds__unused_imports__BoundInsts_15, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21)), &check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_22);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = ((MR_Word) check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_22);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__unused_imports__HOInstInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));

                  if ((check_hlds__unused_imports__HOInstInfo_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21;
                  else
                    {
                      MR_Word check_hlds__unused_imports__Modes_66;
                      MR_Word check_hlds__unused_imports__Var_69 = (MR_Word) MR_body(((MR_Word) check_hlds__unused_imports__HOInstInfo_42), (MR_Integer) 1);
                      MR_Word check_hlds__unused_imports__Var_70;
                      MR_Word check_hlds__unused_imports__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_69, (MR_Integer) 0)));
                      MR_Word check_hlds__unused_imports__Var_67;
                      MR_Word check_hlds__unused_imports__Var_68;
                      MR_Box check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_22;

                      check_hlds__unused_imports__Modes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_69, (MR_Integer) 1)));
                      check_hlds__unused_imports__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_69, (MR_Integer) 2)));
                      check_hlds__unused_imports__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_69, (MR_Integer) 3)));
                      {
                        check_hlds__unused_imports__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_70, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[7]));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_70, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_4));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_70, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                      }
                      {
                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_70, check_hlds__unused_imports__Modes_66, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21)), &check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_22);
                      }
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = ((MR_Word) check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_22);
                    }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__unused_imports__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports___InstVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_Inst_6 = check_hlds__unused_imports__SubInst_17;

                    check_hlds__unused_imports__Inst_6 = check_hlds__unused_imports__next_value_of_Inst_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__unused_imports__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));

                  {
                    check_hlds__unused_imports__inst_name_used_modules_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__InstName_18, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__unused_imports__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__ArgInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_23_23;
                  MR_Word check_hlds__unused_imports__Var_24;
                  MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_22;

                  {
                    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Name_19, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_21, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_23_23);
                  }
                  {
                    check_hlds__unused_imports__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_24, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[11]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_24, 1) = ((MR_Box) (check_hlds__unused_imports__mer_inst_used_modules_4_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_24, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_24, check_hlds__unused_imports__ArgInsts_20, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_23_23)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_22);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_22 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_22);
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
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Constraint_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Constraint_6, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__ArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Constraint_6, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12;
    MR_Word check_hlds__unused_imports__Var_13;
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11;

    {
      parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__ClassName_8, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_10, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12);
    }
    {
      check_hlds__unused_imports__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 1) = ((MR_Box) (check_hlds__unused_imports__prog_constraint_used_modules_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_13, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_13, check_hlds__unused_imports__ArgTypes_9, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_12_12)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_11 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_11);
  }
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_LambdaHeadVar__3_24;

    {
      check_hlds__unused_imports__IntroducedFrom__pred__ctor_used_modules__455__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_LambdaHeadVar__3_24);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_LambdaHeadVar__3_24));
  }
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__prog_constraint_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__ctor_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Ctor_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_16,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_39_39;
    MR_Word check_hlds__unused_imports__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 3)));
    MR_Word check_hlds__unused_imports__Var_18;
    MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_19_19;
    MR_Word check_hlds__unused_imports__Var_20;
    MR_Word check_hlds__unused_imports__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 0)));
    MR_Word check_hlds__unused_imports__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 2)));
    MR_Integer check_hlds__unused_imports__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 4)));
    MR_Word check_hlds__unused_imports__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Ctor_6, (MR_Integer) 5)));
    MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_19_19;
    MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_17;

    {
      check_hlds__unused_imports__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_18, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[9]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_18, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_18, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
    }
    check_hlds__unused_imports__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0;
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__unused_imports__TypeCtorInfo_39_39, check_hlds__unused_imports__Var_18, check_hlds__unused_imports__Constraints_9, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_16)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_19_19);
    }
    check_hlds__unused_imports__STATE_VARIABLE_UsedModules_19_19 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_19_19);
    {
      check_hlds__unused_imports__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_20, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[10]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_20, 1) = ((MR_Box) (check_hlds__unused_imports__ctor_used_modules_4_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_20, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unused_imports__TypeCtorInfo_39_39, check_hlds__unused_imports__Var_20, check_hlds__unused_imports__Args_11, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_19_19)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_17);
    }
    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_17 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_17);
  }
}

static void MR_CALL 
check_hlds__unused_imports__type_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports___TypeCtor_5,
  MR_Word check_hlds__unused_imports__TypeDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    {
      check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(check_hlds__unused_imports__TypeDefn_6, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26);
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_17;

    {
      check_hlds__unused_imports__ctor_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_17);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_17));
  }
}

static void MR_CALL 
check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word check_hlds__unused_imports__TypeDefn_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__TypeStatus_8;
    MR_Word check_hlds__unused_imports__TypeBody_9;
    MR_Word check_hlds__unused_imports__DefinedInThisModule_10;

    {
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unused_imports__TypeDefn_6, &check_hlds__unused_imports__TypeStatus_8);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unused_imports__TypeDefn_6, &check_hlds__unused_imports__TypeBody_9);
    }
    {
      check_hlds__unused_imports__DefinedInThisModule_10 = hlds__status__type_status_defined_in_this_module_1_f_0(check_hlds__unused_imports__TypeStatus_8);
    }
    switch (check_hlds__unused_imports__DefinedInThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unused_imports__Visibility_11;
          MR_Word check_hlds__unused_imports__Exported_37;

          {
            check_hlds__unused_imports__Exported_37 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(check_hlds__unused_imports__TypeStatus_8);
          }
          switch (check_hlds__unused_imports__Exported_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              check_hlds__unused_imports__Visibility_11 = (MR_Integer) 0;
              break;
          }
          switch (MR_tag((MR_Word) check_hlds__unused_imports__TypeBody_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unused_imports__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 0)));
                MR_Word check_hlds__unused_imports__Var_28;
                MR_Word check_hlds__unused_imports__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 1)));
                MR_Word check_hlds__unused_imports__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 2)));
                MR_Word check_hlds__unused_imports__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 3)));
                MR_Word check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 4)));
                MR_Word check_hlds__unused_imports__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 5)));
                MR_Word check_hlds__unused_imports__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__unused_imports__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unused_imports__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 7)));
                MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_26;

                {
                  check_hlds__unused_imports__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[8]));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 1) = ((MR_Box) (check_hlds__unused_imports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_117_115_101_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_4_p_0_1));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_28, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_11));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_28, check_hlds__unused_imports__Ctors_12, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_26);
                }
                *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_26);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__unused_imports__EqvType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 0)));

                {
                  check_hlds__unused_imports__mer_type_used_modules_4_p_0(check_hlds__unused_imports__Visibility_11, check_hlds__unused_imports__EqvType_21, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__TypeBody_9, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25;
                  break;
                case (MR_Integer) 1:
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_26 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_25;
                  break;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_5(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13;

    {
      check_hlds__unused_imports__mer_mode_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27;

    {
      check_hlds__unused_imports__mer_type_used_modules_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_27));
  }
}

static void MR_CALL 
check_hlds__unused_imports__mer_type_used_modules_4_p_0(
  MR_Word check_hlds__unused_imports__Visibility_5,
  MR_Word check_hlds__unused_imports__Type_6,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;

        switch (MR_tag((MR_Word) check_hlds__unused_imports__Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unused_imports__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Type_6, (MR_Integer) 0)));
              MR_Word check_hlds__unused_imports__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Type_6, (MR_Integer) 1)));
              MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_39_39;
              MR_Word check_hlds__unused_imports__Var_40;
              MR_Word check_hlds__unused_imports__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Type_6, (MR_Integer) 2)));
              MR_Box check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_27;

              {
                parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__Name_10, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26, &check_hlds__unused_imports__STATE_VARIABLE_UsedModules_39_39);
              }
              {
                check_hlds__unused_imports__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_40, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_40, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_2));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_40, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_40, check_hlds__unused_imports__Args_11, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_39_39)), &check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_27);
              }
              *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = ((MR_Word) check_hlds__unused_imports__conv3_STATE_VARIABLE_UsedModules_27);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unused_imports__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unused_imports__Type_6, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) check_hlds__unused_imports__BuiltinType_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__unused_imports__BuiltinType_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__unused_imports__CharModuleName_15;

                        {
                          check_hlds__unused_imports__CharModuleName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__unused_imports_scalar_common_8[0]);
                        }
                        {
                          parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(check_hlds__unused_imports__Visibility_5, check_hlds__unused_imports__CharModuleName_15, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26, check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__unused_imports__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_31;
                  MR_Word check_hlds__unused_imports__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 2)));
                  MR_Box check_hlds__unused_imports__conv9_STATE_VARIABLE_UsedModules_27;

                  {
                    check_hlds__unused_imports__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_31, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_31, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_5));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_31, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_31, check_hlds__unused_imports__ArgTypes_20, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26)), &check_hlds__unused_imports__conv9_STATE_VARIABLE_UsedModules_27);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = ((MR_Word) check_hlds__unused_imports__conv9_STATE_VARIABLE_UsedModules_27);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__unused_imports__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 3)));
                  MR_Word check_hlds__unused_imports__Var_33;
                  MR_Word check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34;
                  MR_Word check_hlds__unused_imports__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 4)));
                  MR_Box check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_34_34;

                  {
                    check_hlds__unused_imports__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_3));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_33, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_33, check_hlds__unused_imports__Args_42, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26)), &check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_34_34);
                  }
                  check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34 = ((MR_Word) check_hlds__unused_imports__conv5_STATE_VARIABLE_UsedModules_34_34);
                  if ((check_hlds__unused_imports__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34;
                  else
                    {
                      MR_Word check_hlds__unused_imports__Modes_70;
                      MR_Word check_hlds__unused_imports__Var_73 = (MR_Word) MR_body(((MR_Word) check_hlds__unused_imports__HOInstInfo_17), (MR_Integer) 1);
                      MR_Word check_hlds__unused_imports__Var_74;
                      MR_Word check_hlds__unused_imports__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_73, (MR_Integer) 0)));
                      MR_Word check_hlds__unused_imports__Var_71;
                      MR_Word check_hlds__unused_imports__Var_72;
                      MR_Box check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_27;

                      check_hlds__unused_imports__Modes_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_73, (MR_Integer) 1)));
                      check_hlds__unused_imports__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_73, (MR_Integer) 2)));
                      check_hlds__unused_imports__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_73, (MR_Integer) 3)));
                      {
                        check_hlds__unused_imports__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_74, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[7]));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_74, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_4));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_74, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                      }
                      {
                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_74, check_hlds__unused_imports__Modes_70, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_34_34)), &check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_27);
                      }
                      *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = ((MR_Word) check_hlds__unused_imports__conv7_STATE_VARIABLE_UsedModules_27);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__unused_imports__Var_29;
                  MR_Word check_hlds__unused_imports__ArgTypes_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 2)));
                  MR_Word check_hlds__unused_imports__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 3)));
                  MR_Box check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_27;

                  {
                    check_hlds__unused_imports__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_3[6]));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 1) = ((MR_Box) (check_hlds__unused_imports__mer_type_used_modules_4_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 3) = ((MR_Box) (check_hlds__unused_imports__Visibility_5));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0, check_hlds__unused_imports__Var_29, check_hlds__unused_imports__ArgTypes_43, ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_UsedModules_0_26)), &check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_27);
                  }
                  *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_27 = ((MR_Word) check_hlds__unused_imports__conv1_STATE_VARIABLE_UsedModules_27);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__unused_imports__ArgType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 1)));
                  MR_Word check_hlds__unused_imports__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Type_6, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unused_imports__next_value_of_Type_6 = check_hlds__unused_imports__ArgType_24;

                    check_hlds__unused_imports__Type_6 = check_hlds__unused_imports__next_value_of_Type_6;
                  }
                  continue;
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
check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(
  MR_Word check_hlds__unused_imports__ModuleName_6,
  MR_Word check_hlds__unused_imports__ThisAvail_7,
  MR_Word check_hlds__unused_imports__PrevAvail_8,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Msgs_0_19,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Msgs_20)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__ThisSection_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ThisAvail_7, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ThisImportOrUse_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ThisAvail_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__PrevSection_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__PrevAvail_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__PrevImportOrUse_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__PrevAvail_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__PrevContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__PrevAvail_8, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports___ThisContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ThisAvail_7, (MR_Integer) 1)));

    check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__PrevSection_13 == (MR_Integer) 1);
    if (check_hlds__unused_imports__succeeded)
      check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__ThisSection_10 == (MR_Integer) 0);
    if (!(check_hlds__unused_imports__succeeded))
      {
        check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__PrevImportOrUse_14 == (MR_Integer) 1);
        if (check_hlds__unused_imports__succeeded)
          check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__ThisImportOrUse_11 == (MR_Integer) 0);
      }
    if (check_hlds__unused_imports__succeeded)
      *check_hlds__unused_imports__STATE_VARIABLE_Msgs_20 = check_hlds__unused_imports__STATE_VARIABLE_Msgs_0_19;
    else
      {
        MR_String check_hlds__unused_imports__DeclName_16;
        MR_Word check_hlds__unused_imports__Pieces_17;
        MR_Word check_hlds__unused_imports__Msg_18;
        MR_Word check_hlds__unused_imports__Var_23;
        MR_Word check_hlds__unused_imports__Var_24;
        MR_Word check_hlds__unused_imports__Var_25;
        MR_Word check_hlds__unused_imports__Var_28;
        MR_Word check_hlds__unused_imports__Var_31;
        MR_Word check_hlds__unused_imports__Var_32;
        MR_Word check_hlds__unused_imports__Var_39;
        MR_Word check_hlds__unused_imports__Var_40;

        {
          check_hlds__unused_imports__DeclName_16 = parse_tree__prog_item__import_or_use_decl_name_1_f_0(check_hlds__unused_imports__PrevImportOrUse_14);
        }
        {
          check_hlds__unused_imports__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_24, 1) = ((MR_Box) (check_hlds__unused_imports__DeclName_16));
        }
        {
          check_hlds__unused_imports__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_32, 1) = ((MR_Box) (check_hlds__unused_imports__ModuleName_6));
        }
        {
          check_hlds__unused_imports__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_31, 0) = ((MR_Box) (check_hlds__unused_imports__Var_32));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[8])));
        }
        {
          check_hlds__unused_imports__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[21])));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_28, 1) = ((MR_Box) (check_hlds__unused_imports__Var_31));
        }
        {
          check_hlds__unused_imports__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_25, 1) = ((MR_Box) (check_hlds__unused_imports__Var_28));
        }
        {
          check_hlds__unused_imports__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_23, 0) = ((MR_Box) (check_hlds__unused_imports__Var_24));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_23, 1) = ((MR_Box) (check_hlds__unused_imports__Var_25));
        }
        {
          check_hlds__unused_imports__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[20])));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Pieces_17, 1) = ((MR_Box) (check_hlds__unused_imports__Var_23));
        }
        {
          check_hlds__unused_imports__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_40, 0) = ((MR_Box) (check_hlds__unused_imports__Pieces_17));
        }
        {
          check_hlds__unused_imports__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_39, 0) = ((MR_Box) (check_hlds__unused_imports__Var_40));
          MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unused_imports__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Msg_18, 0) = ((MR_Box) (check_hlds__unused_imports__PrevContext_15));
          MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Msg_18, 1) = ((MR_Box) (check_hlds__unused_imports__Var_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unused_imports__STATE_VARIABLE_Msgs_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unused_imports__Msg_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_Msgs_0_19));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unused_imports__compare_avails_3_p_0(
  MR_Word check_hlds__unused_imports__AvailA_4,
  MR_Word check_hlds__unused_imports__AvailB_5,
  MR_Word * check_hlds__unused_imports__Result_6)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__SectionA_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailA_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ImportOrUseA_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailA_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ContextA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailA_4, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__SectionB_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailB_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ImportOrUseB_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailB_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ContextB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailB_5, (MR_Integer) 1)));

    switch (check_hlds__unused_imports__SectionA_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (check_hlds__unused_imports__SectionB_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (check_hlds__unused_imports__ImportOrUseA_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (check_hlds__unused_imports__ImportOrUseB_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__term____Compare____context_0_0(check_hlds__unused_imports__Result_6, check_hlds__unused_imports__ContextA_9, check_hlds__unused_imports__ContextB_12);
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (check_hlds__unused_imports__ImportOrUseB_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__term____Compare____context_0_0(check_hlds__unused_imports__Result_6, check_hlds__unused_imports__ContextA_9, check_hlds__unused_imports__ContextB_12);
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (check_hlds__unused_imports__SectionB_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            switch (check_hlds__unused_imports__ImportOrUseA_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (check_hlds__unused_imports__ImportOrUseB_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__term____Compare____context_0_0(check_hlds__unused_imports__Result_6, check_hlds__unused_imports__ContextA_9, check_hlds__unused_imports__ContextB_12);
                    }
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (check_hlds__unused_imports__ImportOrUseB_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__unused_imports__Result_6 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__term____Compare____context_0_0(check_hlds__unused_imports__Result_6, check_hlds__unused_imports__ContextA_9, check_hlds__unused_imports__ContextB_12);
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
}

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_Result_6;

    {
      check_hlds__unused_imports__compare_avails_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_Result_6);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_Result_6));
  }
}

static void MR_CALL 
check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(
  MR_Word check_hlds__unused_imports__TopModuleName_8,
  MR_Word check_hlds__unused_imports__UnusedAnywhereImports_9,
  MR_Word check_hlds__unused_imports__UnusedInterfaceImports_10,
  MR_Word check_hlds__unused_imports__ModuleName_11,
  MR_Word check_hlds__unused_imports__AvailEntry_12,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_0_26,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Section_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailEntry_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__ImportOrUse_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailEntry_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__unused_imports__Avails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__AvailEntry_12, (MR_Integer) 1)));
    MR_Word check_hlds__unused_imports__SortedAvails_17;

    {
      mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0, (MR_Word) &check_hlds__unused_imports_scalar_common_2[7], check_hlds__unused_imports__Avails_16, &check_hlds__unused_imports__SortedAvails_17);
    }
    if ((check_hlds__unused_imports__SortedAvails_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__unused_imports__STATE_VARIABLE_Specs_27 = check_hlds__unused_imports__STATE_VARIABLE_Specs_0_26;
    else
      {
        MR_Word check_hlds__unused_imports__HeadAvail_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__SortedAvails_17, (MR_Integer) 0)));
        MR_Word check_hlds__unused_imports__HeadContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadAvail_18, (MR_Integer) 1)));
        MR_Word check_hlds__unused_imports__AnywhereWarning_24;
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_30_30;
        MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32;
        MR_Word check_hlds__unused_imports__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__SortedAvails_17, (MR_Integer) 1)));
        MR_Word check_hlds__unused_imports__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadAvail_18, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word check_hlds__unused_imports__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__HeadAvail_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__unused_imports__TypeCtorInfo_40_40;

        {
          check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(check_hlds__unused_imports__ModuleName_11, check_hlds__unused_imports__SortedAvails_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unused_imports__STATE_VARIABLE_Specs_0_26, &check_hlds__unused_imports__STATE_VARIABLE_Specs_30_30);
        }
        {
          check_hlds__unused_imports__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (check_hlds__unused_imports__ModuleName_11)), check_hlds__unused_imports__UnusedAnywhereImports_9);
        }
        if (check_hlds__unused_imports__succeeded)
          {
            MR_Word check_hlds__unused_imports__AnywhereSpec_23;

            {
              check_hlds__unused_imports__AnywhereSpec_23 = check_hlds__unused_imports__generate_unused_warning_5_f_0(check_hlds__unused_imports__TopModuleName_8, check_hlds__unused_imports__ModuleName_11, check_hlds__unused_imports__ImportOrUse_15, check_hlds__unused_imports__HeadContext_22, (MR_Integer) 0);
            }
            {
              check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (check_hlds__unused_imports__AnywhereSpec_23));
              MR_hl_field(MR_mktag(1), check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_Specs_30_30));
            }
            check_hlds__unused_imports__AnywhereWarning_24 = (MR_Integer) 1;
          }
        else
          {
            check_hlds__unused_imports__AnywhereWarning_24 = (MR_Integer) 0;
            check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32 = check_hlds__unused_imports__STATE_VARIABLE_Specs_30_30;
          }
        check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__Section_14 == (MR_Integer) 0);
        if (check_hlds__unused_imports__succeeded)
          {
            check_hlds__unused_imports__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              check_hlds__unused_imports__succeeded = mercury__set__member_2_p_0(check_hlds__unused_imports__TypeCtorInfo_40_40, ((MR_Box) (check_hlds__unused_imports__ModuleName_11)), check_hlds__unused_imports__UnusedInterfaceImports_10);
            }
            if (check_hlds__unused_imports__succeeded)
              check_hlds__unused_imports__succeeded = (check_hlds__unused_imports__AnywhereWarning_24 == (MR_Integer) 0);
          }
        if (check_hlds__unused_imports__succeeded)
          {
            MR_Word check_hlds__unused_imports__InterfaceSpec_25;

            {
              check_hlds__unused_imports__InterfaceSpec_25 = check_hlds__unused_imports__generate_unused_warning_5_f_0(check_hlds__unused_imports__TopModuleName_8, check_hlds__unused_imports__ModuleName_11, check_hlds__unused_imports__ImportOrUse_15, check_hlds__unused_imports__HeadContext_22, (MR_Integer) 1);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__unused_imports__STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unused_imports__InterfaceSpec_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32));
            }
          }
        else
          *check_hlds__unused_imports__STATE_VARIABLE_Specs_27 = check_hlds__unused_imports__STATE_VARIABLE_Specs_32_32;
      }
  }
}

static MR_Word MR_CALL 
check_hlds__unused_imports__generate_unused_warning_5_f_0(
  MR_Word check_hlds__unused_imports__TopModuleName_7,
  MR_Word check_hlds__unused_imports__UnusedModuleName_8,
  MR_Word check_hlds__unused_imports__ImportOrUse_9,
  MR_Word check_hlds__unused_imports__Context_10,
  MR_Word check_hlds__unused_imports__AnywhereOrInterface_11)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__Spec_12;
    MR_String check_hlds__unused_imports__DeclInTheLocn_13;
    MR_String check_hlds__unused_imports__NotUsedInTheLocn_14;
    MR_String check_hlds__unused_imports__ImportOrUseDeclName_15;
    MR_Word check_hlds__unused_imports__Pieces_16;
    MR_Word check_hlds__unused_imports__Msg_17;
    MR_Word check_hlds__unused_imports__Var_20;
    MR_Word check_hlds__unused_imports__Var_21;
    MR_Word check_hlds__unused_imports__Var_22;
    MR_Word check_hlds__unused_imports__Var_25;
    MR_Word check_hlds__unused_imports__Var_27;
    MR_Word check_hlds__unused_imports__Var_30;
    MR_Word check_hlds__unused_imports__Var_31;
    MR_Word check_hlds__unused_imports__Var_32;
    MR_Word check_hlds__unused_imports__Var_35;
    MR_Word check_hlds__unused_imports__Var_36;
    MR_Word check_hlds__unused_imports__Var_37;
    MR_Word check_hlds__unused_imports__Var_40;
    MR_Word check_hlds__unused_imports__Var_41;
    MR_Word check_hlds__unused_imports__Var_42;
    MR_Word check_hlds__unused_imports__Var_45;
    MR_Word check_hlds__unused_imports__Var_48;
    MR_Word check_hlds__unused_imports__Var_49;
    MR_Word check_hlds__unused_imports__Var_56;
    MR_Word check_hlds__unused_imports__Var_57;
    MR_Word check_hlds__unused_imports__Var_61;

    switch (check_hlds__unused_imports__AnywhereOrInterface_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__unused_imports__DeclInTheLocn_13 = (MR_String) "";
          check_hlds__unused_imports__NotUsedInTheLocn_14 = (MR_String) "anywhere in the module";
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__unused_imports__DeclInTheLocn_13 = (MR_String) "in the interface";
          check_hlds__unused_imports__NotUsedInTheLocn_14 = (MR_String) "in the interface";
        }
        break;
    }
    {
      check_hlds__unused_imports__ImportOrUseDeclName_15 = parse_tree__prog_item__import_or_use_decl_name_1_f_0(check_hlds__unused_imports__ImportOrUse_9);
    }
    {
      check_hlds__unused_imports__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_21, 1) = ((MR_Box) (check_hlds__unused_imports__TopModuleName_7));
    }
    {
      check_hlds__unused_imports__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_31, 1) = ((MR_Box) (check_hlds__unused_imports__UnusedModuleName_8));
    }
    {
      check_hlds__unused_imports__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_36, 1) = ((MR_Box) (check_hlds__unused_imports__ImportOrUseDeclName_15));
    }
    {
      check_hlds__unused_imports__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_41, 1) = ((MR_Box) (check_hlds__unused_imports__DeclInTheLocn_13));
    }
    {
      check_hlds__unused_imports__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_49, 1) = ((MR_Box) (check_hlds__unused_imports__NotUsedInTheLocn_14));
    }
    {
      check_hlds__unused_imports__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_48, 0) = ((MR_Box) (check_hlds__unused_imports__Var_49));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[10])));
    }
    {
      check_hlds__unused_imports__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_45, 1) = ((MR_Box) (check_hlds__unused_imports__Var_48));
    }
    {
      check_hlds__unused_imports__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_42, 1) = ((MR_Box) (check_hlds__unused_imports__Var_45));
    }
    {
      check_hlds__unused_imports__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_40, 0) = ((MR_Box) (check_hlds__unused_imports__Var_41));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_40, 1) = ((MR_Box) (check_hlds__unused_imports__Var_42));
    }
    {
      check_hlds__unused_imports__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_37, 1) = ((MR_Box) (check_hlds__unused_imports__Var_40));
    }
    {
      check_hlds__unused_imports__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_35, 0) = ((MR_Box) (check_hlds__unused_imports__Var_36));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_35, 1) = ((MR_Box) (check_hlds__unused_imports__Var_37));
    }
    {
      check_hlds__unused_imports__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_32, 1) = ((MR_Box) (check_hlds__unused_imports__Var_35));
    }
    {
      check_hlds__unused_imports__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_30, 0) = ((MR_Box) (check_hlds__unused_imports__Var_31));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_30, 1) = ((MR_Box) (check_hlds__unused_imports__Var_32));
    }
    {
      check_hlds__unused_imports__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_27, 1) = ((MR_Box) (check_hlds__unused_imports__Var_30));
    }
    {
      check_hlds__unused_imports__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_25, 1) = ((MR_Box) (check_hlds__unused_imports__Var_27));
    }
    {
      check_hlds__unused_imports__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_22, 1) = ((MR_Box) (check_hlds__unused_imports__Var_25));
    }
    {
      check_hlds__unused_imports__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_20, 0) = ((MR_Box) (check_hlds__unused_imports__Var_21));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_20, 1) = ((MR_Box) (check_hlds__unused_imports__Var_22));
    }
    {
      check_hlds__unused_imports__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Pieces_16, 1) = ((MR_Box) (check_hlds__unused_imports__Var_20));
    }
    {
      check_hlds__unused_imports__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_57, 0) = ((MR_Box) (check_hlds__unused_imports__Pieces_16));
    }
    {
      check_hlds__unused_imports__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_56, 0) = ((MR_Box) (check_hlds__unused_imports__Var_57));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unused_imports__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Msg_17, 0) = ((MR_Box) (check_hlds__unused_imports__Context_10));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Msg_17, 1) = ((MR_Box) (check_hlds__unused_imports__Var_56));
    }
    {
      check_hlds__unused_imports__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_61, 0) = ((MR_Box) (check_hlds__unused_imports__Msg_17));
      MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unused_imports__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_12, 2) = ((MR_Box) (check_hlds__unused_imports__Var_61));
    }
    return check_hlds__unused_imports__Spec_12;
  }
}

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_Msgs_20;

    {
      check_hlds__unused_imports__add_msg_if_avail_as_general_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv0_STATE_VARIABLE_Msgs_20);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_Msgs_20));
  }
}

static void MR_CALL 
check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__HeadVar__2_2,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;

        if ((check_hlds__unused_imports__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__unused_imports__STATE_VARIABLE_Specs_5 = check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Word check_hlds__unused_imports__TypeCtorInfo_63_63;
            MR_Word check_hlds__unused_imports__Avail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__unused_imports__Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__unused_imports__PrevMsgs_16;
            MR_Word check_hlds__unused_imports__Var_29;
            MR_Word check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55;
            MR_Word check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_56_56;
            MR_Box check_hlds__unused_imports__conv1_PrevMsgs_16;

            {
              check_hlds__unused_imports__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 1) = ((MR_Box) (check_hlds__unused_imports__maybe_generate_redundant_avail_warnings_5_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 3) = ((MR_Box) (check_hlds__unused_imports__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_29, 4) = ((MR_Box) (check_hlds__unused_imports__Avail_12));
            }
            check_hlds__unused_imports__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0;
            {
              mercury__list__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_63_63, (MR_Word) &check_hlds__unused_imports_scalar_common_1[1], check_hlds__unused_imports__Var_29, check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__unused_imports__conv1_PrevMsgs_16);
            }
            check_hlds__unused_imports__PrevMsgs_16 = ((MR_Word) check_hlds__unused_imports__conv1_PrevMsgs_16);
            if ((check_hlds__unused_imports__PrevMsgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word check_hlds__unused_imports__Var_57;

                {
                  check_hlds__unused_imports__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_57, 0) = ((MR_Box) (check_hlds__unused_imports__Avail_12));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__unused_imports__TypeCtorInfo_63_63, check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3, check_hlds__unused_imports__Var_57);
                }
                check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55 = check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4;
              }
            else
              {
                MR_Word check_hlds__unused_imports__ImportOrUse_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Avail_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unused_imports__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Avail_12, (MR_Integer) 1)));
                MR_String check_hlds__unused_imports__DeclName_22;
                MR_Word check_hlds__unused_imports__MainPieces_23;
                MR_Word check_hlds__unused_imports__MainMsg_24;
                MR_Word check_hlds__unused_imports__Spec_25;
                MR_Word check_hlds__unused_imports__Var_33;
                MR_Word check_hlds__unused_imports__Var_34;
                MR_Word check_hlds__unused_imports__Var_35;
                MR_Word check_hlds__unused_imports__Var_38;
                MR_Word check_hlds__unused_imports__Var_41;
                MR_Word check_hlds__unused_imports__Var_42;
                MR_Word check_hlds__unused_imports__Var_49;
                MR_Word check_hlds__unused_imports__Var_50;
                MR_Word check_hlds__unused_imports__Var_54;
                MR_Word check_hlds__unused_imports___Section_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Avail_12, (MR_Integer) 0)))) & (MR_Integer) 1);

                {
                  check_hlds__unused_imports__DeclName_22 = parse_tree__prog_item__import_or_use_decl_name_1_f_0(check_hlds__unused_imports__ImportOrUse_20);
                }
                {
                  check_hlds__unused_imports__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                  MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_34, 1) = ((MR_Box) (check_hlds__unused_imports__DeclName_22));
                }
                {
                  check_hlds__unused_imports__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), check_hlds__unused_imports__Var_42, 1) = ((MR_Box) (check_hlds__unused_imports__HeadVar__1_1));
                }
                {
                  check_hlds__unused_imports__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_41, 0) = ((MR_Box) (check_hlds__unused_imports__Var_42));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__unused_imports_scalar_common_1[6])));
                }
                {
                  check_hlds__unused_imports__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[13])));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_38, 1) = ((MR_Box) (check_hlds__unused_imports__Var_41));
                }
                {
                  check_hlds__unused_imports__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[12])));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_35, 1) = ((MR_Box) (check_hlds__unused_imports__Var_38));
                }
                {
                  check_hlds__unused_imports__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_33, 0) = ((MR_Box) (check_hlds__unused_imports__Var_34));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_33, 1) = ((MR_Box) (check_hlds__unused_imports__Var_35));
                }
                {
                  check_hlds__unused_imports__MainPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__MainPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__unused_imports_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__MainPieces_23, 1) = ((MR_Box) (check_hlds__unused_imports__Var_33));
                }
                {
                  check_hlds__unused_imports__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_50, 0) = ((MR_Box) (check_hlds__unused_imports__MainPieces_23));
                }
                {
                  check_hlds__unused_imports__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_49, 0) = ((MR_Box) (check_hlds__unused_imports__Var_50));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__unused_imports__MainMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__MainMsg_24, 0) = ((MR_Box) (check_hlds__unused_imports__Context_21));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__MainMsg_24, 1) = ((MR_Box) (check_hlds__unused_imports__Var_49));
                }
                {
                  check_hlds__unused_imports__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_54, 0) = ((MR_Box) (check_hlds__unused_imports__MainMsg_24));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__Var_54, 1) = ((MR_Box) (check_hlds__unused_imports__PrevMsgs_16));
                }
                {
                  check_hlds__unused_imports__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
                  MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Spec_25, 2) = ((MR_Box) (check_hlds__unused_imports__Var_54));
                }
                {
                  check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (check_hlds__unused_imports__Spec_25));
                  MR_hl_field(MR_mktag(1), check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4));
                }
                check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_56_56 = check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unused_imports__next_value_of_HeadVar__2_2 = check_hlds__unused_imports__Avails_13;
              MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_PrevAvails_0_3 = check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_56_56;
              MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_Specs_0_4 = check_hlds__unused_imports__STATE_VARIABLE_Specs_55_55;

              check_hlds__unused_imports__STATE_VARIABLE_Specs_0_4 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_Specs_0_4;
              check_hlds__unused_imports__STATE_VARIABLE_PrevAvails_0_3 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_PrevAvails_0_3;
              check_hlds__unused_imports__HeadVar__2_2 = check_hlds__unused_imports__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_2_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_Specs_27;

    {
      check_hlds__unused_imports__maybe_warn_about_avail_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv0_STATE_VARIABLE_Specs_27);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_Specs_27));
  }
}

void MR_CALL 
check_hlds__unused_imports__warn_about_unused_imports_2_p_0(
  MR_Word check_hlds__unused_imports__ModuleInfo_3,
  MR_Word * check_hlds__unused_imports__Specs_4)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_26_26;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_27_27;
    MR_Word check_hlds__unused_imports__ModuleName_5;
    MR_Word check_hlds__unused_imports__UsedModules_6;
    MR_Word check_hlds__unused_imports__AvailModuleMap_7;
    MR_Word check_hlds__unused_imports__ModuleAvails_8;
    MR_Word check_hlds__unused_imports__AvailAnywhereCord_9;
    MR_Word check_hlds__unused_imports__AvailInterfaceCord_10;
    MR_Word check_hlds__unused_imports__AvailAnywhereModules_11;
    MR_Word check_hlds__unused_imports__AvailInterfaceModules_12;
    MR_Word check_hlds__unused_imports__UsedInInterface_13;
    MR_Word check_hlds__unused_imports__UsedInImplementation_14;
    MR_Word check_hlds__unused_imports__UsedAnywhere_15;
    MR_Word check_hlds__unused_imports__UnusedAnywhereImports_16;
    MR_Word check_hlds__unused_imports__UnusedInterfaceImports_17;
    MR_Word check_hlds__unused_imports__Var_18;
    MR_Word check_hlds__unused_imports__Var_19;
    MR_Word check_hlds__unused_imports__Var_20;
    MR_Word check_hlds__unused_imports__Var_21;
    MR_Word check_hlds__unused_imports__Var_22;
    MR_Box check_hlds__unused_imports__conv1_Specs_4;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__ModuleName_5);
    }
    {
      check_hlds__unused_imports__find_all_non_warn_modules_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__UsedModules_6);
    }
    {
      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__AvailModuleMap_7);
    }
    check_hlds__unused_imports__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    check_hlds__unused_imports__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0;
    {
      mercury__map__to_assoc_list_2_p_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__TypeCtorInfo_27_27, check_hlds__unused_imports__AvailModuleMap_7, &check_hlds__unused_imports__ModuleAvails_8);
    }
    {
      check_hlds__unused_imports__Var_18 = mercury__cord__init_0_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26);
    }
    {
      check_hlds__unused_imports__Var_19 = mercury__cord__init_0_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26);
    }
    {
      check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(check_hlds__unused_imports__ModuleAvails_8, check_hlds__unused_imports__Var_18, &check_hlds__unused_imports__AvailAnywhereCord_9, check_hlds__unused_imports__Var_19, &check_hlds__unused_imports__AvailInterfaceCord_10);
    }
    {
      check_hlds__unused_imports__Var_20 = mercury__cord__list_1_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__AvailAnywhereCord_9);
    }
    {
      mercury__set__sorted_list_to_set_2_p_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__Var_20, &check_hlds__unused_imports__AvailAnywhereModules_11);
    }
    {
      check_hlds__unused_imports__Var_21 = mercury__cord__list_1_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__AvailInterfaceCord_10);
    }
    {
      mercury__set__sorted_list_to_set_2_p_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__Var_21, &check_hlds__unused_imports__AvailInterfaceModules_12);
    }
    check_hlds__unused_imports__UsedInInterface_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__UsedModules_6, (MR_Integer) 0)));
    check_hlds__unused_imports__UsedInImplementation_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__UsedModules_6, (MR_Integer) 1)));
    {
      check_hlds__unused_imports__UsedAnywhere_15 = mercury__set__union_2_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__UsedInInterface_13, check_hlds__unused_imports__UsedInImplementation_14);
    }
    {
      check_hlds__unused_imports__UnusedAnywhereImports_16 = mercury__set__difference_2_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__AvailAnywhereModules_11, check_hlds__unused_imports__UsedAnywhere_15);
    }
    {
      check_hlds__unused_imports__UnusedInterfaceImports_17 = mercury__set__difference_2_f_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__AvailInterfaceModules_12, check_hlds__unused_imports__UsedInInterface_13);
    }
    {
      check_hlds__unused_imports__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 1) = ((MR_Box) (check_hlds__unused_imports__warn_about_unused_imports_2_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 3) = ((MR_Box) (check_hlds__unused_imports__ModuleName_5));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 4) = ((MR_Box) (check_hlds__unused_imports__UnusedAnywhereImports_16));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_22, 5) = ((MR_Box) (check_hlds__unused_imports__UnusedInterfaceImports_17));
    }
    {
      mercury__map__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_26_26, check_hlds__unused_imports__TypeCtorInfo_27_27, (MR_Word) &check_hlds__unused_imports_scalar_common_1[0], check_hlds__unused_imports__Var_22, check_hlds__unused_imports__AvailModuleMap_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__unused_imports__conv1_Specs_4);
    }
    *check_hlds__unused_imports__Specs_4 = ((MR_Word) check_hlds__unused_imports__conv1_Specs_4);
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_8(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv14_HeadVar__4_4;

    {
      parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv14_HeadVar__4_4);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv14_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_7(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv12_STATE_VARIABLE_UsedModules_11;

    {
      check_hlds__unused_imports__class_instances_used_modules_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv12_STATE_VARIABLE_UsedModules_11);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv12_STATE_VARIABLE_UsedModules_11));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_6(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv10_STATE_VARIABLE_UsedModules_13;

    {
      check_hlds__unused_imports__class_used_modules_4_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv10_STATE_VARIABLE_UsedModules_13);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv10_STATE_VARIABLE_UsedModules_13));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_5(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_18;

    {
      check_hlds__unused_imports__pred_info_used_modules_4_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_18);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv8_STATE_VARIABLE_UsedModules_18));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_4(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box * check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_12;

    {
      check_hlds__unused_imports__const_struct_used_modules_3_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), &check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_12);
    }
    *check_hlds__unused_imports__wrapper_arg_3 = ((MR_Box) (check_hlds__unused_imports__conv6_STATE_VARIABLE_UsedModules_12));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_3(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_15;

    {
      check_hlds__unused_imports__mode_used_modules_4_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_15);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv4_STATE_VARIABLE_UsedModules_15));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_2(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_14;

    {
      check_hlds__unused_imports__user_inst_used_modules_4_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_14);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv2_STATE_VARIABLE_UsedModules_14));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_1(
  MR_Box check_hlds__unused_imports__closure_arg,
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3,
  MR_Box * check_hlds__unused_imports__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unused_imports__closure = check_hlds__unused_imports__closure_arg;
    MR_Word check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_26;

    {
      check_hlds__unused_imports__type_used_modules_4_p_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3), &check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_26);
    }
    *check_hlds__unused_imports__wrapper_arg_4 = ((MR_Box) (check_hlds__unused_imports__conv0_STATE_VARIABLE_UsedModules_26));
  }
}

static void MR_CALL 
check_hlds__unused_imports__find_all_non_warn_modules_2_p_0(
  MR_Word check_hlds__unused_imports__ModuleInfo_3,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_UsedModules_28)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_82_82;
    MR_Word check_hlds__unused_imports__TypeCtorInfo_109_109;
    MR_Word check_hlds__unused_imports__UsedModulesInit_5;
    MR_Word check_hlds__unused_imports__TypeTable_6;
    MR_Word check_hlds__unused_imports__UsedModulesTypeCtor_7;
    MR_Word check_hlds__unused_imports__InstTable_8;
    MR_Word check_hlds__unused_imports__UserInstTable_9;
    MR_Word check_hlds__unused_imports__UsedModulesUserInst_10;
    MR_Word check_hlds__unused_imports__ModeTable_11;
    MR_Word check_hlds__unused_imports__ModeDefns_12;
    MR_Word check_hlds__unused_imports__UsedModulesMode_13;
    MR_Word check_hlds__unused_imports__ConstStructDb_14;
    MR_Word check_hlds__unused_imports__ConstStructs_15;
    MR_Word check_hlds__unused_imports__UsedModulesConstStruct_16;
    MR_Word check_hlds__unused_imports__PredTable_17;
    MR_Word check_hlds__unused_imports__UsedModulesPredInfo_18;
    MR_Word check_hlds__unused_imports__ClassTable_19;
    MR_Word check_hlds__unused_imports__UsedModulesClass_20;
    MR_Word check_hlds__unused_imports__ThisModuleName_21;
    MR_Word check_hlds__unused_imports__InstanceTable_22;
    MR_Word check_hlds__unused_imports__UsedModulesInstance_23;
    MR_Word check_hlds__unused_imports__ImplicitImports_24;
    MR_Word check_hlds__unused_imports__Var_42;
    MR_Box check_hlds__unused_imports__conv1_UsedModulesTypeCtor_7;
    MR_Box check_hlds__unused_imports__conv3_UsedModulesUserInst_10;
    MR_Box check_hlds__unused_imports__conv5_UsedModulesMode_13;
    MR_Box check_hlds__unused_imports__conv7_UsedModulesConstStruct_16;
    MR_Box check_hlds__unused_imports__conv9_UsedModulesPredInfo_18;
    MR_Box check_hlds__unused_imports__conv11_UsedModulesClass_20;
    MR_Box check_hlds__unused_imports__conv13_UsedModulesInstance_23;
    MR_Box check_hlds__unused_imports__conv15_STATE_VARIABLE_UsedModules_28;

    {
      hlds__hlds_module__module_info_get_used_modules_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__UsedModulesInit_5);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__TypeTable_6);
    }
    check_hlds__unused_imports__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0;
    {
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[1], check_hlds__unused_imports__TypeTable_6, ((MR_Box) (check_hlds__unused_imports__UsedModulesInit_5)), &check_hlds__unused_imports__conv1_UsedModulesTypeCtor_7);
    }
    check_hlds__unused_imports__UsedModulesTypeCtor_7 = ((MR_Word) check_hlds__unused_imports__conv1_UsedModulesTypeCtor_7);
    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__InstTable_8);
    }
    {
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__unused_imports__InstTable_8, &check_hlds__unused_imports__UserInstTable_9);
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[2], check_hlds__unused_imports__UserInstTable_9, ((MR_Box) (check_hlds__unused_imports__UsedModulesTypeCtor_7)), &check_hlds__unused_imports__conv3_UsedModulesUserInst_10);
    }
    check_hlds__unused_imports__UsedModulesUserInst_10 = ((MR_Word) check_hlds__unused_imports__conv3_UsedModulesUserInst_10);
    {
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__ModeTable_11);
    }
    {
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(check_hlds__unused_imports__ModeTable_11, &check_hlds__unused_imports__ModeDefns_12);
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[3], check_hlds__unused_imports__ModeDefns_12, ((MR_Box) (check_hlds__unused_imports__UsedModulesUserInst_10)), &check_hlds__unused_imports__conv5_UsedModulesMode_13);
    }
    check_hlds__unused_imports__UsedModulesMode_13 = ((MR_Word) check_hlds__unused_imports__conv5_UsedModulesMode_13);
    {
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__ConstStructDb_14);
    }
    {
      hlds__const_struct__const_struct_db_get_structs_2_p_0(check_hlds__unused_imports__ConstStructDb_14, &check_hlds__unused_imports__ConstStructs_15);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__unused_imports_scalar_common_2[0], check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[4], check_hlds__unused_imports__ConstStructs_15, ((MR_Box) (check_hlds__unused_imports__UsedModulesMode_13)), &check_hlds__unused_imports__conv7_UsedModulesConstStruct_16);
    }
    check_hlds__unused_imports__UsedModulesConstStruct_16 = ((MR_Word) check_hlds__unused_imports__conv7_UsedModulesConstStruct_16);
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__PredTable_17);
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[5], check_hlds__unused_imports__PredTable_17, ((MR_Box) (check_hlds__unused_imports__UsedModulesConstStruct_16)), &check_hlds__unused_imports__conv9_UsedModulesPredInfo_18);
    }
    check_hlds__unused_imports__UsedModulesPredInfo_18 = ((MR_Word) check_hlds__unused_imports__conv9_UsedModulesPredInfo_18);
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__ClassTable_19);
    }
    check_hlds__unused_imports__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    {
      mercury__map__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_109_109, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_2[6], check_hlds__unused_imports__ClassTable_19, ((MR_Box) (check_hlds__unused_imports__UsedModulesPredInfo_18)), &check_hlds__unused_imports__conv11_UsedModulesClass_20);
    }
    check_hlds__unused_imports__UsedModulesClass_20 = ((MR_Word) check_hlds__unused_imports__conv11_UsedModulesClass_20);
    {
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__ThisModuleName_21);
    }
    {
      hlds__hlds_module__module_info_get_instance_table_2_p_0(check_hlds__unused_imports__ModuleInfo_3, &check_hlds__unused_imports__InstanceTable_22);
    }
    {
      check_hlds__unused_imports__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_42, 0) = ((MR_Box) (&check_hlds__unused_imports_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_42, 1) = ((MR_Box) (check_hlds__unused_imports__find_all_non_warn_modules_2_p_0_7));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Var_42, 3) = ((MR_Box) (check_hlds__unused_imports__ThisModuleName_21));
    }
    {
      mercury__map__foldl_4_p_0(check_hlds__unused_imports__TypeCtorInfo_109_109, (MR_Word) &check_hlds__unused_imports_scalar_common_1[2], check_hlds__unused_imports__TypeCtorInfo_82_82, check_hlds__unused_imports__Var_42, check_hlds__unused_imports__InstanceTable_22, ((MR_Box) (check_hlds__unused_imports__UsedModulesClass_20)), &check_hlds__unused_imports__conv13_UsedModulesInstance_23);
    }
    check_hlds__unused_imports__UsedModulesInstance_23 = ((MR_Word) check_hlds__unused_imports__conv13_UsedModulesInstance_23);
    {
      check_hlds__unused_imports__ImplicitImports_24 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, check_hlds__unused_imports__TypeCtorInfo_82_82, (MR_Word) &check_hlds__unused_imports_scalar_common_6[0], check_hlds__unused_imports__ImplicitImports_24, ((MR_Box) (check_hlds__unused_imports__UsedModulesInstance_23)), &check_hlds__unused_imports__conv15_STATE_VARIABLE_UsedModules_28);
    }
    *check_hlds__unused_imports__STATE_VARIABLE_UsedModules_28 = ((MR_Word) check_hlds__unused_imports__conv15_STATE_VARIABLE_UsedModules_28);
  }
}

static void MR_CALL 
check_hlds__unused_imports__get_avail_modules_anywhere_interface_5_p_0(
  MR_Word check_hlds__unused_imports__HeadVar__1_1,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_0_2,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_3,
  MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4,
  MR_Word * check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unused_imports__succeeded;

        if ((check_hlds__unused_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_5 = check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4;
            *check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_3 = check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_0_2;
          }
        else
          {
            MR_Word check_hlds__unused_imports__TypeCtorInfo_29_29 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word check_hlds__unused_imports__ModuleEntry_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unused_imports__ModuleEntries_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unused_imports__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unused_imports__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModuleEntry_12, (MR_Integer) 0)));
            MR_Word check_hlds__unused_imports__Entry_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__ModuleEntry_12, (MR_Integer) 1)));
            MR_Word check_hlds__unused_imports__Section_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Entry_17, (MR_Integer) 0)))) & (MR_Integer) 1);
            MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_25_25;
            MR_Word check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_26_26;
            MR_Word check_hlds__unused_imports___ImportOrUse_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Entry_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word check_hlds__unused_imports___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unused_imports__Entry_17, (MR_Integer) 1)));

            {
              check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_25_25 = mercury__cord__snoc_2_f_0(check_hlds__unused_imports__TypeCtorInfo_29_29, check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_0_2, ((MR_Box) (check_hlds__unused_imports__ModuleName_16)));
            }
            switch (check_hlds__unused_imports__Section_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_26_26 = check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4;
                break;
              case (MR_Integer) 0:
                {
                  check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_26_26 = mercury__cord__snoc_2_f_0(check_hlds__unused_imports__TypeCtorInfo_29_29, check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4, ((MR_Box) (check_hlds__unused_imports__ModuleName_16)));
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unused_imports__next_value_of_HeadVar__1_1 = check_hlds__unused_imports__ModuleEntries_13;
              MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2 = check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_25_25;
              MR_Word check_hlds__unused_imports__next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4 = check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_26_26;

              check_hlds__unused_imports__STATE_VARIABLE_AvailInterfaceCord_0_4 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_AvailInterfaceCord_0_4;
              check_hlds__unused_imports__STATE_VARIABLE_AvailAnywhereCord_0_2 = check_hlds__unused_imports__next_value_of_STATE_VARIABLE_AvailAnywhereCord_0_2;
              check_hlds__unused_imports__HeadVar__1_1 = check_hlds__unused_imports__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__unused_imports____Unify____anywhere_or_interface_0_0_10001(
  MR_Box check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unused_imports__succeeded;

    {
      check_hlds__unused_imports__succeeded = check_hlds__unused_imports____Unify____anywhere_or_interface_0_0(((MR_Word) check_hlds__unused_imports__wrapper_arg_1), ((MR_Word) check_hlds__unused_imports__wrapper_arg_2));
    }
    return check_hlds__unused_imports__succeeded;
  }
}

static void MR_CALL 
check_hlds__unused_imports____Compare____anywhere_or_interface_0_0_10001(
  MR_Box * check_hlds__unused_imports__wrapper_arg_1,
  MR_Box check_hlds__unused_imports__wrapper_arg_2,
  MR_Box check_hlds__unused_imports__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unused_imports__conv0_HeadVar__1_1;

    {
      check_hlds__unused_imports____Compare____anywhere_or_interface_0_0(&check_hlds__unused_imports__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unused_imports__wrapper_arg_2), ((MR_Word) check_hlds__unused_imports__wrapper_arg_3));
    }
    *check_hlds__unused_imports__wrapper_arg_1 = ((MR_Box) (check_hlds__unused_imports__conv0_HeadVar__1_1));
  }
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

/* :- end_module check_hlds.unused_imports. */
