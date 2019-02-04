/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module make.program_target. */
/* :- implementation. */

/*
INIT mercury__make__program_target__init
ENDINIT
*/

#include "make.program_target.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.util.mih"
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
#include "dir.mih"
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
#include "solutions.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_misc_target_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word make__program_target__File_5,
  MR_Word make__program_target__StatusMap0_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__TargetModules_13,
  MR_Word make__program_target__LocalModulesOpts_14,
  MR_Word make__program_target__Succeeded0_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_25,
  MR_Word * make__program_target__STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__Globals_11,
  MR_Word * make__program_target__Succeeded_13,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word make__program_target__LinkedTargetFile_9,
  MR_Word make__program_target__Globals_10,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_42,
  MR_Word * make__program_target__STATE_VARIABLE_Info_43);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__KeepGoing_22,
  MR_Word make__program_target__HeadVar__4_68,
  MR_Word * make__program_target__HeadVar__5_160,
  MR_Word make__program_target__HeadVar__6_161,
  MR_Word * make__program_target__HeadVar__7_162);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Var_132,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_132,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_library_is_installed__2125__1_4_p_0(
  MR_String make__program_target__Grade_11,
  MR_String make__program_target__LibName_12);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2088__1_3_p_0(
  MR_String make__program_target__Grade_7);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2036__1_3_p_0(
  MR_Word make__program_target__ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1951__1_3_p_0(
  MR_Word make__program_target__ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1895__1_3_p_0(
  MR_Word make__program_target__ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1878__1_4_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ModuleName_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1839__1_4_p_0(
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1770__1_5_p_0(
  MR_String make__program_target__IntsSubdir_14,
  MR_String make__program_target__LambdaHeadVar__1_64,
  MR_Word * make__program_target__LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1734__1_4_p_0(
  MR_String make__program_target__SourceDirName_8,
  MR_String make__program_target__InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0(
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__CleanAfter_20,
  MR_Word make__program_target__LibGlobals_30,
  MR_Word * make__program_target__LambdaHeadVar__1_74,
  MR_Word make__program_target__LambdaHeadVar__2_75,
  MR_Word * make__program_target__LambdaHeadVar__3_76);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1422__1_3_p_0(
  MR_String make__program_target__Grade_15);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1110__1_2_p_0(
  MR_Word make__program_target__HeadVar__1_27,
  MR_Word * make__program_target__HeadVar__2_28);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1041__1_2_p_0(
  MR_Word make__program_target__AllModules_11,
  MR_Word make__program_target__LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__878__1_9_p_0(
  MR_Word make__program_target__KeepGoing_20,
  MR_Word make__program_target__HeadVar__2_48,
  MR_Word make__program_target__HeadVar__3_80,
  MR_Word make__program_target__HeadVar__4_81,
  MR_Word * make__program_target__HeadVar__5_82,
  MR_Word make__program_target__HeadVar__6_83,
  MR_Word * make__program_target__HeadVar__7_84);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__873__1_9_p_0(
  MR_Word make__program_target__KeepGoing_20,
  MR_Word make__program_target__HeadVar__2_41,
  MR_Word make__program_target__HeadVar__3_62,
  MR_Word make__program_target__HeadVar__4_63,
  MR_Word * make__program_target__HeadVar__5_64,
  MR_Word make__program_target__HeadVar__6_65,
  MR_Word * make__program_target__HeadVar__7_66);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1_9_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__KeepGoing_22,
  MR_Word make__program_target__HeadVar__3_67,
  MR_Word make__program_target__HeadVar__4_68,
  MR_Word * make__program_target__HeadVar__5_160,
  MR_Word make__program_target__HeadVar__6_161,
  MR_Word * make__program_target__HeadVar__7_162);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__568__1_1_f_0(
  MR_Word make__program_target__LambdaHeadVar__1_121);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__552__1_8_p_0(
  MR_Word make__program_target__Globals_18,
  MR_Word make__program_target__PIC_26,
  MR_Word make__program_target__LambdaHeadVar__1_107,
  MR_Word * make__program_target__LambdaHeadVar__2_108,
  MR_Word make__program_target__LambdaHeadVar__3_109,
  MR_Word * make__program_target__LambdaHeadVar__4_110);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__501__1_3_p_0(
  MR_String make__program_target__HeadVar__1_298);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__489__1_1_f_0(
  MR_String make__program_target__LambdaHeadVar__1_91);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__378__1_3_f_0(
  MR_Word make__program_target__PIC_10,
  MR_Word make__program_target__ModuleName_11,
  MR_String make__program_target__LambdaHeadVar__1_31);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__315__1_2_p_0(
  MR_Word make__program_target__HeadVar__1_39,
  MR_Word * make__program_target__HeadVar__2_40);

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__Dirs_10,
  MR_String make__program_target__Grade_11,
  MR_String make__program_target__LibName_12,
  MR_Word make__program_target__STATE_VARIABLE_Succeeded_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Succeeded_22);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0(
  MR_Word make__program_target__Globals_5,
  MR_Word * make__program_target__Succeeded_6);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_11,
  MR_Word * make__program_target__STATE_VARIABLE_Info_12);

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__PIC_11,
  MR_String make__program_target__FactTableFile_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__PIC_11,
  MR_Word make__program_target__FactTableFiles_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ModuleName_9,
  MR_String make__program_target__FactTableFile_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_Info_15);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Verbose_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__Clean_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word make__program_target__AllModules_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__Subdir_8,
  MR_String make__program_target__Ext_9,
  MR_Word * make__program_target__Succeeded_10);

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word * make__program_target__HeadVar__2_2);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__Grade_8,
  MR_Word * make__program_target__Result_9,
  MR_Word * make__program_target__LinkResult_10);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word make__program_target__Globals_6,
  MR_Word * make__program_target__Result_7,
  MR_Word * make__program_target__LinkResult_8);

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__SourceDirName_8,
  MR_String make__program_target__InstallDir_9,
  MR_Word * make__program_target__Succeeded_10);

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9,
  MR_Word * make__program_target__Succeeded_10);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_String make__program_target__Linkage_9,
  MR_String make__program_target__FileName_10,
  MR_String make__program_target__InstallDir_11,
  MR_Word * make__program_target__Succeeded_12);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__SubdirLinkSucceeded_10,
  MR_String make__program_target__InstallDir_11,
  MR_Word make__program_target__ModuleName_12,
  MR_String make__program_target__Ext_13,
  MR_Word * make__program_target__Succeeded_14);

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__LinkSucceeded_11,
  MR_String make__program_target__GradeDir_12,
  MR_Word make__program_target__ModuleName_13,
  MR_Word * make__program_target__Succeeded_14,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_33,
  MR_Word * make__program_target__STATE_VARIABLE_Info_34);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__GradeDir_8,
  MR_Word make__program_target__ModuleName_9,
  MR_Word * make__program_target__Succeeded_10);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__LinkSucceeded0_12,
  MR_String make__program_target__GradeDir_13,
  MR_Word make__program_target__ModuleName_14,
  MR_Word make__program_target__AllModules_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_34,
  MR_Word * make__program_target__STATE_VARIABLE_Info_35);

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__Info0_14,
  MR_Word make__program_target__CleanAfter_15,
  MR_Word * make__program_target__Succeeded_16);

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word make__program_target__File_5,
  MR_Word make__program_target___Status_6,
  MR_Word make__program_target__StatusMap0_7);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__Globals_14,
  MR_String make__program_target__Grade_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_39,
  MR_Word * make__program_target__STATE_VARIABLE_Info_40);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_String make__program_target__IncDir_9,
  MR_String make__program_target__FileName_10,
  MR_Word make__program_target__STATE_VARIABLE_Succeeded_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_Succeeded_15);

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__SubdirLinkSucceeded_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__install_library_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__MainModuleName_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_25,
  MR_Word * make__program_target__STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__build_java_library_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__MainModuleName_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_13,
  MR_Word * make__program_target__STATE_VARIABLE_Info_14);

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word make__program_target__MainModuleName_9,
  MR_Word make__program_target__AllModules_10,
  MR_Word make__program_target__Globals_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word make__program_target__ModuleName_4,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_7,
  MR_Word * make__program_target__STATE_VARIABLE_Info_8);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word make__program_target__ReanalyseSuboptimal_1,
  MR_Word make__program_target__Globals_2,
  MR_Word make__program_target__HeadVar__3_3,
  MR_Word * make__program_target__HeadVar__4_4,
  MR_Word * make__program_target__HeadVar__5_5);

static MR_Word MR_CALL 
make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(
  MR_Word make__program_target__ModuleDeps_4,
  MR_Word make__program_target__ModuleName_5);

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word make__program_target__LookupModuleImports_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * make__program_target__STATE_VARIABLE_IntDepsGraph_13,
  MR_Word make__program_target__STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_ImplDepsGraph_15);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word make__program_target__ModuleDeps_4,
  MR_Word make__program_target__Modules0_5,
  MR_Word * make__program_target__Modules_6);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__AllModules_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__MainModuleName_11,
  MR_Word make__program_target__AllModules_12,
  MR_Word make__program_target__Succeeded0_13,
  MR_Word * make__program_target__Succeeded_14,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__CacheDir_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_12,
  MR_Word * make__program_target__STATE_VARIABLE_Info_13);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word make__program_target__Globals_6,
  MR_Word * make__program_target__Succeeded_7,
  MR_String * make__program_target__CacheDir_8);

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_ParentModules_0_17,
  MR_Word * make__program_target__STATE_VARIABLE_ParentModules_18,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__AllModules0_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_22,
  MR_Word * make__program_target__STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__HeadVar__3_12,
  MR_Word * make__program_target__Succeeded_13,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
  MR_String make__program_target__FileName_5,
  MR_Word make__program_target__MaybeTimestamp_6,
  MR_Word make__program_target__STATE_VARIABLE_Timestamps_0_8,
  MR_Word * make__program_target__STATE_VARIABLE_Timestamps_9);

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0(
  MR_Word make__program_target__JavaFiles_9,
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__ErrorStream_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__ModuleNames_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ObjModules_9,
  MR_Word * make__program_target__OutOfDateModules_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_22,
  MR_Word * make__program_target__STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__ObjModules_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_20,
  MR_Word * make__program_target__STATE_VARIABLE_Info_21);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__FileType_11,
  MR_String make__program_target__OutputFileName_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word make__program_target__Globals_18,
  MR_Word make__program_target__MainModuleName_19,
  MR_Word make__program_target__FileType_20,
  MR_String make__program_target__OutputFileName_21,
  MR_Word make__program_target__MaybeTimestamp_22,
  MR_Word make__program_target__AllModules_23,
  MR_Word make__program_target__ObjModules_24,
  MR_Word make__program_target__CompilationTarget_25,
  MR_Word make__program_target__PIC_26,
  MR_Word make__program_target__DepsSuccess_27,
  MR_Word make__program_target__BuildDepsResult_28,
  MR_Word make__program_target__ErrorStream_29,
  MR_Word * make__program_target__Succeeded_30,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_72,
  MR_Word * make__program_target__STATE_VARIABLE_Info_73);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word make__program_target__MainModuleName_18,
  MR_Word make__program_target__FileType_19,
  MR_String make__program_target__OutputFileName_20,
  MR_Word make__program_target__MaybeTimestamp_21,
  MR_Word make__program_target__AllModules_22,
  MR_Word make__program_target__ObjModules_23,
  MR_Word make__program_target__CompilationTarget_24,
  MR_Word make__program_target__PIC_25,
  MR_Word make__program_target__DepsSuccess_26,
  MR_Word make__program_target__BuildDepsResult_27,
  MR_Word make__program_target__Globals_28,
  MR_Word make__program_target__ErrorStream_29,
  MR_Word * make__program_target__Succeeded_30,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_37,
  MR_Word * make__program_target__STATE_VARIABLE_Info_38);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__PIC_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word * make__program_target__ObjectTargets_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__HeadVar__2_2,
  MR_Word * make__program_target__Res_8);

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Module_9,
  MR_Word * make__program_target__HeadVar__3_3,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_17,
  MR_Word * make__program_target__STATE_VARIABLE_Info_18);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Modules_9,
  MR_Word * make__program_target__OrderedModules_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__get_target_modules_2_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_TargetModules_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_TargetModules_17,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_18,
  MR_Word * make__program_target__STATE_VARIABLE_Info_19);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__TargetType_10,
  MR_Word make__program_target__AllModules_11,
  MR_Word * make__program_target__TargetModules_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word make__program_target__LinkedTargetFile_9,
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__HeadVar__3_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_42,
  MR_Word * make__program_target__STATE_VARIABLE_Info_43);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__LinkedTargetFile_10,
  MR_Word make__program_target__ExtraOptions_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__make_misc_target_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5);


static /* final */ const MR_Box make__program_target_scalar_common_1[53][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[23][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[3][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[19][11];

static /* final */ const MR_Box make__program_target_scalar_common_6[8][10];

static /* final */ const MR_Box make__program_target_scalar_common_7[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_8[6][5];

static /* final */ const MR_Box make__program_target_scalar_common_9[5][7];

static /* final */ const MR_Box make__program_target_scalar_common_10[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_11[6][9];

static /* final */ const MR_Box make__program_target_scalar_common_12[5][12];

static /* final */ const MR_Box make__program_target_scalar_common_13[2][13];

static /* final */ const MR_Box make__program_target_scalar_common_14[1][8];

static /* final */ const MR_Box make__program_target_scalar_common_15[1][20];


/* sealed */ struct make__program_target__vector_common_type_4_0_s {
  const MR_Word make__program_target__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_4_0_s make__program_target_vector_common_4[9];



static /* final */ const MR_Box make__program_target_scalar_common_1[53][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "mih")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "mh")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "int3")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "int2")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "analysis")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "trans_opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[0])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[1])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[2])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_9[1])),
    ((MR_Box) (make__program_target__make_java_files_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[4])),
    ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[5])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[4])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[19][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_misc_target_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&make__make__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[8][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[1])),
    ((MR_Box) (make__program_target__build_java_files_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "Making Java class files\n"))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[6][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_12[5][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_13[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_14[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_15[1][20] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependencies_result_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_4_0_s make__program_target_vector_common_4[9] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[50]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 8 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_misc_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word make__program_target__File_5,
  MR_Word make__program_target__StatusMap0_7)
{
  {
    MR_bool make__program_target__succeeded = ((MR_tag((MR_Word) make__program_target__File_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__program_target__StatusMap_8;
    MR_Word make__program_target__Target_10;
    MR_Word make__program_target__Var_11;
    MR_Word make__program_target__Var_9;

    if (make__program_target__succeeded)
      {
        make__program_target__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__File_5, (MR_Integer) 0)));
        make__program_target__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Var_11, (MR_Integer) 0)));
        make__program_target__Target_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Var_11, (MR_Integer) 1)));
        {
          make__program_target__succeeded = make__util__target_is_grade_or_arch_dependent_1_p_0(make__program_target__Target_10);
        }
      }
    if (make__program_target__succeeded)
      {
        {
          make__program_target__StatusMap_8 = mercury__version_hash_table__delete_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, make__program_target__StatusMap0_7, ((MR_Box) (make__program_target__File_5)));
        }
      }
    else
      make__program_target__StatusMap_8 = make__program_target__StatusMap0_7;
    return make__program_target__StatusMap_8;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv6_STATE_VARIABLE_Info_8;

    {
      make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv6_STATE_VARIABLE_Info_8);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv6_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv4_STATE_VARIABLE_Info_8;

    {
      make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv4_STATE_VARIABLE_Info_8);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv4_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_HeadVar__4_4;
    MR_Word make__program_target__conv0_HeadVar__6_6;

    {
      make__module_target__make_module_target_extra_options_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_HeadVar__4_4, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_HeadVar__4_4));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__TargetModules_13,
  MR_Word make__program_target__LocalModulesOpts_14,
  MR_Word make__program_target__Succeeded0_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_25,
  MR_Word * make__program_target__STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__program_target__succeeded;
        MR_Word make__program_target__TypeCtorInfo_97_97;
        MR_Word make__program_target__KeepGoing_19;
        MR_Word make__program_target__Succeeded1_20;
        MR_Integer make__program_target__ReanalysisPasses_21;
        MR_Word make__program_target__ReanalyseSuboptimal_22;
        MR_Word make__program_target__InvalidModules_23;
        MR_Word make__program_target__SuboptimalModules_24;
        MR_Word make__program_target__Var_30;
        MR_Word make__program_target__Var_31;
        MR_Word make__program_target__STATE_VARIABLE_Info_32_32;
        MR_Box make__program_target__conv3_STATE_VARIABLE_Info_32_32;
        MR_Box make__program_target__conv2_STATE_VARIABLE_IO_33_33;
        MR_Word make__program_target__Var_50;
        MR_Word make__program_target__Var_51;
        MR_Word make__program_target__Var_52;
        MR_Word make__program_target__Var_53;
        MR_Word make__program_target__Var_54;
        MR_Word make__program_target__Var_55;
        MR_Word make__program_target__Var_56;
        MR_Word make__program_target__Var_57;
        MR_Word make__program_target__Var_58;
        MR_Word make__program_target__Var_59;
        MR_Word make__program_target__Var_60;
        MR_Word make__program_target__Var_61;
        MR_Word make__program_target__Var_62;
        MR_Word make__program_target__Var_63;
        MR_Word make__program_target__Var_64;
        MR_Word make__program_target__Var_65;
        MR_Word make__program_target__Var_66;
        MR_Word make__program_target__Var_67;
        MR_Word make__program_target__Var_68;

        {
          libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_11, (MR_Integer) 626, &make__program_target__KeepGoing_19);
        }
        {
          make__program_target__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_5[18]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_30, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_30, 3) = ((MR_Box) (make__program_target__LocalModulesOpts_14));
        }
        {
          make__program_target__Var_31 = make__util__make_dependency_list_2_f_0(make__program_target__TargetModules_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
        }
        make__program_target__TypeCtorInfo_97_97 = (MR_Word) &make__make__type_ctor_info_make_info_0;
        {
          make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__program_target__TypeCtorInfo_97_97, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__KeepGoing_19, make__program_target__Var_30, make__program_target__Globals_11, make__program_target__Var_31, &make__program_target__Succeeded1_20, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_25)), &make__program_target__conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_33_33);
        }
        make__program_target__STATE_VARIABLE_Info_32_32 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_32_32);
        make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
        make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
        make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
        make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
        make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
        make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
        make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
        make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
        make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
        make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
        make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
        make__program_target__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
        make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
        make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
        make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
        make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
        make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
        make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
        make__program_target__ReanalysisPasses_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
        make__program_target__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
        make__program_target__succeeded = (make__program_target__ReanalysisPasses_21 > (MR_Integer) 1);
        if (make__program_target__succeeded)
          make__program_target__ReanalyseSuboptimal_22 = (MR_Integer) 1;
        else
          make__program_target__ReanalyseSuboptimal_22 = (MR_Integer) 0;
        {
          make__program_target__modules_needing_reanalysis_7_p_0(make__program_target__ReanalyseSuboptimal_22, make__program_target__Globals_11, make__program_target__TargetModules_13, &make__program_target__InvalidModules_23, &make__program_target__SuboptimalModules_24);
        }
        {
          make__program_target__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__InvalidModules_23);
        }
        if (make__program_target__succeeded)
          {
            MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
            MR_Box make__program_target__conv5_STATE_VARIABLE_Info_39_39;

            {
              make__util__maybe_reanalyse_modules_message_3_p_0(make__program_target__Globals_11);
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__TypeCtorInfo_97_97, (MR_Word) &make__program_target_scalar_common_2[21], make__program_target__InvalidModules_23, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv5_STATE_VARIABLE_Info_39_39);
            }
            make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv5_STATE_VARIABLE_Info_39_39);
            /* direct tailcall eliminated */
            {
              MR_Word make__program_target__next_value_of_STATE_VARIABLE_Info_0_25 = make__program_target__STATE_VARIABLE_Info_39_39;

              make__program_target__STATE_VARIABLE_Info_0_25 = make__program_target__next_value_of_STATE_VARIABLE_Info_0_25;
            }
            continue;
          }
        else
          {
            {
              make__program_target__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__SuboptimalModules_24);
            }
            if (make__program_target__succeeded)
              {
                MR_Word make__program_target__STATE_VARIABLE_Info_43_43;
                MR_Word make__program_target__STATE_VARIABLE_Info_44_44;
                MR_Integer make__program_target__Var_45;
                MR_Box make__program_target__conv7_STATE_VARIABLE_Info_43_43;
                MR_Word make__program_target__Var_69;
                MR_Word make__program_target__Var_70;
                MR_Word make__program_target__Var_71;
                MR_Word make__program_target__Var_72;
                MR_Word make__program_target__Var_73;
                MR_Word make__program_target__Var_74;
                MR_Word make__program_target__Var_75;
                MR_Word make__program_target__Var_76;
                MR_Word make__program_target__Var_77;
                MR_Word make__program_target__Var_78;
                MR_Word make__program_target__Var_79;
                MR_Word make__program_target__Var_80;
                MR_Word make__program_target__Var_81;
                MR_Word make__program_target__Var_82;
                MR_Word make__program_target__Var_83;
                MR_Word make__program_target__Var_84;
                MR_Word make__program_target__Var_85;
                MR_Word make__program_target__Var_86;
                MR_Word make__program_target__Var_88;
                MR_Integer make__program_target__Var_87;

                {
                  mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__TypeCtorInfo_97_97, (MR_Word) &make__program_target_scalar_common_2[22], make__program_target__SuboptimalModules_24, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv7_STATE_VARIABLE_Info_43_43);
                }
                make__program_target__STATE_VARIABLE_Info_43_43 = ((MR_Word) make__program_target__conv7_STATE_VARIABLE_Info_43_43);
                make__program_target__Var_45 = (make__program_target__ReanalysisPasses_21 - (MR_Integer) 1);
                make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 0)));
                make__program_target__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 1)));
                make__program_target__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 2)));
                make__program_target__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 3)));
                make__program_target__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 4)));
                make__program_target__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 5)));
                make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 6)));
                make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 7)));
                make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 8)));
                make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 9)));
                make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 10)));
                make__program_target__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 11)));
                make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 12)));
                make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 13)));
                make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 14)));
                make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 15)));
                make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 16)));
                make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 17)));
                make__program_target__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 18)));
                make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_43_43, (MR_Integer) 19)));
                {
                  make__program_target__STATE_VARIABLE_Info_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 0) = ((MR_Box) (make__program_target__Var_69));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 1) = ((MR_Box) (make__program_target__Var_70));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 2) = ((MR_Box) (make__program_target__Var_71));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 3) = ((MR_Box) (make__program_target__Var_72));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 4) = ((MR_Box) (make__program_target__Var_73));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 5) = ((MR_Box) (make__program_target__Var_74));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 6) = ((MR_Box) (make__program_target__Var_75));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 7) = ((MR_Box) (make__program_target__Var_76));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 8) = ((MR_Box) (make__program_target__Var_77));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 9) = ((MR_Box) (make__program_target__Var_78));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 10) = ((MR_Box) (make__program_target__Var_79));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 11) = ((MR_Box) (make__program_target__Var_80));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 12) = ((MR_Box) (make__program_target__Var_81));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 13) = ((MR_Box) (make__program_target__Var_82));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 14) = ((MR_Box) (make__program_target__Var_83));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 15) = ((MR_Box) (make__program_target__Var_84));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 16) = ((MR_Box) (make__program_target__Var_85));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 17) = ((MR_Box) (make__program_target__Var_86));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 18) = ((MR_Box) (make__program_target__Var_45));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_44_44, 19) = ((MR_Box) (make__program_target__Var_88));
                }
                {
                  make__util__maybe_reanalyse_modules_message_3_p_0(make__program_target__Globals_11);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word make__program_target__next_value_of_STATE_VARIABLE_Info_0_25 = make__program_target__STATE_VARIABLE_Info_44_44;

                  make__program_target__STATE_VARIABLE_Info_0_25 = make__program_target__next_value_of_STATE_VARIABLE_Info_0_25;
                }
                continue;
              }
            else
              {
                {
                  *make__program_target__Succeeded_16 = mercury__bool__and_2_f_0(make__program_target__Succeeded0_15, make__program_target__Succeeded1_20);
                }
                *make__program_target__STATE_VARIABLE_Info_26 = make__program_target__STATE_VARIABLE_Info_32_32;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv15_STATE_VARIABLE_Info_12;

    {
      make__program_target__make_module_realclean_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv15_STATE_VARIABLE_Info_12);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv15_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv12_STATE_VARIABLE_Info_16;

    {
      make__program_target__make_module_clean_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv12_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv12_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv9_HeadVar__3_3;
    MR_Word make__program_target__conv8_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv9_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv8_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv9_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv7_Succeeded_12;
    MR_Word make__program_target__conv6_STATE_VARIABLE_Info_17;

    {
      make__program_target__build_library_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), &make__program_target__conv7_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv6_STATE_VARIABLE_Info_17);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv7_Succeeded_12));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv6_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv5_Succeeded_14;
    MR_Word make__program_target__conv4_STATE_VARIABLE_Info_20;

    {
      make__program_target__build_analysis_files_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), &make__program_target__conv5_Succeeded_14, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv4_STATE_VARIABLE_Info_20);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv5_Succeeded_14));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv4_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv3_HeadVar__5_160;
    MR_Word make__program_target__conv2_HeadVar__7_162;

    {
      make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), &make__program_target__conv3_HeadVar__5_160, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv2_HeadVar__7_162);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv3_HeadVar__5_160));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv2_HeadVar__7_162));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_HeadVar__3_3;
    MR_Word make__program_target__conv0_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__Globals_11,
  MR_Word * make__program_target__Succeeded_13,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_145_145;
    MR_Word make__program_target__MainModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word make__program_target__TargetType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word make__program_target__RebuildModuleDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
    MR_Word make__program_target__Succeeded0_17;
    MR_Word make__program_target__AllModulesSet_18;
    MR_Word make__program_target__AllModules_19;
    MR_Word make__program_target__STATE_VARIABLE_Info_31_31;
    MR_Word make__program_target__STATE_VARIABLE_Info_33_33;
    MR_Word make__program_target__STATE_VARIABLE_Info_35_35;
    MR_Word make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
    MR_Word make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
    MR_Word make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
    MR_Word make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
    MR_Word make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
    MR_Word make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
    MR_Word make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
    MR_Word make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
    MR_Word make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
    MR_Word make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
    MR_Word make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
    MR_Word make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
    MR_Word make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
    MR_Word make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
    MR_Word make__program_target__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
    MR_Word make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
    MR_Word make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
    MR_Integer make__program_target__Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
    MR_Word make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
    MR_Word make__program_target__Var_125;
    MR_Word make__program_target__Var_126;
    MR_Word make__program_target__Var_127;
    MR_Word make__program_target__Var_128;
    MR_Word make__program_target__Var_129;
    MR_Word make__program_target__Var_130;
    MR_Word make__program_target__Var_131;
    MR_Word make__program_target__Var_132;
    MR_Word make__program_target__Var_133;
    MR_Word make__program_target__Var_134;
    MR_Word make__program_target__Var_135;
    MR_Word make__program_target__Var_136;
    MR_Word make__program_target__Var_137;
    MR_Word make__program_target__Var_139;
    MR_Word make__program_target__Var_140;
    MR_Word make__program_target__Var_141;
    MR_Word make__program_target__Var_142;
    MR_Integer make__program_target__Var_143;
    MR_Word make__program_target__Var_144;
    MR_Word make__program_target__Var_138;

    if ((make__program_target__TargetType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__program_target__succeeded = MR_TRUE;
    else
    if ((make__program_target__TargetType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      make__program_target__succeeded = MR_TRUE;
    else
      make__program_target__succeeded = MR_FALSE;
    if (make__program_target__succeeded)
      {
        MR_Word make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
        MR_Word make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
        MR_Word make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
        MR_Word make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
        MR_Word make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
        MR_Word make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
        MR_Word make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
        MR_Word make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
        MR_Word make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
        MR_Word make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
        MR_Word make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
        MR_Word make__program_target__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
        MR_Word make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
        MR_Word make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
        MR_Word make__program_target__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
        MR_Word make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
        MR_Word make__program_target__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
        MR_Integer make__program_target__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
        MR_Word make__program_target__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
        MR_Word make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));

        {
          make__program_target__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (make__program_target__Var_105));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (make__program_target__Var_106));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (make__program_target__Var_107));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (make__program_target__Var_108));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (make__program_target__Var_109));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (make__program_target__Var_110));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (make__program_target__Var_111));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (make__program_target__Var_112));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (make__program_target__Var_113));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (make__program_target__Var_114));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (make__program_target__Var_115));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 11) = ((MR_Box) (make__program_target__Var_116));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 12) = ((MR_Box) (make__program_target__Var_117));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 13) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 14) = ((MR_Box) (make__program_target__Var_119));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 15) = ((MR_Box) (make__program_target__Var_120));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 16) = ((MR_Box) (make__program_target__Var_121));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 17) = ((MR_Box) (make__program_target__Var_122));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 18) = ((MR_Box) (make__program_target__Var_123));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_31_31, 19) = ((MR_Box) (make__program_target__Var_124));
        }
      }
    else
      make__program_target__STATE_VARIABLE_Info_31_31 = make__program_target__STATE_VARIABLE_Info_0_27;
    {
      make__dependencies__find_reachable_local_modules_8_p_0(make__program_target__Globals_11, make__program_target__MainModuleName_9, &make__program_target__Succeeded0_17, &make__program_target__AllModulesSet_18, make__program_target__STATE_VARIABLE_Info_31_31, &make__program_target__STATE_VARIABLE_Info_33_33);
    }
    make__program_target__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 0)));
    make__program_target__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 1)));
    make__program_target__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 2)));
    make__program_target__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 3)));
    make__program_target__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 4)));
    make__program_target__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 5)));
    make__program_target__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 6)));
    make__program_target__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 7)));
    make__program_target__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 8)));
    make__program_target__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 9)));
    make__program_target__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 10)));
    make__program_target__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 11)));
    make__program_target__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 12)));
    make__program_target__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 13)));
    make__program_target__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 14)));
    make__program_target__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 15)));
    make__program_target__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 16)));
    make__program_target__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 17)));
    make__program_target__Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 18)));
    make__program_target__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_33_33, (MR_Integer) 19)));
    {
      make__program_target__STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (make__program_target__Var_125));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (make__program_target__Var_126));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (make__program_target__Var_127));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (make__program_target__Var_128));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (make__program_target__Var_129));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (make__program_target__Var_130));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (make__program_target__Var_131));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (make__program_target__Var_132));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (make__program_target__Var_133));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 9) = ((MR_Box) (make__program_target__Var_134));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 10) = ((MR_Box) (make__program_target__Var_135));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 11) = ((MR_Box) (make__program_target__Var_136));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 12) = ((MR_Box) (make__program_target__Var_137));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 13) = ((MR_Box) (make__program_target__RebuildModuleDeps_16));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 14) = ((MR_Box) (make__program_target__Var_139));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 15) = ((MR_Box) (make__program_target__Var_140));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 16) = ((MR_Box) (make__program_target__Var_141));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 17) = ((MR_Box) (make__program_target__Var_142));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 18) = ((MR_Box) (make__program_target__Var_143));
      MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_35_35, 19) = ((MR_Box) (make__program_target__Var_144));
    }
    make__program_target__TypeCtorInfo_145_145 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      make__program_target__AllModules_19 = mercury__set__to_sorted_list_1_f_0(make__program_target__TypeCtorInfo_145_145, make__program_target__AllModulesSet_18);
    }
    switch (MR_tag((MR_Word) make__program_target__TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__program_target__TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word make__program_target__Var_75;
              MR_Word make__program_target__STATE_VARIABLE_Info_76_76;
              MR_Box make__program_target__conv14_STATE_VARIABLE_Info_76_76;
              MR_Box make__program_target__conv13_STATE_VARIABLE_IO_77_77;

              *make__program_target__Succeeded_13 = (MR_Integer) 1;
              {
                make__program_target__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_75, 0) = ((MR_Box) (&make__program_target_scalar_common_11[3]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_75, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6));
                MR_hl_field(MR_mktag(0), make__program_target__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_75, 3) = ((MR_Box) (make__program_target__Globals_11));
              }
              {
                mercury__list__foldl2_6_p_2(make__program_target__TypeCtorInfo_145_145, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_75, make__program_target__AllModules_19, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_35_35)), &make__program_target__conv14_STATE_VARIABLE_Info_76_76, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv13_STATE_VARIABLE_IO_77_77);
              }
              make__program_target__STATE_VARIABLE_Info_76_76 = ((MR_Word) make__program_target__conv14_STATE_VARIABLE_Info_76_76);
              {
                make__program_target__remove_init_files_7_p_0(make__program_target__Globals_11, (MR_Integer) 57, make__program_target__MainModuleName_9, make__program_target__STATE_VARIABLE_Info_76_76, make__program_target__STATE_VARIABLE_Info_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__STATE_VARIABLE_Info_70_70;
              MR_Word make__program_target__Var_72;
              MR_Box make__program_target__conv17_STATE_VARIABLE_Info_28;
              MR_Box make__program_target__conv16_STATE_VARIABLE_IO_30;

              *make__program_target__Succeeded_13 = (MR_Integer) 1;
              {
                make__program_target__make_main_module_realclean_6_p_0(make__program_target__Globals_11, make__program_target__MainModuleName_9, make__program_target__STATE_VARIABLE_Info_35_35, &make__program_target__STATE_VARIABLE_Info_70_70);
              }
              {
                make__program_target__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_72, 0) = ((MR_Box) (&make__program_target_scalar_common_11[3]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_72, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7));
                MR_hl_field(MR_mktag(0), make__program_target__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_72, 3) = ((MR_Box) (make__program_target__Globals_11));
              }
              {
                mercury__list__foldl2_6_p_2(make__program_target__TypeCtorInfo_145_145, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_72, make__program_target__AllModules_19, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_70_70)), &make__program_target__conv17_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv16_STATE_VARIABLE_IO_30);
              }
              *make__program_target__STATE_VARIABLE_Info_28 = ((MR_Word) make__program_target__conv17_STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__program_target__Var_56;

              {
                make__program_target__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_12[4]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 3) = ((MR_Box) (make__program_target__Globals_11));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 4) = ((MR_Box) (make__program_target__MainModuleName_9));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 5) = ((MR_Box) (make__program_target__AllModules_19));
                MR_hl_field(MR_mktag(0), make__program_target__Var_56, 6) = ((MR_Box) (make__program_target__Succeeded0_17));
              }
              {
                make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(make__program_target__Globals_11, make__program_target__MainModuleName_9, make__program_target__AllModules_19, make__program_target__Succeeded0_17, make__program_target__Globals_11, make__program_target__Var_56, make__program_target__Succeeded_13, make__program_target__STATE_VARIABLE_Info_35_35, make__program_target__STATE_VARIABLE_Info_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word make__program_target__IntSucceeded_25;
              MR_Word make__program_target__STATE_VARIABLE_Info_51_51;

              {
                make__program_target__make_all_interface_files_7_p_0(make__program_target__Globals_11, make__program_target__AllModules_19, &make__program_target__IntSucceeded_25, make__program_target__STATE_VARIABLE_Info_35_35, &make__program_target__STATE_VARIABLE_Info_51_51);
              }
              switch (make__program_target__IntSucceeded_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *make__program_target__Succeeded_13 = (MR_Integer) 0;
                    *make__program_target__STATE_VARIABLE_Info_28 = make__program_target__STATE_VARIABLE_Info_51_51;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word make__program_target__Var_53;

                    {
                      make__program_target__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 0) = ((MR_Box) (&make__program_target_scalar_common_5[17]));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 3) = ((MR_Box) (make__program_target__MainModuleName_9));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 4) = ((MR_Box) (make__program_target__AllModules_19));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_53, 5) = ((MR_Box) (make__program_target__Globals_11));
                    }
                    {
                      make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(make__program_target__MainModuleName_9, make__program_target__AllModules_19, make__program_target__Globals_11, make__program_target__Globals_11, make__program_target__Var_53, make__program_target__Succeeded_13, make__program_target__STATE_VARIABLE_Info_51_51, make__program_target__STATE_VARIABLE_Info_28);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word make__program_target__LibSucceeded_26;
              MR_Word make__program_target__Var_45;
              MR_Word make__program_target__STATE_VARIABLE_Info_46_46;

              {
                make__program_target__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_45, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
                MR_hl_field(MR_mktag(0), make__program_target__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              {
                make__program_target__make_misc_target_7_p_0(make__program_target__Globals_11, make__program_target__Var_45, &make__program_target__LibSucceeded_26, make__program_target__STATE_VARIABLE_Info_35_35, &make__program_target__STATE_VARIABLE_Info_46_46);
              }
              switch (make__program_target__LibSucceeded_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *make__program_target__Succeeded_13 = (MR_Integer) 0;
                    *make__program_target__STATE_VARIABLE_Info_28 = make__program_target__STATE_VARIABLE_Info_46_46;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    make__program_target__install_library_7_p_0(make__program_target__Globals_11, make__program_target__MainModuleName_9, make__program_target__Succeeded_13, make__program_target__STATE_VARIABLE_Info_46_46, make__program_target__STATE_VARIABLE_Info_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word make__program_target__STATE_VARIABLE_Info_37_37;
              MR_Word make__program_target__TargetModules_83;
              MR_Word make__program_target__KeepGoing_84;

              {
                make__program_target__get_target_modules_8_p_0(make__program_target__Globals_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)), make__program_target__AllModules_19, &make__program_target__TargetModules_83, make__program_target__STATE_VARIABLE_Info_35_35, &make__program_target__STATE_VARIABLE_Info_37_37);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_11, (MR_Integer) 626, &make__program_target__KeepGoing_84);
              }
              make__program_target__succeeded = (make__program_target__Succeeded0_17 == (MR_Integer) 0);
              if (make__program_target__succeeded)
                make__program_target__succeeded = (make__program_target__KeepGoing_84 == (MR_Integer) 0);
              if (make__program_target__succeeded)
                {
                  *make__program_target__Succeeded_13 = (MR_Integer) 0;
                  *make__program_target__STATE_VARIABLE_Info_28 = make__program_target__STATE_VARIABLE_Info_37_37;
                }
              else
                {
                  MR_Word make__program_target__Var_41;
                  MR_Word make__program_target__Succeeded1_81;
                  MR_Box make__program_target__conv11_STATE_VARIABLE_Info_28;
                  MR_Box make__program_target__conv10_STATE_VARIABLE_IO_30;

                  {
                    make__program_target__Var_41 = make__util__make_dependency_list_2_f_0(make__program_target__TargetModules_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
                  }
                  {
                    make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__KeepGoing_84, (MR_Word) &make__program_target_scalar_common_2[20], make__program_target__Globals_11, make__program_target__Var_41, &make__program_target__Succeeded1_81, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_37_37)), &make__program_target__conv11_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv10_STATE_VARIABLE_IO_30);
                  }
                  *make__program_target__STATE_VARIABLE_Info_28 = ((MR_Word) make__program_target__conv11_STATE_VARIABLE_Info_28);
                  {
                    *make__program_target__Succeeded_13 = mercury__bool__and_2_f_0(make__program_target__Succeeded0_17, make__program_target__Succeeded1_81);
                  }
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__ModuleTargetType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__TargetType_10, (MR_Integer) 0)));
          MR_Word make__program_target__TargetModules_21;
          MR_Word make__program_target__KeepGoing_22;
          MR_Word make__program_target__STATE_VARIABLE_Info_59_59;

          {
            make__program_target__get_target_modules_8_p_0(make__program_target__Globals_11, make__program_target__ModuleTargetType_20, make__program_target__AllModules_19, &make__program_target__TargetModules_21, make__program_target__STATE_VARIABLE_Info_35_35, &make__program_target__STATE_VARIABLE_Info_59_59);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_11, (MR_Integer) 626, &make__program_target__KeepGoing_22);
          }
          make__program_target__succeeded = (make__program_target__Succeeded0_17 == (MR_Integer) 0);
          if (make__program_target__succeeded)
            make__program_target__succeeded = (make__program_target__KeepGoing_22 == (MR_Integer) 0);
          if (make__program_target__succeeded)
            {
              *make__program_target__Succeeded_13 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_28 = make__program_target__STATE_VARIABLE_Info_59_59;
            }
          else
            {
              MR_Word make__program_target__Succeeded1_23;
              MR_Word make__program_target__STATE_VARIABLE_Info_62_62;

              {
                make__program_target__make_all_interface_files_7_p_0(make__program_target__Globals_11, make__program_target__AllModules_19, &make__program_target__Succeeded1_23, make__program_target__STATE_VARIABLE_Info_59_59, &make__program_target__STATE_VARIABLE_Info_62_62);
              }
              make__program_target__succeeded = (make__program_target__Succeeded1_23 == (MR_Integer) 0);
              if (make__program_target__succeeded)
                make__program_target__succeeded = (make__program_target__KeepGoing_22 == (MR_Integer) 0);
              if (make__program_target__succeeded)
                {
                  *make__program_target__Succeeded_13 = (MR_Integer) 0;
                  *make__program_target__STATE_VARIABLE_Info_28 = make__program_target__STATE_VARIABLE_Info_62_62;
                }
              else
                {
                  MR_Word make__program_target__Succeeded2_24;
                  MR_Word make__program_target__Var_64;
                  MR_Word make__program_target__Var_68;
                  MR_Word make__program_target__Var_69;

                  {
                    make__program_target__Var_68 = make__util__make_dependency_list_2_f_0(make__program_target__TargetModules_21, make__program_target__ModuleTargetType_20);
                  }
                  {
                    make__program_target__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 0) = ((MR_Box) (&make__program_target_scalar_common_12[3]));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 3) = ((MR_Box) (make__program_target__Globals_11));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 4) = ((MR_Box) (make__program_target__KeepGoing_22));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 5) = ((MR_Box) (&make__program_target_scalar_common_2[19]));
                    MR_hl_field(MR_mktag(0), make__program_target__Var_64, 6) = ((MR_Box) (make__program_target__Var_68));
                  }
                  {
                    make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(make__program_target__Globals_11, make__program_target__KeepGoing_22, make__program_target__Var_68, make__program_target__Globals_11, make__program_target__Var_64, &make__program_target__Succeeded2_24, make__program_target__STATE_VARIABLE_Info_62_62, make__program_target__STATE_VARIABLE_Info_28);
                  }
                  {
                    make__program_target__Var_69 = mercury__bool__and_2_f_0(make__program_target__Succeeded0_17, make__program_target__Succeeded1_23);
                  }
                  {
                    *make__program_target__Succeeded_13 = mercury__bool__and_2_f_0(make__program_target__Var_69, make__program_target__Succeeded2_24);
                  }
                }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv18_STATE_VARIABLE_Info_16;

    {
      make__program_target__linked_target_cleanup_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv18_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv18_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv17_HeadVar__4_4;
    MR_Word make__program_target__conv16_HeadVar__6_6;

    {
      make__util__build_with_output_redirect_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), &make__program_target__conv17_HeadVar__4_4, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv16_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv17_HeadVar__4_4));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv16_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv15_Succeeded_30;
    MR_Word make__program_target__conv14_STATE_VARIABLE_Info_38;

    {
      make__program_target__build_linked_target_17_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 10))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 11))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 12))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv15_Succeeded_30, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv14_STATE_VARIABLE_Info_38);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv15_Succeeded_30));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv14_STATE_VARIABLE_Info_38));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv11_HeadVar__3_3;
    MR_Word make__program_target__conv10_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv11_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv10_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv11_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv10_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv9_HeadVar__3_3;
    MR_Word make__program_target__conv8_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv9_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv8_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv9_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv7_HeadVar__3_3;
    MR_Word make__program_target__conv6_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv7_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv6_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv7_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv6_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv5_HeadVar__3_3;
    MR_Word make__program_target__conv4_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv5_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv4_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv5_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_ObjectTargets_12;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_22;

    {
      make__program_target__get_foreign_object_targets_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_ObjectTargets_12, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_STATE_VARIABLE_Info_22);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_ObjectTargets_12));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_22));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word make__program_target__LinkedTargetFile_9,
  MR_Word make__program_target__Globals_10,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_42,
  MR_Word * make__program_target__STATE_VARIABLE_Info_43)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MainModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_9, (MR_Integer) 0)));
    MR_Word make__program_target__FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_9, (MR_Integer) 1)));
    MR_Word make__program_target__DepsSuccess_17;
    MR_Word make__program_target__AllModules_18;
    MR_Word make__program_target__KeepGoing_19;
    MR_Word make__program_target__STATE_VARIABLE_Info_46_46;

    {
      make__dependencies__find_reachable_local_modules_8_p_0(make__program_target__Globals_10, make__program_target__MainModuleName_15, &make__program_target__DepsSuccess_17, &make__program_target__AllModules_18, make__program_target__STATE_VARIABLE_Info_0_42, &make__program_target__STATE_VARIABLE_Info_46_46);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 626, &make__program_target__KeepGoing_19);
    }
    make__program_target__succeeded = (make__program_target__DepsSuccess_17 == (MR_Integer) 0);
    if (make__program_target__succeeded)
      make__program_target__succeeded = (make__program_target__KeepGoing_19 == (MR_Integer) 0);
    if (make__program_target__succeeded)
      {
        *make__program_target__Succeeded_12 = (MR_Integer) 0;
        *make__program_target__STATE_VARIABLE_Info_43 = make__program_target__STATE_VARIABLE_Info_46_46;
      }
    else
      {
        MR_Word make__program_target__TypeCtorInfo_91_91;
        MR_Word make__program_target__TypeCtorInfo_99_99;
        MR_Word make__program_target__TypeCtorInfo_100_100;
        MR_Word make__program_target__TypeCtorInfo_101_101;
        MR_Word make__program_target__PIC_20;
        MR_Word make__program_target__CompilationTarget_21;
        MR_Word make__program_target__IntermediateTargetType_22;
        MR_Word make__program_target__ObjectTargetType_23;
        MR_Word make__program_target__AllModulesList_24;
        MR_Word make__program_target__ObjModulesAlpha_25;
        MR_Word make__program_target__ObjModules_26;
        MR_Word make__program_target__ObjModulesNonnested_27;
        MR_Word make__program_target__IntermediateTargetsNonnested_28;
        MR_Word make__program_target__ObjTargets_29;
        MR_Word make__program_target__ForeignObjTargetsList_30;
        MR_Word make__program_target__ForeignObjTargets_31;
        MR_Word make__program_target__IntsSucceeded_32;
        MR_Word make__program_target__BuildDepsSucceeded_33;
        MR_String make__program_target__OutputFileName_38;
        MR_Word make__program_target__MaybeTimestamp_39;
        MR_Word make__program_target__BuildDepsResult_40;
        MR_Word make__program_target__STATE_VARIABLE_Info_49_49;
        MR_Word make__program_target__STATE_VARIABLE_Info_51_51;
        MR_Word make__program_target__STATE_VARIABLE_Info_53_53;
        MR_Word make__program_target__Var_55;
        MR_Word make__program_target__STATE_VARIABLE_Info_56_56;
        MR_Word make__program_target__STATE_VARIABLE_Info_58_58;
        MR_Word make__program_target__STATE_VARIABLE_Info_75_75;
        MR_Word make__program_target__Var_78;
        MR_Word make__program_target__STATE_VARIABLE_Info_79_79;
        MR_String make__program_target__Var_81;
        MR_Word make__program_target__STATE_VARIABLE_Info_83_83;
        MR_Box make__program_target__conv3_STATE_VARIABLE_Info_56_56;
        MR_Box make__program_target__conv2_STATE_VARIABLE_IO_57_57;

        {
          backend_libs__compile_target_code__get_object_code_type_3_p_0(make__program_target__Globals_10, make__program_target__FileType_16, &make__program_target__PIC_20);
        }
        {
          libs__globals__get_target_2_p_0(make__program_target__Globals_10, &make__program_target__CompilationTarget_21);
        }
        switch (make__program_target__CompilationTarget_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__program_target__IntermediateTargetType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              {
                make__program_target__ObjectTargetType_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), make__program_target__ObjectTargetType_23, 0) = ((MR_Box) (make__program_target__PIC_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              make__program_target__IntermediateTargetType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              make__program_target__ObjectTargetType_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            }
            break;
          case (MR_Integer) 3:
            {
              make__program_target__IntermediateTargetType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
              make__program_target__ObjectTargetType_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
            }
            break;
          case (MR_Integer) 2:
            {
              make__program_target__IntermediateTargetType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              make__program_target__ObjectTargetType_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
            }
            break;
        }
        make__program_target__TypeCtorInfo_91_91 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          make__program_target__AllModulesList_24 = mercury__set__to_sorted_list_1_f_0(make__program_target__TypeCtorInfo_91_91, make__program_target__AllModules_18);
        }
        {
          make__program_target__get_target_modules_8_p_0(make__program_target__Globals_10, make__program_target__IntermediateTargetType_22, make__program_target__AllModulesList_24, &make__program_target__ObjModulesAlpha_25, make__program_target__STATE_VARIABLE_Info_46_46, &make__program_target__STATE_VARIABLE_Info_49_49);
        }
        {
          make__program_target__order_target_modules_7_p_0(make__program_target__Globals_10, make__program_target__ObjModulesAlpha_25, &make__program_target__ObjModules_26, make__program_target__STATE_VARIABLE_Info_49_49, &make__program_target__STATE_VARIABLE_Info_51_51);
        }
        {
          make__dependencies__remove_nested_modules_7_p_0(make__program_target__Globals_10, make__program_target__ObjModules_26, &make__program_target__ObjModulesNonnested_27, make__program_target__STATE_VARIABLE_Info_51_51, &make__program_target__STATE_VARIABLE_Info_53_53);
        }
        {
          make__program_target__IntermediateTargetsNonnested_28 = make__util__make_dependency_list_2_f_0(make__program_target__ObjModulesNonnested_27, make__program_target__IntermediateTargetType_22);
        }
        {
          make__program_target__ObjTargets_29 = make__util__make_dependency_list_2_f_0(make__program_target__ObjModules_26, make__program_target__ObjectTargetType_23);
        }
        {
          make__program_target__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_5[14]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_55, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__program_target__Var_55, 3) = ((MR_Box) (make__program_target__Globals_10));
          MR_hl_field(MR_mktag(0), make__program_target__Var_55, 4) = ((MR_Box) (make__program_target__PIC_20));
        }
        make__program_target__TypeCtorInfo_99_99 = (MR_Word) &make__make__type_ctor_info_make_info_0;
        make__program_target__TypeCtorInfo_100_100 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        {
          mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_91_91, (MR_Word) &make__program_target_scalar_common_1[0], make__program_target__TypeCtorInfo_99_99, make__program_target__TypeCtorInfo_100_100, make__program_target__Var_55, make__program_target__ObjModules_26, &make__program_target__ForeignObjTargetsList_30, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_53_53)), &make__program_target__conv3_STATE_VARIABLE_Info_56_56, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_57_57);
        }
        make__program_target__STATE_VARIABLE_Info_56_56 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_56_56);
        make__program_target__TypeCtorInfo_101_101 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
        {
          make__program_target__ForeignObjTargets_31 = mercury__list__condense_1_f_0(make__program_target__TypeCtorInfo_101_101, make__program_target__ForeignObjTargetsList_30);
        }
        {
          make__program_target__make_all_interface_files_7_p_0(make__program_target__Globals_10, make__program_target__AllModulesList_24, &make__program_target__IntsSucceeded_32, make__program_target__STATE_VARIABLE_Info_56_56, &make__program_target__STATE_VARIABLE_Info_58_58);
        }
        make__program_target__succeeded = (make__program_target__IntsSucceeded_32 == (MR_Integer) 0);
        if (make__program_target__succeeded)
          make__program_target__succeeded = (make__program_target__KeepGoing_19 == (MR_Integer) 0);
        if (make__program_target__succeeded)
          {
            make__program_target__BuildDepsSucceeded_33 = (MR_Integer) 0;
            make__program_target__STATE_VARIABLE_Info_75_75 = make__program_target__STATE_VARIABLE_Info_58_58;
          }
        else
          {
            MR_Word make__program_target__BuildDepsSucceeded0_34;
            MR_Word make__program_target__BuildDepsSucceeded1_37;
            MR_Word make__program_target__STATE_VARIABLE_Info_61_61;
            MR_Word make__program_target__STATE_VARIABLE_Info_69_69;

            {
              make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(make__program_target__TypeCtorInfo_101_101, make__program_target__KeepGoing_19, (MR_Word) &make__program_target_scalar_common_2[15], make__program_target__Globals_10, make__program_target__IntermediateTargetsNonnested_28, &make__program_target__BuildDepsSucceeded0_34, make__program_target__STATE_VARIABLE_Info_58_58, &make__program_target__STATE_VARIABLE_Info_61_61);
            }
            switch (make__program_target__BuildDepsSucceeded0_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  make__program_target__BuildDepsSucceeded1_37 = (MR_Integer) 0;
                  make__program_target__STATE_VARIABLE_Info_69_69 = make__program_target__STATE_VARIABLE_Info_61_61;
                }
                break;
              case (MR_Integer) 1:
                {
                  make__program_target__succeeded = (make__program_target__ObjectTargetType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                  if (make__program_target__succeeded)
                    {
                      MR_Word make__program_target__BuildJavaSucceeded_35;
                      MR_Word make__program_target__STATE_VARIABLE_Info_63_63;

                      {
                        make__program_target__make_java_files_8_p_0(make__program_target__Globals_10, make__program_target__MainModuleName_15, make__program_target__ObjModules_26, &make__program_target__BuildJavaSucceeded_35, make__program_target__STATE_VARIABLE_Info_61_61, &make__program_target__STATE_VARIABLE_Info_63_63);
                      }
                      switch (make__program_target__BuildJavaSucceeded_35) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            make__program_target__BuildDepsSucceeded1_37 = (MR_Integer) 0;
                            make__program_target__STATE_VARIABLE_Info_69_69 = make__program_target__STATE_VARIABLE_Info_63_63;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word make__program_target__NoRebuildGlobals_36;

                            {
                              libs__globals__set_option_4_p_0((MR_Integer) 625, (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[2]), make__program_target__Globals_10, &make__program_target__NoRebuildGlobals_36);
                            }
                            {
                              make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(make__program_target__TypeCtorInfo_101_101, make__program_target__KeepGoing_19, (MR_Word) &make__program_target_scalar_common_2[16], make__program_target__NoRebuildGlobals_36, make__program_target__ObjTargets_29, &make__program_target__BuildDepsSucceeded1_37, make__program_target__STATE_VARIABLE_Info_63_63, &make__program_target__STATE_VARIABLE_Info_69_69);
                            }
                          }
                          break;
                      }
                    }
                  else
                    {
                      {
                        make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(make__program_target__TypeCtorInfo_101_101, make__program_target__KeepGoing_19, (MR_Word) &make__program_target_scalar_common_2[17], make__program_target__Globals_10, make__program_target__ObjTargets_29, &make__program_target__BuildDepsSucceeded1_37, make__program_target__STATE_VARIABLE_Info_61_61, &make__program_target__STATE_VARIABLE_Info_69_69);
                      }
                    }
                }
                break;
            }
            switch (make__program_target__BuildDepsSucceeded1_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  make__program_target__BuildDepsSucceeded_33 = (MR_Integer) 0;
                  make__program_target__STATE_VARIABLE_Info_75_75 = make__program_target__STATE_VARIABLE_Info_69_69;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box make__program_target__conv13_STATE_VARIABLE_Info_75_75;
                  MR_Box make__program_target__conv12_STATE_VARIABLE_IO_76_76;

                  {
                    make__util__foldl2_maybe_stop_at_error_9_p_0(make__program_target__TypeCtorInfo_101_101, make__program_target__TypeCtorInfo_99_99, make__program_target__TypeCtorInfo_100_100, make__program_target__KeepGoing_19, (MR_Word) &make__program_target_scalar_common_2[18], make__program_target__Globals_10, make__program_target__ForeignObjTargets_31, &make__program_target__BuildDepsSucceeded_33, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_69_69)), &make__program_target__conv13_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv12_STATE_VARIABLE_IO_76_76);
                  }
                  make__program_target__STATE_VARIABLE_Info_75_75 = ((MR_Word) make__program_target__conv13_STATE_VARIABLE_Info_75_75);
                }
                break;
            }
          }
        {
          make__util__linked_target_file_name_6_p_0(make__program_target__Globals_10, make__program_target__MainModuleName_15, make__program_target__FileType_16, &make__program_target__OutputFileName_38);
        }
        {
          make__program_target__Var_81 = mercury__dir__this_directory_0_f_0();
        }
        {
          make__program_target__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_78, 0) = ((MR_Box) (make__program_target__Var_81));
          MR_hl_field(MR_mktag(1), make__program_target__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          make__util__get_file_timestamp_7_p_0(make__program_target__Var_78, make__program_target__OutputFileName_38, &make__program_target__MaybeTimestamp_39, make__program_target__STATE_VARIABLE_Info_75_75, &make__program_target__STATE_VARIABLE_Info_79_79);
        }
        {
          make__dependencies__check_dependencies_10_p_0(make__program_target__Globals_10, make__program_target__OutputFileName_38, make__program_target__MaybeTimestamp_39, make__program_target__BuildDepsSucceeded_33, make__program_target__ObjTargets_29, &make__program_target__BuildDepsResult_40, make__program_target__STATE_VARIABLE_Info_79_79, &make__program_target__STATE_VARIABLE_Info_83_83);
        }
        make__program_target__succeeded = (make__program_target__DepsSuccess_17 == (MR_Integer) 1);
        if (make__program_target__succeeded)
          {
            make__program_target__succeeded = (make__program_target__BuildDepsResult_40 == (MR_Integer) 2);
            make__program_target__succeeded = !(make__program_target__succeeded);
          }
        if (make__program_target__succeeded)
          {
            MR_Word make__program_target__VeryVerbose_41;
            MR_Word make__program_target__Var_86;
            MR_Word make__program_target__Var_87;
            MR_Word make__program_target__Var_90;
            MR_Box make__program_target__conv19_STATE_VARIABLE_Info_43;

            {
              libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 57, &make__program_target__VeryVerbose_41);
            }
            {
              make__program_target__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 0) = ((MR_Box) (&make__program_target_scalar_common_15[0]));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 3) = ((MR_Box) (make__program_target__MainModuleName_15));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 4) = ((MR_Box) (make__program_target__FileType_16));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 5) = ((MR_Box) (make__program_target__OutputFileName_38));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 6) = ((MR_Box) (make__program_target__MaybeTimestamp_39));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 7) = ((MR_Box) (make__program_target__AllModules_18));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 8) = ((MR_Box) (make__program_target__ObjModules_26));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 9) = ((MR_Box) (make__program_target__CompilationTarget_21));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 10) = ((MR_Box) (make__program_target__PIC_20));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 11) = ((MR_Box) (make__program_target__DepsSuccess_17));
              MR_hl_field(MR_mktag(0), make__program_target__Var_90, 12) = ((MR_Box) (make__program_target__BuildDepsResult_40));
            }
            {
              make__program_target__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_5[15]));
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7));
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 3) = ((MR_Box) (make__program_target__Globals_10));
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 4) = ((MR_Box) (make__program_target__MainModuleName_15));
              MR_hl_field(MR_mktag(0), make__program_target__Var_86, 5) = ((MR_Box) (make__program_target__Var_90));
            }
            {
              make__program_target__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 0) = ((MR_Box) (&make__program_target_scalar_common_5[16]));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 3) = ((MR_Box) (make__program_target__Globals_10));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 4) = ((MR_Box) (make__program_target__MainModuleName_15));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 5) = ((MR_Box) (make__program_target__FileType_16));
              MR_hl_field(MR_mktag(0), make__program_target__Var_87, 6) = ((MR_Box) (make__program_target__OutputFileName_38));
            }
            {
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__program_target__TypeCtorInfo_99_99, make__program_target__VeryVerbose_41, make__program_target__Var_86, make__program_target__Var_87, make__program_target__Succeeded_12, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_83_83)), &make__program_target__conv19_STATE_VARIABLE_Info_43);
            }
            *make__program_target__STATE_VARIABLE_Info_43 = ((MR_Word) make__program_target__conv19_STATE_VARIABLE_Info_43);
          }
        else
          {
            *make__program_target__Succeeded_12 = (MR_Integer) 0;
            *make__program_target__STATE_VARIABLE_Info_43 = make__program_target__STATE_VARIABLE_Info_83_83;
          }
      }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_HeadVar__3_3;
    MR_Word make__program_target__conv0_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__KeepGoing_22,
  MR_Word make__program_target__HeadVar__4_68,
  MR_Word * make__program_target__HeadVar__5_160,
  MR_Word make__program_target__HeadVar__6_161,
  MR_Word * make__program_target__HeadVar__7_162)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__program_target__KeepGoing_22, (MR_Word) &make__program_target_scalar_common_2[14], make__program_target__Globals_11, make__program_target__HeadVar__4_68, make__program_target__HeadVar__5_160, make__program_target__HeadVar__6_161, make__program_target__HeadVar__7_162);
    }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_13;

    {
      make__program_target__remove_cache_dir_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_STATE_VARIABLE_Info_13);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__IntermodAnalysis_13;
    MR_Word make__program_target__Caching_14;
    MR_String make__program_target__CacheDir0_15;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 335, &make__program_target__IntermodAnalysis_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 337, &make__program_target__Caching_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 669, &make__program_target__CacheDir0_15);
    }
    make__program_target__succeeded = (make__program_target__IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(make__program_target__succeeded))
      {
        make__program_target__succeeded = (make__program_target__Caching_14 == (MR_Integer) 0);
        if (!(make__program_target__succeeded))
          {
            make__program_target__succeeded = (strcmp(make__program_target__CacheDir0_15, (MR_String) "") == 0);
            make__program_target__succeeded = !(make__program_target__succeeded);
            if (!(make__program_target__succeeded))
              {
                MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
                MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
                MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
                MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
                MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
                MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
                MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
                MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
                MR_Word make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
                MR_Word make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
                MR_Word make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
                MR_Word make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
                MR_Word make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
                MR_Word make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
                MR_Word make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
                MR_Word make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
                MR_Word make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
                MR_Word make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
                MR_Integer make__program_target__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
                MR_Word make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));

                {
                  make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), make__program_target__Var_28);
                }
              }
          }
      }
    if (make__program_target__succeeded)
      {
        make__program_target__make_linked_target_1_8_p_0(make__program_target__Var_129, make__program_target__Var_130, make__program_target__Var_131, make__program_target__Succeeded_10, make__program_target__STATE_VARIABLE_Info_0_21, make__program_target__STATE_VARIABLE_Info_22);
      }
    else
      {
        MR_Word make__program_target__Succeeded0_17;
        MR_String make__program_target__CacheDir_18;

        {
          make__program_target__create_analysis_cache_dir_5_p_0(make__program_target__Globals_8, &make__program_target__Succeeded0_17, &make__program_target__CacheDir_18);
        }
        switch (make__program_target__Succeeded0_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__Succeeded_10 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_22 = make__program_target__STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__OrigOptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              MR_Word make__program_target__VeryVerbose_20;
              MR_Word make__program_target__STATE_VARIABLE_Info_32_32;
              MR_Word make__program_target__Var_33;
              MR_Word make__program_target__Var_34;
              MR_Word make__program_target__Var_35;
              MR_Word make__program_target__Var_38;
              MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__STATE_VARIABLE_Info_41_41;
              MR_Word make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              MR_Word make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              MR_Word make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              MR_Word make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              MR_Word make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              MR_Word make__program_target__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              MR_Word make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              MR_Word make__program_target__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              MR_Word make__program_target__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              MR_Word make__program_target__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              MR_Word make__program_target__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              MR_Word make__program_target__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              MR_Word make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              MR_Word make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              MR_Word make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              MR_Word make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              MR_Word make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              MR_Word make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              MR_Word make__program_target__Var_82;
              MR_Word make__program_target__Var_83;
              MR_Word make__program_target__Var_84;
              MR_Word make__program_target__Var_85;
              MR_Word make__program_target__Var_87;
              MR_Word make__program_target__Var_88;
              MR_Word make__program_target__Var_89;
              MR_Word make__program_target__Var_90;
              MR_Word make__program_target__Var_91;
              MR_Word make__program_target__Var_92;
              MR_Word make__program_target__Var_93;
              MR_Word make__program_target__Var_94;
              MR_Word make__program_target__Var_95;
              MR_Word make__program_target__Var_96;
              MR_Word make__program_target__Var_97;
              MR_Word make__program_target__Var_98;
              MR_Word make__program_target__Var_99;
              MR_Integer make__program_target__Var_100;
              MR_Word make__program_target__Var_101;
              MR_Word make__program_target__Var_86;
              MR_Box make__program_target__conv1_STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__Var_102;
              MR_Word make__program_target__Var_103;
              MR_Word make__program_target__Var_104;
              MR_Word make__program_target__Var_105;
              MR_Word make__program_target__Var_107;
              MR_Word make__program_target__Var_108;
              MR_Word make__program_target__Var_109;
              MR_Word make__program_target__Var_110;
              MR_Word make__program_target__Var_111;
              MR_Word make__program_target__Var_112;
              MR_Word make__program_target__Var_113;
              MR_Word make__program_target__Var_114;
              MR_Word make__program_target__Var_115;
              MR_Word make__program_target__Var_116;
              MR_Word make__program_target__Var_117;
              MR_Word make__program_target__Var_118;
              MR_Word make__program_target__Var_119;
              MR_Integer make__program_target__Var_120;
              MR_Word make__program_target__Var_121;
              MR_Word make__program_target__Var_106;

              {
                make__program_target__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 0) = ((MR_Box) (make__program_target__CacheDir_18));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__Var_35));
              }
              {
                make__program_target__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__OrigOptionArgs_19, make__program_target__Var_34);
              }
              make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__program_target__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                make__program_target__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (make__program_target__Var_82));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (make__program_target__Var_83));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (make__program_target__Var_84));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (make__program_target__Var_85));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (make__program_target__Var_33));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (make__program_target__Var_87));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (make__program_target__Var_88));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (make__program_target__Var_89));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (make__program_target__Var_90));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (make__program_target__Var_91));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (make__program_target__Var_92));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (make__program_target__Var_93));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (make__program_target__Var_94));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 13) = ((MR_Box) (make__program_target__Var_95));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (make__program_target__Var_96));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (make__program_target__Var_97));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (make__program_target__Var_98));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (make__program_target__Var_99));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (make__program_target__Var_100));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 19) = ((MR_Box) (make__program_target__Var_101));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 57, &make__program_target__VeryVerbose_20);
              }
              {
                make__program_target__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_11[5]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 3) = ((MR_Box) (make__program_target__Globals_8));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 4) = ((MR_Box) (make__program_target__CacheDir_18));
              }
              {
                libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__VeryVerbose_20, make__program_target__P_9, make__program_target__Var_38, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              }
              make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              {
                make__program_target__remove_cache_dir_6_p_0(make__program_target__Globals_8, make__program_target__CacheDir_18, make__program_target__STATE_VARIABLE_Info_39_39, &make__program_target__STATE_VARIABLE_Info_41_41);
              }
              make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
              make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
              make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
              make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
              make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
              make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
              make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 6)));
              make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 7)));
              make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 8)));
              make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 9)));
              make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 10)));
              make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 11)));
              make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 12)));
              make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
              make__program_target__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 14)));
              make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 15)));
              make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 16)));
              make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 17)));
              make__program_target__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 18)));
              make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__program_target__STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Var_103));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_104));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_105));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__OrigOptionArgs_19));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_107));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_108));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_109));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_110));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_111));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_112));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_113));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_114));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_115));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_116));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_117));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_118));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_119));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_120));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_121));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_13;

    {
      make__program_target__remove_cache_dir_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_STATE_VARIABLE_Info_13);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__IntermodAnalysis_13;
    MR_Word make__program_target__Caching_14;
    MR_String make__program_target__CacheDir0_15;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 335, &make__program_target__IntermodAnalysis_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 337, &make__program_target__Caching_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 669, &make__program_target__CacheDir0_15);
    }
    make__program_target__succeeded = (make__program_target__IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(make__program_target__succeeded))
      {
        make__program_target__succeeded = (make__program_target__Caching_14 == (MR_Integer) 0);
        if (!(make__program_target__succeeded))
          {
            make__program_target__succeeded = (strcmp(make__program_target__CacheDir0_15, (MR_String) "") == 0);
            make__program_target__succeeded = !(make__program_target__succeeded);
            if (!(make__program_target__succeeded))
              {
                MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
                MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
                MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
                MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
                MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
                MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
                MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
                MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
                MR_Word make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
                MR_Word make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
                MR_Word make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
                MR_Word make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
                MR_Word make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
                MR_Word make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
                MR_Word make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
                MR_Word make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
                MR_Word make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
                MR_Word make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
                MR_Integer make__program_target__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
                MR_Word make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));

                {
                  make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), make__program_target__Var_28);
                }
              }
          }
      }
    if (make__program_target__succeeded)
      {
        make__program_target__build_library_8_p_0(make__program_target__Var_129, make__program_target__Var_130, make__program_target__Var_131, make__program_target__Succeeded_10, make__program_target__STATE_VARIABLE_Info_0_21, make__program_target__STATE_VARIABLE_Info_22);
      }
    else
      {
        MR_Word make__program_target__Succeeded0_17;
        MR_String make__program_target__CacheDir_18;

        {
          make__program_target__create_analysis_cache_dir_5_p_0(make__program_target__Globals_8, &make__program_target__Succeeded0_17, &make__program_target__CacheDir_18);
        }
        switch (make__program_target__Succeeded0_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__Succeeded_10 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_22 = make__program_target__STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__OrigOptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              MR_Word make__program_target__VeryVerbose_20;
              MR_Word make__program_target__STATE_VARIABLE_Info_32_32;
              MR_Word make__program_target__Var_33;
              MR_Word make__program_target__Var_34;
              MR_Word make__program_target__Var_35;
              MR_Word make__program_target__Var_38;
              MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__STATE_VARIABLE_Info_41_41;
              MR_Word make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              MR_Word make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              MR_Word make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              MR_Word make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              MR_Word make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              MR_Word make__program_target__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              MR_Word make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              MR_Word make__program_target__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              MR_Word make__program_target__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              MR_Word make__program_target__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              MR_Word make__program_target__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              MR_Word make__program_target__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              MR_Word make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              MR_Word make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              MR_Word make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              MR_Word make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              MR_Word make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              MR_Word make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              MR_Word make__program_target__Var_82;
              MR_Word make__program_target__Var_83;
              MR_Word make__program_target__Var_84;
              MR_Word make__program_target__Var_85;
              MR_Word make__program_target__Var_87;
              MR_Word make__program_target__Var_88;
              MR_Word make__program_target__Var_89;
              MR_Word make__program_target__Var_90;
              MR_Word make__program_target__Var_91;
              MR_Word make__program_target__Var_92;
              MR_Word make__program_target__Var_93;
              MR_Word make__program_target__Var_94;
              MR_Word make__program_target__Var_95;
              MR_Word make__program_target__Var_96;
              MR_Word make__program_target__Var_97;
              MR_Word make__program_target__Var_98;
              MR_Word make__program_target__Var_99;
              MR_Integer make__program_target__Var_100;
              MR_Word make__program_target__Var_101;
              MR_Word make__program_target__Var_86;
              MR_Box make__program_target__conv1_STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__Var_102;
              MR_Word make__program_target__Var_103;
              MR_Word make__program_target__Var_104;
              MR_Word make__program_target__Var_105;
              MR_Word make__program_target__Var_107;
              MR_Word make__program_target__Var_108;
              MR_Word make__program_target__Var_109;
              MR_Word make__program_target__Var_110;
              MR_Word make__program_target__Var_111;
              MR_Word make__program_target__Var_112;
              MR_Word make__program_target__Var_113;
              MR_Word make__program_target__Var_114;
              MR_Word make__program_target__Var_115;
              MR_Word make__program_target__Var_116;
              MR_Word make__program_target__Var_117;
              MR_Word make__program_target__Var_118;
              MR_Word make__program_target__Var_119;
              MR_Integer make__program_target__Var_120;
              MR_Word make__program_target__Var_121;
              MR_Word make__program_target__Var_106;

              {
                make__program_target__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 0) = ((MR_Box) (make__program_target__CacheDir_18));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__Var_35));
              }
              {
                make__program_target__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__OrigOptionArgs_19, make__program_target__Var_34);
              }
              make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__program_target__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                make__program_target__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (make__program_target__Var_82));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (make__program_target__Var_83));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (make__program_target__Var_84));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (make__program_target__Var_85));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (make__program_target__Var_33));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (make__program_target__Var_87));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (make__program_target__Var_88));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (make__program_target__Var_89));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (make__program_target__Var_90));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (make__program_target__Var_91));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (make__program_target__Var_92));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (make__program_target__Var_93));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (make__program_target__Var_94));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 13) = ((MR_Box) (make__program_target__Var_95));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (make__program_target__Var_96));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (make__program_target__Var_97));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (make__program_target__Var_98));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (make__program_target__Var_99));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (make__program_target__Var_100));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 19) = ((MR_Box) (make__program_target__Var_101));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 57, &make__program_target__VeryVerbose_20);
              }
              {
                make__program_target__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_11[5]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 3) = ((MR_Box) (make__program_target__Globals_8));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 4) = ((MR_Box) (make__program_target__CacheDir_18));
              }
              {
                libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__VeryVerbose_20, make__program_target__P_9, make__program_target__Var_38, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              }
              make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              {
                make__program_target__remove_cache_dir_6_p_0(make__program_target__Globals_8, make__program_target__CacheDir_18, make__program_target__STATE_VARIABLE_Info_39_39, &make__program_target__STATE_VARIABLE_Info_41_41);
              }
              make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
              make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
              make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
              make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
              make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
              make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
              make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 6)));
              make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 7)));
              make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 8)));
              make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 9)));
              make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 10)));
              make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 11)));
              make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 12)));
              make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
              make__program_target__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 14)));
              make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 15)));
              make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 16)));
              make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 17)));
              make__program_target__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 18)));
              make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__program_target__STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Var_103));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_104));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_105));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__OrigOptionArgs_19));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_107));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_108));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_109));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_110));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_111));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_112));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_113));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_114));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_115));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_116));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_117));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_118));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_119));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_120));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_121));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_13;

    {
      make__program_target__remove_cache_dir_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_STATE_VARIABLE_Info_13);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_131,
  MR_Word make__program_target__Var_132,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__IntermodAnalysis_13;
    MR_Word make__program_target__Caching_14;
    MR_String make__program_target__CacheDir0_15;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 335, &make__program_target__IntermodAnalysis_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 337, &make__program_target__Caching_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 669, &make__program_target__CacheDir0_15);
    }
    make__program_target__succeeded = (make__program_target__IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(make__program_target__succeeded))
      {
        make__program_target__succeeded = (make__program_target__Caching_14 == (MR_Integer) 0);
        if (!(make__program_target__succeeded))
          {
            make__program_target__succeeded = (strcmp(make__program_target__CacheDir0_15, (MR_String) "") == 0);
            make__program_target__succeeded = !(make__program_target__succeeded);
            if (!(make__program_target__succeeded))
              {
                MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
                MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
                MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
                MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
                MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
                MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
                MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
                MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
                MR_Word make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
                MR_Word make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
                MR_Word make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
                MR_Word make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
                MR_Word make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
                MR_Word make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
                MR_Word make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
                MR_Word make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
                MR_Word make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
                MR_Word make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
                MR_Integer make__program_target__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
                MR_Word make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));

                {
                  make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), make__program_target__Var_28);
                }
              }
          }
      }
    if (make__program_target__succeeded)
      {
        make__program_target__build_analysis_files_9_p_0(make__program_target__Var_129, make__program_target__Var_130, make__program_target__Var_131, make__program_target__Var_132, make__program_target__Succeeded_10, make__program_target__STATE_VARIABLE_Info_0_21, make__program_target__STATE_VARIABLE_Info_22);
      }
    else
      {
        MR_Word make__program_target__Succeeded0_17;
        MR_String make__program_target__CacheDir_18;

        {
          make__program_target__create_analysis_cache_dir_5_p_0(make__program_target__Globals_8, &make__program_target__Succeeded0_17, &make__program_target__CacheDir_18);
        }
        switch (make__program_target__Succeeded0_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__Succeeded_10 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_22 = make__program_target__STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__OrigOptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              MR_Word make__program_target__VeryVerbose_20;
              MR_Word make__program_target__STATE_VARIABLE_Info_32_32;
              MR_Word make__program_target__Var_33;
              MR_Word make__program_target__Var_34;
              MR_Word make__program_target__Var_35;
              MR_Word make__program_target__Var_38;
              MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__STATE_VARIABLE_Info_41_41;
              MR_Word make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              MR_Word make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              MR_Word make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              MR_Word make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              MR_Word make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              MR_Word make__program_target__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              MR_Word make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              MR_Word make__program_target__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              MR_Word make__program_target__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              MR_Word make__program_target__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              MR_Word make__program_target__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              MR_Word make__program_target__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              MR_Word make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              MR_Word make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              MR_Word make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              MR_Word make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              MR_Word make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              MR_Word make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              MR_Word make__program_target__Var_82;
              MR_Word make__program_target__Var_83;
              MR_Word make__program_target__Var_84;
              MR_Word make__program_target__Var_85;
              MR_Word make__program_target__Var_87;
              MR_Word make__program_target__Var_88;
              MR_Word make__program_target__Var_89;
              MR_Word make__program_target__Var_90;
              MR_Word make__program_target__Var_91;
              MR_Word make__program_target__Var_92;
              MR_Word make__program_target__Var_93;
              MR_Word make__program_target__Var_94;
              MR_Word make__program_target__Var_95;
              MR_Word make__program_target__Var_96;
              MR_Word make__program_target__Var_97;
              MR_Word make__program_target__Var_98;
              MR_Word make__program_target__Var_99;
              MR_Integer make__program_target__Var_100;
              MR_Word make__program_target__Var_101;
              MR_Word make__program_target__Var_86;
              MR_Box make__program_target__conv1_STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__Var_102;
              MR_Word make__program_target__Var_103;
              MR_Word make__program_target__Var_104;
              MR_Word make__program_target__Var_105;
              MR_Word make__program_target__Var_107;
              MR_Word make__program_target__Var_108;
              MR_Word make__program_target__Var_109;
              MR_Word make__program_target__Var_110;
              MR_Word make__program_target__Var_111;
              MR_Word make__program_target__Var_112;
              MR_Word make__program_target__Var_113;
              MR_Word make__program_target__Var_114;
              MR_Word make__program_target__Var_115;
              MR_Word make__program_target__Var_116;
              MR_Word make__program_target__Var_117;
              MR_Word make__program_target__Var_118;
              MR_Word make__program_target__Var_119;
              MR_Integer make__program_target__Var_120;
              MR_Word make__program_target__Var_121;
              MR_Word make__program_target__Var_106;

              {
                make__program_target__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 0) = ((MR_Box) (make__program_target__CacheDir_18));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__Var_35));
              }
              {
                make__program_target__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__OrigOptionArgs_19, make__program_target__Var_34);
              }
              make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__program_target__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                make__program_target__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (make__program_target__Var_82));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (make__program_target__Var_83));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (make__program_target__Var_84));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (make__program_target__Var_85));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (make__program_target__Var_33));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (make__program_target__Var_87));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (make__program_target__Var_88));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (make__program_target__Var_89));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (make__program_target__Var_90));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (make__program_target__Var_91));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (make__program_target__Var_92));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (make__program_target__Var_93));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (make__program_target__Var_94));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 13) = ((MR_Box) (make__program_target__Var_95));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (make__program_target__Var_96));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (make__program_target__Var_97));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (make__program_target__Var_98));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (make__program_target__Var_99));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (make__program_target__Var_100));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 19) = ((MR_Box) (make__program_target__Var_101));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 57, &make__program_target__VeryVerbose_20);
              }
              {
                make__program_target__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_11[5]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 3) = ((MR_Box) (make__program_target__Globals_8));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 4) = ((MR_Box) (make__program_target__CacheDir_18));
              }
              {
                libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__VeryVerbose_20, make__program_target__P_9, make__program_target__Var_38, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              }
              make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              {
                make__program_target__remove_cache_dir_6_p_0(make__program_target__Globals_8, make__program_target__CacheDir_18, make__program_target__STATE_VARIABLE_Info_39_39, &make__program_target__STATE_VARIABLE_Info_41_41);
              }
              make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
              make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
              make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
              make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
              make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
              make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
              make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 6)));
              make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 7)));
              make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 8)));
              make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 9)));
              make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 10)));
              make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 11)));
              make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 12)));
              make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
              make__program_target__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 14)));
              make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 15)));
              make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 16)));
              make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 17)));
              make__program_target__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 18)));
              make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__program_target__STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Var_103));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_104));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_105));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__OrigOptionArgs_19));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_107));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_108));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_109));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_110));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_111));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_112));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_113));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_114));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_115));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_116));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_117));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_118));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_119));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_120));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_121));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_13;

    {
      make__program_target__remove_cache_dir_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_STATE_VARIABLE_Info_13);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(
  MR_Word make__program_target__Var_129,
  MR_Word make__program_target__Var_130,
  MR_Word make__program_target__Var_132,
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__P_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__IntermodAnalysis_13;
    MR_Word make__program_target__Caching_14;
    MR_String make__program_target__CacheDir0_15;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 335, &make__program_target__IntermodAnalysis_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 337, &make__program_target__Caching_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 669, &make__program_target__CacheDir0_15);
    }
    make__program_target__succeeded = (make__program_target__IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(make__program_target__succeeded))
      {
        make__program_target__succeeded = (make__program_target__Caching_14 == (MR_Integer) 0);
        if (!(make__program_target__succeeded))
          {
            make__program_target__succeeded = (strcmp(make__program_target__CacheDir0_15, (MR_String) "") == 0);
            make__program_target__succeeded = !(make__program_target__succeeded);
            if (!(make__program_target__succeeded))
              {
                MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
                MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
                MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
                MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
                MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
                MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
                MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
                MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
                MR_Word make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
                MR_Word make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
                MR_Word make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
                MR_Word make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
                MR_Word make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
                MR_Word make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
                MR_Word make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
                MR_Word make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
                MR_Word make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
                MR_Word make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
                MR_Integer make__program_target__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
                MR_Word make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));

                {
                  make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), make__program_target__Var_28);
                }
              }
          }
      }
    if (make__program_target__succeeded)
      {
        make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1__ho5_9_p_0(make__program_target__Var_129, make__program_target__Var_130, make__program_target__Var_132, make__program_target__Succeeded_10, make__program_target__STATE_VARIABLE_Info_0_21, make__program_target__STATE_VARIABLE_Info_22);
      }
    else
      {
        MR_Word make__program_target__Succeeded0_17;
        MR_String make__program_target__CacheDir_18;

        {
          make__program_target__create_analysis_cache_dir_5_p_0(make__program_target__Globals_8, &make__program_target__Succeeded0_17, &make__program_target__CacheDir_18);
        }
        switch (make__program_target__Succeeded0_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__Succeeded_10 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_22 = make__program_target__STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__OrigOptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              MR_Word make__program_target__VeryVerbose_20;
              MR_Word make__program_target__STATE_VARIABLE_Info_32_32;
              MR_Word make__program_target__Var_33;
              MR_Word make__program_target__Var_34;
              MR_Word make__program_target__Var_35;
              MR_Word make__program_target__Var_38;
              MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__STATE_VARIABLE_Info_41_41;
              MR_Word make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              MR_Word make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              MR_Word make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              MR_Word make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              MR_Word make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              MR_Word make__program_target__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              MR_Word make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              MR_Word make__program_target__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              MR_Word make__program_target__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              MR_Word make__program_target__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              MR_Word make__program_target__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              MR_Word make__program_target__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              MR_Word make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              MR_Word make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              MR_Word make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              MR_Word make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              MR_Word make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              MR_Word make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              MR_Word make__program_target__Var_82;
              MR_Word make__program_target__Var_83;
              MR_Word make__program_target__Var_84;
              MR_Word make__program_target__Var_85;
              MR_Word make__program_target__Var_87;
              MR_Word make__program_target__Var_88;
              MR_Word make__program_target__Var_89;
              MR_Word make__program_target__Var_90;
              MR_Word make__program_target__Var_91;
              MR_Word make__program_target__Var_92;
              MR_Word make__program_target__Var_93;
              MR_Word make__program_target__Var_94;
              MR_Word make__program_target__Var_95;
              MR_Word make__program_target__Var_96;
              MR_Word make__program_target__Var_97;
              MR_Word make__program_target__Var_98;
              MR_Word make__program_target__Var_99;
              MR_Integer make__program_target__Var_100;
              MR_Word make__program_target__Var_101;
              MR_Word make__program_target__Var_86;
              MR_Box make__program_target__conv1_STATE_VARIABLE_Info_39_39;
              MR_Word make__program_target__Var_102;
              MR_Word make__program_target__Var_103;
              MR_Word make__program_target__Var_104;
              MR_Word make__program_target__Var_105;
              MR_Word make__program_target__Var_107;
              MR_Word make__program_target__Var_108;
              MR_Word make__program_target__Var_109;
              MR_Word make__program_target__Var_110;
              MR_Word make__program_target__Var_111;
              MR_Word make__program_target__Var_112;
              MR_Word make__program_target__Var_113;
              MR_Word make__program_target__Var_114;
              MR_Word make__program_target__Var_115;
              MR_Word make__program_target__Var_116;
              MR_Word make__program_target__Var_117;
              MR_Word make__program_target__Var_118;
              MR_Word make__program_target__Var_119;
              MR_Integer make__program_target__Var_120;
              MR_Word make__program_target__Var_121;
              MR_Word make__program_target__Var_106;

              {
                make__program_target__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 0) = ((MR_Box) (make__program_target__CacheDir_18));
                MR_hl_field(MR_mktag(1), make__program_target__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
                MR_hl_field(MR_mktag(1), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__Var_35));
              }
              {
                make__program_target__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__OrigOptionArgs_19, make__program_target__Var_34);
              }
              make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__program_target__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                make__program_target__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (make__program_target__Var_82));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (make__program_target__Var_83));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (make__program_target__Var_84));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (make__program_target__Var_85));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (make__program_target__Var_33));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (make__program_target__Var_87));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (make__program_target__Var_88));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (make__program_target__Var_89));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (make__program_target__Var_90));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (make__program_target__Var_91));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (make__program_target__Var_92));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (make__program_target__Var_93));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (make__program_target__Var_94));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 13) = ((MR_Box) (make__program_target__Var_95));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (make__program_target__Var_96));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (make__program_target__Var_97));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (make__program_target__Var_98));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (make__program_target__Var_99));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (make__program_target__Var_100));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_32_32, 19) = ((MR_Box) (make__program_target__Var_101));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 57, &make__program_target__VeryVerbose_20);
              }
              {
                make__program_target__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_11[5]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 3) = ((MR_Box) (make__program_target__Globals_8));
                MR_hl_field(MR_mktag(0), make__program_target__Var_38, 4) = ((MR_Box) (make__program_target__CacheDir_18));
              }
              {
                libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__VeryVerbose_20, make__program_target__P_9, make__program_target__Var_38, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_32)), &make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              }
              make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv1_STATE_VARIABLE_Info_39_39);
              {
                make__program_target__remove_cache_dir_6_p_0(make__program_target__Globals_8, make__program_target__CacheDir_18, make__program_target__STATE_VARIABLE_Info_39_39, &make__program_target__STATE_VARIABLE_Info_41_41);
              }
              make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
              make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
              make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
              make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
              make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
              make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
              make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 6)));
              make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 7)));
              make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 8)));
              make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 9)));
              make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 10)));
              make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 11)));
              make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 12)));
              make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
              make__program_target__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 14)));
              make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 15)));
              make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 16)));
              make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 17)));
              make__program_target__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 18)));
              make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_41_41, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__program_target__STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Var_103));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_104));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_105));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__OrigOptionArgs_19));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_107));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_108));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_109));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_110));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_111));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_112));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_113));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_114));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_115));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_116));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_117));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_118));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_119));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_120));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_121));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_library_is_installed__2125__1_4_p_0(
  MR_String make__program_target__Grade_11,
  MR_String make__program_target__LibName_12)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_33;
    MR_Word make__program_target__Var_35;
    MR_Word make__program_target__Var_36;
    MR_Word make__program_target__Var_37;

    {
      make__program_target__Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_35, 0) = ((MR_Box) (make__program_target__LibName_12));
    }
    {
      make__program_target__Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_37, 0) = ((MR_Box) (make__program_target__Grade_11));
    }
    {
      make__program_target__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_36, 0) = ((MR_Box) (make__program_target__Var_37));
      MR_hl_field(MR_mktag(1), make__program_target__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_33, 0) = ((MR_Box) (make__program_target__Var_35));
      MR_hl_field(MR_mktag(1), make__program_target__Var_33, 1) = ((MR_Box) (make__program_target__Var_36));
    }
    {
      mercury__io__format_4_p_0((MR_String) "Checking that %s is installed in grade \140%s\'.\n", make__program_target__Var_33);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2088__1_3_p_0(
  MR_String make__program_target__Grade_7)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_27;
    MR_Word make__program_target__Var_31;

    {
      make__program_target__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_31, 0) = ((MR_Box) (make__program_target__Grade_7));
    }
    {
      make__program_target__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_27, 0) = ((MR_Box) (make__program_target__Var_31));
      MR_hl_field(MR_mktag(1), make__program_target__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__io__format_4_p_0((MR_String) "Checking that the Mercury standard library is installed in grade \140%s\'.\n", make__program_target__Var_27);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2036__1_3_p_0(
  MR_Word make__program_target__ModuleName_8)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Cleaning up interface files for module \140");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(make__program_target__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1951__1_3_p_0(
  MR_Word make__program_target__ModuleName_8)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Cleaning up target files for module \140");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(make__program_target__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1895__1_3_p_0(
  MR_Word make__program_target__ModuleName_8)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Removing executable and library files for \140");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(make__program_target__ModuleName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1878__1_4_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ModuleName_9)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Grade_13;

    {
      mercury__io__write_string_3_p_0((MR_String) "Cleaning up grade-dependent files for \140");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(make__program_target__ModuleName_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'in grade ");
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(make__program_target__Globals_8, &make__program_target__Grade_13);
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__Grade_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1839__1_4_p_0(
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Generating archive index for file ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__FileName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " in ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__InstallDir_9);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1770__1_5_p_0(
  MR_String make__program_target__IntsSubdir_14,
  MR_String make__program_target__LambdaHeadVar__1_64,
  MR_Word * make__program_target__LambdaHeadVar__2_65)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Var_70;
    MR_String make__program_target__Var_72;

    {
      make__program_target__Var_72 = mercury__string__f_43_43_2_f_0(make__program_target__LambdaHeadVar__1_64, (MR_String) "s");
    }
    {
      make__program_target__Var_70 = mercury__dir__f_slash_2_f_0(make__program_target__IntsSubdir_14, make__program_target__Var_72);
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__Var_70, make__program_target__LambdaHeadVar__2_65);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1734__1_4_p_0(
  MR_String make__program_target__SourceDirName_8,
  MR_String make__program_target__InstallDir_9)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Installing directory ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__SourceDirName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " in ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__InstallDir_9);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Installing file ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__FileName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " in ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__InstallDir_9);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_Succeeded_16;

    {
      make__program_target__install_library_grade_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 8))), &make__program_target__conv0_Succeeded_16);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv0_Succeeded_16));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0(
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__CleanAfter_20,
  MR_Word make__program_target__LibGlobals_30,
  MR_Word * make__program_target__LambdaHeadVar__1_74,
  MR_Word make__program_target__LambdaHeadVar__2_75,
  MR_Word * make__program_target__LambdaHeadVar__3_76)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_81;

    {
      make__program_target__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 0) = ((MR_Box) (&make__program_target_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 1) = ((MR_Box) (make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 3) = ((MR_Box) (make__program_target__LibGlobals_30));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 4) = ((MR_Box) (make__program_target__LinkSucceeded0_11));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 5) = ((MR_Box) (make__program_target__ModuleName_12));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 6) = ((MR_Box) (make__program_target__AllModules_13));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 7) = ((MR_Box) (make__program_target__LambdaHeadVar__2_75));
      MR_hl_field(MR_mktag(0), make__program_target__Var_81, 8) = ((MR_Box) (make__program_target__CleanAfter_20));
    }
    {
      libs__process_util__call_in_forked_process_4_p_0(make__program_target__Var_81, make__program_target__LambdaHeadVar__1_74);
    }
    *make__program_target__LambdaHeadVar__3_76 = make__program_target__LambdaHeadVar__2_75;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1422__1_3_p_0(
  MR_String make__program_target__Grade_15)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Installing grade ");
    }
    {
      mercury__io__write_string_3_p_0(make__program_target__Grade_15);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1110__1_2_p_0(
  MR_Word make__program_target__HeadVar__1_27,
  MR_Word * make__program_target__HeadVar__2_28)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__HeadVar__1_27, make__program_target__HeadVar__2_28);
    }
  }
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1041__1_2_p_0(
  MR_Word make__program_target__AllModules_11,
  MR_Word make__program_target__LambdaHeadVar__1_30)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (make__program_target__LambdaHeadVar__1_30)), make__program_target__AllModules_11);
    }
    return make__program_target__succeeded;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__878__1_9_p_0(
  MR_Word make__program_target__KeepGoing_20,
  MR_Word make__program_target__HeadVar__2_48,
  MR_Word make__program_target__HeadVar__3_80,
  MR_Word make__program_target__HeadVar__4_81,
  MR_Word * make__program_target__HeadVar__5_82,
  MR_Word make__program_target__HeadVar__6_83,
  MR_Word * make__program_target__HeadVar__7_84)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__program_target__KeepGoing_20, make__program_target__HeadVar__2_48, make__program_target__HeadVar__3_80, make__program_target__HeadVar__4_81, make__program_target__HeadVar__5_82, make__program_target__HeadVar__6_83, make__program_target__HeadVar__7_84);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__873__1_9_p_0(
  MR_Word make__program_target__KeepGoing_20,
  MR_Word make__program_target__HeadVar__2_41,
  MR_Word make__program_target__HeadVar__3_62,
  MR_Word make__program_target__HeadVar__4_63,
  MR_Word * make__program_target__HeadVar__5_64,
  MR_Word make__program_target__HeadVar__6_65,
  MR_Word * make__program_target__HeadVar__7_66)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Box make__program_target__conv1_HeadVar__7_66;
    MR_Box make__program_target__conv0_HeadVar__9_68;

    {
      make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__KeepGoing_20, make__program_target__HeadVar__2_41, make__program_target__HeadVar__3_62, make__program_target__HeadVar__4_63, make__program_target__HeadVar__5_64, ((MR_Box) (make__program_target__HeadVar__6_65)), &make__program_target__conv1_HeadVar__7_66, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv0_HeadVar__9_68);
    }
    *make__program_target__HeadVar__7_66 = ((MR_Word) make__program_target__conv1_HeadVar__7_66);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__791__1_9_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__KeepGoing_22,
  MR_Word make__program_target__HeadVar__3_67,
  MR_Word make__program_target__HeadVar__4_68,
  MR_Word * make__program_target__HeadVar__5_160,
  MR_Word make__program_target__HeadVar__6_161,
  MR_Word * make__program_target__HeadVar__7_162)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__program_target__KeepGoing_22, make__program_target__HeadVar__3_67, make__program_target__Globals_11, make__program_target__HeadVar__4_68, make__program_target__HeadVar__5_160, make__program_target__HeadVar__6_161, make__program_target__HeadVar__7_162);
    }
  }
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__568__1_1_f_0(
  MR_Word make__program_target__LambdaHeadVar__1_121)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__LambdaHeadVar__2_122 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__LambdaHeadVar__1_121, (MR_Integer) 2)));
    MR_Word make__program_target__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LambdaHeadVar__1_121, (MR_Integer) 0)));
    MR_String make__program_target__Var_156 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__LambdaHeadVar__1_121, (MR_Integer) 1)));

    return make__program_target__LambdaHeadVar__2_122;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__552__1_8_p_0(
  MR_Word make__program_target__Globals_18,
  MR_Word make__program_target__PIC_26,
  MR_Word make__program_target__LambdaHeadVar__1_107,
  MR_Word * make__program_target__LambdaHeadVar__2_108,
  MR_Word make__program_target__LambdaHeadVar__3_109,
  MR_Word * make__program_target__LambdaHeadVar__4_110)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybeImports_58;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_18, make__program_target__LambdaHeadVar__1_107, &make__program_target__MaybeImports_58, make__program_target__LambdaHeadVar__3_109, make__program_target__LambdaHeadVar__4_110);
    }
    if ((make__program_target__MaybeImports_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.build_linked_target_2\'/17", (MR_String) "error in dependencies");
          return;
        }
      }
    else
      {
        MR_Word make__program_target__Imports_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeImports_58, (MR_Integer) 0)));

        {
          make__module_target__external_foreign_code_files_6_p_0(make__program_target__Globals_18, make__program_target__PIC_26, make__program_target__Imports_59, make__program_target__LambdaHeadVar__2_108);
        }
      }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__501__1_3_p_0(
  MR_String make__program_target__HeadVar__1_298)
{
  {
    MR_bool make__program_target__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__program_target__HeadVar__1_298)));
    }
  }
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__489__1_1_f_0(
  MR_String make__program_target__LambdaHeadVar__1_91)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__LambdaHeadVar__2_92;

    {
      make__program_target__LambdaHeadVar__2_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__LambdaHeadVar__2_92, 0) = ((MR_Box) (make__program_target__LambdaHeadVar__1_91));
      MR_hl_field(MR_mktag(1), make__program_target__LambdaHeadVar__2_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return make__program_target__LambdaHeadVar__2_92;
  }
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__378__1_3_f_0(
  MR_Word make__program_target__PIC_10,
  MR_Word make__program_target__ModuleName_11,
  MR_String make__program_target__LambdaHeadVar__1_31)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__LambdaHeadVar__2_32;
    MR_Word make__program_target__Var_33;
    MR_Word make__program_target__Var_34;

    {
      make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), make__program_target__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__PIC_10));
      MR_hl_field(MR_mktag(3), make__program_target__Var_34, 2) = ((MR_Box) (make__program_target__LambdaHeadVar__1_31));
    }
    {
      make__program_target__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_33, 0) = ((MR_Box) (make__program_target__ModuleName_11));
      MR_hl_field(MR_mktag(0), make__program_target__Var_33, 1) = ((MR_Box) (make__program_target__Var_34));
    }
    {
      make__program_target__LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__LambdaHeadVar__2_32, 0) = ((MR_Box) (make__program_target__Var_33));
    }
    return make__program_target__LambdaHeadVar__2_32;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__315__1_2_p_0(
  MR_Word make__program_target__HeadVar__1_39,
  MR_Word * make__program_target__HeadVar__2_40)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Box make__program_target__conv0_HeadVar__2_40;

    {
      mercury__pair__snd_2_p_0((MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__HeadVar__1_39, &make__program_target__conv0_HeadVar__2_40);
    }
    *make__program_target__HeadVar__2_40 = ((MR_Word) make__program_target__conv0_HeadVar__2_40);
  }
}

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__check_library_is_installed__2125__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__Dirs_10,
  MR_String make__program_target__Grade_11,
  MR_String make__program_target__LibName_12,
  MR_Word make__program_target__STATE_VARIABLE_Succeeded_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Succeeded_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__InitFileName_15;
    MR_Word make__program_target__MaybeDirName_16;
    MR_Word make__program_target__Var_26;

    {
      make__program_target__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_26, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_26, 1) = ((MR_Box) (make__program_target__check_library_is_installed_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_26, 3) = ((MR_Box) (make__program_target__Grade_11));
      MR_hl_field(MR_mktag(0), make__program_target__Var_26, 4) = ((MR_Box) (make__program_target__LibName_12));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_9, (MR_Integer) 86, make__program_target__Var_26);
    }
    {
      make__program_target__InitFileName_15 = mercury__string__f_43_43_2_f_0(make__program_target__LibName_12, (MR_String) ".init");
    }
    {
      libs__file_util__search_for_file_returning_dir_5_p_0(make__program_target__Dirs_10, make__program_target__InitFileName_15, &make__program_target__MaybeDirName_16);
    }
    if (((MR_tag((MR_Word) make__program_target__MaybeDirName_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__program_target__Stderr_19;
        MR_String make__program_target__ProgName_20;

        {
          mercury__io__stderr_stream_3_p_0(&make__program_target__Stderr_19);
        }
        {
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &make__program_target__ProgName_20);
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, make__program_target__ProgName_20);
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, (MR_String) ": error: the library \140");
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, make__program_target__LibName_12);
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, (MR_String) "\' cannot be found in grade \140");
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, make__program_target__Grade_11);
        }
        {
          mercury__io__write_string_4_p_0(make__program_target__Stderr_19, (MR_String) "\'.\n");
        }
        *make__program_target__STATE_VARIABLE_Succeeded_22 = (MR_Integer) 0;
      }
    else
      *make__program_target__STATE_VARIABLE_Succeeded_22 = make__program_target__STATE_VARIABLE_Succeeded_0_21;
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Succeeded_22;

    {
      make__program_target__check_library_is_installed_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_STATE_VARIABLE_Succeeded_22);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Succeeded_22));
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2088__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0(
  MR_Word make__program_target__Globals_5,
  MR_Word * make__program_target__Succeeded_6)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Libs_8;
    MR_Word make__program_target__InitFileDirs_9;
    MR_String make__program_target__Grade_10;
    MR_Word make__program_target__Succeeded0_11;
    MR_Word make__program_target__Var_17;
    MR_Word make__program_target__MaybeStdLibDir_33;
    MR_Word make__program_target__Var_41;
    MR_Box make__program_target__conv2_Succeeded_6;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_13;

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_5, (MR_Integer) 552, &make__program_target__Libs_8);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_5, (MR_Integer) 556, &make__program_target__InitFileDirs_9);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(make__program_target__Globals_5, &make__program_target__Grade_10);
    }
    {
      make__program_target__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 1) = ((MR_Box) (make__program_target__check_libraries_are_installed_4_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 3) = ((MR_Box) (make__program_target__Grade_10));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_5, (MR_Integer) 86, make__program_target__Var_41);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(make__program_target__Globals_5, (MR_Integer) 554, &make__program_target__MaybeStdLibDir_33);
    }
    if ((make__program_target__MaybeStdLibDir_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__program_target__Succeeded0_11 = (MR_Integer) 1;
    else
      {
        MR_String make__program_target__StdLibDir_34 = ((MR_String) (MR_hl_field(MR_mktag(1), make__program_target__MaybeStdLibDir_33, (MR_Integer) 0)));
        MR_String make__program_target__StdLibInitFile_35;
        MR_Word make__program_target__Result_36;
        MR_String make__program_target__Var_55;
        MR_String make__program_target__Var_56;

        {
          make__program_target__Var_56 = mercury__dir__f_slash_2_f_0(make__program_target__StdLibDir_34, (MR_String) "modules");
        }
        {
          make__program_target__Var_55 = mercury__dir__f_slash_2_f_0(make__program_target__Var_56, make__program_target__Grade_10);
        }
        {
          make__program_target__StdLibInitFile_35 = mercury__dir__f_slash_2_f_0(make__program_target__Var_55, (MR_String) "mer_std.init");
        }
        {
          mercury__io__see_4_p_0(make__program_target__StdLibInitFile_35, &make__program_target__Result_36);
        }
        if ((make__program_target__Result_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__seen_2_p_0();
            }
            make__program_target__Succeeded0_11 = (MR_Integer) 1;
          }
        else
          {
            MR_Word make__program_target__Stderr_38;
            MR_String make__program_target__ProgName_39;

            {
              mercury__io__stderr_stream_3_p_0(&make__program_target__Stderr_38);
            }
            {
              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &make__program_target__ProgName_39);
            }
            {
              mercury__io__write_string_4_p_0(make__program_target__Stderr_38, make__program_target__ProgName_39);
            }
            {
              mercury__io__write_string_4_p_0(make__program_target__Stderr_38, (MR_String) ": error: the Mercury standard library cannot be found in grade ");
            }
            {
              mercury__io__write_string_4_p_0(make__program_target__Stderr_38, make__program_target__Grade_10);
            }
            {
              mercury__io__write_string_4_p_0(make__program_target__Stderr_38, (MR_String) ".\n");
            }
            make__program_target__Succeeded0_11 = (MR_Integer) 0;
          }
      }
    {
      make__program_target__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_5[13]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 1) = ((MR_Box) (make__program_target__check_libraries_are_installed_4_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 3) = ((MR_Box) (make__program_target__Globals_5));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 4) = ((MR_Box) (make__program_target__InitFileDirs_9));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 5) = ((MR_Box) (make__program_target__Grade_10));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_17, make__program_target__Libs_8, ((MR_Box) (make__program_target__Succeeded0_11)), &make__program_target__conv2_Succeeded_6, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_13);
    }
    *make__program_target__Succeeded_6 = ((MR_Word) make__program_target__conv2_Succeeded_6);
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_HeadVar__6_6;

    {
      make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__make_module_realclean__2036__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_11,
  MR_Word * make__program_target__STATE_VARIABLE_Info_12)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__STATE_VARIABLE_Info_15_15;
    MR_Word make__program_target__Var_18;
    MR_Word make__program_target__Var_29;
    MR_Word make__program_target__STATE_VARIABLE_Info_31_31;
    MR_String make__program_target__Var_54;
    MR_Word make__program_target__STATE_VARIABLE_Info_55_55;
    MR_Word make__program_target__STATE_VARIABLE_Info_59_59;
    MR_Box make__program_target__conv2_STATE_VARIABLE_Info_31_31;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_32_32;

    {
      make__program_target__make_module_clean_6_p_0(make__program_target__Globals_7, make__program_target__ModuleName_8, make__program_target__STATE_VARIABLE_Info_0_11, &make__program_target__STATE_VARIABLE_Info_15_15);
    }
    {
      make__program_target__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_18, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_18, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_18, 3) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_7, (MR_Integer) 61, make__program_target__Var_18);
    }
    {
      make__program_target__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_5[11]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 4) = ((MR_Box) ((MR_Integer) 57));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 5) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_module_target_type_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_29, (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[49]), ((MR_Box) (make__program_target__STATE_VARIABLE_Info_15_15)), &make__program_target__conv2_STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_32_32);
    }
    make__program_target__STATE_VARIABLE_Info_31_31 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_31_31);
    {
      make__program_target__Var_54 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, make__program_target__Var_54, make__program_target__STATE_VARIABLE_Info_31_31, &make__program_target__STATE_VARIABLE_Info_55_55);
    }
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, (MR_String) ".imdg", make__program_target__STATE_VARIABLE_Info_55_55, &make__program_target__STATE_VARIABLE_Info_59_59);
    }
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, (MR_String) ".request", make__program_target__STATE_VARIABLE_Info_59_59, make__program_target__STATE_VARIABLE_Info_12);
    }
  }
}

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__PIC_11,
  MR_String make__program_target__FactTableFile_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_20;

    {
      make__program_target__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), make__program_target__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), make__program_target__Var_20, 1) = ((MR_Box) (make__program_target__PIC_11));
      MR_hl_field(MR_mktag(3), make__program_target__Var_20, 2) = ((MR_Box) (make__program_target__FactTableFile_12));
    }
    {
      make__util__make_remove_target_file_by_name_8_p_0(make__program_target__Globals_9, (MR_Integer) 57, make__program_target__ModuleName_10, make__program_target__Var_20, make__program_target__STATE_VARIABLE_Info_0_15, make__program_target__STATE_VARIABLE_Info_16);
    }
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_16;

    {
      make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__PIC_11,
  MR_Word make__program_target__FactTableFiles_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__STATE_VARIABLE_Info_21_21;
    MR_Word make__program_target__Var_24;
    MR_Word make__program_target__STATE_VARIABLE_Info_25_25;
    MR_Word make__program_target__Var_28;
    MR_Box make__program_target__conv2_STATE_VARIABLE_Info_16;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_18;

    {
      make__program_target__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_20, 0) = ((MR_Box) (make__program_target__PIC_11));
    }
    {
      make__util__make_remove_target_file_by_name_8_p_0(make__program_target__Globals_9, (MR_Integer) 57, make__program_target__ModuleName_10, make__program_target__Var_20, make__program_target__STATE_VARIABLE_Info_0_15, &make__program_target__STATE_VARIABLE_Info_21_21);
    }
    {
      make__program_target__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), make__program_target__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), make__program_target__Var_24, 1) = ((MR_Box) (make__program_target__PIC_11));
      MR_hl_field(MR_mktag(3), make__program_target__Var_24, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      make__util__make_remove_target_file_by_name_8_p_0(make__program_target__Globals_9, (MR_Integer) 57, make__program_target__ModuleName_10, make__program_target__Var_24, make__program_target__STATE_VARIABLE_Info_21_21, &make__program_target__STATE_VARIABLE_Info_25_25);
    }
    {
      make__program_target__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[12]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 1) = ((MR_Box) (make__program_target__remove_object_and_assembler_files_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 3) = ((MR_Box) (make__program_target__Globals_9));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 4) = ((MR_Box) (make__program_target__ModuleName_10));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 5) = ((MR_Box) (make__program_target__PIC_11));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_28, make__program_target__FactTableFiles_12, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_25_25)), &make__program_target__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_18);
    }
    *make__program_target__STATE_VARIABLE_Info_16 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ModuleName_9,
  MR_String make__program_target__FactTableFile_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_Info_15)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__FactTableCFile_13;

    {
      parse_tree__file_names__fact_table_file_name_8_p_0(make__program_target__Globals_8, make__program_target__ModuleName_9, make__program_target__FactTableFile_10, (MR_String) ".c", (MR_Integer) 1, &make__program_target__FactTableCFile_13);
    }
    {
      make__util__make_remove_file_7_p_0(make__program_target__Globals_8, (MR_Integer) 57, make__program_target__FactTableCFile_13, make__program_target__STATE_VARIABLE_Info_0_14, make__program_target__STATE_VARIABLE_Info_15);
    }
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv3_STATE_VARIABLE_Info_15;

    {
      make__program_target__remove_fact_table_c_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv3_STATE_VARIABLE_Info_15);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv3_STATE_VARIABLE_Info_15));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_HeadVar__6_6;

    {
      make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__make_module_clean__1951__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_113_113;
    MR_Word make__program_target__TypeCtorInfo_114_114;
    MR_Word make__program_target__MaybeImports_11;
    MR_Word make__program_target__FactTableFiles_13;
    MR_Word make__program_target__CCodeModule_14;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__Var_31;
    MR_Word make__program_target__STATE_VARIABLE_Info_33_33;
    MR_Word make__program_target__STATE_VARIABLE_Info_57_57;
    MR_Word make__program_target__STATE_VARIABLE_Info_61_61;
    MR_Word make__program_target__STATE_VARIABLE_Info_63_63;
    MR_Word make__program_target__Var_65;
    MR_Word make__program_target__STATE_VARIABLE_Info_66_66;
    MR_Word make__program_target__STATE_VARIABLE_Info_71_71;
    MR_Word make__program_target__STATE_VARIABLE_Info_74_74;
    MR_Box make__program_target__conv2_STATE_VARIABLE_Info_33_33;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_34_34;
    MR_Box make__program_target__conv5_STATE_VARIABLE_Info_66_66;
    MR_Box make__program_target__conv4_STATE_VARIABLE_IO_67_67;

    {
      make__program_target__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 3) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_7, (MR_Integer) 61, make__program_target__Var_20);
    }
    {
      make__program_target__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 0) = ((MR_Box) (&make__program_target_scalar_common_5[11]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 4) = ((MR_Box) ((MR_Integer) 57));
      MR_hl_field(MR_mktag(0), make__program_target__Var_31, 5) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    make__program_target__TypeCtorInfo_113_113 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    make__program_target__TypeCtorInfo_114_114 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_module_target_type_0, make__program_target__TypeCtorInfo_113_113, make__program_target__TypeCtorInfo_114_114, make__program_target__Var_31, (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[40]), ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_15)), &make__program_target__conv2_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_34_34);
    }
    make__program_target__STATE_VARIABLE_Info_33_33 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_33_33);
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, (MR_String) ".used", make__program_target__STATE_VARIABLE_Info_33_33, &make__program_target__STATE_VARIABLE_Info_57_57);
    }
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, (MR_String) ".prof", make__program_target__STATE_VARIABLE_Info_57_57, &make__program_target__STATE_VARIABLE_Info_61_61);
    }
    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_7, make__program_target__ModuleName_8, &make__program_target__MaybeImports_11, make__program_target__STATE_VARIABLE_Info_61_61, &make__program_target__STATE_VARIABLE_Info_63_63);
    }
    if ((make__program_target__MaybeImports_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__program_target__FactTableFiles_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word make__program_target__Imports_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeImports_11, (MR_Integer) 0)));
        MR_String make__program_target__Var_81 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 0)));
        MR_Word make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 1)));
        MR_Word make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 2)));
        MR_Word make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 3)));
        MR_Word make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 4)));
        MR_Word make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 5)));
        MR_Word make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 6)));
        MR_Word make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 7)));
        MR_Word make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 8)));
        MR_Word make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 9)));
        MR_Word make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 10)));
        MR_Word make__program_target__Var_92;
        MR_Word make__program_target__Var_93;
        MR_Word make__program_target__Var_94;
        MR_Word make__program_target__Var_95;
        MR_Word make__program_target__Var_96;
        MR_Word make__program_target__Var_97;
        MR_Word make__program_target__Var_98;
        MR_Word make__program_target__Var_99;
        MR_Word make__program_target__Var_100;
        MR_Word make__program_target__Var_101;
        MR_Word make__program_target__Var_102;
        MR_Word make__program_target__Var_103;
        MR_Word make__program_target__Var_104;
        MR_Word make__program_target__Var_105;
        MR_String make__program_target__Var_106;

        make__program_target__FactTableFiles_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 11)));
        make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 12)));
        make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 13)));
        make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 14)));
        make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 15)));
        make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 16)));
        make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 17)));
        make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 18)));
        make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 19)));
        make__program_target__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 20)));
        make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 21)));
        make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 22)));
        make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 23)));
        make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 24)));
        make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 25)));
        make__program_target__Var_106 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_12, (MR_Integer) 26)));
      }
    {
      make__program_target__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_65, 0) = ((MR_Box) (&make__program_target_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_65, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_65, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_65, 4) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__TypeCtorInfo_113_113, make__program_target__TypeCtorInfo_114_114, make__program_target__Var_65, make__program_target__FactTableFiles_13, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_63_63)), &make__program_target__conv5_STATE_VARIABLE_Info_66_66, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv4_STATE_VARIABLE_IO_67_67);
    }
    make__program_target__STATE_VARIABLE_Info_66_66 = ((MR_Word) make__program_target__conv5_STATE_VARIABLE_Info_66_66);
    {
      make__program_target__CCodeModule_14 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(make__program_target__ModuleName_8, (MR_Integer) 0);
    }
    {
      make__util__make_remove_target_file_by_name_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__CCodeModule_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), make__program_target__STATE_VARIABLE_Info_66_66, &make__program_target__STATE_VARIABLE_Info_71_71);
    }
    {
      make__program_target__remove_object_and_assembler_files_8_p_0(make__program_target__Globals_7, make__program_target__ModuleName_8, (MR_Integer) 0, make__program_target__FactTableFiles_13, make__program_target__STATE_VARIABLE_Info_71_71, &make__program_target__STATE_VARIABLE_Info_74_74);
    }
    {
      make__program_target__remove_object_and_assembler_files_8_p_0(make__program_target__Globals_7, make__program_target__ModuleName_8, (MR_Integer) 1, make__program_target__FactTableFiles_13, make__program_target__STATE_VARIABLE_Info_74_74, make__program_target__STATE_VARIABLE_Info_16);
    }
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_HeadVar__6_6;

    {
      make__util__make_remove_module_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Verbose_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__ObjExt_13;
    MR_String make__program_target__PicObjExt_14;
    MR_String make__program_target__BeamExt_15;
    MR_Word make__program_target__Var_23;
    MR_Word make__program_target__Var_24;
    MR_Word make__program_target__Var_28;
    MR_String make__program_target__Var_29;
    MR_Word make__program_target__Var_31;
    MR_String make__program_target__Var_32;
    MR_Word make__program_target__Var_34;
    MR_Word make__program_target__Var_36;
    MR_String make__program_target__Var_37;
    MR_Box make__program_target__conv2_STATE_VARIABLE_Info_17;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_19;

    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 516, &make__program_target__ObjExt_13);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 517, &make__program_target__PicObjExt_14);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 535, &make__program_target__BeamExt_15);
    }
    {
      make__program_target__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 1) = ((MR_Box) (make__program_target__remove_init_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 3) = ((MR_Box) (make__program_target__Globals_8));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 4) = ((MR_Box) (make__program_target__Verbose_9));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 5) = ((MR_Box) (make__program_target__ModuleName_10));
    }
    {
      make__program_target__Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__ObjExt_13);
    }
    {
      make__program_target__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__PicObjExt_14);
    }
    {
      make__program_target__Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__BeamExt_15);
    }
    {
      make__program_target__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_36, 0) = ((MR_Box) (make__program_target__Var_37));
      MR_hl_field(MR_mktag(1), make__program_target__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_34, 0) = ((MR_Box) ((MR_String) "_init.erl"));
      MR_hl_field(MR_mktag(1), make__program_target__Var_34, 1) = ((MR_Box) (make__program_target__Var_36));
    }
    {
      make__program_target__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_31, 0) = ((MR_Box) (make__program_target__Var_32));
      MR_hl_field(MR_mktag(1), make__program_target__Var_31, 1) = ((MR_Box) (make__program_target__Var_34));
    }
    {
      make__program_target__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_28, 0) = ((MR_Box) (make__program_target__Var_29));
      MR_hl_field(MR_mktag(1), make__program_target__Var_28, 1) = ((MR_Box) (make__program_target__Var_31));
    }
    {
      make__program_target__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_24, 0) = ((MR_Box) ((MR_String) "_init.c"));
      MR_hl_field(MR_mktag(1), make__program_target__Var_24, 1) = ((MR_Box) (make__program_target__Var_28));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_23, make__program_target__Var_24, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_16)), &make__program_target__conv2_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_19);
    }
    *make__program_target__STATE_VARIABLE_Info_17 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv4_HeadVar__5_5;

    {
      make__util__make_remove_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv4_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_String make__program_target__conv2_HeadVar__4_4;

    {
      make__util__linked_target_file_name_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv2_HeadVar__4_4);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_String make__program_target__conv0_HeadVar__4_4;

    {
      make__util__linked_target_file_name_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_HeadVar__4_4);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__make_main_module_realclean__1895__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_80_80;
    MR_Word make__program_target__TypeCtorInfo_81_81;
    MR_Word make__program_target__TypeCtorInfo_82_82;
    MR_Word make__program_target__LinkedTargetTypes_11;
    MR_Word make__program_target__FileNames_12;
    MR_Word make__program_target__NoSubdirGlobals_13;
    MR_Word make__program_target__ThisDirFileNames_14;
    MR_String make__program_target__ThisDirInitFileName_15;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__Var_49;
    MR_Word make__program_target__Var_54;
    MR_Word make__program_target__Var_59;
    MR_Word make__program_target__Var_60;
    MR_Word make__program_target__STATE_VARIABLE_Info_61_61;
    MR_Word make__program_target__Var_64;
    MR_Word make__program_target__Var_65;
    MR_Word make__program_target__STATE_VARIABLE_Info_69_69;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_50_50;
    MR_Box make__program_target__conv3_STATE_VARIABLE_IO_55_55;
    MR_Box make__program_target__conv6_STATE_VARIABLE_Info_61_61;
    MR_Box make__program_target__conv5_STATE_VARIABLE_IO_62_62;

    {
      make__program_target__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_20, 3) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_7, make__program_target__Var_20);
    }
    make__program_target__LinkedTargetTypes_11 = (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[31]);
    {
      make__program_target__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_11[4]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_49, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_49, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_49, 4) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    make__program_target__TypeCtorInfo_80_80 = (MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0;
    make__program_target__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    make__program_target__TypeCtorInfo_82_82 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__map_foldl_5_p_2(make__program_target__TypeCtorInfo_80_80, make__program_target__TypeCtorInfo_81_81, make__program_target__TypeCtorInfo_82_82, make__program_target__Var_49, make__program_target__LinkedTargetTypes_11, &make__program_target__FileNames_12, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_50_50);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 648, (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[2]), make__program_target__Globals_7, &make__program_target__NoSubdirGlobals_13);
    }
    {
      make__program_target__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_11[4]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 3) = ((MR_Box) (make__program_target__NoSubdirGlobals_13));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 4) = ((MR_Box) (make__program_target__ModuleName_8));
    }
    {
      mercury__list__map_foldl_5_p_2(make__program_target__TypeCtorInfo_80_80, make__program_target__TypeCtorInfo_81_81, make__program_target__TypeCtorInfo_82_82, make__program_target__Var_54, make__program_target__LinkedTargetTypes_11, &make__program_target__ThisDirFileNames_14, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv3_STATE_VARIABLE_IO_55_55);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__program_target__NoSubdirGlobals_13, (MR_Integer) 1, (MR_String) ".init", make__program_target__ModuleName_8, &make__program_target__ThisDirInitFileName_15);
    }
    {
      make__program_target__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_59, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_4));
      MR_hl_field(MR_mktag(0), make__program_target__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_59, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_59, 4) = ((MR_Box) ((MR_Integer) 57));
    }
    {
      make__program_target__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_65, 0) = ((MR_Box) (make__program_target__ThisDirInitFileName_15));
      MR_hl_field(MR_mktag(1), make__program_target__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_64 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_81_81, make__program_target__ThisDirFileNames_14, make__program_target__Var_65);
    }
    {
      make__program_target__Var_60 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_81_81, make__program_target__FileNames_12, make__program_target__Var_64);
    }
    {
      mercury__list__foldl2_6_p_2(make__program_target__TypeCtorInfo_81_81, (MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__TypeCtorInfo_82_82, make__program_target__Var_59, make__program_target__Var_60, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_16)), &make__program_target__conv6_STATE_VARIABLE_Info_61_61, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv5_STATE_VARIABLE_IO_62_62);
    }
    make__program_target__STATE_VARIABLE_Info_61_61 = ((MR_Word) make__program_target__conv6_STATE_VARIABLE_Info_61_61);
    {
      make__util__make_remove_module_file_8_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, (MR_String) ".init", make__program_target__STATE_VARIABLE_Info_61_61, &make__program_target__STATE_VARIABLE_Info_69_69);
    }
    {
      make__program_target__remove_init_files_7_p_0(make__program_target__Globals_7, (MR_Integer) 57, make__program_target__ModuleName_8, make__program_target__STATE_VARIABLE_Info_69_69, make__program_target__STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_16;

    {
      make__program_target__make_module_clean_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__make_grade_clean__1878__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__Clean_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word make__program_target__AllModules_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;

    switch (make__program_target__Clean_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_0_15;
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__Var_31;
          MR_Word make__program_target__STATE_VARIABLE_Info_32_45;
          MR_Word make__program_target__Var_47;
          MR_Box make__program_target__conv2_STATE_VARIABLE_Info_16;
          MR_Box make__program_target__conv1_STATE_VARIABLE_IO_18;

          {
            make__program_target__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_31, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_31, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_31, 3) = ((MR_Box) (make__program_target__Globals_9));
            MR_hl_field(MR_mktag(0), make__program_target__Var_31, 4) = ((MR_Box) (make__program_target__ModuleName_11));
          }
          {
            make__util__verbose_make_msg_4_p_0(make__program_target__Globals_9, make__program_target__Var_31);
          }
          {
            make__program_target__make_main_module_realclean_6_p_0(make__program_target__Globals_9, make__program_target__ModuleName_11, make__program_target__STATE_VARIABLE_Info_0_15, &make__program_target__STATE_VARIABLE_Info_32_45);
          }
          {
            make__program_target__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_47, 0) = ((MR_Box) (&make__program_target_scalar_common_11[3]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_47, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_47, 3) = ((MR_Box) (make__program_target__Globals_9));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_47, make__program_target__AllModules_12, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_32_45)), &make__program_target__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_18);
          }
          *make__program_target__STATE_VARIABLE_Info_16 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_16);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__Subdir_8,
  MR_String make__program_target__Ext_9,
  MR_Word * make__program_target__Succeeded_10)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__LinkName_12;
    MR_String make__program_target__Var_15;

    {
      make__program_target__Var_15 = mercury__string__f_43_43_2_f_0(make__program_target__Ext_9, (MR_String) "s");
    }
    {
      make__program_target__LinkName_12 = mercury__dir__f_slash_2_f_0(make__program_target__Subdir_8, make__program_target__Var_15);
    }
    {
      parse_tree__module_cmds__maybe_make_symlink_6_p_0(make__program_target__Globals_7, (MR_String) "..", make__program_target__LinkName_12, make__program_target__Succeeded_10);
    }
  }
}

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word * make__program_target__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__program_target__succeeded;

        if ((make__program_target__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *make__program_target__HeadVar__2_2 = (MR_Integer) 1;
        else
          {
            MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word make__program_target__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__HeadVar__1_1, (MR_Integer) 0)));

            if ((make__program_target__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word make__program_target__next_value_of_HeadVar__1_1 = make__program_target__Var_28;

                  make__program_target__HeadVar__1_1 = make__program_target__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word make__program_target__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_29, (MR_Integer) 0)));
                MR_String make__program_target__Var_24;
                MR_Word make__program_target__Var_18;

                *make__program_target__HeadVar__2_2 = (MR_Integer) 0;
                {
                  mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                }
                {
                  make__program_target__Var_24 = mercury__io__error_message_1_f_0(make__program_target__Error_15);
                }
                {
                  mercury__io__write_string_3_p_0(make__program_target__Var_24);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_28, &make__program_target__Var_18);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_Succeeded_10;

    {
      make__program_target__make_install_symlink_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1), &make__program_target__conv0_Succeeded_10);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__Grade_8,
  MR_Word * make__program_target__Result_9,
  MR_Word * make__program_target__LinkResult_10)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Prefix_12;
    MR_String make__program_target__LibDir_13;
    MR_String make__program_target__GradeIntsSubdir_14;
    MR_Word make__program_target__Result1_15;
    MR_String make__program_target__GradeIncSubdir_16;
    MR_Word make__program_target__Result2_17;
    MR_String make__program_target__GradeModuleSubdir_18;
    MR_Word make__program_target__Result3_19;
    MR_Word make__program_target__Results0_20;
    MR_Word make__program_target__LinkResult0_21;
    MR_Word make__program_target__LinkResults_22;
    MR_Word make__program_target__Results_23;
    MR_String make__program_target__Var_31;
    MR_String make__program_target__Var_34;
    MR_String make__program_target__Var_35;
    MR_String make__program_target__Var_39;
    MR_String make__program_target__Var_40;
    MR_String make__program_target__Var_41;
    MR_String make__program_target__Var_46;
    MR_Word make__program_target__Var_49;
    MR_Word make__program_target__Var_50;
    MR_Word make__program_target__Var_54;
    MR_Word make__program_target__Var_63;
    MR_Word make__program_target__Var_110;
    MR_Word make__program_target__Var_111;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_56_56;

    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_7, (MR_Integer) 632, &make__program_target__Prefix_12);
    }
    {
      make__program_target__Var_31 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_12, (MR_String) "lib");
    }
    {
      make__program_target__LibDir_13 = mercury__dir__f_slash_2_f_0(make__program_target__Var_31, (MR_String) "mercury");
    }
    {
      make__program_target__Var_35 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_13, (MR_String) "ints");
    }
    {
      make__program_target__Var_34 = mercury__dir__f_slash_2_f_0(make__program_target__Var_35, make__program_target__Grade_8);
    }
    {
      make__program_target__GradeIntsSubdir_14 = mercury__dir__f_slash_2_f_0(make__program_target__Var_34, (MR_String) "Mercury");
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__GradeIntsSubdir_14, &make__program_target__Result1_15);
    }
    {
      make__program_target__Var_41 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_13, (MR_String) "lib");
    }
    {
      make__program_target__Var_40 = mercury__dir__f_slash_2_f_0(make__program_target__Var_41, make__program_target__Grade_8);
    }
    {
      make__program_target__Var_39 = mercury__dir__f_slash_2_f_0(make__program_target__Var_40, (MR_String) "inc");
    }
    {
      make__program_target__GradeIncSubdir_16 = mercury__dir__f_slash_2_f_0(make__program_target__Var_39, (MR_String) "Mercury");
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__GradeIncSubdir_16, &make__program_target__Result2_17);
    }
    {
      make__program_target__Var_46 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_13, (MR_String) "modules");
    }
    {
      make__program_target__GradeModuleSubdir_18 = mercury__dir__f_slash_2_f_0(make__program_target__Var_46, make__program_target__Grade_8);
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__GradeModuleSubdir_18, &make__program_target__Result3_19);
    }
    {
      make__program_target__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_50, 0) = ((MR_Box) (make__program_target__Result3_19));
      MR_hl_field(MR_mktag(1), make__program_target__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_49, 0) = ((MR_Box) (make__program_target__Result2_17));
      MR_hl_field(MR_mktag(1), make__program_target__Var_49, 1) = ((MR_Box) (make__program_target__Var_50));
    }
    {
      make__program_target__Results0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Results0_20, 0) = ((MR_Box) (make__program_target__Result1_15));
      MR_hl_field(MR_mktag(1), make__program_target__Results0_20, 1) = ((MR_Box) (make__program_target__Var_49));
    }
    {
      make__program_target__make_install_symlink_6_p_0(make__program_target__Globals_7, make__program_target__GradeIncSubdir_16, (MR_String) "mih", &make__program_target__LinkResult0_21);
    }
    {
      make__program_target__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 3) = ((MR_Box) (make__program_target__Globals_7));
      MR_hl_field(MR_mktag(0), make__program_target__Var_54, 4) = ((MR_Box) (make__program_target__GradeIntsSubdir_14));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_54, (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[22]), &make__program_target__LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_56_56);
    }
    {
      make__program_target__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_63, 0) = ((MR_Box) (make__program_target__LinkResult0_21));
      MR_hl_field(MR_mktag(1), make__program_target__Var_63, 1) = ((MR_Box) (make__program_target__LinkResults_22));
    }
    {
      *make__program_target__LinkResult_10 = mercury__bool__and_list_1_f_0(make__program_target__Var_63);
    }
    switch (*make__program_target__LinkResult_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__Result4_24;
          MR_Word make__program_target__Result5_25;
          MR_Word make__program_target__Result6_26;
          MR_Word make__program_target__Result7_27;
          MR_String make__program_target__Var_64;
          MR_String make__program_target__Var_67;
          MR_String make__program_target__Var_70;
          MR_String make__program_target__Var_73;
          MR_Word make__program_target__Var_76;
          MR_Word make__program_target__Var_77;
          MR_Word make__program_target__Var_78;

          {
            make__program_target__Var_64 = mercury__dir__f_slash_2_f_0(make__program_target__GradeIncSubdir_16, (MR_String) "mihs");
          }
          {
            mercury__dir__make_directory_4_p_0(make__program_target__Var_64, &make__program_target__Result4_24);
          }
          {
            make__program_target__Var_67 = mercury__dir__f_slash_2_f_0(make__program_target__GradeIntsSubdir_14, (MR_String) "opts");
          }
          {
            mercury__dir__make_directory_4_p_0(make__program_target__Var_67, &make__program_target__Result5_25);
          }
          {
            make__program_target__Var_70 = mercury__dir__f_slash_2_f_0(make__program_target__GradeIntsSubdir_14, (MR_String) "trans_opts");
          }
          {
            mercury__dir__make_directory_4_p_0(make__program_target__Var_70, &make__program_target__Result6_26);
          }
          {
            make__program_target__Var_73 = mercury__dir__f_slash_2_f_0(make__program_target__GradeIntsSubdir_14, (MR_String) "analysiss");
          }
          {
            mercury__dir__make_directory_4_p_0(make__program_target__Var_73, &make__program_target__Result7_27);
          }
          {
            make__program_target__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_78, 0) = ((MR_Box) (make__program_target__Result7_27));
            MR_hl_field(MR_mktag(1), make__program_target__Var_78, 1) = ((MR_Box) (make__program_target__Results0_20));
          }
          {
            make__program_target__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_77, 0) = ((MR_Box) (make__program_target__Result6_26));
            MR_hl_field(MR_mktag(1), make__program_target__Var_77, 1) = ((MR_Box) (make__program_target__Var_78));
          }
          {
            make__program_target__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_76, 0) = ((MR_Box) (make__program_target__Result5_25));
            MR_hl_field(MR_mktag(1), make__program_target__Var_76, 1) = ((MR_Box) (make__program_target__Var_77));
          }
          {
            make__program_target__Results_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Results_23, 0) = ((MR_Box) (make__program_target__Result4_24));
            MR_hl_field(MR_mktag(1), make__program_target__Results_23, 1) = ((MR_Box) (make__program_target__Var_76));
          }
        }
        break;
      case (MR_Integer) 1:
        make__program_target__Results_23 = make__program_target__Results0_20;
        break;
    }
    make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Results_23, (MR_Integer) 0)));
    make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Results_23, (MR_Integer) 1)));
    if ((make__program_target__Var_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__program_target__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 1)));
        MR_Word make__program_target__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 0)));

        if ((make__program_target__Var_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_210, make__program_target__Result_9);
          }
        else
          {
            MR_Word make__program_target__Error_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_211, (MR_Integer) 0)));
            MR_String make__program_target__Var_206;
            MR_Word make__program_target__Var_200;

            *make__program_target__Result_9 = (MR_Integer) 0;
            {
              mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
            }
            {
              make__program_target__Var_206 = mercury__io__error_message_1_f_0(make__program_target__Error_197);
            }
            {
              mercury__io__write_string_3_p_0(make__program_target__Var_206);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_210, &make__program_target__Var_200);
            }
          }
      }
    else
      {
        MR_Word make__program_target__Error_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_111, (MR_Integer) 0)));
        MR_String make__program_target__Var_106;
        MR_Word make__program_target__Var_135;
        MR_Word make__program_target__Var_136;

        *make__program_target__Result_9 = (MR_Integer) 0;
        {
          mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        }
        {
          make__program_target__Var_106 = mercury__io__error_message_1_f_0(make__program_target__Error_97);
        }
        {
          mercury__io__write_string_3_p_0(make__program_target__Var_106);
        }
        {
          mercury__io__nl_2_p_0();
        }
        make__program_target__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 0)));
        make__program_target__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 1)));
        if ((make__program_target__Var_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word make__program_target__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 1)));
            MR_Word make__program_target__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 0)));

            if ((make__program_target__Var_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word make__program_target__Var_215;

                {
                  make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_185, &make__program_target__Var_215);
                }
              }
            else
              {
                MR_Word make__program_target__Error_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_186, (MR_Integer) 0)));
                MR_String make__program_target__Var_181;
                MR_Word make__program_target__Var_175;

                {
                  mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                }
                {
                  make__program_target__Var_181 = mercury__io__error_message_1_f_0(make__program_target__Error_172);
                }
                {
                  mercury__io__write_string_3_p_0(make__program_target__Var_181);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_185, &make__program_target__Var_175);
                }
              }
          }
        else
          {
            MR_Word make__program_target__Error_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_136, (MR_Integer) 0)));
            MR_String make__program_target__Var_131;
            MR_Word make__program_target__Var_160;
            MR_Word make__program_target__Var_161;

            {
              mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
            }
            {
              make__program_target__Var_131 = mercury__io__error_message_1_f_0(make__program_target__Error_122);
            }
            {
              mercury__io__write_string_3_p_0(make__program_target__Var_131);
            }
            {
              mercury__io__nl_2_p_0();
            }
            make__program_target__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 0)));
            make__program_target__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 1)));
            if ((make__program_target__Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word make__program_target__Var_212;

                {
                  make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_160, &make__program_target__Var_212);
                }
              }
            else
              {
                MR_Word make__program_target__Error_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_161, (MR_Integer) 0)));
                MR_String make__program_target__Var_156;
                MR_Word make__program_target__Var_150;

                {
                  mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                }
                {
                  make__program_target__Var_156 = mercury__io__error_message_1_f_0(make__program_target__Error_147);
                }
                {
                  mercury__io__write_string_3_p_0(make__program_target__Var_156);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_160, &make__program_target__Var_150);
                }
              }
          }
      }
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv2_LambdaHeadVar__2_65;

    {
      make__program_target__IntroducedFrom__pred__make_install_dirs__1770__1_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) make__program_target__wrapper_arg_1), &make__program_target__conv2_LambdaHeadVar__2_65);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv2_LambdaHeadVar__2_65));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_Succeeded_10;

    {
      make__program_target__make_install_symlink_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1), &make__program_target__conv0_Succeeded_10);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word make__program_target__Globals_6,
  MR_Word * make__program_target__Result_7,
  MR_Word * make__program_target__LinkResult_8)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_83_83;
    MR_Word make__program_target__TypeCtorInfo_85_85;
    MR_String make__program_target__Prefix_10;
    MR_String make__program_target__LibDir_11;
    MR_Word make__program_target__Result1_12;
    MR_Word make__program_target__Result2_13;
    MR_String make__program_target__IntsSubdir_14;
    MR_Word make__program_target__Result3_15;
    MR_Word make__program_target__Results0_16;
    MR_Word make__program_target__Subdirs_17;
    MR_Word make__program_target__LinkResults_18;
    MR_String make__program_target__Var_26;
    MR_String make__program_target__Var_29;
    MR_String make__program_target__Var_32;
    MR_String make__program_target__Var_35;
    MR_Word make__program_target__Var_39;
    MR_Word make__program_target__Var_40;
    MR_Word make__program_target__Var_60;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_61_61;

    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_6, (MR_Integer) 632, &make__program_target__Prefix_10);
    }
    {
      make__program_target__Var_26 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_10, (MR_String) "lib");
    }
    {
      make__program_target__LibDir_11 = mercury__dir__f_slash_2_f_0(make__program_target__Var_26, (MR_String) "mercury");
    }
    {
      make__program_target__Var_29 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_11, (MR_String) "inc");
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__Var_29, &make__program_target__Result1_12);
    }
    {
      make__program_target__Var_32 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_11, (MR_String) "modules");
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__Var_32, &make__program_target__Result2_13);
    }
    {
      make__program_target__Var_35 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_11, (MR_String) "ints");
    }
    {
      make__program_target__IntsSubdir_14 = mercury__dir__f_slash_2_f_0(make__program_target__Var_35, (MR_String) "Mercury");
    }
    {
      mercury__dir__make_directory_4_p_0(make__program_target__IntsSubdir_14, &make__program_target__Result3_15);
    }
    {
      make__program_target__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_40, 0) = ((MR_Box) (make__program_target__Result3_15));
      MR_hl_field(MR_mktag(1), make__program_target__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_39, 0) = ((MR_Box) (make__program_target__Result2_13));
      MR_hl_field(MR_mktag(1), make__program_target__Var_39, 1) = ((MR_Box) (make__program_target__Var_40));
    }
    {
      make__program_target__Results0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Results0_16, 0) = ((MR_Box) (make__program_target__Result1_12));
      MR_hl_field(MR_mktag(1), make__program_target__Results0_16, 1) = ((MR_Box) (make__program_target__Var_39));
    }
    make__program_target__Subdirs_17 = (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[19]);
    {
      make__program_target__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_60, 0) = ((MR_Box) (&make__program_target_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_60, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_60, 3) = ((MR_Box) (make__program_target__Globals_6));
      MR_hl_field(MR_mktag(0), make__program_target__Var_60, 4) = ((MR_Box) (make__program_target__IntsSubdir_14));
    }
    make__program_target__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    make__program_target__TypeCtorInfo_85_85 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__map_foldl_5_p_2(make__program_target__TypeCtorInfo_83_83, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, make__program_target__TypeCtorInfo_85_85, make__program_target__Var_60, make__program_target__Subdirs_17, &make__program_target__LinkResults_18, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_61_61);
    }
    {
      *make__program_target__LinkResult_8 = mercury__bool__and_list_1_f_0(make__program_target__LinkResults_18);
    }
    switch (*make__program_target__LinkResult_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__TypeCtorInfo_86_86;
          MR_Word make__program_target__Results_19;
          MR_Word make__program_target__MkDirResults_22;
          MR_Word make__program_target__Var_62;
          MR_Box make__program_target__conv3_STATE_VARIABLE_IO_63_63;

          {
            make__program_target__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_14[0]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_62, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_62, 3) = ((MR_Box) (make__program_target__IntsSubdir_14));
          }
          make__program_target__TypeCtorInfo_86_86 = (MR_Word) &mercury__io__io__type_ctor_info_res_0;
          {
            mercury__list__map_foldl_5_p_2(make__program_target__TypeCtorInfo_83_83, make__program_target__TypeCtorInfo_86_86, make__program_target__TypeCtorInfo_85_85, make__program_target__Var_62, make__program_target__Subdirs_17, &make__program_target__MkDirResults_22, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv3_STATE_VARIABLE_IO_63_63);
          }
          {
            make__program_target__Results_19 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_86_86, make__program_target__Results0_16, make__program_target__MkDirResults_22);
          }
          {
            make__program_target__print_mkdir_errors_4_p_0(make__program_target__Results_19, make__program_target__Result_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Results0_16, (MR_Integer) 1)));
          MR_Word make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Results0_16, (MR_Integer) 0)));

          if ((make__program_target__Var_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_110, make__program_target__Result_7);
            }
          else
            {
              MR_Word make__program_target__Error_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_111, (MR_Integer) 0)));
              MR_String make__program_target__Var_106;
              MR_Word make__program_target__Var_135;
              MR_Word make__program_target__Var_136;

              *make__program_target__Result_7 = (MR_Integer) 0;
              {
                mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
              }
              {
                make__program_target__Var_106 = mercury__io__error_message_1_f_0(make__program_target__Error_97);
              }
              {
                mercury__io__write_string_3_p_0(make__program_target__Var_106);
              }
              {
                mercury__io__nl_2_p_0();
              }
              make__program_target__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 0)));
              make__program_target__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_110, (MR_Integer) 1)));
              if ((make__program_target__Var_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word make__program_target__Var_214;

                  {
                    make__program_target__print_mkdir_errors_4_p_0(make__program_target__Var_135, &make__program_target__Var_214);
                  }
                }
              else
                {
                  MR_Word make__program_target__Error_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_136, (MR_Integer) 0)));
                  MR_String make__program_target__Var_131;
                  MR_Word make__program_target__Var_161;
                  MR_Word make__program_target__Var_160;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                  }
                  {
                    make__program_target__Var_131 = mercury__io__error_message_1_f_0(make__program_target__Error_122);
                  }
                  {
                    mercury__io__write_string_3_p_0(make__program_target__Var_131);
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                  make__program_target__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 0)));
                  make__program_target__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_135, (MR_Integer) 1)));
                  if ((make__program_target__Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word make__program_target__Error_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__Var_161, (MR_Integer) 0)));
                      MR_String make__program_target__Var_156;

                      {
                        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                      }
                      {
                        make__program_target__Var_156 = mercury__io__error_message_1_f_0(make__program_target__Error_147);
                      }
                      {
                        mercury__io__write_string_3_p_0(make__program_target__Var_156);
                      }
                      {
                        mercury__io__nl_2_p_0();
                      }
                    }
                }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_directory__1734__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__SourceDirName_8,
  MR_String make__program_target__InstallDir_9,
  MR_Word * make__program_target__Succeeded_10)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Command_12;
    MR_Word make__program_target__OutputStream_13;
    MR_Word make__program_target__Var_16;

    {
      make__program_target__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 1) = ((MR_Box) (make__program_target__install_directory_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 3) = ((MR_Box) (make__program_target__SourceDirName_8));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 4) = ((MR_Box) (make__program_target__InstallDir_9));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_7, make__program_target__Var_16);
    }
    {
      make__program_target__Command_12 = libs__file_util__make_install_dir_command_3_f_0(make__program_target__Globals_7, make__program_target__SourceDirName_8, make__program_target__InstallDir_9);
    }
    {
      mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_13);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_7, make__program_target__OutputStream_13, (MR_Integer) 0, make__program_target__Command_12, make__program_target__Succeeded_10);
    }
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__FileName_8,
  MR_String make__program_target__InstallDir_9,
  MR_Word * make__program_target__Succeeded_10)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Command_12;
    MR_Word make__program_target__OutputStream_13;
    MR_Word make__program_target__Var_16;

    {
      make__program_target__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 1) = ((MR_Box) (make__program_target__install_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 3) = ((MR_Box) (make__program_target__FileName_8));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 4) = ((MR_Box) (make__program_target__InstallDir_9));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_7, make__program_target__Var_16);
    }
    {
      make__program_target__Command_12 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_7, make__program_target__FileName_8, make__program_target__InstallDir_9);
    }
    {
      mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_13);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_7, make__program_target__OutputStream_13, (MR_Integer) 0, make__program_target__Command_12, make__program_target__Succeeded_10);
    }
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__generate_archive_index__1839__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_String make__program_target__Linkage_9,
  MR_String make__program_target__FileName_10,
  MR_String make__program_target__InstallDir_11,
  MR_Word * make__program_target__Succeeded_12)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__LibLinkages_14;

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 642, &make__program_target__LibLinkages_14);
    }
    {
      make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__program_target__Linkage_9)), make__program_target__LibLinkages_14);
    }
    if (make__program_target__succeeded)
      {
        MR_Word make__program_target__Succeeded0_15;
        MR_String make__program_target__Command_30;
        MR_Word make__program_target__OutputStream_31;
        MR_Word make__program_target__Var_32;

        {
          make__program_target__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 3) = ((MR_Box) (make__program_target__FileName_10));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 4) = ((MR_Box) (make__program_target__InstallDir_11));
        }
        {
          make__util__verbose_make_msg_4_p_0(make__program_target__Globals_8, make__program_target__Var_32);
        }
        {
          make__program_target__Command_30 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_8, make__program_target__FileName_10, make__program_target__InstallDir_11);
        }
        {
          mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_31);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_8, make__program_target__OutputStream_31, (MR_Integer) 0, make__program_target__Command_30, &make__program_target__Succeeded0_15);
        }
        make__program_target__succeeded = (strcmp(make__program_target__Linkage_9, (MR_String) "static") == 0);
        if (make__program_target__succeeded)
          make__program_target__succeeded = (make__program_target__Succeeded0_15 == (MR_Integer) 1);
        if (make__program_target__succeeded)
          {
            MR_String make__program_target__BaseFileName_16;
            MR_String make__program_target__RanLibCommand_57;
            MR_String make__program_target__RanLibFlags_58;
            MR_String make__program_target__Command_59;
            MR_Word make__program_target__OutputStream_60;
            MR_Word make__program_target__Var_61;
            MR_Word make__program_target__Var_77;
            MR_String make__program_target__Var_78;
            MR_Word make__program_target__Var_79;
            MR_Word make__program_target__Var_80;
            MR_String make__program_target__Var_81;
            MR_String make__program_target__Var_82;

            {
              make__program_target__BaseFileName_16 = mercury__dir__det_basename_1_f_0(make__program_target__FileName_10);
            }
            {
              make__program_target__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__program_target__Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
              MR_hl_field(MR_mktag(0), make__program_target__Var_61, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_2));
              MR_hl_field(MR_mktag(0), make__program_target__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), make__program_target__Var_61, 3) = ((MR_Box) (make__program_target__BaseFileName_16));
              MR_hl_field(MR_mktag(0), make__program_target__Var_61, 4) = ((MR_Box) (make__program_target__InstallDir_11));
            }
            {
              make__util__verbose_make_msg_4_p_0(make__program_target__Globals_8, make__program_target__Var_61);
            }
            {
              libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 582, &make__program_target__RanLibCommand_57);
            }
            {
              libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 583, &make__program_target__RanLibFlags_58);
            }
            {
              make__program_target__Var_78 = libs__options__quote_arg_1_f_0(make__program_target__RanLibCommand_57);
            }
            {
              make__program_target__Var_82 = mercury__dir__f_slash_2_f_0(make__program_target__InstallDir_11, make__program_target__BaseFileName_16);
            }
            {
              make__program_target__Var_81 = libs__options__quote_arg_1_f_0(make__program_target__Var_82);
            }
            {
              make__program_target__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__program_target__Var_80, 0) = ((MR_Box) (make__program_target__Var_81));
              MR_hl_field(MR_mktag(1), make__program_target__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              make__program_target__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__program_target__Var_79, 0) = ((MR_Box) (make__program_target__RanLibFlags_58));
              MR_hl_field(MR_mktag(1), make__program_target__Var_79, 1) = ((MR_Box) (make__program_target__Var_80));
            }
            {
              make__program_target__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__program_target__Var_77, 0) = ((MR_Box) (make__program_target__Var_78));
              MR_hl_field(MR_mktag(1), make__program_target__Var_77, 1) = ((MR_Box) (make__program_target__Var_79));
            }
            {
              make__program_target__Command_59 = mercury__string__join_list_2_f_0((MR_String) "    ", make__program_target__Var_77);
            }
            {
              mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_60);
            }
            {
              parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_8, make__program_target__OutputStream_60, (MR_Integer) 0, make__program_target__Command_59, make__program_target__Succeeded_12);
            }
          }
        else
          *make__program_target__Succeeded_12 = make__program_target__Succeeded0_15;
      }
    else
      *make__program_target__Succeeded_12 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__SubdirLinkSucceeded_10,
  MR_String make__program_target__InstallDir_11,
  MR_Word make__program_target__ModuleName_12,
  MR_String make__program_target__Ext_13,
  MR_Word * make__program_target__Succeeded_14)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__FileName_16;
    MR_Word make__program_target__Succeeded1_17;
    MR_String make__program_target__Var_22;
    MR_String make__program_target__Command_39;
    MR_Word make__program_target__OutputStream_40;
    MR_Word make__program_target__Var_41;

    {
      make__program_target__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ".", make__program_target__Ext_13);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__program_target__Globals_9, (MR_Integer) 1, make__program_target__Var_22, make__program_target__ModuleName_12, &make__program_target__FileName_16);
    }
    {
      make__program_target__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 3) = ((MR_Box) (make__program_target__FileName_16));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 4) = ((MR_Box) (make__program_target__InstallDir_11));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_9, make__program_target__Var_41);
    }
    {
      make__program_target__Command_39 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_9, make__program_target__FileName_16, make__program_target__InstallDir_11);
    }
    {
      mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_40);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_9, make__program_target__OutputStream_40, (MR_Integer) 0, make__program_target__Command_39, &make__program_target__Succeeded1_17);
    }
    switch (make__program_target__SubdirLinkSucceeded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__Succeeded2_18;
          MR_String make__program_target__Var_26;
          MR_String make__program_target__Var_28;
          MR_String make__program_target__Var_30;
          MR_String make__program_target__Command_66;
          MR_Word make__program_target__OutputStream_67;
          MR_Word make__program_target__Var_68;

          {
            make__program_target__Var_28 = mercury__dir__f_slash_2_f_0(make__program_target__InstallDir_11, (MR_String) "Mercury");
          }
          {
            make__program_target__Var_30 = mercury__string__f_43_43_2_f_0(make__program_target__Ext_13, (MR_String) "s");
          }
          {
            make__program_target__Var_26 = mercury__dir__f_slash_2_f_0(make__program_target__Var_28, make__program_target__Var_30);
          }
          {
            make__program_target__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_68, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_68, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_68, 3) = ((MR_Box) (make__program_target__FileName_16));
            MR_hl_field(MR_mktag(0), make__program_target__Var_68, 4) = ((MR_Box) (make__program_target__Var_26));
          }
          {
            make__util__verbose_make_msg_4_p_0(make__program_target__Globals_9, make__program_target__Var_68);
          }
          {
            make__program_target__Command_66 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_9, make__program_target__FileName_16, make__program_target__Var_26);
          }
          {
            mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_67);
          }
          {
            parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_9, make__program_target__OutputStream_67, (MR_Integer) 0, make__program_target__Command_66, &make__program_target__Succeeded2_18);
          }
          {
            *make__program_target__Succeeded_14 = mercury__bool__and_2_f_0(make__program_target__Succeeded1_17, make__program_target__Succeeded2_18);
          }
        }
        break;
      case (MR_Integer) 1:
        *make__program_target__Succeeded_14 = make__program_target__Succeeded1_17;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__LinkSucceeded_11,
  MR_String make__program_target__GradeDir_12,
  MR_Word make__program_target__ModuleName_13,
  MR_Word * make__program_target__Succeeded_14,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_33,
  MR_Word * make__program_target__STATE_VARIABLE_Info_34)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybeImports_17;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_10, make__program_target__ModuleName_13, &make__program_target__MaybeImports_17, make__program_target__STATE_VARIABLE_Info_0_33, make__program_target__STATE_VARIABLE_Info_34);
    }
    if ((make__program_target__MaybeImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__program_target__Succeeded_14 = (MR_Integer) 0;
    else
      {
        MR_String make__program_target__Prefix_19;
        MR_String make__program_target__LibDir_20;
        MR_Word make__program_target__Target_21;
        MR_Word make__program_target__HighLevelCode_22;
        MR_Word make__program_target__HeaderSucceeded_27;
        MR_String make__program_target__GradeIntDir_28;
        MR_Word make__program_target__AnyIntermod_29;
        MR_Word make__program_target__OptSucceeded_30;
        MR_Word make__program_target__IntermodAnalysis_31;
        MR_Word make__program_target__IntermodAnalysisSucceeded_32;
        MR_String make__program_target__Var_40;
        MR_String make__program_target__Var_53;
        MR_Word make__program_target__Var_60;

        {
          libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 632, &make__program_target__Prefix_19);
        }
        {
          make__program_target__Var_40 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_19, (MR_String) "lib");
        }
        {
          make__program_target__LibDir_20 = mercury__dir__f_slash_2_f_0(make__program_target__Var_40, (MR_String) "mercury");
        }
        {
          libs__globals__get_target_2_p_0(make__program_target__Globals_10, &make__program_target__Target_21);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 262, &make__program_target__HighLevelCode_22);
        }
        make__program_target__succeeded = (make__program_target__Target_21 == (MR_Integer) 0);
        if (make__program_target__succeeded)
          make__program_target__succeeded = (make__program_target__HighLevelCode_22 == (MR_Integer) 1);
        if (make__program_target__succeeded)
          {
            MR_String make__program_target__GradeIncDir_23;
            MR_Word make__program_target__HeaderSucceeded1_24;
            MR_String make__program_target__IntDir_25;
            MR_Word make__program_target__HeaderSucceeded2_26;
            MR_String make__program_target__Var_44;
            MR_String make__program_target__Var_45;

            {
              make__program_target__Var_45 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "lib");
            }
            {
              make__program_target__Var_44 = mercury__dir__f_slash_2_f_0(make__program_target__Var_45, make__program_target__GradeDir_12);
            }
            {
              make__program_target__GradeIncDir_23 = mercury__dir__f_slash_2_f_0(make__program_target__Var_44, (MR_String) "inc");
            }
            {
              make__program_target__install_subdir_file_8_p_0(make__program_target__Globals_10, make__program_target__LinkSucceeded_11, make__program_target__GradeIncDir_23, make__program_target__ModuleName_13, (MR_String) "mih", &make__program_target__HeaderSucceeded1_24);
            }
            {
              make__program_target__IntDir_25 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "ints");
            }
            {
              make__program_target__install_subdir_file_8_p_0(make__program_target__Globals_10, make__program_target__LinkSucceeded_11, make__program_target__IntDir_25, make__program_target__ModuleName_13, (MR_String) "mih", &make__program_target__HeaderSucceeded2_26);
            }
            {
              make__program_target__HeaderSucceeded_27 = mercury__bool__and_2_f_0(make__program_target__HeaderSucceeded1_24, make__program_target__HeaderSucceeded2_26);
            }
          }
        else
          make__program_target__HeaderSucceeded_27 = (MR_Integer) 1;
        {
          make__program_target__Var_53 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "ints");
        }
        {
          make__program_target__GradeIntDir_28 = mercury__dir__f_slash_2_f_0(make__program_target__Var_53, make__program_target__GradeDir_12);
        }
        {
          libs__globals__get_any_intermod_2_p_0(make__program_target__Globals_10, &make__program_target__AnyIntermod_29);
        }
        switch (make__program_target__AnyIntermod_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__program_target__OptSucceeded_30 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              {
                make__program_target__install_subdir_file_8_p_0(make__program_target__Globals_10, make__program_target__LinkSucceeded_11, make__program_target__GradeIntDir_28, make__program_target__ModuleName_13, (MR_String) "opt", &make__program_target__OptSucceeded_30);
              }
            }
            break;
        }
        {
          libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 335, &make__program_target__IntermodAnalysis_31);
        }
        switch (make__program_target__IntermodAnalysis_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__program_target__IntermodAnalysisSucceeded_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              {
                make__program_target__install_subdir_file_8_p_0(make__program_target__Globals_10, make__program_target__LinkSucceeded_11, make__program_target__GradeIntDir_28, make__program_target__ModuleName_13, (MR_String) "analysis", &make__program_target__IntermodAnalysisSucceeded_32);
              }
            }
            break;
        }
        {
          make__program_target__Var_60 = mercury__bool__and_2_f_0(make__program_target__HeaderSucceeded_27, make__program_target__OptSucceeded_30);
        }
        {
          *make__program_target__Succeeded_14 = mercury__bool__and_2_f_0(make__program_target__Var_60, make__program_target__IntermodAnalysisSucceeded_32);
        }
      }
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__GradeDir_8,
  MR_Word make__program_target__ModuleName_9,
  MR_Word * make__program_target__Succeeded_10)
{
  {
    MR_bool make__program_target__succeeded;
    MR_String make__program_target__Prefix_12;
    MR_String make__program_target__GradeModulesDir_13;
    MR_String make__program_target__InitFileName_14;
    MR_String make__program_target__Var_18;
    MR_String make__program_target__Var_19;
    MR_String make__program_target__Var_20;
    MR_String make__program_target__Command_35;
    MR_Word make__program_target__OutputStream_36;
    MR_Word make__program_target__Var_37;

    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_7, (MR_Integer) 632, &make__program_target__Prefix_12);
    }
    {
      make__program_target__Var_20 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_12, (MR_String) "lib");
    }
    {
      make__program_target__Var_19 = mercury__dir__f_slash_2_f_0(make__program_target__Var_20, (MR_String) "mercury");
    }
    {
      make__program_target__Var_18 = mercury__dir__f_slash_2_f_0(make__program_target__Var_19, (MR_String) "modules");
    }
    {
      make__program_target__GradeModulesDir_13 = mercury__dir__f_slash_2_f_0(make__program_target__Var_18, make__program_target__GradeDir_8);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__program_target__Globals_7, (MR_Integer) 1, (MR_String) ".init", make__program_target__ModuleName_9, &make__program_target__InitFileName_14);
    }
    {
      make__program_target__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 1) = ((MR_Box) (make__program_target__install_grade_init_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 3) = ((MR_Box) (make__program_target__InitFileName_14));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 4) = ((MR_Box) (make__program_target__GradeModulesDir_13));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_7, make__program_target__Var_37);
    }
    {
      make__program_target__Command_35 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_7, make__program_target__InitFileName_14, make__program_target__GradeModulesDir_13);
    }
    {
      mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_36);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_7, make__program_target__OutputStream_36, (MR_Integer) 0, make__program_target__Command_35, make__program_target__Succeeded_10);
    }
  }
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_14;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_34;

    {
      make__program_target__install_grade_ints_and_headers_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_Succeeded_14, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_STATE_VARIABLE_Info_34);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_Succeeded_14));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_34));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__LinkSucceeded0_12,
  MR_String make__program_target__GradeDir_13,
  MR_Word make__program_target__ModuleName_14,
  MR_Word make__program_target__AllModules_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_34,
  MR_Word * make__program_target__STATE_VARIABLE_Info_35)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__DirResult_19;
    MR_Word make__program_target__LinkSucceeded1_20;
    MR_Word make__program_target__LinkSucceeded_21;

    {
      make__program_target__make_grade_install_dirs_6_p_0(make__program_target__Globals_11, make__program_target__GradeDir_13, &make__program_target__DirResult_19, &make__program_target__LinkSucceeded1_20);
    }
    {
      make__program_target__LinkSucceeded_21 = mercury__bool__and_2_f_0(make__program_target__LinkSucceeded0_12, make__program_target__LinkSucceeded1_20);
    }
    switch (make__program_target__DirResult_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__program_target__Succeeded_16 = (MR_Integer) 0;
          *make__program_target__STATE_VARIABLE_Info_35 = make__program_target__STATE_VARIABLE_Info_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String make__program_target__LibFileName_22;
          MR_String make__program_target__SharedLibFileName_23;
          MR_String make__program_target__DllFileName_24;
          MR_String make__program_target__JarFileName_25;
          MR_String make__program_target__ErlangArchiveFileName_26;
          MR_String make__program_target__Prefix_27;
          MR_Word make__program_target__LibsSucceeded_29;
          MR_Word make__program_target__InitSucceeded_30;
          MR_Word make__program_target__IntsHeadersSucceeded_33;
          MR_Word make__program_target__Var_86;
          MR_Word make__program_target__Var_89;
          MR_Word make__program_target__Var_90;
          MR_Box make__program_target__conv3_STATE_VARIABLE_Info_35;
          MR_Box make__program_target__conv2_STATE_VARIABLE_IO_37;

          {
            make__util__linked_target_file_name_6_p_0(make__program_target__Globals_11, make__program_target__ModuleName_14, (MR_Integer) 1, &make__program_target__LibFileName_22);
          }
          {
            make__util__linked_target_file_name_6_p_0(make__program_target__Globals_11, make__program_target__ModuleName_14, (MR_Integer) 2, &make__program_target__SharedLibFileName_23);
          }
          {
            make__util__linked_target_file_name_6_p_0(make__program_target__Globals_11, make__program_target__ModuleName_14, (MR_Integer) 4, &make__program_target__DllFileName_24);
          }
          {
            make__util__linked_target_file_name_6_p_0(make__program_target__Globals_11, make__program_target__ModuleName_14, (MR_Integer) 6, &make__program_target__JarFileName_25);
          }
          {
            make__util__linked_target_file_name_6_p_0(make__program_target__Globals_11, make__program_target__ModuleName_14, (MR_Integer) 8, &make__program_target__ErlangArchiveFileName_26);
          }
          {
            libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_11, (MR_Integer) 632, &make__program_target__Prefix_27);
          }
          {
            make__program_target__succeeded = mercury__string__prefix_2_p_0(make__program_target__GradeDir_13, (MR_String) "csharp");
          }
          if (make__program_target__succeeded)
            {
              MR_String make__program_target__GradeLibDir_28;
              MR_String make__program_target__Var_51;
              MR_String make__program_target__Var_52;
              MR_String make__program_target__Var_53;

              {
                make__program_target__Var_53 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_27, (MR_String) "lib");
              }
              {
                make__program_target__Var_52 = mercury__dir__f_slash_2_f_0(make__program_target__Var_53, (MR_String) "mercury");
              }
              {
                make__program_target__Var_51 = mercury__dir__f_slash_2_f_0(make__program_target__Var_52, (MR_String) "lib");
              }
              {
                make__program_target__GradeLibDir_28 = mercury__dir__f_slash_2_f_0(make__program_target__Var_51, make__program_target__GradeDir_13);
              }
              {
                make__program_target__install_file_6_p_0(make__program_target__Globals_11, make__program_target__DllFileName_24, make__program_target__GradeLibDir_28, &make__program_target__LibsSucceeded_29);
              }
              make__program_target__InitSucceeded_30 = (MR_Integer) 1;
            }
          else
            {
              {
                make__program_target__succeeded = mercury__string__prefix_2_p_0(make__program_target__GradeDir_13, (MR_String) "java");
              }
              if (make__program_target__succeeded)
                {
                  MR_String make__program_target__Var_59;
                  MR_String make__program_target__Var_60;
                  MR_String make__program_target__Var_61;
                  MR_String make__program_target__GradeLibDir_91;

                  {
                    make__program_target__Var_61 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_27, (MR_String) "lib");
                  }
                  {
                    make__program_target__Var_60 = mercury__dir__f_slash_2_f_0(make__program_target__Var_61, (MR_String) "mercury");
                  }
                  {
                    make__program_target__Var_59 = mercury__dir__f_slash_2_f_0(make__program_target__Var_60, (MR_String) "lib");
                  }
                  {
                    make__program_target__GradeLibDir_91 = mercury__dir__f_slash_2_f_0(make__program_target__Var_59, make__program_target__GradeDir_13);
                  }
                  {
                    make__program_target__install_file_6_p_0(make__program_target__Globals_11, make__program_target__JarFileName_25, make__program_target__GradeLibDir_91, &make__program_target__LibsSucceeded_29);
                  }
                  make__program_target__InitSucceeded_30 = (MR_Integer) 1;
                }
              else
                {
                  {
                    make__program_target__succeeded = mercury__string__prefix_2_p_0(make__program_target__GradeDir_13, (MR_String) "erlang");
                  }
                  if (make__program_target__succeeded)
                    {
                      MR_String make__program_target__Var_67;
                      MR_String make__program_target__Var_68;
                      MR_String make__program_target__Var_69;
                      MR_String make__program_target__GradeLibDir_92;

                      {
                        make__program_target__Var_69 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_27, (MR_String) "lib");
                      }
                      {
                        make__program_target__Var_68 = mercury__dir__f_slash_2_f_0(make__program_target__Var_69, (MR_String) "mercury");
                      }
                      {
                        make__program_target__Var_67 = mercury__dir__f_slash_2_f_0(make__program_target__Var_68, (MR_String) "lib");
                      }
                      {
                        make__program_target__GradeLibDir_92 = mercury__dir__f_slash_2_f_0(make__program_target__Var_67, make__program_target__GradeDir_13);
                      }
                      {
                        make__program_target__install_directory_6_p_0(make__program_target__Globals_11, make__program_target__ErlangArchiveFileName_26, make__program_target__GradeLibDir_92, &make__program_target__LibsSucceeded_29);
                      }
                      {
                        make__program_target__install_grade_init_6_p_0(make__program_target__Globals_11, make__program_target__GradeDir_13, make__program_target__ModuleName_14, &make__program_target__InitSucceeded_30);
                      }
                    }
                  else
                    {
                      MR_Word make__program_target__LibSuccess_31;
                      MR_String make__program_target__Var_75;
                      MR_String make__program_target__Var_76;
                      MR_String make__program_target__Var_77;
                      MR_String make__program_target__GradeLibDir_93;

                      {
                        make__program_target__Var_77 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_27, (MR_String) "lib");
                      }
                      {
                        make__program_target__Var_76 = mercury__dir__f_slash_2_f_0(make__program_target__Var_77, (MR_String) "mercury");
                      }
                      {
                        make__program_target__Var_75 = mercury__dir__f_slash_2_f_0(make__program_target__Var_76, (MR_String) "lib");
                      }
                      {
                        make__program_target__GradeLibDir_93 = mercury__dir__f_slash_2_f_0(make__program_target__Var_75, make__program_target__GradeDir_13);
                      }
                      {
                        make__program_target__maybe_install_library_file_7_p_0(make__program_target__Globals_11, (MR_String) "static", make__program_target__LibFileName_22, make__program_target__GradeLibDir_93, &make__program_target__LibSuccess_31);
                      }
                      make__program_target__succeeded = (strcmp(make__program_target__LibFileName_22, make__program_target__SharedLibFileName_23) == 0);
                      if (make__program_target__succeeded)
                        make__program_target__LibsSucceeded_29 = make__program_target__LibSuccess_31;
                      else
                        {
                          MR_Word make__program_target__SharedLibSuccess_32;

                          {
                            make__program_target__maybe_install_library_file_7_p_0(make__program_target__Globals_11, (MR_String) "shared", make__program_target__SharedLibFileName_23, make__program_target__GradeLibDir_93, &make__program_target__SharedLibSuccess_32);
                          }
                          {
                            make__program_target__LibsSucceeded_29 = mercury__bool__and_2_f_0(make__program_target__LibSuccess_31, make__program_target__SharedLibSuccess_32);
                          }
                        }
                      {
                        make__program_target__install_grade_init_6_p_0(make__program_target__Globals_11, make__program_target__GradeDir_13, make__program_target__ModuleName_14, &make__program_target__InitSucceeded_30);
                      }
                    }
                }
            }
          {
            make__program_target__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 3) = ((MR_Box) (make__program_target__Globals_11));
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 4) = ((MR_Box) (make__program_target__LinkSucceeded_21));
            MR_hl_field(MR_mktag(0), make__program_target__Var_86, 5) = ((MR_Box) (make__program_target__GradeDir_13));
          }
          {
            mercury__list__map_foldl2_7_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_86, make__program_target__AllModules_15, &make__program_target__IntsHeadersSucceeded_33, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_34)), &make__program_target__conv3_STATE_VARIABLE_Info_35, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_37);
          }
          *make__program_target__STATE_VARIABLE_Info_35 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_35);
          {
            make__program_target__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_90, 0) = ((MR_Box) (make__program_target__InitSucceeded_30));
            MR_hl_field(MR_mktag(1), make__program_target__Var_90, 1) = ((MR_Box) (make__program_target__IntsHeadersSucceeded_33));
          }
          {
            make__program_target__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_89, 0) = ((MR_Box) (make__program_target__LibsSucceeded_29));
            MR_hl_field(MR_mktag(1), make__program_target__Var_89, 1) = ((MR_Box) (make__program_target__Var_90));
          }
          {
            *make__program_target__Succeeded_16 = mercury__bool__and_list_1_f_0(make__program_target__Var_89);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_13;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_28;

    {
      make__program_target__make_misc_target_builder_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_Succeeded_13, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_STATE_VARIABLE_Info_28);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_Succeeded_13));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__Info0_14,
  MR_Word make__program_target__CleanAfter_15,
  MR_Word * make__program_target__Succeeded_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__LibSucceeded_18;
    MR_Word make__program_target__Info1_19;
    MR_Word make__program_target__Var_25;
    MR_Word make__program_target__Var_41;

    {
      make__program_target__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_25, 0) = ((MR_Box) (make__program_target__ModuleName_12));
      MR_hl_field(MR_mktag(0), make__program_target__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      make__program_target__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 1) = ((MR_Box) (make__program_target__install_library_grade_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_41, 3) = ((MR_Box) (make__program_target__Var_25));
    }
    {
      make__util__build_with_module_options_9_p_0(make__program_target__Globals_10, make__program_target__ModuleName_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__program_target__Var_41, &make__program_target__LibSucceeded_18, make__program_target__Info0_14, &make__program_target__Info1_19);
    }
    switch (make__program_target__LibSucceeded_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__program_target__Succeeded_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String make__program_target__GradeDir_20;
          MR_Word make__program_target__Info2_21;
          MR_Word make__program_target___Info_22;

          {
            libs__compute_grade__grade_directory_component_2_p_0(make__program_target__Globals_10, &make__program_target__GradeDir_20);
          }
          {
            make__program_target__install_library_grade_files_10_p_0(make__program_target__Globals_10, make__program_target__LinkSucceeded0_11, make__program_target__GradeDir_20, make__program_target__ModuleName_12, make__program_target__AllModules_13, make__program_target__Succeeded_16, make__program_target__Info1_19, &make__program_target__Info2_21);
          }
          {
            make__program_target__maybe_make_grade_clean_8_p_0(make__program_target__Globals_10, make__program_target__CleanAfter_15, make__program_target__ModuleName_12, make__program_target__AllModules_13, make__program_target__Info2_21, &make__program_target___Info_22);
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word make__program_target__File_5,
  MR_Word make__program_target___Status_6,
  MR_Word make__program_target__StatusMap0_7)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__StatusMap_8;

    {
      make__program_target__StatusMap_8 = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(make__program_target__File_5, make__program_target__StatusMap0_7);
    }
    return make__program_target__StatusMap_8;
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv3_LambdaHeadVar__1_74;
    MR_Word make__program_target__conv2_LambdaHeadVar__3_76;

    {
      make__program_target__IntroducedFrom__pred__install_library_grade__1467__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 7))), &make__program_target__conv3_LambdaHeadVar__1_74, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv2_LambdaHeadVar__3_76);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv3_LambdaHeadVar__1_74));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv2_LambdaHeadVar__3_76));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_STATE_VARIABLE_Info_16;

    {
      make__program_target__maybe_make_grade_clean_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Integer make__program_target__conv0_HeadVar__2_2;

    {
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_HeadVar__2_2);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_library_grade__1422__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word make__program_target__LinkSucceeded0_11,
  MR_Word make__program_target__ModuleName_12,
  MR_Word make__program_target__AllModules_13,
  MR_Word make__program_target__Globals_14,
  MR_String make__program_target__Grade_15,
  MR_Word * make__program_target__Succeeded_16,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_39,
  MR_Word * make__program_target__STATE_VARIABLE_Info_40)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_196_196;
    MR_Word make__program_target__UseGradeSubdirs_19;
    MR_Word make__program_target__CleanAfter_20;
    MR_Word make__program_target__OptionArgs0_21;
    MR_Word make__program_target__OptionArgs_22;
    MR_Word make__program_target__MaybeMCFlags_23;
    MR_Word make__program_target__OptionsSpecs_29;
    MR_Word make__program_target__LibGlobals_30;
    MR_Word make__program_target__Var_44;
    MR_Word make__program_target__Var_46;
    MR_Word make__program_target__Var_50;
    MR_Word make__program_target__Var_60;
    MR_Word make__program_target__Var_99;
    MR_Word make__program_target__Var_100;
    MR_Word make__program_target__Var_101;
    MR_Word make__program_target__Var_102;
    MR_Word make__program_target__Var_103;
    MR_Word make__program_target__Var_104;
    MR_Word make__program_target__Var_105;
    MR_Word make__program_target__Var_106;
    MR_Word make__program_target__Var_107;
    MR_Word make__program_target__Var_108;
    MR_Word make__program_target__Var_109;
    MR_Word make__program_target__Var_110;
    MR_Word make__program_target__Var_111;
    MR_Word make__program_target__Var_112;
    MR_Word make__program_target__Var_113;
    MR_Word make__program_target__Var_114;
    MR_Word make__program_target__Var_115;
    MR_Integer make__program_target__Var_116;
    MR_Word make__program_target__Var_117;
    MR_Word make__program_target__Var_118;
    MR_Word make__program_target__Var_119;
    MR_Word make__program_target__Var_120;
    MR_Word make__program_target__Var_121;
    MR_Word make__program_target__Var_122;
    MR_Word make__program_target__Var_123;
    MR_Word make__program_target__Var_124;
    MR_Word make__program_target__Var_125;
    MR_Word make__program_target__Var_126;
    MR_Word make__program_target__Var_127;
    MR_Word make__program_target__Var_128;
    MR_Word make__program_target__Var_129;
    MR_Word make__program_target__Var_130;
    MR_Word make__program_target__Var_131;
    MR_Word make__program_target__Var_132;
    MR_Word make__program_target__Var_133;
    MR_Word make__program_target__Var_134;
    MR_Integer make__program_target__Var_135;
    MR_Word make__program_target__Var_136;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_14, (MR_Integer) 648, &make__program_target__UseGradeSubdirs_19);
    }
    {
      make__program_target__CleanAfter_20 = mercury__bool__not_1_f_0(make__program_target__UseGradeSubdirs_19);
    }
    make__program_target__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
    make__program_target__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
    make__program_target__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
    make__program_target__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
    make__program_target__OptionArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 4)));
    make__program_target__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 5)));
    make__program_target__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 6)));
    make__program_target__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 7)));
    make__program_target__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 8)));
    make__program_target__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 9)));
    make__program_target__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 10)));
    make__program_target__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 11)));
    make__program_target__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 12)));
    make__program_target__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 13)));
    make__program_target__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 14)));
    make__program_target__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 15)));
    make__program_target__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 16)));
    make__program_target__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 17)));
    make__program_target__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 18)));
    make__program_target__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 19)));
    make__program_target__TypeCtorInfo_196_196 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      make__program_target__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_46, 0) = ((MR_Box) (make__program_target__Grade_15));
      MR_hl_field(MR_mktag(1), make__program_target__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[52])));
    }
    {
      make__program_target__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_44, 0) = ((MR_Box) ((MR_String) "--grade"));
      MR_hl_field(MR_mktag(1), make__program_target__Var_44, 1) = ((MR_Box) (make__program_target__Var_46));
    }
    {
      make__program_target__OptionArgs_22 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_196_196, make__program_target__OptionArgs0_21, make__program_target__Var_44);
    }
    {
      make__program_target__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_50, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_50, 3) = ((MR_Box) (make__program_target__Grade_15));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_14, make__program_target__Var_50);
    }
    make__program_target__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
    make__program_target__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
    make__program_target__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
    make__program_target__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
    make__program_target__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 4)));
    make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 5)));
    make__program_target__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 6)));
    make__program_target__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 7)));
    make__program_target__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 8)));
    make__program_target__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 9)));
    make__program_target__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 10)));
    make__program_target__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 11)));
    make__program_target__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 12)));
    make__program_target__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 13)));
    make__program_target__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 14)));
    make__program_target__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 15)));
    make__program_target__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 16)));
    make__program_target__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 17)));
    make__program_target__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 18)));
    make__program_target__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 19)));
    {
      make__options_file__lookup_mmc_options_5_p_0(make__program_target__Globals_14, make__program_target__Var_60, &make__program_target__MaybeMCFlags_23);
    }
    if ((make__program_target__MaybeMCFlags_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
          return;
        }
      }
    else
      {
        MR_Word make__program_target__MCFlags_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeMCFlags_23, (MR_Integer) 0)));
        MR_Word make__program_target__DetectedGradeFlags_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
        MR_Word make__program_target__AllFlags_26;
        MR_Word make__program_target__Var_65;
        MR_Word make__program_target__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
        MR_Word make__program_target__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
        MR_Word make__program_target__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
        MR_Word make__program_target__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 4)));
        MR_Word make__program_target__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 5)));
        MR_Word make__program_target__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 6)));
        MR_Word make__program_target__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 7)));
        MR_Word make__program_target__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 8)));
        MR_Word make__program_target__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 9)));
        MR_Word make__program_target__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 10)));
        MR_Word make__program_target__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 11)));
        MR_Word make__program_target__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 12)));
        MR_Word make__program_target__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 13)));
        MR_Word make__program_target__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 14)));
        MR_Word make__program_target__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 15)));
        MR_Word make__program_target__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 16)));
        MR_Word make__program_target__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 17)));
        MR_Integer make__program_target__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 18)));
        MR_Word make__program_target__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 19)));
        MR_Word make__program_target__Var_27;
        MR_Word make__program_target__Var_28;

        {
          make__program_target__Var_65 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_196_196, make__program_target__MCFlags_24, make__program_target__OptionArgs_22);
        }
        {
          make__program_target__AllFlags_26 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_196_196, make__program_target__DetectedGradeFlags_25, make__program_target__Var_65);
        }
        {
          libs__handle_options__handle_given_options_7_p_0(make__program_target__AllFlags_26, &make__program_target__Var_27, &make__program_target__Var_28, &make__program_target__OptionsSpecs_29, &make__program_target__LibGlobals_30);
        }
      }
    if ((make__program_target__OptionsSpecs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__program_target__StatusMap_33;
        MR_Word make__program_target__Cleanup_34;
        MR_Word make__program_target__VeryVerbose_35;
        MR_Word make__program_target__STATE_VARIABLE_Info_69_69;
        MR_Word make__program_target__Var_71;
        MR_Word make__program_target__Var_156;
        MR_Word make__program_target__Var_157;
        MR_Word make__program_target__Var_158;
        MR_Word make__program_target__Var_159;
        MR_Word make__program_target__Var_161;
        MR_Word make__program_target__Var_162;
        MR_Word make__program_target__Var_163;
        MR_Word make__program_target__Var_165;
        MR_Word make__program_target__Var_166;
        MR_Word make__program_target__Var_167;
        MR_Word make__program_target__Var_168;
        MR_Word make__program_target__Var_169;
        MR_Word make__program_target__Var_170;
        MR_Word make__program_target__Var_171;
        MR_Word make__program_target__Var_172;
        MR_Word make__program_target__Var_173;
        MR_Integer make__program_target__Var_174;
        MR_Word make__program_target__Var_175;
        MR_Word make__program_target__Var_160;
        MR_Word make__program_target__Var_164;
        MR_Box make__program_target__conv4_STATE_VARIABLE_Info_40;

        {
          make__program_target__StatusMap_33 = mercury__version_hash_table__init_default_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make__program_target_scalar_common_2[13]);
        }
        make__program_target__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
        make__program_target__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
        make__program_target__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
        make__program_target__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
        make__program_target__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 4)));
        make__program_target__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 5)));
        make__program_target__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 6)));
        make__program_target__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 7)));
        make__program_target__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 8)));
        make__program_target__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 9)));
        make__program_target__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 10)));
        make__program_target__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 11)));
        make__program_target__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 12)));
        make__program_target__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 13)));
        make__program_target__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 14)));
        make__program_target__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 15)));
        make__program_target__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 16)));
        make__program_target__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 17)));
        make__program_target__Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 18)));
        make__program_target__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_39, (MR_Integer) 19)));
        {
          make__program_target__STATE_VARIABLE_Info_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 0) = ((MR_Box) (make__program_target__Var_156));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 1) = ((MR_Box) (make__program_target__Var_157));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 2) = ((MR_Box) (make__program_target__Var_158));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 3) = ((MR_Box) (make__program_target__Var_159));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 4) = ((MR_Box) (make__program_target__OptionArgs_22));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 5) = ((MR_Box) (make__program_target__Var_161));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 6) = ((MR_Box) (make__program_target__Var_162));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 7) = ((MR_Box) (make__program_target__Var_163));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 8) = ((MR_Box) (make__program_target__StatusMap_33));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 9) = ((MR_Box) (make__program_target__Var_165));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 10) = ((MR_Box) (make__program_target__Var_166));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 11) = ((MR_Box) (make__program_target__Var_167));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 12) = ((MR_Box) (make__program_target__Var_168));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 13) = ((MR_Box) (make__program_target__Var_169));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 14) = ((MR_Box) (make__program_target__Var_170));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 15) = ((MR_Box) (make__program_target__Var_171));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 16) = ((MR_Box) (make__program_target__Var_172));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 17) = ((MR_Box) (make__program_target__Var_173));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 18) = ((MR_Box) (make__program_target__Var_174));
          MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_69_69, 19) = ((MR_Box) (make__program_target__Var_175));
        }
        {
          make__program_target__Cleanup_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 0) = ((MR_Box) (&make__program_target_scalar_common_5[10]));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 3) = ((MR_Box) (make__program_target__LibGlobals_30));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 4) = ((MR_Box) (make__program_target__CleanAfter_20));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 5) = ((MR_Box) (make__program_target__ModuleName_12));
          MR_hl_field(MR_mktag(0), make__program_target__Cleanup_34, 6) = ((MR_Box) (make__program_target__AllModules_13));
        }
        {
          libs__globals__lookup_bool_option_3_p_0(make__program_target__LibGlobals_30, (MR_Integer) 57, &make__program_target__VeryVerbose_35);
        }
        {
          make__program_target__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 0) = ((MR_Box) (&make__program_target_scalar_common_13[1]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_4));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 3) = ((MR_Box) (make__program_target__LinkSucceeded0_11));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 4) = ((MR_Box) (make__program_target__ModuleName_12));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 5) = ((MR_Box) (make__program_target__AllModules_13));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 6) = ((MR_Box) (make__program_target__CleanAfter_20));
          MR_hl_field(MR_mktag(0), make__program_target__Var_71, 7) = ((MR_Box) (make__program_target__LibGlobals_30));
        }
        {
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__program_target__VeryVerbose_35, make__program_target__Var_71, make__program_target__Cleanup_34, make__program_target__Succeeded_16, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_69_69)), &make__program_target__conv4_STATE_VARIABLE_Info_40);
        }
        *make__program_target__STATE_VARIABLE_Info_40 = ((MR_Word) make__program_target__conv4_STATE_VARIABLE_Info_40);
      }
    else
      {
        {
          libs__handle_options__usage_errors_4_p_0(make__program_target__Globals_14, make__program_target__OptionsSpecs_29);
        }
        *make__program_target__Succeeded_16 = (MR_Integer) 0;
        *make__program_target__STATE_VARIABLE_Info_40 = make__program_target__STATE_VARIABLE_Info_0_39;
      }
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__install_file__1717__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_String make__program_target__IncDir_9,
  MR_String make__program_target__FileName_10,
  MR_Word make__program_target__STATE_VARIABLE_Succeeded_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_Succeeded_15)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__InstallSucceeded_13;
    MR_String make__program_target__Command_27;
    MR_Word make__program_target__OutputStream_28;
    MR_Word make__program_target__Var_29;

    {
      make__program_target__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 1) = ((MR_Box) (make__program_target__install_extra_header_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 3) = ((MR_Box) (make__program_target__FileName_10));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 4) = ((MR_Box) (make__program_target__IncDir_9));
    }
    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_8, make__program_target__Var_29);
    }
    {
      make__program_target__Command_27 = libs__file_util__make_install_file_command_3_f_0(make__program_target__Globals_8, make__program_target__FileName_10, make__program_target__IncDir_9);
    }
    {
      mercury__io__output_stream_3_p_0(&make__program_target__OutputStream_28);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_8, make__program_target__OutputStream_28, (MR_Integer) 0, make__program_target__Command_27, &make__program_target__InstallSucceeded_13);
    }
    {
      *make__program_target__STATE_VARIABLE_Succeeded_15 = mercury__bool__and_2_f_0(make__program_target__InstallSucceeded_13, make__program_target__STATE_VARIABLE_Succeeded_0_14);
    }
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_Succeeded_14;

    {
      make__program_target__install_subdir_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_String) make__program_target__wrapper_arg_1), &make__program_target__conv0_Succeeded_14);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_Succeeded_14));
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__SubdirLinkSucceeded_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybeModuleAndImports_15;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_9, make__program_target__ModuleName_11, &make__program_target__MaybeModuleAndImports_15, make__program_target__STATE_VARIABLE_Info_0_27, make__program_target__STATE_VARIABLE_Info_28);
    }
    if ((make__program_target__MaybeModuleAndImports_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__program_target__Succeeded_12 = (MR_Integer) 0;
    else
      {
        MR_Word make__program_target__ModuleAndImports_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeModuleAndImports_15, (MR_Integer) 0)));
        MR_Word make__program_target__AnyIntermod_17;
        MR_Word make__program_target__Exts_18;
        MR_String make__program_target__Prefix_19;
        MR_String make__program_target__LibDir_20;
        MR_Word make__program_target__Results_21;
        MR_Word make__program_target__Target_22;
        MR_Word make__program_target__HeaderSucceeded_26;
        MR_String make__program_target__Var_41;
        MR_Word make__program_target__Var_44;
        MR_Word make__program_target__Var_45;
        MR_String make__program_target__Var_47;
        MR_Word make__program_target__Var_50;
        MR_Word make__program_target__Var_52;
        MR_Word make__program_target__Var_54;
        MR_Word make__program_target__Var_72;
        MR_Box make__program_target__conv1_STATE_VARIABLE_IO_46_46;

        {
          libs__globals__get_any_intermod_2_p_0(make__program_target__Globals_9, &make__program_target__AnyIntermod_17);
        }
        switch (make__program_target__AnyIntermod_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__program_target__Exts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 8)));
              MR_String make__program_target__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 0)));
              MR_Word make__program_target__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 1)));
              MR_Word make__program_target__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 2)));
              MR_Word make__program_target__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 3)));
              MR_Word make__program_target__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 4)));
              MR_Word make__program_target__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 5)));
              MR_Word make__program_target__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 6)));
              MR_Word make__program_target__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 7)));
              MR_Word make__program_target__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 9)));
              MR_Word make__program_target__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 10)));
              MR_Word make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 11)));
              MR_Word make__program_target__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 12)));
              MR_Word make__program_target__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 13)));
              MR_Word make__program_target__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 14)));
              MR_Word make__program_target__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 15)));
              MR_Word make__program_target__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 16)));
              MR_Word make__program_target__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 17)));
              MR_Word make__program_target__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 18)));
              MR_Word make__program_target__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 19)));
              MR_Word make__program_target__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 20)));
              MR_Word make__program_target__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 21)));
              MR_Word make__program_target__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 22)));
              MR_Word make__program_target__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 23)));
              MR_Word make__program_target__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 24)));
              MR_Word make__program_target__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 25)));
              MR_String make__program_target__Var_99 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__ModuleAndImports_16, (MR_Integer) 26)));

              {
                make__program_target__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__Var_33);
              }
              if (make__program_target__succeeded)
                {
                  make__program_target__Exts_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9]);
                }
              else
                make__program_target__Exts_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[10]);
            }
            break;
        }
        {
          libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_9, (MR_Integer) 632, &make__program_target__Prefix_19);
        }
        {
          make__program_target__Var_41 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_19, (MR_String) "lib");
        }
        {
          make__program_target__LibDir_20 = mercury__dir__f_slash_2_f_0(make__program_target__Var_41, (MR_String) "mercury");
        }
        {
          make__program_target__Var_47 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "ints");
        }
        {
          make__program_target__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 0) = ((MR_Box) (&make__program_target_scalar_common_5[9]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 3) = ((MR_Box) (make__program_target__Globals_9));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 4) = ((MR_Box) (make__program_target__SubdirLinkSucceeded_10));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 5) = ((MR_Box) (make__program_target__Var_47));
          MR_hl_field(MR_mktag(0), make__program_target__Var_44, 6) = ((MR_Box) (make__program_target__ModuleName_11));
        }
        {
          make__program_target__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_54, 0) = ((MR_Box) ((MR_String) "module_dep"));
          MR_hl_field(MR_mktag(1), make__program_target__Var_54, 1) = ((MR_Box) (make__program_target__Exts_18));
        }
        {
          make__program_target__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_52, 0) = ((MR_Box) ((MR_String) "int3"));
          MR_hl_field(MR_mktag(1), make__program_target__Var_52, 1) = ((MR_Box) (make__program_target__Var_54));
        }
        {
          make__program_target__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_50, 0) = ((MR_Box) ((MR_String) "int2"));
          MR_hl_field(MR_mktag(1), make__program_target__Var_50, 1) = ((MR_Box) (make__program_target__Var_52));
        }
        {
          make__program_target__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_45, 0) = ((MR_Box) ((MR_String) "int"));
          MR_hl_field(MR_mktag(1), make__program_target__Var_45, 1) = ((MR_Box) (make__program_target__Var_50));
        }
        {
          mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_44, make__program_target__Var_45, &make__program_target__Results_21, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_46_46);
        }
        {
          libs__globals__get_target_2_p_0(make__program_target__Globals_9, &make__program_target__Target_22);
        }
        switch (make__program_target__Target_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String make__program_target__FileName_23;
              MR_Word make__program_target__HeaderSucceeded1_24;
              MR_Word make__program_target__HeaderSucceeded2_25;
              MR_String make__program_target__Var_65;
              MR_String make__program_target__Var_68;

              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(make__program_target__Globals_9, (MR_Integer) 1, (MR_String) ".mh", make__program_target__ModuleName_11, &make__program_target__FileName_23);
              }
              {
                make__program_target__Var_65 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "inc");
              }
              {
                make__program_target__install_file_6_p_0(make__program_target__Globals_9, make__program_target__FileName_23, make__program_target__Var_65, &make__program_target__HeaderSucceeded1_24);
              }
              {
                make__program_target__Var_68 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "ints");
              }
              {
                make__program_target__install_subdir_file_8_p_0(make__program_target__Globals_9, make__program_target__SubdirLinkSucceeded_10, make__program_target__Var_68, make__program_target__ModuleName_11, (MR_String) "mh", &make__program_target__HeaderSucceeded2_25);
              }
              {
                make__program_target__HeaderSucceeded_26 = mercury__bool__and_2_f_0(make__program_target__HeaderSucceeded1_24, make__program_target__HeaderSucceeded2_25);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            make__program_target__HeaderSucceeded_26 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            {
              MR_String make__program_target__Var_59;
              MR_String make__program_target__FileName_73;

              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(make__program_target__Globals_9, (MR_Integer) 1, (MR_String) ".hrl", make__program_target__ModuleName_11, &make__program_target__FileName_73);
              }
              {
                make__program_target__Var_59 = mercury__dir__f_slash_2_f_0(make__program_target__LibDir_20, (MR_String) "inc");
              }
              {
                make__program_target__install_file_6_p_0(make__program_target__Globals_9, make__program_target__FileName_73, make__program_target__Var_59, &make__program_target__HeaderSucceeded_26);
              }
            }
            break;
        }
        {
          make__program_target__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_72, 0) = ((MR_Box) (make__program_target__HeaderSucceeded_26));
          MR_hl_field(MR_mktag(1), make__program_target__Var_72, 1) = ((MR_Box) (make__program_target__Results_21));
        }
        {
          *make__program_target__Succeeded_12 = mercury__bool__and_list_1_f_0(make__program_target__Var_72);
        }
      }
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv8_Succeeded_16;
    MR_Word make__program_target__conv7_STATE_VARIABLE_Info_40;

    {
      make__program_target__install_library_grade_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_String) make__program_target__wrapper_arg_2), &make__program_target__conv8_Succeeded_16, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv7_STATE_VARIABLE_Info_40);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv8_Succeeded_16));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv7_STATE_VARIABLE_Info_40));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv4_STATE_VARIABLE_Succeeded_15;

    {
      make__program_target__install_extra_header_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv4_STATE_VARIABLE_Succeeded_15);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv4_STATE_VARIABLE_Succeeded_15));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_12;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_28;

    {
      make__program_target__install_ints_and_headers_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_STATE_VARIABLE_Info_28);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_Succeeded_12));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__MainModuleName_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_25,
  MR_Word * make__program_target__STATE_VARIABLE_Info_26)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_45_45;
    MR_Word make__program_target__DepsSuccess_13;
    MR_Word make__program_target__AllModules0_14;
    MR_Word make__program_target__AllModules_15;
    MR_Word make__program_target__DirSucceeded_16;
    MR_Word make__program_target__LinkSucceeded_17;
    MR_Word make__program_target__STATE_VARIABLE_Info_29_29;

    {
      make__dependencies__find_reachable_local_modules_8_p_0(make__program_target__Globals_8, make__program_target__MainModuleName_9, &make__program_target__DepsSuccess_13, &make__program_target__AllModules0_14, make__program_target__STATE_VARIABLE_Info_0_25, &make__program_target__STATE_VARIABLE_Info_29_29);
    }
    make__program_target__TypeCtorInfo_45_45 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      make__program_target__AllModules_15 = mercury__set__to_sorted_list_1_f_0(make__program_target__TypeCtorInfo_45_45, make__program_target__AllModules0_14);
    }
    {
      make__program_target__make_install_dirs_5_p_0(make__program_target__Globals_8, &make__program_target__DirSucceeded_16, &make__program_target__LinkSucceeded_17);
    }
    make__program_target__succeeded = (make__program_target__DepsSuccess_13 == (MR_Integer) 1);
    if (make__program_target__succeeded)
      make__program_target__succeeded = (make__program_target__DirSucceeded_16 == (MR_Integer) 1);
    if (make__program_target__succeeded)
      {
        MR_Word make__program_target__TypeCtorInfo_53_53;
        MR_Word make__program_target__TypeCtorInfo_54_54;
        MR_Word make__program_target__IntsSucceeded_18;
        MR_Word make__program_target__ExtraHdrsSucceeded_19;
        MR_String make__program_target__Grade_20;
        MR_Word make__program_target__GradeSucceeded_21;
        MR_Word make__program_target__Var_32;
        MR_Word make__program_target__STATE_VARIABLE_Info_33_33;
        MR_Word make__program_target__STATE_VARIABLE_Info_36_36;
        MR_Word make__program_target__ExtraHdrs_68;
        MR_String make__program_target__Prefix_69;
        MR_String make__program_target__IncDir_70;
        MR_String make__program_target__Var_73;
        MR_String make__program_target__Var_74;
        MR_Word make__program_target__Var_78;
        MR_Box make__program_target__conv3_STATE_VARIABLE_Info_33_33;
        MR_Box make__program_target__conv2_STATE_VARIABLE_IO_34_34;
        MR_Box make__program_target__conv6_ExtraHdrsSucceeded_19;
        MR_Box make__program_target__conv5_STATE_VARIABLE_IO_35_35;
        MR_Word make__program_target__Var_38;
        MR_Word make__program_target__Var_39;

        {
          make__program_target__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_5[8]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 3) = ((MR_Box) (make__program_target__Globals_8));
          MR_hl_field(MR_mktag(0), make__program_target__Var_32, 4) = ((MR_Box) (make__program_target__LinkSucceeded_17));
        }
        make__program_target__TypeCtorInfo_53_53 = (MR_Word) &make__make__type_ctor_info_make_info_0;
        make__program_target__TypeCtorInfo_54_54 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        {
          mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_45_45, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, make__program_target__TypeCtorInfo_53_53, make__program_target__TypeCtorInfo_54_54, make__program_target__Var_32, make__program_target__AllModules_15, &make__program_target__IntsSucceeded_18, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_29_29)), &make__program_target__conv3_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_34_34);
        }
        make__program_target__STATE_VARIABLE_Info_33_33 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_33_33);
        {
          libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 655, &make__program_target__ExtraHdrs_68);
        }
        {
          libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 632, &make__program_target__Prefix_69);
        }
        {
          make__program_target__Var_74 = mercury__dir__f_slash_2_f_0(make__program_target__Prefix_69, (MR_String) "lib");
        }
        {
          make__program_target__Var_73 = mercury__dir__f_slash_2_f_0(make__program_target__Var_74, (MR_String) "mercury");
        }
        {
          make__program_target__IncDir_70 = mercury__dir__f_slash_2_f_0(make__program_target__Var_73, (MR_String) "inc");
        }
        {
          make__program_target__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_78, 0) = ((MR_Box) (&make__program_target_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_78, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_2));
          MR_hl_field(MR_mktag(0), make__program_target__Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__program_target__Var_78, 3) = ((MR_Box) (make__program_target__Globals_8));
          MR_hl_field(MR_mktag(0), make__program_target__Var_78, 4) = ((MR_Box) (make__program_target__IncDir_70));
        }
        {
          mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_78, make__program_target__ExtraHdrs_68, ((MR_Box) ((MR_Integer) 1)), &make__program_target__conv6_ExtraHdrsSucceeded_19, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv5_STATE_VARIABLE_IO_35_35);
        }
        make__program_target__ExtraHdrsSucceeded_19 = ((MR_Word) make__program_target__conv6_ExtraHdrsSucceeded_19);
        {
          libs__compute_grade__grade_directory_component_2_p_0(make__program_target__Globals_8, &make__program_target__Grade_20);
        }
        {
          make__program_target__install_library_grade_files_10_p_0(make__program_target__Globals_8, make__program_target__LinkSucceeded_17, make__program_target__Grade_20, make__program_target__MainModuleName_9, make__program_target__AllModules_15, &make__program_target__GradeSucceeded_21, make__program_target__STATE_VARIABLE_Info_33_33, &make__program_target__STATE_VARIABLE_Info_36_36);
        }
        {
          make__program_target__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__program_target__Var_39, 0) = ((MR_Box) (make__program_target__ExtraHdrsSucceeded_19));
          MR_hl_field(MR_mktag(1), make__program_target__Var_39, 1) = ((MR_Box) (make__program_target__IntsSucceeded_18));
        }
        {
          make__program_target__Var_38 = mercury__bool__and_list_1_f_0(make__program_target__Var_39);
        }
        make__program_target__succeeded = (make__program_target__Var_38 == (MR_Integer) 1);
        if (make__program_target__succeeded)
          make__program_target__succeeded = (make__program_target__GradeSucceeded_21 == (MR_Integer) 1);
        if (make__program_target__succeeded)
          {
            MR_Word make__program_target__TypeCtorInfo_55_55;
            MR_Word make__program_target__LibGrades0_22;
            MR_Word make__program_target__KeepGoing_23;
            MR_Word make__program_target__LibGrades_24;
            MR_Word make__program_target__Var_42;
            MR_Box make__program_target__conv10_STATE_VARIABLE_Info_26;
            MR_Box make__program_target__conv9_STATE_VARIABLE_IO_28;

            {
              libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 639, &make__program_target__LibGrades0_22);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 626, &make__program_target__KeepGoing_23);
            }
            make__program_target__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              make__program_target__LibGrades_24 = mercury__list__delete_all_2_f_0(make__program_target__TypeCtorInfo_55_55, make__program_target__LibGrades0_22, ((MR_Box) (make__program_target__Grade_20)));
            }
            {
              make__program_target__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_3));
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 3) = ((MR_Box) (make__program_target__LinkSucceeded_17));
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 4) = ((MR_Box) (make__program_target__MainModuleName_9));
              MR_hl_field(MR_mktag(0), make__program_target__Var_42, 5) = ((MR_Box) (make__program_target__AllModules_15));
            }
            {
              make__util__foldl2_maybe_stop_at_error_9_p_0(make__program_target__TypeCtorInfo_55_55, make__program_target__TypeCtorInfo_53_53, make__program_target__TypeCtorInfo_54_54, make__program_target__KeepGoing_23, make__program_target__Var_42, make__program_target__Globals_8, make__program_target__LibGrades_24, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_36_36)), &make__program_target__conv10_STATE_VARIABLE_Info_26, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv9_STATE_VARIABLE_IO_28);
            }
            *make__program_target__STATE_VARIABLE_Info_26 = ((MR_Word) make__program_target__conv10_STATE_VARIABLE_Info_26);
          }
        else
          {
            *make__program_target__Succeeded_10 = (MR_Integer) 0;
            *make__program_target__STATE_VARIABLE_Info_26 = make__program_target__STATE_VARIABLE_Info_36_36;
          }
      }
    else
      {
        *make__program_target__Succeeded_10 = (MR_Integer) 0;
        *make__program_target__STATE_VARIABLE_Info_26 = make__program_target__STATE_VARIABLE_Info_29_29;
      }
  }
}

static void MR_CALL 
make__program_target__build_java_library_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__MainModuleName_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_13,
  MR_Word * make__program_target__STATE_VARIABLE_Info_14)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_17;

    {
      make__program_target__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 1) = ((MR_Box) ((MR_Integer) 6));
    }
    {
      make__program_target__make_linked_target_7_p_0(make__program_target__Globals_8, make__program_target__Var_17, make__program_target__Succeeded_10, make__program_target__STATE_VARIABLE_Info_0_13, make__program_target__STATE_VARIABLE_Info_14);
    }
  }
}

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word make__program_target__MainModuleName_9,
  MR_Word make__program_target__AllModules_10,
  MR_Word make__program_target__Globals_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Target_15;

    {
      libs__globals__get_target_2_p_0(make__program_target__Globals_11, &make__program_target__Target_15);
    }
    switch (make__program_target__Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__StaticSucceeded_38;
          MR_Word make__program_target__SharedLibsSupported_39;
          MR_Word make__program_target__Var_42;
          MR_Word make__program_target__STATE_VARIABLE_Info_24_43;

          {
            make__program_target__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_42, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
            MR_hl_field(MR_mktag(0), make__program_target__Var_42, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            make__program_target__make_linked_target_7_p_0(make__program_target__Globals_11, make__program_target__Var_42, &make__program_target__StaticSucceeded_38, make__program_target__STATE_VARIABLE_Info_0_16, &make__program_target__STATE_VARIABLE_Info_24_43);
          }
          {
            backend_libs__compile_target_code__shared_libraries_supported_2_p_0(make__program_target__Globals_11, &make__program_target__SharedLibsSupported_39);
          }
          switch (make__program_target__StaticSucceeded_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *make__program_target__Succeeded_12 = (MR_Integer) 0;
                *make__program_target__STATE_VARIABLE_Info_17 = make__program_target__STATE_VARIABLE_Info_24_43;
              }
              break;
            case (MR_Integer) 1:
              switch (make__program_target__SharedLibsSupported_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word make__program_target__ErrorStream_41;

                    *make__program_target__STATE_VARIABLE_Info_17 = make__program_target__STATE_VARIABLE_Info_24_43;
                    {
                      mercury__io__output_stream_3_p_0(&make__program_target__ErrorStream_41);
                    }
                    {
                      backend_libs__compile_target_code__make_library_init_file_7_p_0(make__program_target__Globals_11, make__program_target__ErrorStream_41, make__program_target__MainModuleName_9, make__program_target__AllModules_10, make__program_target__Succeeded_12);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word make__program_target__Var_46;
                    MR_Word make__program_target__SharedLibsSucceeded_87;

                    {
                      make__program_target__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), make__program_target__Var_46, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
                      MR_hl_field(MR_mktag(0), make__program_target__Var_46, 1) = ((MR_Box) ((MR_Integer) 2));
                    }
                    {
                      make__program_target__make_linked_target_7_p_0(make__program_target__Globals_11, make__program_target__Var_46, &make__program_target__SharedLibsSucceeded_87, make__program_target__STATE_VARIABLE_Info_24_43, make__program_target__STATE_VARIABLE_Info_17);
                    }
                    switch (make__program_target__SharedLibsSucceeded_87) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *make__program_target__Succeeded_12 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word make__program_target__ErrorStream_83;

                          {
                            mercury__io__output_stream_3_p_0(&make__program_target__ErrorStream_83);
                          }
                          {
                            backend_libs__compile_target_code__make_library_init_file_7_p_0(make__program_target__Globals_11, make__program_target__ErrorStream_83, make__program_target__MainModuleName_9, make__program_target__AllModules_10, make__program_target__Succeeded_12);
                          }
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
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__Var_61;

          {
            make__program_target__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_61, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
            MR_hl_field(MR_mktag(0), make__program_target__Var_61, 1) = ((MR_Box) ((MR_Integer) 4));
          }
          {
            make__program_target__make_linked_target_7_p_0(make__program_target__Globals_11, make__program_target__Var_61, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_0_16, make__program_target__STATE_VARIABLE_Info_17);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word make__program_target__Succeeded0_75;
          MR_Word make__program_target__Var_77;

          {
            make__program_target__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_77, 0) = ((MR_Box) (make__program_target__MainModuleName_9));
            MR_hl_field(MR_mktag(0), make__program_target__Var_77, 1) = ((MR_Box) ((MR_Integer) 8));
          }
          {
            make__program_target__make_linked_target_7_p_0(make__program_target__Globals_11, make__program_target__Var_77, &make__program_target__Succeeded0_75, make__program_target__STATE_VARIABLE_Info_0_16, make__program_target__STATE_VARIABLE_Info_17);
          }
          switch (make__program_target__Succeeded0_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *make__program_target__Succeeded_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__program_target__ErrorStream_76;

                {
                  mercury__io__output_stream_3_p_0(&make__program_target__ErrorStream_76);
                }
                {
                  backend_libs__compile_target_code__make_erlang_library_init_file_7_p_0(make__program_target__Globals_11, make__program_target__ErrorStream_76, make__program_target__MainModuleName_9, make__program_target__AllModules_10, make__program_target__Succeeded_12);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          make__program_target__build_java_library_7_p_0(make__program_target__Globals_11, make__program_target__MainModuleName_9, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_0_16, make__program_target__STATE_VARIABLE_Info_17);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word make__program_target__ModuleName_4,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_7,
  MR_Word * make__program_target__STATE_VARIABLE_Info_8)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Dep_6;
    MR_Word make__program_target__Var_9;
    MR_Word make__program_target__Var_13;
    MR_Word make__program_target__Var_14;
    MR_Word make__program_target__Var_15;
    MR_Word make__program_target__Var_16;
    MR_Word make__program_target__Var_17;
    MR_Word make__program_target__Var_18;
    MR_Word make__program_target__Var_19;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__Var_21;
    MR_Word make__program_target__Var_22;
    MR_Word make__program_target__Var_23;
    MR_Word make__program_target__Var_24;
    MR_Word make__program_target__Var_25;
    MR_Word make__program_target__Var_26;
    MR_Word make__program_target__Var_27;
    MR_Word make__program_target__Var_28;
    MR_Word make__program_target__Var_29;
    MR_Word make__program_target__Var_30;
    MR_Word make__program_target__Var_31;
    MR_Integer make__program_target__Var_32;
    MR_Word make__program_target__Var_33;
    MR_Word make__program_target__Var_34;
    MR_Word make__program_target__Var_35;
    MR_Word make__program_target__Var_36;
    MR_Word make__program_target__Var_37;
    MR_Word make__program_target__Var_38;
    MR_Word make__program_target__Var_39;
    MR_Word make__program_target__Var_40;
    MR_Word make__program_target__Var_41;
    MR_Word make__program_target__Var_43;
    MR_Word make__program_target__Var_44;
    MR_Word make__program_target__Var_45;
    MR_Word make__program_target__Var_46;
    MR_Word make__program_target__Var_47;
    MR_Word make__program_target__Var_48;
    MR_Word make__program_target__Var_49;
    MR_Word make__program_target__Var_50;
    MR_Word make__program_target__Var_51;
    MR_Integer make__program_target__Var_52;
    MR_Word make__program_target__Var_53;
    MR_Word make__program_target__Var_42;

    {
      make__program_target__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_9, 0) = ((MR_Box) (make__program_target__ModuleName_4));
      MR_hl_field(MR_mktag(0), make__program_target__Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    }
    {
      make__program_target__Dep_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Dep_6, 0) = ((MR_Box) (make__program_target__Var_9));
    }
    make__program_target__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    make__program_target__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    make__program_target__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    make__program_target__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    make__program_target__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    make__program_target__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    make__program_target__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    make__program_target__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    make__program_target__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
    make__program_target__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
    make__program_target__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
    make__program_target__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
    make__program_target__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
    make__program_target__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
    make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 14)));
    make__program_target__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 15)));
    make__program_target__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 16)));
    make__program_target__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 17)));
    make__program_target__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 18)));
    make__program_target__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 19)));
    {
      make__program_target__Var_14 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__program_target__Dep_6)), make__program_target__Var_13, ((MR_Box) ((MR_Integer) 0)));
    }
    make__program_target__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    make__program_target__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    make__program_target__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    make__program_target__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
    make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
    make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
    make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
    make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
    make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
    make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 14)));
    make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 15)));
    make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 16)));
    make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 17)));
    make__program_target__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 18)));
    make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_7, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__program_target__STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_14));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_43));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_44));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_46));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_47));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_48));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_49));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_50));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_51));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_52));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_53));
    }
  }
}

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word make__program_target__ReanalyseSuboptimal_1,
  MR_Word make__program_target__Globals_2,
  MR_Word make__program_target__HeadVar__3_3,
  MR_Word * make__program_target__HeadVar__4_4,
  MR_Word * make__program_target__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__program_target__succeeded;

        if ((make__program_target__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__program_target__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *make__program_target__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word make__program_target__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word make__program_target__Modules_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word make__program_target__ModuleStatus_20;

            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            {
              analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__program_target_scalar_common_1[6], ((MR_Box) ((MR_Integer) 0)), make__program_target__Globals_2, make__program_target__Module_15, &make__program_target__ModuleStatus_20);
            }
            switch (make__program_target__ModuleStatus_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word make__program_target__InvalidModules0_22;

                  {
                    make__program_target__modules_needing_reanalysis_7_p_0(make__program_target__ReanalyseSuboptimal_1, make__program_target__Globals_2, make__program_target__Modules_16, &make__program_target__InvalidModules0_22, make__program_target__HeadVar__5_5);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *make__program_target__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__program_target__Module_15));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__program_target__InvalidModules0_22));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word make__program_target__next_value_of_HeadVar__3_3 = make__program_target__Modules_16;

                    make__program_target__HeadVar__3_3 = make__program_target__next_value_of_HeadVar__3_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__program_target__SuboptimalModules0_21;

                  {
                    make__program_target__modules_needing_reanalysis_7_p_0(make__program_target__ReanalyseSuboptimal_1, make__program_target__Globals_2, make__program_target__Modules_16, make__program_target__HeadVar__4_4, &make__program_target__SuboptimalModules0_21);
                  }
                  switch (make__program_target__ReanalyseSuboptimal_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__program_target__HeadVar__5_5 = make__program_target__SuboptimalModules0_21;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *make__program_target__HeadVar__5_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__program_target__Module_15));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__program_target__SuboptimalModules0_21));
                      }
                      break;
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(
  MR_Word make__program_target__ModuleDeps_4,
  MR_Word make__program_target__ModuleName_5)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__ModuleImports_6;
    MR_Word make__program_target__MaybeModuleImports_7;
    MR_Box make__program_target__conv0_MaybeModuleImports_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__program_target_scalar_common_1[5], make__program_target__ModuleDeps_4, ((MR_Box) (make__program_target__ModuleName_5)), &make__program_target__conv0_MaybeModuleImports_7);
    }
    make__program_target__MaybeModuleImports_7 = ((MR_Word) make__program_target__conv0_MaybeModuleImports_7);
    if ((make__program_target__MaybeModuleImports_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "function \140make.program_target.lookup_module_and_imports_in_maybe_map\'/2", (MR_String) "MaybeModuleImports = no");
        }
      }
    else
      make__program_target__ModuleImports_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeModuleImports_7, (MR_Integer) 0)));
    return make__program_target__ModuleImports_6;
  }
}

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word make__program_target__LookupModuleImports_7,
  MR_Word make__program_target__ModuleName_8,
  MR_Word make__program_target__STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * make__program_target__STATE_VARIABLE_IntDepsGraph_13,
  MR_Word make__program_target__STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_ImplDepsGraph_15)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__ModuleImports_11;
    MR_Box MR_CALL (* make__program_target__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), make__program_target__LookupModuleImports_7, (MR_Integer) 1)));
    MR_Box make__program_target__conv1_ModuleImports_11;

    {
      make__program_target__conv1_ModuleImports_11 = make__program_target__func_0(((MR_Box) make__program_target__LookupModuleImports_7), ((MR_Box) (make__program_target__ModuleName_8)));
    }
    make__program_target__ModuleImports_11 = ((MR_Word) make__program_target__conv1_ModuleImports_11);
    {
      parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(make__program_target__ModuleImports_11, make__program_target__LookupModuleImports_7, make__program_target__STATE_VARIABLE_IntDepsGraph_0_12, make__program_target__STATE_VARIABLE_IntDepsGraph_13, make__program_target__STATE_VARIABLE_ImplDepsGraph_0_14, make__program_target__STATE_VARIABLE_ImplDepsGraph_15);
    }
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv5_HeadVar__2_28;

    {
      make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1110__1_2_p_0(((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv5_HeadVar__2_28);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv5_HeadVar__2_28));
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv2_STATE_VARIABLE_IntDepsGraph_13;
    MR_Word make__program_target__conv1_STATE_VARIABLE_ImplDepsGraph_15;

    {
      make__program_target__add_module_relations_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv1_STATE_VARIABLE_ImplDepsGraph_15);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv2_STATE_VARIABLE_IntDepsGraph_13));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv1_STATE_VARIABLE_ImplDepsGraph_15));
  }
}

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1)
{
  {
    MR_Box make__program_target__wrapper_arg_2;
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_ModuleImports_6;

    {
      make__program_target__conv0_ModuleImports_6 = make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1));
    }
    make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_ModuleImports_6));
    return make__program_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word make__program_target__ModuleDeps_4,
  MR_Word make__program_target__Modules0_5,
  MR_Word * make__program_target__Modules_6)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_24_24;
    MR_Word make__program_target__TypeInfo_25_25;
    MR_Word make__program_target__TypeInfo_26_26;
    MR_Word make__program_target__ImplDepsGraph_8;
    MR_Word make__program_target__Order0_9;
    MR_Word make__program_target__Order1_10;
    MR_Word make__program_target__Order2_11;
    MR_Word make__program_target__Var_12;
    MR_Word make__program_target__Var_13;
    MR_Word make__program_target__Var_14;
    MR_Word make__program_target__Var_15;
    MR_Word make__program_target___IntDepsGraph_7;
    MR_Box make__program_target__conv4__IntDepsGraph_7;
    MR_Box make__program_target__conv3_ImplDepsGraph_8;

    {
      make__program_target__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_15, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_15, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_15, 3) = ((MR_Box) (make__program_target__ModuleDeps_4));
    }
    {
      make__program_target__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_12, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_12, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_12, 3) = ((MR_Box) (make__program_target__Var_15));
    }
    make__program_target__TypeCtorInfo_24_24 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      make__program_target__Var_13 = mercury__digraph__init_0_f_0(make__program_target__TypeCtorInfo_24_24);
    }
    {
      make__program_target__Var_14 = mercury__digraph__init_0_f_0(make__program_target__TypeCtorInfo_24_24);
    }
    make__program_target__TypeInfo_25_25 = (MR_Word) &make__program_target_scalar_common_1[3];
    {
      mercury__list__foldl2_6_p_0(make__program_target__TypeCtorInfo_24_24, make__program_target__TypeInfo_25_25, make__program_target__TypeInfo_25_25, make__program_target__Var_12, make__program_target__Modules0_5, ((MR_Box) (make__program_target__Var_13)), &make__program_target__conv4__IntDepsGraph_7, ((MR_Box) (make__program_target__Var_14)), &make__program_target__conv3_ImplDepsGraph_8);
    }
    make__program_target___IntDepsGraph_7 = ((MR_Word) make__program_target__conv4__IntDepsGraph_7);
    make__program_target__ImplDepsGraph_8 = ((MR_Word) make__program_target__conv3_ImplDepsGraph_8);
    {
      mercury__digraph__atsort_2_p_0(make__program_target__TypeCtorInfo_24_24, make__program_target__ImplDepsGraph_8, &make__program_target__Order0_9);
    }
    make__program_target__TypeInfo_26_26 = (MR_Word) &make__program_target_scalar_common_1[4];
    {
      mercury__list__reverse_2_p_0(make__program_target__TypeInfo_26_26, make__program_target__Order0_9, &make__program_target__Order1_10);
    }
    {
      mercury__list__map_3_p_0(make__program_target__TypeInfo_26_26, (MR_Word) &make__program_target_scalar_common_1[1], (MR_Word) &make__program_target_scalar_common_2[12], make__program_target__Order1_10, &make__program_target__Order2_11);
    }
    {
      mercury__list__condense_2_p_0(make__program_target__TypeCtorInfo_24_24, make__program_target__Order2_11, make__program_target__Modules_6);
    }
  }
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1041__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1));
    }
    return make__program_target__succeeded;
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__AllModules_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TargetModules1_16;
    MR_Word make__program_target__TargetModules_18;
    MR_Word make__program_target__Succeeded0_19;
    MR_Word make__program_target__LocalModulesOpts_20;
    MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    MR_Word make__program_target__Var_29;
    MR_Word make__program_target__STATE_VARIABLE_Info_31_31;
    MR_Word make__program_target__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
    MR_Word make__program_target__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    MR_Word make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    MR_Word make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    MR_Word make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    MR_Word make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    MR_Word make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    MR_Word make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
    MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
    MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
    MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
    MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
    MR_Word make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
    MR_Word make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
    MR_Integer make__program_target__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
    MR_Word make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));

    {
      make__program_target__reverse_ordered_modules_3_p_0(make__program_target__Var_28, make__program_target__AllModules_11, &make__program_target__TargetModules1_16);
    }
    {
      make__program_target__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 1) = ((MR_Box) (make__program_target__build_analysis_files_1_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_29, 3) = ((MR_Box) (make__program_target__AllModules_11));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__Var_29, make__program_target__TargetModules1_16, &make__program_target__TargetModules_18);
    }
    {
      make__dependencies__make_local_module_id_options_8_p_0(make__program_target__Globals_9, make__program_target__MainModuleName_10, &make__program_target__Succeeded0_19, &make__program_target__LocalModulesOpts_20, make__program_target__STATE_VARIABLE_Info_0_21, &make__program_target__STATE_VARIABLE_Info_31_31);
    }
    switch (make__program_target__Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__program_target__Succeeded_12 = (MR_Integer) 0;
          *make__program_target__STATE_VARIABLE_Info_22 = make__program_target__STATE_VARIABLE_Info_31_31;
        }
        break;
      case (MR_Integer) 1:
        {
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(make__program_target__Globals_9, make__program_target__TargetModules_18, make__program_target__LocalModulesOpts_20, make__program_target__Succeeded0_19, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_31_31, make__program_target__STATE_VARIABLE_Info_22);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0(
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__MainModuleName_11,
  MR_Word make__program_target__AllModules_12,
  MR_Word make__program_target__Succeeded0_13,
  MR_Word * make__program_target__Succeeded_14,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__KeepGoing_17;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_10, (MR_Integer) 626, &make__program_target__KeepGoing_17);
    }
    make__program_target__succeeded = (make__program_target__Succeeded0_13 == (MR_Integer) 0);
    if (make__program_target__succeeded)
      make__program_target__succeeded = (make__program_target__KeepGoing_17 == (MR_Integer) 0);
    if (make__program_target__succeeded)
      {
        *make__program_target__Succeeded_14 = (MR_Integer) 0;
        *make__program_target__STATE_VARIABLE_Info_20 = make__program_target__STATE_VARIABLE_Info_0_19;
      }
    else
      {
        MR_Word make__program_target__Succeeded1_18;
        MR_Word make__program_target__STATE_VARIABLE_Info_24_24;

        {
          make__program_target__make_all_interface_files_7_p_0(make__program_target__Globals_10, make__program_target__AllModules_12, &make__program_target__Succeeded1_18, make__program_target__STATE_VARIABLE_Info_0_19, &make__program_target__STATE_VARIABLE_Info_24_24);
        }
        make__program_target__succeeded = (make__program_target__Succeeded1_18 == (MR_Integer) 0);
        if (make__program_target__succeeded)
          make__program_target__succeeded = (make__program_target__KeepGoing_17 == (MR_Integer) 0);
        if (make__program_target__succeeded)
          {
            *make__program_target__Succeeded_14 = (MR_Integer) 0;
            *make__program_target__STATE_VARIABLE_Info_20 = make__program_target__STATE_VARIABLE_Info_24_24;
          }
        else
          {
            make__program_target__build_analysis_files_1_8_p_0(make__program_target__Globals_10, make__program_target__MainModuleName_11, make__program_target__AllModules_12, make__program_target__Succeeded_14, make__program_target__STATE_VARIABLE_Info_24_24, make__program_target__STATE_VARIABLE_Info_20);
          }
      }
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      mercury__io__format_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word make__program_target__Globals_7,
  MR_String make__program_target__CacheDir_8,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_12,
  MR_Word * make__program_target__STATE_VARIABLE_Info_13)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_17;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__Var_21;
    MR_Word make__program_target__Var_11;

    {
      make__program_target__Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_21, 0) = ((MR_Box) (make__program_target__CacheDir_8));
    }
    {
      make__program_target__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_20, 0) = ((MR_Box) (make__program_target__Var_21));
      MR_hl_field(MR_mktag(1), make__program_target__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 1) = ((MR_Box) (make__program_target__remove_cache_dir_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 3) = ((MR_Box) ((MR_String) "Removing %s\n"));
      MR_hl_field(MR_mktag(0), make__program_target__Var_17, 4) = ((MR_Box) (make__program_target__Var_20));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_7, (MR_Integer) 61, make__program_target__Var_17);
    }
    {
      mercury__io__remove_file_recursively_4_p_0(make__program_target__CacheDir_8, &make__program_target__Var_11);
    }
    *make__program_target__STATE_VARIABLE_Info_13 = make__program_target__STATE_VARIABLE_Info_0_12;
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      mercury__io__format_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))));
    }
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word make__program_target__Globals_6,
  MR_Word * make__program_target__Succeeded_7,
  MR_String * make__program_target__CacheDir_8)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MakeRes_10;
    MR_Word make__program_target__Var_16;
    MR_Word make__program_target__Var_19;
    MR_Word make__program_target__Var_20;
    MR_Word make__program_target__UseGradeSubdirs_42;
    MR_String make__program_target__TargetArch_43;
    MR_Word make__program_target__DirComponents_45;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_6, (MR_Integer) 648, &make__program_target__UseGradeSubdirs_42);
    }
    {
      libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_6, (MR_Integer) 666, &make__program_target__TargetArch_43);
    }
    switch (make__program_target__UseGradeSubdirs_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__program_target__DirComponents_45 = (MR_Word) MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[8]);
        break;
      case (MR_Integer) 1:
        {
          MR_String make__program_target__Grade_44;
          MR_Word make__program_target__Var_53;
          MR_Word make__program_target__Var_54;

          {
            libs__compute_grade__grade_directory_component_2_p_0(make__program_target__Globals_6, &make__program_target__Grade_44);
          }
          {
            make__program_target__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_54, 0) = ((MR_Box) (make__program_target__TargetArch_43));
            MR_hl_field(MR_mktag(1), make__program_target__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[8])));
          }
          {
            make__program_target__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_53, 0) = ((MR_Box) (make__program_target__Grade_44));
            MR_hl_field(MR_mktag(1), make__program_target__Var_53, 1) = ((MR_Box) (make__program_target__Var_54));
          }
          {
            make__program_target__DirComponents_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__DirComponents_45, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), make__program_target__DirComponents_45, 1) = ((MR_Box) (make__program_target__Var_53));
          }
        }
        break;
    }
    {
      *make__program_target__CacheDir_8 = mercury__dir__relative_path_name_from_components_1_f_0(make__program_target__DirComponents_45);
    }
    {
      make__program_target__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), make__program_target__Var_20, 0) = ((MR_Box) (*make__program_target__CacheDir_8));
    }
    {
      make__program_target__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_19, 0) = ((MR_Box) (make__program_target__Var_20));
      MR_hl_field(MR_mktag(1), make__program_target__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 1) = ((MR_Box) (make__program_target__create_analysis_cache_dir_5_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 3) = ((MR_Box) ((MR_String) "Creating %s\n"));
      MR_hl_field(MR_mktag(0), make__program_target__Var_16, 4) = ((MR_Box) (make__program_target__Var_19));
    }
    {
      make__util__verbose_make_msg_option_5_p_0(make__program_target__Globals_6, (MR_Integer) 61, make__program_target__Var_16);
    }
    {
      mercury__dir__make_directory_4_p_0(*make__program_target__CacheDir_8, &make__program_target__MakeRes_10);
    }
    if ((make__program_target__MakeRes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__program_target__Succeeded_7 = (MR_Integer) 1;
    else
      {
        MR_Word make__program_target__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MakeRes_10, (MR_Integer) 0)));
        MR_String make__program_target__Var_28;

        {
          mercury__io__write_string_3_p_0((MR_String) "Error: making directory ");
        }
        {
          mercury__io__write_string_3_p_0(*make__program_target__CacheDir_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": ");
        }
        {
          make__program_target__Var_28 = mercury__io__error_message_1_f_0(make__program_target__Error_11);
        }
        {
          mercury__io__write_string_3_p_0(make__program_target__Var_28);
        }
        {
          mercury__io__nl_2_p_0();
        }
        *make__program_target__Succeeded_7 = (MR_Integer) 0;
      }
  }
}

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_ParentModules_0_17,
  MR_Word * make__program_target__STATE_VARIABLE_ParentModules_18,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybeImports_14;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_9, make__program_target__ModuleName_10, &make__program_target__MaybeImports_14, make__program_target__STATE_VARIABLE_Info_0_19, make__program_target__STATE_VARIABLE_Info_20);
    }
    if ((make__program_target__MaybeImports_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__program_target__STATE_VARIABLE_ParentModules_18 = make__program_target__STATE_VARIABLE_ParentModules_0_17;
    else
      {
        MR_Word make__program_target__Imports_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeImports_14, (MR_Integer) 0)));
        MR_Word make__program_target__Children_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 8)));
        MR_String make__program_target__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 0)));
        MR_Word make__program_target__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 1)));
        MR_Word make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 2)));
        MR_Word make__program_target__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 3)));
        MR_Word make__program_target__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 4)));
        MR_Word make__program_target__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 5)));
        MR_Word make__program_target__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 6)));
        MR_Word make__program_target__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 7)));
        MR_Word make__program_target__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 9)));
        MR_Word make__program_target__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 10)));
        MR_Word make__program_target__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 11)));
        MR_Word make__program_target__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 12)));
        MR_Word make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 13)));
        MR_Word make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 14)));
        MR_Word make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 15)));
        MR_Word make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 16)));
        MR_Word make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 17)));
        MR_Word make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 18)));
        MR_Word make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 19)));
        MR_Word make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 20)));
        MR_Word make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 21)));
        MR_Word make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 22)));
        MR_Word make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 23)));
        MR_Word make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 24)));
        MR_Word make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 25)));
        MR_String make__program_target__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 26)));

        {
          make__program_target__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__Children_16);
        }
        if (make__program_target__succeeded)
          *make__program_target__STATE_VARIABLE_ParentModules_18 = make__program_target__STATE_VARIABLE_ParentModules_0_17;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__program_target__STATE_VARIABLE_ParentModules_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__program_target__ModuleName_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__program_target__STATE_VARIABLE_ParentModules_0_17));
          }
      }
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv14_HeadVar__5_82;
    MR_Word make__program_target__conv13_HeadVar__7_84;

    {
      make__program_target__IntroducedFrom__pred__make_all_interface_files__878__1_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv14_HeadVar__5_82, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv13_HeadVar__7_84);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv14_HeadVar__5_82));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv13_HeadVar__7_84));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv12_HeadVar__3_3;
    MR_Word make__program_target__conv11_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv12_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv11_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv12_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv11_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv8_HeadVar__5_64;
    MR_Word make__program_target__conv7_HeadVar__7_66;

    {
      make__program_target__IntroducedFrom__pred__make_all_interface_files__873__1_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv8_HeadVar__5_64, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv7_HeadVar__7_66);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv8_HeadVar__5_64));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv7_HeadVar__7_66));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv6_HeadVar__3_3;
    MR_Word make__program_target__conv5_HeadVar__5_5;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv6_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv5_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv6_HeadVar__3_3));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv5_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_STATE_VARIABLE_ParentModules_18;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_20;

    {
      make__program_target__collect_modules_with_children_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_STATE_VARIABLE_ParentModules_18, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_STATE_VARIABLE_Info_20);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_STATE_VARIABLE_ParentModules_18));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__AllModules0_9,
  MR_Word * make__program_target__Succeeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_22,
  MR_Word * make__program_target__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_60_60;
    MR_Word make__program_target__TypeCtorInfo_61_61;
    MR_Word make__program_target__TypeInfo_79_79;
    MR_Word make__program_target__NonnestedModules_13;
    MR_Word make__program_target__ParentModules_14;
    MR_Word make__program_target__ShortInts_15;
    MR_Word make__program_target__PrivateInts_16;
    MR_Word make__program_target__LongInts_17;
    MR_Word make__program_target__AnyIntermod_18;
    MR_Word make__program_target__OptFiles_19;
    MR_Word make__program_target__KeepGoing_20;
    MR_Word make__program_target__Succeeded0_21;
    MR_Word make__program_target__STATE_VARIABLE_Info_26_26;
    MR_Word make__program_target__Var_28;
    MR_Word make__program_target__STATE_VARIABLE_Info_30_30;
    MR_Word make__program_target__Var_37;
    MR_Word make__program_target__Var_38;
    MR_Word make__program_target__STATE_VARIABLE_Info_39_39;
    MR_Word make__program_target__Var_42;
    MR_Box make__program_target__conv4_ParentModules_14;
    MR_Box make__program_target__conv3_STATE_VARIABLE_Info_30_30;
    MR_Box make__program_target__conv2_STATE_VARIABLE_IO_31_31;
    MR_Box make__program_target__conv10_STATE_VARIABLE_Info_39_39;
    MR_Box make__program_target__conv9_STATE_VARIABLE_IO_40_40;

    {
      make__dependencies__remove_nested_modules_7_p_0(make__program_target__Globals_8, make__program_target__AllModules0_9, &make__program_target__NonnestedModules_13, make__program_target__STATE_VARIABLE_Info_0_22, &make__program_target__STATE_VARIABLE_Info_26_26);
    }
    {
      make__program_target__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_28, 3) = ((MR_Box) (make__program_target__Globals_8));
    }
    make__program_target__TypeCtorInfo_60_60 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    make__program_target__TypeCtorInfo_61_61 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl3_8_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__program_target_scalar_common_1[1], make__program_target__TypeCtorInfo_60_60, make__program_target__TypeCtorInfo_61_61, make__program_target__Var_28, make__program_target__NonnestedModules_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__program_target__conv4_ParentModules_14, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_26_26)), &make__program_target__conv3_STATE_VARIABLE_Info_30_30, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_31_31);
    }
    make__program_target__ParentModules_14 = ((MR_Word) make__program_target__conv4_ParentModules_14);
    make__program_target__STATE_VARIABLE_Info_30_30 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_30_30);
    {
      make__program_target__ShortInts_15 = make__util__make_dependency_list_2_f_0(make__program_target__NonnestedModules_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
    {
      make__program_target__PrivateInts_16 = make__util__make_dependency_list_2_f_0(make__program_target__ParentModules_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
    {
      make__program_target__LongInts_17 = make__util__make_dependency_list_2_f_0(make__program_target__NonnestedModules_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
    {
      libs__globals__get_any_intermod_2_p_0(make__program_target__Globals_8, &make__program_target__AnyIntermod_18);
    }
    switch (make__program_target__AnyIntermod_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__program_target__OptFiles_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          {
            make__program_target__OptFiles_19 = make__util__make_dependency_list_2_f_0(make__program_target__NonnestedModules_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 626, &make__program_target__KeepGoing_20);
    }
    {
      make__program_target__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 3) = ((MR_Box) (make__program_target__KeepGoing_20));
      MR_hl_field(MR_mktag(0), make__program_target__Var_37, 4) = ((MR_Box) (&make__program_target_scalar_common_2[10]));
    }
    {
      make__program_target__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_42, 0) = ((MR_Box) (make__program_target__PrivateInts_16));
      MR_hl_field(MR_mktag(1), make__program_target__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_38, 0) = ((MR_Box) (make__program_target__ShortInts_15));
      MR_hl_field(MR_mktag(1), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__Var_42));
    }
    make__program_target__TypeInfo_79_79 = (MR_Word) &make__program_target_scalar_common_1[0];
    {
      make__util__foldl2_maybe_stop_at_error_9_p_0(make__program_target__TypeInfo_79_79, make__program_target__TypeCtorInfo_60_60, make__program_target__TypeCtorInfo_61_61, make__program_target__KeepGoing_20, make__program_target__Var_37, make__program_target__Globals_8, make__program_target__Var_38, &make__program_target__Succeeded0_21, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_30_30)), &make__program_target__conv10_STATE_VARIABLE_Info_39_39, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv9_STATE_VARIABLE_IO_40_40);
    }
    make__program_target__STATE_VARIABLE_Info_39_39 = ((MR_Word) make__program_target__conv10_STATE_VARIABLE_Info_39_39);
    switch (make__program_target__Succeeded0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__program_target__Succeeded_10 = (MR_Integer) 0;
          *make__program_target__STATE_VARIABLE_Info_23 = make__program_target__STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__Var_44;
          MR_Word make__program_target__Var_45;
          MR_Word make__program_target__Var_49;
          MR_Box make__program_target__conv16_STATE_VARIABLE_Info_23;
          MR_Box make__program_target__conv15_STATE_VARIABLE_IO_25;

          {
            make__program_target__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_44, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_44, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_5));
            MR_hl_field(MR_mktag(0), make__program_target__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_44, 3) = ((MR_Box) (make__program_target__KeepGoing_20));
            MR_hl_field(MR_mktag(0), make__program_target__Var_44, 4) = ((MR_Box) (&make__program_target_scalar_common_2[11]));
          }
          {
            make__program_target__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_49, 0) = ((MR_Box) (make__program_target__OptFiles_19));
            MR_hl_field(MR_mktag(1), make__program_target__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            make__program_target__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_45, 0) = ((MR_Box) (make__program_target__LongInts_17));
            MR_hl_field(MR_mktag(1), make__program_target__Var_45, 1) = ((MR_Box) (make__program_target__Var_49));
          }
          {
            make__util__foldl2_maybe_stop_at_error_9_p_0(make__program_target__TypeInfo_79_79, make__program_target__TypeCtorInfo_60_60, make__program_target__TypeCtorInfo_61_61, make__program_target__KeepGoing_20, make__program_target__Var_44, make__program_target__Globals_8, make__program_target__Var_45, make__program_target__Succeeded_10, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_39_39)), &make__program_target__conv16_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv15_STATE_VARIABLE_IO_25);
          }
          *make__program_target__STATE_VARIABLE_Info_23 = ((MR_Word) make__program_target__conv16_STATE_VARIABLE_Info_23);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__Globals_11,
  MR_Word make__program_target__HeadVar__3_12,
  MR_Word * make__program_target__Succeeded_13,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_27,
  MR_Word * make__program_target__STATE_VARIABLE_Info_28)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(make__program_target__HeadVar__1_1, make__program_target__Globals_11, make__program_target__Succeeded_13, make__program_target__STATE_VARIABLE_Info_0_27, make__program_target__STATE_VARIABLE_Info_28);
    }
  }
}

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
  MR_String make__program_target__FileName_5,
  MR_Word make__program_target__MaybeTimestamp_6,
  MR_Word make__program_target__STATE_VARIABLE_Timestamps_0_8,
  MR_Word * make__program_target__STATE_VARIABLE_Timestamps_9)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__program_target__succeeded = mercury__string__suffix_2_p_0(make__program_target__FileName_5, (MR_String) ".class");
    }
    if (make__program_target__succeeded)
      *make__program_target__STATE_VARIABLE_Timestamps_9 = make__program_target__STATE_VARIABLE_Timestamps_0_8;
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__program_target_scalar_common_2[1], ((MR_Box) (make__program_target__FileName_5)), ((MR_Box) (make__program_target__MaybeTimestamp_6)), make__program_target__STATE_VARIABLE_Timestamps_0_8, make__program_target__STATE_VARIABLE_Timestamps_9);
        }
      }
  }
}

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_HeadVar__4_4;

    {
      backend_libs__compile_target_code__compile_java_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), &make__program_target__conv0_HeadVar__4_4);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0(
  MR_Word make__program_target__JavaFiles_9,
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__ErrorStream_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Var_19;

    {
      make__program_target__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 1) = ((MR_Box) (make__program_target__build_java_files_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 3) = ((MR_Box) (make__program_target__Globals_10));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 4) = ((MR_Box) (make__program_target__ErrorStream_11));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 5) = ((MR_Box) (make__program_target__JavaFiles_9));
    }
    {
      libs__process_util__call_in_forked_process_4_p_0(make__program_target__Var_19, make__program_target__Succeeded_12);
    }
    *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_0_15;
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv3_Succeeded_12;
    MR_Word make__program_target__conv2_STATE_VARIABLE_Info_16;

    {
      make__program_target__build_java_files_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv3_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv2_STATE_VARIABLE_Info_16);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv3_Succeeded_12));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv2_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_String make__program_target__conv0_HeadVar__5_5;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv0_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__ModuleNames_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__JavaFiles_15;
    MR_Word make__program_target__Var_23;
    MR_Word make__program_target__Var_27;
    MR_Box make__program_target__conv1_STATE_VARIABLE_IO_24_24;

    {
      make__util__verbose_make_msg_4_p_0(make__program_target__Globals_9, (MR_Word) &make__program_target_scalar_common_10[0]);
    }
    {
      make__program_target__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_2));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 3) = ((MR_Box) (make__program_target__Globals_9));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), make__program_target__Var_23, 5) = ((MR_Box) ((MR_String) ".java"));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_23, make__program_target__ModuleNames_11, &make__program_target__JavaFiles_15, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_24_24);
    }
    {
      make__program_target__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_27, 0) = ((MR_Box) (&make__program_target_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_27, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_27, 3) = ((MR_Box) (make__program_target__JavaFiles_15));
    }
    {
      make__util__build_with_output_redirect_8_p_0(make__program_target__Globals_9, make__program_target__MainModuleName_10, make__program_target__Var_27, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_0_16, make__program_target__STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__ObjModules_9,
  MR_Word * make__program_target__OutOfDateModules_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_22,
  MR_Word * make__program_target__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__program_target__succeeded;

    if ((make__program_target__ObjModules_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__program_target__OutOfDateModules_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *make__program_target__STATE_VARIABLE_Info_23 = make__program_target__STATE_VARIABLE_Info_0_22;
      }
    else
      {
        MR_Word make__program_target__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__ObjModules_9, (MR_Integer) 0)));
        MR_Word make__program_target__ModuleNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__ObjModules_9, (MR_Integer) 1)));
        MR_Word make__program_target__OutOfDateModules0_15;
        MR_Word make__program_target__JavaTarget_16;
        MR_Word make__program_target__ClassTarget_17;
        MR_Word make__program_target__MaybeJavaTimestamp_18;
        MR_Word make__program_target__MaybeClassTimestamp_19;
        MR_Word make__program_target__STATE_VARIABLE_Info_26_26;
        MR_Word make__program_target__STATE_VARIABLE_Info_31_31;
        MR_Word make__program_target__JavaTimestamp_20;
        MR_Word make__program_target__ClassTimestamp_21;
        MR_Word make__program_target__Var_37;

        {
          make__program_target__out_of_date_java_modules_7_p_0(make__program_target__Globals_8, make__program_target__ModuleNames_14, &make__program_target__OutOfDateModules0_15, make__program_target__STATE_VARIABLE_Info_0_22, &make__program_target__STATE_VARIABLE_Info_26_26);
        }
        {
          make__program_target__JavaTarget_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__JavaTarget_16, 0) = ((MR_Box) (make__program_target__ModuleName_13));
          MR_hl_field(MR_mktag(0), make__program_target__JavaTarget_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
        }
        {
          make__program_target__ClassTarget_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__ClassTarget_17, 0) = ((MR_Box) (make__program_target__ModuleName_13));
          MR_hl_field(MR_mktag(0), make__program_target__ClassTarget_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
        }
        {
          make__util__get_target_timestamp_8_p_0(make__program_target__Globals_8, (MR_Integer) 1, make__program_target__JavaTarget_16, &make__program_target__MaybeJavaTimestamp_18, make__program_target__STATE_VARIABLE_Info_26_26, &make__program_target__STATE_VARIABLE_Info_31_31);
        }
        {
          make__util__get_target_timestamp_8_p_0(make__program_target__Globals_8, (MR_Integer) 1, make__program_target__ClassTarget_17, &make__program_target__MaybeClassTimestamp_19, make__program_target__STATE_VARIABLE_Info_31_31, make__program_target__STATE_VARIABLE_Info_23);
        }
        make__program_target__succeeded = ((MR_tag((MR_Word) make__program_target__MaybeJavaTimestamp_18)) == (MR_mktag((MR_Integer) 0)));
        if (make__program_target__succeeded)
          {
            make__program_target__JavaTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__MaybeJavaTimestamp_18, (MR_Integer) 0)));
            make__program_target__succeeded = ((MR_tag((MR_Word) make__program_target__MaybeClassTimestamp_19)) == (MR_mktag((MR_Integer) 0)));
            if (make__program_target__succeeded)
              {
                make__program_target__ClassTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__MaybeClassTimestamp_19, (MR_Integer) 0)));
                {
                  libs__timestamp____Compare____timestamp_0_0(&make__program_target__Var_37, make__program_target__ClassTimestamp_21, make__program_target__JavaTimestamp_20);
                }
                make__program_target__succeeded = (make__program_target__Var_37 == (MR_Integer) 1);
                make__program_target__succeeded = !(make__program_target__succeeded);
              }
          }
        if (make__program_target__succeeded)
          *make__program_target__OutOfDateModules_10 = make__program_target__OutOfDateModules0_15;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__program_target__OutOfDateModules_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__program_target__ModuleName_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__program_target__OutOfDateModules0_15));
          }
      }
  }
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Timestamps_9;

    {
      make__program_target__delete_java_class_timestamps_4_p_0(((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_STATE_VARIABLE_Timestamps_9);
    }
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Timestamps_9));
  }
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__ObjModules_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_20,
  MR_Word * make__program_target__STATE_VARIABLE_Info_21)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__OutOfDateModules_15;
    MR_Word make__program_target__STATE_VARIABLE_Info_24_24;

    {
      make__program_target__out_of_date_java_modules_7_p_0(make__program_target__Globals_9, make__program_target__ObjModules_11, &make__program_target__OutOfDateModules_15, make__program_target__STATE_VARIABLE_Info_0_20, &make__program_target__STATE_VARIABLE_Info_24_24);
    }
    if ((make__program_target__OutOfDateModules_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__program_target__Succeeded_12 = (MR_Integer) 1;
        *make__program_target__STATE_VARIABLE_Info_21 = make__program_target__STATE_VARIABLE_Info_24_24;
      }
    else
      {
        MR_Word make__program_target__TypeCtorInfo_74_74;
        MR_Word make__program_target__TypeInfo_75_75;
        MR_Word make__program_target__Timestamps0_18;
        MR_Word make__program_target__Timestamps_19;
        MR_Word make__program_target__STATE_VARIABLE_Info_26_26;
        MR_Word make__program_target__Var_29;
        MR_Word make__program_target__Var_31;
        MR_Word make__program_target__Var_32;
        MR_Word make__program_target__Var_33;
        MR_Word make__program_target__Var_34;
        MR_Word make__program_target__Var_35;
        MR_Word make__program_target__Var_36;
        MR_Word make__program_target__Var_37;
        MR_Word make__program_target__Var_38;
        MR_Word make__program_target__Var_39;
        MR_Word make__program_target__Var_40;
        MR_Word make__program_target__Var_41;
        MR_Word make__program_target__Var_42;
        MR_Word make__program_target__Var_43;
        MR_Word make__program_target__Var_44;
        MR_Word make__program_target__Var_45;
        MR_Word make__program_target__Var_46;
        MR_Word make__program_target__Var_47;
        MR_Integer make__program_target__Var_48;
        MR_Word make__program_target__Var_49;
        MR_Box make__program_target__conv1_Timestamps_19;
        MR_Word make__program_target__Var_50;
        MR_Word make__program_target__Var_52;
        MR_Word make__program_target__Var_53;
        MR_Word make__program_target__Var_54;
        MR_Word make__program_target__Var_55;
        MR_Word make__program_target__Var_56;
        MR_Word make__program_target__Var_57;
        MR_Word make__program_target__Var_58;
        MR_Word make__program_target__Var_59;
        MR_Word make__program_target__Var_60;
        MR_Word make__program_target__Var_61;
        MR_Word make__program_target__Var_62;
        MR_Word make__program_target__Var_63;
        MR_Word make__program_target__Var_64;
        MR_Word make__program_target__Var_65;
        MR_Word make__program_target__Var_66;
        MR_Word make__program_target__Var_67;
        MR_Integer make__program_target__Var_68;
        MR_Word make__program_target__Var_69;
        MR_Word make__program_target__Var_51;

        {
          make__program_target__build_java_files_8_p_0(make__program_target__Globals_9, make__program_target__MainModuleName_10, make__program_target__OutOfDateModules_15, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_24_24, &make__program_target__STATE_VARIABLE_Info_26_26);
        }
        make__program_target__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
        make__program_target__Timestamps0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
        make__program_target__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
        make__program_target__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
        make__program_target__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
        make__program_target__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
        make__program_target__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
        make__program_target__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
        make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
        make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
        make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
        make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
        make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
        make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
        make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
        make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
        make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
        make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
        make__program_target__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
        make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));
        make__program_target__TypeCtorInfo_74_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        make__program_target__TypeInfo_75_75 = (MR_Word) &make__program_target_scalar_common_2[1];
        {
          make__program_target__Var_29 = mercury__map__init_0_f_0(make__program_target__TypeCtorInfo_74_74, make__program_target__TypeInfo_75_75);
        }
        {
          mercury__map__foldl_4_p_0(make__program_target__TypeCtorInfo_74_74, make__program_target__TypeInfo_75_75, (MR_Word) &make__program_target_scalar_common_2[3], (MR_Word) &make__program_target_scalar_common_2[9], make__program_target__Timestamps0_18, ((MR_Box) (make__program_target__Var_29)), &make__program_target__conv1_Timestamps_19);
        }
        make__program_target__Timestamps_19 = ((MR_Word) make__program_target__conv1_Timestamps_19);
        make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
        make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
        make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
        make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
        make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
        make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
        make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
        make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
        make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
        make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
        make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
        make__program_target__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
        make__program_target__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
        make__program_target__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
        make__program_target__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
        make__program_target__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
        make__program_target__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
        make__program_target__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
        make__program_target__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
        make__program_target__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *make__program_target__STATE_VARIABLE_Info_21 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_50));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Timestamps_19));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_52));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_53));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__Var_54));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_55));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_56));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_57));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_58));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_59));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_60));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_61));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_62));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_63));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_64));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_65));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_66));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__Var_67));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_68));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_69));
        }
      }
  }
}

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_HeadVar__6_6;

    {
      make__util__make_remove_module_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_String) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__MainModuleName_10,
  MR_Word make__program_target__FileType_11,
  MR_String make__program_target__OutputFileName_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__STATE_VARIABLE_Info_20_20;

    {
      make__util__make_remove_file_7_p_0(make__program_target__Globals_9, (MR_Integer) 61, make__program_target__OutputFileName_12, make__program_target__STATE_VARIABLE_Info_0_15, &make__program_target__STATE_VARIABLE_Info_20_20);
    }
    switch (make__program_target__FileType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 4:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 8:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 7:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 0:
        {
          MR_String make__program_target__ObjExt_34;
          MR_String make__program_target__PicObjExt_35;
          MR_String make__program_target__BeamExt_36;
          MR_Word make__program_target__Var_40;
          MR_Word make__program_target__Var_41;
          MR_Word make__program_target__Var_45;
          MR_String make__program_target__Var_46;
          MR_Word make__program_target__Var_48;
          MR_String make__program_target__Var_49;
          MR_Word make__program_target__Var_51;
          MR_Word make__program_target__Var_53;
          MR_String make__program_target__Var_54;
          MR_Box make__program_target__conv2_STATE_VARIABLE_Info_16;
          MR_Box make__program_target__conv1_STATE_VARIABLE_IO_18;

          {
            libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_9, (MR_Integer) 516, &make__program_target__ObjExt_34);
          }
          {
            libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_9, (MR_Integer) 517, &make__program_target__PicObjExt_35);
          }
          {
            libs__globals__lookup_string_option_3_p_0(make__program_target__Globals_9, (MR_Integer) 535, &make__program_target__BeamExt_36);
          }
          {
            make__program_target__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 1) = ((MR_Box) (make__program_target__linked_target_cleanup_8_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 3) = ((MR_Box) (make__program_target__Globals_9));
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 4) = ((MR_Box) ((MR_Integer) 61));
            MR_hl_field(MR_mktag(0), make__program_target__Var_40, 5) = ((MR_Box) (make__program_target__MainModuleName_10));
          }
          {
            make__program_target__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__ObjExt_34);
          }
          {
            make__program_target__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__PicObjExt_35);
          }
          {
            make__program_target__Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "_init", make__program_target__BeamExt_36);
          }
          {
            make__program_target__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_53, 0) = ((MR_Box) (make__program_target__Var_54));
            MR_hl_field(MR_mktag(1), make__program_target__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            make__program_target__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_51, 0) = ((MR_Box) ((MR_String) "_init.erl"));
            MR_hl_field(MR_mktag(1), make__program_target__Var_51, 1) = ((MR_Box) (make__program_target__Var_53));
          }
          {
            make__program_target__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_48, 0) = ((MR_Box) (make__program_target__Var_49));
            MR_hl_field(MR_mktag(1), make__program_target__Var_48, 1) = ((MR_Box) (make__program_target__Var_51));
          }
          {
            make__program_target__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_45, 0) = ((MR_Box) (make__program_target__Var_46));
            MR_hl_field(MR_mktag(1), make__program_target__Var_45, 1) = ((MR_Box) (make__program_target__Var_48));
          }
          {
            make__program_target__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__program_target__Var_41, 0) = ((MR_Box) ((MR_String) "_init.c"));
            MR_hl_field(MR_mktag(1), make__program_target__Var_41, 1) = ((MR_Box) (make__program_target__Var_45));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_40, make__program_target__Var_41, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_20_20)), &make__program_target__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv1_STATE_VARIABLE_IO_18);
          }
          *make__program_target__STATE_VARIABLE_Info_16 = ((MR_Word) make__program_target__conv2_STATE_VARIABLE_Info_16);
        }
        break;
      case (MR_Integer) 6:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 5:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 2:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 1:
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_20_20;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv16_HeadVar__6_6;

    {
      backend_libs__compile_target_code__link_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 7))), &make__program_target__conv16_HeadVar__6_6);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv16_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_String make__program_target__conv14_HeadVar__5_5;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv14_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv14_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1)
{
  {
    MR_Box make__program_target__wrapper_arg_2;
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_String make__program_target__conv13_LambdaHeadVar__2_122;

    {
      make__program_target__conv13_LambdaHeadVar__2_122 = make__program_target__IntroducedFrom__func__build_linked_target_2__568__1_1_f_0(((MR_Word) make__program_target__wrapper_arg_1));
    }
    make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv13_LambdaHeadVar__2_122));
    return make__program_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv10_LambdaHeadVar__2_108;
    MR_Word make__program_target__conv9_LambdaHeadVar__4_110;

    {
      make__program_target__IntroducedFrom__pred__build_linked_target_2__552__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv10_LambdaHeadVar__2_108, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv9_LambdaHeadVar__4_110);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv10_LambdaHeadVar__2_108));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv9_LambdaHeadVar__4_110));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;

    {
      make__program_target__IntroducedFrom__pred__build_linked_target_2__501__1_3_p_0(((MR_String) make__program_target__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv6_HeadVar__3_3;
    MR_Word make__program_target__conv5_HeadVar__5_5;

    {
      make__util__get_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_String) make__program_target__wrapper_arg_1), &make__program_target__conv6_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv5_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv6_HeadVar__3_3));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv5_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1)
{
  {
    MR_Box make__program_target__wrapper_arg_2;
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv2_LambdaHeadVar__2_92;

    {
      make__program_target__conv2_LambdaHeadVar__2_92 = make__program_target__IntroducedFrom__func__build_linked_target_2__489__1_1_f_0(((MR_String) make__program_target__wrapper_arg_1));
    }
    make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv2_LambdaHeadVar__2_92));
    return make__program_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_HeadVar__3_3;
    MR_Word make__program_target__conv0_HeadVar__5_5;

    {
      make__dependencies__dependency_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_HeadVar__5_5);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_HeadVar__3_3));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word make__program_target__Globals_18,
  MR_Word make__program_target__MainModuleName_19,
  MR_Word make__program_target__FileType_20,
  MR_String make__program_target__OutputFileName_21,
  MR_Word make__program_target__MaybeTimestamp_22,
  MR_Word make__program_target__AllModules_23,
  MR_Word make__program_target__ObjModules_24,
  MR_Word make__program_target__CompilationTarget_25,
  MR_Word make__program_target__PIC_26,
  MR_Word make__program_target__DepsSuccess_27,
  MR_Word make__program_target__BuildDepsResult_28,
  MR_Word make__program_target__ErrorStream_29,
  MR_Word * make__program_target__Succeeded_30,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_72,
  MR_Word * make__program_target__STATE_VARIABLE_Info_73)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TypeCtorInfo_277_277;
    MR_Word make__program_target__TypeCtorInfo_280_280;
    MR_Word make__program_target__TypeCtorInfo_287_287;
    MR_Word make__program_target__TypeCtorInfo_288_288;
    MR_Word make__program_target__TypeCtorInfo_289_289;
    MR_Word make__program_target__TypeCtorInfo_290_290;
    MR_Word make__program_target__TypeInfo_297_297;
    MR_Word make__program_target__LinkObjects_33;
    MR_Word make__program_target__NoLinkObjsGlobals_34;
    MR_Word make__program_target__AllModulesList_35;
    MR_Word make__program_target__InitObjects_40;
    MR_Word make__program_target__DepsResult2_41;
    MR_Word make__program_target__ObjectsToCheck_42;
    MR_Word make__program_target__ExtraObjStatus_44;
    MR_Word make__program_target__DepsResult3_45;
    MR_Word make__program_target__BuildDepsSuccess_46;
    MR_Word make__program_target__ExtraObjectTimestamps_47;
    MR_Word make__program_target__ExtraObjectDepsResult_48;
    MR_Word make__program_target__STATE_VARIABLE_Info_82_82;
    MR_Word make__program_target__Var_86;
    MR_Word make__program_target__Var_87;
    MR_Word make__program_target__STATE_VARIABLE_Info_88_88;
    MR_Word make__program_target__Var_95;
    MR_Word make__program_target__STATE_VARIABLE_Info_96_96;
    MR_Word make__program_target__Var_98;
    MR_String make__program_target__Var_99;
    MR_Box make__program_target__conv4_STATE_VARIABLE_Info_88_88;
    MR_Box make__program_target__conv3_STATE_VARIABLE_IO_89_89;
    MR_Box make__program_target__conv8_STATE_VARIABLE_Info_96_96;
    MR_Box make__program_target__conv7_STATE_VARIABLE_IO_97_97;

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_18, (MR_Integer) 547, &make__program_target__LinkObjects_33);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 547, (MR_Word) MR_mkword(MR_mktag(3), &make__program_target_scalar_common_1[51]), make__program_target__Globals_18, &make__program_target__NoLinkObjsGlobals_34);
    }
    make__program_target__TypeCtorInfo_277_277 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      make__program_target__AllModulesList_35 = mercury__set__to_sorted_list_1_f_0(make__program_target__TypeCtorInfo_277_277, make__program_target__AllModules_23);
    }
    switch (make__program_target__FileType_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 8:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          make__program_target__DepsResult2_41 = make__program_target__BuildDepsResult_28;
          make__program_target__InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          make__program_target__STATE_VARIABLE_Info_82_82 = make__program_target__STATE_VARIABLE_Info_0_72;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word make__program_target__InitObjectResult1_38;

          {
            backend_libs__compile_target_code__make_erlang_program_init_file_7_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__ErrorStream_29, make__program_target__MainModuleName_19, make__program_target__AllModulesList_35, &make__program_target__InitObjectResult1_38);
          }
          if ((make__program_target__InitObjectResult1_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              make__program_target__DepsResult2_41 = (MR_Integer) 2;
              make__program_target__InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              make__program_target__STATE_VARIABLE_Info_82_82 = make__program_target__STATE_VARIABLE_Info_0_72;
            }
          else
            {
              MR_String make__program_target__InitObject_39 = ((MR_String) (MR_hl_field(MR_mktag(1), make__program_target__InitObjectResult1_38, (MR_Integer) 0)));
              MR_Word make__program_target__Var_83;
              MR_Word make__program_target__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
              MR_Word make__program_target__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
              MR_Word make__program_target__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
              MR_Word make__program_target__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
              MR_Word make__program_target__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
              MR_Word make__program_target__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
              MR_Word make__program_target__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
              MR_Word make__program_target__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
              MR_Word make__program_target__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
              MR_Word make__program_target__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
              MR_Word make__program_target__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
              MR_Word make__program_target__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
              MR_Word make__program_target__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
              MR_Word make__program_target__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
              MR_Word make__program_target__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
              MR_Word make__program_target__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
              MR_Word make__program_target__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
              MR_Word make__program_target__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
              MR_Word make__program_target__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));

              {
                make__program_target__Var_83 = mercury__map__delete_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__program_target_scalar_common_2[1], make__program_target__Var_84, ((MR_Box) (make__program_target__InitObject_39)));
              }
              {
                make__program_target__STATE_VARIABLE_Info_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 0) = ((MR_Box) (make__program_target__Var_160));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 1) = ((MR_Box) (make__program_target__Var_83));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 2) = ((MR_Box) (make__program_target__Var_161));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 3) = ((MR_Box) (make__program_target__Var_162));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 4) = ((MR_Box) (make__program_target__Var_163));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 5) = ((MR_Box) (make__program_target__Var_164));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 6) = ((MR_Box) (make__program_target__Var_165));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 7) = ((MR_Box) (make__program_target__Var_166));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 8) = ((MR_Box) (make__program_target__Var_167));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 9) = ((MR_Box) (make__program_target__Var_168));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 10) = ((MR_Box) (make__program_target__Var_169));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 11) = ((MR_Box) (make__program_target__Var_170));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 12) = ((MR_Box) (make__program_target__Var_171));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 13) = ((MR_Box) (make__program_target__Var_172));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 14) = ((MR_Box) (make__program_target__Var_173));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 15) = ((MR_Box) (make__program_target__Var_174));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 16) = ((MR_Box) (make__program_target__Var_175));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 17) = ((MR_Box) (make__program_target__Var_176));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 18) = ((MR_Box) (make__program_target__Var_177));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 19) = ((MR_Box) (make__program_target__Var_178));
              }
              {
                make__program_target__InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__InitObjects_40, 0) = ((MR_Box) (make__program_target__InitObject_39));
                MR_hl_field(MR_mktag(1), make__program_target__InitObjects_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              make__program_target__DepsResult2_41 = make__program_target__BuildDepsResult_28;
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__InitObjectResult1_447;

          {
            backend_libs__compile_target_code__make_init_obj_file_7_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__ErrorStream_29, make__program_target__MainModuleName_19, make__program_target__AllModulesList_35, &make__program_target__InitObjectResult1_447);
          }
          if ((make__program_target__InitObjectResult1_447 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              make__program_target__DepsResult2_41 = (MR_Integer) 2;
              make__program_target__InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              make__program_target__STATE_VARIABLE_Info_82_82 = make__program_target__STATE_VARIABLE_Info_0_72;
            }
          else
            {
              MR_String make__program_target__InitObject_356 = ((MR_String) (MR_hl_field(MR_mktag(1), make__program_target__InitObjectResult1_447, (MR_Integer) 0)));
              MR_Word make__program_target__Var_357;
              MR_Word make__program_target__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
              MR_Word make__program_target__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
              MR_Word make__program_target__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
              MR_Word make__program_target__Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
              MR_Word make__program_target__Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
              MR_Word make__program_target__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
              MR_Word make__program_target__Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
              MR_Word make__program_target__Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
              MR_Word make__program_target__Var_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
              MR_Word make__program_target__Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
              MR_Word make__program_target__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
              MR_Word make__program_target__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
              MR_Word make__program_target__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
              MR_Word make__program_target__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
              MR_Word make__program_target__Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
              MR_Word make__program_target__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
              MR_Word make__program_target__Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
              MR_Word make__program_target__Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
              MR_Integer make__program_target__Var_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
              MR_Word make__program_target__Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));

              {
                make__program_target__Var_357 = mercury__map__delete_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__program_target_scalar_common_2[1], make__program_target__Var_358, ((MR_Box) (make__program_target__InitObject_356)));
              }
              {
                make__program_target__STATE_VARIABLE_Info_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 0) = ((MR_Box) (make__program_target__Var_360));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 1) = ((MR_Box) (make__program_target__Var_357));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 2) = ((MR_Box) (make__program_target__Var_361));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 3) = ((MR_Box) (make__program_target__Var_362));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 4) = ((MR_Box) (make__program_target__Var_363));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 5) = ((MR_Box) (make__program_target__Var_364));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 6) = ((MR_Box) (make__program_target__Var_365));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 7) = ((MR_Box) (make__program_target__Var_366));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 8) = ((MR_Box) (make__program_target__Var_367));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 9) = ((MR_Box) (make__program_target__Var_368));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 10) = ((MR_Box) (make__program_target__Var_369));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 11) = ((MR_Box) (make__program_target__Var_370));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 12) = ((MR_Box) (make__program_target__Var_371));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 13) = ((MR_Box) (make__program_target__Var_372));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 14) = ((MR_Box) (make__program_target__Var_373));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 15) = ((MR_Box) (make__program_target__Var_374));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 16) = ((MR_Box) (make__program_target__Var_375));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 17) = ((MR_Box) (make__program_target__Var_376));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 18) = ((MR_Box) (make__program_target__Var_377));
                MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_82_82, 19) = ((MR_Box) (make__program_target__Var_378));
              }
              {
                make__program_target__InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__program_target__InitObjects_40, 0) = ((MR_Box) (make__program_target__InitObject_356));
                MR_hl_field(MR_mktag(1), make__program_target__InitObjects_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              make__program_target__DepsResult2_41 = make__program_target__BuildDepsResult_28;
            }
        }
        break;
    }
    make__program_target__TypeCtorInfo_280_280 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      make__program_target__ObjectsToCheck_42 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_280_280, make__program_target__InitObjects_40, make__program_target__LinkObjects_33);
    }
    {
      make__program_target__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_86, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_86, 3) = ((MR_Box) (make__program_target__NoLinkObjsGlobals_34));
    }
    make__program_target__TypeCtorInfo_287_287 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
    {
      make__program_target__Var_87 = mercury__list__map_2_f_0(make__program_target__TypeCtorInfo_280_280, make__program_target__TypeCtorInfo_287_287, (MR_Word) &make__program_target_scalar_common_2[6], make__program_target__ObjectsToCheck_42);
    }
    make__program_target__TypeCtorInfo_288_288 = (MR_Word) &make__make__type_ctor_info_dependency_status_0;
    make__program_target__TypeCtorInfo_289_289 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    make__program_target__TypeCtorInfo_290_290 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_287_287, make__program_target__TypeCtorInfo_288_288, make__program_target__TypeCtorInfo_289_289, make__program_target__TypeCtorInfo_290_290, make__program_target__Var_86, make__program_target__Var_87, &make__program_target__ExtraObjStatus_44, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_82_82)), &make__program_target__conv4_STATE_VARIABLE_Info_88_88, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv3_STATE_VARIABLE_IO_89_89);
    }
    make__program_target__STATE_VARIABLE_Info_88_88 = ((MR_Word) make__program_target__conv4_STATE_VARIABLE_Info_88_88);
    {
      make__program_target__succeeded = mercury__list__member_2_p_0(make__program_target__TypeCtorInfo_288_288, ((MR_Box) ((MR_Integer) 3)), make__program_target__ExtraObjStatus_44);
    }
    if (make__program_target__succeeded)
      make__program_target__DepsResult3_45 = (MR_Integer) 2;
    else
      make__program_target__DepsResult3_45 = make__program_target__DepsResult2_41;
    make__program_target__succeeded = (make__program_target__DepsResult3_45 == (MR_Integer) 2);
    if (make__program_target__succeeded)
      make__program_target__BuildDepsSuccess_46 = (MR_Integer) 0;
    else
      make__program_target__BuildDepsSuccess_46 = (MR_Integer) 1;
    {
      make__program_target__Var_99 = mercury__dir__this_directory_0_f_0();
    }
    {
      make__program_target__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__program_target__Var_98, 0) = ((MR_Box) (make__program_target__Var_99));
      MR_hl_field(MR_mktag(1), make__program_target__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__program_target__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_95, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_95, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_3));
      MR_hl_field(MR_mktag(0), make__program_target__Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_95, 3) = ((MR_Box) (make__program_target__Var_98));
    }
    make__program_target__TypeInfo_297_297 = (MR_Word) &make__program_target_scalar_common_2[1];
    {
      mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_280_280, make__program_target__TypeInfo_297_297, make__program_target__TypeCtorInfo_289_289, make__program_target__TypeCtorInfo_290_290, make__program_target__Var_95, make__program_target__ObjectsToCheck_42, &make__program_target__ExtraObjectTimestamps_47, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_88_88)), &make__program_target__conv8_STATE_VARIABLE_Info_96_96, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv7_STATE_VARIABLE_IO_97_97);
    }
    make__program_target__STATE_VARIABLE_Info_96_96 = ((MR_Word) make__program_target__conv8_STATE_VARIABLE_Info_96_96);
    {
      make__dependencies__check_dependency_timestamps_10_p_0(make__program_target__TypeCtorInfo_280_280, make__program_target__NoLinkObjsGlobals_34, make__program_target__OutputFileName_21, make__program_target__MaybeTimestamp_22, make__program_target__BuildDepsSuccess_46, make__program_target__ObjectsToCheck_42, (MR_Word) &make__program_target_scalar_common_2[7], make__program_target__ExtraObjectTimestamps_47, &make__program_target__ExtraObjectDepsResult_48);
    }
    switch (make__program_target__DepsSuccess_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            make__util__file_error_4_p_0(make__program_target__STATE_VARIABLE_Info_96_96, make__program_target__OutputFileName_21);
          }
          *make__program_target__Succeeded_30 = (MR_Integer) 0;
          *make__program_target__STATE_VARIABLE_Info_73 = make__program_target__STATE_VARIABLE_Info_96_96;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__DepsResult_494;

          switch (make__program_target__DepsResult3_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              make__program_target__DepsResult_494 = make__program_target__DepsResult3_45;
              break;
            case (MR_Integer) 1:
              make__program_target__DepsResult_494 = make__program_target__DepsResult3_45;
              break;
            case (MR_Integer) 0:
              make__program_target__DepsResult_494 = make__program_target__ExtraObjectDepsResult_48;
              break;
          }
          switch (make__program_target__DepsResult_494) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  make__util__file_error_4_p_0(make__program_target__STATE_VARIABLE_Info_96_96, make__program_target__OutputFileName_21);
                }
                *make__program_target__Succeeded_30 = (MR_Integer) 0;
                *make__program_target__STATE_VARIABLE_Info_73 = make__program_target__STATE_VARIABLE_Info_96_96;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__program_target__TypeCtorInfo_303_303;
                MR_Word make__program_target__ExtraForeignFiles_60;
                MR_Word make__program_target__ForeignObjects_61;
                MR_String make__program_target__ObjExtToUse_65;
                MR_Word make__program_target__ObjList_66;
                MR_Word make__program_target__AllObjects_67;
                MR_Word make__program_target__CmdLineTargets0_68;
                MR_Word make__program_target__CmdLineTargets_69;
                MR_Word make__program_target__Var_104;
                MR_Word make__program_target__STATE_VARIABLE_Info_105_105;
                MR_Word make__program_target__Var_123;
                MR_Word make__program_target__Var_126;
                MR_Word make__program_target__Var_129;
                MR_Word make__program_target__Var_130;
                MR_Word make__program_target__Var_131;
                MR_Word make__program_target__Var_133;
                MR_Word make__program_target__Var_134;
                MR_Word make__program_target__STATE_VARIABLE_Info_135_135;
                MR_Word make__program_target__Var_199;
                MR_Word make__program_target__Var_200;
                MR_Word make__program_target__Var_201;
                MR_Word make__program_target__Var_202;
                MR_Word make__program_target__Var_203;
                MR_Word make__program_target__Var_204;
                MR_Word make__program_target__Var_205;
                MR_Word make__program_target__Var_206;
                MR_Word make__program_target__Var_207;
                MR_Word make__program_target__Var_208;
                MR_Word make__program_target__Var_209;
                MR_Word make__program_target__Var_210;
                MR_Word make__program_target__Var_211;
                MR_Word make__program_target__Var_212;
                MR_Word make__program_target__Var_213;
                MR_Word make__program_target__Var_214;
                MR_Word make__program_target__Var_215;
                MR_Integer make__program_target__Var_216;
                MR_Word make__program_target__Var_217;
                MR_Word make__program_target__Var_218;
                MR_Word make__program_target__Var_219;
                MR_Word make__program_target__Var_220;
                MR_Word make__program_target__Var_221;
                MR_Word make__program_target__Var_222;
                MR_Word make__program_target__Var_223;
                MR_Word make__program_target__Var_224;
                MR_Word make__program_target__Var_225;
                MR_Word make__program_target__Var_226;
                MR_Word make__program_target__Var_227;
                MR_Word make__program_target__Var_228;
                MR_Word make__program_target__Var_229;
                MR_Word make__program_target__Var_230;
                MR_Word make__program_target__Var_231;
                MR_Word make__program_target__Var_232;
                MR_Word make__program_target__Var_233;
                MR_Word make__program_target__Var_234;
                MR_Integer make__program_target__Var_236;
                MR_Word make__program_target__Var_237;
                MR_Box make__program_target__conv12_STATE_VARIABLE_Info_105_105;
                MR_Box make__program_target__conv11_STATE_VARIABLE_IO_106_106;
                MR_Box make__program_target__conv15_STATE_VARIABLE_IO_127_127;

                {
                  make__util__maybe_make_linked_target_message_4_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__OutputFileName_21);
                }
                {
                  make__program_target__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__Var_104, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_104, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_5));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_104, 3) = ((MR_Box) (make__program_target__Globals_18));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_104, 4) = ((MR_Box) (make__program_target__PIC_26));
                }
                {
                  mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_277_277, (MR_Word) &make__program_target_scalar_common_1[2], make__program_target__TypeCtorInfo_289_289, make__program_target__TypeCtorInfo_290_290, make__program_target__Var_104, make__program_target__AllModulesList_35, &make__program_target__ExtraForeignFiles_60, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_96_96)), &make__program_target__conv12_STATE_VARIABLE_Info_105_105, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv11_STATE_VARIABLE_IO_106_106);
                }
                make__program_target__STATE_VARIABLE_Info_105_105 = ((MR_Word) make__program_target__conv12_STATE_VARIABLE_Info_105_105);
                make__program_target__TypeCtorInfo_303_303 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
                {
                  make__program_target__Var_123 = mercury__list__condense_1_f_0(make__program_target__TypeCtorInfo_303_303, make__program_target__ExtraForeignFiles_60);
                }
                {
                  make__program_target__ForeignObjects_61 = mercury__list__map_2_f_0(make__program_target__TypeCtorInfo_303_303, make__program_target__TypeCtorInfo_280_280, (MR_Word) &make__program_target_scalar_common_2[8], make__program_target__Var_123);
                }
                switch (make__program_target__CompilationTarget_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__PIC_26, &make__program_target__ObjExtToUse_65);
                    }
                    break;
                  case (MR_Integer) 1:
                    make__program_target__ObjExtToUse_65 = (MR_String) ".cs";
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        libs__globals__lookup_string_option_3_p_0(make__program_target__NoLinkObjsGlobals_34, (MR_Integer) 535, &make__program_target__ObjExtToUse_65);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        libs__globals__lookup_string_option_3_p_0(make__program_target__NoLinkObjsGlobals_34, (MR_Integer) 525, &make__program_target__ObjExtToUse_65);
                      }
                    }
                    break;
                }
                {
                  make__program_target__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_7));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 3) = ((MR_Box) (make__program_target__NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_126, 5) = ((MR_Box) (make__program_target__ObjExtToUse_65));
                }
                {
                  mercury__list__map_foldl_5_p_2(make__program_target__TypeCtorInfo_277_277, make__program_target__TypeCtorInfo_280_280, make__program_target__TypeCtorInfo_290_290, make__program_target__Var_126, make__program_target__ObjModules_24, &make__program_target__ObjList_66, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv15_STATE_VARIABLE_IO_127_127);
                }
                {
                  make__program_target__Var_130 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_280_280, make__program_target__ForeignObjects_61, make__program_target__LinkObjects_33);
                }
                {
                  make__program_target__Var_129 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_280_280, make__program_target__ObjList_66, make__program_target__Var_130);
                }
                {
                  make__program_target__AllObjects_67 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_280_280, make__program_target__InitObjects_40, make__program_target__Var_129);
                }
                {
                  make__program_target__Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 0) = ((MR_Box) (&make__program_target_scalar_common_5[5]));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_8));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 3) = ((MR_Box) (make__program_target__NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 4) = ((MR_Box) (make__program_target__ErrorStream_29));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 5) = ((MR_Box) (make__program_target__FileType_20));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 6) = ((MR_Box) (make__program_target__MainModuleName_19));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_131, 7) = ((MR_Box) (make__program_target__AllObjects_67));
                }
                {
                  libs__process_util__call_in_forked_process_4_p_0(make__program_target__Var_131, make__program_target__Succeeded_30);
                }
                make__program_target__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 0)));
                make__program_target__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 1)));
                make__program_target__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 2)));
                make__program_target__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 3)));
                make__program_target__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 4)));
                make__program_target__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 5)));
                make__program_target__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 6)));
                make__program_target__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 7)));
                make__program_target__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 8)));
                make__program_target__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 9)));
                make__program_target__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 10)));
                make__program_target__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 11)));
                make__program_target__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 12)));
                make__program_target__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 13)));
                make__program_target__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 14)));
                make__program_target__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 15)));
                make__program_target__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 16)));
                make__program_target__CmdLineTargets0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 17)));
                make__program_target__Var_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 18)));
                make__program_target__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_105_105, (MR_Integer) 19)));
                {
                  make__program_target__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__program_target__Var_134, 0) = ((MR_Box) (make__program_target__FileType_20));
                }
                {
                  make__program_target__Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__Var_133, 0) = ((MR_Box) (make__program_target__MainModuleName_19));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_133, 1) = ((MR_Box) (make__program_target__Var_134));
                }
                {
                  mercury__set__delete_3_p_0((MR_Word) &make__program_target_scalar_common_2[2], ((MR_Box) (make__program_target__Var_133)), make__program_target__CmdLineTargets0_68, &make__program_target__CmdLineTargets_69);
                }
                make__program_target__Var_218 = make__program_target__Var_199;
                make__program_target__Var_219 = make__program_target__Var_200;
                make__program_target__Var_220 = make__program_target__Var_201;
                make__program_target__Var_221 = make__program_target__Var_202;
                make__program_target__Var_222 = make__program_target__Var_203;
                make__program_target__Var_223 = make__program_target__Var_204;
                make__program_target__Var_224 = make__program_target__Var_205;
                make__program_target__Var_225 = make__program_target__Var_206;
                make__program_target__Var_226 = make__program_target__Var_207;
                make__program_target__Var_227 = make__program_target__Var_208;
                make__program_target__Var_228 = make__program_target__Var_209;
                make__program_target__Var_229 = make__program_target__Var_210;
                make__program_target__Var_230 = make__program_target__Var_211;
                make__program_target__Var_231 = make__program_target__Var_212;
                make__program_target__Var_232 = make__program_target__Var_213;
                make__program_target__Var_233 = make__program_target__Var_214;
                make__program_target__Var_234 = make__program_target__Var_215;
                make__program_target__Var_236 = make__program_target__Var_216;
                make__program_target__Var_237 = make__program_target__Var_217;
                {
                  make__program_target__STATE_VARIABLE_Info_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 0) = ((MR_Box) (make__program_target__Var_218));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 1) = ((MR_Box) (make__program_target__Var_219));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 2) = ((MR_Box) (make__program_target__Var_220));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 3) = ((MR_Box) (make__program_target__Var_221));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 4) = ((MR_Box) (make__program_target__Var_222));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 5) = ((MR_Box) (make__program_target__Var_223));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 6) = ((MR_Box) (make__program_target__Var_224));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 7) = ((MR_Box) (make__program_target__Var_225));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 8) = ((MR_Box) (make__program_target__Var_226));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 9) = ((MR_Box) (make__program_target__Var_227));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 10) = ((MR_Box) (make__program_target__Var_228));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 11) = ((MR_Box) (make__program_target__Var_229));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 12) = ((MR_Box) (make__program_target__Var_230));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 13) = ((MR_Box) (make__program_target__Var_231));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 14) = ((MR_Box) (make__program_target__Var_232));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 15) = ((MR_Box) (make__program_target__Var_233));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 16) = ((MR_Box) (make__program_target__Var_234));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 17) = ((MR_Box) (make__program_target__CmdLineTargets_69));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 18) = ((MR_Box) (make__program_target__Var_236));
                  MR_hl_field(MR_mktag(0), make__program_target__STATE_VARIABLE_Info_135_135, 19) = ((MR_Box) (make__program_target__Var_237));
                }
                switch (*make__program_target__Succeeded_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        make__util__file_error_4_p_0(make__program_target__STATE_VARIABLE_Info_135_135, make__program_target__OutputFileName_21);
                      }
                      *make__program_target__STATE_VARIABLE_Info_73 = make__program_target__STATE_VARIABLE_Info_135_135;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word make__program_target__FileTimestamps_71;

                      {
                        mercury__map__delete_3_p_0(make__program_target__TypeCtorInfo_280_280, make__program_target__TypeInfo_297_297, ((MR_Box) (make__program_target__OutputFileName_21)), make__program_target__Var_219, &make__program_target__FileTimestamps_71);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                        *make__program_target__STATE_VARIABLE_Info_73 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Var_218));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__FileTimestamps_71));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__program_target__Var_220));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__program_target__Var_221));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__program_target__Var_222));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__program_target__Var_223));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__program_target__Var_224));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__program_target__Var_225));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__program_target__Var_226));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__program_target__Var_227));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__program_target__Var_228));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__program_target__Var_229));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__program_target__Var_230));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__program_target__Var_231));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__program_target__Var_232));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__program_target__Var_233));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__program_target__Var_234));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__program_target__CmdLineTargets_69));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__program_target__Var_236));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__program_target__Var_237));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word make__program_target__MsgTarget_51;
                MR_Word make__program_target__UseGradeSubdirs_52;
                MR_Word make__program_target__Var_138;

                {
                  make__program_target__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__program_target__Var_138, 0) = ((MR_Box) (make__program_target__FileType_20));
                }
                {
                  make__program_target__MsgTarget_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__MsgTarget_51, 0) = ((MR_Box) (make__program_target__MainModuleName_19));
                  MR_hl_field(MR_mktag(0), make__program_target__MsgTarget_51, 1) = ((MR_Box) (make__program_target__Var_138));
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(make__program_target__NoLinkObjsGlobals_34, (MR_Integer) 648, &make__program_target__UseGradeSubdirs_52);
                }
                switch (make__program_target__UseGradeSubdirs_52) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        make__util__maybe_warn_up_to_date_target_6_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__MsgTarget_51, make__program_target__STATE_VARIABLE_Info_96_96, make__program_target__STATE_VARIABLE_Info_73);
                      }
                      *make__program_target__Succeeded_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word make__program_target__MadeSymlinkOrCopy_53;

                      {
                        backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__ErrorStream_29, make__program_target__FileType_20, make__program_target__MainModuleName_19, make__program_target__Succeeded_30, &make__program_target__MadeSymlinkOrCopy_53);
                      }
                      switch (make__program_target__MadeSymlinkOrCopy_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            make__util__maybe_warn_up_to_date_target_6_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__MsgTarget_51, make__program_target__STATE_VARIABLE_Info_96_96, make__program_target__STATE_VARIABLE_Info_73);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(make__program_target__NoLinkObjsGlobals_34, make__program_target__MsgTarget_51);
                            }
                            *make__program_target__STATE_VARIABLE_Info_73 = make__program_target__STATE_VARIABLE_Info_96_96;
                          }
                          break;
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
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word make__program_target__MainModuleName_18,
  MR_Word make__program_target__FileType_19,
  MR_String make__program_target__OutputFileName_20,
  MR_Word make__program_target__MaybeTimestamp_21,
  MR_Word make__program_target__AllModules_22,
  MR_Word make__program_target__ObjModules_23,
  MR_Word make__program_target__CompilationTarget_24,
  MR_Word make__program_target__PIC_25,
  MR_Word make__program_target__DepsSuccess_26,
  MR_Word make__program_target__BuildDepsResult_27,
  MR_Word make__program_target__Globals_28,
  MR_Word make__program_target__ErrorStream_29,
  MR_Word * make__program_target__Succeeded_30,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_37,
  MR_Word * make__program_target__STATE_VARIABLE_Info_38)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybePreLinkCommand_33;

    {
      libs__globals__lookup_maybe_string_option_3_p_0(make__program_target__Globals_28, (MR_Integer) 631, &make__program_target__MaybePreLinkCommand_33);
    }
    if ((make__program_target__MaybePreLinkCommand_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        make__program_target__build_linked_target_2_17_p_0(make__program_target__Globals_28, make__program_target__MainModuleName_18, make__program_target__FileType_19, make__program_target__OutputFileName_20, make__program_target__MaybeTimestamp_21, make__program_target__AllModules_22, make__program_target__ObjModules_23, make__program_target__CompilationTarget_24, make__program_target__PIC_25, make__program_target__DepsSuccess_26, make__program_target__BuildDepsResult_27, make__program_target__ErrorStream_29, make__program_target__Succeeded_30, make__program_target__STATE_VARIABLE_Info_0_37, make__program_target__STATE_VARIABLE_Info_38);
      }
    else
      {
        MR_String make__program_target__PreLinkCommand_34 = ((MR_String) (MR_hl_field(MR_mktag(1), make__program_target__MaybePreLinkCommand_33, (MR_Integer) 0)));
        MR_String make__program_target__CommandString_35;
        MR_Word make__program_target__Var_42;
        MR_Word make__program_target__PreLinkSucceeded_49;

        {
          make__program_target__Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__program_target__AllModules_22);
        }
        {
          backend_libs__compile_target_code__make_all_module_command_7_p_0(make__program_target__Globals_28, make__program_target__PreLinkCommand_34, make__program_target__MainModuleName_18, make__program_target__Var_42, &make__program_target__CommandString_35);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(make__program_target__Globals_28, make__program_target__ErrorStream_29, (MR_Integer) 0, make__program_target__CommandString_35, &make__program_target__PreLinkSucceeded_49);
        }
        switch (make__program_target__PreLinkSucceeded_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__Succeeded_30 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_38 = make__program_target__STATE_VARIABLE_Info_0_37;
            }
            break;
          case (MR_Integer) 1:
            {
              make__program_target__build_linked_target_2_17_p_0(make__program_target__Globals_28, make__program_target__MainModuleName_18, make__program_target__FileType_19, make__program_target__OutputFileName_20, make__program_target__MaybeTimestamp_21, make__program_target__AllModules_22, make__program_target__ObjModules_23, make__program_target__CompilationTarget_24, make__program_target__PIC_25, make__program_target__DepsSuccess_26, make__program_target__BuildDepsResult_27, make__program_target__ErrorStream_29, make__program_target__Succeeded_30, make__program_target__STATE_VARIABLE_Info_0_37, make__program_target__STATE_VARIABLE_Info_38);
            }
            break;
        }
      }
  }
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1)
{
  {
    MR_Box make__program_target__wrapper_arg_2;
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv0_LambdaHeadVar__2_32;

    {
      make__program_target__conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__378__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_String) make__program_target__wrapper_arg_1));
    }
    make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv0_LambdaHeadVar__2_32));
    return make__program_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__PIC_10,
  MR_Word make__program_target__ModuleName_11,
  MR_Word * make__program_target__ObjectTargets_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__program_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__CompilationTarget_15;
    MR_Word make__program_target__MaybeImports_16;
    MR_Word make__program_target__Imports_17;
    MR_Word make__program_target__ForeignObjectTargets_18;

    {
      libs__globals__get_target_2_p_0(make__program_target__Globals_9, &make__program_target__CompilationTarget_15);
    }
    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_9, make__program_target__ModuleName_11, &make__program_target__MaybeImports_16, make__program_target__STATE_VARIABLE_Info_0_21, make__program_target__STATE_VARIABLE_Info_22);
    }
    if ((make__program_target__MaybeImports_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/8", (MR_String) "unknown imports");
          return;
        }
      }
    else
      make__program_target__Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeImports_16, (MR_Integer) 0)));
    make__program_target__ForeignObjectTargets_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    switch (make__program_target__CompilationTarget_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__TypeCtorInfo_64_64 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
          MR_Word make__program_target__FactObjectTargets_19;
          MR_Word make__program_target__Var_30;
          MR_Word make__program_target__Var_35;
          MR_String make__program_target__Var_37;
          MR_Word make__program_target__Var_38;
          MR_Word make__program_target__Var_39;
          MR_Word make__program_target__Var_40;
          MR_Word make__program_target__Var_41;
          MR_Word make__program_target__Var_42;
          MR_Word make__program_target__Var_43;
          MR_Word make__program_target__Var_44;
          MR_Word make__program_target__Var_45;
          MR_Word make__program_target__Var_46;
          MR_Word make__program_target__Var_47;
          MR_Word make__program_target__Var_48;
          MR_Word make__program_target__Var_49;
          MR_Word make__program_target__Var_50;
          MR_Word make__program_target__Var_51;
          MR_Word make__program_target__Var_52;
          MR_Word make__program_target__Var_53;
          MR_Word make__program_target__Var_54;
          MR_Word make__program_target__Var_55;
          MR_Word make__program_target__Var_56;
          MR_Word make__program_target__Var_57;
          MR_Word make__program_target__Var_58;
          MR_Word make__program_target__Var_59;
          MR_Word make__program_target__Var_60;
          MR_Word make__program_target__Var_61;
          MR_String make__program_target__Var_62;

          {
            make__program_target__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_30, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_8_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), make__program_target__Var_30, 3) = ((MR_Box) (make__program_target__PIC_10));
            MR_hl_field(MR_mktag(0), make__program_target__Var_30, 4) = ((MR_Box) (make__program_target__ModuleName_11));
          }
          make__program_target__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 0)));
          make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 1)));
          make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 2)));
          make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 3)));
          make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 4)));
          make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 5)));
          make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 6)));
          make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 7)));
          make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 8)));
          make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 9)));
          make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 10)));
          make__program_target__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 11)));
          make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 12)));
          make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 13)));
          make__program_target__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 14)));
          make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 15)));
          make__program_target__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 16)));
          make__program_target__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 17)));
          make__program_target__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 18)));
          make__program_target__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 19)));
          make__program_target__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 20)));
          make__program_target__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 21)));
          make__program_target__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 22)));
          make__program_target__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 23)));
          make__program_target__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 24)));
          make__program_target__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 25)));
          make__program_target__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_17, (MR_Integer) 26)));
          {
            make__program_target__FactObjectTargets_19 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__program_target__TypeCtorInfo_64_64, make__program_target__Var_30, make__program_target__Var_35);
          }
          {
            *make__program_target__ObjectTargets_12 = mercury__list__f_43_43_2_f_0(make__program_target__TypeCtorInfo_64_64, make__program_target__FactObjectTargets_19, make__program_target__ForeignObjectTargets_18);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *make__program_target__ObjectTargets_12 = make__program_target__ForeignObjectTargets_18;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word make__program_target__HeadVar__1_1,
  MR_Word make__program_target__HeadVar__2_2,
  MR_Word * make__program_target__Res_8)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__TimeA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word make__program_target__ModuleA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word make__program_target__TimeB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word make__program_target__ModuleB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word make__program_target__TimeRes_9;

    {
      libs__timestamp____Compare____timestamp_0_0(&make__program_target__TimeRes_9, make__program_target__TimeA_4, make__program_target__TimeB_6);
    }
    switch (make__program_target__TimeRes_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *make__program_target__Res_8 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        {
          mdbcomp__sym_name____Compare____sym_name_0_0(make__program_target__Res_8, make__program_target__ModuleA_5, make__program_target__ModuleB_7);
        }
        break;
      case (MR_Integer) 2:
        *make__program_target__Res_8 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Module_9,
  MR_Word * make__program_target__HeadVar__3_3,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_17,
  MR_Word * make__program_target__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__Timestamp_10;
    MR_Word make__program_target__Target_14;
    MR_Word make__program_target__MaybeTimestamp_15;

    {
      make__program_target__Target_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Target_14, 0) = ((MR_Box) (make__program_target__Module_9));
      MR_hl_field(MR_mktag(0), make__program_target__Target_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__util__get_target_timestamp_8_p_0(make__program_target__Globals_8, (MR_Integer) 1, make__program_target__Target_14, &make__program_target__MaybeTimestamp_15, make__program_target__STATE_VARIABLE_Info_0_17, make__program_target__STATE_VARIABLE_Info_18);
    }
    if (((MR_tag((MR_Word) make__program_target__MaybeTimestamp_15)) == (MR_mktag((MR_Integer) 1))))
      {
        make__program_target__Timestamp_10 = libs__timestamp__oldest_timestamp_0_f_0();
      }
    else
      make__program_target__Timestamp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__MaybeTimestamp_15, (MR_Integer) 0)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *make__program_target__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__program_target__Timestamp_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__program_target__Module_9));
    }
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv5_HeadVar__2_40;

    {
      make__program_target__IntroducedFrom__pred__order_target_modules__315__1_2_p_0(((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv5_HeadVar__2_40);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv5_HeadVar__2_40));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv4_Res_8;

    {
      make__program_target__compare_paired_modules_3_p_0(((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv4_Res_8);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv4_Res_8));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box * make__program_target__wrapper_arg_2,
  MR_Box make__program_target__wrapper_arg_3,
  MR_Box * make__program_target__wrapper_arg_4,
  MR_Box make__program_target__wrapper_arg_5,
  MR_Box * make__program_target__wrapper_arg_6)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_HeadVar__3_3;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_18;

    {
      make__program_target__pair_module_with_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), &make__program_target__conv1_HeadVar__3_3, ((MR_Word) make__program_target__wrapper_arg_3), &make__program_target__conv0_STATE_VARIABLE_Info_18);
    }
    *make__program_target__wrapper_arg_2 = ((MR_Box) (make__program_target__conv1_HeadVar__3_3));
    *make__program_target__wrapper_arg_4 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__Modules_9,
  MR_Word * make__program_target__OrderedModules_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__OrderByTimestamp_13;

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 653, &make__program_target__OrderByTimestamp_13);
    }
    switch (make__program_target__OrderByTimestamp_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__program_target__OrderedModules_10 = make__program_target__Modules_9;
          *make__program_target__STATE_VARIABLE_Info_17 = make__program_target__STATE_VARIABLE_Info_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__TypeCtorInfo_32_32;
          MR_Word make__program_target__TypeInfo_33_33;
          MR_Word make__program_target__PairedModules_14;
          MR_Word make__program_target__OrderedPairs_15;
          MR_Word make__program_target__Var_21;
          MR_Box make__program_target__conv3_STATE_VARIABLE_Info_17;
          MR_Box make__program_target__conv2_STATE_VARIABLE_IO_19;

          {
            make__program_target__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_21, 1) = ((MR_Box) (make__program_target__order_target_modules_7_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_21, 3) = ((MR_Box) (make__program_target__Globals_8));
          }
          make__program_target__TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          make__program_target__TypeInfo_33_33 = (MR_Word) &make__program_target_scalar_common_2[0];
          {
            mercury__list__map_foldl2_7_p_2(make__program_target__TypeCtorInfo_32_32, make__program_target__TypeInfo_33_33, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_21, make__program_target__Modules_9, &make__program_target__PairedModules_14, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_16)), &make__program_target__conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_19);
          }
          *make__program_target__STATE_VARIABLE_Info_17 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_17);
          {
            mercury__list__sort_3_p_0(make__program_target__TypeInfo_33_33, (MR_Word) &make__program_target_scalar_common_2[4], make__program_target__PairedModules_14, &make__program_target__OrderedPairs_15);
          }
          {
            mercury__list__map_3_p_0(make__program_target__TypeInfo_33_33, make__program_target__TypeCtorInfo_32_32, (MR_Word) &make__program_target_scalar_common_2[5], make__program_target__OrderedPairs_15, make__program_target__OrderedModules_10);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__get_target_modules_2_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__ModuleName_10,
  MR_Word make__program_target__STATE_VARIABLE_TargetModules_0_16,
  MR_Word * make__program_target__STATE_VARIABLE_TargetModules_17,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_18,
  MR_Word * make__program_target__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MaybeImports_14;
    MR_Word make__program_target__Imports_15;
    MR_Word make__program_target__Var_51;
    MR_String make__program_target__Var_25;
    MR_Word make__program_target__Var_26;
    MR_Word make__program_target__Var_27;
    MR_Word make__program_target__Var_28;
    MR_Word make__program_target__Var_29;
    MR_Word make__program_target__Var_30;
    MR_Word make__program_target__Var_31;
    MR_Word make__program_target__Var_32;
    MR_Word make__program_target__Var_33;
    MR_Word make__program_target__Var_34;
    MR_Word make__program_target__Var_35;
    MR_Word make__program_target__Var_36;
    MR_Word make__program_target__Var_37;
    MR_Word make__program_target__Var_38;
    MR_Word make__program_target__Var_39;
    MR_Word make__program_target__Var_40;
    MR_Word make__program_target__Var_41;
    MR_Word make__program_target__Var_42;
    MR_Word make__program_target__Var_43;
    MR_Word make__program_target__Var_44;
    MR_Word make__program_target__Var_45;
    MR_Word make__program_target__Var_46;
    MR_Word make__program_target__Var_47;
    MR_Word make__program_target__Var_48;
    MR_Word make__program_target__Var_49;
    MR_String make__program_target__Var_50;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__program_target__Globals_9, make__program_target__ModuleName_10, &make__program_target__MaybeImports_14, make__program_target__STATE_VARIABLE_Info_0_18, make__program_target__STATE_VARIABLE_Info_19);
    }
    make__program_target__succeeded = ((MR_tag((MR_Word) make__program_target__MaybeImports_14)) == (MR_mktag((MR_Integer) 1)));
    if (make__program_target__succeeded)
      {
        make__program_target__Imports_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__program_target__MaybeImports_14, (MR_Integer) 0)));
        make__program_target__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 0)));
        make__program_target__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 1)));
        make__program_target__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 2)));
        make__program_target__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 3)));
        make__program_target__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 4)));
        make__program_target__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 5)));
        make__program_target__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 6)));
        make__program_target__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 7)));
        make__program_target__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 8)));
        make__program_target__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 9)));
        make__program_target__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 10)));
        make__program_target__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 11)));
        make__program_target__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 12)));
        make__program_target__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 13)));
        make__program_target__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 14)));
        make__program_target__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 15)));
        make__program_target__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 16)));
        make__program_target__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 17)));
        make__program_target__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 18)));
        make__program_target__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 19)));
        make__program_target__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 20)));
        make__program_target__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 21)));
        make__program_target__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 22)));
        make__program_target__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 23)));
        make__program_target__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 24)));
        make__program_target__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 25)));
        make__program_target__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), make__program_target__Imports_15, (MR_Integer) 26)));
        {
          make__program_target__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__program_target__ModuleName_10, make__program_target__Var_51);
        }
      }
    if (make__program_target__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *make__program_target__STATE_VARIABLE_TargetModules_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__program_target__ModuleName_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__program_target__STATE_VARIABLE_TargetModules_0_16));
      }
    else
      *make__program_target__STATE_VARIABLE_TargetModules_17 = make__program_target__STATE_VARIABLE_TargetModules_0_16;
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_STATE_VARIABLE_TargetModules_17;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_19;

    {
      make__program_target__get_target_modules_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_STATE_VARIABLE_TargetModules_17, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_STATE_VARIABLE_Info_19);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_STATE_VARIABLE_TargetModules_17));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__TargetType_10,
  MR_Word make__program_target__AllModules_11,
  MR_Word * make__program_target__TargetModules_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_15,
  MR_Word * make__program_target__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__program_target__succeeded = (make__program_target__TargetType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

    if (make__program_target__succeeded)
      {
        MR_Word make__program_target__Var_19;
        MR_Box make__program_target__conv4_TargetModules_12;
        MR_Box make__program_target__conv3_STATE_VARIABLE_Info_16;
        MR_Box make__program_target__conv2_STATE_VARIABLE_IO_18;

        {
          make__program_target__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__program_target__Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), make__program_target__Var_19, 1) = ((MR_Box) (make__program_target__get_target_modules_8_p_0_1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__program_target__Var_19, 3) = ((MR_Box) (make__program_target__Globals_9));
        }
        {
          mercury__list__foldl3_8_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__program_target_scalar_common_1[1], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__program_target__Var_19, make__program_target__AllModules_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__program_target__conv4_TargetModules_12, ((MR_Box) (make__program_target__STATE_VARIABLE_Info_0_15)), &make__program_target__conv3_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &make__program_target__conv2_STATE_VARIABLE_IO_18);
        }
        *make__program_target__TargetModules_12 = ((MR_Word) make__program_target__conv4_TargetModules_12);
        *make__program_target__STATE_VARIABLE_Info_16 = ((MR_Word) make__program_target__conv3_STATE_VARIABLE_Info_16);
      }
    else
      {
        *make__program_target__TargetModules_12 = make__program_target__AllModules_11;
        *make__program_target__STATE_VARIABLE_Info_16 = make__program_target__STATE_VARIABLE_Info_0_15;
      }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word make__program_target__LinkedTargetFile_9,
  MR_Word make__program_target__Globals_10,
  MR_Word make__program_target__HeadVar__3_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_42,
  MR_Word * make__program_target__STATE_VARIABLE_Info_43)
{
  {
    MR_bool make__program_target__succeeded;

    {
      make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(make__program_target__LinkedTargetFile_9, make__program_target__Globals_10, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_0_42, make__program_target__STATE_VARIABLE_Info_43);
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_2(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv3_Succeeded_12;
    MR_Word make__program_target__conv2_STATE_VARIABLE_Info_43;

    {
      make__program_target__make_linked_target_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv3_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv2_STATE_VARIABLE_Info_43);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv3_Succeeded_12));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv2_STATE_VARIABLE_Info_43));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_12;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_43;

    {
      make__program_target__make_linked_target_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_STATE_VARIABLE_Info_43);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_Succeeded_12));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_43));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word make__program_target__Globals_9,
  MR_Word make__program_target__LinkedTargetFile_10,
  MR_Word make__program_target__ExtraOptions_11,
  MR_Word * make__program_target__Succeeded_12,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MainModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_10, (MR_Integer) 0)));
    MR_Word make__program_target__IntermodAnalysis_17;
    MR_Word make__program_target___FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_10, (MR_Integer) 1)));

    {
      libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_9, (MR_Integer) 335, &make__program_target__IntermodAnalysis_17);
    }
    switch (make__program_target__IntermodAnalysis_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__program_target__Var_28;

          {
            make__program_target__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), make__program_target__Var_28, 1) = ((MR_Box) (make__program_target__make_linked_target_1_8_p_0_1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), make__program_target__Var_28, 3) = ((MR_Box) (make__program_target__LinkedTargetFile_10));
          }
          {
            make__util__build_with_module_options_9_p_0(make__program_target__Globals_9, make__program_target__MainModuleName_15, make__program_target__ExtraOptions_11, make__program_target__Var_28, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_0_19, make__program_target__STATE_VARIABLE_Info_20);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__program_target__Var_24;
          MR_Word make__program_target__IntermodAnalysisSucceeded_40;
          MR_Word make__program_target__STATE_VARIABLE_Info_25_41;

          {
            make__program_target__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__program_target__Var_24, 0) = ((MR_Box) (make__program_target__MainModuleName_15));
            MR_hl_field(MR_mktag(0), make__program_target__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
          {
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(make__program_target__Var_24, make__program_target__Globals_9, &make__program_target__IntermodAnalysisSucceeded_40, make__program_target__STATE_VARIABLE_Info_0_19, &make__program_target__STATE_VARIABLE_Info_25_41);
          }
          switch (make__program_target__IntermodAnalysisSucceeded_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *make__program_target__Succeeded_12 = (MR_Integer) 0;
                *make__program_target__STATE_VARIABLE_Info_20 = make__program_target__STATE_VARIABLE_Info_25_41;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__program_target__Var_38;

                {
                  make__program_target__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__program_target__Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_38, 1) = ((MR_Box) (make__program_target__make_linked_target_1_8_p_0_2));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), make__program_target__Var_38, 3) = ((MR_Box) (make__program_target__LinkedTargetFile_10));
                }
                {
                  make__util__build_with_module_options_9_p_0(make__program_target__Globals_9, make__program_target__MainModuleName_15, make__program_target__ExtraOptions_11, make__program_target__Var_38, make__program_target__Succeeded_12, make__program_target__STATE_VARIABLE_Info_25_41, make__program_target__STATE_VARIABLE_Info_20);
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_misc_target_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5,
  MR_Box make__program_target__wrapper_arg_6,
  MR_Box * make__program_target__wrapper_arg_7)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_13;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_28;

    {
      make__program_target__make_misc_target_builder_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) make__program_target__wrapper_arg_1), ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv1_Succeeded_13, ((MR_Word) make__program_target__wrapper_arg_4), &make__program_target__conv0_STATE_VARIABLE_Info_28);
    }
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv1_Succeeded_13));
    *make__program_target__wrapper_arg_5 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_28));
  }
}

void MR_CALL 
make__program_target__make_misc_target_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__HeadVar__2_2,
  MR_Word * make__program_target__Succeeded_11,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_14,
  MR_Word * make__program_target__STATE_VARIABLE_Info_15)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__MainModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word make__program_target__Var_19;
    MR_Word make__program_target__TargetType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__HeadVar__2_2, (MR_Integer) 1)));

    {
      make__program_target__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 1) = ((MR_Box) (make__program_target__make_misc_target_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__program_target__Var_19, 3) = ((MR_Box) (make__program_target__HeadVar__2_2));
    }
    {
      make__util__build_with_module_options_9_p_0(make__program_target__Globals_8, make__program_target__MainModuleName_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__program_target__Var_19, make__program_target__Succeeded_11, make__program_target__STATE_VARIABLE_Info_0_14, make__program_target__STATE_VARIABLE_Info_15);
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box make__program_target__closure_arg,
  MR_Box * make__program_target__wrapper_arg_1,
  MR_Box make__program_target__wrapper_arg_2,
  MR_Box * make__program_target__wrapper_arg_3,
  MR_Box make__program_target__wrapper_arg_4,
  MR_Box * make__program_target__wrapper_arg_5)
{
  {
    MR_Box make__program_target__closure = make__program_target__closure_arg;
    MR_Word make__program_target__conv1_Succeeded_12;
    MR_Word make__program_target__conv0_STATE_VARIABLE_Info_20;

    {
      make__program_target__make_linked_target_1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__closure, (MR_Integer) 5))), &make__program_target__conv1_Succeeded_12, ((MR_Word) make__program_target__wrapper_arg_2), &make__program_target__conv0_STATE_VARIABLE_Info_20);
    }
    *make__program_target__wrapper_arg_1 = ((MR_Box) (make__program_target__conv1_Succeeded_12));
    *make__program_target__wrapper_arg_3 = ((MR_Box) (make__program_target__conv0_STATE_VARIABLE_Info_20));
  }
}

void MR_CALL 
make__program_target__make_linked_target_7_p_0(
  MR_Word make__program_target__Globals_8,
  MR_Word make__program_target__LinkedTargetFile_9,
  MR_Word * make__program_target__LinkedTargetSucceeded_10,
  MR_Word make__program_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__program_target__STATE_VARIABLE_Info_20)
{
  {
    MR_bool make__program_target__succeeded;
    MR_Word make__program_target__FileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_9, (MR_Integer) 1)));
    MR_Word make__program_target__ExtraOptions_15 = ((&make__program_target_vector_common_4[0 + make__program_target__FileType_14]))->make__program_target__vector_common_type_4_0__vct_4_f_0;
    MR_Word make__program_target__LibLinkages_16;
    MR_Word make__program_target___MainModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__program_target__LinkedTargetFile_9, (MR_Integer) 0)));

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 642, &make__program_target__LibLinkages_16);
    }
    switch (make__program_target__FileType_14) {
      default:
        make__program_target__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          {
            make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "shared")), make__program_target__LibLinkages_16);
          }
          make__program_target__succeeded = !(make__program_target__succeeded);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            make__program_target__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "static")), make__program_target__LibLinkages_16);
          }
          make__program_target__succeeded = !(make__program_target__succeeded);
        }
        break;
    }
    if (make__program_target__succeeded)
      {
        *make__program_target__LinkedTargetSucceeded_10 = (MR_Integer) 1;
        *make__program_target__STATE_VARIABLE_Info_20 = make__program_target__STATE_VARIABLE_Info_0_19;
      }
    else
      {
        MR_Word make__program_target__LibgradeCheck_17;
        MR_Word make__program_target__LibgradeCheckSucceeded_18;

        {
          libs__globals__lookup_bool_option_3_p_0(make__program_target__Globals_8, (MR_Integer) 652, &make__program_target__LibgradeCheck_17);
        }
        switch (make__program_target__LibgradeCheck_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__program_target__LibgradeCheckSucceeded_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              make__program_target__check_libraries_are_installed_4_p_0(make__program_target__Globals_8, &make__program_target__LibgradeCheckSucceeded_18);
            }
            break;
        }
        switch (make__program_target__LibgradeCheckSucceeded_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__program_target__LinkedTargetSucceeded_10 = (MR_Integer) 0;
              *make__program_target__STATE_VARIABLE_Info_20 = make__program_target__STATE_VARIABLE_Info_0_19;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__program_target__Var_30;

              {
                make__program_target__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 1) = ((MR_Box) (make__program_target__make_linked_target_7_p_0_1));
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 3) = ((MR_Box) (make__program_target__Globals_8));
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 4) = ((MR_Box) (make__program_target__LinkedTargetFile_9));
                MR_hl_field(MR_mktag(0), make__program_target__Var_30, 5) = ((MR_Box) (make__program_target__ExtraOptions_15));
              }
              {
                make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(make__program_target__Globals_8, make__program_target__LinkedTargetFile_9, make__program_target__ExtraOptions_15, make__program_target__Globals_8, make__program_target__Var_30, make__program_target__LinkedTargetSucceeded_10, make__program_target__STATE_VARIABLE_Info_0_19, make__program_target__STATE_VARIABLE_Info_20);
              }
            }
            break;
        }
      }
  }
}

void mercury__make__program_target__init(void)
{
}

void mercury__make__program_target__init_type_tables(void)
{
}

void mercury__make__program_target__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__program_target__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module make.program_target. */
