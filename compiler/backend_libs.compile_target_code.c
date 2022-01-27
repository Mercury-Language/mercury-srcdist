/*
** Automatically generated from `compile_target_code.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module backend_libs.compile_target_code. */
/* :- implementation. */

/*
INIT mercury__backend_libs__compile_target_code__init
ENDINIT
*/

#include "backend_libs.compile_target_code.mih"


#include "analysis.mih"
#include "backend_libs.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "libs.file_util.mih"
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
#include "dir.mih"
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
#include "parse_tree.module_cmds.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0[9];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[9];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[9];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[2];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2];

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__V_30_30,
  MR_Word backend_libs__compile_target_code__V_31_31,
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
  MR_Word * backend_libs__compile_target_code__Result_14);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__V_30_30,
  MR_Word backend_libs__compile_target_code__V_31_31,
  MR_Word backend_libs__compile_target_code__V_32_32,
  MR_String backend_libs__compile_target_code__V_33_33,
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
  MR_Word * backend_libs__compile_target_code__Result_14);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_String backend_libs__compile_target_code__ErlangArchiveFileName_12,
  MR_Word backend_libs__compile_target_code__ObjectList_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2320__1_2_f_0(
  MR_String backend_libs__compile_target_code__GradeDir_9,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_19);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1432__1_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__PIC_26,
  MR_String backend_libs__compile_target_code__InitObjFileName_28,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_65,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_66);

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(
  MR_String backend_libs__compile_target_code__GradeDir_17,
  MR_String backend_libs__compile_target_code__StdLibDir_18,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_36);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__935__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_11);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__339__1_1_f_0(
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_17);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3267__1_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_23,
  MR_String * backend_libs__compile_target_code__LambdaHeadVar__2_24);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1349__1_2_p_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_43,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_44);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1144__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_52);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__303__1_6_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_String backend_libs__compile_target_code__Prefix_27,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_80,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_81);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__295__1_2_f_0(
  MR_Word backend_libs__compile_target_code__ModuleName_26,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_73);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__284__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_65);

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2);

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String backend_libs__compile_target_code__FullArch_2);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(
  MR_Word backend_libs__compile_target_code__Globals_11,
  MR_Word backend_libs__compile_target_code__ErrorStream_12,
  MR_Word backend_libs__compile_target_code__Verbosity_13,
  MR_String backend_libs__compile_target_code__Cmd_14,
  MR_String backend_libs__compile_target_code__NonAtArgs_15,
  MR_String backend_libs__compile_target_code__Args_16,
  MR_Word backend_libs__compile_target_code__MaybeProcessOutput_17,
  MR_Word * backend_libs__compile_target_code__Succeeded_18);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__Verbosity_11,
  MR_String backend_libs__compile_target_code__Cmd_12,
  MR_String backend_libs__compile_target_code__Args_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_String backend_libs__compile_target_code__Basename_6);

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_Word * backend_libs__compile_target_code__HeadVar__4_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
  MR_Word backend_libs__compile_target_code__Strings_6,
  MR_String backend_libs__compile_target_code__Prefix_7,
  MR_String backend_libs__compile_target_code__Suffix_8,
  MR_String backend_libs__compile_target_code__Separator_9,
  MR_String * backend_libs__compile_target_code__Result_10);

static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_String backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_String backend_libs__compile_target_code__HeadVar__4_4,
  MR_String * backend_libs__compile_target_code__HeadVar__5_5);

static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_Word backend_libs__compile_target_code__HeadVar__4_4,
  MR_Word * backend_libs__compile_target_code__HeadVar__5_5);

static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
  MR_Word backend_libs__compile_target_code__Stream_6,
  MR_String backend_libs__compile_target_code__ClassSubDir_7,
  MR_String backend_libs__compile_target_code__ClassFileName_8);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
  MR_String backend_libs__compile_target_code__JarFileName_14,
  MR_Word backend_libs__compile_target_code__ObjectList_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_6,
  MR_String backend_libs__compile_target_code__ExeFileName_7,
  MR_Word backend_libs__compile_target_code__Stream_8);

static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
  MR_String backend_libs__compile_target_code__OutputFileName0_14,
  MR_Word backend_libs__compile_target_code__SourceList0_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_String backend_libs__compile_target_code__LibFileName_11,
  MR_Word backend_libs__compile_target_code__Quote_12,
  MR_Word backend_libs__compile_target_code__ObjectList_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MercuryLibDirs_10,
  MR_String backend_libs__compile_target_code__LibName_11,
  MR_String * backend_libs__compile_target_code__LinkerOpt_12,
  MR_Word backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_33,
  MR_Word * backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_34);

static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
  MR_Word backend_libs__compile_target_code__Globals_3);

static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
  MR_String * backend_libs__compile_target_code__OutputOpt_6);

static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
  MR_String backend_libs__compile_target_code__FileNameA_6,
  MR_String backend_libs__compile_target_code__FileNameB_7,
  MR_Word * backend_libs__compile_target_code__SameTimestamp_8);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__FrameworkOpts_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__FrameworkDirs_4);

static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_3_p_0(
  MR_String backend_libs__compile_target_code__ObjExt_4,
  MR_String backend_libs__compile_target_code__PicObjExt_5,
  MR_String backend_libs__compile_target_code__FileName_6);

static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Files_6,
  MR_Word * backend_libs__compile_target_code__ObjectFiles_7,
  MR_Word * backend_libs__compile_target_code__NonObjectFiles_8);

static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
  MR_String * backend_libs__compile_target_code__ResCmdLinkOpts_6);

static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_Word * backend_libs__compile_target_code__UseThreadLibs_4);

static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__TargetType_5,
  MR_String * backend_libs__compile_target_code__SystemLibs_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_6,
  MR_Word backend_libs__compile_target_code__LinkTargetType_7,
  MR_Word backend_libs__compile_target_code__RpathFlagOpt_8,
  MR_Word backend_libs__compile_target_code__RpathSepOpt_9,
  MR_String * backend_libs__compile_target_code__RpathOpts_10);

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4,
  MR_Box backend_libs__compile_target_code__wrapper_arg_5,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word * backend_libs__compile_target_code__MaybeLinkLibraries_6);

static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__TargetType_10,
  MR_String backend_libs__compile_target_code__StdLibDir_11,
  MR_String backend_libs__compile_target_code__GradeDir_12,
  MR_String backend_libs__compile_target_code__LibExt_13,
  MR_String backend_libs__compile_target_code__Name_14,
  MR_String * backend_libs__compile_target_code__StaticArg_15,
  MR_String * backend_libs__compile_target_code__SharedArg_16);

static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__TargetType_5,
  MR_String * backend_libs__compile_target_code__StdLibs_6);

static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__ModuleName_13,
  MR_String backend_libs__compile_target_code__OutputFileName_14,
  MR_Word backend_libs__compile_target_code__ObjectsList_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__link_output_filename_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__LinkTargetType_9,
  MR_Word backend_libs__compile_target_code__ModuleName_10,
  MR_String * backend_libs__compile_target_code__Ext_11,
  MR_String * backend_libs__compile_target_code__OutputFileName_12);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word backend_libs__compile_target_code__Globals_14,
  MR_Word backend_libs__compile_target_code__ErrorStream_15,
  MR_String backend_libs__compile_target_code__MkInit_16,
  MR_Word backend_libs__compile_target_code__ModuleName_17,
  MR_Word backend_libs__compile_target_code__ModuleNames_18,
  MR_String backend_libs__compile_target_code__TargetExt_19,
  MR_Word backend_libs__compile_target_code__StdInitFileNames_20,
  MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_21,
  MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_22,
  MR_String backend_libs__compile_target_code__ModuleNameOption_23,
  MR_Word * backend_libs__compile_target_code__MaybeInitTargetFile_24);

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_Word backend_libs__compile_target_code__ModuleName_12,
  MR_Word backend_libs__compile_target_code__ModuleNames_13,
  MR_Word * backend_libs__compile_target_code__Result_14);

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__InitFileStream_11,
  MR_Word backend_libs__compile_target_code__Verbosity_12,
  MR_String backend_libs__compile_target_code__MkInit_13,
  MR_String backend_libs__compile_target_code__Args_14,
  MR_Word backend_libs__compile_target_code__FileNames_15,
  MR_Word * backend_libs__compile_target_code__MkInitOK_16);

static void MR_CALL 
backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_String backend_libs__compile_target_code__Ext_9,
  MR_Word backend_libs__compile_target_code__MkDir_10,
  MR_Word backend_libs__compile_target_code__ModuleName_11,
  MR_String * backend_libs__compile_target_code__FileName_12);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__MainModuleName_12,
  MR_Word backend_libs__compile_target_code__AllModules_13,
  MR_String backend_libs__compile_target_code__TargetExt_14,
  MR_String backend_libs__compile_target_code__MkInit_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String backend_libs__compile_target_code__FlagStr_2);

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void);

static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__Flags_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__InclOpt_4);

static void MR_CALL 
backend_libs__compile_target_code__gather_grade_defines_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__GradeDefines_4);

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__PIC_5,
  MR_String * backend_libs__compile_target_code__AllCFlags_6);

static MR_Box MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0(
  MR_Word backend_libs__compile_target_code__Module_4,
  MR_Word backend_libs__compile_target_code__DepModules0_5);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[12][2];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[5][1];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[1][4];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[16][3];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[4][5];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[3][8];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[1][10];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[1][11];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_12[2][7];


/* sealed */ struct backend_libs__compile_target_code__vector_common_type_8_0_s {
  const MR_String backend_libs__compile_target_code__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct backend_libs__compile_target_code__vector_common_type_8_0_s backend_libs__compile_target_code_vector_common_8[15];



static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "_H */\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) " -s ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_java_files_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_erlang_file_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[1])),
    ((MR_Box) (backend_libs__compile_target_code__link_module_list_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[3])),
    ((MR_Box) (backend_libs__compile_target_code__referenced_dlls_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[0])),
    ((MR_Box) (backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_framework_directories_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_frameworks_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__create_archive_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_6[2])),
    ((MR_Box) (backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_12[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct backend_libs__compile_target_code__vector_common_type_8_0_s backend_libs__compile_target_code_vector_common_8[15] = {
  /* row 0 */   {     (MR_String) "" },
  /* row 1 */   {     (MR_String) "" },
  /* row 2 */   {     (MR_String) "" },
  /* row 3 */   {     (MR_String) ".bat" },
  /* row 4 */   {     (MR_String) ".bat" },
  /* row 5 */   {     (MR_String) "" },
  /* row 6 */   {     (MR_String) "" },
  /* row 7 */   {     (MR_String) "" },
  /* row 8 */   {     (MR_String) ".bat" },
  /* row 9 */   {     (MR_String) ".bat" },
  /* row 10 */   {     (MR_String) "" },
  /* row 11 */   {     (MR_String) "" },
  /* row 12 */   {     (MR_String) "" },
  /* row 13 */   {     (MR_String) ".bat" },
  /* row 14 */   {     (MR_String) ".bat" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "compile_init_file_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0 = {
  (MR_String) "is_as_new_as",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1 = {
  (MR_String) "is_not_as_new_as",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2 = {
  (MR_String) "missing_timestamp",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "is_as_new_as",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0 = {
  (MR_String) "executable",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1 = {
  (MR_String) "static_library",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2 = {
  (MR_String) "shared_library",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3 = {
  (MR_String) "csharp_executable",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4 = {
  (MR_String) "csharp_library",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5 = {
  (MR_String) "java_executable",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6 = {
  (MR_String) "java_archive",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7 = {
  (MR_String) "erlang_launcher",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8 = {
  (MR_String) "erlang_archive",
  (MR_Integer) 8
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0[9] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[9] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[9] = {
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "linked_target_type",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0 = {
  (MR_String) "pic",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1 = {
  (MR_String) "non_pic",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____pic_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____pic_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "pic",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0
};

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

    {
      backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____is_as_new_as_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

    {
      backend_libs__compile_target_code____Compare____is_as_new_as_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____linked_target_type_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

    {
      backend_libs__compile_target_code____Compare____linked_target_type_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____pic_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

    {
      backend_libs__compile_target_code____Compare____pic_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__V_30_30,
  MR_Word backend_libs__compile_target_code__V_31_31,
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
  MR_Word * backend_libs__compile_target_code__Result_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Verbose_16;
    MR_Word backend_libs__compile_target_code__Stats_17;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 62, &backend_libs__compile_target_code__Stats_17);
    }
    if ((backend_libs__compile_target_code__MaybeInitTargetFile_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String backend_libs__compile_target_code__InitTargetFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitTargetFile_10, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__Rel_19;
        MR_Word backend_libs__compile_target_code__TimeResultA_50;
        MR_Word backend_libs__compile_target_code__TimeResultB_51;
        MR_Word backend_libs__compile_target_code__TimeA_52;
        MR_Word backend_libs__compile_target_code__TimeB_53;

        {
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitObjFileName_13, &backend_libs__compile_target_code__TimeResultA_50);
        }
        {
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__TimeResultB_51);
        }
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_50)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__TimeA_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_50, (MR_Integer) 0)));
            backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_51)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__compile_target_code__succeeded)
              backend_libs__compile_target_code__TimeB_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_51, (MR_Integer) 0)));
          }
        if (backend_libs__compile_target_code__succeeded)
          {
            MR_Word backend_libs__compile_target_code__Compare_54;

            {
              mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_54, backend_libs__compile_target_code__TimeA_52, backend_libs__compile_target_code__TimeB_53);
            }
            switch (backend_libs__compile_target_code__Compare_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
                break;
            }
          }
        else
          backend_libs__compile_target_code__Rel_19 = (MR_Integer) 2;
        switch (backend_libs__compile_target_code__Rel_19) {
          default:
            backend_libs__compile_target_code__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            backend_libs__compile_target_code__succeeded = MR_TRUE;
            break;
        }
        if (!(backend_libs__compile_target_code__succeeded))
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MustCompile_11 == (MR_Integer) 1);
        if (backend_libs__compile_target_code__succeeded)
          {
            MR_Word backend_libs__compile_target_code__CompileOk_20;

            {
              libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling initialization file...\n");
            }
            {
              backend_libs__compile_target_code__compile_erlang_file_6_p_0(backend_libs__compile_target_code__V_30_30, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__CompileOk_20);
            }
            {
              libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
            }
            switch (backend_libs__compile_target_code__CompileOk_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__compile_target_code__Result_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__compile_target_code__Result_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
          }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__V_30_30,
  MR_Word backend_libs__compile_target_code__V_31_31,
  MR_Word backend_libs__compile_target_code__V_32_32,
  MR_String backend_libs__compile_target_code__V_33_33,
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
  MR_Word * backend_libs__compile_target_code__Result_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Verbose_16;
    MR_Word backend_libs__compile_target_code__Stats_17;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 62, &backend_libs__compile_target_code__Stats_17);
    }
    if ((backend_libs__compile_target_code__MaybeInitTargetFile_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String backend_libs__compile_target_code__InitTargetFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitTargetFile_10, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__Rel_19;
        MR_Word backend_libs__compile_target_code__TimeResultA_52;
        MR_Word backend_libs__compile_target_code__TimeResultB_53;
        MR_Word backend_libs__compile_target_code__TimeA_54;
        MR_Word backend_libs__compile_target_code__TimeB_55;

        {
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitObjFileName_13, &backend_libs__compile_target_code__TimeResultA_52);
        }
        {
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__TimeResultB_53);
        }
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_52)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__TimeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_52, (MR_Integer) 0)));
            backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_53)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__compile_target_code__succeeded)
              backend_libs__compile_target_code__TimeB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_53, (MR_Integer) 0)));
          }
        if (backend_libs__compile_target_code__succeeded)
          {
            MR_Word backend_libs__compile_target_code__Compare_56;

            {
              mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_56, backend_libs__compile_target_code__TimeA_54, backend_libs__compile_target_code__TimeB_55);
            }
            switch (backend_libs__compile_target_code__Compare_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
                break;
            }
          }
        else
          backend_libs__compile_target_code__Rel_19 = (MR_Integer) 2;
        switch (backend_libs__compile_target_code__Rel_19) {
          default:
            backend_libs__compile_target_code__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            backend_libs__compile_target_code__succeeded = MR_TRUE;
            break;
        }
        if (!(backend_libs__compile_target_code__succeeded))
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MustCompile_11 == (MR_Integer) 1);
        if (backend_libs__compile_target_code__succeeded)
          {
            MR_Word backend_libs__compile_target_code__CompileOk_20;

            {
              libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling initialization file...\n");
            }
            {
              backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1432__1_8_p_0(backend_libs__compile_target_code__V_30_30, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__V_32_32, backend_libs__compile_target_code__V_33_33, backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__CompileOk_20);
            }
            {
              libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
            }
            switch (backend_libs__compile_target_code__CompileOk_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__compile_target_code__Result_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__compile_target_code__Result_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
          }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_String backend_libs__compile_target_code__ErlangArchiveFileName_12,
  MR_Word backend_libs__compile_target_code__ObjectList_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Res_17;
    MR_Word backend_libs__compile_target_code__V_16_16;

    {
      mercury__io__remove_file_recursively_4_p_0(backend_libs__compile_target_code__ErlangArchiveFileName_12, &backend_libs__compile_target_code__V_16_16);
    }
    {
      mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__ErlangArchiveFileName_12, &backend_libs__compile_target_code__Res_17);
    }
    if ((backend_libs__compile_target_code__Res_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__ErlangArchiveFileName_12, backend_libs__compile_target_code__ObjectList_13, backend_libs__compile_target_code__Succeeded_14);
      }
    else
      {
        MR_Word backend_libs__compile_target_code__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Res_17, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__V_28_28;

        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, (MR_String) "Error creating \140");
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__ErlangArchiveFileName_12);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, (MR_String) "\': ");
        }
        {
          backend_libs__compile_target_code__V_28_28 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_18);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__V_28_28);
        }
        {
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_10);
        }
        *backend_libs__compile_target_code__Succeeded_14 = (MR_Integer) 0;
      }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2320__1_2_f_0(
  MR_String backend_libs__compile_target_code__GradeDir_9,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_19)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__LambdaHeadVar__2_20;
    MR_String backend_libs__compile_target_code__V_21_21;

    {
      backend_libs__compile_target_code__V_21_21 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_19, (MR_String) "lib");
    }
    {
      backend_libs__compile_target_code__LambdaHeadVar__2_20 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_21_21, backend_libs__compile_target_code__GradeDir_9);
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_20;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1432__1_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__PIC_26,
  MR_String backend_libs__compile_target_code__InitObjFileName_28,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_65,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_66)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__PIC_26, backend_libs__compile_target_code__LambdaHeadVar__1_65, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__LambdaHeadVar__2_66);
    }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(
  MR_String backend_libs__compile_target_code__GradeDir_17,
  MR_String backend_libs__compile_target_code__StdLibDir_18,
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_36)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__LambdaHeadVar__2_37;
    MR_String backend_libs__compile_target_code__V_38_38;
    MR_String backend_libs__compile_target_code__V_39_39;

    {
      backend_libs__compile_target_code__V_39_39 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_18, (MR_String) "modules");
    }
    {
      backend_libs__compile_target_code__V_38_38 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_39_39, backend_libs__compile_target_code__GradeDir_17);
    }
    {
      backend_libs__compile_target_code__LambdaHeadVar__2_37 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_38_38, backend_libs__compile_target_code__LambdaHeadVar__1_36);
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_37;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__935__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_11)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__LambdaHeadVar__2_12;
    MR_Word backend_libs__compile_target_code__V_14_14;
    MR_String backend_libs__compile_target_code__V_15_15;

    {
      backend_libs__compile_target_code__V_15_15 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_11);
    }
    {
      backend_libs__compile_target_code__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_14_14, 0) = ((MR_Box) (backend_libs__compile_target_code__V_15_15));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      backend_libs__compile_target_code__LambdaHeadVar__2_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_12, 0) = ((MR_Box) ((MR_String) "-I"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_12, 1) = ((MR_Box) (backend_libs__compile_target_code__V_14_14));
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_12;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__339__1_1_f_0(
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_17)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__LambdaHeadVar__2_18;

    {
      backend_libs__compile_target_code__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(backend_libs__compile_target_code__LambdaHeadVar__1_17);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__LambdaHeadVar__2_18 = (MR_Word) &backend_libs__compile_target_code_scalar_common_3[4];
      }
    else
      {
        MR_String backend_libs__compile_target_code__V_20_20;

        {
          backend_libs__compile_target_code__V_20_20 = mdbcomp__sym_name__outermost_qualifier_1_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_17);
        }
        {
          backend_libs__compile_target_code__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__LambdaHeadVar__2_18, 0) = ((MR_Box) (backend_libs__compile_target_code__V_20_20));
        }
      }
    return backend_libs__compile_target_code__LambdaHeadVar__2_18;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3267__1_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_23,
  MR_String * backend_libs__compile_target_code__LambdaHeadVar__2_24)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__LambdaHeadVar__1_23, (MR_String) ".m", (MR_Integer) 1, backend_libs__compile_target_code__LambdaHeadVar__2_24);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1349__1_2_p_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_43,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_44)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__V_45_45;

    {
      backend_libs__compile_target_code__V_45_45 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_43);
    }
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_45_45, backend_libs__compile_target_code__LambdaHeadVar__2_44);
    }
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1144__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_52)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__LambdaHeadVar__2_53;
    MR_Word backend_libs__compile_target_code__V_55_55;
    MR_String backend_libs__compile_target_code__V_56_56;

    {
      backend_libs__compile_target_code__V_56_56 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_52);
    }
    {
      backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__V_56_56));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      backend_libs__compile_target_code__LambdaHeadVar__2_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_53, 0) = ((MR_Box) ((MR_String) "-I"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_53;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__303__1_6_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_String backend_libs__compile_target_code__Prefix_27,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_80,
  MR_Word * backend_libs__compile_target_code__LambdaHeadVar__2_81)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__FileName_39;
    MR_Word backend_libs__compile_target_code__V_86_86;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__LambdaHeadVar__1_80, (MR_String) ".dll", (MR_Integer) 1, &backend_libs__compile_target_code__FileName_39);
    }
    {
      backend_libs__compile_target_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_39));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *backend_libs__compile_target_code__LambdaHeadVar__2_81 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__Prefix_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__compile_target_code__V_86_86));
    }
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__295__1_2_f_0(
  MR_Word backend_libs__compile_target_code__ModuleName_26,
  MR_Word backend_libs__compile_target_code__LambdaHeadVar__1_73)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__LambdaHeadVar__2_74;

    {
      backend_libs__compile_target_code__LambdaHeadVar__2_74 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(backend_libs__compile_target_code__LambdaHeadVar__1_73, backend_libs__compile_target_code__ModuleName_26);
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_74;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__284__1_1_f_0(
  MR_String backend_libs__compile_target_code__LambdaHeadVar__1_65)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__LambdaHeadVar__2_66;
    MR_Word backend_libs__compile_target_code__V_68_68;

    {
      backend_libs__compile_target_code__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 0) = ((MR_Box) (backend_libs__compile_target_code__LambdaHeadVar__1_65));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      backend_libs__compile_target_code__LambdaHeadVar__2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_66, 0) = ((MR_Box) ((MR_String) "-lib:"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__LambdaHeadVar__2_66, 1) = ((MR_Box) (backend_libs__compile_target_code__V_68_68));
    }
    return backend_libs__compile_target_code__LambdaHeadVar__2_66;
  }
}

void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

    return backend_libs__compile_target_code__succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Cast_HeadVar1_4 = backend_libs__compile_target_code__HeadVar__2_2;
    MR_Word backend_libs__compile_target_code__Cast_HeadVar2_5 = backend_libs__compile_target_code__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_2[0], backend_libs__compile_target_code__HeadVar__1_1, ((MR_Box) (backend_libs__compile_target_code__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__compile_target_code__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Cast_HeadVar1_3 = backend_libs__compile_target_code__HeadVar__1_1;
    MR_Word backend_libs__compile_target_code__Cast_HeadVar2_4 = backend_libs__compile_target_code__HeadVar__2_2;

    {
      backend_libs__compile_target_code__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) backend_libs__compile_target_code__Cast_HeadVar1_3, (MR_Word) backend_libs__compile_target_code__Cast_HeadVar2_4);
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
  MR_String backend_libs__compile_target_code__FullArch_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__ArchComponents_3;
    MR_String backend_libs__compile_target_code__Mfr_5;
    MR_String backend_libs__compile_target_code__OS_6;
    MR_Word backend_libs__compile_target_code__V_8_8;
    MR_Word backend_libs__compile_target_code__V_9_9;
    MR_Word backend_libs__compile_target_code__V_10_10;
    MR_String backend_libs__compile_target_code__V_11_11;
    MR_String backend_libs__compile_target_code___CPU_4;

    {
      backend_libs__compile_target_code__ArchComponents_3 = mercury__string__split_at_char_2_f_0((MR_Char) 45, backend_libs__compile_target_code__FullArch_2);
    }
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__ArchComponents_3)) == (MR_mktag((MR_Integer) 1)));
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code___CPU_4 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ArchComponents_3, (MR_Integer) 0)));
        backend_libs__compile_target_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ArchComponents_3, (MR_Integer) 1)));
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__V_8_8)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__Mfr_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_8_8, (MR_Integer) 0)));
            backend_libs__compile_target_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_8_8, (MR_Integer) 1)));
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Mfr_5, (MR_String) "apple") == 0);
            if (backend_libs__compile_target_code__succeeded)
              {
                backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__V_9_9)) == (MR_mktag((MR_Integer) 1)));
                if (backend_libs__compile_target_code__succeeded)
                  {
                    backend_libs__compile_target_code__OS_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_9_9, (MR_Integer) 0)));
                    backend_libs__compile_target_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_9_9, (MR_Integer) 1)));
                    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (backend_libs__compile_target_code__succeeded)
                      {
                        backend_libs__compile_target_code__V_11_11 = (MR_String) "darwin";
                        {
                          backend_libs__compile_target_code__succeeded = mercury__string__prefix_2_p_0(backend_libs__compile_target_code__OS_6, backend_libs__compile_target_code__V_11_11);
                        }
                      }
                  }
              }
          }
      }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(
  MR_Word backend_libs__compile_target_code__Globals_11,
  MR_Word backend_libs__compile_target_code__ErrorStream_12,
  MR_Word backend_libs__compile_target_code__Verbosity_13,
  MR_String backend_libs__compile_target_code__Cmd_14,
  MR_String backend_libs__compile_target_code__NonAtArgs_15,
  MR_String backend_libs__compile_target_code__Args_16,
  MR_Word backend_libs__compile_target_code__MaybeProcessOutput_17,
  MR_Word * backend_libs__compile_target_code__Succeeded_18)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__RestrictedCommandLine_20;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_11, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_20);
    }
    switch (backend_libs__compile_target_code__RestrictedCommandLine_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String backend_libs__compile_target_code__FullCmd_76;

          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__NonAtArgs_15, (MR_String) "") == 0);
          if (backend_libs__compile_target_code__succeeded)
            {
              MR_String backend_libs__compile_target_code__V_35_35;

              {
                backend_libs__compile_target_code__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__Args_16);
              }
              {
                backend_libs__compile_target_code__FullCmd_76 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Cmd_14, backend_libs__compile_target_code__V_35_35);
              }
            }
          else
            {
              MR_Word backend_libs__compile_target_code__V_37_37;
              MR_Word backend_libs__compile_target_code__V_38_38;
              MR_Word backend_libs__compile_target_code__V_40_40;
              MR_Word backend_libs__compile_target_code__V_41_41;
              MR_Word backend_libs__compile_target_code__V_43_43;

              {
                backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__Args_16));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
              }
              {
                backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) (backend_libs__compile_target_code__NonAtArgs_15));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
              }
              {
                backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
              }
              {
                backend_libs__compile_target_code__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 0) = ((MR_Box) (backend_libs__compile_target_code__Cmd_14));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
              }
              {
                mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_37_37, &backend_libs__compile_target_code__FullCmd_76);
              }
            }
          {
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ErrorStream_12, backend_libs__compile_target_code__Verbosity_13, backend_libs__compile_target_code__FullCmd_76, backend_libs__compile_target_code__MaybeProcessOutput_17, backend_libs__compile_target_code__Succeeded_18);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__TmpFileResult_21;

          {
            libs__file_util__open_temp_output_3_p_0(&backend_libs__compile_target_code__TmpFileResult_21);
          }
          if (((MR_tag((MR_Word) backend_libs__compile_target_code__TmpFileResult_21)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String backend_libs__compile_target_code__ErrorMessage_31 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TmpFileResult_21, (MR_Integer) 0)));
              MR_Word backend_libs__compile_target_code__V_47_47;

              {
                backend_libs__compile_target_code__V_47_47 = mercury__io__stderr_stream_0_f_0();
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__compile_target_code__V_47_47, backend_libs__compile_target_code__ErrorMessage_31);
              }
              {
                mercury__io__nl_2_p_0();
              }
              *backend_libs__compile_target_code__Succeeded_18 = (MR_Integer) 0;
            }
          else
            {
              MR_String backend_libs__compile_target_code__TmpFile_22;
              MR_Word backend_libs__compile_target_code__TmpStream_23;
              MR_String backend_libs__compile_target_code__TmpFileArgs_24;
              MR_Word backend_libs__compile_target_code__VeryVerbose_25;
              MR_String backend_libs__compile_target_code__AtFileName_26;
              MR_String backend_libs__compile_target_code__FullCmd_27;
              MR_Word backend_libs__compile_target_code__Succeeded0_28;
              MR_Word backend_libs__compile_target_code__RemoveResult_29;
              MR_Tuple backend_libs__compile_target_code__V_50_50 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TmpFileResult_21, (MR_Integer) 0)));
              MR_Word backend_libs__compile_target_code__EnvType_87;

              backend_libs__compile_target_code__TmpFile_22 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, (MR_Integer) 0)));
              backend_libs__compile_target_code__TmpStream_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, (MR_Integer) 1)));
              {
                backend_libs__compile_target_code__TmpFileArgs_24 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__Args_16, (MR_String) "\\", (MR_String) "\\\\");
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__compile_target_code__TmpStream_23, backend_libs__compile_target_code__TmpFileArgs_24);
              }
              {
                mercury__io__close_output_3_p_0(backend_libs__compile_target_code__TmpStream_23);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_11, (MR_Integer) 53, &backend_libs__compile_target_code__VeryVerbose_25);
              }
              {
                libs__globals__get_system_env_type_2_p_0(backend_libs__compile_target_code__Globals_11, &backend_libs__compile_target_code__EnvType_87);
              }
              switch (backend_libs__compile_target_code__EnvType_87) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                  {
                    {
                      backend_libs__compile_target_code__AtFileName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\100", backend_libs__compile_target_code__TmpFile_22);
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    {
                      backend_libs__compile_target_code__AtFileName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", backend_libs__compile_target_code__TmpFile_22);
                    }
                  }
                  break;
              }
              switch (backend_libs__compile_target_code__VeryVerbose_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% Args placed in ");
                    }
                    {
                      mercury__io__write_string_3_p_0(backend_libs__compile_target_code__AtFileName_26);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ": \140");
                    }
                    {
                      mercury__io__write_string_3_p_0(backend_libs__compile_target_code__TmpFileArgs_24);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\'\n");
                    }
                    {
                      mercury__io__flush_output_2_p_0();
                    }
                  }
                  break;
              }
              backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__NonAtArgs_15, (MR_String) "") == 0);
              if (backend_libs__compile_target_code__succeeded)
                {
                  MR_String backend_libs__compile_target_code__V_64_64;

                  {
                    backend_libs__compile_target_code__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__AtFileName_26);
                  }
                  {
                    backend_libs__compile_target_code__FullCmd_27 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Cmd_14, backend_libs__compile_target_code__V_64_64);
                  }
                }
              else
                {
                  MR_Word backend_libs__compile_target_code__V_66_66;
                  MR_Word backend_libs__compile_target_code__V_67_67;
                  MR_Word backend_libs__compile_target_code__V_69_69;
                  MR_Word backend_libs__compile_target_code__V_70_70;
                  MR_Word backend_libs__compile_target_code__V_72_72;

                  {
                    backend_libs__compile_target_code__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_72_72, 0) = ((MR_Box) (backend_libs__compile_target_code__AtFileName_26));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    backend_libs__compile_target_code__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 1) = ((MR_Box) (backend_libs__compile_target_code__V_72_72));
                  }
                  {
                    backend_libs__compile_target_code__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 0) = ((MR_Box) (backend_libs__compile_target_code__NonAtArgs_15));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 1) = ((MR_Box) (backend_libs__compile_target_code__V_70_70));
                  }
                  {
                    backend_libs__compile_target_code__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 1) = ((MR_Box) (backend_libs__compile_target_code__V_69_69));
                  }
                  {
                    backend_libs__compile_target_code__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 0) = ((MR_Box) (backend_libs__compile_target_code__Cmd_14));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 1) = ((MR_Box) (backend_libs__compile_target_code__V_67_67));
                  }
                  {
                    mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_66_66, &backend_libs__compile_target_code__FullCmd_27);
                  }
                }
              {
                parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ErrorStream_12, backend_libs__compile_target_code__Verbosity_13, backend_libs__compile_target_code__FullCmd_27, backend_libs__compile_target_code__MaybeProcessOutput_17, &backend_libs__compile_target_code__Succeeded0_28);
              }
              {
                mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TmpFile_22, &backend_libs__compile_target_code__RemoveResult_29);
              }
              if ((backend_libs__compile_target_code__RemoveResult_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *backend_libs__compile_target_code__Succeeded_18 = backend_libs__compile_target_code__Succeeded0_28;
              else
                *backend_libs__compile_target_code__Succeeded_18 = (MR_Integer) 0;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__Verbosity_11,
  MR_String backend_libs__compile_target_code__Cmd_12,
  MR_String backend_libs__compile_target_code__Args_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__Verbosity_11, backend_libs__compile_target_code__Cmd_12, (MR_String) "", backend_libs__compile_target_code__Args_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__Succeeded_14);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_String backend_libs__compile_target_code__Basename_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_130_130;
    MR_Word backend_libs__compile_target_code__InitFiles0_8;
    MR_Word backend_libs__compile_target_code__InitFiles1_9;
    MR_Word backend_libs__compile_target_code__TraceInitFiles0_10;
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_11;
    MR_String backend_libs__compile_target_code__GradeDir_12;
    MR_Word backend_libs__compile_target_code__InitFiles2_14;
    MR_Word backend_libs__compile_target_code__TraceInitFiles_15;
    MR_Word backend_libs__compile_target_code__SourceDebugInitFiles_16;
    MR_Word backend_libs__compile_target_code__TraceLevel_17;
    MR_Word backend_libs__compile_target_code__TraceLevelIsNone_18;
    MR_String backend_libs__compile_target_code__TraceOpt_19;
    MR_Word backend_libs__compile_target_code__InitFiles3_20;
    MR_Word backend_libs__compile_target_code__SourceDebug_21;
    MR_Word backend_libs__compile_target_code__InitFiles_22;
    MR_Word backend_libs__compile_target_code__RuntimeFlagsList_23;
    MR_String backend_libs__compile_target_code__RuntimeFlags_24;
    MR_Word backend_libs__compile_target_code__InitFileDirsList_25;
    MR_String backend_libs__compile_target_code__InitFileDirs_26;
    MR_String backend_libs__compile_target_code__ExperimentalComplexity_27;
    MR_String backend_libs__compile_target_code__ExperimentalComplexityOpt_28;
    MR_String backend_libs__compile_target_code__Grade_29;
    MR_String backend_libs__compile_target_code__MkInit_30;
    MR_String backend_libs__compile_target_code__CFileName_31;
    MR_Word backend_libs__compile_target_code__ErrorStream_32;
    MR_String backend_libs__compile_target_code__MkInitArgs_33;
    MR_Word backend_libs__compile_target_code__MkInitCmdOk_34;
    MR_Word backend_libs__compile_target_code__V_86_86;
    MR_Word backend_libs__compile_target_code__V_88_88;
    MR_Word backend_libs__compile_target_code__V_89_89;
    MR_Word backend_libs__compile_target_code__V_91_91;
    MR_Word backend_libs__compile_target_code__V_92_92;
    MR_Word backend_libs__compile_target_code__V_94_94;
    MR_Word backend_libs__compile_target_code__V_95_95;
    MR_Word backend_libs__compile_target_code__V_97_97;
    MR_Word backend_libs__compile_target_code__V_98_98;
    MR_Word backend_libs__compile_target_code__V_100_100;
    MR_String backend_libs__compile_target_code__V_101_101;
    MR_Word backend_libs__compile_target_code__V_102_102;
    MR_Word backend_libs__compile_target_code__V_104_104;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 550, &backend_libs__compile_target_code__InitFiles0_8);
    }
    backend_libs__compile_target_code__TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__remove_dups_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles0_8, &backend_libs__compile_target_code__InitFiles1_9);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 551, &backend_libs__compile_target_code__TraceInitFiles0_10);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 547, &backend_libs__compile_target_code__MaybeStdLibDir_11);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__GradeDir_12);
    }
    if ((backend_libs__compile_target_code__MaybeStdLibDir_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        backend_libs__compile_target_code__InitFiles2_14 = backend_libs__compile_target_code__InitFiles1_9;
        backend_libs__compile_target_code__TraceInitFiles_15 = backend_libs__compile_target_code__TraceInitFiles0_10;
        backend_libs__compile_target_code__SourceDebugInitFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String backend_libs__compile_target_code__StdLibDir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_11, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__V_44_44;
        MR_String backend_libs__compile_target_code__V_45_45;
        MR_String backend_libs__compile_target_code__V_46_46;
        MR_Word backend_libs__compile_target_code__V_49_49;
        MR_String backend_libs__compile_target_code__V_50_50;
        MR_String backend_libs__compile_target_code__V_51_51;
        MR_String backend_libs__compile_target_code__V_52_52;
        MR_String backend_libs__compile_target_code__V_55_55;
        MR_String backend_libs__compile_target_code__V_56_56;
        MR_String backend_libs__compile_target_code__V_57_57;
        MR_Word backend_libs__compile_target_code__V_60_60;
        MR_String backend_libs__compile_target_code__V_61_61;
        MR_String backend_libs__compile_target_code__V_62_62;
        MR_String backend_libs__compile_target_code__V_63_63;
        MR_String backend_libs__compile_target_code__V_66_66;
        MR_String backend_libs__compile_target_code__V_67_67;
        MR_String backend_libs__compile_target_code__V_68_68;

        {
          backend_libs__compile_target_code__V_46_46 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_45_45 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_46_46, backend_libs__compile_target_code__GradeDir_12);
        }
        {
          backend_libs__compile_target_code__V_44_44 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_45_45, (MR_String) "mer_rt.init");
        }
        {
          backend_libs__compile_target_code__V_52_52 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_51_51 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_52_52, backend_libs__compile_target_code__GradeDir_12);
        }
        {
          backend_libs__compile_target_code__V_50_50 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_51_51, (MR_String) "mer_std.init");
        }
        {
          backend_libs__compile_target_code__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 0) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 1) = ((MR_Box) (backend_libs__compile_target_code__InitFiles1_9));
        }
        {
          backend_libs__compile_target_code__InitFiles2_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFiles2_14, 0) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFiles2_14, 1) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
        }
        {
          backend_libs__compile_target_code__V_57_57 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_56_56 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_57_57, backend_libs__compile_target_code__GradeDir_12);
        }
        {
          backend_libs__compile_target_code__V_55_55 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_56_56, (MR_String) "mer_browser.init");
        }
        {
          backend_libs__compile_target_code__V_63_63 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_62_62 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_63_63, backend_libs__compile_target_code__GradeDir_12);
        }
        {
          backend_libs__compile_target_code__V_61_61 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_62_62, (MR_String) "mer_mdbcomp.init");
        }
        {
          backend_libs__compile_target_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 0) = ((MR_Box) (backend_libs__compile_target_code__V_61_61));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 1) = ((MR_Box) (backend_libs__compile_target_code__TraceInitFiles0_10));
        }
        {
          backend_libs__compile_target_code__TraceInitFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TraceInitFiles_15, 0) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TraceInitFiles_15, 1) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
        }
        {
          backend_libs__compile_target_code__V_68_68 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_67_67 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_68_68, backend_libs__compile_target_code__GradeDir_12);
        }
        {
          backend_libs__compile_target_code__V_66_66 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_67_67, (MR_String) "mer_ssdb.init");
        }
        {
          backend_libs__compile_target_code__SourceDebugInitFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFiles_16, 0) = ((MR_Box) (backend_libs__compile_target_code__V_66_66));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__TraceLevel_17);
    }
    {
      backend_libs__compile_target_code__TraceLevelIsNone_18 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_17);
    }
    switch (backend_libs__compile_target_code__TraceLevelIsNone_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__TraceOpt_19 = (MR_String) "-t";
          {
            backend_libs__compile_target_code__InitFiles3_20 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles2_14, backend_libs__compile_target_code__TraceInitFiles_15);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__TraceOpt_19 = (MR_String) "";
          backend_libs__compile_target_code__InitFiles3_20 = backend_libs__compile_target_code__InitFiles2_14;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 240, &backend_libs__compile_target_code__SourceDebug_21);
    }
    switch (backend_libs__compile_target_code__SourceDebug_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__InitFiles_22 = backend_libs__compile_target_code__InitFiles3_20;
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__InitFiles_22 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles3_20, backend_libs__compile_target_code__SourceDebugInitFiles_16);
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 561, &backend_libs__compile_target_code__RuntimeFlagsList_23);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__RuntimeFlagsList_23, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__RuntimeFlags_24);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 549, &backend_libs__compile_target_code__InitFileDirsList_25);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__InitFileDirsList_25, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__InitFileDirs_26);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 219, &backend_libs__compile_target_code__ExperimentalComplexity_27);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ExperimentalComplexity_27, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__ExperimentalComplexityOpt_28 = (MR_String) "";
    else
      {
        {
          backend_libs__compile_target_code__ExperimentalComplexityOpt_28 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", backend_libs__compile_target_code__ExperimentalComplexity_27);
        }
      }
    {
      libs__compute_grade__compute_grade_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__Grade_29);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 577, &backend_libs__compile_target_code__MkInit_30);
    }
    {
      backend_libs__compile_target_code__CFileName_31 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, (MR_String) ".c");
    }
    {
      mercury__io__output_stream_3_p_0(&backend_libs__compile_target_code__ErrorStream_32);
    }
    {
      backend_libs__compile_target_code__V_101_101 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__CFileName_31);
    }
    {
      backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__InitFileDirs_26));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[11])));
    }
    {
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
    }
    {
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) (backend_libs__compile_target_code__V_101_101));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
    }
    {
      backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
    }
    {
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeFlags_24));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
    }
    {
      backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
    }
    {
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) (backend_libs__compile_target_code__ExperimentalComplexityOpt_28));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
    }
    {
      backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
    }
    {
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpt_19));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
    }
    {
      backend_libs__compile_target_code__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
    }
    {
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) (backend_libs__compile_target_code__Grade_29));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_89_89));
    }
    {
      backend_libs__compile_target_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
    }
    {
      backend_libs__compile_target_code__MkInitArgs_33 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_86_86);
    }
    {
      backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__ErrorStream_32, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_30, backend_libs__compile_target_code__MkInitArgs_33, backend_libs__compile_target_code__InitFiles_22, &backend_libs__compile_target_code__MkInitCmdOk_34);
    }
    switch (backend_libs__compile_target_code__MkInitCmdOk_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while creating ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
          }
          {
            mercury__io__write_string_3_p_0(backend_libs__compile_target_code__CFileName_31);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\'\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__ObjExt_36;
          MR_String backend_libs__compile_target_code__ObjFileName_37;
          MR_Word backend_libs__compile_target_code__CompileOk_38;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_36);
          }
          {
            backend_libs__compile_target_code__ObjFileName_37 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, backend_libs__compile_target_code__ObjExt_36);
          }
          {
            backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__ErrorStream_32, (MR_Integer) 1, backend_libs__compile_target_code__CFileName_31, backend_libs__compile_target_code__ObjFileName_37, &backend_libs__compile_target_code__CompileOk_38);
          }
          switch (backend_libs__compile_target_code__CompileOk_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while compiling ");
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
                }
                {
                  mercury__io__write_string_3_p_0(backend_libs__compile_target_code__CFileName_31);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_Word * backend_libs__compile_target_code__HeadVar__4_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    if ((backend_libs__compile_target_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String backend_libs__compile_target_code__Module_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__Modules_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_2, (MR_Integer) 1)));
        MR_String backend_libs__compile_target_code__FileName_16;
        MR_Word backend_libs__compile_target_code__FileNames_17;
        MR_Word backend_libs__compile_target_code__ModuleName_19;
        MR_String backend_libs__compile_target_code__V_22_22;

        {
          backend_libs__compile_target_code__V_22_22 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__Module_13);
        }
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_22_22, &backend_libs__compile_target_code__ModuleName_19);
        }
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__ModuleName_19, backend_libs__compile_target_code__HeadVar__3_3, (MR_Integer) 1, &backend_libs__compile_target_code__FileName_16);
        }
        {
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Modules_14, backend_libs__compile_target_code__HeadVar__3_3, &backend_libs__compile_target_code__FileNames_17);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__compile_target_code__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__compile_target_code__FileNames_17));
        }
      }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
  MR_Word backend_libs__compile_target_code__Strings_6,
  MR_String backend_libs__compile_target_code__Prefix_7,
  MR_String backend_libs__compile_target_code__Suffix_8,
  MR_String backend_libs__compile_target_code__Separator_9,
  MR_String * backend_libs__compile_target_code__Result_10)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word backend_libs__compile_target_code__V_11_11;

    {
      backend_libs__compile_target_code__V_11_11 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_13, backend_libs__compile_target_code__TypeCtorInfo_13_13, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[15], backend_libs__compile_target_code__Strings_6);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_11_11, backend_libs__compile_target_code__Prefix_7, backend_libs__compile_target_code__Suffix_8, backend_libs__compile_target_code__Separator_9, backend_libs__compile_target_code__Result_10);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_String backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_String backend_libs__compile_target_code__HeadVar__4_4,
  MR_String * backend_libs__compile_target_code__HeadVar__5_5)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    if ((backend_libs__compile_target_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__HeadVar__5_5 = (MR_String) "";
    else
      {
        MR_String backend_libs__compile_target_code__String_9 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__Strings_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__1_1, (MR_Integer) 1)));

        if ((backend_libs__compile_target_code__Strings_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word backend_libs__compile_target_code__V_24_24;
            MR_Word backend_libs__compile_target_code__V_25_25;
            MR_Word backend_libs__compile_target_code__V_26_26;

            {
              backend_libs__compile_target_code__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__3_3));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              backend_libs__compile_target_code__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 0) = ((MR_Box) (backend_libs__compile_target_code__String_9));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 1) = ((MR_Box) (backend_libs__compile_target_code__V_26_26));
            }
            {
              backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__2_2));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__V_25_25));
            }
            {
              mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__HeadVar__5_5);
            }
          }
        else
          {
            MR_String backend_libs__compile_target_code__Result0_17;
            MR_Word backend_libs__compile_target_code__V_18_18;
            MR_Word backend_libs__compile_target_code__V_19_19;
            MR_Word backend_libs__compile_target_code__V_20_20;
            MR_Word backend_libs__compile_target_code__V_21_21;
            MR_Word backend_libs__compile_target_code__V_22_22;

            {
              backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__Strings_10, backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__HeadVar__3_3, backend_libs__compile_target_code__HeadVar__4_4, &backend_libs__compile_target_code__Result0_17);
            }
            {
              backend_libs__compile_target_code__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_22_22, 0) = ((MR_Box) (backend_libs__compile_target_code__Result0_17));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__4_4));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_22_22));
            }
            {
              backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__3_3));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__V_21_21));
            }
            {
              backend_libs__compile_target_code__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_19_19, 0) = ((MR_Box) (backend_libs__compile_target_code__String_9));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_19_19, 1) = ((MR_Box) (backend_libs__compile_target_code__V_20_20));
            }
            {
              backend_libs__compile_target_code__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_18_18, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__2_2));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_18_18, 1) = ((MR_Box) (backend_libs__compile_target_code__V_19_19));
            }
            {
              mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_18_18, backend_libs__compile_target_code__HeadVar__5_5);
            }
          }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
  MR_Word backend_libs__compile_target_code__HeadVar__4_4,
  MR_Word * backend_libs__compile_target_code__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__compile_target_code__succeeded;

        if ((backend_libs__compile_target_code__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__compile_target_code__HeadVar__5_5 = (MR_Integer) 1;
        else
          {
            MR_String backend_libs__compile_target_code__Obj_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word backend_libs__compile_target_code__Objs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word backend_libs__compile_target_code__Res_21;

            {
              parse_tree__module_cmds__copy_file_6_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Obj_17, backend_libs__compile_target_code__HeadVar__3_3, &backend_libs__compile_target_code__Res_21);
            }
            if ((backend_libs__compile_target_code__Res_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word backend_libs__compile_target_code__HeadVar__4__tmp_copy_4 = backend_libs__compile_target_code__Objs_18;

                  backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
            else
              {
                MR_Word backend_libs__compile_target_code__Error_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Res_21, (MR_Integer) 0)));
                MR_String backend_libs__compile_target_code__V_31_31;

                {
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, (MR_String) "Error copying \140");
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__Obj_17);
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, (MR_String) "\': ");
                }
                {
                  backend_libs__compile_target_code__V_31_31 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_22);
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__V_31_31);
                }
                {
                  mercury__io__nl_3_p_0(backend_libs__compile_target_code__HeadVar__2_2);
                }
                *backend_libs__compile_target_code__HeadVar__5_5 = (MR_Integer) 0;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
  MR_Word backend_libs__compile_target_code__Stream_6,
  MR_String backend_libs__compile_target_code__ClassSubDir_7,
  MR_String backend_libs__compile_target_code__ClassFileName_8)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = mercury__dir__path_name_is_absolute_1_p_0(backend_libs__compile_target_code__ClassFileName_8);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
      }
    else
      {
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, (MR_String) "-C ");
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__ClassSubDir_7);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, (MR_String) " ");
        }
      }
    {
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__ClassFileName_8);
    }
    {
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

    {
      backend_libs__compile_target_code__write_jar_class_argument_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
  MR_String backend_libs__compile_target_code__JarFileName_14,
  MR_Word backend_libs__compile_target_code__ObjectList_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__Jar_18;
    MR_String backend_libs__compile_target_code__ClassSubDir_19;
    MR_Word backend_libs__compile_target_code__ListClassFiles_20;
    MR_Word backend_libs__compile_target_code__TempFileResult_23;
    MR_Word backend_libs__compile_target_code__Succeeded0_27;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 616, &backend_libs__compile_target_code__Jar_18);
    }
    {
      parse_tree__module_cmds__list_class_files_for_jar_6_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ObjectList_15, &backend_libs__compile_target_code__ClassSubDir_19, &backend_libs__compile_target_code__ListClassFiles_20);
    }
    if ((backend_libs__compile_target_code__ListClassFiles_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.create_java_exe_or_lib\'/9", (MR_String) "empty list of .class files");
          return;
        }
      }
    else
      {
      }
    {
      libs__file_util__open_temp_output_6_p_0((MR_String) ".", (MR_String) "mtmp", (MR_String) "", &backend_libs__compile_target_code__TempFileResult_23);
    }
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__TempFileResult_23)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String backend_libs__compile_target_code__ErrorMessage_30 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TempFileResult_23, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__ErrorMessage_30);
        }
        {
          mercury__io__nl_2_p_0();
        }
        backend_libs__compile_target_code__Succeeded0_27 = (MR_Integer) 0;
      }
    else
      {
        MR_String backend_libs__compile_target_code__TempFileName_24;
        MR_Word backend_libs__compile_target_code__Stream_25;
        MR_String backend_libs__compile_target_code__Cmd_26;
        MR_Tuple backend_libs__compile_target_code__V_44_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TempFileResult_23, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__V_45_45;
        MR_Word backend_libs__compile_target_code__V_48_48;
        MR_Word backend_libs__compile_target_code__V_49_49;
        MR_Word backend_libs__compile_target_code__V_51_51;
        MR_Word backend_libs__compile_target_code__V_52_52;
        MR_Word backend_libs__compile_target_code__V_54_54;
        MR_Box backend_libs__compile_target_code__conv0_STATE_VARIABLE_IO_46_46;
        MR_Word backend_libs__compile_target_code__V_28_28;

        backend_libs__compile_target_code__TempFileName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_44_44, (MR_Integer) 0)));
        backend_libs__compile_target_code__Stream_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_44_44, (MR_Integer) 1)));
        {
          backend_libs__compile_target_code__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_45_45, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[2]));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_45_45, 1) = ((MR_Box) (backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_45_45, 3) = ((MR_Box) (backend_libs__compile_target_code__Stream_25));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_45_45, 4) = ((MR_Box) (backend_libs__compile_target_code__ClassSubDir_19));
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_45_45, backend_libs__compile_target_code__ListClassFiles_20, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv0_STATE_VARIABLE_IO_46_46);
        }
        {
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__Stream_25);
        }
        {
          backend_libs__compile_target_code__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 0) = ((MR_Box) (backend_libs__compile_target_code__TempFileName_24));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) ((MR_String) " \100"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_54_54));
        }
        {
          backend_libs__compile_target_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 0) = ((MR_Box) (backend_libs__compile_target_code__JarFileName_14));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
        }
        {
          backend_libs__compile_target_code__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 0) = ((MR_Box) ((MR_String) " cf "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 1) = ((MR_Box) (backend_libs__compile_target_code__V_51_51));
        }
        {
          backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) (backend_libs__compile_target_code__Jar_18));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
        }
        {
          backend_libs__compile_target_code__Cmd_26 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_48_48);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__Cmd_26, &backend_libs__compile_target_code__Succeeded0_27);
        }
        {
          mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TempFileName_24, &backend_libs__compile_target_code__V_28_28);
        }
        switch (backend_libs__compile_target_code__Succeeded0_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word backend_libs__compile_target_code__V_29_29;

              {
                mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__JarFileName_14, &backend_libs__compile_target_code__V_29_29);
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Succeeded0_27 == (MR_Integer) 1);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 5);
    if (backend_libs__compile_target_code__succeeded)
      {
        parse_tree__module_cmds__create_java_shell_script_5_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_13, backend_libs__compile_target_code__Succeeded_16);
      }
    else
      *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__Succeeded0_27;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

    {
      mercury__io__write_string_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_6,
  MR_String backend_libs__compile_target_code__ExeFileName_7,
  MR_Word backend_libs__compile_target_code__Stream_8)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_56;
    MR_String backend_libs__compile_target_code__CLI_10;
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_11;
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_12;
    MR_Word backend_libs__compile_target_code__V_20_20;
    MR_Word backend_libs__compile_target_code__V_21_21;
    MR_Word backend_libs__compile_target_code__V_24_24;
    MR_Word backend_libs__compile_target_code__V_26_26;
    MR_Word backend_libs__compile_target_code__V_28_28;
    MR_Word backend_libs__compile_target_code__V_29_29;
    MR_Word backend_libs__compile_target_code__V_31_31;
    MR_Word backend_libs__compile_target_code__V_33_33;
    MR_Word backend_libs__compile_target_code__V_35_35;
    MR_Word backend_libs__compile_target_code__V_36_36;
    MR_Word backend_libs__compile_target_code__V_38_38;
    MR_Word backend_libs__compile_target_code__V_40_40;
    MR_Word backend_libs__compile_target_code__V_54_54;
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_14;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 522, &backend_libs__compile_target_code__CLI_10);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 536, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
    backend_libs__compile_target_code__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_54_54 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_56, backend_libs__compile_target_code__TypeCtorInfo_13_56, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[14], backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_54_54, (MR_String) "", (MR_String) "", (MR_String) ":", &backend_libs__compile_target_code__LinkLibraryDirectories_12);
    }
    {
      backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 3) = ((MR_Box) (backend_libs__compile_target_code__Stream_8));
    }
    {
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) (backend_libs__compile_target_code__ExeFileName_7));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[10])));
    }
    {
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) "exec \"\044CLI_INTERPRETER\" \"\044DIR/"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
    }
    {
      backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
    }
    {
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) (backend_libs__compile_target_code__CLI_10));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
    }
    {
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) ((MR_String) "CLI_INTERPRETER=\044{CLI_INTERPRETER:-"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
    }
    {
      backend_libs__compile_target_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 0) = ((MR_Box) ((MR_String) "export MONO_PATH\n"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 1) = ((MR_Box) (backend_libs__compile_target_code__V_33_33));
    }
    {
      backend_libs__compile_target_code__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 1) = ((MR_Box) (backend_libs__compile_target_code__V_31_31));
    }
    {
      backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_12));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
    }
    {
      backend_libs__compile_target_code__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 0) = ((MR_Box) ((MR_String) "MONO_PATH=\044MONO_PATH:"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 1) = ((MR_Box) (backend_libs__compile_target_code__V_28_28));
    }
    {
      backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__V_26_26));
    }
    {
      backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_24_24));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_20_20, backend_libs__compile_target_code__V_21_21, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_14);
    }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
  MR_String backend_libs__compile_target_code__HeadVar__3_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__HeadVar__4_4;

    switch (backend_libs__compile_target_code__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (backend_libs__compile_target_code__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (backend_libs__compile_target_code__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (backend_libs__compile_target_code__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box backend_libs__compile_target_code__conv0_HeadVar__4_4;

              {
                backend_libs__compile_target_code__conv0_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "backend_libs.compile_target_code", (MR_String) "function \140backend_libs.compile_target_code.csharp_file_name\'/3", (MR_String) "microsoft c# compiler in posix env");
              }
              backend_libs__compile_target_code__HeadVar__4_4 = ((MR_String) backend_libs__compile_target_code__conv0_HeadVar__4_4);
            }
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 4:
        switch (backend_libs__compile_target_code__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (backend_libs__compile_target_code__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
            break;
          case (MR_Integer) 2:
            {
              {
                backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
              }
            }
            break;
        }
        break;
    }
    return backend_libs__compile_target_code__HeadVar__4_4;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

    {
      backend_libs__compile_target_code__write_cli_shell_script_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__4_4;

    {
      backend_libs__compile_target_code__conv0_HeadVar__4_4 = backend_libs__compile_target_code__csharp_file_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__4_4));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
  MR_String backend_libs__compile_target_code__OutputFileName0_14,
  MR_Word backend_libs__compile_target_code__SourceList0_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_93_93;
    MR_Word backend_libs__compile_target_code__EnvType_18;
    MR_Word backend_libs__compile_target_code__CSharpCompilerType_19;
    MR_String backend_libs__compile_target_code__OutputFileName_20;
    MR_Word backend_libs__compile_target_code__SourceList_21;
    MR_String backend_libs__compile_target_code__NoLogoOpt_22;
    MR_Word backend_libs__compile_target_code__LineNumbers_23;
    MR_String backend_libs__compile_target_code__NoWarnLineNumberOpt_24;
    MR_Word backend_libs__compile_target_code__HighLevelData_26;
    MR_String backend_libs__compile_target_code__HighLevelDataOpt_27;
    MR_Word backend_libs__compile_target_code__Debug_28;
    MR_String backend_libs__compile_target_code__DebugOpt_29;
    MR_Word backend_libs__compile_target_code__CSCFlagsList_30;
    MR_String backend_libs__compile_target_code__TargetOption_31;
    MR_String backend_libs__compile_target_code__SignAssemblyOpt_32;
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34;
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_35;
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_37;
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_38;
    MR_String backend_libs__compile_target_code__LinkLibraries_41;
    MR_String backend_libs__compile_target_code__MercuryStdLibs_42;
    MR_String backend_libs__compile_target_code__Cmd_43;
    MR_String backend_libs__compile_target_code__CmdArgs_44;
    MR_Word backend_libs__compile_target_code__Succeeded0_45;
    MR_Word backend_libs__compile_target_code__TargetEnvType_46;
    MR_String backend_libs__compile_target_code__CLI_47;
    MR_Word backend_libs__compile_target_code__V_50_50;
    MR_Word backend_libs__compile_target_code__V_73_73;
    MR_Word backend_libs__compile_target_code__V_74_74;
    MR_Word backend_libs__compile_target_code__V_75_75;
    MR_Word backend_libs__compile_target_code__V_76_76;
    MR_Word backend_libs__compile_target_code__V_77_77;
    MR_Word backend_libs__compile_target_code__V_78_78;
    MR_Word backend_libs__compile_target_code__V_79_79;
    MR_String backend_libs__compile_target_code__V_80_80;
    MR_Word backend_libs__compile_target_code__V_82_82;
    MR_Word backend_libs__compile_target_code__V_83_83;
    MR_Word backend_libs__compile_target_code__V_84_84;
    MR_Word backend_libs__compile_target_code__V_85_85;
    MR_Word backend_libs__compile_target_code__V_87_87;

    {
      libs__globals__get_system_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__EnvType_18);
    }
    {
      libs__globals__get_csharp_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__CSharpCompilerType_19);
    }
    {
      backend_libs__compile_target_code__OutputFileName_20 = backend_libs__compile_target_code__csharp_file_name_3_f_0(backend_libs__compile_target_code__EnvType_18, backend_libs__compile_target_code__CSharpCompilerType_19, backend_libs__compile_target_code__OutputFileName0_14);
    }
    backend_libs__compile_target_code__TypeCtorInfo_93_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 3) = ((MR_Box) (backend_libs__compile_target_code__EnvType_18));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 4) = ((MR_Box) (backend_libs__compile_target_code__CSharpCompilerType_19));
    }
    {
      backend_libs__compile_target_code__SourceList_21 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__SourceList0_15);
    }
    switch (backend_libs__compile_target_code__CSharpCompilerType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__NoLogoOpt_22 = (MR_String) "-nologo ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        backend_libs__compile_target_code__NoLogoOpt_22 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 144, &backend_libs__compile_target_code__LineNumbers_23);
    }
    switch (backend_libs__compile_target_code__LineNumbers_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__NoWarnLineNumberOpt_24 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__NoWarnLineNumberOpt_24 = (MR_String) "-nowarn:162,219 ";
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 519, &backend_libs__compile_target_code__Cmd_43);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 259, &backend_libs__compile_target_code__HighLevelData_26);
    }
    switch (backend_libs__compile_target_code__HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__HighLevelDataOpt_27 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__HighLevelDataOpt_27 = (MR_String) "-define:MR_HIGHLEVEL_DATA";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 485, &backend_libs__compile_target_code__Debug_28);
    }
    switch (backend_libs__compile_target_code__Debug_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DebugOpt_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__DebugOpt_29 = (MR_String) "-debug ";
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 520, &backend_libs__compile_target_code__CSCFlagsList_30);
    }
    switch (backend_libs__compile_target_code__LinkTargetType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          backend_libs__compile_target_code__TargetOption_31 = (MR_String) "-target:exe";
          backend_libs__compile_target_code__SignAssemblyOpt_32 = (MR_String) "";
        }
        break;
      case (MR_Integer) 4:
        {
          MR_String backend_libs__compile_target_code__KeyFile_33;

          backend_libs__compile_target_code__TargetOption_31 = (MR_String) "-target:library";
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 565, &backend_libs__compile_target_code__KeyFile_33);
          }
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__KeyFile_33, (MR_String) "") == 0);
          if (backend_libs__compile_target_code__succeeded)
            backend_libs__compile_target_code__SignAssemblyOpt_32 = (MR_String) "";
          else
            {
              MR_String backend_libs__compile_target_code__V_61_61;

              {
                backend_libs__compile_target_code__V_61_61 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__KeyFile_33, (MR_String) " ");
              }
              {
                backend_libs__compile_target_code__SignAssemblyOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", backend_libs__compile_target_code__V_61_61);
              }
            }
        }
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 7:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.create_csharp_exe_or_lib\'/9", (MR_String) "wrong target type");
            return;
          }
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 536, &backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34);
    }
    {
      backend_libs__compile_target_code__LinkLibraryDirectoriesList_35 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibraryDirectoriesList_35, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_37);
    }
    {
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__MaybeLinkLibraries_38);
    }
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__compile_target_code__LinkLibraries_41 = (MR_String) "";
    else
      {
        MR_Word backend_libs__compile_target_code__LinkLibrariesList0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_38, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_40;

        {
          backend_libs__compile_target_code__LinkLibrariesList_40 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__LinkLibrariesList0_39);
        }
        {
          backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_40, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_41);
        }
      }
    {
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__MercuryStdLibs_42);
    }
    {
      backend_libs__compile_target_code__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", backend_libs__compile_target_code__OutputFileName_20);
    }
    {
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_42));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_41));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
    }
    {
      backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_37));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (backend_libs__compile_target_code__V_84_84));
    }
    {
      backend_libs__compile_target_code__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_82_82, 0) = ((MR_Box) (backend_libs__compile_target_code__SignAssemblyOpt_32));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_82_82, 1) = ((MR_Box) (backend_libs__compile_target_code__V_83_83));
    }
    {
      backend_libs__compile_target_code__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 0) = ((MR_Box) (backend_libs__compile_target_code__V_80_80));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 1) = ((MR_Box) (backend_libs__compile_target_code__V_82_82));
    }
    {
      backend_libs__compile_target_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 0) = ((MR_Box) (backend_libs__compile_target_code__TargetOption_31));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 1) = ((MR_Box) (backend_libs__compile_target_code__V_79_79));
    }
    {
      backend_libs__compile_target_code__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpt_29));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 1) = ((MR_Box) (backend_libs__compile_target_code__V_78_78));
    }
    {
      backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelDataOpt_27));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (backend_libs__compile_target_code__V_77_77));
    }
    {
      backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__NoWarnLineNumberOpt_24));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
    }
    {
      backend_libs__compile_target_code__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 0) = ((MR_Box) (backend_libs__compile_target_code__NoLogoOpt_22));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 1) = ((MR_Box) (backend_libs__compile_target_code__V_75_75));
    }
    {
      backend_libs__compile_target_code__V_87_87 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__CSCFlagsList_30, backend_libs__compile_target_code__SourceList_21);
    }
    {
      backend_libs__compile_target_code__V_73_73 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_74_74, backend_libs__compile_target_code__V_87_87);
    }
    {
      backend_libs__compile_target_code__CmdArgs_44 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_73_73);
    }
    {
      backend_libs__compile_target_code__invoke_long_system_command_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__Cmd_43, backend_libs__compile_target_code__CmdArgs_44, &backend_libs__compile_target_code__Succeeded0_45);
    }
    {
      libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__TargetEnvType_46);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 522, &backend_libs__compile_target_code__CLI_47);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Succeeded0_45 == (MR_Integer) 1);
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 3);
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__CLI_47, (MR_String) "") == 0);
            backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
            if (backend_libs__compile_target_code__succeeded)
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__TargetEnvType_46 == (MR_Integer) 0);
          }
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_Word backend_libs__compile_target_code__V_91_91;

        {
          backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_10));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 4) = ((MR_Box) (backend_libs__compile_target_code__OutputFileName_20));
        }
        {
          parse_tree__module_cmds__create_launcher_shell_script_6_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_13, backend_libs__compile_target_code__V_91_91, backend_libs__compile_target_code__Succeeded_16);
        }
      }
    else
      *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__Succeeded0_45;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_String backend_libs__compile_target_code__LibFileName_11,
  MR_Word backend_libs__compile_target_code__Quote_12,
  MR_Word backend_libs__compile_target_code__ObjectList_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__ArCmd_16;
    MR_Word backend_libs__compile_target_code__ArFlagsList_17;
    MR_String backend_libs__compile_target_code__ArFlags_18;
    MR_String backend_libs__compile_target_code__ArOutputFlag_19;
    MR_String backend_libs__compile_target_code__RanLib_20;
    MR_String backend_libs__compile_target_code__Objects_21;
    MR_Word backend_libs__compile_target_code__C_CompilerType_22;
    MR_String backend_libs__compile_target_code__ArOutputSpace_24;
    MR_String backend_libs__compile_target_code__MakeLibCmdArgs_29;
    MR_Word backend_libs__compile_target_code__MakeLibCmdSucceeded_30;
    MR_Word backend_libs__compile_target_code__V_47_47;
    MR_Word backend_libs__compile_target_code__V_48_48;
    MR_Word backend_libs__compile_target_code__V_50_50;
    MR_Word backend_libs__compile_target_code__V_51_51;
    MR_Word backend_libs__compile_target_code__V_52_52;
    MR_Word backend_libs__compile_target_code__V_53_53;
    MR_Word backend_libs__compile_target_code__V_55_55;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 572, &backend_libs__compile_target_code__ArCmd_16);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 574, &backend_libs__compile_target_code__ArFlagsList_17);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__ArFlagsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__ArFlags_18);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 573, &backend_libs__compile_target_code__ArOutputFlag_19);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 575, &backend_libs__compile_target_code__RanLib_20);
    }
    switch (backend_libs__compile_target_code__Quote_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_21);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Word backend_libs__compile_target_code__V_71_71;

          {
            backend_libs__compile_target_code__V_71_71 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_73, backend_libs__compile_target_code__TypeCtorInfo_13_73, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[13], backend_libs__compile_target_code__ObjectList_13);
          }
          {
            backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_71_71, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_21);
          }
        }
        break;
    }
    {
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__C_CompilerType_22);
    }
    switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ArOutputSpace_24 = (MR_String) " ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        backend_libs__compile_target_code__ArOutputSpace_24 = (MR_String) " ";
        break;
      case (MR_Integer) 3:
        backend_libs__compile_target_code__ArOutputSpace_24 = (MR_String) "";
        break;
    }
    {
      backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__Objects_21));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
    }
    {
      backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) (backend_libs__compile_target_code__LibFileName_11));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
    }
    {
      backend_libs__compile_target_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 0) = ((MR_Box) (backend_libs__compile_target_code__ArOutputSpace_24));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
    }
    {
      backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) (backend_libs__compile_target_code__ArOutputFlag_19));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_51_51));
    }
    {
      backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
    }
    {
      backend_libs__compile_target_code__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 0) = ((MR_Box) (backend_libs__compile_target_code__ArFlags_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
    }
    {
      backend_libs__compile_target_code__MakeLibCmdArgs_29 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_47_47);
    }
    {
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__ArCmd_16, (MR_String) "", backend_libs__compile_target_code__MakeLibCmdArgs_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__compile_target_code__MakeLibCmdSucceeded_30);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__RanLib_20, (MR_String) "") == 0);
    if (!(backend_libs__compile_target_code__succeeded))
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MakeLibCmdSucceeded_30 == (MR_Integer) 0);
    if (backend_libs__compile_target_code__succeeded)
      *backend_libs__compile_target_code__Succeeded_14 = backend_libs__compile_target_code__MakeLibCmdSucceeded_30;
    else
      {
        MR_String backend_libs__compile_target_code__RanLibCmd_31;
        MR_Word backend_libs__compile_target_code__V_59_59;
        MR_Word backend_libs__compile_target_code__V_60_60;
        MR_Word backend_libs__compile_target_code__V_62_62;

        {
          backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) (backend_libs__compile_target_code__LibFileName_11));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 1) = ((MR_Box) (backend_libs__compile_target_code__V_62_62));
        }
        {
          backend_libs__compile_target_code__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 0) = ((MR_Box) (backend_libs__compile_target_code__RanLib_20));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 1) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
        }
        {
          backend_libs__compile_target_code__RanLibCmd_31 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_59_59);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__RanLibCmd_31, backend_libs__compile_target_code__Succeeded_14);
        }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__MercuryLibDirs_10,
  MR_String backend_libs__compile_target_code__LibName_11,
  MR_String * backend_libs__compile_target_code__LinkerOpt_12,
  MR_Word backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_33,
  MR_Word * backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_34)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Target_15;
    MR_String backend_libs__compile_target_code__MercuryLinkage_16;
    MR_String backend_libs__compile_target_code__LinkOpt_22;
    MR_String backend_libs__compile_target_code__LibSuffix_23;
    MR_Word backend_libs__compile_target_code__MercuryLibs_25;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_61_61;

    {
      libs__globals__get_target_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__Target_15);
    }
    switch (backend_libs__compile_target_code__Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__compile_target_code__CCompilerType_17;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 554, &backend_libs__compile_target_code__MercuryLinkage_16);
          }
          {
            libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__CCompilerType_17);
          }
          switch (MR_tag((MR_Word) backend_libs__compile_target_code__CCompilerType_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                backend_libs__compile_target_code__LinkOpt_22 = (MR_String) "-l";
                backend_libs__compile_target_code__LibSuffix_23 = (MR_String) "";
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                backend_libs__compile_target_code__LinkOpt_22 = (MR_String) "-l";
                backend_libs__compile_target_code__LibSuffix_23 = (MR_String) "";
              }
              break;
            case (MR_Integer) 3:
              {
                backend_libs__compile_target_code__LinkOpt_22 = (MR_String) "";
                backend_libs__compile_target_code__LibSuffix_23 = (MR_String) ".lib";
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__MercuryLinkage_16 = (MR_String) "shared";
          backend_libs__compile_target_code__LinkOpt_22 = (MR_String) "-r:";
          backend_libs__compile_target_code__LibSuffix_23 = (MR_String) ".dll";
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_java");
            return;
          }
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 545, &backend_libs__compile_target_code__MercuryLibs_25);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_16, (MR_String) "static") == 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          backend_libs__compile_target_code__succeeded = mercury__list__member_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_61_61, ((MR_Box) (backend_libs__compile_target_code__LibName_11)), backend_libs__compile_target_code__MercuryLibs_25);
        }
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_Word backend_libs__compile_target_code__LibModuleName_26;
        MR_String backend_libs__compile_target_code__LibExt_27;
        MR_Word backend_libs__compile_target_code__NoSubDirGlobals_28;
        MR_String backend_libs__compile_target_code__LibFileName_29;
        MR_Word backend_libs__compile_target_code__MaybeDirName_30;

        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__LibName_11, &backend_libs__compile_target_code__LibModuleName_26);
        }
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 568, &backend_libs__compile_target_code__LibExt_27);
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 641, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[2]), backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__NoSubDirGlobals_28);
        }
        {
          parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__NoSubDirGlobals_28, (MR_String) "lib", backend_libs__compile_target_code__LibModuleName_26, backend_libs__compile_target_code__LibExt_27, (MR_Integer) 1, &backend_libs__compile_target_code__LibFileName_29);
        }
        {
          libs__file_util__search_for_file_returning_dir_5_p_0(backend_libs__compile_target_code__MercuryLibDirs_10, backend_libs__compile_target_code__LibFileName_29, &backend_libs__compile_target_code__MaybeDirName_30);
        }
        if (((MR_tag((MR_Word) backend_libs__compile_target_code__MaybeDirName_30)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String backend_libs__compile_target_code__Error_32 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDirName_30, (MR_Integer) 0)));
            MR_Word backend_libs__compile_target_code__V_55_55;
            MR_Word backend_libs__compile_target_code__V_57_57;

            *backend_libs__compile_target_code__LinkerOpt_12 = (MR_String) "";
            {
              backend_libs__compile_target_code__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), backend_libs__compile_target_code__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), backend_libs__compile_target_code__V_57_57, 1) = ((MR_Box) (backend_libs__compile_target_code__Error_32));
            }
            {
              backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__V_57_57));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(backend_libs__compile_target_code__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, backend_libs__compile_target_code__V_55_55);
            }
            *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_34 = (MR_Integer) 0;
          }
        else
          {
            MR_String backend_libs__compile_target_code__DirName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__MaybeDirName_30, (MR_Integer) 0)));

            {
              *backend_libs__compile_target_code__LinkerOpt_12 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__DirName_31, backend_libs__compile_target_code__LibFileName_29);
            }
            *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_34 = backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_33;
          }
      }
    else
      {
        MR_String backend_libs__compile_target_code__V_60_60;

        {
          backend_libs__compile_target_code__V_60_60 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LibName_11, backend_libs__compile_target_code__LibSuffix_23);
        }
        {
          *backend_libs__compile_target_code__LinkerOpt_12 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkOpt_22, backend_libs__compile_target_code__V_60_60);
        }
        *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_34 = backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_33;
      }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
  MR_Word backend_libs__compile_target_code__Globals_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__Flags_4;
    MR_Integer backend_libs__compile_target_code__ReserveStackSize_5;

    {
      libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 566, &backend_libs__compile_target_code__ReserveStackSize_5);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ReserveStackSize_5 == (MR_Integer) -1);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__Flags_4 = (MR_String) "";
    else
      {
        MR_Word backend_libs__compile_target_code__C_CompilerType_6;

        {
          libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__C_CompilerType_6);
        }
        switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String backend_libs__compile_target_code__V_21_21;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_3[3], backend_libs__compile_target_code__ReserveStackSize_5, &backend_libs__compile_target_code__V_21_21);
              }
              {
                backend_libs__compile_target_code__Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", backend_libs__compile_target_code__V_21_21);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String backend_libs__compile_target_code__V_21_21;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_3[3], backend_libs__compile_target_code__ReserveStackSize_5, &backend_libs__compile_target_code__V_21_21);
              }
              {
                backend_libs__compile_target_code__Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", backend_libs__compile_target_code__V_21_21);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String backend_libs__compile_target_code__V_29_29;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_3[3], backend_libs__compile_target_code__ReserveStackSize_5, &backend_libs__compile_target_code__V_29_29);
              }
              {
                backend_libs__compile_target_code__Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-stack:", backend_libs__compile_target_code__V_29_29);
              }
            }
            break;
        }
      }
    return backend_libs__compile_target_code__Flags_4;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
  MR_String * backend_libs__compile_target_code__OutputOpt_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__C_CompilerType_7;

    {
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_7);
    }
    switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -o ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -o ";
        break;
      case (MR_Integer) 3:
        {
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_5 == (MR_Integer) 0);
          if (backend_libs__compile_target_code__succeeded)
            *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -Fe";
          else
            *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -o ";
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
  MR_String backend_libs__compile_target_code__FileNameA_6,
  MR_String backend_libs__compile_target_code__FileNameB_7,
  MR_Word * backend_libs__compile_target_code__SameTimestamp_8)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MaybeCompare_10;
    MR_Word backend_libs__compile_target_code__TimeResultA_21;
    MR_Word backend_libs__compile_target_code__TimeResultB_22;
    MR_Word backend_libs__compile_target_code__TimeA_23;
    MR_Word backend_libs__compile_target_code__TimeB_24;
    MR_Word backend_libs__compile_target_code__V_14_14;

    {
      mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__FileNameA_6, &backend_libs__compile_target_code__TimeResultA_21);
    }
    {
      mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__FileNameB_7, &backend_libs__compile_target_code__TimeResultB_22);
    }
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_21)) == (MR_mktag((MR_Integer) 0)));
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__TimeA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_21, (MR_Integer) 0)));
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_22)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__compile_target_code__succeeded)
          backend_libs__compile_target_code__TimeB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_22, (MR_Integer) 0)));
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_Word backend_libs__compile_target_code__Compare_25;

        {
          mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_25, backend_libs__compile_target_code__TimeA_23, backend_libs__compile_target_code__TimeB_24);
        }
        {
          backend_libs__compile_target_code__MaybeCompare_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_10, 0) = ((MR_Box) (backend_libs__compile_target_code__Compare_25));
        }
      }
    else
      backend_libs__compile_target_code__MaybeCompare_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__MaybeCompare_10)) == (MR_mktag((MR_Integer) 1)));
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_10, (MR_Integer) 0)));
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_14_14 == (MR_Integer) 0);
      }
    if (backend_libs__compile_target_code__succeeded)
      *backend_libs__compile_target_code__SameTimestamp_8 = (MR_Integer) 1;
    else
      *backend_libs__compile_target_code__SameTimestamp_8 = (MR_Integer) 0;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__FrameworkOpts_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_17;
    MR_Word backend_libs__compile_target_code__Frameworks_5;
    MR_Word backend_libs__compile_target_code__V_15_15;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 563, &backend_libs__compile_target_code__Frameworks_5);
    }
    backend_libs__compile_target_code__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_15_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_17, backend_libs__compile_target_code__TypeCtorInfo_13_17, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[12], backend_libs__compile_target_code__Frameworks_5);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_15_15, (MR_String) "-framework ", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__FrameworkOpts_4);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__FrameworkDirs_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_17;
    MR_Word backend_libs__compile_target_code__FrameworkDirs0_5;
    MR_Word backend_libs__compile_target_code__V_15_15;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 564, &backend_libs__compile_target_code__FrameworkDirs0_5);
    }
    backend_libs__compile_target_code__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_15_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_17, backend_libs__compile_target_code__TypeCtorInfo_13_17, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[11], backend_libs__compile_target_code__FrameworkDirs0_5);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_15_15, (MR_String) "-F", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__FrameworkDirs_4);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_3_p_0(
  MR_String backend_libs__compile_target_code__ObjExt_4,
  MR_String backend_libs__compile_target_code__PicObjExt_5,
  MR_String backend_libs__compile_target_code__FileName_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = mercury__string__suffix_2_p_0(backend_libs__compile_target_code__FileName_6, backend_libs__compile_target_code__ObjExt_4);
    }
    if (!(backend_libs__compile_target_code__succeeded))
      {
        backend_libs__compile_target_code__succeeded = mercury__string__suffix_2_p_0(backend_libs__compile_target_code__FileName_6, backend_libs__compile_target_code__PicObjExt_5);
      }
    return backend_libs__compile_target_code__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code__has_object_file_extension_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Files_6,
  MR_Word * backend_libs__compile_target_code__ObjectFiles_7,
  MR_Word * backend_libs__compile_target_code__NonObjectFiles_8)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__ObjExt_9;
    MR_String backend_libs__compile_target_code__PicObjExt_10;
    MR_Word backend_libs__compile_target_code__V_13_13;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_9);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 510, &backend_libs__compile_target_code__PicObjExt_10);
    }
    {
      backend_libs__compile_target_code__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_13_13, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_13_13, 1) = ((MR_Box) (backend_libs__compile_target_code__filter_object_files_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_13_13, 3) = ((MR_Box) (backend_libs__compile_target_code__ObjExt_9));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_13_13, 4) = ((MR_Box) (backend_libs__compile_target_code__PicObjExt_10));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__compile_target_code__V_13_13, backend_libs__compile_target_code__Files_6, backend_libs__compile_target_code__ObjectFiles_7, backend_libs__compile_target_code__NonObjectFiles_8);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
  MR_String * backend_libs__compile_target_code__ResCmdLinkOpts_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__RestrictedCommandLine_7;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_7);
    }
    switch (backend_libs__compile_target_code__RestrictedCommandLine_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        switch (backend_libs__compile_target_code__LinkTargetType_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 7:
          case (MR_Integer) 6:
          case (MR_Integer) 5:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
            break;
          case (MR_Integer) 0:
            {
              MR_Word backend_libs__compile_target_code__C_CompilerType_8;

              {
                libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_8);
              }
              switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[7]), (MR_String) "", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__ResCmdLinkOpts_6);
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
}

static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_Word * backend_libs__compile_target_code__UseThreadLibs_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 221, backend_libs__compile_target_code__UseThreadLibs_4);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__TargetType_5,
  MR_String * backend_libs__compile_target_code__SystemLibs_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TraceLevel_7;
    MR_Word backend_libs__compile_target_code__TraceLevelIsNone_8;
    MR_String backend_libs__compile_target_code__SystemTraceLibs_9;
    MR_Word backend_libs__compile_target_code__UseThreadLibs_13;
    MR_String backend_libs__compile_target_code__ThreadLibs_14;
    MR_String backend_libs__compile_target_code__OtherSystemLibs_15;
    MR_Word backend_libs__compile_target_code__V_28_28;
    MR_Word backend_libs__compile_target_code__V_29_29;
    MR_Word backend_libs__compile_target_code__V_30_30;

    {
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__TraceLevel_7);
    }
    {
      backend_libs__compile_target_code__TraceLevelIsNone_8 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_7);
    }
    switch (backend_libs__compile_target_code__TraceLevelIsNone_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String backend_libs__compile_target_code__SystemTraceLibs0_10;
          MR_Word backend_libs__compile_target_code__UseReadline_11;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 582, &backend_libs__compile_target_code__SystemTraceLibs0_10);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 560, &backend_libs__compile_target_code__UseReadline_11);
          }
          switch (backend_libs__compile_target_code__UseReadline_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__SystemTraceLibs_9 = backend_libs__compile_target_code__SystemTraceLibs0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_String backend_libs__compile_target_code__ReadlineLibs_12;
                MR_String backend_libs__compile_target_code__V_19_19;

                {
                  libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 588, &backend_libs__compile_target_code__ReadlineLibs_12);
                }
                {
                  backend_libs__compile_target_code__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__ReadlineLibs_12);
                }
                {
                  backend_libs__compile_target_code__SystemTraceLibs_9 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__SystemTraceLibs0_10, backend_libs__compile_target_code__V_19_19);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__SystemTraceLibs_9 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 221, &backend_libs__compile_target_code__UseThreadLibs_13);
    }
    switch (backend_libs__compile_target_code__UseThreadLibs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ThreadLibs_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 583, &backend_libs__compile_target_code__ThreadLibs_14);
          }
        }
        break;
    }
    switch (backend_libs__compile_target_code__TargetType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 8:
      case (MR_Integer) 7:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__V_24_24;

          {
            backend_libs__compile_target_code__V_24_24 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_5)));
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_system_libs\'/3", backend_libs__compile_target_code__V_24_24);
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 587, &backend_libs__compile_target_code__OtherSystemLibs_15);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 586, &backend_libs__compile_target_code__OtherSystemLibs_15);
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadLibs_14));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 0) = ((MR_Box) (backend_libs__compile_target_code__OtherSystemLibs_15));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 1) = ((MR_Box) (backend_libs__compile_target_code__V_30_30));
    }
    {
      backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemTraceLibs_9));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
    }
    {
      *backend_libs__compile_target_code__SystemLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_28_28);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
  MR_Word backend_libs__compile_target_code__Globals_6,
  MR_Word backend_libs__compile_target_code__LinkTargetType_7,
  MR_Word backend_libs__compile_target_code__RpathFlagOpt_8,
  MR_Word backend_libs__compile_target_code__RpathSepOpt_9,
  MR_String * backend_libs__compile_target_code__RpathOpts_10)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__UseInstallName_11;
    MR_Word backend_libs__compile_target_code__SharedLibsSupported_12;
    MR_String backend_libs__compile_target_code__Linkage_13;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_11);
    }
    {
      backend_libs__compile_target_code__shared_libraries_supported_2_p_0(backend_libs__compile_target_code__Globals_6, &backend_libs__compile_target_code__SharedLibsSupported_12);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 552, &backend_libs__compile_target_code__Linkage_13);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_11 == (MR_Integer) 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__SharedLibsSupported_12 == (MR_Integer) 1);
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_13, (MR_String) "shared") == 0);
            if (!(backend_libs__compile_target_code__succeeded))
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_7 == (MR_Integer) 2);
          }
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_25_25;
        MR_Word backend_libs__compile_target_code__RpathDirs0_14;
        MR_Word backend_libs__compile_target_code__RpathDirs_15;

        {
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 537, &backend_libs__compile_target_code__RpathDirs0_14);
        }
        backend_libs__compile_target_code__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          backend_libs__compile_target_code__RpathDirs_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_25_25, backend_libs__compile_target_code__TypeCtorInfo_25_25, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[10], backend_libs__compile_target_code__RpathDirs0_14);
        }
        if ((backend_libs__compile_target_code__RpathDirs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__compile_target_code__RpathOpts_10 = (MR_String) "";
        else
          {
            MR_String backend_libs__compile_target_code__RpathSep_18;
            MR_String backend_libs__compile_target_code__RpathFlag_19;
            MR_String backend_libs__compile_target_code__RpathOpts0_20;

            {
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, backend_libs__compile_target_code__RpathSepOpt_9, &backend_libs__compile_target_code__RpathSep_18);
            }
            {
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, backend_libs__compile_target_code__RpathFlagOpt_8, &backend_libs__compile_target_code__RpathFlag_19);
            }
            {
              backend_libs__compile_target_code__RpathOpts0_20 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__RpathSep_18, backend_libs__compile_target_code__RpathDirs_15);
            }
            {
              *backend_libs__compile_target_code__RpathOpts_10 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__RpathFlag_19, backend_libs__compile_target_code__RpathOpts0_20);
            }
          }
      }
    else
      *backend_libs__compile_target_code__RpathOpts_10 = (MR_String) "";
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4,
  MR_Box backend_libs__compile_target_code__wrapper_arg_5,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_6)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv2_LinkerOpt_12;
    MR_Word backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_34;

    {
      backend_libs__compile_target_code__process_link_library_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv2_LinkerOpt_12, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_34);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_LinkerOpt_12));
    *backend_libs__compile_target_code__wrapper_arg_4 = ((MR_Box) (backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_34));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_LambdaHeadVar__2_20;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_20 = backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2320__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_20));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word * backend_libs__compile_target_code__MaybeLinkLibraries_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_28_28;
    MR_Word backend_libs__compile_target_code__MercuryLibDirs0_8;
    MR_String backend_libs__compile_target_code__GradeDir_9;
    MR_Word backend_libs__compile_target_code__MercuryLibDirs_10;
    MR_Word backend_libs__compile_target_code__LinkLibrariesList0_12;
    MR_Word backend_libs__compile_target_code__LinkLibrariesList_13;
    MR_Word backend_libs__compile_target_code__LibrariesSucceeded_14;
    MR_Word backend_libs__compile_target_code__V_18_18;
    MR_Word backend_libs__compile_target_code__V_24_24;
    MR_Box backend_libs__compile_target_code__conv4_LibrariesSucceeded_14;
    MR_Box backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_16;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 541, &backend_libs__compile_target_code__MercuryLibDirs0_8);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__GradeDir_9);
    }
    backend_libs__compile_target_code__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 3) = ((MR_Box) (backend_libs__compile_target_code__GradeDir_9));
    }
    {
      backend_libs__compile_target_code__MercuryLibDirs_10 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__V_18_18, backend_libs__compile_target_code__MercuryLibDirs0_8);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 539, &backend_libs__compile_target_code__LinkLibrariesList0_12);
    }
    {
      backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_5));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 4) = ((MR_Box) (backend_libs__compile_target_code__MercuryLibDirs_10));
    }
    {
      mercury__list__map_foldl2_7_p_2(backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__TypeCtorInfo_28_28, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__LinkLibrariesList0_12, &backend_libs__compile_target_code__LinkLibrariesList_13, ((MR_Box) ((MR_Integer) 1)), &backend_libs__compile_target_code__conv4_LibrariesSucceeded_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_16);
    }
    backend_libs__compile_target_code__LibrariesSucceeded_14 = ((MR_Word) backend_libs__compile_target_code__conv4_LibrariesSucceeded_14);
    switch (backend_libs__compile_target_code__LibrariesSucceeded_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__MaybeLinkLibraries_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__compile_target_code__MaybeLinkLibraries_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibrariesList_13));
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__TargetType_10,
  MR_String backend_libs__compile_target_code__StdLibDir_11,
  MR_String backend_libs__compile_target_code__GradeDir_12,
  MR_String backend_libs__compile_target_code__LibExt_13,
  MR_String backend_libs__compile_target_code__Name_14,
  MR_String * backend_libs__compile_target_code__StaticArg_15,
  MR_String * backend_libs__compile_target_code__SharedArg_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__LibPrefix_17;
    MR_String backend_libs__compile_target_code__StaticLibName_18;
    MR_String backend_libs__compile_target_code__V_22_22;
    MR_String backend_libs__compile_target_code__V_23_23;
    MR_String backend_libs__compile_target_code__V_24_24;
    MR_String backend_libs__compile_target_code__V_25_25;

    switch (backend_libs__compile_target_code__TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        backend_libs__compile_target_code__LibPrefix_17 = (MR_String) "";
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 7:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          MR_String backend_libs__compile_target_code__V_21_21;

          {
            backend_libs__compile_target_code__V_21_21 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_10)));
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_lib_args\'/8", backend_libs__compile_target_code__V_21_21);
            return;
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        backend_libs__compile_target_code__LibPrefix_17 = (MR_String) "lib";
        break;
    }
    {
      backend_libs__compile_target_code__V_22_22 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__LibExt_13);
    }
    {
      backend_libs__compile_target_code__StaticLibName_18 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LibPrefix_17, backend_libs__compile_target_code__V_22_22);
    }
    {
      backend_libs__compile_target_code__V_25_25 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_11, (MR_String) "lib");
    }
    {
      backend_libs__compile_target_code__V_24_24 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_25_25, backend_libs__compile_target_code__GradeDir_12);
    }
    {
      backend_libs__compile_target_code__V_23_23 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__StaticLibName_18);
    }
    {
      *backend_libs__compile_target_code__StaticArg_15 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_23_23);
    }
    switch (backend_libs__compile_target_code__TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          MR_String backend_libs__compile_target_code__V_39_39;
          MR_String backend_libs__compile_target_code__V_40_40;

          {
            backend_libs__compile_target_code__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, (MR_String) ".dll");
          }
          {
            backend_libs__compile_target_code__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", backend_libs__compile_target_code__V_40_40);
          }
          {
            *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_39_39);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__V_38_38;

          {
            backend_libs__compile_target_code__V_38_38 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_10)));
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.make_link_lib\'/4", backend_libs__compile_target_code__V_38_38);
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String backend_libs__compile_target_code__LinkLibOpt_34;
          MR_String backend_libs__compile_target_code__Suffix_35;
          MR_String backend_libs__compile_target_code__V_41_41;
          MR_String backend_libs__compile_target_code__V_42_42;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 594, &backend_libs__compile_target_code__LinkLibOpt_34);
          }
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 595, &backend_libs__compile_target_code__Suffix_35);
          }
          {
            backend_libs__compile_target_code__V_42_42 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__Suffix_35);
          }
          {
            backend_libs__compile_target_code__V_41_41 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkLibOpt_34, backend_libs__compile_target_code__V_42_42);
          }
          {
            *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_41_41);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String backend_libs__compile_target_code__LinkLibOpt_48;
          MR_String backend_libs__compile_target_code__Suffix_49;
          MR_String backend_libs__compile_target_code__V_50_50;
          MR_String backend_libs__compile_target_code__V_51_51;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 596, &backend_libs__compile_target_code__LinkLibOpt_48);
          }
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 597, &backend_libs__compile_target_code__Suffix_49);
          }
          {
            backend_libs__compile_target_code__V_51_51 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__Suffix_49);
          }
          {
            backend_libs__compile_target_code__V_50_50 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkLibOpt_48, backend_libs__compile_target_code__V_51_51);
          }
          {
            *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_50_50);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__TargetType_5,
  MR_String * backend_libs__compile_target_code__StdLibs_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MaybeStdlibDir_7;

    {
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 547, &backend_libs__compile_target_code__MaybeStdlibDir_7);
    }
    if ((backend_libs__compile_target_code__MaybeStdlibDir_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__StdLibs_6 = (MR_String) "";
    else
      {
        MR_String backend_libs__compile_target_code__StdLibDir_8 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdlibDir_7, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__GCMethod_9;
        MR_String backend_libs__compile_target_code__LibExt_10;
        MR_String backend_libs__compile_target_code__MercuryLinkage_11;
        MR_String backend_libs__compile_target_code__GradeDir_12;
        MR_String backend_libs__compile_target_code__StaticGCLibs_13;
        MR_String backend_libs__compile_target_code__SharedGCLibs_14;
        MR_Word backend_libs__compile_target_code__TraceLevel_23;
        MR_Word backend_libs__compile_target_code__TraceLevelIsNone_24;
        MR_String backend_libs__compile_target_code__StaticTraceLibs_25;
        MR_String backend_libs__compile_target_code__SharedTraceLibs_26;
        MR_Word backend_libs__compile_target_code__SourceDebug_35;
        MR_String backend_libs__compile_target_code__StaticSourceDebugLibs_42;
        MR_String backend_libs__compile_target_code__SharedSourceDebugLibs_43;
        MR_String backend_libs__compile_target_code__StaticStdLib_44;
        MR_String backend_libs__compile_target_code__StdLib_45;
        MR_String backend_libs__compile_target_code__StaticRuntimeLib_46;
        MR_String backend_libs__compile_target_code__RuntimeLib_47;

        {
          libs__globals__get_gc_method_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GCMethod_9);
        }
        switch (backend_libs__compile_target_code__TargetType_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              backend_libs__compile_target_code__LibExt_10 = (MR_String) ".dll";
              backend_libs__compile_target_code__MercuryLinkage_11 = (MR_String) "csharp";
            }
            break;
          case (MR_Integer) 8:
          case (MR_Integer) 7:
          case (MR_Integer) 6:
          case (MR_Integer) 5:
            {
              MR_String backend_libs__compile_target_code__V_51_51;

              {
                backend_libs__compile_target_code__V_51_51 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_5)));
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", backend_libs__compile_target_code__V_51_51);
                return;
              }
            }
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 568, &backend_libs__compile_target_code__LibExt_10);
              }
              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 554, &backend_libs__compile_target_code__MercuryLinkage_11);
              }
            }
            break;
        }
        {
          libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GradeDir_12);
        }
        switch (backend_libs__compile_target_code__GCMethod_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
            {
              backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
              backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
            }
            break;
          case (MR_Integer) 0:
            {
              backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
              backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word backend_libs__compile_target_code__LLDebug_16;
              MR_String backend_libs__compile_target_code__GCGrade1_17;
              MR_Word backend_libs__compile_target_code__ProfTime_18;
              MR_Word backend_libs__compile_target_code__ProfDeep_19;
              MR_String backend_libs__compile_target_code__GCGrade2_20;
              MR_Word backend_libs__compile_target_code__Parallel_21;
              MR_String backend_libs__compile_target_code__GCGrade_22;

              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 300, &backend_libs__compile_target_code__LLDebug_16);
              }
              switch (backend_libs__compile_target_code__LLDebug_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  backend_libs__compile_target_code__GCGrade1_17 = (MR_String) "gc";
                  break;
                case (MR_Integer) 1:
                  backend_libs__compile_target_code__GCGrade1_17 = (MR_String) "gc_ll_debug";
                  break;
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 198, &backend_libs__compile_target_code__ProfTime_18);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 200, &backend_libs__compile_target_code__ProfDeep_19);
              }
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfTime_18 == (MR_Integer) 1);
              if (!(backend_libs__compile_target_code__succeeded))
                backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfDeep_19 == (MR_Integer) 1);
              if (backend_libs__compile_target_code__succeeded)
                {
                  {
                    backend_libs__compile_target_code__GCGrade2_20 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__GCGrade1_17, (MR_String) "_prof");
                  }
                }
              else
                backend_libs__compile_target_code__GCGrade2_20 = backend_libs__compile_target_code__GCGrade1_17;
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 221, &backend_libs__compile_target_code__Parallel_21);
              }
              switch (backend_libs__compile_target_code__Parallel_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  backend_libs__compile_target_code__GCGrade_22 = backend_libs__compile_target_code__GCGrade2_20;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      backend_libs__compile_target_code__GCGrade_22 = mercury__string__f_43_43_2_f_0((MR_String) "par_", backend_libs__compile_target_code__GCGrade2_20);
                    }
                  }
                  break;
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, (MR_String) "", backend_libs__compile_target_code__LibExt_10, backend_libs__compile_target_code__GCGrade_22, &backend_libs__compile_target_code__StaticGCLibs_13, &backend_libs__compile_target_code__SharedGCLibs_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word backend_libs__compile_target_code__LLDebug_125;
              MR_String backend_libs__compile_target_code__GCGrade1_126;
              MR_Word backend_libs__compile_target_code__ProfTime_127;
              MR_Word backend_libs__compile_target_code__ProfDeep_128;
              MR_String backend_libs__compile_target_code__GCGrade2_129;
              MR_Word backend_libs__compile_target_code__Parallel_130;
              MR_String backend_libs__compile_target_code__GCGrade_131;

              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 300, &backend_libs__compile_target_code__LLDebug_125);
              }
              switch (backend_libs__compile_target_code__LLDebug_125) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  backend_libs__compile_target_code__GCGrade1_126 = (MR_String) "gc_debug";
                  break;
                case (MR_Integer) 1:
                  backend_libs__compile_target_code__GCGrade1_126 = (MR_String) "gc_debug_ll_debug";
                  break;
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 198, &backend_libs__compile_target_code__ProfTime_127);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 200, &backend_libs__compile_target_code__ProfDeep_128);
              }
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfTime_127 == (MR_Integer) 1);
              if (!(backend_libs__compile_target_code__succeeded))
                backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfDeep_128 == (MR_Integer) 1);
              if (backend_libs__compile_target_code__succeeded)
                {
                  {
                    backend_libs__compile_target_code__GCGrade2_129 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__GCGrade1_126, (MR_String) "_prof");
                  }
                }
              else
                backend_libs__compile_target_code__GCGrade2_129 = backend_libs__compile_target_code__GCGrade1_126;
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 221, &backend_libs__compile_target_code__Parallel_130);
              }
              switch (backend_libs__compile_target_code__Parallel_130) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  backend_libs__compile_target_code__GCGrade_131 = backend_libs__compile_target_code__GCGrade2_129;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      backend_libs__compile_target_code__GCGrade_131 = mercury__string__f_43_43_2_f_0((MR_String) "par_", backend_libs__compile_target_code__GCGrade2_129);
                    }
                  }
                  break;
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, (MR_String) "", backend_libs__compile_target_code__LibExt_10, backend_libs__compile_target_code__GCGrade_131, &backend_libs__compile_target_code__StaticGCLibs_13, &backend_libs__compile_target_code__SharedGCLibs_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
              backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
            }
            break;
          case (MR_Integer) 1:
            {
              backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
              backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
            }
            break;
        }
        {
          libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__TraceLevel_23);
        }
        {
          backend_libs__compile_target_code__TraceLevelIsNone_24 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_23);
        }
        switch (backend_libs__compile_target_code__TraceLevelIsNone_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String backend_libs__compile_target_code__StaticTraceLib_27;
              MR_String backend_libs__compile_target_code__TraceLib_28;
              MR_String backend_libs__compile_target_code__StaticEventSpecLib_29;
              MR_String backend_libs__compile_target_code__EventSpecLib_30;
              MR_String backend_libs__compile_target_code__StaticBrowserLib_31;
              MR_String backend_libs__compile_target_code__BrowserLib_32;
              MR_String backend_libs__compile_target_code__StaticMdbCompLib_33;
              MR_String backend_libs__compile_target_code__MdbCompLib_34;
              MR_Word backend_libs__compile_target_code__V_67_67;
              MR_Word backend_libs__compile_target_code__V_68_68;
              MR_Word backend_libs__compile_target_code__V_69_69;
              MR_Word backend_libs__compile_target_code__V_70_70;
              MR_Word backend_libs__compile_target_code__V_73_73;
              MR_Word backend_libs__compile_target_code__V_74_74;
              MR_Word backend_libs__compile_target_code__V_75_75;
              MR_Word backend_libs__compile_target_code__V_76_76;

              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_trace", &backend_libs__compile_target_code__StaticTraceLib_27, &backend_libs__compile_target_code__TraceLib_28);
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_eventspec", &backend_libs__compile_target_code__StaticEventSpecLib_29, &backend_libs__compile_target_code__EventSpecLib_30);
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_browser", &backend_libs__compile_target_code__StaticBrowserLib_31, &backend_libs__compile_target_code__BrowserLib_32);
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_mdbcomp", &backend_libs__compile_target_code__StaticMdbCompLib_33, &backend_libs__compile_target_code__MdbCompLib_34);
              }
              {
                backend_libs__compile_target_code__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticMdbCompLib_33));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticBrowserLib_31));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 1) = ((MR_Box) (backend_libs__compile_target_code__V_70_70));
              }
              {
                backend_libs__compile_target_code__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticEventSpecLib_29));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 1) = ((MR_Box) (backend_libs__compile_target_code__V_69_69));
              }
              {
                backend_libs__compile_target_code__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticTraceLib_27));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 1) = ((MR_Box) (backend_libs__compile_target_code__V_68_68));
              }
              {
                backend_libs__compile_target_code__StaticTraceLibs_25 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_67_67);
              }
              {
                backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) (backend_libs__compile_target_code__MdbCompLib_34));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__BrowserLib_32));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
              }
              {
                backend_libs__compile_target_code__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 0) = ((MR_Box) (backend_libs__compile_target_code__EventSpecLib_30));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 1) = ((MR_Box) (backend_libs__compile_target_code__V_75_75));
              }
              {
                backend_libs__compile_target_code__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_73_73, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceLib_28));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_73_73, 1) = ((MR_Box) (backend_libs__compile_target_code__V_74_74));
              }
              {
                backend_libs__compile_target_code__SharedTraceLibs_26 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_73_73);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              backend_libs__compile_target_code__StaticTraceLibs_25 = (MR_String) "";
              backend_libs__compile_target_code__SharedTraceLibs_26 = (MR_String) "";
            }
            break;
        }
        {
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 240, &backend_libs__compile_target_code__SourceDebug_35);
        }
        switch (backend_libs__compile_target_code__SourceDebug_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              backend_libs__compile_target_code__StaticSourceDebugLibs_42 = (MR_String) "";
              backend_libs__compile_target_code__SharedSourceDebugLibs_43 = (MR_String) "";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String backend_libs__compile_target_code__StaticSsdbLib_36;
              MR_String backend_libs__compile_target_code__SsdbLib_37;
              MR_String backend_libs__compile_target_code__StaticBrowserLib2_38;
              MR_String backend_libs__compile_target_code__BrowserLib2_39;
              MR_String backend_libs__compile_target_code__StaticMdbCompLib2_40;
              MR_String backend_libs__compile_target_code__MdbCompLib2_41;
              MR_Word backend_libs__compile_target_code__V_83_83;
              MR_Word backend_libs__compile_target_code__V_84_84;
              MR_Word backend_libs__compile_target_code__V_85_85;
              MR_Word backend_libs__compile_target_code__V_88_88;
              MR_Word backend_libs__compile_target_code__V_89_89;
              MR_Word backend_libs__compile_target_code__V_90_90;

              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_ssdb", &backend_libs__compile_target_code__StaticSsdbLib_36, &backend_libs__compile_target_code__SsdbLib_37);
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_browser", &backend_libs__compile_target_code__StaticBrowserLib2_38, &backend_libs__compile_target_code__BrowserLib2_39);
              }
              {
                backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_mdbcomp", &backend_libs__compile_target_code__StaticMdbCompLib2_40, &backend_libs__compile_target_code__MdbCompLib2_41);
              }
              {
                backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticMdbCompLib2_40));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticBrowserLib2_38));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
              }
              {
                backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticSsdbLib_36));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (backend_libs__compile_target_code__V_84_84));
              }
              {
                backend_libs__compile_target_code__StaticSourceDebugLibs_42 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_83_83);
              }
              {
                backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__MdbCompLib2_41));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 0) = ((MR_Box) (backend_libs__compile_target_code__BrowserLib2_39));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 1) = ((MR_Box) (backend_libs__compile_target_code__V_90_90));
              }
              {
                backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) (backend_libs__compile_target_code__SsdbLib_37));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_89_89));
              }
              {
                backend_libs__compile_target_code__SharedSourceDebugLibs_43 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_88_88);
              }
            }
            break;
        }
        {
          backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_std", &backend_libs__compile_target_code__StaticStdLib_44, &backend_libs__compile_target_code__StdLib_45);
        }
        {
          backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_rt", &backend_libs__compile_target_code__StaticRuntimeLib_46, &backend_libs__compile_target_code__RuntimeLib_47);
        }
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "static") == 0);
        if (backend_libs__compile_target_code__succeeded)
          {
            MR_Word backend_libs__compile_target_code__V_95_95;
            MR_Word backend_libs__compile_target_code__V_96_96;
            MR_Word backend_libs__compile_target_code__V_97_97;
            MR_Word backend_libs__compile_target_code__V_98_98;
            MR_Word backend_libs__compile_target_code__V_99_99;

            {
              backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticGCLibs_13));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticRuntimeLib_46));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
            }
            {
              backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticStdLib_44));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
            }
            {
              backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticSourceDebugLibs_42));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
            }
            {
              backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticTraceLibs_25));
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
            }
            {
              *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_95_95);
            }
          }
        else
          {
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "shared") == 0);
            if (backend_libs__compile_target_code__succeeded)
              {
                MR_Word backend_libs__compile_target_code__V_102_102;
                MR_Word backend_libs__compile_target_code__V_103_103;
                MR_Word backend_libs__compile_target_code__V_104_104;
                MR_Word backend_libs__compile_target_code__V_105_105;
                MR_Word backend_libs__compile_target_code__V_106_106;

                {
                  backend_libs__compile_target_code__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedGCLibs_14));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeLib_47));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
                }
                {
                  backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__StdLib_45));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
                }
                {
                  backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedSourceDebugLibs_43));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
                }
                {
                  backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedTraceLibs_26));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
                }
                {
                  *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_102_102);
                }
              }
            else
              {
                backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "csharp") == 0);
                if (backend_libs__compile_target_code__succeeded)
                  {
                    MR_Word backend_libs__compile_target_code__V_109_109;
                    MR_Word backend_libs__compile_target_code__V_110_110;
                    MR_Word backend_libs__compile_target_code__V_111_111;

                    {
                      backend_libs__compile_target_code__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 0) = ((MR_Box) (backend_libs__compile_target_code__StdLib_45));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedSourceDebugLibs_43));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (backend_libs__compile_target_code__V_111_111));
                    }
                    {
                      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedTraceLibs_26));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
                    }
                    {
                      *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_109_109);
                    }
                  }
                else
                  {
                    MR_String backend_libs__compile_target_code__V_115_115;

                    {
                      backend_libs__compile_target_code__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "unknown linkage ", backend_libs__compile_target_code__MercuryLinkage_11);
                    }
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", backend_libs__compile_target_code__V_115_115);
                      return;
                    }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
  MR_Word backend_libs__compile_target_code__ModuleName_13,
  MR_String backend_libs__compile_target_code__OutputFileName_14,
  MR_Word backend_libs__compile_target_code__ObjectsList_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__CommandOpt_18;
    MR_Word backend_libs__compile_target_code__RpathFlagOpt_19;
    MR_Word backend_libs__compile_target_code__RpathSepOpt_20;
    MR_Word backend_libs__compile_target_code__LDFlagsOpt_21;
    MR_Word backend_libs__compile_target_code__ThreadFlagsOpt_22;
    MR_Word backend_libs__compile_target_code__DebugFlagsOpt_23;
    MR_Word backend_libs__compile_target_code__TraceFlagsOpt_24;
    MR_String backend_libs__compile_target_code__UndefOpt_26;
    MR_String backend_libs__compile_target_code__ReserveStackSizeOpt_27;
    MR_Word backend_libs__compile_target_code__Strip_28;
    MR_String backend_libs__compile_target_code__LinkerStripOpt_29;
    MR_String backend_libs__compile_target_code__StripExeCommand_30;
    MR_String backend_libs__compile_target_code__StripExeFlags_33;
    MR_Word backend_libs__compile_target_code__TargetDebug_34;
    MR_String backend_libs__compile_target_code__DebugOpts_35;
    MR_String backend_libs__compile_target_code__SanitizerOpts_36;
    MR_String backend_libs__compile_target_code__Linkage_37;
    MR_String backend_libs__compile_target_code__StaticOpts_38;
    MR_Word backend_libs__compile_target_code__UseThreadLibs_39;
    MR_String backend_libs__compile_target_code__ThreadOpts_40;
    MR_String backend_libs__compile_target_code__HwlocOpts_42;
    MR_String backend_libs__compile_target_code__MercuryStdLibs_43;
    MR_String backend_libs__compile_target_code__SystemLibs_44;
    MR_String backend_libs__compile_target_code__ResCmdLinkOpts_45;
    MR_Word backend_libs__compile_target_code__LDFlagsList_46;
    MR_String backend_libs__compile_target_code__LDFlags_47;
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_48;
    MR_String backend_libs__compile_target_code__LinkerPathFlag_49;
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_50;
    MR_String backend_libs__compile_target_code__RpathOpts_51;
    MR_String backend_libs__compile_target_code__FrameworkDirectories_52;
    MR_Word backend_libs__compile_target_code__UseInstallName_53;
    MR_String backend_libs__compile_target_code__InstallNameOpt_57;
    MR_Word backend_libs__compile_target_code__TraceLevel_58;
    MR_Word backend_libs__compile_target_code__TraceLevelIsNone_59;
    MR_String backend_libs__compile_target_code__TraceOpts_60;
    MR_String backend_libs__compile_target_code__Frameworks_61;
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_62;
    MR_String backend_libs__compile_target_code__LinkOptSep_63;

    switch (backend_libs__compile_target_code__LinkTargetType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__CommandOpt_18 = (MR_Integer) 570;
          backend_libs__compile_target_code__RpathFlagOpt_19 = (MR_Integer) 604;
          backend_libs__compile_target_code__RpathSepOpt_20 = (MR_Integer) 605;
          backend_libs__compile_target_code__LDFlagsOpt_21 = (MR_Integer) 532;
          backend_libs__compile_target_code__ThreadFlagsOpt_22 = (MR_Integer) 590;
          backend_libs__compile_target_code__DebugFlagsOpt_23 = (MR_Integer) 598;
          backend_libs__compile_target_code__TraceFlagsOpt_24 = (MR_Integer) 601;
          backend_libs__compile_target_code__UndefOpt_26 = (MR_String) "";
          {
            backend_libs__compile_target_code__ReserveStackSizeOpt_27 = backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(backend_libs__compile_target_code__Globals_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word backend_libs__compile_target_code__AllowUndef_25;

          backend_libs__compile_target_code__CommandOpt_18 = (MR_Integer) 571;
          backend_libs__compile_target_code__RpathFlagOpt_19 = (MR_Integer) 606;
          backend_libs__compile_target_code__RpathSepOpt_20 = (MR_Integer) 607;
          backend_libs__compile_target_code__LDFlagsOpt_21 = (MR_Integer) 534;
          backend_libs__compile_target_code__ThreadFlagsOpt_22 = (MR_Integer) 591;
          backend_libs__compile_target_code__DebugFlagsOpt_23 = (MR_Integer) 599;
          backend_libs__compile_target_code__TraceFlagsOpt_24 = (MR_Integer) 602;
          {
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 559, &backend_libs__compile_target_code__AllowUndef_25);
          }
          switch (backend_libs__compile_target_code__AllowUndef_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 609, &backend_libs__compile_target_code__UndefOpt_26);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 608, &backend_libs__compile_target_code__UndefOpt_26);
                }
              }
              break;
          }
          backend_libs__compile_target_code__ReserveStackSizeOpt_27 = (MR_String) "";
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 556, &backend_libs__compile_target_code__Strip_28);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Strip_28 == (MR_Integer) 1);
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_String backend_libs__compile_target_code__MercuryLinkage_31;
        MR_Word backend_libs__compile_target_code__StripExeFlagsOpt_32;

        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 593, &backend_libs__compile_target_code__LinkerStripOpt_29);
        }
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 613, &backend_libs__compile_target_code__StripExeCommand_30);
        }
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 554, &backend_libs__compile_target_code__MercuryLinkage_31);
        }
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_31, (MR_String) "shared") == 0);
        if (backend_libs__compile_target_code__succeeded)
          backend_libs__compile_target_code__StripExeFlagsOpt_32 = (MR_Integer) 614;
        else
          backend_libs__compile_target_code__StripExeFlagsOpt_32 = (MR_Integer) 615;
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__StripExeFlagsOpt_32, &backend_libs__compile_target_code__StripExeFlags_33);
        }
      }
    else
      {
        backend_libs__compile_target_code__LinkerStripOpt_29 = (MR_String) "";
        backend_libs__compile_target_code__StripExeCommand_30 = (MR_String) "";
        backend_libs__compile_target_code__StripExeFlags_33 = (MR_String) "";
      }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 485, &backend_libs__compile_target_code__TargetDebug_34);
    }
    switch (backend_libs__compile_target_code__TargetDebug_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DebugOpts_35 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__DebugFlagsOpt_23, &backend_libs__compile_target_code__DebugOpts_35);
        }
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 600, &backend_libs__compile_target_code__SanitizerOpts_36);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 552, &backend_libs__compile_target_code__Linkage_37);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_37, (MR_String) "static") == 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 592, &backend_libs__compile_target_code__StaticOpts_38);
        }
      }
    else
      backend_libs__compile_target_code__StaticOpts_38 = (MR_String) "";
    {
      backend_libs__compile_target_code__use_thread_libs_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__UseThreadLibs_39);
    }
    switch (backend_libs__compile_target_code__UseThreadLibs_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__ThreadOpts_40 = (MR_String) "";
          backend_libs__compile_target_code__HwlocOpts_42 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__HwlocFlagsOpt_41;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ThreadFlagsOpt_22, &backend_libs__compile_target_code__ThreadOpts_40);
          }
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_37, (MR_String) "shared") == 0);
          if (backend_libs__compile_target_code__succeeded)
            backend_libs__compile_target_code__HwlocFlagsOpt_41 = (MR_Integer) 584;
          else
            {
              backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_37, (MR_String) "static") == 0);
              if (backend_libs__compile_target_code__succeeded)
                backend_libs__compile_target_code__HwlocFlagsOpt_41 = (MR_Integer) 585;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_exe_or_shared_lib\'/9", (MR_String) "Invalid linkage");
                    return;
                  }
                }
            }
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__HwlocFlagsOpt_41, &backend_libs__compile_target_code__HwlocOpts_42);
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__MercuryStdLibs_43);
    }
    {
      backend_libs__compile_target_code__get_system_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__SystemLibs_44);
    }
    {
      backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__ResCmdLinkOpts_45);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LDFlagsOpt_21, &backend_libs__compile_target_code__LDFlagsList_46);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__LDFlagsList_46, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LDFlags_47);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 536, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_48);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 603, &backend_libs__compile_target_code__LinkerPathFlag_49);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibraryDirectoriesList_48, backend_libs__compile_target_code__LinkerPathFlag_49, (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_50);
    }
    {
      backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, backend_libs__compile_target_code__RpathFlagOpt_19, backend_libs__compile_target_code__RpathSepOpt_20, &backend_libs__compile_target_code__RpathOpts_51);
    }
    {
      backend_libs__compile_target_code__get_framework_directories_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__FrameworkDirectories_52);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_53);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_53 == (MR_Integer) 1);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 2);
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_String backend_libs__compile_target_code__BaseFileName_54;
        MR_String backend_libs__compile_target_code__SharedLibExt_55;
        MR_String backend_libs__compile_target_code__ShLibFileName_56;
        MR_String backend_libs__compile_target_code__V_114_114;

        {
          backend_libs__compile_target_code__BaseFileName_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(backend_libs__compile_target_code__ModuleName_13);
        }
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 567, &backend_libs__compile_target_code__SharedLibExt_55);
        }
        {
          backend_libs__compile_target_code__V_114_114 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__BaseFileName_54, backend_libs__compile_target_code__SharedLibExt_55);
        }
        {
          backend_libs__compile_target_code__ShLibFileName_56 = mercury__string__f_43_43_2_f_0((MR_String) "lib", backend_libs__compile_target_code__V_114_114);
        }
        {
          libs__file_util__get_install_name_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ShLibFileName_56, &backend_libs__compile_target_code__InstallNameOpt_57);
        }
      }
    else
      backend_libs__compile_target_code__InstallNameOpt_57 = (MR_String) "";
    {
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__TraceLevel_58);
    }
    {
      backend_libs__compile_target_code__TraceLevelIsNone_59 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_58);
    }
    switch (backend_libs__compile_target_code__TraceLevelIsNone_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__TraceFlagsOpt_24, &backend_libs__compile_target_code__TraceOpts_60);
        }
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__TraceOpts_60 = (MR_String) "";
        break;
    }
    {
      backend_libs__compile_target_code__get_frameworks_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__Frameworks_61);
    }
    {
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__MaybeLinkLibraries_62);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 589, &backend_libs__compile_target_code__LinkOptSep_63);
    }
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_62, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__LinkLibraries_65;
        MR_Word backend_libs__compile_target_code__RestrictedCommandLine_66;
        MR_Word backend_libs__compile_target_code__ArchiveSucceeded_74;
        MR_Word backend_libs__compile_target_code__MaybeDeleteTmpArchive_75;
        MR_String backend_libs__compile_target_code__Objects_76;

        {
          backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_64, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_65);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_66);
        }
        switch (backend_libs__compile_target_code__RestrictedCommandLine_66) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              backend_libs__compile_target_code__ArchiveSucceeded_74 = (MR_Integer) 1;
              backend_libs__compile_target_code__MaybeDeleteTmpArchive_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__ObjectsList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_76);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String backend_libs__compile_target_code__LibExt_67;
              MR_String backend_libs__compile_target_code__TempDir_68;
              MR_Word backend_libs__compile_target_code__TmpArchiveResult_69;

              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 568, &backend_libs__compile_target_code__LibExt_67);
              }
              {
                mercury__io__get_temp_directory_3_p_0(&backend_libs__compile_target_code__TempDir_68);
              }
              {
                mercury__io__make_temp_file_6_p_0(backend_libs__compile_target_code__TempDir_68, (MR_String) "mtmp", backend_libs__compile_target_code__LibExt_67, &backend_libs__compile_target_code__TmpArchiveResult_69);
              }
              if (((MR_tag((MR_Word) backend_libs__compile_target_code__TmpArchiveResult_69)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word backend_libs__compile_target_code__Error_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TmpArchiveResult_69, (MR_Integer) 0)));
                  MR_Word backend_libs__compile_target_code__V_128_128;
                  MR_String backend_libs__compile_target_code__V_133_133;

                  {
                    backend_libs__compile_target_code__V_128_128 = mercury__io__stderr_stream_0_f_0();
                  }
                  {
                    backend_libs__compile_target_code__V_133_133 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_77);
                  }
                  {
                    mercury__io__write_string_4_p_0(backend_libs__compile_target_code__V_128_128, (MR_String) "Could not create temporary file: ");
                  }
                  {
                    mercury__io__write_string_4_p_0(backend_libs__compile_target_code__V_128_128, backend_libs__compile_target_code__V_133_133);
                  }
                  {
                    mercury__io__write_string_4_p_0(backend_libs__compile_target_code__V_128_128, (MR_String) "\n");
                  }
                  backend_libs__compile_target_code__ArchiveSucceeded_74 = (MR_Integer) 0;
                  backend_libs__compile_target_code__MaybeDeleteTmpArchive_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__ObjectsList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_76);
                  }
                }
              else
                {
                  MR_String backend_libs__compile_target_code__TmpArchive_70 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TmpArchiveResult_69, (MR_Integer) 0)));
                  MR_Word backend_libs__compile_target_code__ProperObjectFiles_71;
                  MR_Word backend_libs__compile_target_code__NonObjectFiles_72;
                  MR_Word backend_libs__compile_target_code__V_141_141;
                  MR_Word backend_libs__compile_target_code__V_73_73;

                  {
                    backend_libs__compile_target_code__filter_object_files_4_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ObjectsList_15, &backend_libs__compile_target_code__ProperObjectFiles_71, &backend_libs__compile_target_code__NonObjectFiles_72);
                  }
                  {
                    mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TmpArchive_70, &backend_libs__compile_target_code__V_73_73);
                  }
                  {
                    backend_libs__compile_target_code__create_archive_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__TmpArchive_70, (MR_Integer) 1, backend_libs__compile_target_code__ProperObjectFiles_71, &backend_libs__compile_target_code__ArchiveSucceeded_74);
                  }
                  {
                    backend_libs__compile_target_code__MaybeDeleteTmpArchive_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDeleteTmpArchive_75, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpArchive_70));
                  }
                  {
                    backend_libs__compile_target_code__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpArchive_70));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 1) = ((MR_Box) (backend_libs__compile_target_code__NonObjectFiles_72));
                  }
                  {
                    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__V_141_141, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_76);
                  }
                }
            }
            break;
        }
        switch (backend_libs__compile_target_code__ArchiveSucceeded_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_String backend_libs__compile_target_code__Command_78;
              MR_String backend_libs__compile_target_code__OutputOpt_79;
              MR_String backend_libs__compile_target_code__LinkCmd_80;
              MR_Word backend_libs__compile_target_code__Demangle_81;
              MR_Word backend_libs__compile_target_code__MaybeDemangleCmd_83;
              MR_Word backend_libs__compile_target_code__LinkSucceeded_84;
              MR_Word backend_libs__compile_target_code__V_145_145;
              MR_Word backend_libs__compile_target_code__V_146_146;
              MR_Word backend_libs__compile_target_code__V_148_148;
              MR_Word backend_libs__compile_target_code__V_149_149;
              MR_Word backend_libs__compile_target_code__V_151_151;
              MR_Word backend_libs__compile_target_code__V_152_152;
              MR_Word backend_libs__compile_target_code__V_154_154;
              MR_Word backend_libs__compile_target_code__V_155_155;
              MR_Word backend_libs__compile_target_code__V_157_157;
              MR_Word backend_libs__compile_target_code__V_158_158;
              MR_Word backend_libs__compile_target_code__V_160_160;
              MR_Word backend_libs__compile_target_code__V_161_161;
              MR_Word backend_libs__compile_target_code__V_163_163;
              MR_Word backend_libs__compile_target_code__V_164_164;
              MR_Word backend_libs__compile_target_code__V_166_166;
              MR_Word backend_libs__compile_target_code__V_167_167;
              MR_String backend_libs__compile_target_code__V_168_168;
              MR_Word backend_libs__compile_target_code__V_169_169;
              MR_Word backend_libs__compile_target_code__V_171_171;
              MR_Word backend_libs__compile_target_code__V_172_172;
              MR_Word backend_libs__compile_target_code__V_174_174;
              MR_Word backend_libs__compile_target_code__V_175_175;
              MR_Word backend_libs__compile_target_code__V_177_177;
              MR_Word backend_libs__compile_target_code__V_178_178;
              MR_Word backend_libs__compile_target_code__V_180_180;
              MR_Word backend_libs__compile_target_code__V_181_181;
              MR_Word backend_libs__compile_target_code__V_183_183;
              MR_Word backend_libs__compile_target_code__V_184_184;
              MR_Word backend_libs__compile_target_code__V_186_186;
              MR_Word backend_libs__compile_target_code__V_187_187;
              MR_Word backend_libs__compile_target_code__V_189_189;
              MR_Word backend_libs__compile_target_code__V_190_190;
              MR_Word backend_libs__compile_target_code__V_192_192;
              MR_Word backend_libs__compile_target_code__V_193_193;
              MR_Word backend_libs__compile_target_code__V_195_195;
              MR_Word backend_libs__compile_target_code__V_196_196;
              MR_Word backend_libs__compile_target_code__V_198_198;
              MR_Word backend_libs__compile_target_code__V_199_199;
              MR_Word backend_libs__compile_target_code__V_201_201;
              MR_Word backend_libs__compile_target_code__V_202_202;
              MR_Word backend_libs__compile_target_code__V_204_204;
              MR_Word backend_libs__compile_target_code__V_205_205;
              MR_Word backend_libs__compile_target_code__V_207_207;
              MR_Word backend_libs__compile_target_code__V_208_208;
              MR_Word backend_libs__compile_target_code__V_210_210;
              MR_Word backend_libs__compile_target_code__V_211_211;
              MR_Word backend_libs__compile_target_code__V_213_213;

              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__CommandOpt_18, &backend_libs__compile_target_code__Command_78);
              }
              {
                backend_libs__compile_target_code__get_linker_output_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__OutputOpt_79);
              }
              {
                backend_libs__compile_target_code__V_168_168 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__OutputFileName_14);
              }
              {
                backend_libs__compile_target_code__V_213_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_213_213, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemLibs_44));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_213_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                backend_libs__compile_target_code__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_211_211, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_211_211, 1) = ((MR_Box) (backend_libs__compile_target_code__V_213_213));
              }
              {
                backend_libs__compile_target_code__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_210_210, 0) = ((MR_Box) (backend_libs__compile_target_code__HwlocOpts_42));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_210_210, 1) = ((MR_Box) (backend_libs__compile_target_code__V_211_211));
              }
              {
                backend_libs__compile_target_code__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_208_208, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_208_208, 1) = ((MR_Box) (backend_libs__compile_target_code__V_210_210));
              }
              {
                backend_libs__compile_target_code__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_207_207, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_43));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_207_207, 1) = ((MR_Box) (backend_libs__compile_target_code__V_208_208));
              }
              {
                backend_libs__compile_target_code__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_205_205, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_205_205, 1) = ((MR_Box) (backend_libs__compile_target_code__V_207_207));
              }
              {
                backend_libs__compile_target_code__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_204_204, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_65));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_204_204, 1) = ((MR_Box) (backend_libs__compile_target_code__V_205_205));
              }
              {
                backend_libs__compile_target_code__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_202_202, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_202_202, 1) = ((MR_Box) (backend_libs__compile_target_code__V_204_204));
              }
              {
                backend_libs__compile_target_code__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_201_201, 0) = ((MR_Box) (backend_libs__compile_target_code__LDFlags_47));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_201_201, 1) = ((MR_Box) (backend_libs__compile_target_code__V_202_202));
              }
              {
                backend_libs__compile_target_code__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_199_199, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_199_199, 1) = ((MR_Box) (backend_libs__compile_target_code__V_201_201));
              }
              {
                backend_libs__compile_target_code__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_198_198, 0) = ((MR_Box) (backend_libs__compile_target_code__ResCmdLinkOpts_45));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_198_198, 1) = ((MR_Box) (backend_libs__compile_target_code__V_199_199));
              }
              {
                backend_libs__compile_target_code__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_196_196, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_196_196, 1) = ((MR_Box) (backend_libs__compile_target_code__V_198_198));
              }
              {
                backend_libs__compile_target_code__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_195_195, 0) = ((MR_Box) (backend_libs__compile_target_code__Frameworks_61));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_195_195, 1) = ((MR_Box) (backend_libs__compile_target_code__V_196_196));
              }
              {
                backend_libs__compile_target_code__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_193_193, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_193_193, 1) = ((MR_Box) (backend_libs__compile_target_code__V_195_195));
              }
              {
                backend_libs__compile_target_code__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_192_192, 0) = ((MR_Box) (backend_libs__compile_target_code__SanitizerOpts_36));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_192_192, 1) = ((MR_Box) (backend_libs__compile_target_code__V_193_193));
              }
              {
                backend_libs__compile_target_code__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_190_190, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_190_190, 1) = ((MR_Box) (backend_libs__compile_target_code__V_192_192));
              }
              {
                backend_libs__compile_target_code__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_189_189, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpts_35));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_189_189, 1) = ((MR_Box) (backend_libs__compile_target_code__V_190_190));
              }
              {
                backend_libs__compile_target_code__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_187_187, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_187_187, 1) = ((MR_Box) (backend_libs__compile_target_code__V_189_189));
              }
              {
                backend_libs__compile_target_code__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_186_186, 0) = ((MR_Box) (backend_libs__compile_target_code__InstallNameOpt_57));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_186_186, 1) = ((MR_Box) (backend_libs__compile_target_code__V_187_187));
              }
              {
                backend_libs__compile_target_code__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_184_184, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_184_184, 1) = ((MR_Box) (backend_libs__compile_target_code__V_186_186));
              }
              {
                backend_libs__compile_target_code__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_183_183, 0) = ((MR_Box) (backend_libs__compile_target_code__FrameworkDirectories_52));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_183_183, 1) = ((MR_Box) (backend_libs__compile_target_code__V_184_184));
              }
              {
                backend_libs__compile_target_code__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_181_181, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_181_181, 1) = ((MR_Box) (backend_libs__compile_target_code__V_183_183));
              }
              {
                backend_libs__compile_target_code__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_180_180, 0) = ((MR_Box) (backend_libs__compile_target_code__RpathOpts_51));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_180_180, 1) = ((MR_Box) (backend_libs__compile_target_code__V_181_181));
              }
              {
                backend_libs__compile_target_code__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_178_178, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_178_178, 1) = ((MR_Box) (backend_libs__compile_target_code__V_180_180));
              }
              {
                backend_libs__compile_target_code__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_177_177, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_50));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_177_177, 1) = ((MR_Box) (backend_libs__compile_target_code__V_178_178));
              }
              {
                backend_libs__compile_target_code__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_175_175, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_175_175, 1) = ((MR_Box) (backend_libs__compile_target_code__V_177_177));
              }
              {
                backend_libs__compile_target_code__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_174_174, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkOptSep_63));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_174_174, 1) = ((MR_Box) (backend_libs__compile_target_code__V_175_175));
              }
              {
                backend_libs__compile_target_code__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_172_172, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_172_172, 1) = ((MR_Box) (backend_libs__compile_target_code__V_174_174));
              }
              {
                backend_libs__compile_target_code__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_171_171, 0) = ((MR_Box) (backend_libs__compile_target_code__Objects_76));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_171_171, 1) = ((MR_Box) (backend_libs__compile_target_code__V_172_172));
              }
              {
                backend_libs__compile_target_code__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_169_169, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_169_169, 1) = ((MR_Box) (backend_libs__compile_target_code__V_171_171));
              }
              {
                backend_libs__compile_target_code__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_167_167, 0) = ((MR_Box) (backend_libs__compile_target_code__V_168_168));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_167_167, 1) = ((MR_Box) (backend_libs__compile_target_code__V_169_169));
              }
              {
                backend_libs__compile_target_code__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_166_166, 0) = ((MR_Box) (backend_libs__compile_target_code__OutputOpt_79));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_166_166, 1) = ((MR_Box) (backend_libs__compile_target_code__V_167_167));
              }
              {
                backend_libs__compile_target_code__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_164_164, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_164_164, 1) = ((MR_Box) (backend_libs__compile_target_code__V_166_166));
              }
              {
                backend_libs__compile_target_code__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_163_163, 0) = ((MR_Box) (backend_libs__compile_target_code__ReserveStackSizeOpt_27));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_163_163, 1) = ((MR_Box) (backend_libs__compile_target_code__V_164_164));
              }
              {
                backend_libs__compile_target_code__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_161_161, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_161_161, 1) = ((MR_Box) (backend_libs__compile_target_code__V_163_163));
              }
              {
                backend_libs__compile_target_code__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_160_160, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpts_60));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_160_160, 1) = ((MR_Box) (backend_libs__compile_target_code__V_161_161));
              }
              {
                backend_libs__compile_target_code__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_158_158, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_158_158, 1) = ((MR_Box) (backend_libs__compile_target_code__V_160_160));
              }
              {
                backend_libs__compile_target_code__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_157_157, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadOpts_40));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_157_157, 1) = ((MR_Box) (backend_libs__compile_target_code__V_158_158));
              }
              {
                backend_libs__compile_target_code__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_155_155, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_155_155, 1) = ((MR_Box) (backend_libs__compile_target_code__V_157_157));
              }
              {
                backend_libs__compile_target_code__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_154_154, 0) = ((MR_Box) (backend_libs__compile_target_code__UndefOpt_26));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_154_154, 1) = ((MR_Box) (backend_libs__compile_target_code__V_155_155));
              }
              {
                backend_libs__compile_target_code__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_152_152, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_152_152, 1) = ((MR_Box) (backend_libs__compile_target_code__V_154_154));
              }
              {
                backend_libs__compile_target_code__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkerStripOpt_29));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 1) = ((MR_Box) (backend_libs__compile_target_code__V_152_152));
              }
              {
                backend_libs__compile_target_code__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_149_149, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_149_149, 1) = ((MR_Box) (backend_libs__compile_target_code__V_151_151));
              }
              {
                backend_libs__compile_target_code__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticOpts_38));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 1) = ((MR_Box) (backend_libs__compile_target_code__V_149_149));
              }
              {
                backend_libs__compile_target_code__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_146_146, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_146_146, 1) = ((MR_Box) (backend_libs__compile_target_code__V_148_148));
              }
              {
                backend_libs__compile_target_code__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 0) = ((MR_Box) (backend_libs__compile_target_code__Command_78));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 1) = ((MR_Box) (backend_libs__compile_target_code__V_146_146));
              }
              {
                mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_145_145, &backend_libs__compile_target_code__LinkCmd_80);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 557, &backend_libs__compile_target_code__Demangle_81);
              }
              switch (backend_libs__compile_target_code__Demangle_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  backend_libs__compile_target_code__MaybeDemangleCmd_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String backend_libs__compile_target_code__DemangleCmd_82;

                    {
                      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 579, &backend_libs__compile_target_code__DemangleCmd_82);
                    }
                    {
                      backend_libs__compile_target_code__MaybeDemangleCmd_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDemangleCmd_83, 0) = ((MR_Box) (backend_libs__compile_target_code__DemangleCmd_82));
                    }
                  }
                  break;
              }
              {
                parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__LinkCmd_80, backend_libs__compile_target_code__MaybeDemangleCmd_83, &backend_libs__compile_target_code__LinkSucceeded_84);
              }
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkSucceeded_84 == (MR_Integer) 1);
              if (backend_libs__compile_target_code__succeeded)
                {
                  backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LinkerStripOpt_29, (MR_String) "") == 0);
                  if (backend_libs__compile_target_code__succeeded)
                    {
                      backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__StripExeCommand_30, (MR_String) "") == 0);
                      backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
                    }
                }
              if (backend_libs__compile_target_code__succeeded)
                {
                  MR_String backend_libs__compile_target_code__StripCmd_85;
                  MR_Word backend_libs__compile_target_code__V_219_219;
                  MR_Word backend_libs__compile_target_code__V_220_220;
                  MR_Word backend_libs__compile_target_code__V_222_222;
                  MR_Word backend_libs__compile_target_code__V_223_223;
                  MR_Word backend_libs__compile_target_code__V_225_225;
                  MR_String backend_libs__compile_target_code__V_226_226;

                  {
                    backend_libs__compile_target_code__V_226_226 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__OutputFileName_14);
                  }
                  {
                    backend_libs__compile_target_code__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_225_225, 0) = ((MR_Box) (backend_libs__compile_target_code__V_226_226));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    backend_libs__compile_target_code__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_223_223, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_223_223, 1) = ((MR_Box) (backend_libs__compile_target_code__V_225_225));
                  }
                  {
                    backend_libs__compile_target_code__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_222_222, 0) = ((MR_Box) (backend_libs__compile_target_code__StripExeFlags_33));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_222_222, 1) = ((MR_Box) (backend_libs__compile_target_code__V_223_223));
                  }
                  {
                    backend_libs__compile_target_code__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_220_220, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_220_220, 1) = ((MR_Box) (backend_libs__compile_target_code__V_222_222));
                  }
                  {
                    backend_libs__compile_target_code__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_219_219, 0) = ((MR_Box) (backend_libs__compile_target_code__StripExeCommand_30));
                    MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_219_219, 1) = ((MR_Box) (backend_libs__compile_target_code__V_220_220));
                  }
                  {
                    mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_219_219, &backend_libs__compile_target_code__StripCmd_85);
                  }
                  {
                    parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__StripCmd_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__Succeeded_16);
                  }
                }
              else
                *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__LinkSucceeded_84;
            }
            break;
        }
        if ((backend_libs__compile_target_code__MaybeDeleteTmpArchive_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String backend_libs__compile_target_code__FileToDelete_86 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDeleteTmpArchive_75, (MR_Integer) 0)));
            MR_Word backend_libs__compile_target_code__V_87_87;

            {
              mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__FileToDelete_86, &backend_libs__compile_target_code__V_87_87);
            }
          }
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_output_filename_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__LinkTargetType_9,
  MR_Word backend_libs__compile_target_code__ModuleName_10,
  MR_String * backend_libs__compile_target_code__Ext_11,
  MR_String * backend_libs__compile_target_code__OutputFileName_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    switch (backend_libs__compile_target_code__LinkTargetType_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          *backend_libs__compile_target_code__Ext_11 = (MR_String) ".exe";
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          *backend_libs__compile_target_code__Ext_11 = (MR_String) ".dll";
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 8:
        {
          *backend_libs__compile_target_code__Ext_11 = (MR_String) ".beams";
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_8, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word backend_libs__compile_target_code__TargetEnvType_42;

          {
            libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_8, &backend_libs__compile_target_code__TargetEnvType_42);
          }
          *backend_libs__compile_target_code__Ext_11 = ((&backend_libs__compile_target_code_vector_common_8[10 + backend_libs__compile_target_code__TargetEnvType_42]))->backend_libs__compile_target_code__vector_common_type_8_0__vct_8_f_0;
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 569, backend_libs__compile_target_code__Ext_11);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 6:
        {
          *backend_libs__compile_target_code__Ext_11 = (MR_String) ".jar";
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          *backend_libs__compile_target_code__Ext_11 = (MR_String) ".jar";
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 567, backend_libs__compile_target_code__Ext_11);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_8, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 568, backend_libs__compile_target_code__Ext_11);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_8, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_10, *backend_libs__compile_target_code__Ext_11, (MR_Integer) 0, backend_libs__compile_target_code__OutputFileName_12);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_FileName_12;

    {
      backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_FileName_12);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_FileName_12));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word backend_libs__compile_target_code__Globals_14,
  MR_Word backend_libs__compile_target_code__ErrorStream_15,
  MR_String backend_libs__compile_target_code__MkInit_16,
  MR_Word backend_libs__compile_target_code__ModuleName_17,
  MR_Word backend_libs__compile_target_code__ModuleNames_18,
  MR_String backend_libs__compile_target_code__TargetExt_19,
  MR_Word backend_libs__compile_target_code__StdInitFileNames_20,
  MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_21,
  MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_22,
  MR_String backend_libs__compile_target_code__ModuleNameOption_23,
  MR_Word * backend_libs__compile_target_code__MaybeInitTargetFile_24)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_122_122;
    MR_Word backend_libs__compile_target_code__Verbose_26;
    MR_Word backend_libs__compile_target_code__Stats_27;
    MR_String backend_libs__compile_target_code__Grade_28;
    MR_String backend_libs__compile_target_code__InitTargetFileName_29;
    MR_Word backend_libs__compile_target_code__TargetFileNameList_30;
    MR_Word backend_libs__compile_target_code__InitFileDirsList_31;
    MR_String backend_libs__compile_target_code__InitFileDirs_32;
    MR_Word backend_libs__compile_target_code__InitFileNamesList0_33;
    MR_Word backend_libs__compile_target_code__InitFileNamesList1_34;
    MR_Word backend_libs__compile_target_code__TraceInitFileNamesList0_35;
    MR_Word backend_libs__compile_target_code__InitFileNamesList2_36;
    MR_Word backend_libs__compile_target_code__TraceInitFileNamesList_37;
    MR_Word backend_libs__compile_target_code__TraceLevel_38;
    MR_Word backend_libs__compile_target_code__TraceLevelIsNone_39;
    MR_String backend_libs__compile_target_code__TraceOpt_40;
    MR_Word backend_libs__compile_target_code__InitFileNamesList3_41;
    MR_Word backend_libs__compile_target_code__SourceDebug_42;
    MR_Word backend_libs__compile_target_code__InitFileNamesList_43;
    MR_Word backend_libs__compile_target_code__RuntimeFlagsList_44;
    MR_String backend_libs__compile_target_code__RuntimeFlags_45;
    MR_Word backend_libs__compile_target_code__ExtraInits_46;
    MR_String backend_libs__compile_target_code__ExtraInitsOpt_47;
    MR_Word backend_libs__compile_target_code__Main_48;
    MR_String backend_libs__compile_target_code__NoMainOpt_49;
    MR_String backend_libs__compile_target_code__ExperimentalComplexity_50;
    MR_String backend_libs__compile_target_code__ExperimentalComplexityOpt_51;
    MR_String backend_libs__compile_target_code__TmpInitTargetFileName_52;
    MR_String backend_libs__compile_target_code__MkInitArgs_53;
    MR_Word backend_libs__compile_target_code__MkInitOk_54;
    MR_String backend_libs__compile_target_code__V_62_62;
    MR_Word backend_libs__compile_target_code__V_66_66;
    MR_Word backend_libs__compile_target_code__V_85_85;
    MR_Word backend_libs__compile_target_code__V_87_87;
    MR_Word backend_libs__compile_target_code__V_88_88;
    MR_Word backend_libs__compile_target_code__V_90_90;
    MR_Word backend_libs__compile_target_code__V_91_91;
    MR_Word backend_libs__compile_target_code__V_93_93;
    MR_Word backend_libs__compile_target_code__V_94_94;
    MR_Word backend_libs__compile_target_code__V_96_96;
    MR_Word backend_libs__compile_target_code__V_97_97;
    MR_Word backend_libs__compile_target_code__V_99_99;
    MR_Word backend_libs__compile_target_code__V_100_100;
    MR_Word backend_libs__compile_target_code__V_102_102;
    MR_Word backend_libs__compile_target_code__V_103_103;
    MR_Word backend_libs__compile_target_code__V_105_105;
    MR_String backend_libs__compile_target_code__V_106_106;
    MR_Word backend_libs__compile_target_code__V_107_107;
    MR_Word backend_libs__compile_target_code__V_109_109;
    MR_Word backend_libs__compile_target_code__V_110_110;
    MR_Word backend_libs__compile_target_code__V_113_113;
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_67_67;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 62, &backend_libs__compile_target_code__Stats_27);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_26, (MR_String) "% Creating initialization file...\n");
    }
    {
      libs__compute_grade__compute_grade_2_p_0(backend_libs__compile_target_code__Globals_14, &backend_libs__compile_target_code__Grade_28);
    }
    {
      backend_libs__compile_target_code__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "_init", backend_libs__compile_target_code__TargetExt_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__ModuleName_17, backend_libs__compile_target_code__V_62_62, (MR_Integer) 0, &backend_libs__compile_target_code__InitTargetFileName_29);
    }
    {
      backend_libs__compile_target_code__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 1) = ((MR_Box) (backend_libs__compile_target_code__make_init_target_file_13_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_14));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 4) = ((MR_Box) (backend_libs__compile_target_code__TargetExt_19));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_66_66, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    backend_libs__compile_target_code__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, backend_libs__compile_target_code__TypeCtorInfo_122_122, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_66_66, backend_libs__compile_target_code__ModuleNames_18, &backend_libs__compile_target_code__TargetFileNameList_30, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_67_67);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 549, &backend_libs__compile_target_code__InitFileDirsList_31);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__InitFileDirsList_31, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__InitFileDirs_32);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 550, &backend_libs__compile_target_code__InitFileNamesList0_33);
    }
    {
      mercury__list__remove_dups_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList0_33, &backend_libs__compile_target_code__InitFileNamesList1_34);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 551, &backend_libs__compile_target_code__TraceInitFileNamesList0_35);
    }
    {
      backend_libs__compile_target_code__InitFileNamesList2_36 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__StdInitFileNames_20, backend_libs__compile_target_code__InitFileNamesList1_34);
    }
    {
      backend_libs__compile_target_code__TraceInitFileNamesList_37 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__StdTraceInitFileNames_21, backend_libs__compile_target_code__TraceInitFileNamesList0_35);
    }
    {
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_14, &backend_libs__compile_target_code__TraceLevel_38);
    }
    {
      backend_libs__compile_target_code__TraceLevelIsNone_39 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_38);
    }
    switch (backend_libs__compile_target_code__TraceLevelIsNone_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__TraceOpt_40 = (MR_String) "-t";
          {
            backend_libs__compile_target_code__InitFileNamesList3_41 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList2_36, backend_libs__compile_target_code__TraceInitFileNamesList_37);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__TraceOpt_40 = (MR_String) "";
          backend_libs__compile_target_code__InitFileNamesList3_41 = backend_libs__compile_target_code__InitFileNamesList2_36;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 240, &backend_libs__compile_target_code__SourceDebug_42);
    }
    switch (backend_libs__compile_target_code__SourceDebug_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__InitFileNamesList_43 = backend_libs__compile_target_code__InitFileNamesList3_41;
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__InitFileNamesList_43 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList3_41, backend_libs__compile_target_code__SourceDebugInitFileNames_22);
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 561, &backend_libs__compile_target_code__RuntimeFlagsList_44);
    }
    {
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__RuntimeFlagsList_44, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__RuntimeFlags_45);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 562, &backend_libs__compile_target_code__ExtraInits_46);
    }
    switch (backend_libs__compile_target_code__ExtraInits_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ExtraInitsOpt_47 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ExtraInitsOpt_47 = (MR_String) "-x";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 558, &backend_libs__compile_target_code__Main_48);
    }
    switch (backend_libs__compile_target_code__Main_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__NoMainOpt_49 = (MR_String) "-l";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__NoMainOpt_49 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 219, &backend_libs__compile_target_code__ExperimentalComplexity_50);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ExperimentalComplexity_50, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__ExperimentalComplexityOpt_51 = (MR_String) "";
    else
      {
        {
          backend_libs__compile_target_code__ExperimentalComplexityOpt_51 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", backend_libs__compile_target_code__ExperimentalComplexity_50);
        }
      }
    {
      backend_libs__compile_target_code__TmpInitTargetFileName_52 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__InitTargetFileName_29, (MR_String) ".tmp");
    }
    {
      backend_libs__compile_target_code__V_106_106 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__TmpInitTargetFileName_52);
    }
    {
      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__ModuleNameOption_23));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__InitFileDirs_32));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
    }
    {
      backend_libs__compile_target_code__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 1) = ((MR_Box) (backend_libs__compile_target_code__V_109_109));
    }
    {
      backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_107_107));
    }
    {
      backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
    }
    {
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeFlags_45));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
    }
    {
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
    }
    {
      backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) (backend_libs__compile_target_code__ExperimentalComplexityOpt_51));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
    }
    {
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
    }
    {
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__NoMainOpt_49));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
    }
    {
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
    }
    {
      backend_libs__compile_target_code__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 0) = ((MR_Box) (backend_libs__compile_target_code__ExtraInitsOpt_47));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
    }
    {
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_93_93));
    }
    {
      backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpt_40));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
    }
    {
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_90_90));
    }
    {
      backend_libs__compile_target_code__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 0) = ((MR_Box) (backend_libs__compile_target_code__Grade_28));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
    }
    {
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (backend_libs__compile_target_code__V_87_87));
    }
    {
      backend_libs__compile_target_code__MkInitArgs_53 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_85_85);
    }
    {
      backend_libs__compile_target_code__V_113_113 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__TargetFileNameList_30, backend_libs__compile_target_code__InitFileNamesList_43);
    }
    {
      backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__ErrorStream_15, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_16, backend_libs__compile_target_code__MkInitArgs_53, backend_libs__compile_target_code__V_113_113, &backend_libs__compile_target_code__MkInitOk_54);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_27);
    }
    switch (backend_libs__compile_target_code__MkInitOk_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__MaybeInitTargetFile_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__UpdateOk_55;

          {
            parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__InitTargetFileName_29, &backend_libs__compile_target_code__UpdateOk_55);
          }
          switch (backend_libs__compile_target_code__UpdateOk_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *backend_libs__compile_target_code__MaybeInitTargetFile_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *backend_libs__compile_target_code__MaybeInitTargetFile_24 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitTargetFileName_29));
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__MustCompile_11,
  MR_Word backend_libs__compile_target_code__ModuleName_12,
  MR_Word backend_libs__compile_target_code__ModuleNames_13,
  MR_Word * backend_libs__compile_target_code__Result_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_16;
    MR_String backend_libs__compile_target_code__GradeDir_17;
    MR_Word backend_libs__compile_target_code__StdInitFileNames_21;
    MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_22;
    MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_23;
    MR_String backend_libs__compile_target_code__MkInit_24;
    MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_25;
    MR_String backend_libs__compile_target_code__ObjExt_27;
    MR_String backend_libs__compile_target_code__InitObjFileName_28;
    MR_String backend_libs__compile_target_code__V_61_61;

    {
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 547, &backend_libs__compile_target_code__MaybeStdLibDir_16);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__GradeDir_17);
    }
    if ((backend_libs__compile_target_code__MaybeStdLibDir_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        backend_libs__compile_target_code__StdInitFileNames_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        backend_libs__compile_target_code__StdTraceInitFileNames_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        backend_libs__compile_target_code__SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String backend_libs__compile_target_code__StdLibDir_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_16, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__V_41_41;
        MR_Word backend_libs__compile_target_code__V_43_43;
        MR_String backend_libs__compile_target_code__V_44_44;
        MR_String backend_libs__compile_target_code__V_47_47;
        MR_Word backend_libs__compile_target_code__V_49_49;
        MR_String backend_libs__compile_target_code__V_50_50;
        MR_String backend_libs__compile_target_code__V_53_53;

        {
          backend_libs__compile_target_code__V_41_41 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_rt.init");
        }
        {
          backend_libs__compile_target_code__V_44_44 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_std.init");
        }
        {
          backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__StdInitFileNames_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_21, 0) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
        }
        {
          backend_libs__compile_target_code__V_47_47 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_browser.init");
        }
        {
          backend_libs__compile_target_code__V_50_50 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_mdbcomp.init");
        }
        {
          backend_libs__compile_target_code__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 0) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__StdTraceInitFileNames_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdTraceInitFileNames_22, 0) = ((MR_Box) (backend_libs__compile_target_code__V_47_47));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdTraceInitFileNames_22, 1) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
        }
        {
          backend_libs__compile_target_code__V_53_53 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1401__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_ssdb.init");
        }
        {
          backend_libs__compile_target_code__SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_23, 0) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 577, &backend_libs__compile_target_code__MkInit_24);
    }
    {
      backend_libs__compile_target_code__make_init_target_file_13_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__MkInit_24, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__ModuleNames_13, (MR_String) ".c", backend_libs__compile_target_code__StdInitFileNames_21, backend_libs__compile_target_code__StdTraceInitFileNames_22, backend_libs__compile_target_code__SourceDebugInitFileNames_23, (MR_String) "", &backend_libs__compile_target_code__MaybeInitTargetFile_25);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_27);
    }
    {
      backend_libs__compile_target_code__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_init", backend_libs__compile_target_code__ObjExt_27);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__V_61_61, (MR_Integer) 0, &backend_libs__compile_target_code__InitObjFileName_28);
    }
    {
      backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__MaybeInitTargetFile_25, backend_libs__compile_target_code__MustCompile_11, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__Result_14);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__InitFileStream_11,
  MR_Word backend_libs__compile_target_code__Verbosity_12,
  MR_String backend_libs__compile_target_code__MkInit_13,
  MR_String backend_libs__compile_target_code__Args_14,
  MR_Word backend_libs__compile_target_code__FileNames_15,
  MR_Word * backend_libs__compile_target_code__MkInitOK_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__TargetFileNames_18;
    MR_Word backend_libs__compile_target_code__TmpFileResult_19;

    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__FileNames_15, (MR_String) "", (MR_String) "\n", (MR_String) "", &backend_libs__compile_target_code__TargetFileNames_18);
    }
    {
      libs__file_util__open_temp_output_3_p_0(&backend_libs__compile_target_code__TmpFileResult_19);
    }
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__TmpFileResult_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String backend_libs__compile_target_code__ErrorMessage_26 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TmpFileResult_19, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__V_33_33;

        {
          backend_libs__compile_target_code__V_33_33 = mercury__io__stderr_stream_0_f_0();
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__V_33_33, backend_libs__compile_target_code__ErrorMessage_26);
        }
        {
          mercury__io__nl_2_p_0();
        }
        *backend_libs__compile_target_code__MkInitOK_16 = (MR_Integer) 0;
      }
    else
      {
        MR_String backend_libs__compile_target_code__TmpFile_20;
        MR_Word backend_libs__compile_target_code__TmpStream_21;
        MR_String backend_libs__compile_target_code__MkInitCmd_22;
        MR_Word backend_libs__compile_target_code__MkInitOK0_23;
        MR_Word backend_libs__compile_target_code__RemoveResult_24;
        MR_Tuple backend_libs__compile_target_code__V_36_36 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TmpFileResult_19, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__V_39_39;
        MR_Word backend_libs__compile_target_code__V_40_40;
        MR_Word backend_libs__compile_target_code__V_42_42;
        MR_Word backend_libs__compile_target_code__V_43_43;
        MR_Word backend_libs__compile_target_code__V_45_45;

        backend_libs__compile_target_code__TmpFile_20 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_36_36, (MR_Integer) 0)));
        backend_libs__compile_target_code__TmpStream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_36_36, (MR_Integer) 1)));
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__TmpStream_21, backend_libs__compile_target_code__TargetFileNames_18);
        }
        {
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__TmpStream_21);
        }
        {
          backend_libs__compile_target_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpFile_20));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) ((MR_String) " -f "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (backend_libs__compile_target_code__V_45_45));
        }
        {
          backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) (backend_libs__compile_target_code__Args_14));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
        }
        {
          backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
        }
        {
          backend_libs__compile_target_code__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_39_39, 0) = ((MR_Box) (backend_libs__compile_target_code__MkInit_13));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_39_39, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
        }
        {
          backend_libs__compile_target_code__MkInitCmd_22 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_39_39);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_11, backend_libs__compile_target_code__Verbosity_12, backend_libs__compile_target_code__MkInitCmd_22, &backend_libs__compile_target_code__MkInitOK0_23);
        }
        {
          mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TmpFile_20, &backend_libs__compile_target_code__RemoveResult_24);
        }
        if ((backend_libs__compile_target_code__RemoveResult_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__compile_target_code__MkInitOK_16 = backend_libs__compile_target_code__MkInitOK0_23;
        else
          *backend_libs__compile_target_code__MkInitOK_16 = (MR_Integer) 0;
      }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_String backend_libs__compile_target_code__Ext_9,
  MR_Word backend_libs__compile_target_code__MkDir_10,
  MR_Word backend_libs__compile_target_code__ModuleName_11,
  MR_String * backend_libs__compile_target_code__FileName_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_9, backend_libs__compile_target_code__MkDir_10, backend_libs__compile_target_code__FileName_12);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_FileName_12;

    {
      backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_FileName_12);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_FileName_12));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
  MR_Word backend_libs__compile_target_code__Globals_10,
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
  MR_Word backend_libs__compile_target_code__MainModuleName_12,
  MR_Word backend_libs__compile_target_code__AllModules_13,
  MR_String backend_libs__compile_target_code__TargetExt_14,
  MR_String backend_libs__compile_target_code__MkInit_15,
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__TmpInitFileName_18;
    MR_Word backend_libs__compile_target_code__InitFileRes_19;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init.tmp", (MR_Integer) 0, &backend_libs__compile_target_code__TmpInitFileName_18);
    }
    {
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__TmpInitFileName_18, &backend_libs__compile_target_code__InitFileRes_19);
    }
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__InitFileRes_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__compile_target_code__Error_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFileRes_19, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__ProgName_38;
        MR_String backend_libs__compile_target_code__V_54_54;

        {
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &backend_libs__compile_target_code__ProgName_38);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__ProgName_38);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, (MR_String) ": can\'t open \140");
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__TmpInitFileName_18);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, (MR_String) "\' for output:\n");
        }
        {
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_11);
        }
        {
          backend_libs__compile_target_code__V_54_54 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_37);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__V_54_54);
        }
        {
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_11);
        }
        *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
      }
    else
      {
        MR_Word backend_libs__compile_target_code__InitFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__InitFileRes_19, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__AllTargetFilesList_21;
        MR_Word backend_libs__compile_target_code__MkInitOK_22;
        MR_Word backend_libs__compile_target_code__Succeeded0_26;
        MR_String backend_libs__compile_target_code__InitFileName_27;
        MR_Word backend_libs__compile_target_code__Succeeded1_28;
        MR_Word backend_libs__compile_target_code__Succeeded2_29;
        MR_Word backend_libs__compile_target_code__V_57_57;
        MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_58_58;

        {
          backend_libs__compile_target_code__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 1) = ((MR_Box) (backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_10));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 4) = ((MR_Box) (backend_libs__compile_target_code__TargetExt_14));
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 5) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_57_57, backend_libs__compile_target_code__AllModules_13, &backend_libs__compile_target_code__AllTargetFilesList_21, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_58_58);
        }
        {
          backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_20, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_15, (MR_String) " -k ", backend_libs__compile_target_code__AllTargetFilesList_21, &backend_libs__compile_target_code__MkInitOK_22);
        }
        switch (backend_libs__compile_target_code__MkInitOK_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__Succeeded0_26 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word backend_libs__compile_target_code__MaybeInitFileCommand_23;

              {
                libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 623, &backend_libs__compile_target_code__MaybeInitFileCommand_23);
              }
              if ((backend_libs__compile_target_code__MaybeInitFileCommand_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                backend_libs__compile_target_code__Succeeded0_26 = (MR_Integer) 1;
              else
                {
                  MR_String backend_libs__compile_target_code__InitFileCommand_24 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitFileCommand_23, (MR_Integer) 0)));
                  MR_String backend_libs__compile_target_code__CommandString_25;

                  {
                    backend_libs__compile_target_code__make_all_module_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileCommand_24, backend_libs__compile_target_code__MainModuleName_12, backend_libs__compile_target_code__AllModules_13, &backend_libs__compile_target_code__CommandString_25);
                  }
                  {
                    parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_20, (MR_Integer) 1, backend_libs__compile_target_code__CommandString_25, &backend_libs__compile_target_code__Succeeded0_26);
                  }
                }
            }
            break;
        }
        {
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__InitFileStream_20);
        }
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init", (MR_Integer) 0, &backend_libs__compile_target_code__InitFileName_27);
        }
        {
          parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileName_27, &backend_libs__compile_target_code__Succeeded1_28);
        }
        {
          backend_libs__compile_target_code__Succeeded2_29 = mercury__bool__and_2_f_0(backend_libs__compile_target_code__Succeeded0_26, backend_libs__compile_target_code__Succeeded1_28);
        }
        switch (backend_libs__compile_target_code__Succeeded2_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word backend_libs__compile_target_code__UseGradeSubDirs_30;

              {
                libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubDirs_30);
              }
              switch (backend_libs__compile_target_code__UseGradeSubDirs_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__compile_target_code__OutputStream_31;
                    MR_Word backend_libs__compile_target_code__NoSubdirGlobals0_32;
                    MR_Word backend_libs__compile_target_code__NoSubdirGlobals_33;
                    MR_String backend_libs__compile_target_code__UserDirFileName_34;
                    MR_Word backend_libs__compile_target_code__V_75_75;
                    MR_Word backend_libs__compile_target_code__V_35_35;
                    MR_Word backend_libs__compile_target_code__V_36_36;

                    {
                      mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ErrorStream_11, &backend_libs__compile_target_code__OutputStream_31);
                    }
                    backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[2]);
                    {
                      libs__globals__set_option_4_p_0((MR_Integer) 640, backend_libs__compile_target_code__V_75_75, backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__NoSubdirGlobals0_32);
                    }
                    {
                      libs__globals__set_option_4_p_0((MR_Integer) 641, backend_libs__compile_target_code__V_75_75, backend_libs__compile_target_code__NoSubdirGlobals0_32, &backend_libs__compile_target_code__NoSubdirGlobals_33);
                    }
                    {
                      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__NoSubdirGlobals_33, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init", (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_34);
                    }
                    {
                      mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__UserDirFileName_34, &backend_libs__compile_target_code__V_35_35);
                    }
                    {
                      parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileName_27, backend_libs__compile_target_code__UserDirFileName_34, backend_libs__compile_target_code__Succeeded_16);
                    }
                    {
                      mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__OutputStream_31, &backend_libs__compile_target_code__V_36_36);
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

static MR_bool MR_CALL 
backend_libs__compile_target_code__is_minus_j_flag_1_p_0(
  MR_String backend_libs__compile_target_code__FlagStr_2)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    {
      backend_libs__compile_target_code__succeeded = mercury__string__prefix_2_p_0(backend_libs__compile_target_code__FlagStr_2, (MR_String) "-J");
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__PathSeparator_2;

    {
      backend_libs__compile_target_code__succeeded = mercury__dir__use_windows_paths_0_p_0();
    }
    if (!(backend_libs__compile_target_code__succeeded))
      {
        backend_libs__compile_target_code__succeeded = mercury__io__have_cygwin_0_p_0();
      }
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__PathSeparator_2 = (MR_String) ";";
    else
      backend_libs__compile_target_code__PathSeparator_2 = (MR_String) ":";
    return backend_libs__compile_target_code__PathSeparator_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__Flags_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__C_CompilerType_5;
    MR_Word backend_libs__compile_target_code__FlagsList_9;

    {
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__C_CompilerType_5);
    }
    switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__FlagsList_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 493, &backend_libs__compile_target_code__FlagsList_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 495, &backend_libs__compile_target_code__FlagsList_9);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 497, &backend_libs__compile_target_code__FlagsList_9);
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__FlagsList_9, (MR_String) "", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__Flags_4);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__935__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__InclOpt_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_20_20;
    MR_Word backend_libs__compile_target_code__C_Incl_Dirs_5;
    MR_Word backend_libs__compile_target_code__V_8_8;
    MR_Word backend_libs__compile_target_code__V_9_9;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 489, &backend_libs__compile_target_code__C_Incl_Dirs_5);
    }
    backend_libs__compile_target_code__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_9_9 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_20, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_5[9], backend_libs__compile_target_code__C_Incl_Dirs_5);
    }
    {
      backend_libs__compile_target_code__V_8_8 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_20, backend_libs__compile_target_code__V_9_9);
    }
    {
      *backend_libs__compile_target_code__InclOpt_4 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_8_8);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_grade_defines_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_String * backend_libs__compile_target_code__GradeDefines_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__HighLevelCode_5;
    MR_String backend_libs__compile_target_code__HighLevelCodeOpt_6;
    MR_Word backend_libs__compile_target_code__GCC_NestedFunctions_7;
    MR_String backend_libs__compile_target_code__NestedFunctionsOpt_8;
    MR_Word backend_libs__compile_target_code__HighLevelData_9;
    MR_String backend_libs__compile_target_code__HighLevelDataOpt_10;
    MR_Word backend_libs__compile_target_code__GCC_Regs_11;
    MR_String backend_libs__compile_target_code__RegOpt_12;
    MR_Word backend_libs__compile_target_code__GCC_Gotos_13;
    MR_String backend_libs__compile_target_code__GotoOpt_14;
    MR_Word backend_libs__compile_target_code__ASM_Labels_15;
    MR_String backend_libs__compile_target_code__AsmOpt_16;
    MR_Word backend_libs__compile_target_code__Parallel_17;
    MR_String backend_libs__compile_target_code__ParallelOpt_18;
    MR_Word backend_libs__compile_target_code__Threadscope_19;
    MR_String backend_libs__compile_target_code__ThreadscopeOpt_20;
    MR_Word backend_libs__compile_target_code__GC_Method_21;
    MR_String backend_libs__compile_target_code__GC_Opt_23;
    MR_Word backend_libs__compile_target_code__ProfileCalls_24;
    MR_String backend_libs__compile_target_code__ProfileCallsOpt_25;
    MR_Word backend_libs__compile_target_code__ProfileTime_26;
    MR_String backend_libs__compile_target_code__ProfileTimeOpt_27;
    MR_Word backend_libs__compile_target_code__ProfileMemory_28;
    MR_String backend_libs__compile_target_code__ProfileMemoryOpt_29;
    MR_Word backend_libs__compile_target_code__ProfileDeep_30;
    MR_String backend_libs__compile_target_code__ProfileDeepOpt_31;
    MR_Word backend_libs__compile_target_code__RecordTermSizesAsWords_32;
    MR_Word backend_libs__compile_target_code__RecordTermSizesAsCells_33;
    MR_String backend_libs__compile_target_code__RecordTermSizesOpt_34;
    MR_Word backend_libs__compile_target_code__Tags_Method_35;
    MR_String backend_libs__compile_target_code__TagsOpt_36;
    MR_Integer backend_libs__compile_target_code__NumTagBits_37;
    MR_String backend_libs__compile_target_code__NumTagBitsString_38;
    MR_String backend_libs__compile_target_code__NumTagBitsOpt_39;
    MR_Word backend_libs__compile_target_code__DeclDebug_40;
    MR_String backend_libs__compile_target_code__DeclDebugOpt_41;
    MR_Word backend_libs__compile_target_code__SourceDebug_42;
    MR_String backend_libs__compile_target_code__SourceDebugOpt_43;
    MR_Word backend_libs__compile_target_code__ExecTrace_44;
    MR_String backend_libs__compile_target_code__ExecTraceOpt_45;
    MR_Word backend_libs__compile_target_code__Extend_46;
    MR_Word backend_libs__compile_target_code__StackSegments_47;
    MR_String backend_libs__compile_target_code__ExtendOpt_48;
    MR_Word backend_libs__compile_target_code__LL_Debug_49;
    MR_String backend_libs__compile_target_code__LL_DebugOpt_50;
    MR_Word backend_libs__compile_target_code__UseTrail_51;
    MR_String backend_libs__compile_target_code__UseTrailOpt_52;
    MR_String backend_libs__compile_target_code__TrailSegOpt_54;
    MR_Word backend_libs__compile_target_code__MinimalModelStackCopy_55;
    MR_Word backend_libs__compile_target_code__MinimalModelOwnStacks_56;
    MR_String backend_libs__compile_target_code__MinimalModelBaseOpt_57;
    MR_Word backend_libs__compile_target_code__MinimalModelDebug_58;
    MR_String backend_libs__compile_target_code__MinimalModelOpt_59;
    MR_Word backend_libs__compile_target_code__PregeneratedDist_60;
    MR_String backend_libs__compile_target_code__PregeneratedDistOpt_61;
    MR_Word backend_libs__compile_target_code__SinglePrecFloat_62;
    MR_String backend_libs__compile_target_code__SinglePrecFloatOpt_63;
    MR_Word backend_libs__compile_target_code__UseRegions_64;
    MR_String backend_libs__compile_target_code__UseRegionsOpt_69;
    MR_String backend_libs__compile_target_code__V_92_92;
    MR_Word backend_libs__compile_target_code__V_119_119;
    MR_Word backend_libs__compile_target_code__V_120_120;
    MR_Word backend_libs__compile_target_code__V_121_121;
    MR_Word backend_libs__compile_target_code__V_122_122;
    MR_Word backend_libs__compile_target_code__V_123_123;
    MR_Word backend_libs__compile_target_code__V_124_124;
    MR_Word backend_libs__compile_target_code__V_125_125;
    MR_Word backend_libs__compile_target_code__V_126_126;
    MR_Word backend_libs__compile_target_code__V_127_127;
    MR_Word backend_libs__compile_target_code__V_128_128;
    MR_Word backend_libs__compile_target_code__V_129_129;
    MR_Word backend_libs__compile_target_code__V_130_130;
    MR_Word backend_libs__compile_target_code__V_131_131;
    MR_Word backend_libs__compile_target_code__V_132_132;
    MR_Word backend_libs__compile_target_code__V_133_133;
    MR_Word backend_libs__compile_target_code__V_134_134;
    MR_Word backend_libs__compile_target_code__V_135_135;
    MR_Word backend_libs__compile_target_code__V_136_136;
    MR_Word backend_libs__compile_target_code__V_137_137;
    MR_Word backend_libs__compile_target_code__V_138_138;
    MR_Word backend_libs__compile_target_code__V_139_139;
    MR_Word backend_libs__compile_target_code__V_140_140;
    MR_Word backend_libs__compile_target_code__V_141_141;
    MR_Word backend_libs__compile_target_code__V_142_142;
    MR_Word backend_libs__compile_target_code__V_143_143;
    MR_Word backend_libs__compile_target_code__V_144_144;
    MR_Word backend_libs__compile_target_code__V_145_145;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 258, &backend_libs__compile_target_code__HighLevelCode_5);
    }
    switch (backend_libs__compile_target_code__HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__HighLevelCodeOpt_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__HighLevelCodeOpt_6 = (MR_String) "-DMR_HIGHLEVEL_CODE ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 260, &backend_libs__compile_target_code__GCC_NestedFunctions_7);
    }
    switch (backend_libs__compile_target_code__GCC_NestedFunctions_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__NestedFunctionsOpt_8 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__NestedFunctionsOpt_8 = (MR_String) "-DMR_USE_GCC_NESTED_FUNCTIONS ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 259, &backend_libs__compile_target_code__HighLevelData_9);
    }
    switch (backend_libs__compile_target_code__HighLevelData_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__HighLevelDataOpt_10 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__HighLevelDataOpt_10 = (MR_String) "-DMR_HIGHLEVEL_DATA ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 255, &backend_libs__compile_target_code__GCC_Regs_11);
    }
    switch (backend_libs__compile_target_code__GCC_Regs_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__RegOpt_12 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__RegOpt_12 = (MR_String) "-DMR_USE_GCC_GLOBAL_REGISTERS ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 254, &backend_libs__compile_target_code__GCC_Gotos_13);
    }
    switch (backend_libs__compile_target_code__GCC_Gotos_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__GotoOpt_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__GotoOpt_14 = (MR_String) "-DMR_USE_GCC_NONLOCAL_GOTOS ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 256, &backend_libs__compile_target_code__ASM_Labels_15);
    }
    switch (backend_libs__compile_target_code__ASM_Labels_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__AsmOpt_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__AsmOpt_16 = (MR_String) "-DMR_USE_ASM_LABELS ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 221, &backend_libs__compile_target_code__Parallel_17);
    }
    switch (backend_libs__compile_target_code__Parallel_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ParallelOpt_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ParallelOpt_18 = (MR_String) "-DMR_THREAD_SAFE ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 222, &backend_libs__compile_target_code__Threadscope_19);
    }
    switch (backend_libs__compile_target_code__Threadscope_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ThreadscopeOpt_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ThreadscopeOpt_20 = (MR_String) "-DMR_THREADSCOPE ";
        break;
    }
    {
      libs__globals__get_gc_method_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__GC_Method_21);
    }
    switch (backend_libs__compile_target_code__GC_Method_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "-DMR_NATIVE_GC ";
        break;
      case (MR_Integer) 0:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ";
        break;
      case (MR_Integer) 3:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC -DMR_BOEHM_GC_DEBUG -DGC_DEBUG -DKEEP_BACKPTRS ";
        break;
      case (MR_Integer) 4:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_HGC ";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__GC_Opt_23 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 197, &backend_libs__compile_target_code__ProfileCalls_24);
    }
    switch (backend_libs__compile_target_code__ProfileCalls_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ProfileCallsOpt_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ProfileCallsOpt_25 = (MR_String) "-DMR_MPROF_PROFILE_CALLS ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 198, &backend_libs__compile_target_code__ProfileTime_26);
    }
    switch (backend_libs__compile_target_code__ProfileTime_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ProfileTimeOpt_27 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ProfileTimeOpt_27 = (MR_String) "-DMR_MPROF_PROFILE_TIME ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 199, &backend_libs__compile_target_code__ProfileMemory_28);
    }
    switch (backend_libs__compile_target_code__ProfileMemory_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ProfileMemoryOpt_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ProfileMemoryOpt_29 = (MR_String) "-DMR_MPROF_PROFILE_MEMORY ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 200, &backend_libs__compile_target_code__ProfileDeep_30);
    }
    switch (backend_libs__compile_target_code__ProfileDeep_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ProfileDeepOpt_31 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ProfileDeepOpt_31 = (MR_String) "-DMR_DEEP_PROFILING ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 217, &backend_libs__compile_target_code__RecordTermSizesAsWords_32);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 218, &backend_libs__compile_target_code__RecordTermSizesAsCells_33);
    }
    switch (backend_libs__compile_target_code__RecordTermSizesAsWords_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (backend_libs__compile_target_code__RecordTermSizesAsCells_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__RecordTermSizesOpt_34 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__RecordTermSizesOpt_34 = (MR_String) "-DMR_RECORD_TERM_SIZES -DMR_RECORD_TERM_SIZES_AS_CELLS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (backend_libs__compile_target_code__RecordTermSizesAsCells_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__RecordTermSizesOpt_34 = (MR_String) "-DMR_RECORD_TERM_SIZES ";
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "inconsistent record term size options");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      libs__globals__get_tags_method_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__Tags_Method_35);
    }
    switch (backend_libs__compile_target_code__Tags_Method_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        backend_libs__compile_target_code__TagsOpt_36 = (MR_String) "-DMR_HIGHTAGS ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        backend_libs__compile_target_code__TagsOpt_36 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 242, &backend_libs__compile_target_code__NumTagBits_37);
    }
    {
      mercury__string__int_to_string_2_p_0(backend_libs__compile_target_code__NumTagBits_37, &backend_libs__compile_target_code__NumTagBitsString_38);
    }
    {
      backend_libs__compile_target_code__V_92_92 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__NumTagBitsString_38, (MR_String) " ");
    }
    {
      backend_libs__compile_target_code__NumTagBitsOpt_39 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_TAGBITS=", backend_libs__compile_target_code__V_92_92);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 192, &backend_libs__compile_target_code__DeclDebug_40);
    }
    switch (backend_libs__compile_target_code__DeclDebug_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DeclDebugOpt_41 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__DeclDebugOpt_41 = (MR_String) "-DMR_DECL_DEBUG ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 238, &backend_libs__compile_target_code__SourceDebug_42);
    }
    switch (backend_libs__compile_target_code__SourceDebug_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__SourceDebugOpt_43 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__SourceDebugOpt_43 = (MR_String) "-DMR_SS_DEBUG ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 191, &backend_libs__compile_target_code__ExecTrace_44);
    }
    switch (backend_libs__compile_target_code__ExecTrace_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ExecTraceOpt_45 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__ExecTraceOpt_45 = (MR_String) "-DMR_EXEC_TRACE ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 232, &backend_libs__compile_target_code__Extend_46);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 233, &backend_libs__compile_target_code__StackSegments_47);
    }
    switch (backend_libs__compile_target_code__Extend_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (backend_libs__compile_target_code__StackSegments_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__ExtendOpt_48 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__ExtendOpt_48 = (MR_String) "-DMR_STACK_SEGMENTS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (backend_libs__compile_target_code__StackSegments_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__ExtendOpt_48 = (MR_String) "-DMR_EXTEND_STACKS_WHEN_NEEDED ";
            break;
          case (MR_Integer) 1:
            {
              MR_Box backend_libs__compile_target_code__conv0_ExtendOpt_48;

              {
                backend_libs__compile_target_code__conv0_ExtendOpt_48 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "--extend-stacks-when-needed and --stack-segments");
                return;
              }
              backend_libs__compile_target_code__ExtendOpt_48 = ((MR_String) backend_libs__compile_target_code__conv0_ExtendOpt_48);
            }
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 300, &backend_libs__compile_target_code__LL_Debug_49);
    }
    switch (backend_libs__compile_target_code__LL_Debug_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__LL_DebugOpt_50 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__LL_DebugOpt_50 = (MR_String) "-DMR_LL_DEBUG ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 223, &backend_libs__compile_target_code__UseTrail_51);
    }
    switch (backend_libs__compile_target_code__UseTrail_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__UseTrailOpt_52 = (MR_String) "";
          backend_libs__compile_target_code__TrailSegOpt_54 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__TrailSegments_53;

          backend_libs__compile_target_code__UseTrailOpt_52 = (MR_String) "-DMR_USE_TRAIL ";
          {
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 224, &backend_libs__compile_target_code__TrailSegments_53);
          }
          switch (backend_libs__compile_target_code__TrailSegments_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__TrailSegOpt_54 = (MR_String) "";
              break;
            case (MR_Integer) 1:
              backend_libs__compile_target_code__TrailSegOpt_54 = (MR_String) "-DMR_TRAIL_SEGMENTS ";
              break;
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 225, &backend_libs__compile_target_code__MinimalModelStackCopy_55);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 226, &backend_libs__compile_target_code__MinimalModelOwnStacks_56);
    }
    switch (backend_libs__compile_target_code__MinimalModelStackCopy_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (backend_libs__compile_target_code__MinimalModelOwnStacks_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__MinimalModelBaseOpt_57 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            backend_libs__compile_target_code__MinimalModelBaseOpt_57 = (MR_String) "-DMR_USE_MINIMAL_MODEL_OWN_STACKS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (backend_libs__compile_target_code__MinimalModelOwnStacks_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__compile_target_code__MinimalModelBaseOpt_57 = (MR_String) "-DMR_USE_MINIMAL_MODEL_STACK_COPY ";
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "inconsistent minimal model options");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 227, &backend_libs__compile_target_code__MinimalModelDebug_58);
    }
    switch (backend_libs__compile_target_code__MinimalModelDebug_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__MinimalModelOpt_59 = backend_libs__compile_target_code__MinimalModelBaseOpt_57;
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MinimalModelBaseOpt_57, (MR_String) "") == 0);
          if (backend_libs__compile_target_code__succeeded)
            backend_libs__compile_target_code__MinimalModelOpt_59 = backend_libs__compile_target_code__MinimalModelBaseOpt_57;
          else
            {
              {
                backend_libs__compile_target_code__MinimalModelOpt_59 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__MinimalModelBaseOpt_57, (MR_String) "-DMR_MINIMAL_MODEL_DEBUG ");
              }
            }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 228, &backend_libs__compile_target_code__PregeneratedDist_60);
    }
    switch (backend_libs__compile_target_code__PregeneratedDist_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__PregeneratedDistOpt_61 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__PregeneratedDistOpt_61 = (MR_String) "-DMR_PREGENERATED_DIST ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 229, &backend_libs__compile_target_code__SinglePrecFloat_62);
    }
    switch (backend_libs__compile_target_code__SinglePrecFloat_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__SinglePrecFloatOpt_63 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__SinglePrecFloatOpt_63 = (MR_String) "-DMR_USE_SINGLE_PREC_FLOAT ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 234, &backend_libs__compile_target_code__UseRegions_64);
    }
    switch (backend_libs__compile_target_code__UseRegions_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__UseRegionsOpt_69 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__UseRegionsDebug_66;
          MR_String backend_libs__compile_target_code__UseRegionsOpt1_67;
          MR_Word backend_libs__compile_target_code__UseRegionsProfiling_68;

          {
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 236, &backend_libs__compile_target_code__UseRegionsDebug_66);
          }
          switch (backend_libs__compile_target_code__UseRegionsDebug_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__UseRegionsOpt1_67 = (MR_String) "-DMR_USE_REGIONS ";
              break;
            case (MR_Integer) 1:
              backend_libs__compile_target_code__UseRegionsOpt1_67 = (MR_String) "-DMR_USE_REGIONS -DMR_RBMM_DEBUG ";
              break;
          }
          {
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 237, &backend_libs__compile_target_code__UseRegionsProfiling_68);
          }
          switch (backend_libs__compile_target_code__UseRegionsProfiling_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__UseRegionsOpt_69 = backend_libs__compile_target_code__UseRegionsOpt1_67;
              break;
            case (MR_Integer) 1:
              {
                {
                  backend_libs__compile_target_code__UseRegionsOpt_69 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__UseRegionsOpt1_67, (MR_String) "-DMR_RBMM_PROFILING ");
                }
              }
              break;
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 0) = ((MR_Box) (backend_libs__compile_target_code__UseRegionsOpt_69));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 0) = ((MR_Box) (backend_libs__compile_target_code__SinglePrecFloatOpt_63));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 1) = ((MR_Box) (backend_libs__compile_target_code__V_145_145));
    }
    {
      backend_libs__compile_target_code__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_143_143, 0) = ((MR_Box) (backend_libs__compile_target_code__PregeneratedDistOpt_61));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_143_143, 1) = ((MR_Box) (backend_libs__compile_target_code__V_144_144));
    }
    {
      backend_libs__compile_target_code__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 0) = ((MR_Box) (backend_libs__compile_target_code__MinimalModelOpt_59));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 1) = ((MR_Box) (backend_libs__compile_target_code__V_143_143));
    }
    {
      backend_libs__compile_target_code__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 0) = ((MR_Box) (backend_libs__compile_target_code__TrailSegOpt_54));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 1) = ((MR_Box) (backend_libs__compile_target_code__V_142_142));
    }
    {
      backend_libs__compile_target_code__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_140_140, 0) = ((MR_Box) (backend_libs__compile_target_code__UseTrailOpt_52));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_140_140, 1) = ((MR_Box) (backend_libs__compile_target_code__V_141_141));
    }
    {
      backend_libs__compile_target_code__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 0) = ((MR_Box) (backend_libs__compile_target_code__ExecTraceOpt_45));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 1) = ((MR_Box) (backend_libs__compile_target_code__V_140_140));
    }
    {
      backend_libs__compile_target_code__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 0) = ((MR_Box) (backend_libs__compile_target_code__SourceDebugOpt_43));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 1) = ((MR_Box) (backend_libs__compile_target_code__V_139_139));
    }
    {
      backend_libs__compile_target_code__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_137_137, 0) = ((MR_Box) (backend_libs__compile_target_code__DeclDebugOpt_41));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_137_137, 1) = ((MR_Box) (backend_libs__compile_target_code__V_138_138));
    }
    {
      backend_libs__compile_target_code__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 0) = ((MR_Box) (backend_libs__compile_target_code__LL_DebugOpt_50));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 1) = ((MR_Box) (backend_libs__compile_target_code__V_137_137));
    }
    {
      backend_libs__compile_target_code__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 0) = ((MR_Box) (backend_libs__compile_target_code__ExtendOpt_48));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 1) = ((MR_Box) (backend_libs__compile_target_code__V_136_136));
    }
    {
      backend_libs__compile_target_code__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_134_134, 0) = ((MR_Box) (backend_libs__compile_target_code__NumTagBitsOpt_39));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_134_134, 1) = ((MR_Box) (backend_libs__compile_target_code__V_135_135));
    }
    {
      backend_libs__compile_target_code__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 0) = ((MR_Box) (backend_libs__compile_target_code__TagsOpt_36));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 1) = ((MR_Box) (backend_libs__compile_target_code__V_134_134));
    }
    {
      backend_libs__compile_target_code__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 0) = ((MR_Box) (backend_libs__compile_target_code__RecordTermSizesOpt_34));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 1) = ((MR_Box) (backend_libs__compile_target_code__V_133_133));
    }
    {
      backend_libs__compile_target_code__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_131_131, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileDeepOpt_31));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_131_131, 1) = ((MR_Box) (backend_libs__compile_target_code__V_132_132));
    }
    {
      backend_libs__compile_target_code__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileMemoryOpt_29));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 1) = ((MR_Box) (backend_libs__compile_target_code__V_131_131));
    }
    {
      backend_libs__compile_target_code__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileTimeOpt_27));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 1) = ((MR_Box) (backend_libs__compile_target_code__V_130_130));
    }
    {
      backend_libs__compile_target_code__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_128_128, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileCallsOpt_25));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_128_128, 1) = ((MR_Box) (backend_libs__compile_target_code__V_129_129));
    }
    {
      backend_libs__compile_target_code__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 0) = ((MR_Box) (backend_libs__compile_target_code__GC_Opt_23));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 1) = ((MR_Box) (backend_libs__compile_target_code__V_128_128));
    }
    {
      backend_libs__compile_target_code__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadscopeOpt_20));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 1) = ((MR_Box) (backend_libs__compile_target_code__V_127_127));
    }
    {
      backend_libs__compile_target_code__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 0) = ((MR_Box) (backend_libs__compile_target_code__ParallelOpt_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 1) = ((MR_Box) (backend_libs__compile_target_code__V_126_126));
    }
    {
      backend_libs__compile_target_code__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 0) = ((MR_Box) (backend_libs__compile_target_code__AsmOpt_16));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 1) = ((MR_Box) (backend_libs__compile_target_code__V_125_125));
    }
    {
      backend_libs__compile_target_code__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_123_123, 0) = ((MR_Box) (backend_libs__compile_target_code__GotoOpt_14));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_123_123, 1) = ((MR_Box) (backend_libs__compile_target_code__V_124_124));
    }
    {
      backend_libs__compile_target_code__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 0) = ((MR_Box) (backend_libs__compile_target_code__RegOpt_12));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 1) = ((MR_Box) (backend_libs__compile_target_code__V_123_123));
    }
    {
      backend_libs__compile_target_code__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelDataOpt_10));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 1) = ((MR_Box) (backend_libs__compile_target_code__V_122_122));
    }
    {
      backend_libs__compile_target_code__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 0) = ((MR_Box) (backend_libs__compile_target_code__NestedFunctionsOpt_8));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 1) = ((MR_Box) (backend_libs__compile_target_code__V_121_121));
    }
    {
      backend_libs__compile_target_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelCodeOpt_6));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 1) = ((MR_Box) (backend_libs__compile_target_code__V_120_120));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_119_119, backend_libs__compile_target_code__GradeDefines_4);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__PIC_5,
  MR_String * backend_libs__compile_target_code__AllCFlags_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__C_Flags_List_7;
    MR_String backend_libs__compile_target_code__CFLAGS_8;
    MR_String backend_libs__compile_target_code__CC_Specific_CFLAGS_9;
    MR_Word backend_libs__compile_target_code__UseSubdirs_10;
    MR_String backend_libs__compile_target_code__SubDirInclOpt_11;
    MR_String backend_libs__compile_target_code__InclOpt_12;
    MR_String backend_libs__compile_target_code__FrameworkInclOpt_13;
    MR_String backend_libs__compile_target_code__GradeDefinesOpts_14;
    MR_Word backend_libs__compile_target_code__GCC_Regs_15;
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_REGS_16;
    MR_Word backend_libs__compile_target_code__GCC_Gotos_17;
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18;
    MR_Word backend_libs__compile_target_code__Parallel_19;
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20;
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_PIC_21;
    MR_Word backend_libs__compile_target_code__Target_Debug_22;
    MR_String backend_libs__compile_target_code__Target_DebugOpt_24;
    MR_String backend_libs__compile_target_code__SanitizerOpts_25;
    MR_Word backend_libs__compile_target_code__UseTrail_26;
    MR_String backend_libs__compile_target_code__C_FnAlignOpt_32;
    MR_Word backend_libs__compile_target_code__TypeLayoutOption_35;
    MR_String backend_libs__compile_target_code__TypeLayoutOpt_36;
    MR_Word backend_libs__compile_target_code__C_optimize_37;
    MR_String backend_libs__compile_target_code__OptimizeOpt_38;
    MR_Word backend_libs__compile_target_code__Ansi_39;
    MR_String backend_libs__compile_target_code__AnsiOpt_40;
    MR_Word backend_libs__compile_target_code__InlineAlloc_41;
    MR_String backend_libs__compile_target_code__InlineAllocOpt_42;
    MR_Word backend_libs__compile_target_code__Warn_43;
    MR_String backend_libs__compile_target_code__WarningOpt_44;
    MR_String backend_libs__compile_target_code__TargetArch_45;
    MR_String backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_46;
    MR_String backend_libs__compile_target_code__OverrideOpts_47;
    MR_Word backend_libs__compile_target_code__V_86_86;
    MR_Word backend_libs__compile_target_code__V_87_87;
    MR_Word backend_libs__compile_target_code__V_88_88;
    MR_Word backend_libs__compile_target_code__V_90_90;
    MR_Word backend_libs__compile_target_code__V_91_91;
    MR_Word backend_libs__compile_target_code__V_93_93;
    MR_Word backend_libs__compile_target_code__V_94_94;
    MR_Word backend_libs__compile_target_code__V_96_96;
    MR_Word backend_libs__compile_target_code__V_97_97;
    MR_Word backend_libs__compile_target_code__V_98_98;
    MR_Word backend_libs__compile_target_code__V_100_100;
    MR_Word backend_libs__compile_target_code__V_101_101;
    MR_Word backend_libs__compile_target_code__V_103_103;
    MR_Word backend_libs__compile_target_code__V_104_104;
    MR_Word backend_libs__compile_target_code__V_106_106;
    MR_Word backend_libs__compile_target_code__V_107_107;
    MR_Word backend_libs__compile_target_code__V_109_109;
    MR_Word backend_libs__compile_target_code__V_110_110;
    MR_Word backend_libs__compile_target_code__V_111_111;
    MR_Word backend_libs__compile_target_code__V_113_113;
    MR_Word backend_libs__compile_target_code__V_114_114;
    MR_Word backend_libs__compile_target_code__V_115_115;
    MR_Word backend_libs__compile_target_code__V_116_116;
    MR_Word backend_libs__compile_target_code__V_118_118;
    MR_Word backend_libs__compile_target_code__V_119_119;
    MR_Word backend_libs__compile_target_code__V_120_120;
    MR_Word backend_libs__compile_target_code__V_121_121;
    MR_Word backend_libs__compile_target_code__V_123_123;
    MR_Word backend_libs__compile_target_code__V_124_124;
    MR_Word backend_libs__compile_target_code__V_126_126;
    MR_Word backend_libs__compile_target_code__V_127_127;
    MR_Word backend_libs__compile_target_code__V_129_129;
    MR_Word backend_libs__compile_target_code__V_81_81;
    MR_Word backend_libs__compile_target_code__V_82_82;
    MR_String backend_libs__compile_target_code__V_83_83;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 487, &backend_libs__compile_target_code__C_Flags_List_7);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__C_Flags_List_7, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__CFLAGS_8);
    }
    {
      backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__CC_Specific_CFLAGS_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_10);
    }
    switch (backend_libs__compile_target_code__UseSubdirs_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__SubDirInclOpt_11 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__SubDirInclOpt_11 = (MR_String) "-I. ";
        break;
    }
    {
      backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__InclOpt_12);
    }
    {
      backend_libs__compile_target_code__get_framework_directories_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__FrameworkInclOpt_13);
    }
    {
      backend_libs__compile_target_code__gather_grade_defines_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GradeDefinesOpts_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 255, &backend_libs__compile_target_code__GCC_Regs_15);
    }
    switch (backend_libs__compile_target_code__GCC_Regs_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__CFLAGS_FOR_REGS_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 502, &backend_libs__compile_target_code__CFLAGS_FOR_REGS_16);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 254, &backend_libs__compile_target_code__GCC_Gotos_17);
    }
    switch (backend_libs__compile_target_code__GCC_Gotos_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 503, &backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 221, &backend_libs__compile_target_code__Parallel_19);
    }
    switch (backend_libs__compile_target_code__Parallel_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 504, &backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20);
          }
        }
        break;
    }
    switch (backend_libs__compile_target_code__PIC_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        backend_libs__compile_target_code__CFLAGS_FOR_PIC_21 = (MR_String) "";
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 507, &backend_libs__compile_target_code__CFLAGS_FOR_PIC_21);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 485, &backend_libs__compile_target_code__Target_Debug_22);
    }
    switch (backend_libs__compile_target_code__Target_Debug_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__Target_DebugOpt_24 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__Target_DebugOpt0_23;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 505, &backend_libs__compile_target_code__Target_DebugOpt0_23);
          }
          {
            backend_libs__compile_target_code__Target_DebugOpt_24 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Target_DebugOpt0_23, (MR_String) " ");
          }
        }
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 506, &backend_libs__compile_target_code__SanitizerOpts_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 223, &backend_libs__compile_target_code__UseTrail_26);
    }
    switch (backend_libs__compile_target_code__UseTrail_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__C_FnAlignOpt_32 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__C_CompilerType_27;

          {
            libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_27);
          }
          switch (MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__C_FnAlignOpt_32 = (MR_String) "";
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__compile_target_code__BytesPerWord_31;
                MR_String backend_libs__compile_target_code__V_132_132;
                MR_String backend_libs__compile_target_code__V_139_139;

                {
                  libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 246, &backend_libs__compile_target_code__BytesPerWord_31);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_3[3], backend_libs__compile_target_code__BytesPerWord_31, &backend_libs__compile_target_code__V_132_132);
                }
                {
                  backend_libs__compile_target_code__V_139_139 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__V_132_132, (MR_String) " ");
                }
                {
                  backend_libs__compile_target_code__C_FnAlignOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-falign-functions=", backend_libs__compile_target_code__V_139_139);
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              backend_libs__compile_target_code__C_FnAlignOpt_32 = (MR_String) "";
              break;
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 230, &backend_libs__compile_target_code__TypeLayoutOption_35);
    }
    switch (backend_libs__compile_target_code__TypeLayoutOption_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__TypeLayoutOpt_36 = (MR_String) "-DMR_NO_TYPE_LAYOUT ";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__TypeLayoutOpt_36 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 490, &backend_libs__compile_target_code__C_optimize_37);
    }
    switch (backend_libs__compile_target_code__C_optimize_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__OptimizeOpt_38 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 500, &backend_libs__compile_target_code__OptimizeOpt_38);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 491, &backend_libs__compile_target_code__Ansi_39);
    }
    switch (backend_libs__compile_target_code__Ansi_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__AnsiOpt_40 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 501, &backend_libs__compile_target_code__AnsiOpt_40);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 492, &backend_libs__compile_target_code__InlineAlloc_41);
    }
    switch (backend_libs__compile_target_code__InlineAlloc_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__InlineAllocOpt_42 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__InlineAllocOpt_42 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 32, &backend_libs__compile_target_code__Warn_43);
    }
    switch (backend_libs__compile_target_code__Warn_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__WarningOpt_44 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 499, &backend_libs__compile_target_code__WarningOpt_44);
          }
        }
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 659, &backend_libs__compile_target_code__TargetArch_45);
    }
    {
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, (MR_Integer) 258, (MR_Integer) 0);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__V_81_81 = (MR_Integer) 255;
        backend_libs__compile_target_code__V_82_82 = (MR_Integer) 1;
        {
          backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__V_81_81, backend_libs__compile_target_code__V_82_82);
        }
        if (backend_libs__compile_target_code__succeeded)
          {
            backend_libs__compile_target_code__V_83_83 = (MR_String) "powerpc-apple-darwin";
            {
              backend_libs__compile_target_code__succeeded = mercury__string__prefix_2_p_0(backend_libs__compile_target_code__TargetArch_45, backend_libs__compile_target_code__V_83_83);
            }
          }
      }
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_46 = (MR_String) "-fno-loop-optimize ";
    else
      backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_46 = (MR_String) "";
    {
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, (MR_Integer) 191, (MR_Integer) 1);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(backend_libs__compile_target_code__TargetArch_45);
      }
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__OverrideOpts_47 = (MR_String) "-O0";
    else
      backend_libs__compile_target_code__OverrideOpts_47 = (MR_String) "";
    {
      backend_libs__compile_target_code__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 0) = ((MR_Box) (backend_libs__compile_target_code__OverrideOpts_47));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 1) = ((MR_Box) (backend_libs__compile_target_code__V_129_129));
    }
    {
      backend_libs__compile_target_code__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 0) = ((MR_Box) (backend_libs__compile_target_code__CC_Specific_CFLAGS_9));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 1) = ((MR_Box) (backend_libs__compile_target_code__V_127_127));
    }
    {
      backend_libs__compile_target_code__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 1) = ((MR_Box) (backend_libs__compile_target_code__V_126_126));
    }
    {
      backend_libs__compile_target_code__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_123_123, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_8));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_123_123, 1) = ((MR_Box) (backend_libs__compile_target_code__V_124_124));
    }
    {
      backend_libs__compile_target_code__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 1) = ((MR_Box) (backend_libs__compile_target_code__V_123_123));
    }
    {
      backend_libs__compile_target_code__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 0) = ((MR_Box) (backend_libs__compile_target_code__WarningOpt_44));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 1) = ((MR_Box) (backend_libs__compile_target_code__V_121_121));
    }
    {
      backend_libs__compile_target_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 0) = ((MR_Box) (backend_libs__compile_target_code__C_FnAlignOpt_32));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 1) = ((MR_Box) (backend_libs__compile_target_code__V_120_120));
    }
    {
      backend_libs__compile_target_code__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 0) = ((MR_Box) (backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_46));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 1) = ((MR_Box) (backend_libs__compile_target_code__V_119_119));
    }
    {
      backend_libs__compile_target_code__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 1) = ((MR_Box) (backend_libs__compile_target_code__V_118_118));
    }
    {
      backend_libs__compile_target_code__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_115_115, 0) = ((MR_Box) (backend_libs__compile_target_code__AnsiOpt_40));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_115_115, 1) = ((MR_Box) (backend_libs__compile_target_code__V_116_116));
    }
    {
      backend_libs__compile_target_code__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_114_114, 0) = ((MR_Box) (backend_libs__compile_target_code__InlineAllocOpt_42));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_114_114, 1) = ((MR_Box) (backend_libs__compile_target_code__V_115_115));
    }
    {
      backend_libs__compile_target_code__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_113_113, 0) = ((MR_Box) (backend_libs__compile_target_code__TypeLayoutOpt_36));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_113_113, 1) = ((MR_Box) (backend_libs__compile_target_code__V_114_114));
    }
    {
      backend_libs__compile_target_code__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 1) = ((MR_Box) (backend_libs__compile_target_code__V_113_113));
    }
    {
      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__SanitizerOpts_25));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (backend_libs__compile_target_code__V_111_111));
    }
    {
      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__Target_DebugOpt_24));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
    }
    {
      backend_libs__compile_target_code__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 1) = ((MR_Box) (backend_libs__compile_target_code__V_109_109));
    }
    {
      backend_libs__compile_target_code__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_PIC_21));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 1) = ((MR_Box) (backend_libs__compile_target_code__V_107_107));
    }
    {
      backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
    }
    {
      backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
    }
    {
      backend_libs__compile_target_code__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
    }
    {
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_101_101));
    }
    {
      backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
    }
    {
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_REGS_16));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
    }
    {
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__GradeDefinesOpts_14));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
    }
    {
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
    }
    {
      backend_libs__compile_target_code__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 0) = ((MR_Box) (backend_libs__compile_target_code__OptimizeOpt_38));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
    }
    {
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_93_93));
    }
    {
      backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__FrameworkInclOpt_13));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
    }
    {
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_90_90));
    }
    {
      backend_libs__compile_target_code__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_12));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
    }
    {
      backend_libs__compile_target_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 0) = ((MR_Box) (backend_libs__compile_target_code__SubDirInclOpt_11));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 1) = ((MR_Box) (backend_libs__compile_target_code__V_87_87));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_86_86, backend_libs__compile_target_code__AllCFlags_6);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_18;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_18 = backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__339__1_1_f_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_18));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__referenced_dlls_2_f_0(
  MR_Word backend_libs__compile_target_code__Module_4,
  MR_Word backend_libs__compile_target_code__DepModules0_5)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Modules_6;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word backend_libs__compile_target_code__DepModules_7;

    {
      mercury__set__insert_3_p_0(backend_libs__compile_target_code__TypeCtorInfo_22_22, ((MR_Box) (backend_libs__compile_target_code__Module_4)), backend_libs__compile_target_code__DepModules0_5, &backend_libs__compile_target_code__DepModules_7);
    }
    {
      backend_libs__compile_target_code__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(backend_libs__compile_target_code__Module_4);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
        {
          mercury__set__insert_list_3_p_0(backend_libs__compile_target_code__TypeCtorInfo_22_22, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[2]), backend_libs__compile_target_code__DepModules_7, &backend_libs__compile_target_code__Modules_6);
        }
      }
    else
      {
        {
          backend_libs__compile_target_code__Modules_6 = mercury__set__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_22_22, backend_libs__compile_target_code__TypeCtorInfo_22_22, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[8], backend_libs__compile_target_code__DepModules_7);
        }
      }
    return backend_libs__compile_target_code__Modules_6;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv1_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv1_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv1_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Stream_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_54;
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_11;
    MR_String backend_libs__compile_target_code__LinkerPathFlag_12;
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_13;
    MR_String backend_libs__compile_target_code__RpathOpts_14;
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_15;
    MR_String backend_libs__compile_target_code__LinkLibraries_17;
    MR_String backend_libs__compile_target_code__MercuryStdLibs_18;
    MR_String backend_libs__compile_target_code__SystemLibs_19;
    MR_String backend_libs__compile_target_code__LinkFlags_20;
    MR_Word backend_libs__compile_target_code__V_31_31;
    MR_Word backend_libs__compile_target_code__V_32_32;
    MR_Word backend_libs__compile_target_code__V_34_34;
    MR_Word backend_libs__compile_target_code__V_35_35;
    MR_Word backend_libs__compile_target_code__V_37_37;
    MR_Word backend_libs__compile_target_code__V_38_38;
    MR_Word backend_libs__compile_target_code__V_40_40;
    MR_Word backend_libs__compile_target_code__V_41_41;
    MR_Word backend_libs__compile_target_code__V_43_43;
    MR_Word backend_libs__compile_target_code__V_52_52;
    MR_Word backend_libs__compile_target_code__UseInstallName_62;
    MR_Word backend_libs__compile_target_code__SharedLibsSupported_63;
    MR_String backend_libs__compile_target_code__Linkage_64;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 536, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 603, &backend_libs__compile_target_code__LinkerPathFlag_12);
    }
    backend_libs__compile_target_code__TypeCtorInfo_13_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_52_52 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_54, backend_libs__compile_target_code__TypeCtorInfo_13_54, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[6], backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_52_52, backend_libs__compile_target_code__LinkerPathFlag_12, (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_62);
    }
    {
      backend_libs__compile_target_code__shared_libraries_supported_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__SharedLibsSupported_63);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 552, &backend_libs__compile_target_code__Linkage_64);
    }
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_62 == (MR_Integer) 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__SharedLibsSupported_63 == (MR_Integer) 1);
        if (backend_libs__compile_target_code__succeeded)
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_64, (MR_String) "shared") == 0);
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_25_76;
        MR_Word backend_libs__compile_target_code__RpathDirs0_65;
        MR_Word backend_libs__compile_target_code__RpathDirs_66;

        {
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 537, &backend_libs__compile_target_code__RpathDirs0_65);
        }
        backend_libs__compile_target_code__TypeCtorInfo_25_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          backend_libs__compile_target_code__RpathDirs_66 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_25_76, backend_libs__compile_target_code__TypeCtorInfo_25_76, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[7], backend_libs__compile_target_code__RpathDirs0_65);
        }
        if ((backend_libs__compile_target_code__RpathDirs_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          backend_libs__compile_target_code__RpathOpts_14 = (MR_String) "";
        else
          {
            MR_String backend_libs__compile_target_code__RpathSep_69;
            MR_String backend_libs__compile_target_code__RpathFlag_70;
            MR_String backend_libs__compile_target_code__RpathOpts0_71;

            {
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 605, &backend_libs__compile_target_code__RpathSep_69);
            }
            {
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 604, &backend_libs__compile_target_code__RpathFlag_70);
            }
            {
              backend_libs__compile_target_code__RpathOpts0_71 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__RpathSep_69, backend_libs__compile_target_code__RpathDirs_66);
            }
            {
              backend_libs__compile_target_code__RpathOpts_14 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__RpathFlag_70, backend_libs__compile_target_code__RpathOpts0_71);
            }
          }
      }
    else
      backend_libs__compile_target_code__RpathOpts_14 = (MR_String) "";
    {
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__MaybeLinkLibraries_15);
    }
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__compile_target_code__LinkLibraries_17 = (MR_String) "";
    else
      {
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_15, (MR_Integer) 0)));

        {
          backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_16, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_17);
        }
      }
    {
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__MercuryStdLibs_18);
    }
    {
      backend_libs__compile_target_code__get_system_libs_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__SystemLibs_19);
    }
    {
      backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemLibs_19));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
    }
    {
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
    }
    {
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
    }
    {
      backend_libs__compile_target_code__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_17));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
    }
    {
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_37_37));
    }
    {
      backend_libs__compile_target_code__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 0) = ((MR_Box) (backend_libs__compile_target_code__RpathOpts_14));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
    }
    {
      backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_34_34));
    }
    {
      backend_libs__compile_target_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_13));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 1) = ((MR_Box) (backend_libs__compile_target_code__V_32_32));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_31_31, &backend_libs__compile_target_code__LinkFlags_20);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__LinkFlags_20);
    }
    {
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__935__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_12));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Stream_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_20_30;
    MR_String backend_libs__compile_target_code__InclOpts_8;
    MR_Word backend_libs__compile_target_code__C_Incl_Dirs_15;
    MR_Word backend_libs__compile_target_code__V_18_18;
    MR_Word backend_libs__compile_target_code__V_19_19;

    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 489, &backend_libs__compile_target_code__C_Incl_Dirs_15);
    }
    backend_libs__compile_target_code__TypeCtorInfo_20_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_19_19 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_30, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_5[5], backend_libs__compile_target_code__C_Incl_Dirs_15);
    }
    {
      backend_libs__compile_target_code__V_18_18 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_30, backend_libs__compile_target_code__V_19_19);
    }
    {
      backend_libs__compile_target_code__InclOpts_8 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_18_18);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__InclOpts_8);
    }
    {
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_grade_defines_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Stream_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__GradeDefines_9;

    {
      backend_libs__compile_target_code__gather_grade_defines_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__GradeDefines_9);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__GradeDefines_9);
    }
    {
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_Word backend_libs__compile_target_code__Stream_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__CFlags_9;

    {
      backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 1, &backend_libs__compile_target_code__CFlags_9);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__CFlags_9);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_standalone_interface_4_p_0(
  MR_Word backend_libs__compile_target_code__Globals_5,
  MR_String backend_libs__compile_target_code__Basename_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__HdrFileName_18;
    MR_Word backend_libs__compile_target_code__OpenResult_19;

    {
      backend_libs__compile_target_code__HdrFileName_18 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, (MR_String) ".h");
    }
    {
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__HdrFileName_18, &backend_libs__compile_target_code__OpenResult_19);
    }
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__OpenResult_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__compile_target_code__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__OpenResult_19, (MR_Integer) 0)));

        {
          parse_tree__error_util__unable_to_open_file_4_p_0(backend_libs__compile_target_code__HdrFileName_18, backend_libs__compile_target_code__Error_21);
        }
      }
    else
      {
        MR_Word backend_libs__compile_target_code__HdrFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__OpenResult_19, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__V_25_25;
        MR_Word backend_libs__compile_target_code__V_28_28;
        MR_String backend_libs__compile_target_code__V_29_29;
        MR_Word backend_libs__compile_target_code__V_30_30;
        MR_Word backend_libs__compile_target_code__V_32_32;
        MR_Word backend_libs__compile_target_code__V_34_34;
        MR_String backend_libs__compile_target_code__V_35_35;
        MR_Word backend_libs__compile_target_code__V_36_36;
        MR_Word backend_libs__compile_target_code__V_38_38;
        MR_Word backend_libs__compile_target_code__V_40_40;
        MR_Word backend_libs__compile_target_code__V_42_42;
        MR_Word backend_libs__compile_target_code__V_44_44;
        MR_Word backend_libs__compile_target_code__V_46_46;
        MR_Word backend_libs__compile_target_code__V_48_48;
        MR_Word backend_libs__compile_target_code__V_50_50;
        MR_Word backend_libs__compile_target_code__V_52_52;
        MR_Word backend_libs__compile_target_code__V_54_54;
        MR_Word backend_libs__compile_target_code__V_56_56;
        MR_Word backend_libs__compile_target_code__V_58_58;
        MR_Word backend_libs__compile_target_code__V_60_60;
        MR_Word backend_libs__compile_target_code__V_62_62;
        MR_Word backend_libs__compile_target_code__V_64_64;
        MR_Word backend_libs__compile_target_code__V_66_66;
        MR_Word backend_libs__compile_target_code__V_68_68;
        MR_Word backend_libs__compile_target_code__V_70_70;
        MR_String backend_libs__compile_target_code__V_71_71;

        {
          backend_libs__compile_target_code__V_29_29 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
        {
          backend_libs__compile_target_code__V_35_35 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
        {
          backend_libs__compile_target_code__V_71_71 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
        {
          backend_libs__compile_target_code__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 0) = ((MR_Box) (backend_libs__compile_target_code__V_71_71));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[9])));
        }
        {
          backend_libs__compile_target_code__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 0) = ((MR_Box) ((MR_String) "#endif /* "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 1) = ((MR_Box) (backend_libs__compile_target_code__V_70_70));
        }
        {
          backend_libs__compile_target_code__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 1) = ((MR_Box) (backend_libs__compile_target_code__V_68_68));
        }
        {
          backend_libs__compile_target_code__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 0) = ((MR_Box) ((MR_String) "#endif\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 1) = ((MR_Box) (backend_libs__compile_target_code__V_66_66));
        }
        {
          backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) ((MR_String) "}\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (backend_libs__compile_target_code__V_64_64));
        }
        {
          backend_libs__compile_target_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 1) = ((MR_Box) (backend_libs__compile_target_code__V_62_62));
        }
        {
          backend_libs__compile_target_code__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_58_58, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_58_58, 1) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
        }
        {
          backend_libs__compile_target_code__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 0) = ((MR_Box) ((MR_String) "mercury_terminate(void);\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 1) = ((MR_Box) (backend_libs__compile_target_code__V_58_58));
        }
        {
          backend_libs__compile_target_code__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 0) = ((MR_Box) ((MR_String) "extern int\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 1) = ((MR_Box) (backend_libs__compile_target_code__V_56_56));
        }
        {
          backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_54_54));
        }
        {
          backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) ((MR_String) "mercury_init(int argc, char **argv, void *stackbottom);\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
        }
        {
          backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) ((MR_String) "extern void\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
        }
        {
          backend_libs__compile_target_code__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
        }
        {
          backend_libs__compile_target_code__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_44_44, 0) = ((MR_Box) ((MR_String) "#endif\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_44_44, 1) = ((MR_Box) (backend_libs__compile_target_code__V_46_46));
        }
        {
          backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) ((MR_String) "extern \"C\" {\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
        }
        {
          backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
        }
        {
          backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
        }
        {
          backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) "_H\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
        }
        {
          backend_libs__compile_target_code__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 0) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
        }
        {
          backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) ((MR_String) "#define "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_34_34));
        }
        {
          backend_libs__compile_target_code__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 0) = ((MR_Box) ((MR_String) "_H\n"));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 1) = ((MR_Box) (backend_libs__compile_target_code__V_32_32));
        }
        {
          backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_30_30));
        }
        {
          backend_libs__compile_target_code__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 0) = ((MR_Box) ((MR_String) "#ifndef "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 1) = ((MR_Box) (backend_libs__compile_target_code__V_28_28));
        }
        {
          mercury__io__write_strings_4_p_0(backend_libs__compile_target_code__HdrFileStream_20, backend_libs__compile_target_code__V_25_25);
        }
        {
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__HdrFileStream_20);
        }
        {
          backend_libs__compile_target_code__make_standalone_int_body_4_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__Basename_6);
        }
      }
  }
}

MR_bool MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(
  MR_Word backend_libs__compile_target_code__Globals_1,
  MR_Word * backend_libs__compile_target_code__PIC_2,
  MR_String backend_libs__compile_target_code__Ext_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__V_14_14;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 509, &backend_libs__compile_target_code__V_14_14);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Ext_3, backend_libs__compile_target_code__V_14_14) == 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        *backend_libs__compile_target_code__PIC_2 = (MR_Integer) 1;
        backend_libs__compile_target_code__succeeded = MR_TRUE;
      }
    else
      {
        MR_String backend_libs__compile_target_code__V_15_15;

        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 510, &backend_libs__compile_target_code__V_15_15);
        }
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Ext_3, backend_libs__compile_target_code__V_15_15) == 0);
        if (backend_libs__compile_target_code__succeeded)
          {
            *backend_libs__compile_target_code__PIC_2 = (MR_Integer) 0;
            backend_libs__compile_target_code__succeeded = MR_TRUE;
          }
      }
    return backend_libs__compile_target_code__succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_1,
  MR_Word backend_libs__compile_target_code__PIC_2,
  MR_String * backend_libs__compile_target_code__Ext_3)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    switch (backend_libs__compile_target_code__PIC_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 509, backend_libs__compile_target_code__Ext_3);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 510, backend_libs__compile_target_code__Ext_3);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv2_HeadVar__2_2;

    {
      backend_libs__compile_target_code__conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_HeadVar__2_2));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_String backend_libs__compile_target_code__conv0_LambdaHeadVar__2_24;

    {
      backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3267__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_LambdaHeadVar__2_24);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_24));
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_String backend_libs__compile_target_code__Command0_9,
  MR_Word backend_libs__compile_target_code__MainModule_10,
  MR_Word backend_libs__compile_target_code__AllModules_11,
  MR_String * backend_libs__compile_target_code__Command_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_38_38;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_39_39;
    MR_Word backend_libs__compile_target_code__ModuleNameStrings_17;
    MR_Word backend_libs__compile_target_code__V_20_20;
    MR_Word backend_libs__compile_target_code__V_21_21;
    MR_Word backend_libs__compile_target_code__V_29_29;
    MR_Word backend_libs__compile_target_code__V_31_31;
    MR_Word backend_libs__compile_target_code__V_33_33;
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_19;

    {
      backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_8));
    }
    backend_libs__compile_target_code__TypeCtorInfo_38_38 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      backend_libs__compile_target_code__V_29_29 = mercury__list__delete_all_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_38_38, backend_libs__compile_target_code__AllModules_11, ((MR_Box) (backend_libs__compile_target_code__MainModule_10)));
    }
    {
      backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) (backend_libs__compile_target_code__MainModule_10));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
    }
    backend_libs__compile_target_code__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_foldl_5_p_2(backend_libs__compile_target_code__TypeCtorInfo_38_38, backend_libs__compile_target_code__TypeCtorInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_20_20, backend_libs__compile_target_code__V_21_21, &backend_libs__compile_target_code__ModuleNameStrings_17, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_19);
    }
    {
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) (backend_libs__compile_target_code__Command0_9));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__ModuleNameStrings_17));
    }
    {
      backend_libs__compile_target_code__V_31_31 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_39_39, backend_libs__compile_target_code__TypeCtorInfo_39_39, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[4], backend_libs__compile_target_code__V_33_33);
    }
    {
      *backend_libs__compile_target_code__Command_12 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_31_31);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__get_linked_target_type_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_Word * backend_libs__compile_target_code__LinkedTargetType_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MakeSharedLib_5;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 107, &backend_libs__compile_target_code__MakeSharedLib_5);
    }
    switch (backend_libs__compile_target_code__MakeSharedLib_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__LinkedTargetType_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        *backend_libs__compile_target_code__LinkedTargetType_4 = (MR_Integer) 2;
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__get_object_code_type_3_p_0(
  MR_Word backend_libs__compile_target_code__Globals_4,
  MR_Word backend_libs__compile_target_code__FileType_5,
  MR_Word * backend_libs__compile_target_code__ObjectCodeType_6)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;

    switch (backend_libs__compile_target_code__FileType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 8:
      case (MR_Integer) 7:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_String backend_libs__compile_target_code__PicObjExt_7;
          MR_String backend_libs__compile_target_code__ObjExt_8;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 510, &backend_libs__compile_target_code__PicObjExt_7);
          }
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_8);
          }
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__PicObjExt_7, backend_libs__compile_target_code__ObjExt_8) == 0);
          if (backend_libs__compile_target_code__succeeded)
            *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 1;
          else
            *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 0;
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__shared_libraries_supported_2_p_0(
  MR_Word backend_libs__compile_target_code__Globals_3,
  MR_Word * backend_libs__compile_target_code__Supported_4)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__LibExt_5;
    MR_String backend_libs__compile_target_code__SharedLibExt_6;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 568, &backend_libs__compile_target_code__LibExt_5);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 567, &backend_libs__compile_target_code__SharedLibExt_6);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LibExt_5, backend_libs__compile_target_code__SharedLibExt_6) == 0);
    backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
    if (backend_libs__compile_target_code__succeeded)
      *backend_libs__compile_target_code__Supported_4 = (MR_Integer) 1;
    else
      *backend_libs__compile_target_code__Supported_4 = (MR_Integer) 0;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_44;

    {
      backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1349__1_2_p_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_LambdaHeadVar__2_44);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_44));
  }
}

void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0(
  MR_Word backend_libs__compile_target_code__Modules_7,
  MR_Word backend_libs__compile_target_code__ExtraObjFiles_8,
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__OutputFileName0_12;
    MR_String backend_libs__compile_target_code__OutputFileName_15;
    MR_Word backend_libs__compile_target_code__MainModuleName_16;
    MR_Word backend_libs__compile_target_code__CompileToSharedLib_17;
    MR_Word backend_libs__compile_target_code__TargetType_18;
    MR_String backend_libs__compile_target_code__Obj_20;
    MR_Word backend_libs__compile_target_code__OutputStream_21;
    MR_Word backend_libs__compile_target_code__ObjectsList_22;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 531, &backend_libs__compile_target_code__OutputFileName0_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 107, &backend_libs__compile_target_code__CompileToSharedLib_17);
    }
    switch (backend_libs__compile_target_code__CompileToSharedLib_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__TargetType_18 = (MR_Integer) 0;
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 509, &backend_libs__compile_target_code__Obj_20);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__PicObjExt_94;
          MR_String backend_libs__compile_target_code__ObjExt_95;

          backend_libs__compile_target_code__TargetType_18 = (MR_Integer) 2;
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 510, &backend_libs__compile_target_code__PicObjExt_94);
          }
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_95);
          }
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__PicObjExt_94, backend_libs__compile_target_code__ObjExt_95) == 0);
          if (backend_libs__compile_target_code__succeeded)
            {
              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 509, &backend_libs__compile_target_code__Obj_20);
              }
            }
          else
            {
              {
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 510, &backend_libs__compile_target_code__Obj_20);
              }
            }
        }
        break;
    }
    {
      mercury__io__output_stream_3_p_0(&backend_libs__compile_target_code__OutputStream_21);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__OutputFileName0_12, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      {
        MR_String backend_libs__compile_target_code__Module_71;
        MR_Word backend_libs__compile_target_code__Modules_72;
        MR_String backend_libs__compile_target_code__FileName_74;
        MR_Word backend_libs__compile_target_code__FileNames_75;
        MR_Word backend_libs__compile_target_code__ModuleName_77;
        MR_String backend_libs__compile_target_code__V_80_80;

        if ((backend_libs__compile_target_code__Modules_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_module_list\'/6", (MR_String) "no modules");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__compile_target_code__V_14_14;

            backend_libs__compile_target_code__OutputFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 0)));
            backend_libs__compile_target_code__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 1)));
          }
        backend_libs__compile_target_code__Module_71 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 0)));
        backend_libs__compile_target_code__Modules_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 1)));
        {
          backend_libs__compile_target_code__V_80_80 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__Module_71);
        }
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_80_80, &backend_libs__compile_target_code__ModuleName_77);
        }
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_77, backend_libs__compile_target_code__Obj_20, (MR_Integer) 1, &backend_libs__compile_target_code__FileName_74);
        }
        {
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Modules_72, backend_libs__compile_target_code__Obj_20, &backend_libs__compile_target_code__FileNames_75);
        }
        {
          backend_libs__compile_target_code__ObjectsList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ObjectsList_22, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_74));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ObjectsList_22, 1) = ((MR_Box) (backend_libs__compile_target_code__FileNames_75));
        }
      }
    else
      {
        backend_libs__compile_target_code__OutputFileName_15 = backend_libs__compile_target_code__OutputFileName0_12;
        {
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Modules_7, backend_libs__compile_target_code__Obj_20, &backend_libs__compile_target_code__ObjectsList_22);
        }
      }
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__OutputFileName_15, &backend_libs__compile_target_code__MainModuleName_16);
    }
    switch (backend_libs__compile_target_code__TargetType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__compile_target_code__ModuleNames_25;
          MR_Word backend_libs__compile_target_code__InitObjResult_27;

          {
            mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[3], backend_libs__compile_target_code__Modules_7, &backend_libs__compile_target_code__ModuleNames_25);
          }
          {
            backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputStream_21, (MR_Integer) 1, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__ModuleNames_25, &backend_libs__compile_target_code__InitObjResult_27);
          }
          if ((backend_libs__compile_target_code__InitObjResult_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *backend_libs__compile_target_code__Succeeded_10 = (MR_Integer) 0;
          else
            {
              MR_Word backend_libs__compile_target_code__TypeCtorInfo_54_54;
              MR_String backend_libs__compile_target_code__InitObjFileName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitObjResult_27, (MR_Integer) 0)));
              MR_Word backend_libs__compile_target_code__ExtraLinkObjectsList_29;
              MR_Word backend_libs__compile_target_code__AllObjects0_30;
              MR_Word backend_libs__compile_target_code__AllObjects_31;
              MR_Word backend_libs__compile_target_code__V_48_48;

              {
                libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 540, &backend_libs__compile_target_code__ExtraLinkObjectsList_29);
              }
              backend_libs__compile_target_code__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                backend_libs__compile_target_code__V_48_48 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_54, backend_libs__compile_target_code__ExtraLinkObjectsList_29, backend_libs__compile_target_code__ExtraObjFiles_8);
              }
              {
                backend_libs__compile_target_code__AllObjects0_30 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_54, backend_libs__compile_target_code__ObjectsList_22, backend_libs__compile_target_code__V_48_48);
              }
              backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__InitObjFileName_28, (MR_String) "") == 0);
              if (backend_libs__compile_target_code__succeeded)
                backend_libs__compile_target_code__AllObjects_31 = backend_libs__compile_target_code__AllObjects0_30;
              else
                {
                  backend_libs__compile_target_code__AllObjects_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__AllObjects_31, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_28));
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__AllObjects_31, 1) = ((MR_Box) (backend_libs__compile_target_code__AllObjects0_30));
                }
              {
                backend_libs__compile_target_code__link_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputStream_21, backend_libs__compile_target_code__TargetType_18, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__AllObjects_31, backend_libs__compile_target_code__Succeeded_10);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word backend_libs__compile_target_code__TypeCtorInfo_54_114;
          MR_Word backend_libs__compile_target_code__ExtraLinkObjectsList_108;
          MR_Word backend_libs__compile_target_code__AllObjects_110;
          MR_Word backend_libs__compile_target_code__V_113_113;

          {
            libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 540, &backend_libs__compile_target_code__ExtraLinkObjectsList_108);
          }
          backend_libs__compile_target_code__TypeCtorInfo_54_114 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            backend_libs__compile_target_code__V_113_113 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_114, backend_libs__compile_target_code__ExtraLinkObjectsList_108, backend_libs__compile_target_code__ExtraObjFiles_8);
          }
          {
            backend_libs__compile_target_code__AllObjects_110 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_114, backend_libs__compile_target_code__ObjectsList_22, backend_libs__compile_target_code__V_113_113);
          }
          {
            backend_libs__compile_target_code__link_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputStream_21, backend_libs__compile_target_code__TargetType_18, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__AllObjects_110, backend_libs__compile_target_code__Succeeded_10);
          }
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__LinkTargetType_11,
  MR_Word backend_libs__compile_target_code__ModuleName_12,
  MR_Word * backend_libs__compile_target_code__Succeeded_13,
  MR_Word * backend_libs__compile_target_code__MadeSymlinkOrCopy_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_16;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_16);
    }
    switch (backend_libs__compile_target_code__UseGradeSubdirs_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *backend_libs__compile_target_code__Succeeded_13 = (MR_Integer) 1;
          *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__Ext_17;
          MR_String backend_libs__compile_target_code__OutputFileName_18;
          MR_Word backend_libs__compile_target_code__NoSubdirGlobals0_19;
          MR_Word backend_libs__compile_target_code__NoSubdirGlobals_20;
          MR_String backend_libs__compile_target_code__UserDirFileName_21;
          MR_Word backend_libs__compile_target_code__Succeeded0_23;
          MR_Word backend_libs__compile_target_code__V_40_40;
          MR_Word backend_libs__compile_target_code__MaybeCompare_71;
          MR_Word backend_libs__compile_target_code__TimeResultA_80;
          MR_Word backend_libs__compile_target_code__TimeResultB_81;
          MR_Word backend_libs__compile_target_code__TimeA_82;
          MR_Word backend_libs__compile_target_code__TimeB_83;
          MR_Word backend_libs__compile_target_code__V_73_73;

          {
            backend_libs__compile_target_code__link_output_filename_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, &backend_libs__compile_target_code__Ext_17, &backend_libs__compile_target_code__OutputFileName_18);
          }
          backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[2]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 640, backend_libs__compile_target_code__V_40_40, backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__NoSubdirGlobals0_19);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 641, backend_libs__compile_target_code__V_40_40, backend_libs__compile_target_code__NoSubdirGlobals0_19, &backend_libs__compile_target_code__NoSubdirGlobals_20);
          }
          switch (backend_libs__compile_target_code__LinkTargetType_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 7:
            case (MR_Integer) 0:
            case (MR_Integer) 6:
            case (MR_Integer) 5:
              {
                {
                  parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__NoSubdirGlobals_20, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__Ext_17, (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_21);
                }
              }
              break;
            case (MR_Integer) 8:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                {
                  parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__NoSubdirGlobals_20, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__Ext_17, (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_21);
                }
              }
              break;
          }
          {
            mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__OutputFileName_18, &backend_libs__compile_target_code__TimeResultA_80);
          }
          {
            mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__TimeResultB_81);
          }
          backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_80)) == (MR_mktag((MR_Integer) 0)));
          if (backend_libs__compile_target_code__succeeded)
            {
              backend_libs__compile_target_code__TimeA_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_80, (MR_Integer) 0)));
              backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_81)) == (MR_mktag((MR_Integer) 0)));
              if (backend_libs__compile_target_code__succeeded)
                backend_libs__compile_target_code__TimeB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_81, (MR_Integer) 0)));
            }
          if (backend_libs__compile_target_code__succeeded)
            {
              MR_Word backend_libs__compile_target_code__Compare_84;

              {
                mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_84, backend_libs__compile_target_code__TimeA_82, backend_libs__compile_target_code__TimeB_83);
              }
              {
                backend_libs__compile_target_code__MaybeCompare_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_71, 0) = ((MR_Box) (backend_libs__compile_target_code__Compare_84));
              }
            }
          else
            backend_libs__compile_target_code__MaybeCompare_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__MaybeCompare_71)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__compile_target_code__succeeded)
            {
              backend_libs__compile_target_code__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_71, (MR_Integer) 0)));
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_73_73 == (MR_Integer) 0);
            }
          if (backend_libs__compile_target_code__succeeded)
            {
              backend_libs__compile_target_code__Succeeded0_23 = (MR_Integer) 1;
              *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 0;
            }
          else
            {
              MR_Word backend_libs__compile_target_code__OutputStream_24;
              MR_Word backend_libs__compile_target_code__V_25_25;
              MR_Word backend_libs__compile_target_code__V_26_26;

              {
                mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ErrorStream_10, &backend_libs__compile_target_code__OutputStream_24);
              }
              {
                mercury__io__remove_file_recursively_4_p_0(backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__V_25_25);
              }
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_11 == (MR_Integer) 8);
              if (backend_libs__compile_target_code__succeeded)
                {
                  parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputFileName_18, backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__Succeeded0_23);
                }
              else
                {
                  parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputFileName_18, backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__Succeeded0_23);
                }
              {
                mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__OutputStream_24, &backend_libs__compile_target_code__V_26_26);
              }
              *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 1;
            }
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Succeeded0_23 == (MR_Integer) 1);
          if (backend_libs__compile_target_code__succeeded)
            switch (backend_libs__compile_target_code__LinkTargetType_11) {
              default:
                backend_libs__compile_target_code__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word backend_libs__compile_target_code__TargetEnvType_27;

                  {
                    libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__TargetEnvType_27);
                  }
                  backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__TargetEnvType_27 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 5:
                backend_libs__compile_target_code__succeeded = MR_TRUE;
                break;
            }
          if (backend_libs__compile_target_code__succeeded)
            {
              MR_String backend_libs__compile_target_code__ScriptExt_28;
              MR_String backend_libs__compile_target_code__OutputScriptName_29;
              MR_String backend_libs__compile_target_code__UserDirScriptName_30;
              MR_Word backend_libs__compile_target_code__ScriptSameTimestamp_31;
              MR_Word backend_libs__compile_target_code__TargetEnvType_90;

              {
                libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__TargetEnvType_90);
              }
              backend_libs__compile_target_code__ScriptExt_28 = ((&backend_libs__compile_target_code_vector_common_8[5 + backend_libs__compile_target_code__TargetEnvType_90]))->backend_libs__compile_target_code__vector_common_type_8_0__vct_8_f_0;
              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__ScriptExt_28, (MR_Integer) 1, &backend_libs__compile_target_code__OutputScriptName_29);
              }
              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__NoSubdirGlobals_20, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__ScriptExt_28, (MR_Integer) 1, &backend_libs__compile_target_code__UserDirScriptName_30);
              }
              {
                backend_libs__compile_target_code__same_timestamp_5_p_0(backend_libs__compile_target_code__OutputScriptName_29, backend_libs__compile_target_code__UserDirScriptName_30, &backend_libs__compile_target_code__ScriptSameTimestamp_31);
              }
              switch (backend_libs__compile_target_code__ScriptSameTimestamp_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word backend_libs__compile_target_code__ScriptOutputStream_32;
                    MR_Word backend_libs__compile_target_code__V_33_33;
                    MR_Word backend_libs__compile_target_code__V_34_34;

                    {
                      mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ErrorStream_10, &backend_libs__compile_target_code__ScriptOutputStream_32);
                    }
                    {
                      mercury__io__remove_file_recursively_4_p_0(backend_libs__compile_target_code__UserDirScriptName_30, &backend_libs__compile_target_code__V_33_33);
                    }
                    {
                      parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputScriptName_29, backend_libs__compile_target_code__UserDirScriptName_30, backend_libs__compile_target_code__Succeeded_13);
                    }
                    {
                      mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ScriptOutputStream_32, &backend_libs__compile_target_code__V_34_34);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  *backend_libs__compile_target_code__Succeeded_13 = (MR_Integer) 1;
                  break;
              }
            }
          else
            *backend_libs__compile_target_code__Succeeded_13 = backend_libs__compile_target_code__Succeeded0_23;
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__link_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__LinkTargetType_11,
  MR_Word backend_libs__compile_target_code__ModuleName_12,
  MR_Word backend_libs__compile_target_code__ObjectsList_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Verbose_16;
    MR_Word backend_libs__compile_target_code__Stats_17;
    MR_String backend_libs__compile_target_code__OutputFileName_19;
    MR_Word backend_libs__compile_target_code__LinkSucceeded_20;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 62, &backend_libs__compile_target_code__Stats_17);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Linking...\n");
    }
    switch (backend_libs__compile_target_code__LinkTargetType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, (MR_String) ".exe", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, (MR_String) ".dll", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 8:
        {
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_9, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_12, (MR_String) ".beams", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word backend_libs__compile_target_code__TargetEnvType_73;
          MR_String backend_libs__compile_target_code___Ext_76;

          {
            libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__TargetEnvType_73);
          }
          backend_libs__compile_target_code___Ext_76 = ((&backend_libs__compile_target_code_vector_common_8[0 + backend_libs__compile_target_code__TargetEnvType_73]))->backend_libs__compile_target_code__vector_common_type_8_0__vct_8_f_0;
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code___Ext_76, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String backend_libs__compile_target_code___Ext_77;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 569, &backend_libs__compile_target_code___Ext_77);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code___Ext_77, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 6:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, (MR_String) ".jar", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, (MR_String) ".jar", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String backend_libs__compile_target_code___Ext_80;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 567, &backend_libs__compile_target_code___Ext_80);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_9, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code___Ext_80, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code___Ext_81;

          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 568, &backend_libs__compile_target_code___Ext_81);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_9, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code___Ext_81, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
        }
        break;
    }
    switch (backend_libs__compile_target_code__LinkTargetType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 8:
        {
          backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 7:
        {
          parse_tree__module_cmds__create_erlang_shell_script_5_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 2:
        {
          backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            backend_libs__compile_target_code__create_archive_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__OutputFileName_19, (MR_Integer) 1, backend_libs__compile_target_code__ObjectsList_13, &backend_libs__compile_target_code__LinkSucceeded_20);
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
    }
    switch (backend_libs__compile_target_code__LinkSucceeded_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *backend_libs__compile_target_code__Succeeded_14 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code___MadeSymlinkOrCopy_21;

          {
            backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__LinkTargetType_11, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__Succeeded_14, &backend_libs__compile_target_code___MadeSymlinkOrCopy_21);
          }
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_erlang_program_init_file_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
  MR_Word backend_libs__compile_target_code__ModuleName_10,
  MR_Word backend_libs__compile_target_code__ModuleNames_11,
  MR_Word * backend_libs__compile_target_code__Result_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MustCompile_14;
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_15;
    MR_String backend_libs__compile_target_code__GradeDir_16;
    MR_Word backend_libs__compile_target_code__StdInitFileNames_18;
    MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_19;
    MR_Word backend_libs__compile_target_code__ErlangModuleName_21;
    MR_String backend_libs__compile_target_code__ModuleNameStr_22;
    MR_String backend_libs__compile_target_code__ModuleNameOption_23;
    MR_String backend_libs__compile_target_code__MkInitErl_24;
    MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_25;
    MR_String backend_libs__compile_target_code__InitObjFileName_26;
    MR_String backend_libs__compile_target_code__V_47_47;
    MR_String backend_libs__compile_target_code__V_51_51;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 618, &backend_libs__compile_target_code__MustCompile_14);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 547, &backend_libs__compile_target_code__MaybeStdLibDir_15);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_8, &backend_libs__compile_target_code__GradeDir_16);
    }
    if ((backend_libs__compile_target_code__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        backend_libs__compile_target_code__StdInitFileNames_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        backend_libs__compile_target_code__SourceDebugInitFileNames_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String backend_libs__compile_target_code__StdLibDir_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_15, (MR_Integer) 0)));
        MR_String backend_libs__compile_target_code__V_35_35;
        MR_String backend_libs__compile_target_code__V_36_36;
        MR_String backend_libs__compile_target_code__V_37_37;
        MR_String backend_libs__compile_target_code__V_41_41;
        MR_String backend_libs__compile_target_code__V_42_42;
        MR_String backend_libs__compile_target_code__V_43_43;

        {
          backend_libs__compile_target_code__V_37_37 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_17, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_36_36 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_37_37, backend_libs__compile_target_code__GradeDir_16);
        }
        {
          backend_libs__compile_target_code__V_35_35 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_36_36, (MR_String) "mer_std.init");
        }
        {
          backend_libs__compile_target_code__StdInitFileNames_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_18, 0) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          backend_libs__compile_target_code__V_43_43 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_17, (MR_String) "modules");
        }
        {
          backend_libs__compile_target_code__V_42_42 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_43_43, backend_libs__compile_target_code__GradeDir_16);
        }
        {
          backend_libs__compile_target_code__V_41_41 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_42_42, (MR_String) "mer_ssdb.init");
        }
        {
          backend_libs__compile_target_code__SourceDebugInitFileNames_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_19, 0) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      backend_libs__compile_target_code__ErlangModuleName_21 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(backend_libs__compile_target_code__ModuleName_10);
    }
    {
      backend_libs__compile_target_code__V_47_47 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(backend_libs__compile_target_code__ErlangModuleName_21, (MR_String) "__");
    }
    {
      backend_libs__compile_target_code__ModuleNameStr_22 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__V_47_47, (MR_String) "_init");
    }
    {
      backend_libs__compile_target_code__V_51_51 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__ModuleNameStr_22);
    }
    {
      backend_libs__compile_target_code__ModuleNameOption_23 = mercury__string__f_43_43_2_f_0((MR_String) " -m ", backend_libs__compile_target_code__V_51_51);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 578, &backend_libs__compile_target_code__MkInitErl_24);
    }
    {
      backend_libs__compile_target_code__make_init_target_file_13_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MkInitErl_24, backend_libs__compile_target_code__ModuleName_10, backend_libs__compile_target_code__ModuleNames_11, (MR_String) ".erl", backend_libs__compile_target_code__StdInitFileNames_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__SourceDebugInitFileNames_19, backend_libs__compile_target_code__ModuleNameOption_23, &backend_libs__compile_target_code__MaybeInitTargetFile_25);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, (MR_String) "_init.beam", (MR_Integer) 0, &backend_libs__compile_target_code__InitObjFileName_26);
    }
    {
      backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__MaybeInitTargetFile_25, backend_libs__compile_target_code__MustCompile_14, backend_libs__compile_target_code__InitObjFileName_26, backend_libs__compile_target_code__Result_12);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_init_obj_file_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
  MR_Word backend_libs__compile_target_code__ModuleName_10,
  MR_Word backend_libs__compile_target_code__ModuleNames_11,
  MR_Word * backend_libs__compile_target_code__Result_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__MustCompile_14;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 618, &backend_libs__compile_target_code__MustCompile_14);
    }
    {
      backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MustCompile_14, backend_libs__compile_target_code__ModuleName_10, backend_libs__compile_target_code__ModuleNames_11, backend_libs__compile_target_code__Result_12);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_erlang_library_init_file_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
  MR_Word backend_libs__compile_target_code__MainModuleName_10,
  MR_Word backend_libs__compile_target_code__AllModules_11,
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__MkInit_14;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 578, &backend_libs__compile_target_code__MkInit_14);
    }
    {
      backend_libs__compile_target_code__make_library_init_file_2_9_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MainModuleName_10, backend_libs__compile_target_code__AllModules_11, (MR_String) ".erl", backend_libs__compile_target_code__MkInit_14, backend_libs__compile_target_code__Succeeded_12);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
  MR_Word backend_libs__compile_target_code__MainModuleName_10,
  MR_Word backend_libs__compile_target_code__AllModules_11,
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__MkInit_14;

    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 577, &backend_libs__compile_target_code__MkInit_14);
    }
    {
      backend_libs__compile_target_code__make_library_init_file_2_9_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MainModuleName_10, backend_libs__compile_target_code__AllModules_11, (MR_String) ".c", backend_libs__compile_target_code__MkInit_14, backend_libs__compile_target_code__Succeeded_12);
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_53;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_53 = backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1144__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_53));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0(
  MR_Word backend_libs__compile_target_code__Globals_7,
  MR_Word backend_libs__compile_target_code__ErrorStream_8,
  MR_String backend_libs__compile_target_code__ErlangFile_9,
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_88_88;
    MR_Word backend_libs__compile_target_code__Verbose_12;
    MR_String backend_libs__compile_target_code__ErlangCompiler_13;
    MR_Word backend_libs__compile_target_code__ErlangFlagsList0_14;
    MR_Word backend_libs__compile_target_code__ErlangNativeCode_15;
    MR_Word backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16;
    MR_Word backend_libs__compile_target_code__ErlangFlagsList1_17;
    MR_Word backend_libs__compile_target_code__ErlangFlagsList_18;
    MR_String backend_libs__compile_target_code__ERLANGFLAGS_19;
    MR_Word backend_libs__compile_target_code__Erlang_Incl_Dirs_20;
    MR_String backend_libs__compile_target_code__InclOpt_21;
    MR_Word backend_libs__compile_target_code__UseSubdirs_23;
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_24;
    MR_String backend_libs__compile_target_code__TargetArch_25;
    MR_String backend_libs__compile_target_code__DestDir_29;
    MR_String backend_libs__compile_target_code__Command_30;
    MR_Word backend_libs__compile_target_code__V_49_49;
    MR_Word backend_libs__compile_target_code__V_50_50;
    MR_Word backend_libs__compile_target_code__V_75_75;
    MR_Word backend_libs__compile_target_code__V_76_76;
    MR_Word backend_libs__compile_target_code__V_78_78;
    MR_Word backend_libs__compile_target_code__V_79_79;
    MR_Word backend_libs__compile_target_code__V_80_80;
    MR_Word backend_libs__compile_target_code__V_81_81;
    MR_Word backend_libs__compile_target_code__V_83_83;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, (MR_String) "% Compiling \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, backend_libs__compile_target_code__ErlangFile_9);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, (MR_String) "\':\n");
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 523, &backend_libs__compile_target_code__ErlangCompiler_13);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 525, &backend_libs__compile_target_code__ErlangFlagsList0_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 529, &backend_libs__compile_target_code__ErlangNativeCode_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 530, &backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16);
    }
    switch (backend_libs__compile_target_code__ErlangNativeCode_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ErlangFlagsList1_17 = backend_libs__compile_target_code__ErlangFlagsList0_14;
        break;
      case (MR_Integer) 1:
        {
          {
            backend_libs__compile_target_code__ErlangFlagsList1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList1_17, 0) = ((MR_Box) ((MR_String) "+native"));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList1_17, 1) = ((MR_Box) (backend_libs__compile_target_code__ErlangFlagsList0_14));
          }
        }
        break;
    }
    switch (backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__ErlangFlagsList_18 = backend_libs__compile_target_code__ErlangFlagsList1_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__V_45_45;

          {
            backend_libs__compile_target_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_function"));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 1) = ((MR_Box) (backend_libs__compile_target_code__ErlangFlagsList1_17));
          }
          {
            backend_libs__compile_target_code__ErlangFlagsList_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList_18, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_vars"));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList_18, 1) = ((MR_Box) (backend_libs__compile_target_code__V_45_45));
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__ERLANGFLAGS_19 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__ErlangFlagsList_18);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 527, &backend_libs__compile_target_code__Erlang_Incl_Dirs_20);
    }
    backend_libs__compile_target_code__TypeCtorInfo_88_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      backend_libs__compile_target_code__V_50_50 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_88_88, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_5[2], backend_libs__compile_target_code__Erlang_Incl_Dirs_20);
    }
    {
      backend_libs__compile_target_code__V_49_49 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_88_88, backend_libs__compile_target_code__V_50_50);
    }
    {
      backend_libs__compile_target_code__InclOpt_21 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_49_49);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_24);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 659, &backend_libs__compile_target_code__TargetArch_25);
    }
    switch (backend_libs__compile_target_code__UseSubdirs_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DestDir_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__DirName_27;
          MR_String backend_libs__compile_target_code__V_73_73;
          MR_Word backend_libs__compile_target_code__V_28_28;

          switch (backend_libs__compile_target_code__UseGradeSubdirs_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  backend_libs__compile_target_code__DirName_27 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "beams");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String backend_libs__compile_target_code__Grade_26;
                MR_String backend_libs__compile_target_code__V_65_65;
                MR_String backend_libs__compile_target_code__V_66_66;
                MR_String backend_libs__compile_target_code__V_67_67;

                {
                  libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_7, &backend_libs__compile_target_code__Grade_26);
                }
                {
                  backend_libs__compile_target_code__V_67_67 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_26);
                }
                {
                  backend_libs__compile_target_code__V_66_66 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_67_67, backend_libs__compile_target_code__TargetArch_25);
                }
                {
                  backend_libs__compile_target_code__V_65_65 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_66_66, (MR_String) "Mercury");
                }
                {
                  backend_libs__compile_target_code__DirName_27 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_65_65, (MR_String) "beams");
                }
              }
              break;
          }
          {
            mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__DirName_27, &backend_libs__compile_target_code__V_28_28);
          }
          {
            backend_libs__compile_target_code__V_73_73 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__DirName_27, (MR_String) " ");
          }
          {
            backend_libs__compile_target_code__DestDir_29 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", backend_libs__compile_target_code__V_73_73);
          }
        }
        break;
    }
    {
      backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__ErlangFile_9));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_81_81, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_81_81, 1) = ((MR_Box) (backend_libs__compile_target_code__V_83_83));
    }
    {
      backend_libs__compile_target_code__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_80_80, 0) = ((MR_Box) (backend_libs__compile_target_code__ERLANGFLAGS_19));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_80_80, 1) = ((MR_Box) (backend_libs__compile_target_code__V_81_81));
    }
    {
      backend_libs__compile_target_code__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 0) = ((MR_Box) (backend_libs__compile_target_code__DestDir_29));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 1) = ((MR_Box) (backend_libs__compile_target_code__V_80_80));
    }
    {
      backend_libs__compile_target_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_21));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 1) = ((MR_Box) (backend_libs__compile_target_code__V_79_79));
    }
    {
      backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (backend_libs__compile_target_code__V_78_78));
    }
    {
      backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__ErlangCompiler_13));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_75_75, &backend_libs__compile_target_code__Command_30);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_7, backend_libs__compile_target_code__ErrorStream_8, (MR_Integer) 1, backend_libs__compile_target_code__Command_30, backend_libs__compile_target_code__Succeeded_10);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
{
  {
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv2_LambdaHeadVar__2_81;

    {
      backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__303__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv2_LambdaHeadVar__2_81);
    }
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_LambdaHeadVar__2_81));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv1_LambdaHeadVar__2_74;

    {
      backend_libs__compile_target_code__conv1_LambdaHeadVar__2_74 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__295__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv1_LambdaHeadVar__2_74));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
    MR_Word backend_libs__compile_target_code__conv0_LambdaHeadVar__2_66;

    {
      backend_libs__compile_target_code__conv0_LambdaHeadVar__2_66 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__284__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_LambdaHeadVar__2_66));
    return backend_libs__compile_target_code__wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__ModuleAndImports_11,
  MR_String backend_libs__compile_target_code__CSharpFileName0_12,
  MR_String backend_libs__compile_target_code__DLLFileName_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_217_217;
    MR_Word backend_libs__compile_target_code__TypeInfo_218_218;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_219_219;
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_220_220;
    MR_Word backend_libs__compile_target_code__Verbose_16;
    MR_String backend_libs__compile_target_code__CSharpFileName_17;
    MR_String backend_libs__compile_target_code__CSC_18;
    MR_Word backend_libs__compile_target_code__CSCFlagsList_19;
    MR_String backend_libs__compile_target_code__CSCFlags_20;
    MR_Word backend_libs__compile_target_code__Debug_21;
    MR_String backend_libs__compile_target_code__DebugOpt_22;
    MR_Word backend_libs__compile_target_code__DLLDirs_23;
    MR_String backend_libs__compile_target_code__DLLDirOpts_24;
    MR_Word backend_libs__compile_target_code__ModuleName_26;
    MR_String backend_libs__compile_target_code__Prefix_27;
    MR_Word backend_libs__compile_target_code__ForeignImportModules_28;
    MR_Word backend_libs__compile_target_code__ForeignDeps_29;
    MR_Word backend_libs__compile_target_code__IntDeps_31;
    MR_Word backend_libs__compile_target_code__ImpDeps_32;
    MR_Word backend_libs__compile_target_code__IntImpDeps_33;
    MR_Word backend_libs__compile_target_code__IntImpForeignDeps_34;
    MR_Word backend_libs__compile_target_code__ReferencedDlls_35;
    MR_Word backend_libs__compile_target_code__ReferencedDllsList_40;
    MR_String backend_libs__compile_target_code__ReferencedDllsStr_41;
    MR_String backend_libs__compile_target_code__Command_42;
    MR_String backend_libs__compile_target_code__V_61_61;
    MR_Word backend_libs__compile_target_code__V_62_62;
    MR_Word backend_libs__compile_target_code__V_63_63;
    MR_Word backend_libs__compile_target_code__V_72_72;
    MR_Word backend_libs__compile_target_code__V_75_75;
    MR_Word backend_libs__compile_target_code__V_76_76;
    MR_Word backend_libs__compile_target_code__V_77_77;
    MR_Word backend_libs__compile_target_code__V_78_78;
    MR_Word backend_libs__compile_target_code__V_90_90;
    MR_Word backend_libs__compile_target_code__V_91_91;
    MR_Word backend_libs__compile_target_code__V_92_92;
    MR_Word backend_libs__compile_target_code__V_93_93;
    MR_Word backend_libs__compile_target_code__V_95_95;
    MR_Word backend_libs__compile_target_code__V_96_96;
    MR_Word backend_libs__compile_target_code__V_97_97;
    MR_Word backend_libs__compile_target_code__V_98_98;
    MR_Word backend_libs__compile_target_code__V_100_100;
    MR_Word backend_libs__compile_target_code__V_101_101;
    MR_Word backend_libs__compile_target_code__V_103_103;
    MR_String backend_libs__compile_target_code__V_113_113;
    MR_Word backend_libs__compile_target_code__V_114_114;
    MR_Word backend_libs__compile_target_code__V_115_115;
    MR_Word backend_libs__compile_target_code__V_116_116;
    MR_Word backend_libs__compile_target_code__V_117_117;
    MR_Word backend_libs__compile_target_code__V_118_118;
    MR_Word backend_libs__compile_target_code__V_119_119;
    MR_Word backend_libs__compile_target_code__V_120_120;
    MR_Word backend_libs__compile_target_code__V_121_121;
    MR_Word backend_libs__compile_target_code__V_122_122;
    MR_Word backend_libs__compile_target_code__V_123_123;
    MR_Word backend_libs__compile_target_code__V_124_124;
    MR_Word backend_libs__compile_target_code__V_125_125;
    MR_Word backend_libs__compile_target_code__V_126_126;
    MR_Word backend_libs__compile_target_code__V_127_127;
    MR_Word backend_libs__compile_target_code__V_128_128;
    MR_Word backend_libs__compile_target_code__V_129_129;
    MR_Word backend_libs__compile_target_code__V_130_130;
    MR_Word backend_libs__compile_target_code__V_131_131;
    MR_Word backend_libs__compile_target_code__V_132_132;
    MR_Word backend_libs__compile_target_code__V_133_133;
    MR_Word backend_libs__compile_target_code__V_134_134;
    MR_Word backend_libs__compile_target_code__V_135_135;
    MR_Word backend_libs__compile_target_code__V_136_136;
    MR_Word backend_libs__compile_target_code__V_137_137;
    MR_String backend_libs__compile_target_code__V_138_138;
    MR_String backend_libs__compile_target_code__V_139_139;
    MR_Word backend_libs__compile_target_code__V_140_140;
    MR_Word backend_libs__compile_target_code__V_141_141;
    MR_Word backend_libs__compile_target_code__V_142_142;
    MR_Word backend_libs__compile_target_code__V_143_143;
    MR_Word backend_libs__compile_target_code__V_144_144;
    MR_Word backend_libs__compile_target_code__V_145_145;
    MR_Word backend_libs__compile_target_code__V_146_146;
    MR_Word backend_libs__compile_target_code__V_147_147;
    MR_Word backend_libs__compile_target_code__V_148_148;
    MR_Word backend_libs__compile_target_code__V_149_149;
    MR_Word backend_libs__compile_target_code__V_150_150;
    MR_Word backend_libs__compile_target_code__V_151_151;
    MR_Word backend_libs__compile_target_code__V_152_152;
    MR_Word backend_libs__compile_target_code__V_153_153;
    MR_Word backend_libs__compile_target_code__V_154_154;
    MR_Word backend_libs__compile_target_code__V_155_155;
    MR_Word backend_libs__compile_target_code__V_156_156;
    MR_Word backend_libs__compile_target_code__V_157_157;
    MR_Word backend_libs__compile_target_code__V_158_158;
    MR_Word backend_libs__compile_target_code__V_159_159;
    MR_Word backend_libs__compile_target_code__V_160_160;
    MR_Word backend_libs__compile_target_code__V_161_161;
    MR_Word backend_libs__compile_target_code__V_162_162;
    MR_Word backend_libs__compile_target_code__V_163_163;
    MR_String backend_libs__compile_target_code__V_164_164;
    MR_String backend_libs__compile_target_code__V_165_165;
    MR_Word backend_libs__compile_target_code__V_166_166;
    MR_Word backend_libs__compile_target_code__V_167_167;
    MR_Word backend_libs__compile_target_code__V_168_168;
    MR_Word backend_libs__compile_target_code__V_169_169;
    MR_Word backend_libs__compile_target_code__V_171_171;
    MR_Word backend_libs__compile_target_code__V_172_172;
    MR_Word backend_libs__compile_target_code__V_173_173;
    MR_Word backend_libs__compile_target_code__V_174_174;
    MR_Word backend_libs__compile_target_code__V_175_175;
    MR_Word backend_libs__compile_target_code__V_176_176;
    MR_Word backend_libs__compile_target_code__V_177_177;
    MR_Word backend_libs__compile_target_code__V_178_178;
    MR_Word backend_libs__compile_target_code__V_179_179;
    MR_Word backend_libs__compile_target_code__V_180_180;
    MR_Word backend_libs__compile_target_code__V_181_181;
    MR_Word backend_libs__compile_target_code__V_182_182;
    MR_Word backend_libs__compile_target_code__V_183_183;
    MR_Word backend_libs__compile_target_code__V_184_184;
    MR_Word backend_libs__compile_target_code__V_185_185;
    MR_Word backend_libs__compile_target_code__V_186_186;
    MR_Word backend_libs__compile_target_code__V_187_187;
    MR_Word backend_libs__compile_target_code__V_188_188;
    MR_Word backend_libs__compile_target_code__V_189_189;
    MR_String backend_libs__compile_target_code__V_190_190;
    MR_Box backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_79_79;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_16);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling \140");
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 519, &backend_libs__compile_target_code__CSC_18);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 520, &backend_libs__compile_target_code__CSCFlagsList_19);
    }
    {
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__CSCFlagsList_19, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__CSCFlags_20);
    }
    {
      backend_libs__compile_target_code__CSharpFileName_17 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__CSharpFileName0_12, (MR_String) "/", (MR_String) "\\\\");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, backend_libs__compile_target_code__CSharpFileName_17);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "\':\n");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 485, &backend_libs__compile_target_code__Debug_21);
    }
    switch (backend_libs__compile_target_code__Debug_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DebugOpt_22 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__DebugOpt_22 = (MR_String) "";
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 536, &backend_libs__compile_target_code__DLLDirs_23);
    }
    backend_libs__compile_target_code__TypeCtorInfo_217_217 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    backend_libs__compile_target_code__TypeInfo_218_218 = (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0];
    {
      backend_libs__compile_target_code__V_63_63 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_217_217, backend_libs__compile_target_code__TypeInfo_218_218, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[1], backend_libs__compile_target_code__DLLDirs_23);
    }
    {
      backend_libs__compile_target_code__V_62_62 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_217_217, backend_libs__compile_target_code__V_63_63);
    }
    {
      backend_libs__compile_target_code__V_61_61 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_62_62);
    }
    {
      backend_libs__compile_target_code__DLLDirOpts_24 = mercury__string__f_43_43_2_f_0((MR_String) "-lib:Mercury/dlls ", backend_libs__compile_target_code__V_61_61);
    }
    backend_libs__compile_target_code__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 0)));
    backend_libs__compile_target_code__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 1)));
    backend_libs__compile_target_code__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 2)));
    backend_libs__compile_target_code__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 3)));
    backend_libs__compile_target_code__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 4)));
    backend_libs__compile_target_code__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 5)));
    backend_libs__compile_target_code__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 6)));
    backend_libs__compile_target_code__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 7)));
    backend_libs__compile_target_code__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 8)));
    backend_libs__compile_target_code__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 9)));
    backend_libs__compile_target_code__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 10)));
    backend_libs__compile_target_code__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 11)));
    backend_libs__compile_target_code__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 12)));
    backend_libs__compile_target_code__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 13)));
    backend_libs__compile_target_code__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 14)));
    backend_libs__compile_target_code__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 15)));
    backend_libs__compile_target_code__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 16)));
    backend_libs__compile_target_code__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 17)));
    backend_libs__compile_target_code__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 18)));
    backend_libs__compile_target_code__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 19)));
    backend_libs__compile_target_code__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 20)));
    backend_libs__compile_target_code__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 21)));
    backend_libs__compile_target_code__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 22)));
    backend_libs__compile_target_code__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 23)));
    backend_libs__compile_target_code__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 24)));
    backend_libs__compile_target_code__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 25)));
    backend_libs__compile_target_code__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 26)));
    {
      backend_libs__compile_target_code__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(backend_libs__compile_target_code__ModuleName_26);
    }
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__Prefix_27 = (MR_String) "-addmodule:";
    else
      backend_libs__compile_target_code__Prefix_27 = (MR_String) "-r:";
    backend_libs__compile_target_code__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 0)));
    backend_libs__compile_target_code__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 1)));
    backend_libs__compile_target_code__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 2)));
    backend_libs__compile_target_code__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 3)));
    backend_libs__compile_target_code__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 4)));
    backend_libs__compile_target_code__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 5)));
    backend_libs__compile_target_code__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 6)));
    backend_libs__compile_target_code__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 7)));
    backend_libs__compile_target_code__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 8)));
    backend_libs__compile_target_code__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 9)));
    backend_libs__compile_target_code__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 10)));
    backend_libs__compile_target_code__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 11)));
    backend_libs__compile_target_code__ForeignImportModules_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 12)));
    backend_libs__compile_target_code__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 13)));
    backend_libs__compile_target_code__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 14)));
    backend_libs__compile_target_code__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 15)));
    backend_libs__compile_target_code__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 16)));
    backend_libs__compile_target_code__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 17)));
    backend_libs__compile_target_code__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 18)));
    backend_libs__compile_target_code__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 19)));
    backend_libs__compile_target_code__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 20)));
    backend_libs__compile_target_code__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 21)));
    backend_libs__compile_target_code__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 22)));
    backend_libs__compile_target_code__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 23)));
    backend_libs__compile_target_code__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 24)));
    backend_libs__compile_target_code__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 25)));
    backend_libs__compile_target_code__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 26)));
    backend_libs__compile_target_code__TypeCtorInfo_219_219 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;
    backend_libs__compile_target_code__TypeCtorInfo_220_220 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      backend_libs__compile_target_code__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_72_72, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_72_72, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_72_72, 3) = ((MR_Box) (backend_libs__compile_target_code__ModuleName_26));
    }
    {
      backend_libs__compile_target_code__V_76_76 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(backend_libs__compile_target_code__ForeignImportModules_28);
    }
    {
      backend_libs__compile_target_code__V_75_75 = mercury__set__to_sorted_list_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_219_219, backend_libs__compile_target_code__V_76_76);
    }
    {
      backend_libs__compile_target_code__ForeignDeps_29 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_219_219, backend_libs__compile_target_code__TypeCtorInfo_220_220, backend_libs__compile_target_code__V_72_72, backend_libs__compile_target_code__V_75_75);
    }
    backend_libs__compile_target_code__V_165_165 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 0)));
    backend_libs__compile_target_code__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 1)));
    backend_libs__compile_target_code__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 2)));
    backend_libs__compile_target_code__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 3)));
    backend_libs__compile_target_code__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 4)));
    backend_libs__compile_target_code__IntDeps_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 5)));
    backend_libs__compile_target_code__ImpDeps_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 6)));
    backend_libs__compile_target_code__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 7)));
    backend_libs__compile_target_code__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 8)));
    backend_libs__compile_target_code__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 9)));
    backend_libs__compile_target_code__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 10)));
    backend_libs__compile_target_code__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 11)));
    backend_libs__compile_target_code__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 12)));
    backend_libs__compile_target_code__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 13)));
    backend_libs__compile_target_code__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 14)));
    backend_libs__compile_target_code__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 15)));
    backend_libs__compile_target_code__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 16)));
    backend_libs__compile_target_code__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 17)));
    backend_libs__compile_target_code__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 18)));
    backend_libs__compile_target_code__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 19)));
    backend_libs__compile_target_code__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 20)));
    backend_libs__compile_target_code__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 21)));
    backend_libs__compile_target_code__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 22)));
    backend_libs__compile_target_code__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 23)));
    backend_libs__compile_target_code__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 24)));
    backend_libs__compile_target_code__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 25)));
    backend_libs__compile_target_code__V_190_190 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__ModuleAndImports_11, (MR_Integer) 26)));
    {
      mercury__set__union_3_p_0(backend_libs__compile_target_code__TypeCtorInfo_220_220, backend_libs__compile_target_code__IntDeps_31, backend_libs__compile_target_code__ImpDeps_32, &backend_libs__compile_target_code__IntImpDeps_33);
    }
    {
      mercury__set__insert_list_3_p_0(backend_libs__compile_target_code__TypeCtorInfo_220_220, backend_libs__compile_target_code__ForeignDeps_29, backend_libs__compile_target_code__IntImpDeps_33, &backend_libs__compile_target_code__IntImpForeignDeps_34);
    }
    {
      backend_libs__compile_target_code__ReferencedDlls_35 = backend_libs__compile_target_code__referenced_dlls_2_f_0(backend_libs__compile_target_code__ModuleName_26, backend_libs__compile_target_code__IntImpForeignDeps_34);
    }
    {
      backend_libs__compile_target_code__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_3));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_9));
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 4) = ((MR_Box) (backend_libs__compile_target_code__Prefix_27));
    }
    {
      backend_libs__compile_target_code__V_78_78 = mercury__set__to_sorted_list_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_220_220, backend_libs__compile_target_code__ReferencedDlls_35);
    }
    {
      mercury__list__map_foldl_5_p_2(backend_libs__compile_target_code__TypeCtorInfo_220_220, backend_libs__compile_target_code__TypeInfo_218_218, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_77_77, backend_libs__compile_target_code__V_78_78, &backend_libs__compile_target_code__ReferencedDllsList_40, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_79_79);
    }
    {
      backend_libs__compile_target_code__V_90_90 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_217_217, backend_libs__compile_target_code__ReferencedDllsList_40);
    }
    {
      backend_libs__compile_target_code__ReferencedDllsStr_41 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_90_90);
    }
    {
      backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) (backend_libs__compile_target_code__CSharpFileName_17));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
    }
    {
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) (backend_libs__compile_target_code__DLLFileName_13));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_101_101));
    }
    {
      backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) ((MR_String) " -out:"));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
    }
    {
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__ReferencedDllsStr_41));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
    }
    {
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__CSCFlags_20));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
    }
    {
      backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) (backend_libs__compile_target_code__DLLDirOpts_24));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
    }
    {
      backend_libs__compile_target_code__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 0) = ((MR_Box) ((MR_String) " -t:library "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
    }
    {
      backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpt_22));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_93_93));
    }
    {
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (backend_libs__compile_target_code__CSC_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_91_91, &backend_libs__compile_target_code__Command_42);
    }
    {
      parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__Command_42, backend_libs__compile_target_code__Succeeded_14);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_6_p_0_1(
  MR_Box backend_libs__compile_target_code__closure_arg,
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

    {
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code__is_minus_j_flag_1_p_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
    return backend_libs__compile_target_code__succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_java_files_6_p_0(
  MR_Word backend_libs__compile_target_code__Globals_7,
  MR_Word backend_libs__compile_target_code__ErrorStream_8,
  MR_Word backend_libs__compile_target_code__JavaFiles_9,
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Verbose_12;
    MR_String backend_libs__compile_target_code__JavaCompiler_17;
    MR_Word backend_libs__compile_target_code__JavaFlagsList_18;
    MR_Word backend_libs__compile_target_code__RestrictedCommandLine_19;
    MR_String backend_libs__compile_target_code__JAVAFLAGS_23;
    MR_Word backend_libs__compile_target_code__MercuryStdLibs_24;
    MR_Word backend_libs__compile_target_code__UserClasspath_25;
    MR_Word backend_libs__compile_target_code__Java_Incl_Dirs_26;
    MR_String backend_libs__compile_target_code__EnvClasspath_27;
    MR_Word backend_libs__compile_target_code__ClassPathList_28;
    MR_String backend_libs__compile_target_code__ClassPath_29;
    MR_String backend_libs__compile_target_code__InclOpt_30;
    MR_Word backend_libs__compile_target_code__Target_Debug_31;
    MR_String backend_libs__compile_target_code__Target_DebugOpt_32;
    MR_Word backend_libs__compile_target_code__UseSubdirs_33;
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_34;
    MR_String backend_libs__compile_target_code__TargetArch_35;
    MR_String backend_libs__compile_target_code__DirOpts_40;
    MR_String backend_libs__compile_target_code__MFilterJavac_41;
    MR_Word backend_libs__compile_target_code__MaybeMFilterJavac_42;
    MR_String backend_libs__compile_target_code__NonAtFileCommandArgs_43;
    MR_String backend_libs__compile_target_code__JoinedJavaFiles_44;
    MR_String backend_libs__compile_target_code__CommandArgs_45;
    MR_String backend_libs__compile_target_code__V_74_74;
    MR_Word backend_libs__compile_target_code__V_116_116;
    MR_Word backend_libs__compile_target_code__V_117_117;
    MR_Word backend_libs__compile_target_code__V_118_118;
    MR_Word backend_libs__compile_target_code__V_119_119;
    MR_Word backend_libs__compile_target_code__V_120_120;
    MR_Word backend_libs__compile_target_code__V_122_122;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_12);
    }
    if ((backend_libs__compile_target_code__JavaFiles_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.compile_java_files\'/6", (MR_String) "empty list");
          return;
        }
      }
    else
      {
        MR_String backend_libs__compile_target_code__JavaFile_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__JavaFiles_9, (MR_Integer) 0)));
        MR_Word backend_libs__compile_target_code__MoreFiles_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__JavaFiles_9, (MR_Integer) 1)));

        switch (backend_libs__compile_target_code__Verbose_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% Compiling \140");
              }
              {
                mercury__io__write_string_3_p_0(backend_libs__compile_target_code__JavaFile_13);
              }
              if ((backend_libs__compile_target_code__MoreFiles_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\':\n");
                  }
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\', etc.:\n");
                  }
                }
            }
            break;
        }
      }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 513, &backend_libs__compile_target_code__JavaCompiler_17);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 515, &backend_libs__compile_target_code__JavaFlagsList_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_19);
    }
    switch (backend_libs__compile_target_code__RestrictedCommandLine_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__JavaFlagsList_18, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__JAVAFLAGS_23);
          }
          backend_libs__compile_target_code__NonAtFileCommandArgs_43 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__compile_target_code__JRT_JavaFlagsList_20;
          MR_Word backend_libs__compile_target_code__NonJRT_JavaFlagsList_21;

          {
            mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__compile_target_code_scalar_common_5[0], backend_libs__compile_target_code__JavaFlagsList_18, &backend_libs__compile_target_code__JRT_JavaFlagsList_20, &backend_libs__compile_target_code__NonJRT_JavaFlagsList_21);
          }
          {
            backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__JRT_JavaFlagsList_20, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__NonAtFileCommandArgs_43);
          }
          {
            backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__NonJRT_JavaFlagsList_21, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__JAVAFLAGS_23);
          }
        }
        break;
    }
    {
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(backend_libs__compile_target_code__Globals_7, &backend_libs__compile_target_code__MercuryStdLibs_24);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 517, &backend_libs__compile_target_code__UserClasspath_25);
    }
    {
      backend_libs__compile_target_code__Java_Incl_Dirs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__compile_target_code__MercuryStdLibs_24, backend_libs__compile_target_code__UserClasspath_25);
    }
    {
      parse_tree__module_cmds__get_env_classpath_3_p_0(&backend_libs__compile_target_code__EnvClasspath_27);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__EnvClasspath_27, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__ClassPathList_28 = backend_libs__compile_target_code__Java_Incl_Dirs_26;
    else
      {
        backend_libs__compile_target_code__ClassPathList_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ClassPathList_28, 0) = ((MR_Box) (backend_libs__compile_target_code__EnvClasspath_27));
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ClassPathList_28, 1) = ((MR_Box) (backend_libs__compile_target_code__Java_Incl_Dirs_26));
      }
    {
      backend_libs__compile_target_code__V_74_74 = backend_libs__compile_target_code__java_classpath_separator_0_f_0();
    }
    {
      backend_libs__compile_target_code__ClassPath_29 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__V_74_74, backend_libs__compile_target_code__ClassPathList_28);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ClassPath_29, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__InclOpt_30 = (MR_String) "";
    else
      {
        MR_Word backend_libs__compile_target_code__V_75_75;
        MR_Word backend_libs__compile_target_code__V_77_77;
        MR_String backend_libs__compile_target_code__V_78_78;

        {
          backend_libs__compile_target_code__V_78_78 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__ClassPath_29);
        }
        {
          backend_libs__compile_target_code__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 0) = ((MR_Box) (backend_libs__compile_target_code__V_78_78));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
        }
        {
          backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) ((MR_String) "-classpath "));
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_77_77));
        }
        {
          backend_libs__compile_target_code__InclOpt_30 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_75_75);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 485, &backend_libs__compile_target_code__Target_Debug_31);
    }
    switch (backend_libs__compile_target_code__Target_Debug_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__Target_DebugOpt_32 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__Target_DebugOpt_32 = (MR_String) "-g ";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_33);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_34);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 659, &backend_libs__compile_target_code__TargetArch_35);
    }
    switch (backend_libs__compile_target_code__UseSubdirs_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__DirOpts_40 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String backend_libs__compile_target_code__SourceDirName_37;
          MR_String backend_libs__compile_target_code__DestDirName_38;
          MR_Word backend_libs__compile_target_code__V_103_103;
          MR_Word backend_libs__compile_target_code__V_105_105;
          MR_Word backend_libs__compile_target_code__V_106_106;
          MR_Word backend_libs__compile_target_code__V_108_108;
          MR_Word backend_libs__compile_target_code__V_110_110;
          MR_Word backend_libs__compile_target_code__V_39_39;

          switch (backend_libs__compile_target_code__UseGradeSubdirs_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  backend_libs__compile_target_code__SourceDirName_37 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "javas");
                }
                {
                  backend_libs__compile_target_code__DestDirName_38 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String backend_libs__compile_target_code__Grade_36;
                MR_String backend_libs__compile_target_code__V_90_90;
                MR_String backend_libs__compile_target_code__V_91_91;
                MR_String backend_libs__compile_target_code__V_92_92;
                MR_String backend_libs__compile_target_code__V_96_96;
                MR_String backend_libs__compile_target_code__V_97_97;
                MR_String backend_libs__compile_target_code__V_98_98;

                {
                  libs__compute_grade__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_7, &backend_libs__compile_target_code__Grade_36);
                }
                {
                  backend_libs__compile_target_code__V_92_92 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_36);
                }
                {
                  backend_libs__compile_target_code__V_91_91 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_92_92, backend_libs__compile_target_code__TargetArch_35);
                }
                {
                  backend_libs__compile_target_code__V_90_90 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_91_91, (MR_String) "Mercury");
                }
                {
                  backend_libs__compile_target_code__SourceDirName_37 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_90_90, (MR_String) "javas");
                }
                {
                  backend_libs__compile_target_code__V_98_98 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_36);
                }
                {
                  backend_libs__compile_target_code__V_97_97 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_98_98, backend_libs__compile_target_code__TargetArch_35);
                }
                {
                  backend_libs__compile_target_code__V_96_96 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_97_97, (MR_String) "Mercury");
                }
                {
                  backend_libs__compile_target_code__DestDirName_38 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_96_96, (MR_String) "classs");
                }
              }
              break;
          }
          {
            mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__DestDirName_38, &backend_libs__compile_target_code__V_39_39);
          }
          {
            backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__DestDirName_38));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
          }
          {
            backend_libs__compile_target_code__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_108_108, 0) = ((MR_Box) ((MR_String) "-d "));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_108_108, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
          }
          {
            backend_libs__compile_target_code__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 1) = ((MR_Box) (backend_libs__compile_target_code__V_108_108));
          }
          {
            backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__SourceDirName_37));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
          }
          {
            backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) ((MR_String) "-sourcepath "));
            MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
          }
          {
            backend_libs__compile_target_code__DirOpts_40 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_103_103);
          }
        }
        break;
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_7, (MR_Integer) 581, &backend_libs__compile_target_code__MFilterJavac_41);
    }
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MFilterJavac_41, (MR_String) "") == 0);
    if (backend_libs__compile_target_code__succeeded)
      backend_libs__compile_target_code__MaybeMFilterJavac_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        backend_libs__compile_target_code__MaybeMFilterJavac_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeMFilterJavac_42, 0) = ((MR_Box) (backend_libs__compile_target_code__MFilterJavac_41));
      }
    {
      backend_libs__compile_target_code__JoinedJavaFiles_44 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__JavaFiles_9);
    }
    {
      backend_libs__compile_target_code__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 0) = ((MR_Box) (backend_libs__compile_target_code__JoinedJavaFiles_44));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_120_120, 1) = ((MR_Box) (backend_libs__compile_target_code__V_122_122));
    }
    {
      backend_libs__compile_target_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 0) = ((MR_Box) (backend_libs__compile_target_code__JAVAFLAGS_23));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 1) = ((MR_Box) (backend_libs__compile_target_code__V_120_120));
    }
    {
      backend_libs__compile_target_code__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 0) = ((MR_Box) (backend_libs__compile_target_code__Target_DebugOpt_32));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 1) = ((MR_Box) (backend_libs__compile_target_code__V_119_119));
    }
    {
      backend_libs__compile_target_code__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_117_117, 0) = ((MR_Box) (backend_libs__compile_target_code__DirOpts_40));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_117_117, 1) = ((MR_Box) (backend_libs__compile_target_code__V_118_118));
    }
    {
      backend_libs__compile_target_code__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_30));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 1) = ((MR_Box) (backend_libs__compile_target_code__V_117_117));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_116_116, &backend_libs__compile_target_code__CommandArgs_45);
    }
    {
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(backend_libs__compile_target_code__Globals_7, backend_libs__compile_target_code__ErrorStream_8, (MR_Integer) 1, backend_libs__compile_target_code__JavaCompiler_17, backend_libs__compile_target_code__NonAtFileCommandArgs_43, backend_libs__compile_target_code__CommandArgs_45, backend_libs__compile_target_code__MaybeMFilterJavac_42, backend_libs__compile_target_code__Succeeded_10);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__do_compile_c_file_8_p_0(
  MR_Word backend_libs__compile_target_code__Globals_9,
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
  MR_Word backend_libs__compile_target_code__PIC_11,
  MR_String backend_libs__compile_target_code__C_File_12,
  MR_String backend_libs__compile_target_code__O_File_13,
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_Word backend_libs__compile_target_code__Verbose_16;
    MR_String backend_libs__compile_target_code__NameObjectFile_17;
    MR_String backend_libs__compile_target_code__CC_18;
    MR_String backend_libs__compile_target_code__AllCFlags_19;
    MR_String backend_libs__compile_target_code__Command_20;
    MR_Word backend_libs__compile_target_code__MaybeFilterCmd_21;
    MR_Word backend_libs__compile_target_code__V_32_32;
    MR_Word backend_libs__compile_target_code__V_33_33;
    MR_Word backend_libs__compile_target_code__V_35_35;
    MR_Word backend_libs__compile_target_code__V_36_36;
    MR_Word backend_libs__compile_target_code__V_38_38;
    MR_String backend_libs__compile_target_code__V_39_39;
    MR_Word backend_libs__compile_target_code__V_40_40;
    MR_Word backend_libs__compile_target_code__V_42_42;
    MR_Word backend_libs__compile_target_code__V_43_43;
    MR_String backend_libs__compile_target_code__V_44_44;
    MR_String backend_libs__compile_target_code__FilterCmd_50;
    MR_Word backend_libs__compile_target_code__V_53_53;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 52, &backend_libs__compile_target_code__Verbose_16);
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 508, &backend_libs__compile_target_code__NameObjectFile_17);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, backend_libs__compile_target_code__C_File_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "\':\n");
    }
    {
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 486, &backend_libs__compile_target_code__CC_18);
    }
    {
      backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__PIC_11, &backend_libs__compile_target_code__AllCFlags_19);
    }
    {
      backend_libs__compile_target_code__V_39_39 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__C_File_12);
    }
    {
      backend_libs__compile_target_code__V_44_44 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__O_File_13);
    }
    {
      backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) (backend_libs__compile_target_code__NameObjectFile_17));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
    }
    {
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
    }
    {
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) (backend_libs__compile_target_code__V_39_39));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
    }
    {
      backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) " -c "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
    }
    {
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) (backend_libs__compile_target_code__AllCFlags_19));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
    }
    {
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
    }
    {
      backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) (backend_libs__compile_target_code__CC_18));
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_33_33));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_32_32, &backend_libs__compile_target_code__Command_20);
    }
    {
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_9, (MR_Integer) 256, (MR_Integer) 1);
    }
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__V_53_53 = (MR_Integer) 580;
        {
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__V_53_53, &backend_libs__compile_target_code__FilterCmd_50);
        }
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__FilterCmd_50, (MR_String) "") == 0);
        backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
      }
    if (backend_libs__compile_target_code__succeeded)
      {
        backend_libs__compile_target_code__MaybeFilterCmd_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeFilterCmd_21, 0) = ((MR_Box) (backend_libs__compile_target_code__FilterCmd_50));
      }
    else
      backend_libs__compile_target_code__MaybeFilterCmd_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__Command_20, backend_libs__compile_target_code__MaybeFilterCmd_21, backend_libs__compile_target_code__Succeeded_14);
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_c_file_7_p_0(
  MR_Word backend_libs__compile_target_code__Globals_8,
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
  MR_Word backend_libs__compile_target_code__PIC_10,
  MR_Word backend_libs__compile_target_code__ModuleName_11,
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
{
  {
    MR_bool backend_libs__compile_target_code__succeeded;
    MR_String backend_libs__compile_target_code__C_File_14;
    MR_String backend_libs__compile_target_code__ObjExt_15;
    MR_String backend_libs__compile_target_code__O_File_16;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_11, (MR_String) ".c", (MR_Integer) 0, &backend_libs__compile_target_code__C_File_14);
    }
    switch (backend_libs__compile_target_code__PIC_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 509, &backend_libs__compile_target_code__ObjExt_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 510, &backend_libs__compile_target_code__ObjExt_15);
          }
        }
        break;
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__ObjExt_15, (MR_Integer) 0, &backend_libs__compile_target_code__O_File_16);
    }
    {
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__PIC_10, backend_libs__compile_target_code__C_File_14, backend_libs__compile_target_code__O_File_16, backend_libs__compile_target_code__Succeeded_12);
    }
  }
}

void mercury__backend_libs__compile_target_code__init(void)
{
}

void mercury__backend_libs__compile_target_code__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0);
	MR_register_type_ctor_info(&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0);
}

void mercury__backend_libs__compile_target_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__compile_target_code__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.compile_target_code. */
