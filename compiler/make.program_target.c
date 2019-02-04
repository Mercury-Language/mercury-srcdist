/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2019-01-20
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


// :- module make.program_target.
// :- implementation.

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

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_library_is_installed__2126__1_4_p_0(
  MR_String Grade_11,
  MR_String LibName_12);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2089__1_3_p_0(
  MR_String Grade_7);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2037__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1952__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1896__1_3_p_0(
  MR_Word ModuleName_8);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1879__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1840__1_4_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1771__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1735__1_4_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word CleanAfter_20,
  MR_Word LibGlobals_30,
  MR_Word * LambdaHeadVar__1_74,
  MR_Word LambdaHeadVar__2_75,
  MR_Word * LambdaHeadVar__3_76);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1423__1_3_p_0(
  MR_String Grade_15);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1111__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1042__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word LambdaHeadVar__1_30);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__879__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_48,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_81,
  MR_Word * HeadVar__5_82,
  MR_Word HeadVar__6_83,
  MR_Word * HeadVar__7_84);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__874__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_41,
  MR_Word HeadVar__3_62,
  MR_Word HeadVar__4_63,
  MR_Word * HeadVar__5_64,
  MR_Word HeadVar__6_65,
  MR_Word * HeadVar__7_66);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1_9_p_0(
  MR_Word Globals_11,
  MR_Word KeepGoing_22,
  MR_Word HeadVar__3_67,
  MR_Word HeadVar__4_68,
  MR_Word * HeadVar__5_160,
  MR_Word HeadVar__6_161,
  MR_Word * HeadVar__7_162);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__569__1_1_f_0(
  MR_Word LambdaHeadVar__1_121);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__553__1_8_p_0(
  MR_Word Globals_18,
  MR_Word PIC_26,
  MR_Word LambdaHeadVar__1_107,
  MR_Word * LambdaHeadVar__2_108,
  MR_Word LambdaHeadVar__3_109,
  MR_Word * LambdaHeadVar__4_110);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__502__1_3_p_0(
  MR_String HeadVar__1_298);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__490__1_1_f_0(
  MR_String LambdaHeadVar__1_91);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__379__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_31);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__316__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40);

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0(
  MR_Word Globals_9,
  MR_Word Dirs_10,
  MR_String Grade_11,
  MR_String LibName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_21,
  MR_Word * STATE_VARIABLE_Succeeded_22);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_String FactTableFile_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_Word FactTableFiles_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded_11,
  MR_String GradeDir_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Info0_14,
  MR_Word CleanAfter_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word Globals_9,
  MR_Word Clean_10,
  MR_Word ModuleName_11,
  MR_Word AllModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word StatusMap0_7);

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word File_5,
  MR_Word StatusMap0_7);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_String Grade_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word Globals_8,
  MR_String IncDir_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_14,
  MR_Word * STATE_VARIABLE_Succeeded_15);

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_String Ext_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static MR_Word MR_CALL 
make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5);

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15);

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_17,
  MR_Word * STATE_VARIABLE_ParentModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_11,
  MR_Word HeadVar__3_12,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
  MR_String FileName_5,
  MR_Word MaybeTimestamp_6,
  MR_Word STATE_VARIABLE_Timestamps_0_8,
  MR_Word * STATE_VARIABLE_Timestamps_9);

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0(
  MR_Word JavaFiles_9,
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word FileType_11,
  MR_String OutputFileName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word MainModuleName_18,
  MR_Word FileType_19,
  MR_String OutputFileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word AllModules_22,
  MR_Word ObjModules_23,
  MR_Word CompilationTarget_24,
  MR_Word PIC_25,
  MR_Word DepsSuccess_26,
  MR_Word BuildDepsResult_27,
  MR_Word Globals_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word Globals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String OutputFileName_21,
  MR_Word MaybeTimestamp_22,
  MR_Word AllModules_23,
  MR_Word ObjModules_24,
  MR_Word CompilationTarget_25,
  MR_Word PIC_26,
  MR_Word DepsSuccess_27,
  MR_Word BuildDepsResult_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ObjectTargets_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Res_8);

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word Module_9,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_16,
  MR_Word * STATE_VARIABLE_TargetModules_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word LinkedTargetFile_9,
  MR_Word Globals_10,
  MR_Word HeadVar__3_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word LinkedTargetFile_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ObjModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word ObjModules_9,
  MR_Word * OutOfDateModules_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules_9,
  MR_Word * OrderedModules_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_11,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word MainModuleName_9,
  MR_Word AllModules_10,
  MR_Word Globals_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__build_java_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetFile_10,
  MR_Word ExtraOptions_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Var_132,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Succeeded0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word ModuleDeps_4,
  MR_Word Modules0_5,
  MR_Word * Modules_6);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_132,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0(
  MR_Word Globals_11,
  MR_Word KeepGoing_22,
  MR_Word HeadVar__4_68,
  MR_Word * HeadVar__5_160,
  MR_Word HeadVar__6_161,
  MR_Word * HeadVar__7_162);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word * Succeeded_7,
  MR_String * CacheDir_8);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__install_library_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word * Result_7,
  MR_Word * LinkResult_8);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkSucceeded0_12,
  MR_String GradeDir_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String Grade_8,
  MR_Word * Result_9,
  MR_Word * LinkResult_10);

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word Globals_8,
  MR_String Linkage_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word Globals_8,
  MR_Word AllModules0_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_Word AllModules_11,
  MR_Word * TargetModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__program_target__make_misc_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * Succeeded_6);


static /* final */ const MR_Box make__program_target_scalar_common_1[53][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[23][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[2][1];

static /* final */ const MR_Box make__program_target_scalar_common_4[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_5[19][11];

static /* final */ const MR_Box make__program_target_scalar_common_6[8][10];

static /* final */ const MR_Box make__program_target_scalar_common_7[5][12];

static /* final */ const MR_Box make__program_target_scalar_common_8[5][7];

static /* final */ const MR_Box make__program_target_scalar_common_9[6][9];

static /* final */ const MR_Box make__program_target_scalar_common_10[1][8];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][13];

static /* final */ const MR_Box make__program_target_scalar_common_12[6][5];

static /* final */ const MR_Box make__program_target_scalar_common_14[1][4];

static /* final */ const MR_Box make__program_target_scalar_common_15[1][20];


/* sealed */ struct make__program_target__vector_common_type_13_0_s {
  const MR_Word make__program_target__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_13_0_s make__program_target_vector_common_13[9];



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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "opt")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "int0")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "module_dep")),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Unsigned) 60U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 52U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 56U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 52U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "--use-grade-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[0])),
    ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[3])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[3])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[4])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[2])),
    ((MR_Box) (make__program_target__order_target_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_8[2])),
    ((MR_Box) (make__program_target__make_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[3])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[0])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[4])),
    ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[5])),
    ((MR_Box) (make__program_target__install_library_grade_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[19][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__make__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[5][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
};

static /* final */ const MR_Box make__program_target_scalar_common_8[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[6][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
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
    ((MR_Box) ((MR_Integer) 10)),
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

static /* final */ const MR_Box make__program_target_scalar_common_12[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_14[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__program_target_scalar_common_4[0])),
    ((MR_Box) (make__program_target__build_java_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "Making Java class files\n"))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_15[1][20] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 17)),
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


static /* final */ const struct make__program_target__vector_common_type_13_0_s make__program_target_vector_common_13[9] = {
  /* row 0 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 1 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[50])) },
  /* row 3 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 4 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 5 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 6 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 7 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 8 */   {     (MR_Word) ((MR_Unsigned) 0U) },
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
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_misc_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_misc_target_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__program_target____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)
  }
};

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_library_is_installed__2126__1_4_p_0(
  MR_String Grade_11,
  MR_String LibName_12)
{
  {
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (LibName_12));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Grade_11));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    mercury__io__format_4_p_0((MR_String) "Checking that %s is installed in grade \140%s\'.\n", Var_33);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2089__1_3_p_0(
  MR_String Grade_7)
{
  {
    MR_Word Var_27;
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (Grade_7));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Checking that the Mercury standard library is installed in grade \140%s\'.\n", Var_27);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_realclean__2037__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Cleaning up interface files for module \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) "\'.\n");
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_module_clean__1952__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Cleaning up target files for module \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) "\'.\n");
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_main_module_realclean__1896__1_3_p_0(
  MR_Word ModuleName_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Removing executable and library files for \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) "\'.\n");
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_grade_clean__1879__1_4_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9)
{
  {
    MR_String Grade_13;

    mercury__io__write_string_3_p_0((MR_String) "Cleaning up grade-dependent files for \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) "\'in grade ");
    libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_13);
    mercury__io__write_string_3_p_0(Grade_13);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__generate_archive_index__1840__1_4_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Generating archive index for file ");
    mercury__io__write_string_3_p_0(FileName_8);
    mercury__io__write_string_3_p_0((MR_String) " in ");
    mercury__io__write_string_3_p_0(InstallDir_9);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_install_dirs__1771__1_5_p_0(
  MR_String IntsSubdir_14,
  MR_String LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  {
    MR_String Var_70;
    MR_String Var_72;

    Var_72 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_64, (MR_String) "s");
    Var_70 = mercury__dir__f_slash_2_f_0(IntsSubdir_14, Var_72);
    mercury__dir__make_directory_4_p_0(Var_70, LambdaHeadVar__2_65);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_directory__1735__1_4_p_0(
  MR_String SourceDirName_8,
  MR_String InstallDir_9)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Installing directory ");
    mercury__io__write_string_3_p_0(SourceDirName_8);
    mercury__io__write_string_3_p_0((MR_String) " in ");
    mercury__io__write_string_3_p_0(InstallDir_9);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(
  MR_String FileName_8,
  MR_String InstallDir_9)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Installing file ");
    mercury__io__write_string_3_p_0(FileName_8);
    mercury__io__write_string_3_p_0((MR_String) " in ");
    mercury__io__write_string_3_p_0(InstallDir_9);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_16;

    make__program_target__install_library_grade_2_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv0_Succeeded_16);
    *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word CleanAfter_20,
  MR_Word LibGlobals_30,
  MR_Word * LambdaHeadVar__1_74,
  MR_Word LambdaHeadVar__2_75,
  MR_Word * LambdaHeadVar__3_76)
{
  {
    MR_Word Var_81;

    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&make__program_target_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (LibGlobals_30));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (LinkSucceeded0_11));
      MR_hl_field(MR_mktag(0), Var_81, 5) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), Var_81, 6) = ((MR_Box) (AllModules_13));
      MR_hl_field(MR_mktag(0), Var_81, 7) = ((MR_Box) (LambdaHeadVar__2_75));
      MR_hl_field(MR_mktag(0), Var_81, 8) = ((MR_Box) (CleanAfter_20));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_81, LambdaHeadVar__1_74);
    *LambdaHeadVar__3_76 = LambdaHeadVar__2_75;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__install_library_grade__1423__1_3_p_0(
  MR_String Grade_15)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Installing grade ");
    mercury__io__write_string_3_p_0(Grade_15);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1111__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28)
{
  {
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_27, HeadVar__2_28);
  }
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1042__1_2_p_0(
  MR_Word AllModules_11,
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (LambdaHeadVar__1_30)), AllModules_11);
    return succeeded;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__879__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_48,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_81,
  MR_Word * HeadVar__5_82,
  MR_Word HeadVar__6_83,
  MR_Word * HeadVar__7_84)
{
  {
    make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_20, HeadVar__2_48, HeadVar__3_80, HeadVar__4_81, HeadVar__5_82, HeadVar__6_83, HeadVar__7_84);
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_all_interface_files__874__1_9_p_0(
  MR_Word KeepGoing_20,
  MR_Word HeadVar__2_41,
  MR_Word HeadVar__3_62,
  MR_Word HeadVar__4_63,
  MR_Word * HeadVar__5_64,
  MR_Word HeadVar__6_65,
  MR_Word * HeadVar__7_66)
{
  {
    MR_Box conv1_HeadVar__7_66;
    MR_Box conv0_HeadVar__9_68;

    make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, HeadVar__2_41, HeadVar__3_62, HeadVar__4_63, HeadVar__5_64, ((MR_Box) (HeadVar__6_65)), &conv1_HeadVar__7_66, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__9_68);
    *HeadVar__7_66 = ((MR_Word) (conv1_HeadVar__7_66));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1_9_p_0(
  MR_Word Globals_11,
  MR_Word KeepGoing_22,
  MR_Word HeadVar__3_67,
  MR_Word HeadVar__4_68,
  MR_Word * HeadVar__5_160,
  MR_Word HeadVar__6_161,
  MR_Word * HeadVar__7_162)
{
  {
    make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_22, HeadVar__3_67, Globals_11, HeadVar__4_68, HeadVar__5_160, HeadVar__6_161, HeadVar__7_162);
  }
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__569__1_1_f_0(
  MR_Word LambdaHeadVar__1_121)
{
  {
    MR_String LambdaHeadVar__2_122 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_121, (MR_Integer) 2))));

    return LambdaHeadVar__2_122;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__553__1_8_p_0(
  MR_Word Globals_18,
  MR_Word PIC_26,
  MR_Word LambdaHeadVar__1_107,
  MR_Word * LambdaHeadVar__2_108,
  MR_Word LambdaHeadVar__3_109,
  MR_Word * LambdaHeadVar__4_110)
{
  {
    MR_Word MaybeImports_58;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_18, LambdaHeadVar__1_107, &MaybeImports_58, LambdaHeadVar__3_109, LambdaHeadVar__4_110);
    if ((MaybeImports_58 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.build_linked_target_2\'/17", (MR_String) "error in dependencies");
        return;
      }
    }
    else
    {
      MR_Word Imports_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImports_58, (MR_Integer) 0))));

      make__module_target__external_foreign_code_files_6_p_0(Globals_18, PIC_26, Imports_59, LambdaHeadVar__2_108);
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__build_linked_target_2__502__1_3_p_0(
  MR_String HeadVar__1_298)
{
  {
    mercury__io__write_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadVar__1_298)));
  }
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__490__1_1_f_0(
  MR_String LambdaHeadVar__1_91)
{
  {
    MR_Word LambdaHeadVar__2_92;

    {
      LambdaHeadVar__2_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_92, 0) = ((MR_Box) (LambdaHeadVar__1_91));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return LambdaHeadVar__2_92;
  }
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__379__1_3_f_0(
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_String LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;
    MR_Word Var_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = (MR_Box) ((MR_Unsigned) (PIC_10));
      MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (LambdaHeadVar__1_31));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 0) = ((MR_Box) (Var_33));
    }
    return LambdaHeadVar__2_32;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__316__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word * HeadVar__2_40)
{
  {
    MR_Box conv0_HeadVar__2_40;

    mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_39, &conv0_HeadVar__2_40);
    *HeadVar__2_40 = ((MR_Word) (conv0_HeadVar__2_40));
  }
}

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__check_library_is_installed__2126__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__check_library_is_installed_8_p_0(
  MR_Word Globals_9,
  MR_Word Dirs_10,
  MR_String Grade_11,
  MR_String LibName_12,
  MR_Word STATE_VARIABLE_Succeeded_0_21,
  MR_Word * STATE_VARIABLE_Succeeded_22)
{
  {
    MR_String InitFileName_15;
    MR_Word MaybeDirName_16;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__program_target__check_library_is_installed_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Grade_11));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (LibName_12));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_9, (MR_Integer) 90, Var_26);
    InitFileName_15 = mercury__string__f_43_43_2_f_0(LibName_12, (MR_String) ".init");
    libs__file_util__search_for_file_returning_dir_5_p_0(Dirs_10, InitFileName_15, &MaybeDirName_16);
    if (((MR_tag((MR_Word) MaybeDirName_16)) == (MR_Integer) 1))
    {
      MR_Word Stderr_19;
      MR_String ProgName_20;

      mercury__io__stderr_stream_3_p_0(&Stderr_19);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_20);
      mercury__io__write_string_4_p_0(Stderr_19, ProgName_20);
      mercury__io__write_string_4_p_0(Stderr_19, (MR_String) ": error: the library \140");
      mercury__io__write_string_4_p_0(Stderr_19, LibName_12);
      mercury__io__write_string_4_p_0(Stderr_19, (MR_String) "\' cannot be found in grade \140");
      mercury__io__write_string_4_p_0(Stderr_19, Grade_11);
      mercury__io__write_string_4_p_0(Stderr_19, (MR_String) "\'.\n");
      *STATE_VARIABLE_Succeeded_22 = (MR_Integer) 0;
    }
    else
      *STATE_VARIABLE_Succeeded_22 = STATE_VARIABLE_Succeeded_0_21;
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_module_realclean__2037__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_18;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_String Var_54;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Box conv2_STATE_VARIABLE_Info_31_31;
    MR_Box conv1_STATE_VARIABLE_IO_32_32;

    make__program_target__make_module_clean_6_p_0(Globals_7, ModuleName_8, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_15_15);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&make__program_target_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 65, Var_18);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_5[18]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__program_target__make_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 61));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_module_target_type_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[49])), ((MR_Box) (STATE_VARIABLE_Info_15_15)), &conv2_STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
    STATE_VARIABLE_Info_31_31 = ((MR_Word) (conv2_STATE_VARIABLE_Info_31_31));
    Var_54 = make__make_module_dep_file_extension_0_f_0();
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, Var_54, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_55_55);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, (MR_String) ".imdg", STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_59_59);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, (MR_String) ".request", STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_12);
  }
}

static void MR_CALL 
make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_String FactTableFile_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = (MR_Box) ((MR_Unsigned) (PIC_11));
      MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) (FactTableFile_12));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 61, ModuleName_10, Var_20, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
make__program_target__remove_fact_table_c_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_String FactTableCFile_13;

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, ModuleName_9, FactTableFile_10, (MR_String) ".c", (MR_Integer) 1, &FactTableCFile_13);
    make__util__make_remove_file_7_p_0(Globals_8, (MR_Integer) 61, FactTableCFile_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_15;

    make__program_target__remove_fact_table_c_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_15);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_15));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_target_file_by_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_module_clean__1952__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_module_clean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word MaybeImports_11;
    MR_Word FactTableFiles_13;
    MR_Word CCodeModule_14;
    MR_Word Var_20;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word STATE_VARIABLE_Info_63_63;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_71_71;
    MR_Word STATE_VARIABLE_Info_74_74;
    MR_Box conv2_STATE_VARIABLE_Info_33_33;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;
    MR_Box conv5_STATE_VARIABLE_Info_66_66;
    MR_Box conv4_STATE_VARIABLE_IO_67_67;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 65, Var_20);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__program_target_scalar_common_5[18]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 61));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_module_target_type_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[40])), ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv2_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv2_STATE_VARIABLE_Info_33_33));
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, (MR_String) ".used", STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_57_57);
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, (MR_String) ".prof", STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_61_61);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_7, ModuleName_8, &MaybeImports_11, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_63_63);
    if ((MaybeImports_11 == (MR_Word) ((MR_Unsigned) 0U)))
      FactTableFiles_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Imports_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImports_11, (MR_Integer) 0))));

      FactTableFiles_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Imports_12, (MR_Integer) 11))));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&make__program_target_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (make__program_target__make_module_clean_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, FactTableFiles_13, ((MR_Box) (STATE_VARIABLE_Info_63_63)), &conv5_STATE_VARIABLE_Info_66_66, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_67_67);
    STATE_VARIABLE_Info_66_66 = ((MR_Word) (conv5_STATE_VARIABLE_Info_66_66));
    CCodeModule_14 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(ModuleName_8, (MR_Integer) 0);
    make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 61, CCodeModule_14, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_71_71);
    make__program_target__remove_object_and_assembler_files_8_p_0(Globals_7, ModuleName_8, (MR_Integer) 0, FactTableFiles_13, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_74_74);
    make__program_target__remove_object_and_assembler_files_8_p_0(Globals_7, ModuleName_8, (MR_Integer) 1, FactTableFiles_13, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    make__program_target__remove_fact_table_object_and_assembler_files_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__remove_object_and_assembler_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word PIC_11,
  MR_Word FactTableFiles_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_28;
    MR_Box conv2_STATE_VARIABLE_Info_16;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = (MR_Box) ((MR_Unsigned) (PIC_11));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 61, ModuleName_10, Var_20, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_21_21);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = (MR_Box) (((((MR_Unsigned) (PIC_11) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    make__util__make_remove_target_file_by_name_8_p_0(Globals_9, (MR_Integer) 61, ModuleName_10, Var_24, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_25_25);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[17]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__remove_object_and_assembler_files_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (PIC_11));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, FactTableFiles_12, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_grade_ints_and_headers_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded_11,
  MR_String GradeDir_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word MaybeImports_17;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_13, &MaybeImports_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
    if ((MaybeImports_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_14 = (MR_Integer) 0;
    else
    {
      MR_String Prefix_19;
      MR_String LibDir_20;
      MR_Word Target_21;
      MR_Word HighLevelCode_22;
      MR_Word HeaderSucceeded_27;
      MR_String GradeIntDir_28;
      MR_Word AnyIntermod_29;
      MR_Word OptSucceeded_30;
      MR_Word IntermodAnalysis_31;
      MR_Word IntermodAnalysisSucceeded_32;
      MR_String Var_40;
      MR_String Var_53;
      MR_Word Var_60;

      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 651, &Prefix_19);
      Var_40 = mercury__dir__f_slash_2_f_0(Prefix_19, (MR_String) "lib");
      LibDir_20 = mercury__dir__f_slash_2_f_0(Var_40, (MR_String) "mercury");
      libs__globals__get_target_2_p_0(Globals_10, &Target_21);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 280, &HighLevelCode_22);
      succeeded = (Target_21 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (HighLevelCode_22 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String GradeIncDir_23;
        MR_Word HeaderSucceeded1_24;
        MR_String IntDir_25;
        MR_Word HeaderSucceeded2_26;
        MR_String Var_44;
        MR_String Var_45;

        Var_45 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "lib");
        Var_44 = mercury__dir__f_slash_2_f_0(Var_45, GradeDir_12);
        GradeIncDir_23 = mercury__dir__f_slash_2_f_0(Var_44, (MR_String) "inc");
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIncDir_23, ModuleName_13, (MR_String) "mih", &HeaderSucceeded1_24);
        IntDir_25 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
        make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, IntDir_25, ModuleName_13, (MR_String) "mih", &HeaderSucceeded2_26);
        HeaderSucceeded_27 = mercury__bool__and_2_f_0(HeaderSucceeded1_24, HeaderSucceeded2_26);
      }
      else
        HeaderSucceeded_27 = (MR_Integer) 1;
      Var_53 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
      GradeIntDir_28 = mercury__dir__f_slash_2_f_0(Var_53, GradeDir_12);
      libs__globals__get_any_intermod_2_p_0(Globals_10, &AnyIntermod_29);
      switch (AnyIntermod_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OptSucceeded_30 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_String) "opt", &OptSucceeded_30);
          }
          break;
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 352, &IntermodAnalysis_31);
      switch (IntermodAnalysis_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IntermodAnalysisSucceeded_32 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            make__program_target__install_subdir_file_8_p_0(Globals_10, LinkSucceeded_11, GradeIntDir_28, ModuleName_13, (MR_String) "analysis", &IntermodAnalysisSucceeded_32);
          }
          break;
      }
      Var_60 = mercury__bool__and_2_f_0(HeaderSucceeded_27, OptSucceeded_30);
      *Succeeded_14 = mercury__bool__and_2_f_0(Var_60, IntermodAnalysisSucceeded_32);
    }
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_13;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    make__program_target__make_misc_target_builder_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_2_9_p_0(
  MR_Word Globals_10,
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Info0_14,
  MR_Word CleanAfter_15,
  MR_Word * Succeeded_16)
{
  {
    MR_Word LibSucceeded_18;
    MR_Word Info1_19;
    MR_Word Var_25;
    MR_Word Var_41;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (make__program_target__install_library_grade_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Var_25));
    }
    make__util__build_with_module_options_9_p_0(Globals_10, ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), Var_41, &LibSucceeded_18, Info0_14, &Info1_19);
    switch (LibSucceeded_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeDir_20;
          MR_Word Info2_21;
          MR_Word _Info_22;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_10, &GradeDir_20);
          make__program_target__install_library_grade_files_10_p_0(Globals_10, LinkSucceeded0_11, GradeDir_20, ModuleName_12, AllModules_13, Succeeded_16, Info1_19, &Info2_21);
          make__program_target__maybe_make_grade_clean_8_p_0(Globals_10, CleanAfter_15, ModuleName_12, AllModules_13, Info2_21, &_Info_22);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_grade_clean__1879__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__maybe_make_grade_clean_8_p_0(
  MR_Word Globals_9,
  MR_Word Clean_10,
  MR_Word ModuleName_11,
  MR_Word AllModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  switch (Clean_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_Info_32_45;
        MR_Word Var_47;
        MR_Box conv2_STATE_VARIABLE_Info_16;
        MR_Box conv1_STATE_VARIABLE_IO_18;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__program_target_scalar_common_8[4]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Globals_9));
          MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ModuleName_11));
        }
        make__util__verbose_make_msg_4_p_0(Globals_9, Var_31);
        make__program_target__make_main_module_realclean_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_32_45);
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (make__program_target__maybe_make_grade_clean_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Globals_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, AllModules_12, ((MR_Box) (STATE_VARIABLE_Info_32_45)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
      }
      break;
  }
}

static MR_Word MR_CALL 
make__program_target__remove_grade_dependent_targets_3_f_0(
  MR_Word File_5,
  MR_Word _Status_6,
  MR_Word StatusMap0_7)
{
  {
    MR_Word StatusMap_8;

    StatusMap_8 = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(File_5, StatusMap0_7);
    return StatusMap_8;
  }
}

static MR_Word MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_109_111_118_101_95_103_114_97_100_101_95_100_101_112_101_110_100_101_110_116_95_116_97_114_103_101_116_115_95_95_91_50_93_95_48_3_f_0(
  MR_Word File_5,
  MR_Word StatusMap0_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) File_5)) == (MR_Integer) 0);
    MR_Word StatusMap_8;
    MR_Word Target_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), File_5, (MR_Integer) 0))));
      Target_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      succeeded = make__util__target_is_grade_or_arch_dependent_1_p_0(Target_10);
    }
    if (succeeded)
    {
      StatusMap_8 = mercury__version_hash_table__delete_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), StatusMap0_7, ((MR_Box) (File_5)));
    }
    else
      StatusMap_8 = StatusMap0_7;
    return StatusMap_8;
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__1_74;
    MR_Word conv2_LambdaHeadVar__3_76;

    make__program_target__IntroducedFrom__pred__install_library_grade__1468__1_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv3_LambdaHeadVar__1_74, ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_76);
    *wrapper_arg_1 = ((MR_Box) (conv3_LambdaHeadVar__1_74));
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_76));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_16;

    make__program_target__maybe_make_grade_clean_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Info_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_library_grade__1423__1_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_10_p_0(
  MR_Word LinkSucceeded0_11,
  MR_Word ModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_String Grade_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  {
    MR_Word UseGradeSubdirs_19;
    MR_Word CleanAfter_20;
    MR_Word OptionArgs0_21;
    MR_Word OptionArgs_22;
    MR_Word MaybeMCFlags_23;
    MR_Word OptionsSpecs_29;
    MR_Word LibGlobals_30;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_60;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 667, &UseGradeSubdirs_19);
    CleanAfter_20 = mercury__bool__not_1_f_0(UseGradeSubdirs_19);
    OptionArgs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Grade_15));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[52])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "--grade"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    OptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs0_21, Var_44);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Grade_15));
    }
    make__util__verbose_make_msg_4_p_0(Globals_14, Var_50);
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 5))));
    make__options_file__lookup_mmc_options_5_p_0(Globals_14, Var_60, &MaybeMCFlags_23);
    if ((MaybeMCFlags_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.install_library_grade\'/10", (MR_String) "bad DEFAULT_MCFLAGS");
        return;
      }
    }
    else
    {
      MR_Word MCFlags_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags_23, (MR_Integer) 0))));
      MR_Word DetectedGradeFlags_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 3))));
      MR_Word AllFlags_26;
      MR_Word Var_65;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_24, OptionArgs_22);
      AllFlags_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_25, Var_65);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_26, &Var_27, &Var_28, &OptionsSpecs_29, &LibGlobals_30);
    }
    if ((OptionsSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word StatusMap_33;
      MR_Word Cleanup_34;
      MR_Word VeryVerbose_35;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word Var_71;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Integer Var_174;
      MR_Word Var_175;
      MR_Unsigned packed_word_3;
      MR_Box conv4_STATE_VARIABLE_Info_40;

      StatusMap_33 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), (MR_Word) (&make__program_target_scalar_common_2[22]));
      Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 0))));
      Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 1))));
      Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 2))));
      Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 3))));
      Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 5))));
      Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 6))));
      Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 7))));
      Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 9))));
      Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 10))));
      Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 11))));
      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 12))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 13)));
      Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 14))));
      Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 15))));
      Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 16))));
      Var_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 17))));
      Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 18))));
      {
        STATE_VARIABLE_Info_69_69 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 0) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 1) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 2) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 3) = ((MR_Box) (Var_159));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 4) = ((MR_Box) (OptionArgs_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 5) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 6) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 7) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 8) = ((MR_Box) (StatusMap_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 9) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 10) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 11) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 12) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 13) = (MR_Box) (packed_word_3);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 14) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 15) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 16) = ((MR_Box) (Var_173));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 17) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_69_69, 18) = ((MR_Box) (Var_175));
      }
      {
        Cleanup_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cleanup_34, 0) = ((MR_Box) (&make__program_target_scalar_common_5[16]));
        MR_hl_field(MR_mktag(0), Cleanup_34, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_3));
        MR_hl_field(MR_mktag(0), Cleanup_34, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Cleanup_34, 3) = ((MR_Box) (LibGlobals_30));
        MR_hl_field(MR_mktag(0), Cleanup_34, 4) = ((MR_Box) (CleanAfter_20));
        MR_hl_field(MR_mktag(0), Cleanup_34, 5) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), Cleanup_34, 6) = ((MR_Box) (AllModules_13));
      }
      libs__globals__lookup_bool_option_3_p_0(LibGlobals_30, (MR_Integer) 61, &VeryVerbose_35);
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (make__program_target__install_library_grade_10_p_0_4));
        MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (LinkSucceeded0_11));
        MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (AllModules_13));
        MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (CleanAfter_20));
        MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (LibGlobals_30));
      }
      libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_35, Var_71, Cleanup_34, Succeeded_16, ((MR_Box) (STATE_VARIABLE_Info_69_69)), &conv4_STATE_VARIABLE_Info_40);
      *STATE_VARIABLE_Info_40 = ((MR_Word) (conv4_STATE_VARIABLE_Info_40));
    }
    else
    {
      libs__handle_options__usage_errors_4_p_0(Globals_14, OptionsSpecs_29);
      *Succeeded_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
    }
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_extra_header_7_p_0(
  MR_Word Globals_8,
  MR_String IncDir_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_14,
  MR_Word * STATE_VARIABLE_Succeeded_15)
{
  {
    MR_Word InstallSucceeded_13;
    MR_String Command_27;
    MR_Word OutputStream_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__program_target__install_extra_header_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (IncDir_9));
    }
    make__util__verbose_make_msg_4_p_0(Globals_8, Var_29);
    Command_27 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, IncDir_9);
    mercury__io__output_stream_3_p_0(&OutputStream_28);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_8, OutputStream_28, (MR_Integer) 0, Command_27, &InstallSucceeded_13);
    *STATE_VARIABLE_Succeeded_15 = mercury__bool__and_2_f_0(InstallSucceeded_13, STATE_VARIABLE_Succeeded_0_14);
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_14;

    make__program_target__install_subdir_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_14);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_14));
  }
}

static void MR_CALL 
make__program_target__install_ints_and_headers_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleAndImports_15;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeModuleAndImports_15, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    if ((MaybeModuleAndImports_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_12 = (MR_Integer) 0;
    else
    {
      MR_Word ModuleAndImports_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_15, (MR_Integer) 0))));
      MR_Word AnyIntermod_17;
      MR_Word Exts_18;
      MR_String Prefix_19;
      MR_String LibDir_20;
      MR_Word Results_21;
      MR_Word Target_22;
      MR_Word HeaderSucceeded_26;
      MR_String Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_String Var_47;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_72;
      MR_Box conv1_STATE_VARIABLE_IO_46_46;

      libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_17);
      switch (AnyIntermod_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Exts_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_16, (MR_Integer) 8))));

            succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_33);
            if (succeeded)
              Exts_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[9]));
            else
              Exts_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[10]));
          }
          break;
      }
      libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 651, &Prefix_19);
      Var_41 = mercury__dir__f_slash_2_f_0(Prefix_19, (MR_String) "lib");
      LibDir_20 = mercury__dir__f_slash_2_f_0(Var_41, (MR_String) "mercury");
      Var_47 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&make__program_target_scalar_common_5[15]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (make__program_target__install_ints_and_headers_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (SubdirLinkSucceeded_10));
        MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (ModuleName_11));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_String) "module_dep"));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Exts_18));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "int3"));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "int2"));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) "int"));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_50));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, Var_45, &Results_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_46_46);
      libs__globals__get_target_2_p_0(Globals_9, &Target_22);
      switch (Target_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String FileName_23;
            MR_Word HeaderSucceeded1_24;
            MR_Word HeaderSucceeded2_25;
            MR_String Var_65;
            MR_String Var_68;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".mh", ModuleName_11, &FileName_23);
            Var_65 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "inc");
            make__program_target__install_file_6_p_0(Globals_9, FileName_23, Var_65, &HeaderSucceeded1_24);
            Var_68 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "ints");
            make__program_target__install_subdir_file_8_p_0(Globals_9, SubdirLinkSucceeded_10, Var_68, ModuleName_11, (MR_String) "mh", &HeaderSucceeded2_25);
            HeaderSucceeded_26 = mercury__bool__and_2_f_0(HeaderSucceeded1_24, HeaderSucceeded2_25);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          HeaderSucceeded_26 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_59;
            MR_String FileName_73;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".hrl", ModuleName_11, &FileName_73);
            Var_59 = mercury__dir__f_slash_2_f_0(LibDir_20, (MR_String) "inc");
            make__program_target__install_file_6_p_0(Globals_9, FileName_73, Var_59, &HeaderSucceeded_26);
          }
          break;
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (HeaderSucceeded_26));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Results_21));
      }
      *Succeeded_12 = mercury__bool__and_list_1_f_0(Var_72);
    }
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_subdir_file_8_p_0(
  MR_Word Globals_9,
  MR_Word SubdirLinkSucceeded_10,
  MR_String InstallDir_11,
  MR_Word ModuleName_12,
  MR_String Ext_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String FileName_16;
    MR_Word Succeeded1_17;
    MR_String Var_22;
    MR_String Command_39;
    MR_Word OutputStream_40;
    MR_Word Var_41;

    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ".", Ext_13);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_22, ModuleName_12, &FileName_16);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (FileName_16));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (InstallDir_11));
    }
    make__util__verbose_make_msg_4_p_0(Globals_9, Var_41);
    Command_39 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_16, InstallDir_11);
    mercury__io__output_stream_3_p_0(&OutputStream_40);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_9, OutputStream_40, (MR_Integer) 0, Command_39, &Succeeded1_17);
    switch (SubdirLinkSucceeded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Succeeded2_18;
          MR_String Var_26;
          MR_String Var_28;
          MR_String Var_30;
          MR_String Command_66;
          MR_Word OutputStream_67;
          MR_Word Var_68;

          Var_28 = mercury__dir__f_slash_2_f_0(InstallDir_11, (MR_String) "Mercury");
          Var_30 = mercury__string__f_43_43_2_f_0(Ext_13, (MR_String) "s");
          Var_26 = mercury__dir__f_slash_2_f_0(Var_28, Var_30);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (make__program_target__install_subdir_file_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (FileName_16));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Var_26));
          }
          make__util__verbose_make_msg_4_p_0(Globals_9, Var_68);
          Command_66 = libs__file_util__make_install_file_command_3_f_0(Globals_9, FileName_16, Var_26);
          mercury__io__output_stream_3_p_0(&OutputStream_67);
          parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_9, OutputStream_67, (MR_Integer) 0, Command_66, &Succeeded2_18);
          *Succeeded_14 = mercury__bool__and_2_f_0(Succeeded1_17, Succeeded2_18);
        }
        break;
      case (MR_Integer) 1:
        *Succeeded_14 = Succeeded1_17;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Word Dep_6;
    MR_Word Var_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_52;
    MR_Word Var_53;
    MR_Unsigned packed_word_1;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 28U));
    }
    {
      Dep_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Dep_6, 0) = ((MR_Box) (Var_9));
    }
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 8))));
    Var_14 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), Var_13, ((MR_Box) ((MR_Integer) 0)));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 1))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 3))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 4))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 5))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 7))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 9))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 10))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 11))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 14))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 15))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 16))));
    Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 17))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 18))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_53));
    }
  }
}

static MR_Word MR_CALL 
make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5)
{
  {
    MR_Word ModuleImports_6;
    MR_Word MaybeModuleImports_7;
    MR_Box conv0_MaybeModuleImports_7;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[5]), ModuleDeps_4, ((MR_Box) (ModuleName_5)), &conv0_MaybeModuleImports_7);
    MaybeModuleImports_7 = ((MR_Word) (conv0_MaybeModuleImports_7));
    if ((MaybeModuleImports_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "function \140make.program_target.lookup_module_and_imports_in_maybe_map\'/2", (MR_String) "MaybeModuleImports = no");
    }
    else
      ModuleImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleImports_7, (MR_Integer) 0))));
    return ModuleImports_6;
  }
}

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15)
{
  {
    MR_Word ModuleImports_11;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), LookupModuleImports_7, (MR_Integer) 1))));
    MR_Box conv1_ModuleImports_11;

    conv1_ModuleImports_11 = func_0(((MR_Box) (LookupModuleImports_7)), ((MR_Box) (ModuleName_8)));
    ModuleImports_11 = ((MR_Word) (conv1_ModuleImports_11));
    parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(ModuleImports_11, LookupModuleImports_7, STATE_VARIABLE_IntDepsGraph_0_12, STATE_VARIABLE_IntDepsGraph_13, STATE_VARIABLE_ImplDepsGraph_0_14, STATE_VARIABLE_ImplDepsGraph_15);
  }
}

static void MR_CALL 
make__program_target__collect_modules_with_children_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_ParentModules_0_17,
  MR_Word * STATE_VARIABLE_ParentModules_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word MaybeImports_14;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeImports_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    if ((MaybeImports_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
    else
    {
      MR_Word Imports_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImports_14, (MR_Integer) 0))));
      MR_Word Children_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 8))));

      succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Children_16);
      if (succeeded)
        *STATE_VARIABLE_ParentModules_18 = STATE_VARIABLE_ParentModules_0_17;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParentModules_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_17));
        }
    }
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_11,
  MR_Word HeadVar__3_12,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(HeadVar__1_1, Globals_11, Succeeded_13, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
}

static void MR_CALL 
make__program_target__delete_java_class_timestamps_4_p_0(
  MR_String FileName_5,
  MR_Word MaybeTimestamp_6,
  MR_Word STATE_VARIABLE_Timestamps_0_8,
  MR_Word * STATE_VARIABLE_Timestamps_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(FileName_5, (MR_String) ".class");
    if (succeeded)
      *STATE_VARIABLE_Timestamps_9 = STATE_VARIABLE_Timestamps_0_8;
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (FileName_5)), ((MR_Box) (MaybeTimestamp_6)), STATE_VARIABLE_Timestamps_0_8, STATE_VARIABLE_Timestamps_9);
    }
  }
}

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    backend_libs__compile_target_code__compile_java_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_HeadVar__4_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__build_java_files_2_8_p_0(
  MR_Word JavaFiles_9,
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__build_java_files_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ErrorStream_11));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (JavaFiles_9));
    }
    libs__process_util__call_in_forked_process_4_p_0(Var_19, Succeeded_12);
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
  }
}

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_module_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__linked_target_cleanup_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word FileType_11,
  MR_String OutputFileName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word STATE_VARIABLE_Info_20_20;

    make__util__make_remove_file_7_p_0(Globals_9, (MR_Integer) 65, OutputFileName_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_20_20);
    switch (FileType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 4:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 8:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 7:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 0:
        {
          MR_String ObjExt_34;
          MR_String PicObjExt_35;
          MR_String BeamExt_36;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_45;
          MR_String Var_46;
          MR_Word Var_48;
          MR_String Var_49;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_String Var_54;
          MR_Box conv2_STATE_VARIABLE_Info_16;
          MR_Box conv1_STATE_VARIABLE_IO_18;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 535, &ObjExt_34);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 536, &PicObjExt_35);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 554, &BeamExt_36);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (make__program_target__linked_target_cleanup_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Globals_9));
            MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 65));
            MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (MainModuleName_10));
          }
          Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_34);
          Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_35);
          Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "_init", BeamExt_36);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "_init.erl"));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "_init.c"));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_45));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, Var_41, ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
          *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
        }
        break;
      case (MR_Integer) 6:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 5:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_20_20;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word MainModuleName_18,
  MR_Word FileType_19,
  MR_String OutputFileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word AllModules_22,
  MR_Word ObjModules_23,
  MR_Word CompilationTarget_24,
  MR_Word PIC_25,
  MR_Word DepsSuccess_26,
  MR_Word BuildDepsResult_27,
  MR_Word Globals_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_Word MaybePreLinkCommand_33;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_28, (MR_Integer) 650, &MaybePreLinkCommand_33);
    if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
      make__program_target__build_linked_target_2_17_p_0(Globals_28, MainModuleName_18, FileType_19, OutputFileName_20, MaybeTimestamp_21, AllModules_22, ObjModules_23, CompilationTarget_24, PIC_25, DepsSuccess_26, BuildDepsResult_27, ErrorStream_29, Succeeded_30, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
    else
    {
      MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePreLinkCommand_33, (MR_Integer) 0))));
      MR_String CommandString_35;
      MR_Word Var_42;
      MR_Word PreLinkSucceeded_49;

      Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_22);
      backend_libs__compile_target_code__make_all_module_command_7_p_0(Globals_28, PreLinkCommand_34, MainModuleName_18, Var_42, &CommandString_35);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_28, ErrorStream_29, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_49);
      switch (PreLinkSucceeded_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_30 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__build_linked_target_2_17_p_0(Globals_28, MainModuleName_18, FileType_19, OutputFileName_20, MaybeTimestamp_21, AllModules_22, ObjModules_23, CompilationTarget_24, PIC_25, DepsSuccess_26, BuildDepsResult_27, ErrorStream_29, Succeeded_30, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_HeadVar__6_6;

    backend_libs__compile_target_code__link_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv16_HeadVar__6_6);
    *wrapper_arg_1 = ((MR_Box) (conv16_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv14_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv13_LambdaHeadVar__2_122;

    conv13_LambdaHeadVar__2_122 = make__program_target__IntroducedFrom__func__build_linked_target_2__569__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv13_LambdaHeadVar__2_122));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_5(
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
    MR_Word conv10_LambdaHeadVar__2_108;
    MR_Word conv9_LambdaHeadVar__4_110;

    make__program_target__IntroducedFrom__pred__build_linked_target_2__553__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_108, ((MR_Word) (wrapper_arg_3)), &conv9_LambdaHeadVar__4_110);
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_108));
    *wrapper_arg_4 = ((MR_Box) (conv9_LambdaHeadVar__4_110));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__build_linked_target_2__502__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_3(
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
    MR_Word conv6_HeadVar__3_3;
    MR_Word conv5_HeadVar__5_5;

    make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_2_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_92;

    conv2_LambdaHeadVar__2_92 = make__program_target__IntroducedFrom__func__build_linked_target_2__490__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_92));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0_1(
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
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__dependencies__dependency_status_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__build_linked_target_2_17_p_0(
  MR_Word Globals_18,
  MR_Word MainModuleName_19,
  MR_Word FileType_20,
  MR_String OutputFileName_21,
  MR_Word MaybeTimestamp_22,
  MR_Word AllModules_23,
  MR_Word ObjModules_24,
  MR_Word CompilationTarget_25,
  MR_Word PIC_26,
  MR_Word DepsSuccess_27,
  MR_Word BuildDepsResult_28,
  MR_Word ErrorStream_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  {
    MR_bool succeeded;
    MR_Word LinkObjects_33;
    MR_Word NoLinkObjsGlobals_34;
    MR_Word AllModulesList_35;
    MR_Word InitObjects_40;
    MR_Word DepsResult2_41;
    MR_Word ObjectsToCheck_42;
    MR_Word ExtraObjStatus_44;
    MR_Word DepsResult3_45;
    MR_Word BuildDepsSuccess_46;
    MR_Word ExtraObjectTimestamps_47;
    MR_Word ExtraObjectDepsResult_48;
    MR_Word STATE_VARIABLE_Info_82_82;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_Word Var_95;
    MR_Word STATE_VARIABLE_Info_96_96;
    MR_Word Var_98;
    MR_String Var_99;
    MR_Box conv4_STATE_VARIABLE_Info_88_88;
    MR_Box conv3_STATE_VARIABLE_IO_89_89;
    MR_Box conv8_STATE_VARIABLE_Info_96_96;
    MR_Box conv7_STATE_VARIABLE_IO_97_97;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_18, (MR_Integer) 566, &LinkObjects_33);
    libs__globals__set_option_4_p_0((MR_Integer) 566, (MR_Word) (MR_mkword(MR_mktag(3), &make__program_target_scalar_common_1[51])), Globals_18, &NoLinkObjsGlobals_34);
    AllModulesList_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_23);
    switch (FileType_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 8:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          DepsResult2_41 = BuildDepsResult_28;
          InitObjects_40 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_82_82 = STATE_VARIABLE_Info_0_72;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word InitObjectResult1_38;

          backend_libs__compile_target_code__make_erlang_program_init_file_7_p_0(NoLinkObjsGlobals_34, ErrorStream_29, MainModuleName_19, AllModulesList_35, &InitObjectResult1_38);
          if ((InitObjectResult1_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            DepsResult2_41 = (MR_Integer) 2;
            InitObjects_40 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_82_82 = STATE_VARIABLE_Info_0_72;
          }
          else
          {
            MR_String InitObject_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitObjectResult1_38, (MR_Integer) 0))));
            MR_Word Var_83;
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 1))));
            MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 0))));
            MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 2))));
            MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 3))));
            MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 4))));
            MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 5))));
            MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 6))));
            MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 7))));
            MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 8))));
            MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 9))));
            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 10))));
            MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 11))));
            MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 12))));
            MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 14))));
            MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 15))));
            MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 16))));
            MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 17))));
            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 18))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));

            Var_83 = mercury__map__delete_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), Var_84, ((MR_Box) (InitObject_39)));
            {
              STATE_VARIABLE_Info_82_82 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 0) = ((MR_Box) (Var_160));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 2) = ((MR_Box) (Var_161));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 3) = ((MR_Box) (Var_162));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 4) = ((MR_Box) (Var_163));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 5) = ((MR_Box) (Var_164));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 6) = ((MR_Box) (Var_165));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 7) = ((MR_Box) (Var_166));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 8) = ((MR_Box) (Var_167));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 9) = ((MR_Box) (Var_168));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 10) = ((MR_Box) (Var_169));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 11) = ((MR_Box) (Var_170));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 12) = ((MR_Box) (Var_171));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 13) = (MR_Box) (packed_word_0);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 14) = ((MR_Box) (Var_174));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 15) = ((MR_Box) (Var_175));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 16) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 17) = ((MR_Box) (Var_177));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 18) = ((MR_Box) (Var_178));
            }
            {
              InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InitObjects_40, 0) = ((MR_Box) (InitObject_39));
              MR_hl_field(MR_mktag(1), InitObjects_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            DepsResult2_41 = BuildDepsResult_28;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word InitObjectResult1_447;

          backend_libs__compile_target_code__make_init_obj_file_7_p_0(NoLinkObjsGlobals_34, ErrorStream_29, MainModuleName_19, AllModulesList_35, &InitObjectResult1_447);
          if ((InitObjectResult1_447 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            DepsResult2_41 = (MR_Integer) 2;
            InitObjects_40 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_82_82 = STATE_VARIABLE_Info_0_72;
          }
          else
          {
            MR_String InitObject_356 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitObjectResult1_447, (MR_Integer) 0))));
            MR_Word Var_357;
            MR_Word Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 1))));
            MR_Word Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 0))));
            MR_Word Var_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 2))));
            MR_Word Var_362 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 3))));
            MR_Word Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 4))));
            MR_Word Var_364 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 5))));
            MR_Word Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 6))));
            MR_Word Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 7))));
            MR_Word Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 8))));
            MR_Word Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 9))));
            MR_Word Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 10))));
            MR_Word Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 11))));
            MR_Word Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 12))));
            MR_Word Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 14))));
            MR_Word Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 15))));
            MR_Word Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 16))));
            MR_Integer Var_377 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 17))));
            MR_Word Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 18))));
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));

            Var_357 = mercury__map__delete_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), Var_358, ((MR_Box) (InitObject_356)));
            {
              STATE_VARIABLE_Info_82_82 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 0) = ((MR_Box) (Var_360));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 1) = ((MR_Box) (Var_357));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 2) = ((MR_Box) (Var_361));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 3) = ((MR_Box) (Var_362));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 4) = ((MR_Box) (Var_363));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 5) = ((MR_Box) (Var_364));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 6) = ((MR_Box) (Var_365));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 7) = ((MR_Box) (Var_366));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 8) = ((MR_Box) (Var_367));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 9) = ((MR_Box) (Var_368));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 10) = ((MR_Box) (Var_369));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 11) = ((MR_Box) (Var_370));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 12) = ((MR_Box) (Var_371));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 14) = ((MR_Box) (Var_374));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 15) = ((MR_Box) (Var_375));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 16) = ((MR_Box) (Var_376));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 17) = ((MR_Box) (Var_377));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, 18) = ((MR_Box) (Var_378));
            }
            {
              InitObjects_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InitObjects_40, 0) = ((MR_Box) (InitObject_356));
              MR_hl_field(MR_mktag(1), InitObjects_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            DepsResult2_41 = BuildDepsResult_28;
          }
        }
        break;
    }
    ObjectsToCheck_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_40, LinkObjects_33);
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
    }
    Var_87 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[19]), ObjectsToCheck_42);
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Var_87, &ExtraObjStatus_44, ((MR_Box) (STATE_VARIABLE_Info_82_82)), &conv4_STATE_VARIABLE_Info_88_88, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_89_89);
    STATE_VARIABLE_Info_88_88 = ((MR_Word) (conv4_STATE_VARIABLE_Info_88_88));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) ((MR_Integer) 3)), ExtraObjStatus_44);
    if (succeeded)
      DepsResult3_45 = (MR_Integer) 2;
    else
      DepsResult3_45 = DepsResult2_41;
    succeeded = (DepsResult3_45 == (MR_Integer) 2);
    if (succeeded)
      BuildDepsSuccess_46 = (MR_Integer) 0;
    else
      BuildDepsSuccess_46 = (MR_Integer) 1;
    Var_99 = mercury__dir__this_directory_0_f_0();
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&make__program_target_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_3));
      MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (Var_98));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_95, ObjectsToCheck_42, &ExtraObjectTimestamps_47, ((MR_Box) (STATE_VARIABLE_Info_88_88)), &conv8_STATE_VARIABLE_Info_96_96, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_97_97);
    STATE_VARIABLE_Info_96_96 = ((MR_Word) (conv8_STATE_VARIABLE_Info_96_96));
    make__dependencies__check_dependency_timestamps_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NoLinkObjsGlobals_34, OutputFileName_21, MaybeTimestamp_22, BuildDepsSuccess_46, ObjectsToCheck_42, (MR_Word) (&make__program_target_scalar_common_2[20]), ExtraObjectTimestamps_47, &ExtraObjectDepsResult_48);
    switch (DepsSuccess_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          make__util__file_error_4_p_0(STATE_VARIABLE_Info_96_96, OutputFileName_21);
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_96_96;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DepsResult_494;

          switch (DepsResult3_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              DepsResult_494 = DepsResult3_45;
              break;
            case (MR_Integer) 1:
              DepsResult_494 = DepsResult3_45;
              break;
            case (MR_Integer) 0:
              DepsResult_494 = ExtraObjectDepsResult_48;
              break;
          }
          switch (DepsResult_494) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                make__util__file_error_4_p_0(STATE_VARIABLE_Info_96_96, OutputFileName_21);
                *Succeeded_30 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_96_96;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ExtraForeignFiles_60;
                MR_Word ForeignObjects_61;
                MR_String ObjExtToUse_65;
                MR_Word ObjList_66;
                MR_Word AllObjects_67;
                MR_Word CmdLineTargets0_68;
                MR_Word CmdLineTargets_69;
                MR_Word Var_104;
                MR_Word STATE_VARIABLE_Info_105_105;
                MR_Word Var_123;
                MR_Word Var_126;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word STATE_VARIABLE_Info_135_135;
                MR_Word Var_199;
                MR_Word Var_200;
                MR_Word Var_201;
                MR_Word Var_202;
                MR_Word Var_203;
                MR_Word Var_204;
                MR_Word Var_205;
                MR_Word Var_206;
                MR_Word Var_207;
                MR_Word Var_208;
                MR_Word Var_209;
                MR_Word Var_210;
                MR_Word Var_211;
                MR_Word Var_212;
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Var_215;
                MR_Integer Var_216;
                MR_Word Var_217;
                MR_Word Var_218;
                MR_Word Var_219;
                MR_Word Var_220;
                MR_Word Var_221;
                MR_Word Var_222;
                MR_Word Var_223;
                MR_Word Var_224;
                MR_Word Var_225;
                MR_Word Var_226;
                MR_Word Var_227;
                MR_Word Var_228;
                MR_Word Var_229;
                MR_Word Var_230;
                MR_Word Var_231;
                MR_Word Var_232;
                MR_Word Var_233;
                MR_Word Var_234;
                MR_Integer Var_236;
                MR_Word Var_237;
                MR_Box conv12_STATE_VARIABLE_Info_105_105;
                MR_Box conv11_STATE_VARIABLE_IO_106_106;
                MR_Box conv15_STATE_VARIABLE_IO_127_127;

                make__util__maybe_make_linked_target_message_4_p_0(NoLinkObjsGlobals_34, OutputFileName_21);
                {
                  Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&make__program_target_scalar_common_5[13]));
                  MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Globals_18));
                  MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) (PIC_26));
                }
                mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, AllModulesList_35, &ExtraForeignFiles_60, ((MR_Box) (STATE_VARIABLE_Info_96_96)), &conv12_STATE_VARIABLE_Info_105_105, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_106_106);
                STATE_VARIABLE_Info_105_105 = ((MR_Word) (conv12_STATE_VARIABLE_Info_105_105));
                Var_123 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ExtraForeignFiles_60);
                ForeignObjects_61 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[21]), Var_123);
                switch (CompilationTarget_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(NoLinkObjsGlobals_34, PIC_26, &ObjExtToUse_65);
                    break;
                  case (MR_Integer) 1:
                    ObjExtToUse_65 = (MR_String) ".cs";
                    break;
                  case (MR_Integer) 3:
                    {
                      libs__globals__lookup_string_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 554, &ObjExtToUse_65);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      libs__globals__lookup_string_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 544, &ObjExtToUse_65);
                    }
                    break;
                }
                {
                  Var_126 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
                  MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_7));
                  MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), Var_126, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_126, 5) = ((MR_Box) (ObjExtToUse_65));
                }
                mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_126, ObjModules_24, &ObjList_66, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_127_127);
                Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjects_61, LinkObjects_33);
                Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjList_66, Var_130);
                AllObjects_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_40, Var_129);
                {
                  Var_131 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&make__program_target_scalar_common_5[14]));
                  MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (make__program_target__build_linked_target_2_17_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (NoLinkObjsGlobals_34));
                  MR_hl_field(MR_mktag(0), Var_131, 4) = ((MR_Box) (ErrorStream_29));
                  MR_hl_field(MR_mktag(0), Var_131, 5) = ((MR_Box) (FileType_20));
                  MR_hl_field(MR_mktag(0), Var_131, 6) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), Var_131, 7) = ((MR_Box) (AllObjects_67));
                }
                libs__process_util__call_in_forked_process_4_p_0(Var_131, Succeeded_30);
                Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 0))));
                Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 1))));
                Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 2))));
                Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 3))));
                Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 4))));
                Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 5))));
                Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 6))));
                Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 7))));
                Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 8))));
                Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 9))));
                Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 10))));
                Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 11))));
                Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 12))));
                Var_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
                Var_213 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 13))) & (MR_Integer) 1);
                Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 14))));
                Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 15))));
                CmdLineTargets0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 16))));
                Var_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 17))));
                Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_105_105, (MR_Integer) 18))));
                {
                  Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_134, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (Var_134));
                }
                mercury__set__delete_3_p_0((MR_Word) (&make__program_target_scalar_common_2[2]), ((MR_Box) (Var_133)), CmdLineTargets0_68, &CmdLineTargets_69);
                Var_218 = Var_199;
                Var_219 = Var_200;
                Var_220 = Var_201;
                Var_221 = Var_202;
                Var_222 = Var_203;
                Var_223 = Var_204;
                Var_224 = Var_205;
                Var_225 = Var_206;
                Var_226 = Var_207;
                Var_227 = Var_208;
                Var_228 = Var_209;
                Var_229 = Var_210;
                Var_230 = Var_211;
                Var_231 = Var_212;
                Var_232 = Var_213;
                Var_233 = Var_214;
                Var_234 = Var_215;
                Var_236 = Var_216;
                Var_237 = Var_217;
                {
                  STATE_VARIABLE_Info_135_135 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 0) = ((MR_Box) (Var_218));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 1) = ((MR_Box) (Var_219));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 2) = ((MR_Box) (Var_220));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 3) = ((MR_Box) (Var_221));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 4) = ((MR_Box) (Var_222));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 5) = ((MR_Box) (Var_223));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 6) = ((MR_Box) (Var_224));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 7) = ((MR_Box) (Var_225));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 8) = ((MR_Box) (Var_226));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 9) = ((MR_Box) (Var_227));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 10) = ((MR_Box) (Var_228));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 11) = ((MR_Box) (Var_229));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 12) = ((MR_Box) (Var_230));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 13) = (MR_Box) (((((MR_Unsigned) (Var_231) << 1)) | (MR_Unsigned) (Var_232)));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 14) = ((MR_Box) (Var_233));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 15) = ((MR_Box) (Var_234));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 16) = ((MR_Box) (CmdLineTargets_69));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 17) = ((MR_Box) (Var_236));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_135_135, 18) = ((MR_Box) (Var_237));
                }
                switch (*Succeeded_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      make__util__file_error_4_p_0(STATE_VARIABLE_Info_135_135, OutputFileName_21);
                      *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_135_135;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FileTimestamps_71;

                      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), ((MR_Box) (OutputFileName_21)), Var_219, &FileTimestamps_71);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_Info_73 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_218));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_71));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_220));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_221));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_222));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_223));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_224));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_225));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_226));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_227));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_228));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_229));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_230));
                        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (((((MR_Unsigned) (Var_231) << 1)) | (MR_Unsigned) (Var_232)));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_233));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_234));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (CmdLineTargets_69));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_236));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_237));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word MsgTarget_51;
                MR_Word UseGradeSubdirs_52;
                MR_Word Var_138;

                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = (MR_Box) ((MR_Unsigned) (FileType_20));
                }
                {
                  MsgTarget_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MsgTarget_51, 0) = ((MR_Box) (MainModuleName_19));
                  MR_hl_field(MR_mktag(0), MsgTarget_51, 1) = ((MR_Box) (Var_138));
                }
                libs__globals__lookup_bool_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 667, &UseGradeSubdirs_52);
                switch (UseGradeSubdirs_52) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      make__util__maybe_warn_up_to_date_target_6_p_0(NoLinkObjsGlobals_34, MsgTarget_51, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_73);
                      *Succeeded_30 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MadeSymlinkOrCopy_53;

                      backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(NoLinkObjsGlobals_34, ErrorStream_29, FileType_20, MainModuleName_19, Succeeded_30, &MadeSymlinkOrCopy_53);
                      switch (MadeSymlinkOrCopy_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          make__util__maybe_warn_up_to_date_target_6_p_0(NoLinkObjsGlobals_34, MsgTarget_51, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_73);
                          break;
                        case (MR_Integer) 1:
                          {
                            make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(NoLinkObjsGlobals_34, MsgTarget_51);
                            *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_96_96;
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

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_32;

    conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__379__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_8_p_0(
  MR_Word Globals_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * ObjectTargets_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_Word CompilationTarget_15;
    MR_Word MaybeImports_16;
    MR_Word Imports_17;

    libs__globals__get_target_2_p_0(Globals_9, &CompilationTarget_15);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_11, &MaybeImports_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    if ((MaybeImports_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "make.program_target", (MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/8", (MR_String) "unknown imports");
        return;
      }
    }
    else
      Imports_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImports_16, (MR_Integer) 0))));
    switch (CompilationTarget_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FactObjectTargets_19;
          MR_Word Var_30;
          MR_Word Var_35;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PIC_10));
            MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (ModuleName_11));
          }
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 11))));
          FactObjectTargets_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_30, Var_35);
          *ObjectTargets_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FactObjectTargets_19, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *ObjectTargets_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__compare_paired_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Res_8)
{
  {
    MR_Word TimeA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ModuleA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TimeB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ModuleB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TimeRes_9;

    libs__timestamp____Compare____timestamp_0_0(&TimeRes_9, TimeA_4, TimeB_6);
    switch (TimeRes_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Res_8 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mdbcomp__sym_name____Compare____sym_name_0_0(Res_8, ModuleA_5, ModuleB_7);
        break;
      case (MR_Integer) 2:
        *Res_8 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word Module_9,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word Timestamp_10;
    MR_Word Target_14;
    MR_Word MaybeTimestamp_15;

    {
      Target_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Target_14, 0) = ((MR_Box) (Module_9));
      MR_hl_field(MR_mktag(0), Target_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, Target_14, &MaybeTimestamp_15, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    if (((MR_tag((MR_Word) MaybeTimestamp_15)) == (MR_Integer) 1))
      Timestamp_10 = libs__timestamp__oldest_timestamp_0_f_0();
    else
      Timestamp_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTimestamp_15, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Module_9));
    }
  }
}

static void MR_CALL 
make__program_target__get_target_modules_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_TargetModules_0_16,
  MR_Word * STATE_VARIABLE_TargetModules_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeImports_14;
    MR_Word Imports_15;
    MR_Word Var_51;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeImports_14, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
    succeeded = (MaybeImports_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Imports_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImports_14, (MR_Integer) 0))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_51);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TargetModules_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TargetModules_0_16));
      }
    else
      *STATE_VARIABLE_TargetModules_17 = STATE_VARIABLE_TargetModules_0_16;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word LinkedTargetFile_9,
  MR_Word Globals_10,
  MR_Word HeadVar__3_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(LinkedTargetFile_9, Globals_10, Succeeded_12, STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_STATE_VARIABLE_Info_16;

    make__program_target__linked_target_cleanup_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv18_STATE_VARIABLE_Info_16);
    *wrapper_arg_2 = ((MR_Box) (conv18_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__4_4;
    MR_Word conv16_HeadVar__6_6;

    make__util__build_with_output_redirect_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv17_HeadVar__4_4, ((MR_Word) (wrapper_arg_2)), &conv16_HeadVar__6_6);
    *wrapper_arg_1 = ((MR_Box) (conv17_HeadVar__4_4));
    *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_Succeeded_30;
    MR_Word conv14_STATE_VARIABLE_Info_38;

    make__program_target__build_linked_target_17_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 11)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 12)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_Succeeded_30, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_Info_38);
    *wrapper_arg_3 = ((MR_Box) (conv15_Succeeded_30));
    *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_Info_38));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__3_3;
    MR_Word conv10_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__3_3;
    MR_Word conv8_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_3;
    MR_Word conv6_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv6_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv6_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1(
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
    MR_Word conv1_ObjectTargets_12;
    MR_Word conv0_STATE_VARIABLE_Info_22;

    make__program_target__get_foreign_object_targets_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_22);
    *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word LinkedTargetFile_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 0))));
    MR_Word FileType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 15);
    MR_Word DepsSuccess_17;
    MR_Word AllModules_18;
    MR_Word KeepGoing_19;
    MR_Word STATE_VARIABLE_Info_46_46;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_10, MainModuleName_15, &DepsSuccess_17, &AllModules_18, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_46_46);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 645, &KeepGoing_19);
    succeeded = (DepsSuccess_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_46_46;
    }
    else
    {
      MR_Word PIC_20;
      MR_Word CompilationTarget_21;
      MR_Word IntermediateTargetType_22;
      MR_Word ObjectTargetType_23;
      MR_Word AllModulesList_24;
      MR_Word ObjModulesAlpha_25;
      MR_Word ObjModules_26;
      MR_Word ObjModulesNonnested_27;
      MR_Word IntermediateTargetsNonnested_28;
      MR_Word ObjTargets_29;
      MR_Word ForeignObjTargetsList_30;
      MR_Word ForeignObjTargets_31;
      MR_Word IntsSucceeded_32;
      MR_Word BuildDepsSucceeded_33;
      MR_String OutputFileName_38;
      MR_Word MaybeTimestamp_39;
      MR_Word BuildDepsResult_40;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word STATE_VARIABLE_Info_51_51;
      MR_Word STATE_VARIABLE_Info_53_53;
      MR_Word Var_55;
      MR_Word STATE_VARIABLE_Info_56_56;
      MR_Word STATE_VARIABLE_Info_58_58;
      MR_Word STATE_VARIABLE_Info_75_75;
      MR_Word Var_78;
      MR_Word STATE_VARIABLE_Info_79_79;
      MR_String Var_81;
      MR_Word STATE_VARIABLE_Info_83_83;
      MR_Box conv3_STATE_VARIABLE_Info_56_56;
      MR_Box conv2_STATE_VARIABLE_IO_57_57;

      backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_10, FileType_16, &PIC_20);
      libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_21);
      switch (CompilationTarget_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 36U);
            {
              ObjectTargetType_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ObjectTargetType_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_20));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 40U);
            ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 40U);
          }
          break;
        case (MR_Integer) 3:
          {
            IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 56U);
            ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 60U);
          }
          break;
        case (MR_Integer) 2:
          {
            IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 44U);
            ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 48U);
          }
          break;
      }
      AllModulesList_24 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_18);
      make__program_target__get_target_modules_8_p_0(Globals_10, IntermediateTargetType_22, AllModulesList_24, &ObjModulesAlpha_25, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_49_49);
      make__program_target__order_target_modules_7_p_0(Globals_10, ObjModulesAlpha_25, &ObjModules_26, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
      make__dependencies__remove_nested_modules_7_p_0(Globals_10, ObjModules_26, &ObjModulesNonnested_27, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
      IntermediateTargetsNonnested_28 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_27, IntermediateTargetType_22);
      ObjTargets_29 = make__util__make_dependency_list_2_f_0(ObjModules_26, ObjectTargetType_23);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_5[10]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Globals_10));
        MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (PIC_20));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, ObjModules_26, &ForeignObjTargetsList_30, ((MR_Box) (STATE_VARIABLE_Info_53_53)), &conv3_STATE_VARIABLE_Info_56_56, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_57_57);
      STATE_VARIABLE_Info_56_56 = ((MR_Word) (conv3_STATE_VARIABLE_Info_56_56));
      ForeignObjTargets_31 = mercury__list__condense_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ForeignObjTargetsList_30);
      make__program_target__make_all_interface_files_7_p_0(Globals_10, AllModulesList_24, &IntsSucceeded_32, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
      succeeded = (IntsSucceeded_32 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_19 == (MR_Integer) 0);
      if (succeeded)
      {
        BuildDepsSucceeded_33 = (MR_Integer) 0;
        STATE_VARIABLE_Info_75_75 = STATE_VARIABLE_Info_58_58;
      }
      else
      {
        MR_Word BuildDepsSucceeded0_34;
        MR_Word BuildDepsSucceeded1_37;
        MR_Word STATE_VARIABLE_Info_61_61;
        MR_Word STATE_VARIABLE_Info_69_69;

        make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_19, (MR_Word) (&make__program_target_scalar_common_2[15]), Globals_10, IntermediateTargetsNonnested_28, &BuildDepsSucceeded0_34, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_61_61);
        switch (BuildDepsSucceeded0_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              BuildDepsSucceeded1_37 = (MR_Integer) 0;
              STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_61_61;
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = (ObjectTargetType_23 == (MR_Word) ((MR_Unsigned) 48U));
              if (succeeded)
              {
                MR_Word BuildJavaSucceeded_35;
                MR_Word STATE_VARIABLE_Info_63_63;

                make__program_target__make_java_files_8_p_0(Globals_10, MainModuleName_15, ObjModules_26, &BuildJavaSucceeded_35, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_63_63);
                switch (BuildJavaSucceeded_35) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      BuildDepsSucceeded1_37 = (MR_Integer) 0;
                      STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_63_63;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NoRebuildGlobals_36;

                      libs__globals__set_option_4_p_0((MR_Integer) 644, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[1])), Globals_10, &NoRebuildGlobals_36);
                      make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_19, (MR_Word) (&make__program_target_scalar_common_2[16]), NoRebuildGlobals_36, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_69_69);
                    }
                    break;
                }
              }
              else
              {
                make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_19, (MR_Word) (&make__program_target_scalar_common_2[17]), Globals_10, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_69_69);
              }
            }
            break;
        }
        switch (BuildDepsSucceeded1_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              BuildDepsSucceeded_33 = (MR_Integer) 0;
              STATE_VARIABLE_Info_75_75 = STATE_VARIABLE_Info_69_69;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv13_STATE_VARIABLE_Info_75_75;
              MR_Box conv12_STATE_VARIABLE_IO_76_76;

              make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_19, (MR_Word) (&make__program_target_scalar_common_2[18]), Globals_10, ForeignObjTargets_31, &BuildDepsSucceeded_33, ((MR_Box) (STATE_VARIABLE_Info_69_69)), &conv13_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_76_76);
              STATE_VARIABLE_Info_75_75 = ((MR_Word) (conv13_STATE_VARIABLE_Info_75_75));
            }
            break;
        }
      }
      make__util__linked_target_file_name_6_p_0(Globals_10, MainModuleName_15, FileType_16, &OutputFileName_38);
      Var_81 = mercury__dir__this_directory_0_f_0();
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      make__util__get_file_timestamp_7_p_0(Var_78, OutputFileName_38, &MaybeTimestamp_39, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_79_79);
      make__dependencies__check_dependencies_10_p_0(Globals_10, OutputFileName_38, MaybeTimestamp_39, BuildDepsSucceeded_33, ObjTargets_29, &BuildDepsResult_40, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_83_83);
      succeeded = (DepsSuccess_17 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (BuildDepsResult_40 != (MR_Integer) 2);
      }
      if (succeeded)
      {
        MR_Word VeryVerbose_41;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_90;
        MR_Box conv19_STATE_VARIABLE_Info_43;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 61, &VeryVerbose_41);
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&make__program_target_scalar_common_15[0]));
          MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_6));
          MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (MainModuleName_15));
          MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (FileType_16));
          MR_hl_field(MR_mktag(0), Var_90, 5) = ((MR_Box) (OutputFileName_38));
          MR_hl_field(MR_mktag(0), Var_90, 6) = ((MR_Box) (MaybeTimestamp_39));
          MR_hl_field(MR_mktag(0), Var_90, 7) = ((MR_Box) (AllModules_18));
          MR_hl_field(MR_mktag(0), Var_90, 8) = ((MR_Box) (ObjModules_26));
          MR_hl_field(MR_mktag(0), Var_90, 9) = ((MR_Box) (CompilationTarget_21));
          MR_hl_field(MR_mktag(0), Var_90, 10) = ((MR_Box) (PIC_20));
          MR_hl_field(MR_mktag(0), Var_90, 11) = ((MR_Box) (DepsSuccess_17));
          MR_hl_field(MR_mktag(0), Var_90, 12) = ((MR_Box) (BuildDepsResult_40));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_5[11]));
          MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_7));
          MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (MainModuleName_15));
          MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (Var_90));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&make__program_target_scalar_common_5[12]));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_51_93_95_48_8_p_0_8));
          MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (MainModuleName_15));
          MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) (FileType_16));
          MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) (OutputFileName_38));
        }
        libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_41, Var_86, Var_87, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_83_83)), &conv19_STATE_VARIABLE_Info_43);
        *STATE_VARIABLE_Info_43 = ((MR_Word) (conv19_STATE_VARIABLE_Info_43));
      }
      else
      {
        *Succeeded_12 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_83_83;
      }
    }
  }
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Timestamps_9;

    make__program_target__delete_java_class_timestamps_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Timestamps_9);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Timestamps_9));
  }
}

static void MR_CALL 
make__program_target__make_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ObjModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word OutOfDateModules_15;
    MR_Word STATE_VARIABLE_Info_24_24;

    make__program_target__out_of_date_java_modules_7_p_0(Globals_9, ObjModules_11, &OutOfDateModules_15, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
    if ((OutOfDateModules_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_12 = (MR_Integer) 1;
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_24_24;
    }
    else
    {
      MR_Word Timestamps0_18;
      MR_Word Timestamps_19;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word Var_29;
      MR_Box conv1_Timestamps_19;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Integer Var_68;
      MR_Word Var_69;
      MR_Unsigned packed_word_1;

      make__program_target__build_java_files_8_p_0(Globals_9, MainModuleName_10, OutOfDateModules_15, Succeeded_12, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_26_26);
      Timestamps0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
      Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]));
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[3]), (MR_Word) (&make__program_target_scalar_common_2[14]), Timestamps0_18, ((MR_Box) (Var_29)), &conv1_Timestamps_19);
      Timestamps_19 = ((MR_Word) (conv1_Timestamps_19));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16))));
      Var_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Timestamps_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_69));
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Succeeded_12;
    MR_Word conv2_STATE_VARIABLE_Info_16;

    make__program_target__build_java_files_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Succeeded_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_Succeeded_12));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__build_java_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word JavaFiles_15;
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    make__util__verbose_make_msg_4_p_0(Globals_9, (MR_Word) (&make__program_target_scalar_common_14[0]));
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&make__program_target_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) ((MR_String) ".java"));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ModuleNames_11, &JavaFiles_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make__program_target_scalar_common_5[9]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__program_target__build_java_files_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (JavaFiles_15));
    }
    make__util__build_with_output_redirect_8_p_0(Globals_9, MainModuleName_10, Var_27, Succeeded_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__program_target__out_of_date_java_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word ObjModules_9,
  MR_Word * OutOfDateModules_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;

    if ((ObjModules_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *OutOfDateModules_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ObjModules_9, (MR_Integer) 0))));
      MR_Word ModuleNames_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ObjModules_9, (MR_Integer) 1))));
      MR_Word OutOfDateModules0_15;
      MR_Word JavaTarget_16;
      MR_Word ClassTarget_17;
      MR_Word MaybeJavaTimestamp_18;
      MR_Word MaybeClassTimestamp_19;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word JavaTimestamp_20;
      MR_Word ClassTimestamp_21;
      MR_Word Var_37;

      make__program_target__out_of_date_java_modules_7_p_0(Globals_8, ModuleNames_14, &OutOfDateModules0_15, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
      {
        JavaTarget_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), JavaTarget_16, 0) = ((MR_Box) (ModuleName_13));
        MR_hl_field(MR_mktag(0), JavaTarget_16, 1) = ((MR_Box) ((MR_Unsigned) 44U));
      }
      {
        ClassTarget_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassTarget_17, 0) = ((MR_Box) (ModuleName_13));
        MR_hl_field(MR_mktag(0), ClassTarget_17, 1) = ((MR_Box) ((MR_Unsigned) 48U));
      }
      make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, JavaTarget_16, &MaybeJavaTimestamp_18, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_31_31);
      make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, ClassTarget_17, &MaybeClassTimestamp_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_23);
      succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        JavaTimestamp_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeJavaTimestamp_18, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          ClassTimestamp_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeClassTimestamp_19, (MR_Integer) 0))));
          libs__timestamp____Compare____timestamp_0_0(&Var_37, ClassTimestamp_21, JavaTimestamp_20);
          succeeded = (Var_37 != (MR_Integer) 1);
        }
      }
      if (succeeded)
        *OutOfDateModules_10 = OutOfDateModules0_15;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutOfDateModules_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutOfDateModules0_15));
        }
    }
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_40;

    make__program_target__IntroducedFrom__pred__order_target_modules__316__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_40);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_40));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Res_8;

    make__program_target__compare_paired_modules_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Res_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_Res_8));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0_1(
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
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_STATE_VARIABLE_Info_18;

    make__program_target__pair_module_with_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
make__program_target__order_target_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules_9,
  MR_Word * OrderedModules_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word OrderByTimestamp_13;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 672, &OrderByTimestamp_13);
    switch (OrderByTimestamp_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *OrderedModules_10 = Modules_9;
          *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PairedModules_14;
          MR_Word OrderedPairs_15;
          MR_Word Var_21;
          MR_Box conv3_STATE_VARIABLE_Info_17;
          MR_Box conv2_STATE_VARIABLE_IO_19;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__program_target__order_target_modules_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Globals_8));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Modules_9, &PairedModules_14, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
          *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
          mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__program_target_scalar_common_2[12]), PairedModules_14, &OrderedPairs_15);
          mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[13]), OrderedPairs_15, OrderedModules_10);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Info_12;

    make__program_target__make_module_realclean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_16;

    make__program_target__make_module_clean_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__3_3;
    MR_Word conv8_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Succeeded_12;
    MR_Word conv6_STATE_VARIABLE_Info_17;

    make__program_target__build_library_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv7_Succeeded_12, ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_17);
    *wrapper_arg_1 = ((MR_Box) (conv7_Succeeded_12));
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Succeeded_14;
    MR_Word conv4_STATE_VARIABLE_Info_20;

    make__program_target__build_analysis_files_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv5_Succeeded_14, ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_20);
    *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_14));
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_160;
    MR_Word conv2_HeadVar__7_162;

    make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv3_HeadVar__5_160, ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__7_162);
    *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__5_160));
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__7_162));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_11,
  MR_Word * Succeeded_13,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word MainModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RebuildModuleDeps_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word Succeeded0_17;
    MR_Word AllModulesSet_18;
    MR_Word AllModules_19;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Integer Var_143;
    MR_Word Var_144;

    if ((TargetType_10 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_10 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 8))));
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 9))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 10))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 11))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 12))));
      MR_Word Var_119 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 14))));
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 15))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 16))));
      MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 17))));
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 18))));

      {
        STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 11) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 12) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 13) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_119)));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 14) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 15) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 16) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 17) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 18) = ((MR_Box) (Var_124));
      }
    }
    else
      STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_27;
    make__dependencies__find_reachable_local_modules_8_p_0(Globals_11, MainModuleName_9, &Succeeded0_17, &AllModulesSet_18, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
    Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 0))));
    Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 1))));
    Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 2))));
    Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 3))));
    Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 4))));
    Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 5))));
    Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 6))));
    Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 7))));
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 8))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 9))));
    Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 10))));
    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 11))));
    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 12))));
    Var_139 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 13))) & (MR_Integer) 1);
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 14))));
    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 15))));
    Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 16))));
    Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 17))));
    Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 18))));
    {
      STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 9) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 10) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 11) = ((MR_Box) (Var_136));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 12) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 13) = (MR_Box) (((((MR_Unsigned) (RebuildModuleDeps_16) << 1)) | (MR_Unsigned) (Var_139)));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 14) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 15) = ((MR_Box) (Var_141));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 16) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 17) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 18) = ((MR_Box) (Var_144));
    }
    AllModules_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_18);
    switch (MR_tag((MR_Word) TargetType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_75;
              MR_Word STATE_VARIABLE_Info_76_76;
              MR_Box conv14_STATE_VARIABLE_Info_76_76;
              MR_Box conv13_STATE_VARIABLE_IO_77_77;

              *Succeeded_13 = (MR_Integer) 1;
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
                MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_6));
                MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Globals_11));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, AllModules_19, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv14_STATE_VARIABLE_Info_76_76, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_77_77);
              STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv14_STATE_VARIABLE_Info_76_76));
              make__program_target__remove_init_files_7_p_0(Globals_11, (MR_Integer) 61, MainModuleName_9, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Info_70_70;
              MR_Word Var_72;
              MR_Box conv17_STATE_VARIABLE_Info_28;
              MR_Box conv16_STATE_VARIABLE_IO_30;

              *Succeeded_13 = (MR_Integer) 1;
              make__program_target__make_main_module_realclean_6_p_0(Globals_11, MainModuleName_9, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_70_70);
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&make__program_target_scalar_common_9[4]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_7));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Globals_11));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, AllModules_19, ((MR_Box) (STATE_VARIABLE_Info_70_70)), &conv17_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_30);
              *STATE_VARIABLE_Info_28 = ((MR_Word) (conv17_STATE_VARIABLE_Info_28));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_7[3]));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Globals_11));
                MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (MainModuleName_9));
                MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (AllModules_19));
                MR_hl_field(MR_mktag(0), Var_56, 6) = ((MR_Box) (Succeeded0_17));
              }
              make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(Globals_11, MainModuleName_9, AllModules_19, Succeeded0_17, Globals_11, Var_56, Succeeded_13, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word IntSucceeded_25;
              MR_Word STATE_VARIABLE_Info_51_51;

              make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_19, &IntSucceeded_25, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_51_51);
              switch (IntSucceeded_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Succeeded_13 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_51_51;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_53;

                    {
                      Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&make__program_target_scalar_common_5[8]));
                      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_4));
                      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (MainModuleName_9));
                      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (AllModules_19));
                      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Globals_11));
                    }
                    make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(MainModuleName_9, AllModules_19, Globals_11, Globals_11, Var_53, Succeeded_13, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word LibSucceeded_26;
              MR_Word Var_45;
              MR_Word STATE_VARIABLE_Info_46_46;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (MainModuleName_9));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              make__program_target__make_misc_target_7_p_0(Globals_11, Var_45, &LibSucceeded_26, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_46_46);
              switch (LibSucceeded_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Succeeded_13 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_46_46;
                  }
                  break;
                case (MR_Integer) 1:
                  make__program_target__install_library_7_p_0(Globals_11, MainModuleName_9, Succeeded_13, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_28);
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Info_37_37;
              MR_Word TargetModules_83;
              MR_Word KeepGoing_84;

              make__program_target__get_target_modules_8_p_0(Globals_11, (MR_Word) ((MR_Unsigned) 64U), AllModules_19, &TargetModules_83, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37);
              libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 645, &KeepGoing_84);
              succeeded = (Succeeded0_17 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (KeepGoing_84 == (MR_Integer) 0);
              if (succeeded)
              {
                *Succeeded_13 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_37_37;
              }
              else
              {
                MR_Word Var_41;
                MR_Word Succeeded1_81;
                MR_Box conv11_STATE_VARIABLE_Info_28;
                MR_Box conv10_STATE_VARIABLE_IO_30;

                Var_41 = make__util__make_dependency_list_2_f_0(TargetModules_83, (MR_Word) ((MR_Unsigned) 64U));
                make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_84, (MR_Word) (&make__program_target_scalar_common_2[11]), Globals_11, Var_41, &Succeeded1_81, ((MR_Box) (STATE_VARIABLE_Info_37_37)), &conv11_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_30);
                *STATE_VARIABLE_Info_28 = ((MR_Word) (conv11_STATE_VARIABLE_Info_28));
                *Succeeded_13 = mercury__bool__and_2_f_0(Succeeded0_17, Succeeded1_81);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleTargetType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetType_10, (MR_Integer) 0))));
          MR_Word TargetModules_21;
          MR_Word KeepGoing_22;
          MR_Word STATE_VARIABLE_Info_59_59;

          make__program_target__get_target_modules_8_p_0(Globals_11, ModuleTargetType_20, AllModules_19, &TargetModules_21, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_59_59);
          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 645, &KeepGoing_22);
          succeeded = (Succeeded0_17 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_22 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_13 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_59_59;
          }
          else
          {
            MR_Word Succeeded1_23;
            MR_Word STATE_VARIABLE_Info_62_62;

            make__program_target__make_all_interface_files_7_p_0(Globals_11, AllModules_19, &Succeeded1_23, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
            succeeded = (Succeeded1_23 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_22 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_13 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_62_62;
            }
            else
            {
              MR_Word Succeeded2_24;
              MR_Word Var_64;
              MR_Word Var_68;
              MR_Word Var_69;

              Var_68 = make__util__make_dependency_list_2_f_0(TargetModules_21, ModuleTargetType_20);
              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0_2));
                MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Globals_11));
                MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (KeepGoing_22));
                MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (&make__program_target_scalar_common_2[10]));
                MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) (Var_68));
              }
              make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(Globals_11, KeepGoing_22, Var_68, Globals_11, Var_64, &Succeeded2_24, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_28);
              Var_69 = mercury__bool__and_2_f_0(Succeeded0_17, Succeeded1_23);
              *Succeeded_13 = mercury__bool__and_2_f_0(Var_69, Succeeded2_24);
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_13;

    make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word IntermodAnalysis_13;
    MR_Word Caching_14;
    MR_String CacheDir0_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 352, &IntermodAnalysis_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 354, &Caching_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 688, &CacheDir0_15);
    succeeded = (IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (Caching_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (strcmp(CacheDir0_15, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (!(succeeded))
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_28);
        }
      }
    }
    if (succeeded)
      make__program_target__build_library_8_p_0(Var_129, Var_130, Var_131, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    else
    {
      MR_Word Succeeded0_17;
      MR_String CacheDir_18;

      make__program_target__create_analysis_cache_dir_5_p_0(Globals_8, &Succeeded0_17, &CacheDir_18);
      switch (Succeeded0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
            MR_Word VeryVerbose_20;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_101;
            MR_Unsigned packed_word_2;
            MR_Box conv1_STATE_VARIABLE_Info_39_39;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Integer Var_120;
            MR_Word Var_121;
            MR_Unsigned packed_word_3;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CacheDir_18));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
            }
            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_34);
            Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
            Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
            Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (Var_101));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 61, &VeryVerbose_20);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho3_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (CacheDir_18));
            }
            libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_20, P_9, Var_38, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv1_STATE_VARIABLE_Info_39_39);
            STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
            make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_18, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
            Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
            Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
            Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
            Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
            Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 5))));
            Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 6))));
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 7))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 8))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 9))));
            Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 10))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 11))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 12))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
            Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 14))));
            Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 15))));
            Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 16))));
            Var_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 17))));
            Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 18))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigOptionArgs_19));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_121));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_library_8_p_0(
  MR_Word MainModuleName_9,
  MR_Word AllModules_10,
  MR_Word Globals_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Target_15;

    libs__globals__get_target_2_p_0(Globals_11, &Target_15);
    switch (Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StaticSucceeded_38;
          MR_Word SharedLibsSupported_39;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_Info_24_43;

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_42, &StaticSucceeded_38, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_24_43);
          backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_11, &SharedLibsSupported_39);
          switch (StaticSucceeded_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Succeeded_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_24_43;
              }
              break;
            case (MR_Integer) 1:
              switch (SharedLibsSupported_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ErrorStream_41;

                    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_24_43;
                    mercury__io__output_stream_3_p_0(&ErrorStream_41);
                    backend_libs__compile_target_code__make_library_init_file_7_p_0(Globals_11, ErrorStream_41, MainModuleName_9, AllModules_10, Succeeded_12);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_46;
                    MR_Word SharedLibsSucceeded_87;

                    {
                      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (MainModuleName_9));
                      MR_hl_field(MR_mktag(0), Var_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    }
                    make__program_target__make_linked_target_7_p_0(Globals_11, Var_46, &SharedLibsSucceeded_87, STATE_VARIABLE_Info_24_43, STATE_VARIABLE_Info_17);
                    switch (SharedLibsSucceeded_87) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Succeeded_12 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ErrorStream_83;

                          mercury__io__output_stream_3_p_0(&ErrorStream_83);
                          backend_libs__compile_target_code__make_library_init_file_7_p_0(Globals_11, ErrorStream_83, MainModuleName_9, AllModules_10, Succeeded_12);
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
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_61, Succeeded_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Succeeded0_75;
          MR_Word Var_77;

          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (MainModuleName_9));
            MR_hl_field(MR_mktag(0), Var_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 8));
          }
          make__program_target__make_linked_target_7_p_0(Globals_11, Var_77, &Succeeded0_75, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          switch (Succeeded0_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Succeeded_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ErrorStream_76;

                mercury__io__output_stream_3_p_0(&ErrorStream_76);
                backend_libs__compile_target_code__make_erlang_library_init_file_7_p_0(Globals_11, ErrorStream_76, MainModuleName_9, AllModules_10, Succeeded_12);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        make__program_target__build_java_library_7_p_0(Globals_11, MainModuleName_9, Succeeded_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__build_java_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (MainModuleName_9));
      MR_hl_field(MR_mktag(0), Var_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
    }
    make__program_target__make_linked_target_7_p_0(Globals_8, Var_17, Succeeded_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
make__program_target__make_linked_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_12;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__program_target__make_linked_target_1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv1_Succeeded_12, ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_12));
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

void MR_CALL 
make__program_target__make_linked_target_7_p_0(
  MR_Word Globals_8,
  MR_Word LinkedTargetFile_9,
  MR_Word * LinkedTargetSucceeded_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word FileType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_9, (MR_Integer) 1))) & (MR_Integer) 15);
    MR_Word ExtraOptions_15 = ((&make__program_target_vector_common_13[0 + FileType_14]))->make__program_target__vector_common_type_13_0__vct_13_f_0;
    MR_Word LibLinkages_16;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 661, &LibLinkages_16);
    switch (FileType_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "shared")), LibLinkages_16);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_16);
          succeeded = !(succeeded);
        }
        break;
    }
    if (succeeded)
    {
      *LinkedTargetSucceeded_10 = (MR_Integer) 1;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
    else
    {
      MR_Word LibgradeCheck_17;
      MR_Word LibgradeCheckSucceeded_18;

      libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 671, &LibgradeCheck_17);
      switch (LibgradeCheck_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LibgradeCheckSucceeded_18 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          make__program_target__check_libraries_are_installed_4_p_0(Globals_8, &LibgradeCheckSucceeded_18);
          break;
      }
      switch (LibgradeCheckSucceeded_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *LinkedTargetSucceeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_30;

            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_5[7]));
              MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__program_target__make_linked_target_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (LinkedTargetFile_9));
              MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) (ExtraOptions_15));
            }
            make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(Globals_8, LinkedTargetFile_9, ExtraOptions_15, Globals_8, Var_30, LinkedTargetSucceeded_10, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_13;

    make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word IntermodAnalysis_13;
    MR_Word Caching_14;
    MR_String CacheDir0_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 352, &IntermodAnalysis_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 354, &Caching_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 688, &CacheDir0_15);
    succeeded = (IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (Caching_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (strcmp(CacheDir0_15, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (!(succeeded))
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_28);
        }
      }
    }
    if (succeeded)
      make__program_target__make_linked_target_1_8_p_0(Var_129, Var_130, Var_131, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    else
    {
      MR_Word Succeeded0_17;
      MR_String CacheDir_18;

      make__program_target__create_analysis_cache_dir_5_p_0(Globals_8, &Succeeded0_17, &CacheDir_18);
      switch (Succeeded0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
            MR_Word VeryVerbose_20;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_101;
            MR_Unsigned packed_word_2;
            MR_Box conv1_STATE_VARIABLE_Info_39_39;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Integer Var_120;
            MR_Word Var_121;
            MR_Unsigned packed_word_3;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CacheDir_18));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
            }
            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_34);
            Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
            Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
            Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (Var_101));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 61, &VeryVerbose_20);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho4_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (CacheDir_18));
            }
            libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_20, P_9, Var_38, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv1_STATE_VARIABLE_Info_39_39);
            STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
            make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_18, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
            Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
            Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
            Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
            Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
            Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 5))));
            Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 6))));
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 7))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 8))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 9))));
            Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 10))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 11))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 12))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
            Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 14))));
            Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 15))));
            Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 16))));
            Var_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 17))));
            Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 18))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigOptionArgs_19));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_121));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Succeeded_12;
    MR_Word conv2_STATE_VARIABLE_Info_43;

    make__program_target__make_linked_target_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Succeeded_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Info_43);
    *wrapper_arg_3 = ((MR_Box) (conv3_Succeeded_12));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Info_43));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_12;
    MR_Word conv0_STATE_VARIABLE_Info_43;

    make__program_target__make_linked_target_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_43);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_43));
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_8_p_0(
  MR_Word Globals_9,
  MR_Word LinkedTargetFile_10,
  MR_Word ExtraOptions_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LinkedTargetFile_10, (MR_Integer) 0))));
    MR_Word IntermodAnalysis_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 352, &IntermodAnalysis_17);
    switch (IntermodAnalysis_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__make_linked_target_1_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (LinkedTargetFile_10));
          }
          make__util__build_with_module_options_9_p_0(Globals_9, MainModuleName_15, ExtraOptions_11, Var_28, Succeeded_12, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_24;
          MR_Word IntermodAnalysisSucceeded_40;
          MR_Word STATE_VARIABLE_Info_25_41;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (MainModuleName_15));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_51_93_95_48_8_p_0(Var_24, Globals_9, &IntermodAnalysisSucceeded_40, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_25_41);
          switch (IntermodAnalysisSucceeded_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Succeeded_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_25_41;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
                  MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__make_linked_target_1_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (LinkedTargetFile_10));
                }
                make__util__build_with_module_options_9_p_0(Globals_9, MainModuleName_15, ExtraOptions_11, Var_38, Succeeded_12, STATE_VARIABLE_Info_25_41, STATE_VARIABLE_Info_20);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_13;

    make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_131,
  MR_Word Var_132,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word IntermodAnalysis_13;
    MR_Word Caching_14;
    MR_String CacheDir0_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 352, &IntermodAnalysis_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 354, &Caching_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 688, &CacheDir0_15);
    succeeded = (IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (Caching_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (strcmp(CacheDir0_15, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (!(succeeded))
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_28);
        }
      }
    }
    if (succeeded)
      make__program_target__build_analysis_files_9_p_0(Var_129, Var_130, Var_131, Var_132, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    else
    {
      MR_Word Succeeded0_17;
      MR_String CacheDir_18;

      make__program_target__create_analysis_cache_dir_5_p_0(Globals_8, &Succeeded0_17, &CacheDir_18);
      switch (Succeeded0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
            MR_Word VeryVerbose_20;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_101;
            MR_Unsigned packed_word_2;
            MR_Box conv1_STATE_VARIABLE_Info_39_39;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Integer Var_120;
            MR_Word Var_121;
            MR_Unsigned packed_word_3;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CacheDir_18));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
            }
            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_34);
            Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
            Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
            Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (Var_101));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 61, &VeryVerbose_20);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho2_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (CacheDir_18));
            }
            libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_20, P_9, Var_38, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv1_STATE_VARIABLE_Info_39_39);
            STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
            make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_18, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
            Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
            Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
            Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
            Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
            Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 5))));
            Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 6))));
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 7))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 8))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 9))));
            Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 10))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 11))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 12))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
            Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 14))));
            Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 15))));
            Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 16))));
            Var_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 17))));
            Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 18))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigOptionArgs_19));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_121));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_Word AllModules_12,
  MR_Word Succeeded0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word KeepGoing_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 645, &KeepGoing_17);
    succeeded = (Succeeded0_13 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
    else
    {
      MR_Word Succeeded1_18;
      MR_Word STATE_VARIABLE_Info_24_24;

      make__program_target__make_all_interface_files_7_p_0(Globals_10, AllModules_12, &Succeeded1_18, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_24_24);
      succeeded = (Succeeded1_18 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_17 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_14 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_24_24;
      }
      else
        make__program_target__build_analysis_files_1_8_p_0(Globals_10, MainModuleName_11, AllModules_12, Succeeded_14, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_20);
    }
  }
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1042__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_1_8_p_0(
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word TargetModules1_16;
    MR_Word TargetModules_18;
    MR_Word Succeeded0_19;
    MR_Word LocalModulesOpts_20;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_31_31;

    make__program_target__reverse_ordered_modules_3_p_0(Var_28, AllModules_11, &TargetModules1_16);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__program_target_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__program_target__build_analysis_files_1_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (AllModules_11));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_29, TargetModules1_16, &TargetModules_18);
    make__dependencies__make_local_module_id_options_8_p_0(Globals_9, MainModuleName_10, &Succeeded0_19, &LocalModulesOpts_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_31_31);
    switch (Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_31_31;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(Globals_9, TargetModules_18, LocalModulesOpts_20, Succeeded0_19, Succeeded_12, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_22);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_8;

    make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_8);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_8;

    make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_8));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    make__module_target__make_module_target_extra_options_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetModules_13,
  MR_Word LocalModulesOpts_14,
  MR_Word Succeeded0_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19;
    MR_Word Succeeded1_20;
    MR_Integer ReanalysisPasses_21;
    MR_Word ReanalyseSuboptimal_22;
    MR_Word InvalidModules_23;
    MR_Word SuboptimalModules_24;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Box conv3_STATE_VARIABLE_Info_32_32;
    MR_Box conv2_STATE_VARIABLE_IO_33_33;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 645, &KeepGoing_19);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__program_target_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_50_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (LocalModulesOpts_14));
    }
    Var_31 = make__util__make_dependency_list_2_f_0(TargetModules_13, (MR_Word) ((MR_Unsigned) 28U));
    make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_19, Var_30, Globals_11, Var_31, &Succeeded1_20, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
    STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_Info_32_32));
    ReanalysisPasses_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 17))));
    succeeded = (ReanalysisPasses_21 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_22 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_22 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_22, Globals_11, TargetModules_13, &InvalidModules_23, &SuboptimalModules_24);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_23);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Box conv5_STATE_VARIABLE_Info_39_39;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

      make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[8]), InvalidModules_23, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv5_STATE_VARIABLE_Info_39_39);
      STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv5_STATE_VARIABLE_Info_39_39));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_39_39;
      STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_24);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Word STATE_VARIABLE_Info_44_44;
        MR_Integer Var_45;
        MR_Box conv7_STATE_VARIABLE_Info_43_43;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_88;
        MR_Unsigned packed_word_1;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_25;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[9]), SuboptimalModules_24, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv7_STATE_VARIABLE_Info_43_43);
        STATE_VARIABLE_Info_43_43 = ((MR_Word) (conv7_STATE_VARIABLE_Info_43_43));
        Var_45 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_21 - (MR_Unsigned) (MR_Integer) 1);
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 1))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 2))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 3))));
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 4))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 5))));
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 6))));
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 7))));
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 8))));
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 9))));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 10))));
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 11))));
        Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 12))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 13)));
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 14))));
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 15))));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 16))));
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, (MR_Integer) 18))));
        {
          STATE_VARIABLE_Info_44_44 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 1) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 2) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 3) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 4) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 5) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 6) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 7) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 8) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 9) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 10) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 11) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 12) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 13) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 14) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 15) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 16) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 17) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, 18) = ((MR_Box) (Var_88));
        }
        make__util__maybe_reanalyse_modules_message_3_p_0(Globals_11);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_44_44;
        STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
        continue;
      }
      else
      {
        *Succeeded_16 = mercury__bool__and_2_f_0(Succeeded0_15, Succeeded1_20);
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_32_32;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Module_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ModuleStatus_20;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[6]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
      switch (ModuleStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InvalidModules0_22;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, &InvalidModules0_22, HeadVar__5_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InvalidModules0_22));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__3_3 = Modules_16;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SuboptimalModules0_21;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, HeadVar__4_4, &SuboptimalModules0_21);
            switch (ReanalyseSuboptimal_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__5_5 = SuboptimalModules0_21;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SuboptimalModules0_21));
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

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_28;

    make__program_target__IntroducedFrom__pred__reverse_ordered_modules__1111__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_28);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_28));
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_IntDepsGraph_13;
    MR_Word conv1_STATE_VARIABLE_ImplDepsGraph_15;

    make__program_target__add_module_relations_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImplDepsGraph_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntDepsGraph_13));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImplDepsGraph_15));
  }
}

static MR_Box MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ModuleImports_6;

    conv0_ModuleImports_6 = make__program_target__lookup_module_and_imports_in_maybe_map_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ModuleImports_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__program_target__reverse_ordered_modules_3_p_0(
  MR_Word ModuleDeps_4,
  MR_Word Modules0_5,
  MR_Word * Modules_6)
{
  {
    MR_Word ImplDepsGraph_8;
    MR_Word Order0_9;
    MR_Word Order1_10;
    MR_Word Order2_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv4__IntDepsGraph_7;
    MR_Box conv3_ImplDepsGraph_8;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__program_target_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleDeps_4));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__program_target_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (make__program_target__reverse_ordered_modules_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_15));
    }
    Var_13 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_14 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__program_target_scalar_common_1[3]), Var_12, Modules0_5, ((MR_Box) (Var_13)), &conv4__IntDepsGraph_7, ((MR_Box) (Var_14)), &conv3_ImplDepsGraph_8);
    ImplDepsGraph_8 = ((MR_Word) (conv3_ImplDepsGraph_8));
    mercury__digraph__atsort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplDepsGraph_8, &Order0_9);
    mercury__list__reverse_2_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), Order0_9, &Order1_10);
    mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_2[7]), Order1_10, &Order2_11);
    mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Order2_11, Modules_6);
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_13;

    make__program_target__remove_cache_dir_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0(
  MR_Word Var_129,
  MR_Word Var_130,
  MR_Word Var_132,
  MR_Word Globals_8,
  MR_Word P_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word IntermodAnalysis_13;
    MR_Word Caching_14;
    MR_String CacheDir0_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 352, &IntermodAnalysis_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 354, &Caching_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 688, &CacheDir0_15);
    succeeded = (IntermodAnalysis_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (Caching_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (strcmp(CacheDir0_15, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (!(succeeded))
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_28);
        }
      }
    }
    if (succeeded)
      make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0(Var_129, Var_130, Var_132, Succeeded_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    else
    {
      MR_Word Succeeded0_17;
      MR_String CacheDir_18;

      make__program_target__create_analysis_cache_dir_5_p_0(Globals_8, &Succeeded0_17, &CacheDir_18);
      switch (Succeeded0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigOptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
            MR_Word VeryVerbose_20;
            MR_Word STATE_VARIABLE_Info_32_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_38;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_101;
            MR_Unsigned packed_word_2;
            MR_Box conv1_STATE_VARIABLE_Info_39_39;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Integer Var_120;
            MR_Word Var_121;
            MR_Unsigned packed_word_3;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CacheDir_18));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
            }
            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_19, Var_34);
            Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
            Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
            Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 7) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 8) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 9) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 10) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 11) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 12) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 14) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 15) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 16) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 17) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 18) = ((MR_Box) (Var_101));
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 61, &VeryVerbose_20);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__program_target_scalar_common_9[2]));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__program_target__maybe_with_analysis_cache_dir__ho1_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_8));
              MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (CacheDir_18));
            }
            libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_20, P_9, Var_38, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv1_STATE_VARIABLE_Info_39_39);
            STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv1_STATE_VARIABLE_Info_39_39));
            make__program_target__remove_cache_dir_6_p_0(Globals_8, CacheDir_18, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
            Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
            Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
            Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
            Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
            Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 5))));
            Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 6))));
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 7))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 8))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 9))));
            Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 10))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 11))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 12))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 13)));
            Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 14))));
            Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 15))));
            Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 16))));
            Var_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 17))));
            Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 18))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigOptionArgs_19));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_121));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__make_misc_target_builder__792__1__ho5_9_p_0(
  MR_Word Globals_11,
  MR_Word KeepGoing_22,
  MR_Word HeadVar__4_68,
  MR_Word * HeadVar__5_160,
  MR_Word HeadVar__6_161,
  MR_Word * HeadVar__7_162)
{
  {
    make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), KeepGoing_22, (MR_Word) (&make__program_target_scalar_common_2[6]), Globals_11, HeadVar__4_68, HeadVar__5_160, HeadVar__6_161, HeadVar__7_162);
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_6_p_0(
  MR_Word Globals_7,
  MR_String CacheDir_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_11;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (CacheDir_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (make__program_target__remove_cache_dir_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) ((MR_String) "Removing %s\n"));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Var_20));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_7, (MR_Integer) 65, Var_17);
    mercury__io__remove_file_recursively_4_p_0(CacheDir_8, &Var_11);
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__create_analysis_cache_dir_5_p_0(
  MR_Word Globals_6,
  MR_Word * Succeeded_7,
  MR_String * CacheDir_8)
{
  {
    MR_Word MakeRes_10;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word UseGradeSubdirs_42;
    MR_String TargetArch_43;
    MR_Word DirComponents_45;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 667, &UseGradeSubdirs_42);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 685, &TargetArch_43);
    switch (UseGradeSubdirs_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirComponents_45 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[8]));
        break;
      case (MR_Integer) 1:
        {
          MR_String Grade_44;
          MR_Word Var_53;
          MR_Word Var_54;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_6, &Grade_44);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (TargetArch_43));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[8])));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Grade_44));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            DirComponents_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirComponents_45, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), DirComponents_45, 1) = ((MR_Box) (Var_53));
          }
        }
        break;
    }
    *CacheDir_8 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_45);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (*CacheDir_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__program_target__create_analysis_cache_dir_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) ((MR_String) "Creating %s\n"));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_19));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_6, (MR_Integer) 65, Var_16);
    mercury__dir__make_directory_4_p_0(*CacheDir_8, &MakeRes_10);
    if ((MakeRes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_7 = (MR_Integer) 1;
    else
    {
      MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MakeRes_10, (MR_Integer) 0))));
      MR_String Var_28;

      mercury__io__write_string_3_p_0((MR_String) "Error: making directory ");
      mercury__io__write_string_3_p_0(*CacheDir_8);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      Var_28 = mercury__io__error_message_1_f_0(Error_11);
      mercury__io__write_string_3_p_0(Var_28);
      mercury__io__nl_2_p_0();
      *Succeeded_7 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__5_5;

    make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__4_4;

    make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__4_4;

    make__util__linked_target_file_name_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__make_main_module_realclean__1896__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__make_main_module_realclean_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word LinkedTargetTypes_11;
    MR_Word FileNames_12;
    MR_Word NoSubdirGlobals_13;
    MR_Word ThisDirFileNames_14;
    MR_String ThisDirInitFileName_15;
    MR_Word Var_20;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_69_69;
    MR_Box conv1_STATE_VARIABLE_IO_50_50;
    MR_Box conv3_STATE_VARIABLE_IO_55_55;
    MR_Box conv6_STATE_VARIABLE_Info_61_61;
    MR_Box conv5_STATE_VARIABLE_IO_62_62;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleName_8));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_20);
    LinkedTargetTypes_11 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[31]));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, LinkedTargetTypes_11, &FileNames_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_50_50);
    libs__globals__set_option_4_p_0((MR_Integer) 667, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_3[1])), Globals_7, &NoSubdirGlobals_13);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (NoSubdirGlobals_13));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, LinkedTargetTypes_11, &ThisDirFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_55_55);
    parse_tree__file_names__module_name_to_file_name_7_p_0(NoSubdirGlobals_13, (MR_Integer) 1, (MR_String) ".init", ModuleName_8, &ThisDirInitFileName_15);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (make__program_target__make_main_module_realclean_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 61));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ThisDirInitFileName_15));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThisDirFileNames_14, Var_65);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_12, Var_64);
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Var_60, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv6_STATE_VARIABLE_Info_61_61, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_62_62);
    STATE_VARIABLE_Info_61_61 = ((MR_Word) (conv6_STATE_VARIABLE_Info_61_61));
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, (MR_String) ".init", STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_69_69);
    make__program_target__remove_init_files_7_p_0(Globals_7, (MR_Integer) 61, ModuleName_8, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    make__util__make_remove_module_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
make__program_target__remove_init_files_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_String ObjExt_13;
    MR_String PicObjExt_14;
    MR_String BeamExt_15;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Box conv2_STATE_VARIABLE_Info_17;
    MR_Box conv1_STATE_VARIABLE_IO_19;

    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 535, &ObjExt_13);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 536, &PicObjExt_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 554, &BeamExt_15);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&make__program_target_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (make__program_target__remove_init_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Verbose_9));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (ModuleName_10));
    }
    Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_13);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_init", PicObjExt_14);
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_init", BeamExt_15);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "_init.erl"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "_init.c"));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_28));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Var_24, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv2_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19);
    *STATE_VARIABLE_Info_17 = ((MR_Word) (conv2_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Succeeded_16;
    MR_Word conv7_STATE_VARIABLE_Info_40;

    make__program_target__install_library_grade_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), &conv8_Succeeded_16, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_Info_40);
    *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_Info_40));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Succeeded_15;

    make__program_target__install_extra_header_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Succeeded_15);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Succeeded_15));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0_1(
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
    MR_Word conv1_Succeeded_12;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    make__program_target__install_ints_and_headers_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__program_target__install_library_7_p_0(
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word DepsSuccess_13;
    MR_Word AllModules0_14;
    MR_Word AllModules_15;
    MR_Word DirSucceeded_16;
    MR_Word LinkSucceeded_17;
    MR_Word STATE_VARIABLE_Info_29_29;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, MainModuleName_9, &DepsSuccess_13, &AllModules0_14, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    AllModules_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules0_14);
    make__program_target__make_install_dirs_5_p_0(Globals_8, &DirSucceeded_16, &LinkSucceeded_17);
    succeeded = (DepsSuccess_13 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DirSucceeded_16 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word IntsSucceeded_18;
      MR_Word ExtraHdrsSucceeded_19;
      MR_String Grade_20;
      MR_Word GradeSucceeded_21;
      MR_Word Var_32;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word ExtraHdrs_68;
      MR_String Prefix_69;
      MR_String IncDir_70;
      MR_String Var_73;
      MR_String Var_74;
      MR_Word Var_78;
      MR_Box conv3_STATE_VARIABLE_Info_33_33;
      MR_Box conv2_STATE_VARIABLE_IO_34_34;
      MR_Box conv6_ExtraHdrsSucceeded_19;
      MR_Box conv5_STATE_VARIABLE_IO_35_35;
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (LinkSucceeded_17));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, AllModules_15, &IntsSucceeded_18, ((MR_Box) (STATE_VARIABLE_Info_29_29)), &conv3_STATE_VARIABLE_Info_33_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_34);
      STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Info_33_33));
      libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 674, &ExtraHdrs_68);
      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 651, &Prefix_69);
      Var_74 = mercury__dir__f_slash_2_f_0(Prefix_69, (MR_String) "lib");
      Var_73 = mercury__dir__f_slash_2_f_0(Var_74, (MR_String) "mercury");
      IncDir_70 = mercury__dir__f_slash_2_f_0(Var_73, (MR_String) "inc");
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Globals_8));
        MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (IncDir_70));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, ExtraHdrs_68, ((MR_Box) ((MR_Integer) 1)), &conv6_ExtraHdrsSucceeded_19, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_35_35);
      ExtraHdrsSucceeded_19 = ((MR_Word) (conv6_ExtraHdrsSucceeded_19));
      libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_20);
      make__program_target__install_library_grade_files_10_p_0(Globals_8, LinkSucceeded_17, Grade_20, MainModuleName_9, AllModules_15, &GradeSucceeded_21, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_36_36);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ExtraHdrsSucceeded_19));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (IntsSucceeded_18));
      }
      Var_38 = mercury__bool__and_list_1_f_0(Var_39);
      succeeded = (Var_38 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (GradeSucceeded_21 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word LibGrades0_22;
        MR_Word KeepGoing_23;
        MR_Word LibGrades_24;
        MR_Word Var_42;
        MR_Box conv10_STATE_VARIABLE_Info_26;
        MR_Box conv9_STATE_VARIABLE_IO_28;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 658, &LibGrades0_22);
        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 645, &KeepGoing_23);
        LibGrades_24 = mercury__list__delete_all_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibGrades0_22, ((MR_Box) (Grade_20)));
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (make__program_target__install_library_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (LinkSucceeded_17));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (MainModuleName_9));
          MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (AllModules_15));
        }
        make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_23, Var_42, Globals_8, LibGrades_24, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_36_36)), &conv10_STATE_VARIABLE_Info_26, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_28);
        *STATE_VARIABLE_Info_26 = ((MR_Word) (conv10_STATE_VARIABLE_Info_26));
      }
      else
      {
        *Succeeded_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_36_36;
      }
    }
    else
    {
      *Succeeded_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
    }
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_65;

    make__program_target__IntroducedFrom__pred__make_install_dirs__1771__1_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_65);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_65));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_10;

    make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_install_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word * Result_7,
  MR_Word * LinkResult_8)
{
  {
    MR_String Prefix_10;
    MR_String LibDir_11;
    MR_Word Result1_12;
    MR_Word Result2_13;
    MR_String IntsSubdir_14;
    MR_Word Result3_15;
    MR_Word Results0_16;
    MR_Word Subdirs_17;
    MR_Word LinkResults_18;
    MR_String Var_26;
    MR_String Var_29;
    MR_String Var_32;
    MR_String Var_35;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_60;
    MR_Box conv1_STATE_VARIABLE_IO_61_61;

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 651, &Prefix_10);
    Var_26 = mercury__dir__f_slash_2_f_0(Prefix_10, (MR_String) "lib");
    LibDir_11 = mercury__dir__f_slash_2_f_0(Var_26, (MR_String) "mercury");
    Var_29 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "inc");
    mercury__dir__make_directory_4_p_0(Var_29, &Result1_12);
    Var_32 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "modules");
    mercury__dir__make_directory_4_p_0(Var_32, &Result2_13);
    Var_35 = mercury__dir__f_slash_2_f_0(LibDir_11, (MR_String) "ints");
    IntsSubdir_14 = mercury__dir__f_slash_2_f_0(Var_35, (MR_String) "Mercury");
    mercury__dir__make_directory_4_p_0(IntsSubdir_14, &Result3_15);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Result3_15));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Result2_13));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Results0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Results0_16, 0) = ((MR_Box) (Result1_12));
      MR_hl_field(MR_mktag(1), Results0_16, 1) = ((MR_Box) (Var_39));
    }
    Subdirs_17 = (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[19]));
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Globals_6));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (IntsSubdir_14));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Subdirs_17, &LinkResults_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_61);
    *LinkResult_8 = mercury__bool__and_list_1_f_0(LinkResults_18);
    switch (*LinkResult_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Results_19;
          MR_Word MkDirResults_22;
          MR_Word Var_62;
          MR_Box conv3_STATE_VARIABLE_IO_63_63;

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (make__program_target__make_install_dirs_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (IntsSubdir_14));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Subdirs_17, &MkDirResults_22, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_63_63);
          Results_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), Results0_16, MkDirResults_22);
          make__program_target__print_mkdir_errors_4_p_0(Results_19, Result_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results0_16, (MR_Integer) 1))));
          MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results0_16, (MR_Integer) 0))));

          if ((Var_111 == (MR_Word) ((MR_Unsigned) 0U)))
            make__program_target__print_mkdir_errors_4_p_0(Var_110, Result_7);
          else
          {
            MR_Word Error_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 0))));
            MR_String Var_106;
            MR_Word Var_135;
            MR_Word Var_136;

            *Result_7 = (MR_Integer) 0;
            mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
            Var_106 = mercury__io__error_message_1_f_0(Error_97);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__nl_2_p_0();
            Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0))));
            Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1))));
            if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_214;

              make__program_target__print_mkdir_errors_4_p_0(Var_135, &Var_214);
            }
            else
            {
              MR_Word Error_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 0))));
              MR_String Var_131;
              MR_Word Var_161;

              mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
              Var_131 = mercury__io__error_message_1_f_0(Error_122);
              mercury__io__write_string_3_p_0(Var_131);
              mercury__io__nl_2_p_0();
              Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));
              if (!((Var_161 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Error_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 0))));
                MR_String Var_156;

                mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
                Var_156 = mercury__io__error_message_1_f_0(Error_147);
                mercury__io__write_string_3_p_0(Var_156);
                mercury__io__nl_2_p_0();
              }
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0_1(
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
    MR_Word conv1_Succeeded_14;
    MR_Word conv0_STATE_VARIABLE_Info_34;

    make__program_target__install_grade_ints_and_headers_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Succeeded_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_34);
    *wrapper_arg_2 = ((MR_Box) (conv1_Succeeded_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_34));
  }
}

static void MR_CALL 
make__program_target__install_library_grade_files_10_p_0(
  MR_Word Globals_11,
  MR_Word LinkSucceeded0_12,
  MR_String GradeDir_13,
  MR_Word ModuleName_14,
  MR_Word AllModules_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word DirResult_19;
    MR_Word LinkSucceeded1_20;
    MR_Word LinkSucceeded_21;

    make__program_target__make_grade_install_dirs_6_p_0(Globals_11, GradeDir_13, &DirResult_19, &LinkSucceeded1_20);
    LinkSucceeded_21 = mercury__bool__and_2_f_0(LinkSucceeded0_12, LinkSucceeded1_20);
    switch (DirResult_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String LibFileName_22;
          MR_String SharedLibFileName_23;
          MR_String DllFileName_24;
          MR_String JarFileName_25;
          MR_String ErlangArchiveFileName_26;
          MR_String Prefix_27;
          MR_Word LibsSucceeded_29;
          MR_Word InitSucceeded_30;
          MR_Word IntsHeadersSucceeded_33;
          MR_Word Var_86;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Box conv3_STATE_VARIABLE_Info_35;
          MR_Box conv2_STATE_VARIABLE_IO_37;

          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 1, &LibFileName_22);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 2, &SharedLibFileName_23);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 4, &DllFileName_24);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 6, &JarFileName_25);
          make__util__linked_target_file_name_6_p_0(Globals_11, ModuleName_14, (MR_Integer) 8, &ErlangArchiveFileName_26);
          libs__globals__lookup_string_option_3_p_0(Globals_11, (MR_Integer) 651, &Prefix_27);
          succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "csharp");
          if (succeeded)
          {
            MR_String GradeLibDir_28;
            MR_String Var_51;
            MR_String Var_52;
            MR_String Var_53;

            Var_53 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
            Var_52 = mercury__dir__f_slash_2_f_0(Var_53, (MR_String) "mercury");
            Var_51 = mercury__dir__f_slash_2_f_0(Var_52, (MR_String) "lib");
            GradeLibDir_28 = mercury__dir__f_slash_2_f_0(Var_51, GradeDir_13);
            make__program_target__install_file_6_p_0(Globals_11, DllFileName_24, GradeLibDir_28, &LibsSucceeded_29);
            InitSucceeded_30 = (MR_Integer) 1;
          }
          else
          {
            succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "java");
            if (succeeded)
            {
              MR_String Var_59;
              MR_String Var_60;
              MR_String Var_61;
              MR_String GradeLibDir_91;

              Var_61 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
              Var_60 = mercury__dir__f_slash_2_f_0(Var_61, (MR_String) "mercury");
              Var_59 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "lib");
              GradeLibDir_91 = mercury__dir__f_slash_2_f_0(Var_59, GradeDir_13);
              make__program_target__install_file_6_p_0(Globals_11, JarFileName_25, GradeLibDir_91, &LibsSucceeded_29);
              InitSucceeded_30 = (MR_Integer) 1;
            }
            else
            {
              succeeded = mercury__string__prefix_2_p_0(GradeDir_13, (MR_String) "erlang");
              if (succeeded)
              {
                MR_String Var_67;
                MR_String Var_68;
                MR_String Var_69;
                MR_String GradeLibDir_92;

                Var_69 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
                Var_68 = mercury__dir__f_slash_2_f_0(Var_69, (MR_String) "mercury");
                Var_67 = mercury__dir__f_slash_2_f_0(Var_68, (MR_String) "lib");
                GradeLibDir_92 = mercury__dir__f_slash_2_f_0(Var_67, GradeDir_13);
                make__program_target__install_directory_6_p_0(Globals_11, ErlangArchiveFileName_26, GradeLibDir_92, &LibsSucceeded_29);
                make__program_target__install_grade_init_6_p_0(Globals_11, GradeDir_13, ModuleName_14, &InitSucceeded_30);
              }
              else
              {
                MR_Word LibSuccess_31;
                MR_String Var_75;
                MR_String Var_76;
                MR_String Var_77;
                MR_String GradeLibDir_93;

                Var_77 = mercury__dir__f_slash_2_f_0(Prefix_27, (MR_String) "lib");
                Var_76 = mercury__dir__f_slash_2_f_0(Var_77, (MR_String) "mercury");
                Var_75 = mercury__dir__f_slash_2_f_0(Var_76, (MR_String) "lib");
                GradeLibDir_93 = mercury__dir__f_slash_2_f_0(Var_75, GradeDir_13);
                make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "static", LibFileName_22, GradeLibDir_93, &LibSuccess_31);
                succeeded = (strcmp(LibFileName_22, SharedLibFileName_23) == 0);
                if (succeeded)
                  LibsSucceeded_29 = LibSuccess_31;
                else
                {
                  MR_Word SharedLibSuccess_32;

                  make__program_target__maybe_install_library_file_7_p_0(Globals_11, (MR_String) "shared", SharedLibFileName_23, GradeLibDir_93, &SharedLibSuccess_32);
                  LibsSucceeded_29 = mercury__bool__and_2_f_0(LibSuccess_31, SharedLibSuccess_32);
                }
                make__program_target__install_grade_init_6_p_0(Globals_11, GradeDir_13, ModuleName_14, &InitSucceeded_30);
              }
            }
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (make__program_target__install_library_grade_files_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Globals_11));
            MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (LinkSucceeded_21));
            MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (GradeDir_13));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, AllModules_15, &IntsHeadersSucceeded_33, ((MR_Box) (STATE_VARIABLE_Info_0_34)), &conv3_STATE_VARIABLE_Info_35, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37);
          *STATE_VARIABLE_Info_35 = ((MR_Word) (conv3_STATE_VARIABLE_Info_35));
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (InitSucceeded_30));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (IntsHeadersSucceeded_33));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (LibsSucceeded_29));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
          }
          *Succeeded_16 = mercury__bool__and_list_1_f_0(Var_89);
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_10;

    make__program_target__make_install_symlink_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv0_Succeeded_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Succeeded_10));
  }
}

static void MR_CALL 
make__program_target__make_grade_install_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String Grade_8,
  MR_Word * Result_9,
  MR_Word * LinkResult_10)
{
  {
    MR_String Prefix_12;
    MR_String LibDir_13;
    MR_String GradeIntsSubdir_14;
    MR_Word Result1_15;
    MR_String GradeIncSubdir_16;
    MR_Word Result2_17;
    MR_String GradeModuleSubdir_18;
    MR_Word Result3_19;
    MR_Word Results0_20;
    MR_Word LinkResult0_21;
    MR_Word LinkResults_22;
    MR_Word Results_23;
    MR_String Var_31;
    MR_String Var_34;
    MR_String Var_35;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_63;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Box conv1_STATE_VARIABLE_IO_56_56;

    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 651, &Prefix_12);
    Var_31 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
    LibDir_13 = mercury__dir__f_slash_2_f_0(Var_31, (MR_String) "mercury");
    Var_35 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "ints");
    Var_34 = mercury__dir__f_slash_2_f_0(Var_35, Grade_8);
    GradeIntsSubdir_14 = mercury__dir__f_slash_2_f_0(Var_34, (MR_String) "Mercury");
    mercury__dir__make_directory_4_p_0(GradeIntsSubdir_14, &Result1_15);
    Var_41 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "lib");
    Var_40 = mercury__dir__f_slash_2_f_0(Var_41, Grade_8);
    Var_39 = mercury__dir__f_slash_2_f_0(Var_40, (MR_String) "inc");
    GradeIncSubdir_16 = mercury__dir__f_slash_2_f_0(Var_39, (MR_String) "Mercury");
    mercury__dir__make_directory_4_p_0(GradeIncSubdir_16, &Result2_17);
    Var_46 = mercury__dir__f_slash_2_f_0(LibDir_13, (MR_String) "modules");
    GradeModuleSubdir_18 = mercury__dir__f_slash_2_f_0(Var_46, Grade_8);
    mercury__dir__make_directory_4_p_0(GradeModuleSubdir_18, &Result3_19);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Result3_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Result2_17));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Results0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Results0_20, 0) = ((MR_Box) (Result1_15));
      MR_hl_field(MR_mktag(1), Results0_20, 1) = ((MR_Box) (Var_49));
    }
    make__program_target__make_install_symlink_6_p_0(Globals_7, GradeIncSubdir_16, (MR_String) "mih", &LinkResult0_21);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (make__program_target__make_grade_install_dirs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (GradeIntsSubdir_14));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, (MR_Word) (MR_mkword(MR_mktag(1), &make__program_target_scalar_common_1[22])), &LinkResults_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LinkResult0_21));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (LinkResults_22));
    }
    *LinkResult_10 = mercury__bool__and_list_1_f_0(Var_63);
    switch (*LinkResult_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Result4_24;
          MR_Word Result5_25;
          MR_Word Result6_26;
          MR_Word Result7_27;
          MR_String Var_64;
          MR_String Var_67;
          MR_String Var_70;
          MR_String Var_73;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;

          Var_64 = mercury__dir__f_slash_2_f_0(GradeIncSubdir_16, (MR_String) "mihs");
          mercury__dir__make_directory_4_p_0(Var_64, &Result4_24);
          Var_67 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "opts");
          mercury__dir__make_directory_4_p_0(Var_67, &Result5_25);
          Var_70 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "trans_opts");
          mercury__dir__make_directory_4_p_0(Var_70, &Result6_26);
          Var_73 = mercury__dir__f_slash_2_f_0(GradeIntsSubdir_14, (MR_String) "analysiss");
          mercury__dir__make_directory_4_p_0(Var_73, &Result7_27);
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Result7_27));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Results0_20));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Result6_26));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Result5_25));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
          }
          {
            Results_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Results_23, 0) = ((MR_Box) (Result4_24));
            MR_hl_field(MR_mktag(1), Results_23, 1) = ((MR_Box) (Var_76));
          }
        }
        break;
      case (MR_Integer) 1:
        Results_23 = Results0_20;
        break;
    }
    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_23, (MR_Integer) 0))));
    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_23, (MR_Integer) 1))));
    if ((Var_111 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1))));
      MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0))));

      if ((Var_211 == (MR_Word) ((MR_Unsigned) 0U)))
        make__program_target__print_mkdir_errors_4_p_0(Var_210, Result_9);
      else
      {
        MR_Word Error_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_211, (MR_Integer) 0))));
        MR_String Var_206;
        MR_Word Var_200;

        *Result_9 = (MR_Integer) 0;
        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        Var_206 = mercury__io__error_message_1_f_0(Error_197);
        mercury__io__write_string_3_p_0(Var_206);
        mercury__io__nl_2_p_0();
        make__program_target__print_mkdir_errors_4_p_0(Var_210, &Var_200);
      }
    }
    else
    {
      MR_Word Error_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 0))));
      MR_String Var_106;
      MR_Word Var_135;
      MR_Word Var_136;

      *Result_9 = (MR_Integer) 0;
      mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
      Var_106 = mercury__io__error_message_1_f_0(Error_97);
      mercury__io__write_string_3_p_0(Var_106);
      mercury__io__nl_2_p_0();
      Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0))));
      Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 1))));
      if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
        MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));

        if ((Var_186 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_215;

          make__program_target__print_mkdir_errors_4_p_0(Var_185, &Var_215);
        }
        else
        {
          MR_Word Error_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_186, (MR_Integer) 0))));
          MR_String Var_181;
          MR_Word Var_175;

          mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
          Var_181 = mercury__io__error_message_1_f_0(Error_172);
          mercury__io__write_string_3_p_0(Var_181);
          mercury__io__nl_2_p_0();
          make__program_target__print_mkdir_errors_4_p_0(Var_185, &Var_175);
        }
      }
      else
      {
        MR_Word Error_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_136, (MR_Integer) 0))));
        MR_String Var_131;
        MR_Word Var_160;
        MR_Word Var_161;

        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        Var_131 = mercury__io__error_message_1_f_0(Error_122);
        mercury__io__write_string_3_p_0(Var_131);
        mercury__io__nl_2_p_0();
        Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));
        Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
        if ((Var_161 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_212;

          make__program_target__print_mkdir_errors_4_p_0(Var_160, &Var_212);
        }
        else
        {
          MR_Word Error_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 0))));
          MR_String Var_156;
          MR_Word Var_150;

          mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
          Var_156 = mercury__io__error_message_1_f_0(Error_147);
          mercury__io__write_string_3_p_0(Var_156);
          mercury__io__nl_2_p_0();
          make__program_target__print_mkdir_errors_4_p_0(Var_160, &Var_150);
        }
      }
    }
  }
}

static void MR_CALL 
make__program_target__make_install_symlink_6_p_0(
  MR_Word Globals_7,
  MR_String Subdir_8,
  MR_String Ext_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String LinkName_12;
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0(Ext_9, (MR_String) "s");
    LinkName_12 = mercury__dir__f_slash_2_f_0(Subdir_8, Var_15);
    parse_tree__module_cmds__maybe_make_symlink_6_p_0(Globals_7, (MR_String) "..", LinkName_12, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__print_mkdir_errors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_28;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
        MR_String Var_24;
        MR_Word Var_18;

        *HeadVar__2_2 = (MR_Integer) 0;
        mercury__io__write_string_3_p_0((MR_String) "Error creating installation directories: ");
        Var_24 = mercury__io__error_message_1_f_0(Error_15);
        mercury__io__write_string_3_p_0(Var_24);
        mercury__io__nl_2_p_0();
        make__program_target__print_mkdir_errors_4_p_0(Var_28, &Var_18);
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_directory__1735__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_directory_6_p_0(
  MR_Word Globals_7,
  MR_String SourceDirName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String Command_12;
    MR_Word OutputStream_13;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__program_target__install_directory_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SourceDirName_8));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (InstallDir_9));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_16);
    Command_12 = libs__file_util__make_install_dir_command_3_f_0(Globals_7, SourceDirName_8, InstallDir_9);
    mercury__io__output_stream_3_p_0(&OutputStream_13);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_7, OutputStream_13, (MR_Integer) 0, Command_12, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String InstallDir_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String Command_12;
    MR_Word OutputStream_13;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__program_target__install_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (FileName_8));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (InstallDir_9));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_16);
    Command_12 = libs__file_util__make_install_file_command_3_f_0(Globals_7, FileName_8, InstallDir_9);
    mercury__io__output_stream_3_p_0(&OutputStream_13);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_7, OutputStream_13, (MR_Integer) 0, Command_12, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__generate_archive_index__1840__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__maybe_install_library_file_7_p_0(
  MR_Word Globals_8,
  MR_String Linkage_9,
  MR_String FileName_10,
  MR_String InstallDir_11,
  MR_Word * Succeeded_12)
{
  {
    MR_bool succeeded;
    MR_Word LibLinkages_14;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 661, &LibLinkages_14);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Linkage_9)), LibLinkages_14);
    if (succeeded)
    {
      MR_Word Succeeded0_15;
      MR_String Command_30;
      MR_Word OutputStream_31;
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (FileName_10));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (InstallDir_11));
      }
      make__util__verbose_make_msg_4_p_0(Globals_8, Var_32);
      Command_30 = libs__file_util__make_install_file_command_3_f_0(Globals_8, FileName_10, InstallDir_11);
      mercury__io__output_stream_3_p_0(&OutputStream_31);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_8, OutputStream_31, (MR_Integer) 0, Command_30, &Succeeded0_15);
      succeeded = (strcmp(Linkage_9, (MR_String) "static") == 0);
      if (succeeded)
        succeeded = (Succeeded0_15 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String BaseFileName_16;
        MR_String RanLibCommand_57;
        MR_String RanLibFlags_58;
        MR_String Command_59;
        MR_Word OutputStream_60;
        MR_Word Var_61;
        MR_Word Var_77;
        MR_String Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_String Var_81;
        MR_String Var_82;

        BaseFileName_16 = mercury__dir__det_basename_1_f_0(FileName_10);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__program_target__maybe_install_library_file_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (BaseFileName_16));
          MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (InstallDir_11));
        }
        make__util__verbose_make_msg_4_p_0(Globals_8, Var_61);
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 601, &RanLibCommand_57);
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 602, &RanLibFlags_58);
        Var_78 = libs__options__quote_arg_1_f_0(RanLibCommand_57);
        Var_82 = mercury__dir__f_slash_2_f_0(InstallDir_11, BaseFileName_16);
        Var_81 = libs__options__quote_arg_1_f_0(Var_82);
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RanLibFlags_58));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
        }
        Command_59 = mercury__string__join_list_2_f_0((MR_String) "    ", Var_77);
        mercury__io__output_stream_3_p_0(&OutputStream_60);
        parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_8, OutputStream_60, (MR_Integer) 0, Command_59, Succeeded_12);
      }
      else
        *Succeeded_12 = Succeeded0_15;
    }
    else
      *Succeeded_12 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__install_file__1718__1_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static void MR_CALL 
make__program_target__install_grade_init_6_p_0(
  MR_Word Globals_7,
  MR_String GradeDir_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10)
{
  {
    MR_String Prefix_12;
    MR_String GradeModulesDir_13;
    MR_String InitFileName_14;
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Command_35;
    MR_Word OutputStream_36;
    MR_Word Var_37;

    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 651, &Prefix_12);
    Var_20 = mercury__dir__f_slash_2_f_0(Prefix_12, (MR_String) "lib");
    Var_19 = mercury__dir__f_slash_2_f_0(Var_20, (MR_String) "mercury");
    Var_18 = mercury__dir__f_slash_2_f_0(Var_19, (MR_String) "modules");
    GradeModulesDir_13 = mercury__dir__f_slash_2_f_0(Var_18, GradeDir_8);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".init", ModuleName_9, &InitFileName_14);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (make__program_target__install_grade_init_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (InitFileName_14));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (GradeModulesDir_13));
    }
    make__util__verbose_make_msg_4_p_0(Globals_7, Var_37);
    Command_35 = libs__file_util__make_install_file_command_3_f_0(Globals_7, InitFileName_14, GradeModulesDir_13);
    mercury__io__output_stream_3_p_0(&OutputStream_36);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_7, OutputStream_36, (MR_Integer) 0, Command_35, Succeeded_10);
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__5_82;
    MR_Word conv13_HeadVar__7_84;

    make__program_target__IntroducedFrom__pred__make_all_interface_files__879__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__5_82, ((MR_Word) (wrapper_arg_4)), &conv13_HeadVar__7_84);
    *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__5_82));
    *wrapper_arg_5 = ((MR_Box) (conv13_HeadVar__7_84));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__3_3;
    MR_Word conv11_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv11_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv11_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__5_64;
    MR_Word conv7_HeadVar__7_66;

    make__program_target__IntroducedFrom__pred__make_all_interface_files__874__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__5_64, ((MR_Word) (wrapper_arg_4)), &conv7_HeadVar__7_66);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_64));
    *wrapper_arg_5 = ((MR_Box) (conv7_HeadVar__7_66));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_3;
    MR_Word conv5_HeadVar__5_5;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv5_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv5_HeadVar__5_5));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ParentModules_18;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__program_target__collect_modules_with_children_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ParentModules_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__program_target__make_all_interface_files_7_p_0(
  MR_Word Globals_8,
  MR_Word AllModules0_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word NonnestedModules_13;
    MR_Word ParentModules_14;
    MR_Word ShortInts_15;
    MR_Word PrivateInts_16;
    MR_Word LongInts_17;
    MR_Word AnyIntermod_18;
    MR_Word OptFiles_19;
    MR_Word KeepGoing_20;
    MR_Word Succeeded0_21;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word Var_42;
    MR_Box conv4_ParentModules_14;
    MR_Box conv3_STATE_VARIABLE_Info_30_30;
    MR_Box conv2_STATE_VARIABLE_IO_31_31;
    MR_Box conv10_STATE_VARIABLE_Info_39_39;
    MR_Box conv9_STATE_VARIABLE_IO_40_40;

    make__dependencies__remove_nested_modules_7_p_0(Globals_8, AllModules0_9, &NonnestedModules_13, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_8));
    }
    mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_26_26)), &conv3_STATE_VARIABLE_Info_30_30, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31_31);
    ParentModules_14 = ((MR_Word) (conv4_ParentModules_14));
    STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv3_STATE_VARIABLE_Info_30_30));
    ShortInts_15 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 20U));
    PrivateInts_16 = make__util__make_dependency_list_2_f_0(ParentModules_14, (MR_Word) ((MR_Unsigned) 8U));
    LongInts_17 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 12U));
    libs__globals__get_any_intermod_2_p_0(Globals_8, &AnyIntermod_18);
    switch (AnyIntermod_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptFiles_19 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          OptFiles_19 = make__util__make_dependency_list_2_f_0(NonnestedModules_13, (MR_Word) ((MR_Unsigned) 24U));
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 645, &KeepGoing_20);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (KeepGoing_20));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (&make__program_target_scalar_common_2[4]));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (PrivateInts_16));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ShortInts_15));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_42));
    }
    make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, Var_37, Globals_8, Var_38, &Succeeded0_21, ((MR_Box) (STATE_VARIABLE_Info_30_30)), &conv10_STATE_VARIABLE_Info_39_39, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_40_40);
    STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv10_STATE_VARIABLE_Info_39_39));
    switch (Succeeded0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_49;
          MR_Box conv16_STATE_VARIABLE_Info_23;
          MR_Box conv15_STATE_VARIABLE_IO_25;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&make__program_target_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (make__program_target__make_all_interface_files_7_p_0_5));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (KeepGoing_20));
            MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (&make__program_target_scalar_common_2[5]));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (OptFiles_19));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (LongInts_17));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_49));
          }
          make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_20, Var_44, Globals_8, Var_45, Succeeded_10, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv16_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_25);
          *STATE_VARIABLE_Info_23 = ((MR_Word) (conv16_STATE_VARIABLE_Info_23));
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TargetModules_17;
    MR_Word conv0_STATE_VARIABLE_Info_19;

    make__program_target__get_target_modules_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModules_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModules_17));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
make__program_target__get_target_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetType_10,
  MR_Word AllModules_11,
  MR_Word * TargetModules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded = (TargetType_10 == (MR_Word) ((MR_Unsigned) 4U));

    if (succeeded)
    {
      MR_Word Var_19;
      MR_Box conv4_TargetModules_12;
      MR_Box conv3_STATE_VARIABLE_Info_16;
      MR_Box conv2_STATE_VARIABLE_IO_18;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__get_target_modules_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Globals_9));
      }
      mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, AllModules_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_TargetModules_12, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv3_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
      *TargetModules_12 = ((MR_Word) (conv4_TargetModules_12));
      *STATE_VARIABLE_Info_16 = ((MR_Word) (conv3_STATE_VARIABLE_Info_16));
    }
    else
    {
      *TargetModules_12 = AllModules_11;
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
    }
  }
}

static void MR_CALL 
make__program_target__make_misc_target_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_13;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    make__program_target__make_misc_target_builder_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
}

void MR_CALL 
make__program_target__make_misc_target_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * Succeeded_11,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word MainModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__program_target_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__program_target__make_misc_target_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (HeadVar__2_2));
    }
    make__util__build_with_module_options_9_p_0(Globals_8, MainModuleName_9, (MR_Word) ((MR_Unsigned) 0U), Var_19, Succeeded_11, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Succeeded_22;

    make__program_target__check_library_is_installed_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_22));
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__program_target__IntroducedFrom__pred__check_stdlib_is_installed__2089__1_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__program_target__check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * Succeeded_6)
{
  {
    MR_Word Libs_8;
    MR_Word InitFileDirs_9;
    MR_String Grade_10;
    MR_Word Succeeded0_11;
    MR_Word Var_17;
    MR_Word MaybeStdLibDir_33;
    MR_Word Var_41;
    MR_Box conv2_Succeeded_6;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 571, &Libs_8);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 575, &InitFileDirs_9);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &Grade_10);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&make__program_target_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (make__program_target__check_libraries_are_installed_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Grade_10));
    }
    make__util__verbose_make_msg_option_5_p_0(Globals_5, (MR_Integer) 90, Var_41);
    libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 573, &MaybeStdLibDir_33);
    if ((MaybeStdLibDir_33 == (MR_Word) ((MR_Unsigned) 0U)))
      Succeeded0_11 = (MR_Integer) 1;
    else
    {
      MR_String StdLibDir_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_33, (MR_Integer) 0))));
      MR_String StdLibInitFile_35;
      MR_Word Result_36;
      MR_String Var_55;
      MR_String Var_56;

      Var_56 = mercury__dir__f_slash_2_f_0(StdLibDir_34, (MR_String) "modules");
      Var_55 = mercury__dir__f_slash_2_f_0(Var_56, Grade_10);
      StdLibInitFile_35 = mercury__dir__f_slash_2_f_0(Var_55, (MR_String) "mer_std.init");
      mercury__io__see_4_p_0(StdLibInitFile_35, &Result_36);
      if ((Result_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__seen_2_p_0();
        Succeeded0_11 = (MR_Integer) 1;
      }
      else
      {
        MR_Word Stderr_38;
        MR_String ProgName_39;

        mercury__io__stderr_stream_3_p_0(&Stderr_38);
        mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_39);
        mercury__io__write_string_4_p_0(Stderr_38, ProgName_39);
        mercury__io__write_string_4_p_0(Stderr_38, (MR_String) ": error: the Mercury standard library cannot be found in grade ");
        mercury__io__write_string_4_p_0(Stderr_38, Grade_10);
        mercury__io__write_string_4_p_0(Stderr_38, (MR_String) ".\n");
        Succeeded0_11 = (MR_Integer) 0;
      }
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&make__program_target_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (make__program_target__check_libraries_are_installed_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_5));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (InitFileDirs_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (Grade_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Libs_8, ((MR_Box) (Succeeded0_11)), &conv2_Succeeded_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
    *Succeeded_6 = ((MR_Word) (conv2_Succeeded_6));
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

// :- end_module make.program_target.
