/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2026-09-06
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "backend_libs.link_target_code_c.mih"
#include "backend_libs.link_target_util.mih"
#include "libs.check_libgrades.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.system_cmds.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.analysis.mih"
#include "make.build.mih"
#include "make.check_up_to_date.mih"
#include "make.clean.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.index_set.mih"
#include "make.int_opt.mih"
#include "make.library_install.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.order.mih"
#include "make.prereqs_cache.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s {
  MR_bool make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded;
  MR_Word make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatuses_41;
  jmp_buf make__program_target__maybe_build_linked_target_17_p_0_env_0__commit_0;
  MR_Word make__program_target__maybe_build_linked_target_17_p_0_env_0__Var_68;
  MR_Word make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatus_80;
  MR_Box make__program_target__maybe_build_linked_target_17_p_0_env_0__conv5_ExtraObjTargetStatus_80;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct2 make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_fact_table_object_files__639__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__maybe_build_linked_target__489__1_1_f_0(
  MR_String LambdaHeadVar__1_63);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__393__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32);

static void MR_CALL 
make__program_target__build_library_11_p_0(
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(
  MR_String FileName_5,
  MR_Tuple DirNamesMaybeTimestamp_6,
  MR_Word STATE_VARIABLE_TimestampMap_0_8,
  MR_Word * STATE_VARIABLE_TimestampMap_9);

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word LinkedTargetType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14);

static MR_Box MR_CALL 
make__program_target__get_module_fact_table_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_module_fact_table_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * FactTableObjFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56);

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ProgModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__find_java_files_to_recompile_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
make__program_target__build_linked_target_with_any_prelink_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word CompilationTarget_20,
  MR_Word PIC_21,
  MR_Word MainModuleName_22,
  MR_Word LinkedTargetType_23,
  MR_String FullMainModuleLinkedFileName_24,
  MR_String CurDirMainModuleLinkedFileName_25,
  MR_Word MaybeOldestLhsTimestamp_26,
  MR_Word AllModules_27,
  MR_Word ProgModules_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals0_19,
  MR_Word CompilationTarget_20,
  MR_Word PIC_21,
  MR_Word MainModuleName_22,
  MR_Word LinkedTargetType_23,
  MR_String FullMainModuleLinkedFileName_24,
  MR_String CurDirMainModuleLinkedFileName_25,
  MR_Word MaybeOldestLhsTimestamp_26,
  MR_Word AllModules_27,
  MR_Word ProgModules_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__build_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word CompilationTarget_19,
  MR_Word PIC_20,
  MR_Word MainModuleName_21,
  MR_Word LinkedTargetType_22,
  MR_String FullMainModuleLinkedFileName_23,
  MR_Word AllModulesList_24,
  MR_Word ProgModules_25,
  MR_Word InitObjectFileNames_26,
  MR_Word LinkObjectFileNames_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box make__program_target_scalar_common_1[7][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[5][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4];

static /* final */ const MR_Box make__program_target_scalar_common_4[1][1];

static /* final */ const MR_Box make__program_target_scalar_common_6[2][14];

static /* final */ const MR_Box make__program_target_scalar_common_7[3][13];

static /* final */ const MR_Box make__program_target_scalar_common_8[2][10];

static /* final */ const MR_Box make__program_target_scalar_common_9[2][12];

static /* final */ const MR_Box make__program_target_scalar_common_10[1][9];

static /* final */ const MR_Box make__program_target_scalar_common_11[3][11];

static /* final */ const MR_Box make__program_target_scalar_common_12[2][5];

static /* final */ const MR_Box make__program_target_scalar_common_13[2][7];


struct make__program_target__vector_common_type_5_0_s {
  const MR_Word make__program_target__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_5_0_s make__program_target_vector_common_5[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_3[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[0])),
    ((MR_Box) (make__program_target__maybe_build_linked_target_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__program_target_scalar_common_13[0])),
    ((MR_Box) (make__program_target__make_class_files_for_all_program_modules_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_12[1])),
    ((MR_Box) (make__program_target__get_module_fact_table_object_files_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target_scalar_common_1[1])),
    ((MR_Box) (&make__program_target_scalar_common_2[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__program_target_scalar_common_11[2])),
    ((MR_Box) (make__program_target__maybe_build_linked_target_17_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[2][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_linked_target_file_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[3][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__link_target_util__backend_libs__link_target_util__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__link_target_util__backend_libs__link_target_util__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_12[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_13[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_5_0_s make__program_target_vector_common_5[7] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[2])) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_diag_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct2 make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&make__program_target__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_fact_table_object_files__639__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  MR_String LambdaHeadVar__2_32 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_31, 2))));

  return LambdaHeadVar__2_32;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__maybe_build_linked_target__489__1_1_f_0(
  MR_String LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;

  {
    LambdaHeadVar__2_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_64, 0) = ((MR_Box) (LambdaHeadVar__1_63));
  }
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__393__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;
  MR_Word Var_34;
  MR_Word Var_35;

  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = (MR_Box) ((MR_Unsigned) (PIC_12));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
  }
  LambdaHeadVar__2_33 = (MR_Word) ((MR_Word) (Var_34));
  return LambdaHeadVar__2_33;
}

static void MR_CALL 
make__program_target__build_library_11_p_0(
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word Target_20;

  libs__globals__get_target_2_p_0(Globals_14, &Target_20);
  switch (Target_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word StaticSucceeded_27;
        MR_Word SharedLibsSupported_28;
        MR_Word Var_30;
        MR_Word STATE_VARIABLE_Info_1_31;
        MR_Word STATE_VARIABLE_Specs_1_32;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (MainModuleName_12));
          MR_hl_field(0, Var_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        make__program_target__make_linked_target_10_p_0(ProgressStream_15, Globals_14, Var_30, &StaticSucceeded_27, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_31, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_1_32);
        backend_libs__link_target_code_c__are_shared_libraries_supported_2_p_0(Globals_14, &SharedLibsSupported_28);
        switch (StaticSucceeded_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Succeeded_16 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_31;
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_1_32;
            }
            break;
          case (MR_Integer) 1:
            switch (SharedLibsSupported_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_31;
                  *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_1_32;
                  backend_libs__compile_target_code__make_library_init_file_7_p_0(ProgressStream_15, Globals_14, MainModuleName_12, AllModules_13, Succeeded_16);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_35;
                  MR_Word SharedLibsSucceeded_42;

                  {
                    Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_35, 0) = ((MR_Box) (MainModuleName_12));
                    MR_hl_field(0, Var_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_15, Globals_14, Var_35, &SharedLibsSucceeded_42, STATE_VARIABLE_Info_1_31, STATE_VARIABLE_Info_22, STATE_VARIABLE_Specs_1_32, STATE_VARIABLE_Specs_24);
                  switch (SharedLibsSucceeded_42) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *Succeeded_16 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      backend_libs__compile_target_code__make_library_init_file_7_p_0(ProgressStream_15, Globals_14, MainModuleName_12, AllModules_13, Succeeded_16);
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
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (MainModuleName_12));
          MR_hl_field(0, Var_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
        }
        make__program_target__make_linked_target_10_p_0(ProgressStream_15, Globals_14, Var_38, Succeeded_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (MainModuleName_12));
          MR_hl_field(0, Var_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
        }
        make__program_target__make_linked_target_10_p_0(ProgressStream_15, Globals_14, Var_40, Succeeded_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(
  MR_String FileName_5,
  MR_Tuple DirNamesMaybeTimestamp_6,
  MR_Word STATE_VARIABLE_TimestampMap_0_8,
  MR_Word * STATE_VARIABLE_TimestampMap_9)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_5, (MR_String) ".class");
  if (succeeded)
    *STATE_VARIABLE_TimestampMap_9 = STATE_VARIABLE_TimestampMap_0_8;
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (FileName_5)), ((MR_Box) (DirNamesMaybeTimestamp_6)), STATE_VARIABLE_TimestampMap_0_8, STATE_VARIABLE_TimestampMap_9);
}

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word LinkedTargetType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_27;

  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 135, FullMainModuleLinkedFileName_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_24);
  succeeded = (strcmp(FullMainModuleLinkedFileName_15, CurDirMainModuleLinkedFileName_16) == 0);
  if (succeeded)
    STATE_VARIABLE_Info_2_27 = STATE_VARIABLE_Info_1_24;
  else
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 135, CurDirMainModuleLinkedFileName_16, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_27);
  switch (LinkedTargetType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      make__clean__remove_init_files_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 135, MainModuleName_13, STATE_VARIABLE_Info_2_27, STATE_VARIABLE_Info_20);
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
  }
}

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14)
{
  MR_Word Specs_16;

  backend_libs__link_target_code__link_files_into_executable_or_library_for_c_cs_java_9_p_0(ProgressStream_10, Globals_9, LinkTargetType_11, ModuleName_12, ObjectsList_13, &Specs_16, Succeeded_14);
  parse_tree__write_error_spec__write_diag_specs_5_p_0(ProgressStream_10, Globals_9, Specs_16);
}

static MR_Box MR_CALL 
make__program_target__get_module_fact_table_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_module_fact_table_object_files__639__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_module_fact_table_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * FactTableObjFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24)
{
  MR_Word MaybeModuleDepInfo_17;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_MakeInfo_0_23, STATE_VARIABLE_MakeInfo_24);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_module_fact_table_object_files\'/9", (MR_String) "error in dependencies");
      return;
    }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, 0))));
    MR_Word FactTableFiles_19;

    make__module_target__get_any_fact_table_object_code_files_6_p_0(Globals_11, PIC_12, ModuleDepInfo_18, &FactTableFiles_19);
    *FactTableObjFiles_14 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[4]), FactTableFiles_19);
  }
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_33;

  conv0_LambdaHeadVar__2_33 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__393__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word CompilationTarget_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word ModuleDepInfo_19;

  libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/9", (MR_String) "unknown imports");
      return;
    }
  else
    ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, 0))));
  switch (CompilationTarget_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactFileToTarget_20;
        MR_Word FactTableFiles_22;
        MR_Word Var_36;

        {
          FactFileToTarget_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactFileToTarget_20, 0) = ((MR_Box) (&make__program_target_scalar_common_13[1]));
          MR_hl_field(0, FactFileToTarget_20, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_9_p_0_1));
          MR_hl_field(0, FactFileToTarget_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FactFileToTarget_20, 3) = ((MR_Box) (PIC_12));
          MR_hl_field(0, FactFileToTarget_20, 4) = ((MR_Box) (ModuleName_13));
        }
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFiles_22);
        Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_22);
        *ObjectTargets_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), FactFileToTarget_20, Var_36);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ObjectTargets_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word MainModuleName_20 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_13, 0))));
  MR_Word IntermodAnalysis_22;
  MR_Word IntermodAnalysisSucceeded_23;
  MR_Word STATE_VARIABLE_Info_1_38;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 437, &IntermodAnalysis_22);
  switch (IntermodAnalysis_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodAnalysisSucceeded_23 = (MR_Integer) 1;
        STATE_VARIABLE_Info_1_38 = STATE_VARIABLE_Info_0_30;
        *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      }
      break;
    case (MR_Integer) 1:
      make__program_target__make_misc_target_builder_11_p_0(ProgressStream_15, Globals_12, MainModuleName_20, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_23, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_1_38, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
      break;
  }
  switch (IntermodAnalysisSucceeded_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_1_38;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DefaultOptionTable_24;
        MR_Word MaybeStdLibGrades_25;
        MR_Word Params_26;
        MR_Word MayBuild_27;

        libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_24);
        MaybeStdLibGrades_25 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_1_38);
        Params_26 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_1_38);
        make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_15, DefaultOptionTable_24, MaybeStdLibGrades_25, (MR_Integer) 1, MainModuleName_20, Params_26, ExtraOptions_14, &MayBuild_27);
        if (((MR_tag((MR_Word) MayBuild_27)) == (MR_Integer) 1))
        {
          MR_Word BuildGlobals_29 = ((MR_Word) ((MR_hl_field(1, MayBuild_27, 1))));

          make__program_target__make_linked_target_2_8_p_0(ProgressStream_15, BuildGlobals_29, LinkedTargetFile_13, Succeeded_16, STATE_VARIABLE_Info_1_38, STATE_VARIABLE_Info_31);
        }
        else
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, MayBuild_27, 0))));

          parse_tree__write_error_spec__write_oom_diag_specs_5_p_0(ProgressStream_15, Globals_12, Specs_18);
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_1_38;
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_20;

  make__program_target__linked_target_cleanup_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_20);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ObjectTargets_14;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  make__program_target__get_foreign_object_targets_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56)
{
  MR_bool succeeded;
  MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_11, 0))));
  MR_Word LinkedTargetType_16 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_11, 1))) & (MR_Integer) 7);
  MR_Word DepsSucceeded_17;
  MR_Word AllModules_18;
  MR_Word KeepGoing_19;
  MR_Word STATE_VARIABLE_Info_1_59;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, &DepsSucceeded_17, &AllModules_18, STATE_VARIABLE_Info_0_55, &STATE_VARIABLE_Info_1_59);
  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_1_59);
  succeeded = (DepsSucceeded_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_1_59;
  }
  else
  {
    MR_Word PIC_20;
    MR_Word CompilationTarget_21;
    MR_Word IntermediateTargetType_22;
    MR_Word ObjectTargetType_23;
    MR_Word ProgModulesAlpha_25;
    MR_Word ProgModules_26;
    MR_Word ProgModulesNonnested_27;
    MR_Word IntermediateTargetsNonnested_28;
    MR_Word ObjTargets_29;
    MR_Word ForeignObjTargetsList_30;
    MR_Word ForeignObjTargets_31;
    MR_Word IntsSucceeded_32;
    MR_Word BuildDepsSucceeded_33;
    MR_String FullMainModuleLinkedFileName_39;
    MR_String CurDirMainModuleLinkedFileName_40;
    MR_Word MaybeTimestamp_42;
    MR_Word MaybeOldestLhsTimestamp_44;
    MR_Word LhsResult_46;
    MR_Word STATE_VARIABLE_Info_2_61;
    MR_Word STATE_VARIABLE_Info_3_63;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_4_66;
    MR_Word STATE_VARIABLE_Info_5_69;
    MR_Word STATE_VARIABLE_Info_10_86;
    MR_Word STATE_VARIABLE_Info_11_90;
    MR_Word STATE_VARIABLE_Info_12_92;
    MR_Box conv3_STATE_VARIABLE_Info_4_66;
    MR_Box conv2_STATE_VARIABLE_IO_4_67;
    MR_Word _SearchDirs_41;
    MR_Word ShouldRebuildLhs_47;

    backend_libs__link_target_code_c__get_object_code_type_3_p_0(Globals_10, LinkedTargetType_16, &PIC_20);
    libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_21);
    switch (CompilationTarget_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 36U);
          {
            ObjectTargetType_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ObjectTargetType_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 40U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 40U);
        }
        break;
      case (MR_Integer) 2:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 44U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 48U);
        }
        break;
    }
    ProgModulesAlpha_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_18);
    make__order__order_target_modules_8_p_0(ProgressStream_9, Globals_10, ProgModulesAlpha_25, &ProgModules_26, STATE_VARIABLE_Info_1_59, &STATE_VARIABLE_Info_2_61);
    make__order__filter_out_nested_modules_8_p_0(ProgressStream_9, Globals_10, ProgModules_26, &ProgModulesNonnested_27, STATE_VARIABLE_Info_2_61, &STATE_VARIABLE_Info_3_63);
    IntermediateTargetsNonnested_28 = make__util__make_target_id_list_2_f_0(ProgModulesNonnested_27, IntermediateTargetType_22);
    ObjTargets_29 = make__util__make_target_id_list_2_f_0(ProgModules_26, ObjectTargetType_23);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_1));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_65, 5) = ((MR_Box) (PIC_20));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, ProgModules_26, &ForeignObjTargetsList_30, ((MR_Box) (STATE_VARIABLE_Info_3_63)), &conv3_STATE_VARIABLE_Info_4_66, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_4_67);
    STATE_VARIABLE_Info_4_66 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_66));
    ForeignObjTargets_31 = mercury__list__condense_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), ForeignObjTargetsList_30);
    make__int_opt__build_int_opt_files_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 3, ProgModulesAlpha_25, &IntsSucceeded_32, STATE_VARIABLE_Info_4_66, &STATE_VARIABLE_Info_5_69);
    succeeded = (IntsSucceeded_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      BuildDepsSucceeded_33 = (MR_Integer) 0;
      STATE_VARIABLE_Info_10_86 = STATE_VARIABLE_Info_5_69;
    }
    else
    {
      MR_Word BuildDepsSucceeded0_34;
      MR_Word BuildDepsSucceeded1_37;
      MR_Word STATE_VARIABLE_Info_6_72;
      MR_Word STATE_VARIABLE_Info_8_80;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, IntermediateTargetsNonnested_28, &BuildDepsSucceeded0_34, STATE_VARIABLE_Info_5_69, &STATE_VARIABLE_Info_6_72);
      switch (BuildDepsSucceeded0_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded1_37 = (MR_Integer) 0;
            STATE_VARIABLE_Info_8_80 = STATE_VARIABLE_Info_6_72;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) ObjectTargetType_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ObjectTargetType_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 10:
                  make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_6_72, &STATE_VARIABLE_Info_8_80);
                  break;
                case (MR_Integer) 12:
                  {
                    MR_Word BuildJavaSucceeded_35;
                    MR_Word STATE_VARIABLE_Info_7_74;

                    make__program_target__make_class_files_for_all_program_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, ProgModules_26, &BuildJavaSucceeded_35, STATE_VARIABLE_Info_6_72, &STATE_VARIABLE_Info_7_74);
                    switch (BuildJavaSucceeded_35) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          BuildDepsSucceeded1_37 = (MR_Integer) 0;
                          STATE_VARIABLE_Info_8_80 = STATE_VARIABLE_Info_7_74;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word NoRebuildGlobals_36;

                          libs__globals__set_option_4_p_0((MR_Integer) 24, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_10, &NoRebuildGlobals_36);
                          make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, NoRebuildGlobals_36, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_7_74, &STATE_VARIABLE_Info_8_80);
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_6_72, &STATE_VARIABLE_Info_8_80);
              break;
          }
          break;
      }
      switch (BuildDepsSucceeded1_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded_33 = (MR_Integer) 0;
            STATE_VARIABLE_Info_10_86 = STATE_VARIABLE_Info_8_80;
          }
          break;
        case (MR_Integer) 1:
          make__build__foldl2_make_module_targets_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ForeignObjTargets_31, &BuildDepsSucceeded_33, STATE_VARIABLE_Info_8_80, &STATE_VARIABLE_Info_10_86);
          break;
      }
    }
    backend_libs__link_target_util__linked_target_file_name_full_curdir_7_p_0(Globals_10, MainModuleName_15, LinkedTargetType_16, &FullMainModuleLinkedFileName_39, &CurDirMainModuleLinkedFileName_40);
    make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FullMainModuleLinkedFileName_39, &_SearchDirs_41, &MaybeTimestamp_42, STATE_VARIABLE_Info_10_86, &STATE_VARIABLE_Info_11_90);
    if (((MR_tag((MR_Word) MaybeTimestamp_42)) == (MR_Integer) 1))
      MaybeOldestLhsTimestamp_44 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word LinkedFileTimestamp_45 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_42, 0))));

      {
        MaybeOldestLhsTimestamp_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeOldestLhsTimestamp_44, 0) = ((MR_Box) (LinkedFileTimestamp_45));
      }
    }
    make__check_up_to_date__should_we_rebuild_lhs_11_p_0(ProgressStream_9, Globals_10, FullMainModuleLinkedFileName_39, MaybeOldestLhsTimestamp_44, BuildDepsSucceeded_33, ObjTargets_29, &LhsResult_46, STATE_VARIABLE_Info_11_90, &STATE_VARIABLE_Info_12_92);
    succeeded = (DepsSucceeded_17 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (LhsResult_46 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ShouldRebuildLhs_47 = ((MR_Unsigned) ((MR_hl_field(1, LhsResult_46, 0))) & (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word VeryVerbose_48;
      MR_Box Cookie_49;
      MR_Word MaybeErrorStream_50;
      MR_Word Succeeded0_51;
      MR_Word CleanupPred_54;
      MR_Word STATE_VARIABLE_Info_13_97;
      MR_Box conv5_STATE_VARIABLE_Info_56;

      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 132, &VeryVerbose_48);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_49);
      make__build__open_module_error_stream_7_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_12_92, MainModuleName_15, &MaybeErrorStream_50);
      if ((MaybeErrorStream_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_51 = (MR_Integer) 0;
        STATE_VARIABLE_Info_13_97 = STATE_VARIABLE_Info_12_92;
      }
      else
      {
        MR_Word MESI_52 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_50, 0))));
        MR_Word ErrorStream_53 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_50, 1))));

        make__program_target__build_linked_target_with_any_prelink_17_p_0(ProgressStream_9, Globals_10, CompilationTarget_21, PIC_20, MainModuleName_15, LinkedTargetType_16, FullMainModuleLinkedFileName_39, CurDirMainModuleLinkedFileName_40, MaybeOldestLhsTimestamp_44, AllModules_18, ProgModules_26, ShouldRebuildLhs_47, &Succeeded0_51, STATE_VARIABLE_Info_12_92, &STATE_VARIABLE_Info_13_97);
        make__build__close_module_error_stream_handle_errors_7_p_0(ProgressStream_9, Globals_10, MESI_52, ErrorStream_53, STATE_VARIABLE_Info_13_97);
      }
      {
        CleanupPred_54 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CleanupPred_54, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
        MR_hl_field(0, CleanupPred_54, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_2));
        MR_hl_field(0, CleanupPred_54, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, CleanupPred_54, 3) = ((MR_Box) (ProgressStream_9));
        MR_hl_field(0, CleanupPred_54, 4) = ((MR_Box) (Globals_10));
        MR_hl_field(0, CleanupPred_54, 5) = ((MR_Box) (MainModuleName_15));
        MR_hl_field(0, CleanupPred_54, 6) = ((MR_Box) (LinkedTargetType_16));
        MR_hl_field(0, CleanupPred_54, 7) = ((MR_Box) (FullMainModuleLinkedFileName_39));
        MR_hl_field(0, CleanupPred_54, 8) = ((MR_Box) (CurDirMainModuleLinkedFileName_40));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_48, Cookie_49, CleanupPred_54, Succeeded0_51, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_13_97)), &conv5_STATE_VARIABLE_Info_56);
      *STATE_VARIABLE_Info_56 = ((MR_Word) (conv5_STATE_VARIABLE_Info_56));
    }
    else
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_12_92;
    }
  }
}

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TimestampMap_9;

  make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TimestampMap_9);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TimestampMap_9));
}

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  backend_libs__compile_target_code__compile_java_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), &conv0_HeadVar__5_5);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_class_files_for_all_program_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ProgModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word JavaFilesToRecompile_17;
  MR_Word STATE_VARIABLE_Info_1_26;

  make__program_target__find_java_files_to_recompile_8_p_0(ProgressStream_10, Globals_11, ProgModules_13, &JavaFilesToRecompile_17, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_26);
  if ((JavaFilesToRecompile_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_26;
  }
  else
  {
    MR_String HeadJavaFile_18 = ((MR_String) ((MR_hl_field(1, JavaFilesToRecompile_17, 0))));
    MR_Word TailJavaFiles_19 = ((MR_Word) ((MR_hl_field(1, JavaFilesToRecompile_17, 1))));
    MR_String MakingMsg_40;
    MR_Word MaybeErrorStream_41;

    make__util__verbose_make_one_part_msg_3_p_0(Globals_11, (MR_String) "Making Java class files", &MakingMsg_40);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, MakingMsg_40);
    make__build__open_module_error_stream_7_p_0(ProgressStream_10, Globals_11, STATE_VARIABLE_Info_1_26, MainModuleName_12, &MaybeErrorStream_41);
    if ((MaybeErrorStream_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_26;
    }
    else
    {
      MR_Word MESI_42 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_41, 0))));
      MR_Word ErrorStream_43 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_41, 1))));
      MR_Word Var_47;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) (make__program_target__make_class_files_for_all_program_modules_9_p_0_1));
        MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_47, 3) = ((MR_Box) (ProgressStream_10));
        MR_hl_field(0, Var_47, 4) = ((MR_Box) (Globals_11));
        MR_hl_field(0, Var_47, 5) = ((MR_Box) (HeadJavaFile_18));
        MR_hl_field(0, Var_47, 6) = ((MR_Box) (TailJavaFiles_19));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_47, Succeeded_14);
      make__build__close_module_error_stream_handle_errors_7_p_0(ProgressStream_10, Globals_11, MESI_42, ErrorStream_43, STATE_VARIABLE_Info_1_26);
      switch (*Succeeded_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_26;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TimestampMap0_20;
            MR_Word TimestampMap_21;
            MR_Word Var_30;
            MR_Word STATE_VARIABLE_Info_2_31;
            MR_Word Var_32;
            MR_Box conv2_TimestampMap_21;

            TimestampMap0_20 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_26);
            Var_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]));
            mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[3]), TimestampMap0_20, ((MR_Box) (Var_30)), &conv2_TimestampMap_21);
            TimestampMap_21 = ((MR_Word) (conv2_TimestampMap_21));
            make__make_info__make_info_set_file_timestamp_map_3_p_0(TimestampMap_21, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_2_31);
            Var_32 = make__timestamp__init_target_file_timestamp_map_0_f_0();
            make__make_info__make_info_set_target_file_timestamp_map_3_p_0(Var_32, STATE_VARIABLE_Info_2_31, STATE_VARIABLE_Info_23);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__find_java_files_to_recompile_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word HeadModuleName_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailModuleNames_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TailJavaFilesToRecompile_24;
    MR_Word JavaTarget_25;
    MR_Word ClassTarget_26;
    MR_Word MaybeJavaTimestamp_27;
    MR_Word MaybeClassTimestamp_28;
    MR_Word STATE_VARIABLE_Info_1_38;
    MR_Word STATE_VARIABLE_Info_2_42;
    MR_Word JavaTimestamp_29;
    MR_Word ClassTimestamp_30;
    MR_Word Var_49;

    make__program_target__find_java_files_to_recompile_8_p_0(ProgressStream_1, Globals_2, TailModuleNames_20, &TailJavaFilesToRecompile_24, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_38);
    {
      JavaTarget_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, JavaTarget_25, 0) = ((MR_Box) (HeadModuleName_19));
      MR_hl_field(0, JavaTarget_25, 1) = ((MR_Box) ((MR_Unsigned) 44U));
    }
    {
      ClassTarget_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassTarget_26, 0) = ((MR_Box) (HeadModuleName_19));
      MR_hl_field(0, ClassTarget_26, 1) = ((MR_Box) ((MR_Unsigned) 48U));
    }
    make__timestamp__get_target_timestamp_8_p_0(ProgressStream_1, Globals_2, JavaTarget_25, &MaybeJavaTimestamp_27, STATE_VARIABLE_Info_1_38, &STATE_VARIABLE_Info_2_42);
    make__timestamp__get_target_timestamp_8_p_0(ProgressStream_1, Globals_2, ClassTarget_26, &MaybeClassTimestamp_28, STATE_VARIABLE_Info_2_42, STATE_VARIABLE_Info_6);
    succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_27)) == (MR_Integer) 0);
    if (succeeded)
    {
      JavaTimestamp_29 = ((MR_Word) ((MR_hl_field(0, MaybeJavaTimestamp_27, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        ClassTimestamp_30 = ((MR_Word) ((MR_hl_field(0, MaybeClassTimestamp_28, 0))));
        libs__timestamp____Compare____timestamp_0_0(&Var_49, ClassTimestamp_30, JavaTimestamp_29);
        succeeded = (Var_49 != (MR_Integer) 1);
      }
    }
    if (succeeded)
      *HeadVar__4_4 = TailJavaFilesToRecompile_24;
    else
    {
      MR_String HeadJavaFile_32;
      MR_String _HeadJavaFileProposed_33;

      parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_2, (MR_String) "predicate \140make.program_target.find_java_files_to_recompile\'/8", (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[6])), HeadModuleName_19, &HeadJavaFile_32, &_HeadJavaFileProposed_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadJavaFile_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailJavaFilesToRecompile_24));
      }
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_with_any_prelink_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word CompilationTarget_20,
  MR_Word PIC_21,
  MR_Word MainModuleName_22,
  MR_Word LinkedTargetType_23,
  MR_String FullMainModuleLinkedFileName_24,
  MR_String CurDirMainModuleLinkedFileName_25,
  MR_Word MaybeOldestLhsTimestamp_26,
  MR_Word AllModules_27,
  MR_Word ProgModules_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_Word MaybePreLinkCommand_33;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_19, (MR_Integer) 471, &MaybePreLinkCommand_33);
  if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
    make__program_target__maybe_build_linked_target_17_p_0(ProgressStream_18, Globals_19, CompilationTarget_20, PIC_21, MainModuleName_22, LinkedTargetType_23, FullMainModuleLinkedFileName_24, CurDirMainModuleLinkedFileName_25, MaybeOldestLhsTimestamp_26, AllModules_27, ProgModules_28, ShouldRebuildLhs_29, Succeeded_30, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  else
  {
    MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(1, MaybePreLinkCommand_33, 0))));
    MR_String CommandString_35;
    MR_Word Var_43;
    MR_Word PreLinkSucceeded_48;

    Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_27);
    backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_34, MainModuleName_22, Var_43, &CommandString_35);
    libs__system_cmds__invoke_system_command_8_p_0(Globals_19, ProgressStream_18, ProgressStream_18, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_48);
    switch (PreLinkSucceeded_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 1:
        make__program_target__maybe_build_linked_target_17_p_0(ProgressStream_18, Globals_19, CompilationTarget_20, PIC_21, MainModuleName_22, LinkedTargetType_23, FullMainModuleLinkedFileName_24, CurDirMainModuleLinkedFileName_25, MaybeOldestLhsTimestamp_26, AllModules_27, ProgModules_28, ShouldRebuildLhs_29, Succeeded_30, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
        break;
    }
  }
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_7(
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
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_HeadVar__4_4;
  MR_Word conv6_HeadVar__6_6;

  make__timestamp__get_file_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv8_HeadVar__3_3, &conv7_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv6_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv6_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;

  make__check_up_to_date__get_target_id_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__6_6));
}

static MR_Box MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = make__program_target__IntroducedFrom__func__maybe_build_linked_target__489__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_3(
  void * env_ptr_arg)
{
  struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_5(
  void * env_ptr_arg)
{
  struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatus_80 = ((MR_Word) ((env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__conv5_ExtraObjTargetStatus_80));
  make__program_target__maybe_build_linked_target_17_p_0_4(env_ptr);
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_4(
  void * env_ptr_arg)
{
  struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatus_80, 2)));

    (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__Var_68 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatus_80, 2))) & (MR_Integer) 3);
    (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = ((env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__Var_68 == (MR_Integer) 3);
    if ((env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded)
      make__program_target__maybe_build_linked_target_17_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0_6(
  void * env_ptr_arg)
{
  struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), &(env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__conv5_ExtraObjTargetStatus_80, (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatuses_41, make__program_target__maybe_build_linked_target_17_p_0_5, env_ptr);
      (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__program_target__maybe_build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals0_19,
  MR_Word CompilationTarget_20,
  MR_Word PIC_21,
  MR_Word MainModuleName_22,
  MR_Word LinkedTargetType_23,
  MR_String FullMainModuleLinkedFileName_24,
  MR_String CurDirMainModuleLinkedFileName_25,
  MR_Word MaybeOldestLhsTimestamp_26,
  MR_Word AllModules_27,
  MR_Word ProgModules_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  struct make__program_target__maybe_build_linked_target_17_p_0_env_0_s env;

  {
    MR_Word LinkObjects_33;
    MR_Word NoLinkObjsGlobals_34;
    MR_Word AllModulesList_35;
    MR_Word InitObjSucceeded_36;
    MR_Word InitObjects_37;
    MR_Word ObjectsToCheck_38;
    MR_Word ObjectsToCheckTargets_39;
    MR_Word ExtraObjSucceeded_45;
    MR_Word BuildObjsSucceeded_46;
    MR_Word ExtraObjectTimestamps_48;
    MR_Word ExtraObjectLhsResult_49;
    MR_Word STATE_VARIABLE_Info_1_60;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_2_66;
    MR_Word STATE_VARIABLE_Info_3_70;
    MR_Box conv4_STATE_VARIABLE_Info_2_66;
    MR_Box conv3_STATE_VARIABLE_IO_2_67;
    MR_Word _SearchDirs_47;
    MR_Box conv10_STATE_VARIABLE_Info_3_70;
    MR_Box conv9_STATE_VARIABLE_IO_3_71;

    libs__globals__lookup_accumulating_option_3_p_0(Globals0_19, (MR_Integer) 523, &LinkObjects_33);
    libs__globals__set_option_4_p_0((MR_Integer) 523, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[3])), Globals0_19, &NoLinkObjsGlobals_34);
    AllModulesList_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_27);
    switch (LinkedTargetType_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MustRecompile_102;
          MR_Word InitObjectResult_103;

          libs__globals__lookup_bool_option_3_p_0(NoLinkObjsGlobals_34, (MR_Integer) 24, &MustRecompile_102);
          backend_libs__compile_target_code__make_init_obj_file_8_p_0(ProgressStream_18, NoLinkObjsGlobals_34, MustRecompile_102, MainModuleName_22, AllModulesList_35, &InitObjectResult_103);
          if ((InitObjectResult_103 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            InitObjSucceeded_36 = (MR_Integer) 0;
            InitObjects_37 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_1_60 = STATE_VARIABLE_Info_0_52;
          }
          else
          {
            MR_String InitObject_104 = ((MR_String) ((MR_hl_field(1, InitObjectResult_103, 0))));
            MR_Word FileTimestampMap0_105;
            MR_Word FileTimestampMap1_106;

            FileTimestampMap0_105 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_52);
            mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (InitObject_104)), FileTimestampMap0_105, &FileTimestampMap1_106);
            make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap1_106, STATE_VARIABLE_Info_0_52, &STATE_VARIABLE_Info_1_60);
            InitObjSucceeded_36 = (MR_Integer) 1;
            {
              InitObjects_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InitObjects_37, 0) = ((MR_Box) (InitObject_104));
              MR_hl_field(1, InitObjects_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          InitObjSucceeded_36 = (MR_Integer) 1;
          InitObjects_37 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_1_60 = STATE_VARIABLE_Info_0_52;
        }
        break;
    }
    ObjectsToCheck_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_37, LinkObjects_33);
    ObjectsToCheckTargets_39 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__program_target_scalar_common_2[2]), ObjectsToCheck_38);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__program_target__maybe_build_linked_target_17_p_0_2));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (ProgressStream_18));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) (NoLinkObjsGlobals_34));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, ObjectsToCheckTargets_39, &(env).make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatuses_41, ((MR_Box) (STATE_VARIABLE_Info_1_60)), &conv4_STATE_VARIABLE_Info_2_66, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_2_67);
    STATE_VARIABLE_Info_2_66 = ((MR_Word) (conv4_STATE_VARIABLE_Info_2_66));
    make__program_target__maybe_build_linked_target_17_p_0_6(&env);
    if ((env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded)
      ExtraObjSucceeded_45 = (MR_Integer) 0;
    else
      ExtraObjSucceeded_45 = (MR_Integer) 1;
    BuildObjsSucceeded_46 = libs__maybe_util__and_2_f_0(InitObjSucceeded_36, ExtraObjSucceeded_45);
    mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__program_target_scalar_common_3[1]), ObjectsToCheck_38, &_SearchDirs_47, &ExtraObjectTimestamps_48, ((MR_Box) (STATE_VARIABLE_Info_2_66)), &conv10_STATE_VARIABLE_Info_3_70, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_3_71);
    STATE_VARIABLE_Info_3_70 = ((MR_Word) (conv10_STATE_VARIABLE_Info_3_70));
    make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0(ProgressStream_18, NoLinkObjsGlobals_34, FullMainModuleLinkedFileName_24, MaybeOldestLhsTimestamp_26, BuildObjsSucceeded_46, (env).make__program_target__maybe_build_linked_target_17_p_0_env_0__ExtraObjTargetStatuses_41, ExtraObjectTimestamps_48, &ExtraObjectLhsResult_49);
    if ((ExtraObjectLhsResult_49 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String ErrorMsg_50;

      make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_24, &ErrorMsg_50);
      make__util__maybe_write_msg_locked_5_p_0(ProgressStream_18, STATE_VARIABLE_Info_3_70, ErrorMsg_50);
      *Succeeded_30 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_3_70;
    }
    else
    {
      MR_Word ExtraObjShouldRebuildLhs_51 = ((MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_49, 0))) & (MR_Integer) 1);
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_49, 0)));

      (env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = (ShouldRebuildLhs_29 == (MR_Integer) 0);
      if ((env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded)
        (env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = (ExtraObjShouldRebuildLhs_51 == (MR_Integer) 0);
      if ((env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded)
      {
        MR_Word MainModuleLinkedTarget_111;
        MR_Word Var_115;

        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = (MR_Box) ((MR_Unsigned) (LinkedTargetType_23));
        }
        {
          MainModuleLinkedTarget_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MainModuleLinkedTarget_111, 0) = ((MR_Box) (MainModuleName_22));
          MR_hl_field(0, MainModuleLinkedTarget_111, 1) = ((MR_Box) (Var_115));
        }
        (env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded = (strcmp(FullMainModuleLinkedFileName_24, CurDirMainModuleLinkedFileName_25) == 0);
        if ((env).make__program_target__maybe_build_linked_target_17_p_0_env_0__succeeded)
        {
          MR_String UpToDateMsg_112;

          make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_111, FullMainModuleLinkedFileName_24, STATE_VARIABLE_Info_3_70, STATE_VARIABLE_Info_53, &UpToDateMsg_112);
          make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_112);
          *Succeeded_30 = (MR_Integer) 1;
        }
        else
        {
          MR_Word MadeSymlinkOrCopy_113;

          backend_libs__link_target_util__post_link_maybe_make_symlink_or_copy_10_p_0(ProgressStream_18, NoLinkObjsGlobals_34, LinkedTargetType_23, MainModuleName_22, FullMainModuleLinkedFileName_24, CurDirMainModuleLinkedFileName_25, Succeeded_30, &MadeSymlinkOrCopy_113);
          switch (MadeSymlinkOrCopy_113) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String UpToDateMsg_117;

                make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_34, MainModuleLinkedTarget_111, FullMainModuleLinkedFileName_24, STATE_VARIABLE_Info_3_70, STATE_VARIABLE_Info_53, &UpToDateMsg_117);
                make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_117);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String LinkMsg_114;

                make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(NoLinkObjsGlobals_34, FullMainModuleLinkedFileName_24, &LinkMsg_114);
                make__util__maybe_write_msg_4_p_0(ProgressStream_18, LinkMsg_114);
                *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_3_70;
              }
              break;
          }
        }
      }
      else
        make__program_target__build_linked_target_16_p_0(ProgressStream_18, NoLinkObjsGlobals_34, CompilationTarget_20, PIC_21, MainModuleName_22, LinkedTargetType_23, FullMainModuleLinkedFileName_24, AllModulesList_35, ProgModules_28, InitObjects_37, LinkObjects_33, Succeeded_30, STATE_VARIABLE_Info_3_70, STATE_VARIABLE_Info_53);
    }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Succeeded_14;

  make__program_target__link_and_write_error_specs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), &conv6_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv6_Succeeded_14));
}

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__5_5;
  MR_String conv4_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__5_5, &conv4_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__build_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_FactTableObjFiles_14;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_24;

  make__program_target__get_module_fact_table_object_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FactTableObjFiles_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_MakeInfo_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_FactTableObjFiles_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_24));
}

static void MR_CALL 
make__program_target__build_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word CompilationTarget_19,
  MR_Word PIC_20,
  MR_Word MainModuleName_21,
  MR_Word LinkedTargetType_22,
  MR_String FullMainModuleLinkedFileName_23,
  MR_Word AllModulesList_24,
  MR_Word ProgModules_25,
  MR_Word InitObjectFileNames_26,
  MR_Word LinkObjectFileNames_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_String MakingMsg_31;
  MR_Word FactTableObjFileNameLists_32;
  MR_Word FactTableObjFileNames_33;
  MR_Word Ext_36;
  MR_Word ProgModuleObjFileNames_37;
  MR_Word AllObjects_39;
  MR_Word CmdLineTargets0_40;
  MR_Word CmdLineTargets_41;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_Info_1_51;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_Info_2_63;
  MR_Box conv3_STATE_VARIABLE_Info_1_51;
  MR_Box conv2_STATE_VARIABLE_IO_2_52;
  MR_Word _ProgModuleObjFileNamesProposed_38;

  make__util__maybe_making_filename_msg_3_p_0(NoLinkObjsGlobals_18, FullMainModuleLinkedFileName_23, &MakingMsg_31);
  make__util__maybe_write_msg_4_p_0(ProgressStream_17, MakingMsg_31);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__program_target__build_linked_target_16_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_50, 5) = ((MR_Box) (PIC_20));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, AllModulesList_24, &FactTableObjFileNameLists_32, ((MR_Box) (STATE_VARIABLE_Info_0_45)), &conv3_STATE_VARIABLE_Info_1_51, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_52);
  STATE_VARIABLE_Info_1_51 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_51));
  FactTableObjFileNames_33 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableObjFileNameLists_32);
  switch (CompilationTarget_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObjExt_34;
        MR_Word Var_35;

        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_20, &ObjExt_34, &Var_35);
        {
          Ext_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Ext_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Ext_36, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_34));
        }
      }
      break;
    case (MR_Integer) 1:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[4]));
      break;
    case (MR_Integer) 2:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[5]));
      break;
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__program_target__build_linked_target_16_p_0_2));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_linked_target\'/16"));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (Ext_36));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_55, ProgModules_25, &ProgModuleObjFileNames_37, &_ProgModuleObjFileNamesProposed_38);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableObjFileNames_33, LinkObjectFileNames_27);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProgModuleObjFileNames_37, Var_58);
  AllObjects_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjectFileNames_26, Var_57);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_11[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__program_target__build_linked_target_16_p_0_3));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (LinkedTargetType_22));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) (MainModuleName_21));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (AllObjects_39));
  }
  libs__process_util__call_in_forked_process_4_p_0(Var_59, Succeeded_28);
  CmdLineTargets0_40 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_1_51);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = (MR_Box) ((MR_Unsigned) (LinkedTargetType_22));
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (MainModuleName_21));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (Var_62));
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_61)), CmdLineTargets0_40, &CmdLineTargets_41);
  make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_41, STATE_VARIABLE_Info_1_51, &STATE_VARIABLE_Info_2_63);
  switch (*Succeeded_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_44;

        make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_23, &ErrorMsg_44);
        make__util__maybe_write_msg_locked_5_p_0(ProgressStream_17, STATE_VARIABLE_Info_2_63, ErrorMsg_44);
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_2_63;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FileTimestampMap0_42;
        MR_Word FileTimestampMap_43;

        FileTimestampMap0_42 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_2_63);
        mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (FullMainModuleLinkedFileName_23)), FileTimestampMap0_42, &FileTimestampMap_43);
        make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_43, STATE_VARIABLE_Info_2_63, STATE_VARIABLE_Info_46);
      }
      break;
  }
}

void MR_CALL 
make__program_target__make_misc_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word HeadVar__3_3,
  MR_Word * Succeeded_15,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word DefaultOptionTable_19;
  MR_Word MaybeStdLibGrades_20;
  MR_Word Params_21;
  MR_Word MayBuild_23;

  libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_19);
  MaybeStdLibGrades_20 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_0_27);
  Params_21 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_0_27);
  make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_11, DefaultOptionTable_19, MaybeStdLibGrades_20, (MR_Integer) 1, MainModuleName_13, Params_21, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_23);
  if (((MR_tag((MR_Word) MayBuild_23)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_25 = ((MR_Word) ((MR_hl_field(1, MayBuild_23, 1))));

    make__program_target__make_misc_target_builder_11_p_0(ProgressStream_11, BuildGlobals_25, MainModuleName_13, TargetType_14, Succeeded_15, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  }
  else
  {
    MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MayBuild_23, 0))));
    MR_Word ErrorStream_26;

    libs__globals__get_error_output_stream_5_p_0(Globals_12, MainModuleName_13, &ErrorStream_26);
    parse_tree__write_error_spec__write_oom_diag_specs_5_p_0(ErrorStream_26, Globals_12, Specs_17);
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__5_5;

  make__clean__make_module_realclean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__5_5;

  make__clean__make_module_clean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Succeeded_16;
  MR_Word conv5_STATE_VARIABLE_Info_22;
  MR_Word conv4_STATE_VARIABLE_Specs_24;

  make__program_target__build_library_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv6_Succeeded_16, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_Info_22, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv6_Succeeded_16));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Info_22));
  *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__6_6;
  MR_Word conv2_HeadVar__8_8;

  make__analysis__build_analysis_files_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__8_8));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_bool succeeded;
  MR_Word Succeeded0_20;
  MR_Word AllModuleNames_21;
  MR_Word STATE_VARIABLE_Info_1_42;
  MR_Word AllModuleNamesSet_147;

  switch (MR_tag((MR_Word) TargetType_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word RebuildModuleDeps_146;
            MR_Word STATE_VARIABLE_Info_1_150;
            MR_Word STATE_VARIABLE_Info_2_151;

            RebuildModuleDeps_146 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_36);
            make__make_info__make_info_set_rebuild_module_deps_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_1_150);
            make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, &Succeeded0_20, &AllModuleNamesSet_147, STATE_VARIABLE_Info_1_150, &STATE_VARIABLE_Info_2_151);
            make__make_info__make_info_set_rebuild_module_deps_3_p_0(RebuildModuleDeps_146, STATE_VARIABLE_Info_2_151, &STATE_VARIABLE_Info_1_42);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, &Succeeded0_20, &AllModuleNamesSet_147, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_1_42);
          break;
      }
      break;
    case (MR_Integer) 1:
      make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, &Succeeded0_20, &AllModuleNamesSet_147, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_1_42);
      break;
  }
  AllModuleNames_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModuleNamesSet_147);
  switch (MR_tag((MR_Word) TargetType_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_44;
            MR_Word STATE_VARIABLE_Info_2_45;
            MR_Box conv9_STATE_VARIABLE_Info_2_45;
            MR_Box conv8_STATE_VARIABLE_IO_2_46;

            *Succeeded_16 = (MR_Integer) 1;
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_4));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_44, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, AllModuleNames_21, ((MR_Box) (STATE_VARIABLE_Info_1_42)), &conv9_STATE_VARIABLE_Info_2_45, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_2_46);
            STATE_VARIABLE_Info_2_45 = ((MR_Word) (conv9_STATE_VARIABLE_Info_2_45));
            make__clean__remove_init_files_8_p_0(ProgressStream_12, Globals_13, (MR_Integer) 132, MainModuleName_14, STATE_VARIABLE_Info_2_45, STATE_VARIABLE_Info_37);
            *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_4_50;
            MR_Word Var_52;
            MR_Box conv12_STATE_VARIABLE_Info_37;
            MR_Box conv11_STATE_VARIABLE_IO_41;

            *Succeeded_16 = (MR_Integer) 1;
            make__clean__make_main_module_realclean_7_p_0(ProgressStream_12, Globals_13, MainModuleName_14, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_4_50);
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_5));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_52, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, AllModuleNames_21, ((MR_Box) (STATE_VARIABLE_Info_4_50)), &conv12_STATE_VARIABLE_Info_37, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_41);
            *STATE_VARIABLE_Info_37 = ((MR_Word) (conv12_STATE_VARIABLE_Info_37));
            *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_74, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
              MR_hl_field(0, Var_74, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_2));
              MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_74, 3) = ((MR_Box) (Globals_13));
              MR_hl_field(0, Var_74, 4) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_74, 5) = ((MR_Box) (AllModuleNames_21));
              MR_hl_field(0, Var_74, 6) = ((MR_Box) (Succeeded0_20));
            }
            make__analysis__maybe_with_analysis_cache_dir_2_8_p_0(ProgressStream_12, Globals_13, Var_74, Succeeded_16, STATE_VARIABLE_Info_1_42, STATE_VARIABLE_Info_37);
            *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntSucceeded_32;
            MR_Word STATE_VARIABLE_Info_13_78;

            make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModuleNames_21, &IntSucceeded_32, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_13_78);
            switch (IntSucceeded_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_13_78;
                  *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_80;

                  {
                    Var_80 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__program_target_scalar_common_6[1]));
                    MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_3));
                    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(0, Var_80, 3) = ((MR_Box) (MainModuleName_14));
                    MR_hl_field(0, Var_80, 4) = ((MR_Box) (AllModuleNames_21));
                    MR_hl_field(0, Var_80, 5) = ((MR_Box) (Globals_13));
                  }
                  make__analysis__maybe_with_analysis_cache_dir_3_10_p_0(ProgressStream_12, Globals_13, Var_80, Succeeded_16, STATE_VARIABLE_Info_13_78, STATE_VARIABLE_Info_37, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word LibSucceeded_33;
            MR_Word SucceededSoFar_34;
            MR_Word Var_84;
            MR_Word STATE_VARIABLE_Info_15_85;

            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_84, 0) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_12, Globals_13, Var_84, &LibSucceeded_33, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_15_85, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
            SucceededSoFar_34 = libs__maybe_util__and_2_f_0(Succeeded0_20, LibSucceeded_33);
            switch (SucceededSoFar_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_15_85;
                }
                break;
              case (MR_Integer) 1:
                make__library_install__install_library_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, AllModuleNames_21, Succeeded_16, STATE_VARIABLE_Info_15_85, STATE_VARIABLE_Info_37);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word LibSucceeded_140;
            MR_Word SucceededSoFar_141;
            MR_Word Var_142;
            MR_Word STATE_VARIABLE_Info_15_143;

            {
              Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_142, 0) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_12, Globals_13, Var_142, &LibSucceeded_140, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_15_143, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
            SucceededSoFar_141 = libs__maybe_util__and_2_f_0(Succeeded0_20, LibSucceeded_140);
            switch (SucceededSoFar_141) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_15_143;
                }
                break;
              case (MR_Integer) 1:
                make__library_install__install_library_gs_gas_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, AllModuleNames_21, Succeeded_16, STATE_VARIABLE_Info_15_143, STATE_VARIABLE_Info_37);
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word STATE_VARIABLE_Info_18_94;
            MR_Word TargetModules_102;
            MR_Word KeepGoing_103;

            make__order__get_target_modules_9_p_0(ProgressStream_12, Globals_13, (MR_Word) ((MR_Unsigned) 52U), AllModuleNames_21, &TargetModules_102, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_18_94);
            KeepGoing_103 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_18_94);
            succeeded = (Succeeded0_20 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_103 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_16 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_18_94;
            }
            else
            {
              MR_Word XmlDocs_35;
              MR_Word Succeeded1_100;

              XmlDocs_35 = make__util__make_target_id_list_2_f_0(TargetModules_102, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_10_p_0(KeepGoing_103, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_12, Globals_13, XmlDocs_35, &Succeeded1_100, STATE_VARIABLE_Info_18_94, STATE_VARIABLE_Info_37);
              *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_20, Succeeded1_100);
            }
            *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleTargetType_22 = ((MR_Word) ((MR_hl_field(1, TargetType_15, 0))));
        MR_Word TargetModules_23;
        MR_Word KeepGoing_24;
        MR_Word STATE_VARIABLE_Info_6_55;

        make__order__get_target_modules_9_p_0(ProgressStream_12, Globals_13, ModuleTargetType_22, AllModuleNames_21, &TargetModules_23, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_6_55);
        KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_6_55);
        succeeded = (Succeeded0_20 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_24 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_6_55;
        }
        else
        {
          MR_Word Succeeded1_25;
          MR_Word STATE_VARIABLE_Info_7_58;

          switch (MR_tag((MR_Word) ModuleTargetType_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ModuleTargetType_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 5:
                case (MR_Integer) 8:
                  {
                    Succeeded1_25 = (MR_Integer) 1;
                    STATE_VARIABLE_Info_7_58 = STATE_VARIABLE_Info_6_55;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 7:
                case (MR_Integer) 9:
                case (MR_Integer) 10:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                case (MR_Integer) 13:
                  make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModuleNames_21, &Succeeded1_25, STATE_VARIABLE_Info_6_55, &STATE_VARIABLE_Info_7_58);
                  break;
                case (MR_Integer) 2:
                  make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, AllModuleNames_21, &Succeeded1_25, STATE_VARIABLE_Info_6_55, &STATE_VARIABLE_Info_7_58);
                  break;
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                  make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, AllModuleNames_21, &Succeeded1_25, STATE_VARIABLE_Info_6_55, &STATE_VARIABLE_Info_7_58);
                  break;
                case (MR_Integer) 6:
                  make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, AllModuleNames_21, &Succeeded1_25, STATE_VARIABLE_Info_6_55, &STATE_VARIABLE_Info_7_58);
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              make__int_opt__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModuleNames_21, &Succeeded1_25, STATE_VARIABLE_Info_6_55, &STATE_VARIABLE_Info_7_58);
              break;
          }
          succeeded = (Succeeded1_25 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_24 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_7_58;
          }
          else
          {
            MR_Word Targets_30;
            MR_Word Succeeded2_31;
            MR_Word Var_69;
            MR_Word Var_73;

            Targets_30 = make__util__make_target_id_list_2_f_0(TargetModules_23, ModuleTargetType_22);
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_69, 0) = ((MR_Box) (&make__program_target_scalar_common_7[0]));
              MR_hl_field(0, Var_69, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_1));
              MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_69, 3) = ((MR_Box) (KeepGoing_24));
              MR_hl_field(0, Var_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Var_69, 5) = ((MR_Box) (Globals_13));
              MR_hl_field(0, Var_69, 6) = ((MR_Box) (Targets_30));
            }
            make__analysis__maybe_with_analysis_cache_dir_2_8_p_0(ProgressStream_12, Globals_13, Var_69, &Succeeded2_31, STATE_VARIABLE_Info_7_58, STATE_VARIABLE_Info_37);
            Var_73 = libs__maybe_util__and_2_f_0(Succeeded0_20, Succeeded1_25);
            *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_73, Succeeded2_31);
          }
        }
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_16;
  MR_Word conv1_STATE_VARIABLE_Info_31;
  MR_Word conv0_STATE_VARIABLE_Specs_33;

  make__program_target__make_linked_target_1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Succeeded_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_31, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_33);
  *wrapper_arg_2 = ((MR_Box) (conv2_Succeeded_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_31));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_33));
}

void MR_CALL 
make__program_target__make_linked_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word * LinkedTargetSucceeded_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word LinkedTargetType_19 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_13, 1))) & (MR_Integer) 7);
  MR_Word ExtraOptions_20 = ((&make__program_target_vector_common_5[0 + LinkedTargetType_19]))->make__program_target__vector_common_type_5_0__vct_5_f_0;
  MR_Word LibraryInstallLinkages_21;

  libs__globals__get_library_install_linkages_2_p_0(Globals_12, &LibraryInstallLinkages_21);
  switch (LinkedTargetType_19) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) ((MR_Integer) 1)), LibraryInstallLinkages_21);
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0), ((MR_Box) ((MR_Integer) 0)), LibraryInstallLinkages_21);
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    *LinkedTargetSucceeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word LibgradeCheckSpecs_22;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_12, &LibgradeCheckSpecs_22);
    if ((LibgradeCheckSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__program_target_scalar_common_6[0]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__program_target__make_linked_target_10_p_0_1));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (Globals_12));
        MR_hl_field(0, Var_36, 4) = ((MR_Box) (LinkedTargetFile_13));
        MR_hl_field(0, Var_36, 5) = ((MR_Box) (ExtraOptions_20));
      }
      make__analysis__maybe_with_analysis_cache_dir_3_10_p_0(ProgressStream_11, Globals_12, Var_36, LinkedTargetSucceeded_14, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
    }
    else
    {
      MR_Word Var_41 = (MR_Word) (LibgradeCheckSpecs_22);

      *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Var_41, STATE_VARIABLE_Specs_0_27);
      *LinkedTargetSucceeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
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

// :- end_module make.program_target.
