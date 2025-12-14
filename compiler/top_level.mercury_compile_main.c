/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2025-12-14
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


// :- module top_level.mercury_compile_main.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_main__init
ENDINIT
*/

#include "top_level.mercury_compile_main.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "gc.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "io.environment.mih"
#include "libs.check_libgrades.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.print_help.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.top_level.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_args.mih"
#include "top_level.mercury_compile_augment.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__LambdaHeadVar__1_63;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__ModuleName_29;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocUndoc_30;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocStr_31;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_64;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_65;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_66;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_67;
};

struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s {
  MR_Box * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont;
  void * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63;
};


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1013__1_1_p_0(
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__397__1_2_p_0(
  MR_Word InvokedByMmcMake_18,
  MR_Word HeadVar__2_53);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0(
  MR_String * LambdaHeadVar__1_63,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__336__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_92);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__330__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_86);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static void MR_CALL 
top_level__mercury_compile_main__acc_not_found_files_5_p_0(
  MR_Word Spec_6,
  MR_Word STATE_VARIABLE_NotFoundFiles_0_11,
  MR_Word * STATE_VARIABLE_NotFoundFiles_12,
  MR_Word STATE_VARIABLE_OtherSpecs_0_13,
  MR_Word * STATE_VARIABLE_OtherSpecs_14);

static void MR_CALL 
top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(
  MR_Word Deps_5,
  MR_Word * BurdenedModule_6,
  MR_Word STATE_VARIABLE_Ancestors_0_14,
  MR_Word * STATE_VARIABLE_Ancestors_15);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word OpMode_15,
  MR_Word ArgPack_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word FileNamesFromStdin_19,
  MR_Word ArgPack_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModulesToLink_0_8,
  MR_Word * STATE_VARIABLE_ModulesToLink_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word Params_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word StdIn_20,
  MR_Word Globals_21,
  MR_Word OpModeArgs_22,
  MR_Word InvokedByMmcMake_23,
  MR_Word Params_24,
  MR_Word STATE_VARIABLE_Modules_0_39,
  MR_Word * STATE_VARIABLE_Modules_40,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_41,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_42,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word OptionArgs_19,
  MR_Word FileOrModule_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_44,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_45);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals0_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word OptionArgs_21,
  MR_Word FileOrModule_22,
  MR_Word MaybeWhatToRecompile_23,
  MR_Word * ModulesToLink_24,
  MR_Word * ExtraObjFiles_25,
  MR_Word * Specs_26,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals0_11,
  MR_Word InterfaceFile_12,
  MR_Word FileOrModule_13,
  MR_Word * SpecLists_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveSrc_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_39);

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0(
  MR_Word Specs0_4,
  MR_Word * Specs_5,
  MR_Word * Continue_6);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word Globals_7,
  MR_Word OpModeQuery_8);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[21][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[7][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][8];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][5];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[21][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_src_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error reading module name from standard input:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Could not find the following files:"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Could not find many files, including these:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and thus could not create some interface files."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 42U)),
    ((MR_Box) ((MR_Integer) 999)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_main__handle_not_found_files_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[1])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 271U) },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_add_to_hptm_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "top_level.mercury_compile_main.mh"


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0) }
};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1013__1_1_p_0(
  MR_Word LambdaHeadVar__1_50)
{
  MR_bool succeeded;
  MR_Word PTMS_35 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, 1))));
  MR_Word IncludeMap_36 = ((MR_Word) ((MR_hl_field(0, PTMS_35, 2))));

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), IncludeMap_36);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__397__1_2_p_0(
  MR_Word InvokedByMmcMake_18,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded = (InvokedByMmcMake_18 == HeadVar__2_53);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocUndoc_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocStr_31 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocStr_31 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_65 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_67 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_66 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__ModuleName_29, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_67);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_64 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_65, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_66);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__LambdaHeadVar__1_63) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocStr_31, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__Var_64);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0(
  MR_String * LambdaHeadVar__1_63,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__LambdaHeadVar__1_63 = LambdaHeadVar__1_63;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__ModuleName_29, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_env_0__DocUndoc_30, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__336__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_92)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (HeadVar__2_92)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__330__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_86)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (HeadVar__2_86)));
}

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void)
{
{
#define MR_PROC_LABEL top_level__mercury_compile_main__gc_init_2_p_0


		{

#ifdef MR_BOEHM_GC
    // Explicitly force the initial heap size to be at least 4 Mb.
    //
    // This works around a bug in the Boehm collector (for versions up
    // to at least 6.2) where the collector would sometimes abort with
    // the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    // on dec-alpha-osf3.2).
    //
    // Doing this should also improve performance slightly by avoiding
    // frequent garbage collection during start-up.
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
top_level__mercury_compile_main__acc_not_found_files_5_p_0(
  MR_Word Spec_6,
  MR_Word STATE_VARIABLE_NotFoundFiles_0_11,
  MR_Word * STATE_VARIABLE_NotFoundFiles_12,
  MR_Word STATE_VARIABLE_OtherSpecs_0_13,
  MR_Word * STATE_VARIABLE_OtherSpecs_14)
{
  MR_bool succeeded;
  MR_Word Phase_9;
  MR_String FileName_10;

  parse_tree__error_spec__extract_spec_phase_2_p_0(Spec_6, &Phase_9);
  succeeded = ((MR_tag((MR_Word) Phase_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    FileName_10 = ((MR_String) ((MR_hl_field(1, Phase_9, 0))));
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_16, 0) = ((MR_Box) (FileName_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_NotFoundFiles_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NotFoundFiles_0_11));
      }
      *STATE_VARIABLE_OtherSpecs_14 = STATE_VARIABLE_OtherSpecs_0_13;
    }
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_OtherSpecs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OtherSpecs_0_13));
    }
    *STATE_VARIABLE_NotFoundFiles_12 = STATE_VARIABLE_NotFoundFiles_0_11;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(
  MR_Word Deps_5,
  MR_Word * BurdenedModule_6,
  MR_Word STATE_VARIABLE_Ancestors_0_14,
  MR_Word * STATE_VARIABLE_Ancestors_15)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_10;
  MR_Word IncludeMap_11;

  *BurdenedModule_6 = ((MR_Word) ((MR_hl_field(0, Deps_5, 1))));
  ParseTreeModuleSrc_10 = ((MR_Word) ((MR_hl_field(0, *BurdenedModule_6, 1))));
  IncludeMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 2))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), IncludeMap_11);
  if (succeeded)
    *STATE_VARIABLE_Ancestors_15 = STATE_VARIABLE_Ancestors_0_14;
  else
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 0))));
    MR_Word ModuleNameComponents_13;
    MR_Word Var_17;

    ModuleNameComponents_13 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleName_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (ModuleNameComponents_13));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (*BurdenedModule_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Ancestors_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Ancestors_0_14));
    }
  }
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word Globals_9,
  MR_Word Args_10)
{
  MR_bool succeeded;
  MR_Word EnvVarMap_12;
  MR_Word EnvOptFileVariables_13;
  MR_Word EnvVarArgs_14;
  MR_Word ArgPack_16;
  MR_Word Version_21;
  MR_Word Help_22;
  MR_Word HelpPriv_23;
  MR_Word HelpTexInfo_24;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_12);
  EnvOptFileVariables_13 = make__options_file__env_optfile_variables_init_1_f_0(EnvVarMap_12);
  top_level__mercury_compile_args__get_args_representing_env_vars_3_p_0(&EnvVarArgs_14);
  {
    ArgPack_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ArgPack_16, 0) = ((MR_Box) (EnvOptFileVariables_13));
    MR_hl_field(0, ArgPack_16, 1) = ((MR_Box) (EnvVarArgs_14));
    MR_hl_field(0, ArgPack_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgPack_16, 3) = ((MR_Box) (Args_10));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 3, &Version_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 0, &Help_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 1, &HelpPriv_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 2, &HelpTexInfo_24);
  succeeded = (Help_22 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word StdOutStream_25;

    mercury__io__stdout_stream_3_p_0(&StdOutStream_25);
    libs__print_help__long_usage_4_p_0(StdOutStream_25, (MR_Integer) 0);
  }
  else
  {
    succeeded = (HelpPriv_23 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOutStream_54;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_54);
      libs__print_help__long_usage_4_p_0(StdOutStream_54, (MR_Integer) 1);
    }
    else
    {
      succeeded = (HelpTexInfo_24 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word StdOutStream_55;

        mercury__io__stdout_stream_3_p_0(&StdOutStream_55);
        libs__print_help__document_options_for_users_guide_3_p_0(StdOutStream_55);
      }
      else
      {
        succeeded = (Version_21 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_String LibraryVersion_26;
          MR_String PackageVersion_27;
          MR_Word StdOutStream_56;

          mercury__io__stdout_stream_3_p_0(&StdOutStream_56);
          LibraryVersion_26 = mercury__library__mercury_version_0_f_0();
          PackageVersion_27 = mercury__library__package_version_0_f_0();
          mercury__io__write_string_4_p_0(StdOutStream_56, (MR_String) "Mercury Compiler, version ");
          mercury__io__write_string_4_p_0(StdOutStream_56, LibraryVersion_26);
          succeeded = (strcmp(PackageVersion_27, (MR_String) "") == 0);
          if (succeeded)
            mercury__io__nl_3_p_0(StdOutStream_56);
          else
          {
            mercury__io__write_string_4_p_0(StdOutStream_56, (MR_String) " (");
            mercury__io__write_string_4_p_0(StdOutStream_56, PackageVersion_27);
            mercury__io__write_string_4_p_0(StdOutStream_56, (MR_String) ")\n");
          }
          libs__print_help__write_copyright_notice_3_p_0(StdOutStream_56);
        }
        else
        {
          MR_Word OpMode_28;
          MR_Word HaveParseTreeMaps0_29;
          MR_Word Specs_32;
          MR_Word _HaveParseTreeMaps_31;

          libs__globals__get_op_mode_2_p_0(Globals_9, &OpMode_28);
          HaveParseTreeMaps0_29 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
          top_level__mercury_compile_main__do_op_mode_11_p_0(ProgressStream_7, ErrorStream_8, Globals_9, OpMode_28, ArgPack_16, HaveParseTreeMaps0_29, &_HaveParseTreeMaps_31, (MR_Word) ((MR_Unsigned) 0U), &Specs_32);
          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_8, Globals_9, Specs_32);
        }
      }
    }
  }
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word ErrorStream_6;
  MR_Word CmdLineArgs_8;
  MR_Word ArgResult_9;
  MR_Word Var_7;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__real_main_2_p_0


		{

#ifdef MR_BOEHM_GC
    // Explicitly force the initial heap size to be at least 4 Mb.
    //
    // This works around a bug in the Boehm collector (for versions up
    // to at least 6.2) where the collector would sometimes abort with
    // the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    // on dec-alpha-osf3.2).
    //
    // Doing this should also improve performance slightly by avoiding
    // frequent garbage collection during start-up.
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__io__stderr_stream_3_p_0(&ErrorStream_6);
  mercury__io__set_output_stream_4_p_0(ErrorStream_6, &Var_7);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&CmdLineArgs_8);
  top_level__mercury_compile_args__setup_all_args_6_p_0(ErrorStream_6, ErrorStream_6, CmdLineArgs_8, &ArgResult_9);
  if (!((ArgResult_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Globals_10 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, 0))));
    MR_Word ArgPack_11 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, 1))));
    MR_Word Version_27;
    MR_Word Help_28;
    MR_Word HelpPriv_29;
    MR_Word HelpTexInfo_30;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 3, &Version_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 0, &Help_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 1, &HelpPriv_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 2, &HelpTexInfo_30);
    succeeded = (Help_28 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOutStream_31;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_31);
      libs__print_help__long_usage_4_p_0(StdOutStream_31, (MR_Integer) 0);
    }
    else
    {
      succeeded = (HelpPriv_29 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word StdOutStream_60;

        mercury__io__stdout_stream_3_p_0(&StdOutStream_60);
        libs__print_help__long_usage_4_p_0(StdOutStream_60, (MR_Integer) 1);
      }
      else
      {
        succeeded = (HelpTexInfo_30 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word StdOutStream_61;

          mercury__io__stdout_stream_3_p_0(&StdOutStream_61);
          libs__print_help__document_options_for_users_guide_3_p_0(StdOutStream_61);
        }
        else
        {
          succeeded = (Version_27 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_String LibraryVersion_32;
            MR_String PackageVersion_33;
            MR_Word StdOutStream_62;

            mercury__io__stdout_stream_3_p_0(&StdOutStream_62);
            LibraryVersion_32 = mercury__library__mercury_version_0_f_0();
            PackageVersion_33 = mercury__library__package_version_0_f_0();
            mercury__io__write_string_4_p_0(StdOutStream_62, (MR_String) "Mercury Compiler, version ");
            mercury__io__write_string_4_p_0(StdOutStream_62, LibraryVersion_32);
            succeeded = (strcmp(PackageVersion_33, (MR_String) "") == 0);
            if (succeeded)
              mercury__io__nl_3_p_0(StdOutStream_62);
            else
            {
              mercury__io__write_string_4_p_0(StdOutStream_62, (MR_String) " (");
              mercury__io__write_string_4_p_0(StdOutStream_62, PackageVersion_33);
              mercury__io__write_string_4_p_0(StdOutStream_62, (MR_String) ")\n");
            }
            libs__print_help__write_copyright_notice_3_p_0(StdOutStream_62);
          }
          else
          {
            MR_Word OpMode_34;
            MR_Word HaveParseTreeMaps0_35;
            MR_Word Specs_38;
            MR_Word _HaveParseTreeMaps_37;

            libs__globals__get_op_mode_2_p_0(Globals_10, &OpMode_34);
            HaveParseTreeMaps0_35 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
            top_level__mercury_compile_main__do_op_mode_11_p_0(ErrorStream_6, ErrorStream_6, Globals_10, OpMode_34, ArgPack_11, HaveParseTreeMaps0_35, &_HaveParseTreeMaps_37, (MR_Word) ((MR_Unsigned) 0U), &Specs_38);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_10, Specs_38);
          }
        }
      }
    }
  }
  make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0();
  parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0();
  hlds__instmap__record_instmap_delta_restrict_stats_2_p_0();
  libs__globals__close_any_specific_compiler_streams_2_p_0();
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word OpMode_15,
  MR_Word ArgPack_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OpMode_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpMode_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MakeGlobals_20;

            libs__globals__set_option_4_p_0((MR_Integer) 5, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals_14, &MakeGlobals_20);
            make__top_level__make_process_compiler_args_5_p_0(ProgressStream_12, MakeGlobals_20, ArgPack_16);
            *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_0_34;
            *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_24 = ((MR_Word) ((MR_hl_field(0, ArgPack_16, 3))));

            parse_tree__source_file_map__write_source_file_map_5_p_0(ErrorStream_13, Globals_14, Args_24);
            *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_0_34;
            *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String StandaloneIntBasename_25 = ((MR_String) ((MR_hl_field(1, OpMode_15, 0))));
        MR_Word Target_54;

        libs__globals__get_target_2_p_0(Globals_14, &Target_54);
        switch (Target_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__make_standalone_interface_5_p_0(Globals_14, ProgressStream_12, StandaloneIntBasename_25);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String ProgName_55;
              MR_Word Pieces_56;
              MR_Word Spec_57;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_String Var_77;

              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_55);
              {
                Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_60, 0) = ((MR_Box) (ProgName_55));
              }
              Var_77 = libs__globals__compilation_target_string_1_f_0(Target_54);
              {
                Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
                MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[11])));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[8])));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[7])));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[6])));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[5])));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
              }
              {
                Pieces_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_56, 0) = ((MR_Box) (Var_60));
                MR_hl_field(1, Pieces_56, 1) = ((MR_Box) (Var_61));
              }
              {
                Spec_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/6"));
                MR_hl_field(1, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_57, 3) = ((MR_Box) (Pieces_56));
              }
              parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_13, Globals_14, Spec_57);
            }
            break;
        }
        *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeQuery_26 = ((MR_Word) ((MR_hl_field(2, OpMode_15, 0))));

        top_level__mercury_compile_main__do_op_mode_query_5_p_0(ErrorStream_13, Globals_14, OpModeQuery_26);
        *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_27 = ((MR_Word) ((MR_hl_field(3, OpMode_15, 0))));
        MR_Word InvokedByMmcMake_28 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_15, 1))) & (MR_Integer) 1);
        MR_Word FileNamesFromStdin_29;
        MR_Word Args_53;

        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 5, &FileNamesFromStdin_29);
        Args_53 = ((MR_Word) ((MR_hl_field(0, ArgPack_16, 3))));
        succeeded = (Args_53 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (FileNamesFromStdin_29 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word StdErr_33;

          mercury__io__stderr_stream_3_p_0(&StdErr_33);
          libs__print_help__short_usage_3_p_0(StdErr_33);
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
          *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_0_34;
        }
        else
          top_level__mercury_compile_main__do_op_mode_args_13_p_0(ProgressStream_12, ErrorStream_13, Globals_14, OpModeArgs_27, InvokedByMmcMake_28, FileNamesFromStdin_29, ArgPack_16, STATE_VARIABLE_HaveParseTreeMaps_0_34, STATE_VARIABLE_HaveParseTreeMaps_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
      }
      break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__397__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word FileNamesFromStdin_19,
  MR_Word ArgPack_20,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_bool succeeded;
  MR_Word EnvOptFileVariables_24 = ((MR_Word) ((MR_hl_field(0, ArgPack_20, 0))));
  MR_Word EnvVarArgs_25 = ((MR_Word) ((MR_hl_field(0, ArgPack_20, 1))));
  MR_Word OptionArgs_26 = ((MR_Word) ((MR_hl_field(0, ArgPack_20, 2))));
  MR_Word Args_27 = ((MR_Word) ((MR_hl_field(0, ArgPack_20, 3))));
  MR_Word Params_28;
  MR_Word LibgradeCheckSpecs_29;
  MR_Word StdErr_30;
  MR_Word Statistics_41;

  {
    Params_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_28, 0) = ((MR_Box) (EnvOptFileVariables_24));
    MR_hl_field(0, Params_28, 1) = ((MR_Box) (EnvVarArgs_25));
    MR_hl_field(0, Params_28, 2) = ((MR_Box) (OptionArgs_26));
  }
  libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_16, &LibgradeCheckSpecs_29);
  mercury__io__stderr_stream_3_p_0(&StdErr_30);
  if ((LibgradeCheckSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ModulesToLinkCord_32;
    MR_Word ExtraObjFilesCord_33;
    MR_Integer ExitStatus_34;

    switch (FileNamesFromStdin_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (InvokedByMmcMake_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_64;
                MR_Word Var_65;

                Var_64 = mercury__cord__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
                Var_65 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(ProgressStream_14, ErrorStream_15, Globals_16, OpModeArgs_17, InvokedByMmcMake_18, OptionArgs_26, Args_27, Var_64, &ModulesToLinkCord_32, Var_65, &ExtraObjFilesCord_33, STATE_VARIABLE_HaveParseTreeMaps_0_42, STATE_VARIABLE_HaveParseTreeMaps_43);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_60;
                MR_Word Var_61;

                Var_60 = mercury__cord__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
                Var_61 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_15_p_0(ProgressStream_14, ErrorStream_15, Globals_16, OpModeArgs_17, InvokedByMmcMake_18, Params_28, Args_27, Var_60, &ModulesToLinkCord_32, Var_61, &ExtraObjFilesCord_33, STATE_VARIABLE_HaveParseTreeMaps_0_42, STATE_VARIABLE_HaveParseTreeMaps_43);
              }
              break;
          }
          *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word StdIn_31;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_args_13_p_0_1));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (InvokedByMmcMake_18));
            MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/13", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
          mercury__io__stdin_stream_3_p_0(&StdIn_31);
          Var_55 = mercury__cord__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          Var_56 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_17_p_0(ProgressStream_14, ErrorStream_15, StdIn_31, Globals_16, OpModeArgs_17, InvokedByMmcMake_18, Params_28, Var_55, &ModulesToLinkCord_32, Var_56, &ExtraObjFilesCord_33, STATE_VARIABLE_HaveParseTreeMaps_0_42, STATE_VARIABLE_HaveParseTreeMaps_43, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
        }
        break;
    }
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_16, *STATE_VARIABLE_Specs_45);
    parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_15, Globals_16);
    mercury__io__get_exit_status_3_p_0(&ExitStatus_34);
    succeeded = (ExitStatus_34 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ModulesToLink_35;
      MR_Word ExtraObjFiles_36;
      MR_Word FirstModule_37;
      MR_Word Var_71;
      MR_Word Var_72;

      ModulesToLink_35 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesToLinkCord_32);
      ExtraObjFiles_36 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_33);
      succeeded = ((MR_tag((MR_Word) OpModeArgs_17)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_17, 0))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_72 = ((MR_Unsigned) ((MR_hl_field(1, Var_71, 0))) & (MR_Integer) 3);
          succeeded = (Var_72 == (MR_Integer) 3);
          if (succeeded)
          {
            succeeded = (ModulesToLink_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              FirstModule_37 = ((MR_Word) ((MR_hl_field(1, ModulesToLink_35, 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Target_87;
        MR_Word Succeeded_88;

        libs__globals__get_target_2_p_0(Globals_16, &Target_87);
        switch (Target_87) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word Specs_89;

              switch (InvokedByMmcMake_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0(ProgressStream_14, Globals_16, ModulesToLink_35, ExtraObjFiles_36, &Specs_89, &Succeeded_88);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word DefaultOptionTable_90;
                    MR_Word MaybeStdLibGrades_91;
                    MR_Word MayBuild_92;

                    libs__globals__get_default_options_2_p_0(Globals_16, &DefaultOptionTable_90);
                    libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_16, &MaybeStdLibGrades_91);
                    make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_14, DefaultOptionTable_90, MaybeStdLibGrades_91, (MR_Integer) 0, FirstModule_37, Params_28, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_92);
                    if (((MR_tag((MR_Word) MayBuild_92)) == (MR_Integer) 1))
                    {
                      MR_Word BuildGlobals_94 = ((MR_Word) ((MR_hl_field(1, MayBuild_92, 1))));

                      backend_libs__link_target_code__link_modules_into_executable_or_shared_library_for_c_8_p_0(ProgressStream_14, BuildGlobals_94, ModulesToLink_35, ExtraObjFiles_36, &Specs_89, &Succeeded_88);
                    }
                    else
                    {
                      Specs_89 = ((MR_Word) ((MR_hl_field(0, MayBuild_92, 0))));
                      Succeeded_88 = (MR_Integer) 0;
                    }
                  }
                  break;
              }
              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_16, Specs_89);
            }
            break;
          case (MR_Integer) 2:
            parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_14, Globals_16, FirstModule_37, &Succeeded_88);
            break;
        }
        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_88);
      }
    }
  }
  else
  {
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_16, STATE_VARIABLE_Specs_0_44);
    parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_15, Globals_16);
    parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_30, Globals_16, LibgradeCheckSpecs_29);
    *STATE_VARIABLE_HaveParseTreeMaps_43 = STATE_VARIABLE_HaveParseTreeMaps_0_42;
    *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 133, &Statistics_41);
  switch (Statistics_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__benchmarking__full_memory_stats_are_available_0_p_0();
        if (succeeded)
          mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_30);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModulesToLink_0_8,
  MR_Word * STATE_VARIABLE_ModulesToLink_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveParseTreeMaps_13 = STATE_VARIABLE_HaveParseTreeMaps_0_12;
      *STATE_VARIABLE_ExtraObjFiles_11 = STATE_VARIABLE_ExtraObjFiles_0_10;
      *STATE_VARIABLE_ModulesToLink_9 = STATE_VARIABLE_ModulesToLink_0_8;
    }
    else
    {
      MR_String Arg_40 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word Args_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word FileOrModule_46;
      MR_Word ArgModules_47;
      MR_Word ArgExtraObjFiles_48;
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_59;
      MR_Word STATE_VARIABLE_ModulesToLink_1_62;
      MR_Word STATE_VARIABLE_ExtraObjFiles_1_63;
      MR_String FileName_66;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_ModulesToLink_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;

      succeeded = mercury__string__remove_suffix_3_p_0(Arg_40, (MR_String) ".m", &FileName_66);
      if (succeeded)
        {
          FileOrModule_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FileOrModule_46, 0) = ((MR_Box) (FileName_66));
        }
      else
      {
        MR_Word ModuleName_67;

        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_40, &ModuleName_67);
        {
          FileOrModule_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FileOrModule_46, 0) = ((MR_Box) (ModuleName_67));
        }
      }
      top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, OptionArgs_6, FileOrModule_46, &ArgModules_47, &ArgExtraObjFiles_48, STATE_VARIABLE_HaveParseTreeMaps_0_12, &STATE_VARIABLE_HaveParseTreeMaps_1_59);
      if (!((Args_41 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      mercury__cord__snoc_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ArgModules_47, STATE_VARIABLE_ModulesToLink_0_8, &STATE_VARIABLE_ModulesToLink_1_62);
      mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_48, STATE_VARIABLE_ExtraObjFiles_0_10, &STATE_VARIABLE_ExtraObjFiles_1_63);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = Args_41;
      next_value_of_STATE_VARIABLE_ModulesToLink_0_8 = STATE_VARIABLE_ModulesToLink_1_62;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10 = STATE_VARIABLE_ExtraObjFiles_1_63;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12 = STATE_VARIABLE_HaveParseTreeMaps_1_59;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_ModulesToLink_0_8 = next_value_of_STATE_VARIABLE_ModulesToLink_0_8;
      STATE_VARIABLE_ExtraObjFiles_0_10 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      STATE_VARIABLE_HaveParseTreeMaps_0_12 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word Params_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveParseTreeMaps_13 = STATE_VARIABLE_HaveParseTreeMaps_0_12;
      *STATE_VARIABLE_ExtraObjFiles_11 = STATE_VARIABLE_ExtraObjFiles_0_10;
      *STATE_VARIABLE_Modules_9 = STATE_VARIABLE_Modules_0_8;
    }
    else
    {
      MR_String Arg_40 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word Args_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word ArgModules_46;
      MR_Word ArgExtraObjFiles_47;
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_58;
      MR_Word STATE_VARIABLE_Modules_1_61;
      MR_Word STATE_VARIABLE_ExtraObjFiles_1_62;
      MR_Word DefaultOptionTable_65;
      MR_Word FileOrModule_66;
      MR_Word ModuleName_67;
      MR_Word MaybeStdLibGrades_68;
      MR_Word MayBuild_70;
      MR_String FileName_79;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;

      libs__globals__get_default_options_2_p_0(Globals_3, &DefaultOptionTable_65);
      succeeded = mercury__string__remove_suffix_3_p_0(Arg_40, (MR_String) ".m", &FileName_79);
      if (succeeded)
      {
        {
          FileOrModule_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FileOrModule_66, 0) = ((MR_Box) (FileName_79));
        }
        parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_79, &ModuleName_67);
      }
      else
      {
        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_40, &ModuleName_67);
        {
          FileOrModule_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FileOrModule_66, 0) = ((MR_Box) (ModuleName_67));
        }
      }
      libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_3, &MaybeStdLibGrades_68);
      make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_1, DefaultOptionTable_65, MaybeStdLibGrades_68, (MR_Integer) 0, ModuleName_67, Params_6, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_70);
      if (((MR_tag((MR_Word) MayBuild_70)) == (MR_Integer) 1))
      {
        MR_Word BuildGlobals_73 = ((MR_Word) ((MR_hl_field(1, MayBuild_70, 1))));
        MR_Word OptionArgs_76 = ((MR_Word) ((MR_hl_field(0, Params_6, 2))));

        top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_1, ErrorStream_2, BuildGlobals_73, OpModeArgs_4, InvokedByMmcMake_5, OptionArgs_76, FileOrModule_66, &ArgModules_46, &ArgExtraObjFiles_47, STATE_VARIABLE_HaveParseTreeMaps_0_12, &STATE_VARIABLE_HaveParseTreeMaps_1_58);
      }
      else
      {
        MR_Word SetupSpecs_71 = ((MR_Word) ((MR_hl_field(0, MayBuild_70, 0))));

        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_2, Globals_3, SetupSpecs_71);
        ArgModules_46 = (MR_Word) ((MR_Unsigned) 0U);
        ArgExtraObjFiles_47 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HaveParseTreeMaps_1_58 = STATE_VARIABLE_HaveParseTreeMaps_0_12;
      }
      if (!((Args_41 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      mercury__cord__snoc_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ArgModules_46, STATE_VARIABLE_Modules_0_8, &STATE_VARIABLE_Modules_1_61);
      mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_47, STATE_VARIABLE_ExtraObjFiles_0_10, &STATE_VARIABLE_ExtraObjFiles_1_62);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = Args_41;
      next_value_of_STATE_VARIABLE_Modules_0_8 = STATE_VARIABLE_Modules_1_61;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10 = STATE_VARIABLE_ExtraObjFiles_1_62;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12 = STATE_VARIABLE_HaveParseTreeMaps_1_58;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_Modules_0_8 = next_value_of_STATE_VARIABLE_Modules_0_8;
      STATE_VARIABLE_ExtraObjFiles_0_10 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      STATE_VARIABLE_HaveParseTreeMaps_0_12 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word StdIn_20,
  MR_Word Globals_21,
  MR_Word OpModeArgs_22,
  MR_Word InvokedByMmcMake_23,
  MR_Word Params_24,
  MR_Word STATE_VARIABLE_Modules_0_39,
  MR_Word * STATE_VARIABLE_Modules_40,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_41,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_42,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineResult_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Modules_0_39);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_20, &LineResult_30);
    switch (MR_tag((MR_Word) LineResult_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_40 = STATE_VARIABLE_Modules_0_39;
          *STATE_VARIABLE_ExtraObjFiles_42 = STATE_VARIABLE_ExtraObjFiles_0_41;
          *STATE_VARIABLE_HaveParseTreeMaps_44 = STATE_VARIABLE_HaveParseTreeMaps_0_43;
          *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_31 = ((MR_String) ((MR_hl_field(1, LineResult_30, 0))));
          MR_String Arg_32;
          MR_Word ArgModules_33;
          MR_Word ArgExtraObjFiles_34;
          MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_51;
          MR_Word STATE_VARIABLE_Modules_1_53;
          MR_Word STATE_VARIABLE_ExtraObjFiles_1_54;
          MR_Word DefaultOptionTable_76;
          MR_Word FileOrModule_77;
          MR_Word ModuleName_78;
          MR_Word MaybeStdLibGrades_79;
          MR_Word MayBuild_81;
          MR_String FileName_90;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_39;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_41;
          MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_43;

          Arg_32 = mercury__string__rstrip_1_f_0(Line_31);
          libs__globals__get_default_options_2_p_0(Globals_21, &DefaultOptionTable_76);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_32, (MR_String) ".m", &FileName_90);
          if (succeeded)
          {
            {
              FileOrModule_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FileOrModule_77, 0) = ((MR_Box) (FileName_90));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_90, &ModuleName_78);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_32, &ModuleName_78);
            {
              FileOrModule_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FileOrModule_77, 0) = ((MR_Box) (ModuleName_78));
            }
          }
          libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_21, &MaybeStdLibGrades_79);
          make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_18, DefaultOptionTable_76, MaybeStdLibGrades_79, (MR_Integer) 0, ModuleName_78, Params_24, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_81);
          if (((MR_tag((MR_Word) MayBuild_81)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_84 = ((MR_Word) ((MR_hl_field(1, MayBuild_81, 1))));
            MR_Word OptionArgs_87 = ((MR_Word) ((MR_hl_field(0, Params_24, 2))));

            top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_18, ErrorStream_19, BuildGlobals_84, OpModeArgs_22, InvokedByMmcMake_23, OptionArgs_87, FileOrModule_77, &ArgModules_33, &ArgExtraObjFiles_34, STATE_VARIABLE_HaveParseTreeMaps_0_43, &STATE_VARIABLE_HaveParseTreeMaps_1_51);
          }
          else
          {
            MR_Word SetupSpecs_82 = ((MR_Word) ((MR_hl_field(0, MayBuild_81, 0))));

            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_19, Globals_21, SetupSpecs_82);
            ArgModules_33 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_34 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveParseTreeMaps_1_51 = STATE_VARIABLE_HaveParseTreeMaps_0_43;
          }
          mercury__cord__snoc_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ArgModules_33, STATE_VARIABLE_Modules_0_39, &STATE_VARIABLE_Modules_1_53);
          mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_34, STATE_VARIABLE_ExtraObjFiles_0_41, &STATE_VARIABLE_ExtraObjFiles_1_54);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_39 = STATE_VARIABLE_Modules_1_53;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_41 = STATE_VARIABLE_ExtraObjFiles_1_54;
          next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_43 = STATE_VARIABLE_HaveParseTreeMaps_1_51;
          STATE_VARIABLE_Modules_0_39 = next_value_of_STATE_VARIABLE_Modules_0_39;
          STATE_VARIABLE_ExtraObjFiles_0_41 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_41;
          STATE_VARIABLE_HaveParseTreeMaps_0_43 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_43;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_35 = ((MR_Word) ((MR_hl_field(2, LineResult_30, 0))));
          MR_String Msg_36;
          MR_Word Pieces_37;
          MR_Word Spec_38;
          MR_Word Var_62;
          MR_Word Var_63;

          mercury__io__error_message_2_p_0(Error_35, &Msg_36);
          {
            Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_63, 1) = ((MR_Box) (Msg_36));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[11])));
          }
          {
            Pieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_37, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[12])));
            MR_hl_field(1, Pieces_37, 1) = ((MR_Box) (Var_62));
          }
          {
            Spec_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/17"));
            MR_hl_field(1, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_38, 3) = ((MR_Box) (Pieces_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
          }
          *STATE_VARIABLE_Modules_40 = STATE_VARIABLE_Modules_0_39;
          *STATE_VARIABLE_ExtraObjFiles_42 = STATE_VARIABLE_ExtraObjFiles_0_41;
          *STATE_VARIABLE_HaveParseTreeMaps_44 = STATE_VARIABLE_HaveParseTreeMaps_0_43;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_error_spec__write_error_specs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word OptionArgs_19,
  MR_Word FileOrModule_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_44,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_45)
{
  MR_bool succeeded;
  MR_Word SpecsList_29;
  MR_Word Var_69;
  MR_Box conv0_STATE_VARIABLE_IO_9_70;

  switch (MR_tag((MR_Word) OpModeArgs_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DepSpecs_72;
            MR_Word _DepsMap_30;

            parse_tree__write_deps_file__generate_and_write_d_file_gendep_7_p_0(ProgressStream_14, Globals0_16, FileOrModule_20, &_DepsMap_30, &DepSpecs_72);
            {
              SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (DepSpecs_72));
              MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Globals_31;
            MR_Word HaveReadSrc_32;
            MR_Word Errors_34;
            MR_Word Specs_75;

            top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_14, Globals0_16, &Globals_31, FileOrModule_20, (MR_Integer) 0, &HaveReadSrc_32, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
            if (((MR_tag((MR_Word) HaveReadSrc_32)) == (MR_Integer) 0))
            {
              MR_Word ParseTreeSrc_35 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_32, 1))));
              MR_Word Source_36 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_32, 2))));
              MR_Word _MaybeTimestamp_37;
              MR_Word Var_113;
              MR_Word Var_115;

              parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_36, &_MaybeTimestamp_37, &Errors_34);
              Var_115 = ((MR_Word) ((MR_hl_field(0, Errors_34, 0))));
              Var_113 = ((MR_Word) ((MR_hl_field(0, Errors_34, 2))));
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_115);
              if (!(succeeded))
              {
                MR_Word HaltSyntax_97;
                MR_Word Var_100;

                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_113);
                if (succeeded)
                {
                  Var_100 = (MR_Integer) 252;
                  libs__globals__lookup_bool_option_3_p_0(Globals_31, Var_100, &HaltSyntax_97);
                  succeeded = (HaltSyntax_97 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_35, 0))));
                MR_String UglyFileName_39;
                MR_Word _Succeeded_40;

                parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 14, ModuleName_38, &UglyFileName_39);
                parse_tree__parse_tree_out__output_parse_tree_src_7_p_0(ProgressStream_14, Globals_31, UglyFileName_39, ParseTreeSrc_35, &_Succeeded_40);
              }
            }
            else
              Errors_34 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_32, 1))));
            Specs_75 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_34);
            {
              SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_75));
              MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeMakeInts_25 = ((MR_Unsigned) ((MR_hl_field(1, OpModeArgs_17, 0))) & (MR_Integer) 1);
        MR_Word DepsMap_26;
        MR_Word DepSpecs_27;
        MR_Word Specs_28;
        MR_Word Var_49;

        parse_tree__write_deps_file__generate_and_write_dep_file_gendep_7_p_0(ProgressStream_14, Globals0_16, FileOrModule_20, &DepsMap_26, &DepSpecs_27);
        succeeded = (MaybeMakeInts_25 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = parse_tree__error_util__contains_errors_2_f_0(Globals0_16, DepSpecs_27);
          succeeded = (Var_49 == (MR_Integer) 0);
        }
        if (succeeded)
          top_level__mercury_compile_main__deps_make_ints_9_p_0(ProgressStream_14, Globals0_16, DepsMap_26, DepSpecs_27, &Specs_28, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
        else
        {
          Specs_28 = DepSpecs_27;
          *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
        }
        {
          SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_28));
          MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InterfaceFile_41 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_17, 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(ProgressStream_14, Globals0_16, InterfaceFile_41, FileOrModule_20, &SpecsList_29, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeAugment_42 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_17, 0))));
        MR_Word WhatToRecompile_43;
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_4_63;
        MR_Word Globals_79;
        MR_Word Smart0_87;
        MR_Word DisableSmart_88;
        MR_Word Var_65;

        libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 653, &Smart0_87);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_88);
        switch (DisableSmart_88) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 653, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals0_16, &Globals_79);
              WhatToRecompile_43 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveParseTreeMaps_4_63 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_79 = Globals0_16;
              switch (Smart0_87) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    WhatToRecompile_43 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveParseTreeMaps_4_63 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_90;

                    if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
                    {
                      MR_String FileName_91 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_91, &ModuleName_90);
                    }
                    else
                      ModuleName_90 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, 0))));
                    recompilation__check__what_file_components_should_we_recompile_8_p_0(ProgressStream_14, Globals_79, ModuleName_90, &WhatToRecompile_43, STATE_VARIABLE_HaveParseTreeMaps_0_44, &STATE_VARIABLE_HaveParseTreeMaps_4_63);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (WhatToRecompile_43 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_65 = ((MR_Word) ((MR_hl_field(1, WhatToRecompile_43, 0))));
          succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          SpecsList_29 = (MR_Word) ((MR_Unsigned) 0U);
          *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_4_63;
        }
        else
        {
          MR_Word Specs_76;

          top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(ProgressStream_14, ErrorStream_15, Globals_79, OpModeAugment_42, InvokedByMmcMake_18, OptionArgs_19, FileOrModule_20, WhatToRecompile_43, ModulesToLink_21, ExtraObjFiles_22, &Specs_76, STATE_VARIABLE_HaveParseTreeMaps_4_63, STATE_VARIABLE_HaveParseTreeMaps_45);
          {
            SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_76));
            MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (ErrorStream_15));
    MR_hl_field(0, Var_69, 4) = ((MR_Box) (Globals0_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, SpecsList_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9_70);
  parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_15, Globals0_16);
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals0_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word OptionArgs_21,
  MR_Word FileOrModule_22,
  MR_Word MaybeWhatToRecompile_23,
  MR_Word * ModulesToLink_24,
  MR_Word * ExtraObjFiles_25,
  MR_Word * Specs_26,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42)
{
  MR_bool succeeded;
  MR_Word Globals_32;
  MR_Word HaveReadSrc_33;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_50;

  switch (MR_tag((MR_Word) OpModeAugment_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ReportCmdLineArgsDotErr_30;
            MR_Word StdErrStream_31;

            libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 690, &ReportCmdLineArgsDotErr_30);
            mercury__io__stderr_stream_3_p_0(&StdErrStream_31);
            switch (ReportCmdLineArgsDotErr_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_59;
                  MR_Word Var_61;

                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options start\n");
                  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_21, (MR_Word) ((MR_Unsigned) 0U));
                  Var_59 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_61);
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(StdErrStream_31, Var_59);
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options end\n");
                }
                break;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReportCmdLineArgsDotErr_30;
        MR_Word StdErrStream_31;

        libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 690, &ReportCmdLineArgsDotErr_30);
        mercury__io__stderr_stream_3_p_0(&StdErrStream_31);
        switch (ReportCmdLineArgsDotErr_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_59;
              MR_Word Var_61;

              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options start\n");
              Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_21, (MR_Word) ((MR_Unsigned) 0U));
              Var_59 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_61);
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% ");
              mercury__io__write_string_4_p_0(StdErrStream_31, Var_59);
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "\n");
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options end\n");
            }
            break;
        }
      }
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_16, Globals0_18, &Globals_32, FileOrModule_22, (MR_Integer) 1, &HaveReadSrc_33, STATE_VARIABLE_HaveParseTreeMaps_0_41, &STATE_VARIABLE_HaveParseTreeMaps_1_50);
  if (((MR_tag((MR_Word) HaveReadSrc_33)) == (MR_Integer) 0))
  {
    MR_String SourceFileName_36 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_33, 0))));
    MR_Word ParseTreeSrc_37 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_33, 1))));
    MR_Word Source_38 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_33, 2))));
    MR_Word MaybeTimestamp_39;
    MR_Word ReadModuleErrors_40;
    MR_Word Var_88;
    MR_Word Var_90;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_38, &MaybeTimestamp_39, &ReadModuleErrors_40);
    Var_90 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_40, 0))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_40, 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_90);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_72;
      MR_Word Var_75;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_88);
      if (succeeded)
      {
        Var_75 = (MR_Integer) 252;
        libs__globals__lookup_bool_option_3_p_0(Globals_32, Var_75, &HaltSyntax_72);
        succeeded = (HaltSyntax_72 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      *Specs_26 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_40);
      *ModulesToLink_24 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_1_50;
    }
    else
      top_level__mercury_compile_augment__augment_and_process_source_file_17_p_0(ProgressStream_16, ErrorStream_17, Globals_32, OpModeAugment_19, InvokedByMmcMake_20, SourceFileName_36, MaybeTimestamp_39, ReadModuleErrors_40, ParseTreeSrc_37, MaybeWhatToRecompile_23, ModulesToLink_24, ExtraObjFiles_25, Specs_26, STATE_VARIABLE_HaveParseTreeMaps_1_50, STATE_VARIABLE_HaveParseTreeMaps_42);
  }
  else
  {
    MR_Word Errors_35 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_33, 1))));

    *Specs_26 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_35);
    *ModulesToLink_24 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_25 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_1_50;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__5_5;
  MR_Word conv11_HeadVar__6_6;
  MR_Word conv10_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__5_5, &conv11_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__5_5;
  MR_Word conv6_HeadVar__6_6;
  MR_Word conv5_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int1_int2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__5_5, &conv6_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv5_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv5_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int0_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__8_8));
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1013__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals0_11,
  MR_Word InterfaceFile_12,
  MR_Word FileOrModule_13,
  MR_Word * SpecLists_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41)
{
  MR_bool succeeded;
  MR_Word ReturnTimestamp_17;
  MR_Word Globals_19;
  MR_Word HaveReadSrc_20;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_46;

  switch (InterfaceFile_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GenerateVersionNumbers_18;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 788, &GenerateVersionNumbers_18);
        switch (GenerateVersionNumbers_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenerateVersionNumbers_63;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 788, &GenerateVersionNumbers_63);
        switch (GenerateVersionNumbers_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      ReturnTimestamp_17 = (MR_Integer) 0;
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_10, Globals0_11, &Globals_19, FileOrModule_13, ReturnTimestamp_17, &HaveReadSrc_20, STATE_VARIABLE_HaveParseTreeMaps_0_40, &STATE_VARIABLE_HaveParseTreeMaps_1_46);
  if (((MR_tag((MR_Word) HaveReadSrc_20)) == (MR_Integer) 0))
  {
    MR_String FileName_24 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_20, 0))));
    MR_Word ParseTreeSrc_25 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, 1))));
    MR_Word Source_26 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, 2))));
    MR_Word MaybeTimestamp_27;
    MR_Word ReadErrors_69;
    MR_Word ReadSpecs_70;
    MR_Word Var_160;
    MR_Word Var_162;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_26, &MaybeTimestamp_27, &ReadErrors_69);
    ReadSpecs_70 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_69);
    Var_162 = ((MR_Word) ((MR_hl_field(0, ReadErrors_69, 0))));
    Var_160 = ((MR_Word) ((MR_hl_field(0, ReadErrors_69, 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_162);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_144;
      MR_Word Var_147;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_160);
      if (succeeded)
      {
        Var_147 = (MR_Integer) 252;
        libs__globals__lookup_bool_option_3_p_0(Globals_19, Var_147, &HaltSyntax_144);
        succeeded = (HaltSyntax_144 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SpecLists_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReadSpecs_70));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_HaveParseTreeMaps_41 = STATE_VARIABLE_HaveParseTreeMaps_1_46;
    }
    else
    {
      MR_Word BurdenedModules_29;
      MR_Word ReadSplitSpecs0_30;
      MR_Word ReadSplitSpecs_31;
      MR_Word WriteSpecsList_39;

      parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_19, FileName_24, ReadErrors_69, MaybeTimestamp_27, ParseTreeSrc_25, &ReadSplitSpecs0_30, &BurdenedModules_29);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_19, ReadSplitSpecs0_30, &ReadSplitSpecs_31);
      switch (InterfaceFile_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AncestorBurdenedModules_37;
            MR_Word Var_51;
            MR_Word _Succeededs_38;
            MR_Box conv4_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv3_STATE_VARIABLE_IO_43;

            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[6]), BurdenedModules_29, &AncestorBurdenedModules_37);
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_51, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2));
              MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_51, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_51, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_51, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, AncestorBurdenedModules_37, &_Succeededs_38, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_1_46)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv4_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_55;
            MR_Word _Succeededs_65;
            MR_Box conv9_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv8_STATE_VARIABLE_IO_43;

            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_55, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, BurdenedModules_29, &_Succeededs_65, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_1_46)), &conv9_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv9_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_59;
            MR_Word _Succeededs_67;
            MR_Box conv14_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv13_STATE_VARIABLE_IO_43;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_59, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_59, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, BurdenedModules_29, &_Succeededs_67, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_1_46)), &conv14_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv14_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SpecLists_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReadSplitSpecs_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (WriteSpecsList_39));
      }
    }
  }
  else
  {
    MR_Word ReadErrors_22 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_20, 1))));
    MR_Word ReadSpecs_23;

    ReadSpecs_23 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SpecLists_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ReadSpecs_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_HaveParseTreeMaps_41 = STATE_VARIABLE_HaveParseTreeMaps_1_46;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveSrc_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42)
{
  MR_bool succeeded;
  MR_Word Verbose_19;
  MR_Word ModuleName_20;
  MR_String ParsingMsg_22;
  MR_Word Stats_40;
  MR_Word HaveSrc1_32;
  MR_Word HaveSrc0_24;
  MR_String FN_25;
  MR_Word PT_26;
  MR_Word Source0_27;
  MR_Word MaybeTimestamp0_28;
  MR_Word E_29;
  MR_Word MaybeTimestamp_30;
  MR_Word Source_31;
  MR_Word Var_55;
  MR_Box conv0_HaveSrc0_24;

  libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 131, &Verbose_19);
  if (((MR_tag((MR_Word) FileOrModuleName_14)) == (MR_Integer) 0))
  {
    MR_String FileName0_23 = ((MR_String) ((MR_hl_field(0, FileOrModuleName_14, 0))));
    MR_String Var_102;

    Var_102 = mercury__string__f_43_43_2_f_0(FileName0_23, (MR_String) "\'.m and imported interfaces...\n");
    ParsingMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_102);
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName0_23, &ModuleName_20);
  }
  else
  {
    MR_String ModuleNameStr_21;
    MR_String Var_99;

    ModuleName_20 = ((MR_Word) ((MR_hl_field(1, FileOrModuleName_14, 0))));
    ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_20);
    Var_99 = mercury__string__f_43_43_2_f_0(ModuleNameStr_21, (MR_String) "\'.m and imported interfaces...\n");
    ParsingMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_99);
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_19, ParsingMsg_22);
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), Var_55, ((MR_Box) (ModuleName_20)), &conv0_HaveSrc0_24);
  if (succeeded)
  {
    HaveSrc0_24 = ((MR_Word) (conv0_HaveSrc0_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveSrc0_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_25 = ((MR_String) ((MR_hl_field(0, HaveSrc0_24, 0))));
      PT_26 = ((MR_Word) ((MR_hl_field(0, HaveSrc0_24, 1))));
      Source0_27 = ((MR_Word) ((MR_hl_field(0, HaveSrc0_24, 2))));
      succeeded = (Source0_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeTimestamp0_28 = ((MR_Word) ((MR_hl_field(1, Source0_27, 0))));
        E_29 = ((MR_Word) ((MR_hl_field(1, Source0_27, 1))));
        parse_tree__read_modules__return_timestamp_if_needed_3_p_0(ReturnTimestamp_15, MaybeTimestamp0_28, &MaybeTimestamp_30);
        {
          Source_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_31, 0) = ((MR_Box) (MaybeTimestamp_30));
          MR_hl_field(1, Source_31, 1) = ((MR_Box) (E_29));
        }
        {
          HaveSrc1_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HaveSrc1_32, 0) = ((MR_Box) (FN_25));
          MR_hl_field(0, HaveSrc1_32, 1) = ((MR_Box) (PT_26));
          MR_hl_field(0, HaveSrc1_32, 2) = ((MR_Box) (Source_31));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word HaveReadModuleMapSrc0_33;
    MR_Word HaveReadModuleMapSrc_34;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;

    *Globals_13 = Globals0_12;
    *HaveSrc_16 = HaveSrc1_32;
    HaveReadModuleMapSrc0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 0))));
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), ((MR_Box) (ModuleName_20)), HaveReadModuleMapSrc0_33, &HaveReadModuleMapSrc_34);
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 1))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 2))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 3))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 4))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 5))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 6))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_42 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (HaveReadModuleMapSrc_34));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_93));
    }
  }
  else
  {
    MR_Word HaveReadSrc_36;
    MR_Word DisableSmart_39;

    if (((MR_tag((MR_Word) FileOrModuleName_14)) == (MR_Integer) 0))
    {
      MR_String FileName_37 = ((MR_String) ((MR_hl_field(0, FileOrModuleName_14, 0))));
      MR_String FileNameDotM_38;
      MR_Word Var_65;

      FileNameDotM_38 = mercury__string__f_43_43_2_f_0(FileName_37, (MR_String) ".m");
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_from_file_10_p_0(ProgressStream_11, Globals0_12, FileName_37, FileNameDotM_38, (MR_Integer) 0, (MR_Integer) 0, Var_65, &HaveReadSrc_36);
    }
    else
    {
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_10_p_0(ProgressStream_11, Globals0_12, (MR_Integer) 1, (MR_Integer) 0, ModuleName_20, (MR_Word) ((MR_Unsigned) 0U), Var_60, &HaveReadSrc_36);
    }
    *HaveSrc_16 = (MR_Word) (HaveReadSrc_36);
    libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_39);
    switch (DisableSmart_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 653, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals0_12, Globals_13);
        break;
      case (MR_Integer) 0:
        *Globals_13 = Globals0_12;
        break;
    }
    *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_0_41;
  }
  libs__globals__lookup_bool_option_3_p_0(*Globals_13, (MR_Integer) 686, &Stats_40);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_40);
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_HeadVar__5_5;
  MR_Word conv18_HeadVar__6_6;
  MR_Word conv17_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int1_int2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv19_HeadVar__5_5, &conv18_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv17_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv18_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv17_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_NotFoundFiles_12;
  MR_Word conv13_STATE_VARIABLE_OtherSpecs_14;

  top_level__mercury_compile_main__acc_not_found_files_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_NotFoundFiles_12, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_OtherSpecs_14);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_NotFoundFiles_12));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_OtherSpecs_14));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__5_5;
  MR_Word conv9_HeadVar__6_6;
  MR_Word conv8_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int0_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__5_5, &conv9_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__5_5;
  MR_Word conv4_HeadVar__6_6;
  MR_Word conv3_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__5_5, &conv4_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_BurdenedModule_6;
  MR_Word conv0_STATE_VARIABLE_Ancestors_15;

  top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_BurdenedModule_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Ancestors_15);
  *wrapper_arg_2 = ((MR_Box) (conv1_BurdenedModule_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Ancestors_15));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_39)
{
  MR_bool succeeded;
  MR_Word DepsList_16;
  MR_Word BurdenedModules_17;
  MR_Word Ancestors_18;
  MR_Word SpecsList3_20;
  MR_Word Specs3_21;
  MR_Word Errors3_22;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_1_45;
  MR_Word STATE_VARIABLE_Specs_1_48;
  MR_Box conv2_Ancestors_18;
  MR_Word _Succeededs3_19;
  MR_Box conv7_STATE_VARIABLE_HaveParseTreeMaps_1_45;
  MR_Box conv6_STATE_VARIABLE_IO_1_46;

  mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, &DepsList_16);
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[4]), DepsList_16, &BurdenedModules_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Ancestors_18);
  Ancestors_18 = ((MR_Word) (conv2_Ancestors_18));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_2));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, BurdenedModules_17, &_Succeededs3_19, &SpecsList3_20, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_38)), &conv7_STATE_VARIABLE_HaveParseTreeMaps_1_45, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_1_46);
  STATE_VARIABLE_HaveParseTreeMaps_1_45 = ((MR_Word) (conv7_STATE_VARIABLE_HaveParseTreeMaps_1_45));
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList3_20, &Specs3_21);
  STATE_VARIABLE_Specs_1_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs3_21, STATE_VARIABLE_Specs_0_36);
  Errors3_22 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, Specs3_21);
  switch (Errors3_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SortedAncestors_23;
        MR_Word AncestorBurdenedModules_24;
        MR_Word RawSpecsList0_26;
        MR_Word RawSpecs0_27;
        MR_Word Specs0_28;
        MR_Word Continue0_29;
        MR_Word Errors0_30;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_2_50;
        MR_Word STATE_VARIABLE_Specs_2_53;
        MR_Word NotFoundFiles_80;
        MR_Word OtherSpecs_81;
        MR_Word _Succeededs0_25;
        MR_Box conv12_STATE_VARIABLE_HaveParseTreeMaps_2_50;
        MR_Box conv11_STATE_VARIABLE_IO_2_51;
        MR_Box conv16_NotFoundFiles_80;
        MR_Box conv15_OtherSpecs_81;

        mercury__list__sort_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]), Ancestors_18, &SortedAncestors_23);
        mercury__assoc_list__values_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), SortedAncestors_23, &AncestorBurdenedModules_24);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_3));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_49, 5) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, AncestorBurdenedModules_24, &_Succeededs0_25, &RawSpecsList0_26, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_1_45)), &conv12_STATE_VARIABLE_HaveParseTreeMaps_2_50, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_2_51);
        STATE_VARIABLE_HaveParseTreeMaps_2_50 = ((MR_Word) (conv12_STATE_VARIABLE_HaveParseTreeMaps_2_50));
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RawSpecsList0_26, &RawSpecs0_27);
        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[5]), RawSpecs0_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv16_NotFoundFiles_80, ((MR_Box) ((MR_Unsigned) 0U)), &conv15_OtherSpecs_81);
        NotFoundFiles_80 = ((MR_Word) (conv16_NotFoundFiles_80));
        OtherSpecs_81 = ((MR_Word) (conv15_OtherSpecs_81));
        if ((NotFoundFiles_80 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Specs0_28 = OtherSpecs_81;
          Continue0_29 = (MR_Integer) 1;
        }
        else
        {
          MR_Word SortedNotFoundFiles_82;
          MR_Word FilesToShow_83;
          MR_Word FilesNotToShow_84;
          MR_Word NotFoundPieces_85;
          MR_Word Pieces_86;
          MR_Word Spec_87;

          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundFiles_80, &SortedNotFoundFiles_82);
          mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Integer) 10, SortedNotFoundFiles_82, &FilesToShow_83, &FilesNotToShow_84);
          if ((FilesNotToShow_84 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_93;

            Var_93 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_83);
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[15])), Var_93);
          }
          else
          {
            MR_Word Var_95;

            Var_95 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_83);
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[18])), Var_95);
          }
          Pieces_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_85, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[20])));
          {
            Spec_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_87, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
            MR_hl_field(1, Spec_87, 1) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_3[1])));
            MR_hl_field(1, Spec_87, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_87, 3) = ((MR_Box) (Pieces_86));
          }
          {
            Specs0_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs0_28, 0) = ((MR_Box) (Spec_87));
            MR_hl_field(1, Specs0_28, 1) = ((MR_Box) (OtherSpecs_81));
          }
          Continue0_29 = (MR_Integer) 0;
        }
        STATE_VARIABLE_Specs_2_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs0_28, STATE_VARIABLE_Specs_1_48);
        Errors0_30 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, Specs0_28);
        succeeded = (Errors0_30 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Continue0_29 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word RawSpecsList12_32;
          MR_Word RawSpecs12_33;
          MR_Word Specs12_34;
          MR_Word Var_54;
          MR_Word _Succeededs12_31;
          MR_Box conv21_STATE_VARIABLE_HaveParseTreeMaps_39;
          MR_Box conv20_STATE_VARIABLE_IO_41;
          MR_Word _Continue12_35;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_54, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
            MR_hl_field(0, Var_54, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_5));
            MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_10));
            MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_11));
            MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, BurdenedModules_17, &_Succeededs12_31, &RawSpecsList12_32, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_2_50)), &conv21_STATE_VARIABLE_HaveParseTreeMaps_39, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_41);
          *STATE_VARIABLE_HaveParseTreeMaps_39 = ((MR_Word) (conv21_STATE_VARIABLE_HaveParseTreeMaps_39));
          mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RawSpecsList12_32, &RawSpecs12_33);
          top_level__mercury_compile_main__handle_not_found_files_3_p_0(RawSpecs12_33, &Specs12_34, &_Continue12_35);
          *STATE_VARIABLE_Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs12_34, STATE_VARIABLE_Specs_2_53);
        }
        else
        {
          *STATE_VARIABLE_HaveParseTreeMaps_39 = STATE_VARIABLE_HaveParseTreeMaps_2_50;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_2_53;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_1_48;
        *STATE_VARIABLE_HaveParseTreeMaps_39 = STATE_VARIABLE_HaveParseTreeMaps_1_45;
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NotFoundFiles_12;
  MR_Word conv0_STATE_VARIABLE_OtherSpecs_14;

  top_level__mercury_compile_main__acc_not_found_files_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NotFoundFiles_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_OtherSpecs_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NotFoundFiles_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_OtherSpecs_14));
}

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0(
  MR_Word Specs0_4,
  MR_Word * Specs_5,
  MR_Word * Continue_6)
{
  MR_Word NotFoundFiles_7;
  MR_Word OtherSpecs_8;
  MR_Box conv3_NotFoundFiles_7;
  MR_Box conv2_OtherSpecs_8;

  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[3]), Specs0_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NotFoundFiles_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_OtherSpecs_8);
  NotFoundFiles_7 = ((MR_Word) (conv3_NotFoundFiles_7));
  OtherSpecs_8 = ((MR_Word) (conv2_OtherSpecs_8));
  if ((NotFoundFiles_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Specs_5 = OtherSpecs_8;
    *Continue_6 = (MR_Integer) 1;
  }
  else
  {
    MR_Word SortedNotFoundFiles_11;
    MR_Word FilesToShow_12;
    MR_Word FilesNotToShow_13;
    MR_Word NotFoundPieces_14;
    MR_Word Pieces_17;
    MR_Word Spec_18;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundFiles_7, &SortedNotFoundFiles_11);
    mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Integer) 10, SortedNotFoundFiles_11, &FilesToShow_12, &FilesNotToShow_13);
    if ((FilesNotToShow_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_31;

      Var_31 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_12);
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[15])), Var_31);
    }
    else
    {
      MR_Word Var_40;

      Var_40 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_12);
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[18])), Var_40);
    }
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_14, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[20])));
    {
      Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
      MR_hl_field(1, Spec_18, 1) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_3[1])));
      MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (OtherSpecs_8));
    }
    *Continue_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_3(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s * env_ptr = (struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63));
  ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont)((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s env;

  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont = cont;
  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__349__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63, top_level__mercury_compile_main__do_op_mode_query_5_p_0_3, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__336__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__330__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word Globals_7,
  MR_Word OpModeQuery_8)
{
  MR_Word StdOutStream_10;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_10);
  switch (MR_tag((MR_Word) OpModeQuery_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeQuery_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String CC_11;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 471, &CC_11);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CC_11)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String CC_Type_12;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 472, &CC_Type_12);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CC_Type_12)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String CFlags_13;

            backend_libs__compile_target_code__get_c_compiler_flags_2_p_0(Globals_7, &CFlags_13);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CFlags_13)));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String CInclFlags_14;

            backend_libs__compile_target_code__get_c_include_dir_flags_2_p_0(Globals_7, &CInclFlags_14);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CInclFlags_14)));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String GradeDefines_20;

            backend_libs__compile_target_code__get_c_grade_defines_2_p_0(Globals_7, &GradeDefines_20);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (GradeDefines_20)));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String CSC_15;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 502, &CSC_15);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CSC_15)));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String CSC_Type_16;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 504, &CSC_Type_16);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CSC_Type_16)));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ClassDirNames_17;
            MR_String ClassDirName_19;
            MR_Word _ClassDirNamesProposed_18;

            parse_tree__file_names__get_java_dir_path_4_p_0(Globals_7, (MR_Integer) 1, &ClassDirNames_17, &_ClassDirNamesProposed_18);
            ClassDirName_19 = mercury__dir__relative_path_name_from_components_1_f_0(ClassDirNames_17);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (ClassDirName_19)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String LinkCommand_21;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 544, &LinkCommand_21);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (LinkCommand_21)));
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String LinkCommand_73;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 545, &LinkCommand_73);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (LinkCommand_73)));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Specs_22;

            backend_libs__link_target_code__output_library_link_flags_for_c_5_p_0(Globals_7, StdOutStream_10, &Specs_22);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_7, Specs_22);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Grade_23;

            libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_23);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (Grade_23)));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LibGrades_24;
            MR_Word Var_59;
            MR_Box conv0_STATE_VARIABLE_IO_36;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 573, &LibGrades_24);
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_1));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (StdOutStream_10));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, LibGrades_24, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word MaybeStdLibGrades_25;

            libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_7, &MaybeStdLibGrades_25);
            if (!((MaybeStdLibGrades_25 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word StdLibGrades_26 = ((MR_Word) ((MR_hl_field(1, MaybeStdLibGrades_25, 0))));
              MR_Word Var_61;
              MR_Box conv1_STATE_VARIABLE_IO_36;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
                MR_hl_field(0, Var_61, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_2));
                MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_61, 3) = ((MR_Box) (StdOutStream_10));
              }
              mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, StdLibGrades_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36);
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word StdLibLines_32;
            MR_Word Var_68;
            MR_Box conv3_STATE_VARIABLE_IO_36;

            mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[2]), &StdLibLines_32);
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_5));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (StdOutStream_10));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, StdLibLines_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_36);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String TargetArch_33;

            libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 599, &TargetArch_33);
            mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (TargetArch_33)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeUpTo_34 = ((MR_Word) ((MR_hl_field(1, OpModeQuery_8, 0))));

        libs__print_help__list_optimization_options_4_p_0(StdOutStream_10, MaybeUpTo_34);
      }
      break;
  }
}

void mercury__top_level__mercury_compile_main__init(void)
{
}

void mercury__top_level__mercury_compile_main__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_main__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_main__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_main.
