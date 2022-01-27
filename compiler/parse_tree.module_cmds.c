/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.module_cmds. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_cmds__init
ENDINIT
*/

#include "parse_tree.module_cmds.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 106 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 109 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 112 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0;

#line 115 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0;

#line 118 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1;

#line 121 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2];

#line 124 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2];

#line 127 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2];

#line 130 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0;

#line 133 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1;

#line 136 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2];

#line 139 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2];

#line 142 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2];

#line 145 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0;

#line 148 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1;

#line 151 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2;

#line 154 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3];

#line 157 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3];

#line 160 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3];

#line 163 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 166 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 168 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 171 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 174 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 176 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 178 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 181 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 184 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 186 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 189 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 192 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 194 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 196 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 199 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 202 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 204 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 207 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 210 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 212 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 214 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 192 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_50_50,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_51_51,
#line 192 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_52_52,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 192 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 196 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_38_38,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 196 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 196 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 980 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

#line 345 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 345 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12);

#line 1132 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1132__1_2_f_0(
#line 1132 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1132 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42);

#line 1069 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1069__1_2_f_0(
#line 1069 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1069 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42);

#line 844 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__844__1_1_f_0(
#line 844 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__1_33);

#line 1178 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1178 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1178 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1178 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7);

#line 1157 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1157 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1157 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1157 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1157 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10);

#line 1140 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
#line 1140 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1140 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1136 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1136 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1136 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

#line 1132 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
#line 1132 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1132 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1097 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 1077 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1077 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1077 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1073 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1073 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1073 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

#line 1069 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1069 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1069 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1036 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 980 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

#line 973 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 973 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 973 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4);

#line 861 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 861 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 844 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
#line 844 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 844 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 834 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 834 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 790 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 790 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 742 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void);

#line 723 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void);

#line 345 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 345 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12);

#line 325 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6);

#line 318 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
#line 318 "module_cmds.m"
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
#line 318 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
#line 318 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__FilesDiffer_8);

#line 297 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
#line 297 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__Msg_9,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_10,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
#line 297 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_12);

#line 942 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 942 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 942 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 931 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8);

#line 924 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 924 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 924 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 924 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2);

#line 685 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 685 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3);

#line 390 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 390 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[3][7];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][12];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][6];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[1][10];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) " 2>&1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) " %*\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " -s init stop -extra \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) " -s init stop -extra %*\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_2[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[2]))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[2])),
    ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[2])),
    ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "parse_tree.module_cmds.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "libs.process_util.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 844 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 852 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 860 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 868 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  (MR_Integer) 0
};

#line 874 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  (MR_Integer) 1
};

#line 880 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 886 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 892 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 898 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_command_verbosity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____command_verbosity_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____command_verbosity_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "command_verbosity",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0
};

#line 915 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  (MR_Integer) 0
};

#line 921 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  (MR_Integer) 1
};

#line 927 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1
};

#line 933 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0
};

#line 939 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 945 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_quote_char_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____quote_char_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____quote_char_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "quote_char",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0
};

#line 962 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0 = {
  (MR_String) "interface_new_or_changed",
  (MR_Integer) 0
};

#line 968 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1 = {
  (MR_String) "interface_unchanged",
  (MR_Integer) 1
};

#line 974 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2 = {
  (MR_String) "interface_error",
  (MR_Integer) 2
};

#line 980 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2
};

#line 987 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1
};

#line 994 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1001 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_update_interface_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____update_interface_result_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____update_interface_result_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "update_interface_result",
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0 },
  {     parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0
};

#line 1018 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 1021 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1023 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1025 "parse_tree.module_cmds.c"
{
#line 1027 "parse_tree.module_cmds.c"
  {
#line 1029 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1032 "parse_tree.module_cmds.c"
    {
#line 1034 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____command_verbosity_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1037 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1039 "parse_tree.module_cmds.c"
  }
#line 1041 "parse_tree.module_cmds.c"
}

#line 1044 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 1047 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1049 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1051 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1053 "parse_tree.module_cmds.c"
{
#line 1055 "parse_tree.module_cmds.c"
  {
#line 1057 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1060 "parse_tree.module_cmds.c"
    {
#line 1062 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____command_verbosity_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1065 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1067 "parse_tree.module_cmds.c"
  }
#line 1069 "parse_tree.module_cmds.c"
}

#line 1072 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 1075 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1077 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1079 "parse_tree.module_cmds.c"
{
#line 1081 "parse_tree.module_cmds.c"
  {
#line 1083 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1086 "parse_tree.module_cmds.c"
    {
#line 1088 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____quote_char_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1091 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1093 "parse_tree.module_cmds.c"
  }
#line 1095 "parse_tree.module_cmds.c"
}

#line 1098 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 1101 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1103 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1105 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1107 "parse_tree.module_cmds.c"
{
#line 1109 "parse_tree.module_cmds.c"
  {
#line 1111 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1114 "parse_tree.module_cmds.c"
    {
#line 1116 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____quote_char_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1119 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1121 "parse_tree.module_cmds.c"
  }
#line 1123 "parse_tree.module_cmds.c"
}

#line 1126 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 1129 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1131 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1133 "parse_tree.module_cmds.c"
{
#line 1135 "parse_tree.module_cmds.c"
  {
#line 1137 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1140 "parse_tree.module_cmds.c"
    {
#line 1142 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____update_interface_result_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1145 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1147 "parse_tree.module_cmds.c"
  }
#line 1149 "parse_tree.module_cmds.c"
}

#line 1152 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 1155 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1157 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1159 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1161 "parse_tree.module_cmds.c"
{
#line 1163 "parse_tree.module_cmds.c"
  {
#line 1165 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1168 "parse_tree.module_cmds.c"
    {
#line 1170 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____update_interface_result_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1173 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1175 "parse_tree.module_cmds.c"
  }
#line 1177 "parse_tree.module_cmds.c"
}

#line 192 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_50_50,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_51_51,
#line 192 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_52_52,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 192 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 192 "module_cmds.m"
{
#line 1199 "module_cmds.m"
  {
#line 1199 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1199 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1199 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_29_29;
#line 1209 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1201 "module_cmds.m"
    {
#line 1201 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1204 "module_cmds.m"
    {
#line 1204 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 1206 "module_cmds.m"
    {
#line 1206 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1205 "module_cmds.m"
    {
#line 1205 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_29_29);
    }
#line 1205 "module_cmds.m"
    {
#line 1205 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_26_26);
    }
#line 1209 "module_cmds.m"
    {
#line 1209 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1210 "module_cmds.m"
    {
#line 1210 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1230 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1231 "module_cmds.m"
      {
#line 1231 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;
#line 1231 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1232 "module_cmds.m"
        {
#line 1232 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
#line 1232 "module_cmds.m"
        {
#line 1232 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_35_35);
#line 1232 "module_cmds.m"
          return;
        }
#line 1231 "module_cmds.m"
      }
#line 1230 "module_cmds.m"
    else
#line 1212 "module_cmds.m"
      {
#line 1212 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1212 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ChmodResult_18;
#line 1212 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_38_38;

#line 1213 "module_cmds.m"
        {
#line 1213 "module_cmds.m"
          parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(parse_tree__module_cmds__V_50_50, parse_tree__module_cmds__V_51_51, parse_tree__module_cmds__V_52_52, parse_tree__module_cmds__Stream_17);
        }
#line 1214 "module_cmds.m"
        {
#line 1214 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          parse_tree__module_cmds__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_38_38, &parse_tree__module_cmds__ChmodResult_18);
        }
#line 1225 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "module_cmds.m"
          {
#line 1226 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
#line 1226 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_43_43;

#line 1227 "module_cmds.m"
            {
#line 1227 "module_cmds.m"
              parse_tree__module_cmds__V_43_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
#line 1227 "module_cmds.m"
            {
#line 1227 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_43_43);
#line 1227 "module_cmds.m"
              return;
            }
#line 1226 "module_cmds.m"
          }
#line 1225 "module_cmds.m"
        else
#line 1217 "module_cmds.m"
          {
#line 1217 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

#line 1218 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
#line 1221 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 1219 "module_cmds.m"
              {
#line 1219 "module_cmds.m"
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1220 "module_cmds.m"
                {
#line 1220 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
#line 1220 "module_cmds.m"
                  return;
                }
#line 1219 "module_cmds.m"
              }
#line 1221 "module_cmds.m"
            else
#line 1222 "module_cmds.m"
              {
#line 1222 "module_cmds.m"
                {
#line 1222 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1222 "module_cmds.m"
                  return;
                }
#line 1222 "module_cmds.m"
              }
#line 1217 "module_cmds.m"
          }
#line 1212 "module_cmds.m"
      }
#line 1199 "module_cmds.m"
  }
#line 192 "module_cmds.m"
}

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 196 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_38_38,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 196 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 196 "module_cmds.m"
{
#line 1238 "module_cmds.m"
  {
#line 1238 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1248 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1240 "module_cmds.m"
    {
#line 1240 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1243 "module_cmds.m"
    {
#line 1243 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1248 "module_cmds.m"
    {
#line 1248 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1249 "module_cmds.m"
    {
#line 1249 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1255 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1256 "module_cmds.m"
      {
#line 1256 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1256 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1257 "module_cmds.m"
          return;
        }
#line 1256 "module_cmds.m"
      }
#line 1255 "module_cmds.m"
    else
#line 1251 "module_cmds.m"
      {
#line 1251 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1252 "module_cmds.m"
        {
#line 1252 "module_cmds.m"
          parse_tree__module_cmds__write_java_batch_file_6_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__V_38_38, parse_tree__module_cmds__Stream_17);
        }
#line 1253 "module_cmds.m"
        {
#line 1253 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1254 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1251 "module_cmds.m"
      }
#line 1238 "module_cmds.m"
  }
#line 196 "module_cmds.m"
}

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 196 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 196 "module_cmds.m"
{
#line 1238 "module_cmds.m"
  {
#line 1238 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1248 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1240 "module_cmds.m"
    {
#line 1240 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1243 "module_cmds.m"
    {
#line 1243 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1248 "module_cmds.m"
    {
#line 1248 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1249 "module_cmds.m"
    {
#line 1249 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1255 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1256 "module_cmds.m"
      {
#line 1256 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1256 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1257 "module_cmds.m"
          return;
        }
#line 1256 "module_cmds.m"
      }
#line 1255 "module_cmds.m"
    else
#line 1251 "module_cmds.m"
      {
#line 1251 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1252 "module_cmds.m"
        {
#line 1252 "module_cmds.m"
          parse_tree__module_cmds__write_erlang_batch_file_5_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__Stream_17);
        }
#line 1253 "module_cmds.m"
        {
#line 1253 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1254 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1251 "module_cmds.m"
      }
#line 1238 "module_cmds.m"
  }
#line 196 "module_cmds.m"
}

#line 980 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 980 "module_cmds.m"
{
#line 985 "module_cmds.m"
  {
#line 985 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 987 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_29_29;
#line 987 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Dollar_17;
#line 987 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseNameToDollar_18;
#line 987 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_24_24;
#line 987 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_25_25;
#line 987 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;

#line 987 "module_cmds.m"
    {
#line 987 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__sub_string_search_3_p_0(parse_tree__module_cmds__BaseName_12, (MR_String) "\044", &parse_tree__module_cmds__Dollar_17);
    }
#line 987 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 987 "module_cmds.m"
      {
#line 988 "module_cmds.m"
        parse_tree__module_cmds__V_25_25 = (MR_Integer) 1;
#line 988 "module_cmds.m"
        parse_tree__module_cmds__V_24_24 = (parse_tree__module_cmds__Dollar_17 + parse_tree__module_cmds__V_25_25);
#line 988 "module_cmds.m"
        {
#line 988 "module_cmds.m"
          parse_tree__module_cmds__BaseNameToDollar_18 = mercury__string__left_2_f_0(parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__V_24_24);
        }
#line 989 "module_cmds.m"
        {
#line 989 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseNameToDollar_18);
        }
#line 1663 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 989 "module_cmds.m"
        {
#line 989 "module_cmds.m"
          parse_tree__module_cmds__succeeded = mercury__set__contains_2_p_0(parse_tree__module_cmds__TypeCtorInfo_29_29, parse_tree__module_cmds__NestedClassPrefixes_10, ((MR_Box) (parse_tree__module_cmds__V_26_26)));
        }
#line 987 "module_cmds.m"
      }
#line 992 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 991 "module_cmds.m"
      {
#line 991 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_28_28;

#line 991 "module_cmds.m"
        {
#line 991 "module_cmds.m"
          parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12);
        }
#line 991 "module_cmds.m"
        {
#line 991 "module_cmds.m"
          MR_Word base;
#line 991 "module_cmds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "module_cmds.m"
          *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = base;
#line 991 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__V_28_28));
#line 991 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19));
#line 991 "module_cmds.m"
        }
#line 991 "module_cmds.m"
      }
#line 992 "module_cmds.m"
    else
#line 992 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19;
#line 995 "module_cmds.m"
    *parse_tree__module_cmds__Continue_14 = (MR_Integer) 1;
#line 985 "module_cmds.m"
  }
#line 980 "module_cmds.m"
}

#line 345 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 345 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12)
#line 345 "module_cmds.m"
{
#line 350 "module_cmds.m"
  {
#line 350 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 350 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TmpByteResult_14;

#line 351 "module_cmds.m"
    {
#line 351 "module_cmds.m"
      mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, &parse_tree__module_cmds__TmpByteResult_14);
    }
#line 361 "module_cmds.m"
#line 361 "module_cmds.m"
    switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult_14)) {
#line 361 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 361 "module_cmds.m"
      case (MR_Integer) 0:
#line 362 "module_cmds.m"
        {
#line 363 "module_cmds.m"
          *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[2];
#line 364 "module_cmds.m"
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 362 "module_cmds.m"
        }
#line 361 "module_cmds.m"
        break;
#line 361 "module_cmds.m"
      case (MR_Integer) 1:
#line 353 "module_cmds.m"
        {
#line 353 "module_cmds.m"
          MR_Integer parse_tree__module_cmds__TmpByte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

#line 354 "module_cmds.m"
          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__TmpByte_15 == parse_tree__module_cmds__Byte_9);
#line 357 "module_cmds.m"
          if (parse_tree__module_cmds__succeeded)
#line 355 "module_cmds.m"
            {
#line 355 "module_cmds.m"
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[1];
#line 356 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 1;
#line 355 "module_cmds.m"
            }
#line 357 "module_cmds.m"
          else
#line 358 "module_cmds.m"
            {
#line 358 "module_cmds.m"
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[2];
#line 359 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 358 "module_cmds.m"
            }
#line 353 "module_cmds.m"
        }
#line 361 "module_cmds.m"
        break;
#line 361 "module_cmds.m"
      case (MR_Integer) 2:
#line 366 "module_cmds.m"
        {
#line 366 "module_cmds.m"
          MR_Word parse_tree__module_cmds__TmpByteError_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

#line 367 "module_cmds.m"
          {
#line 367 "module_cmds.m"
            MR_Word base;
#line 367 "module_cmds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "module_cmds.m"
            *parse_tree__module_cmds__Differ_12 = base;
#line 367 "module_cmds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__TmpByteError_16));
#line 367 "module_cmds.m"
          }
#line 368 "module_cmds.m"
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 366 "module_cmds.m"
        }
#line 361 "module_cmds.m"
        break;
#line 361 "module_cmds.m"
    }
#line 350 "module_cmds.m"
  }
#line 345 "module_cmds.m"
}

#line 1132 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1132__1_2_f_0(
#line 1132 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1132 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42)
#line 1132 "module_cmds.m"
{
#line 1132 "module_cmds.m"
  {
#line 1132 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1132 "module_cmds.m"
    MR_String parse_tree__module_cmds__HeadVar__3_43;
#line 1132 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__HeadVar__2_42, (MR_String) "lib");
    }
#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      return parse_tree__module_cmds__HeadVar__3_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1132 "module_cmds.m"
    return parse_tree__module_cmds__HeadVar__3_43;
#line 1132 "module_cmds.m"
  }
#line 1132 "module_cmds.m"
}

#line 1069 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1069__1_2_f_0(
#line 1069 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1069 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42)
#line 1069 "module_cmds.m"
{
#line 1069 "module_cmds.m"
  {
#line 1069 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1069 "module_cmds.m"
    MR_String parse_tree__module_cmds__HeadVar__3_43;
#line 1069 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__HeadVar__2_42, (MR_String) "lib");
    }
#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      return parse_tree__module_cmds__HeadVar__3_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1069 "module_cmds.m"
    return parse_tree__module_cmds__HeadVar__3_43;
#line 1069 "module_cmds.m"
  }
#line 1069 "module_cmds.m"
}

#line 844 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__844__1_1_f_0(
#line 844 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__1_33)
#line 844 "module_cmds.m"
{
#line 844 "module_cmds.m"
  {
#line 844 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 844 "module_cmds.m"
    MR_String parse_tree__module_cmds__HeadVar__2_34;

#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      return parse_tree__module_cmds__HeadVar__2_34 = mercury__string__replace_all_3_f_0(parse_tree__module_cmds__HeadVar__1_33, (MR_String) "\\", (MR_String) "/");
    }
#line 844 "module_cmds.m"
    return parse_tree__module_cmds__HeadVar__2_34;
#line 844 "module_cmds.m"
  }
#line 844 "module_cmds.m"
}

#line 30 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0(
#line 30 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 30 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 30 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 30 "module_cmds.m"
{
#line 30 "module_cmds.m"
  {
#line 30 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 30 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 30 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 30 "module_cmds.m"
    {
#line 30 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
#line 30 "module_cmds.m"
      return;
    }
#line 30 "module_cmds.m"
  }
#line 30 "module_cmds.m"
}

#line 30 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0(
#line 30 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 30 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 30 "module_cmds.m"
{
#line 1955 "parse_tree.module_cmds.c"
  {
#line 1957 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 1960 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1962 "parse_tree.module_cmds.c"
  }
#line 30 "module_cmds.m"
}

#line 102 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0(
#line 102 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 102 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 102 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 102 "module_cmds.m"
{
#line 102 "module_cmds.m"
  {
#line 102 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 102 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 102 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 102 "module_cmds.m"
    {
#line 102 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
#line 102 "module_cmds.m"
      return;
    }
#line 102 "module_cmds.m"
  }
#line 102 "module_cmds.m"
}

#line 102 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0(
#line 102 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 102 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 102 "module_cmds.m"
{
#line 2008 "parse_tree.module_cmds.c"
  {
#line 2010 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 2013 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 2015 "parse_tree.module_cmds.c"
  }
#line 102 "module_cmds.m"
}

#line 106 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0(
#line 106 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 106 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 106 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 106 "module_cmds.m"
{
#line 106 "module_cmds.m"
  {
#line 106 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 106 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 106 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 106 "module_cmds.m"
    {
#line 106 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
#line 106 "module_cmds.m"
      return;
    }
#line 106 "module_cmds.m"
  }
#line 106 "module_cmds.m"
}

#line 106 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0(
#line 106 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 106 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 106 "module_cmds.m"
{
#line 2061 "parse_tree.module_cmds.c"
  {
#line 2063 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 2066 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 2068 "parse_tree.module_cmds.c"
  }
#line 106 "module_cmds.m"
}

#line 1178 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1178 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1178 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1178 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7)
#line 1178 "module_cmds.m"
{
#line 1180 "module_cmds.m"
  {
#line 1180 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1180 "module_cmds.m"
    MR_String parse_tree__module_cmds__Option_8;
#line 1180 "module_cmds.m"
    MR_String parse_tree__module_cmds__Dir_9;
#line 1180 "module_cmds.m"
    MR_String parse_tree__module_cmds__LineContinuation_10;
#line 1180 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_12_12;

#line 1184 "module_cmds.m"
#line 1184 "module_cmds.m"
    switch (parse_tree__module_cmds__Quote_6) {
#line 1184 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "module_cmds.m"
      case (MR_Integer) 0:
#line 1186 "module_cmds.m"
        parse_tree__module_cmds__Dir_9 = parse_tree__module_cmds__Dir0_7;
#line 1184 "module_cmds.m"
        break;
#line 1184 "module_cmds.m"
      case (MR_Integer) 1:
#line 1183 "module_cmds.m"
        {
#line 1183 "module_cmds.m"
          parse_tree__module_cmds__Dir_9 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__Dir0_7);
        }
#line 1184 "module_cmds.m"
        break;
#line 1184 "module_cmds.m"
    }
#line 1191 "module_cmds.m"
#line 1191 "module_cmds.m"
    switch (parse_tree__module_cmds__BreakLines_5) {
#line 1191 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "module_cmds.m"
      case (MR_Integer) 0:
#line 1193 "module_cmds.m"
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) "";
#line 1191 "module_cmds.m"
        break;
#line 1191 "module_cmds.m"
      case (MR_Integer) 1:
#line 1190 "module_cmds.m"
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) " \\\n";
#line 1191 "module_cmds.m"
        break;
#line 1191 "module_cmds.m"
    }
#line 1195 "module_cmds.m"
    {
#line 1195 "module_cmds.m"
      parse_tree__module_cmds__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Dir_9, parse_tree__module_cmds__LineContinuation_10);
    }
#line 1195 "module_cmds.m"
    {
#line 1195 "module_cmds.m"
      return parse_tree__module_cmds__Option_8 = mercury__string__f_43_43_2_f_0((MR_String) " -pa ", parse_tree__module_cmds__V_12_12);
    }
#line 1180 "module_cmds.m"
    return parse_tree__module_cmds__Option_8;
#line 1180 "module_cmds.m"
  }
#line 1178 "module_cmds.m"
}

#line 1157 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1157 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1157 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1157 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1157 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10)
#line 1157 "module_cmds.m"
{
#line 1160 "module_cmds.m"
  {
#line 1160 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1160 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LibModuleName_12;
#line 1160 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NoSubdirsGlobals_13;
#line 1160 "module_cmds.m"
    MR_String parse_tree__module_cmds__LibFileName_14;
#line 1160 "module_cmds.m"
    MR_Word parse_tree__module_cmds__SearchResult_15;

#line 1161 "module_cmds.m"
    {
#line 1161 "module_cmds.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__module_cmds__LibName_9, &parse_tree__module_cmds__LibModuleName_12);
    }
#line 1162 "module_cmds.m"
    {
#line 1162 "module_cmds.m"
      libs__globals__set_option_4_p_0((MR_Integer) 648, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_3[1]), parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__NoSubdirsGlobals_13);
    }
#line 1163 "module_cmds.m"
    {
#line 1163 "module_cmds.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__module_cmds__NoSubdirsGlobals_13, (MR_String) "lib", parse_tree__module_cmds__LibModuleName_12, (MR_String) ".beams", (MR_Integer) 1, &parse_tree__module_cmds__LibFileName_14);
    }
#line 1166 "module_cmds.m"
    {
#line 1166 "module_cmds.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__module_cmds__MercuryLibDirs_8, parse_tree__module_cmds__LibFileName_14, &parse_tree__module_cmds__SearchResult_15);
    }
#line 1171 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__SearchResult_15)) == (MR_mktag((MR_Integer) 1))))
#line 1172 "module_cmds.m"
      {
#line 1172 "module_cmds.m"
        MR_String parse_tree__module_cmds__Error_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));
#line 1172 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;
#line 1172 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_33_33;

#line 1173 "module_cmds.m"
        *parse_tree__module_cmds__LibPath_10 = (MR_String) "";
#line 1174 "module_cmds.m"
        {
#line 1174 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1174 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 1) = ((MR_Box) (parse_tree__module_cmds__Error_17));
#line 1174 "module_cmds.m"
        }
#line 1174 "module_cmds.m"
        {
#line 1174 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 0) = ((MR_Box) (parse_tree__module_cmds__V_33_33));
#line 1174 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "module_cmds.m"
        }
#line 1174 "module_cmds.m"
        {
#line 1174 "module_cmds.m"
          parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(parse_tree__module_cmds__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__module_cmds__V_31_31);
#line 1174 "module_cmds.m"
          return;
        }
#line 1172 "module_cmds.m"
      }
#line 1171 "module_cmds.m"
    else
#line 1169 "module_cmds.m"
      {
#line 1169 "module_cmds.m"
        MR_String parse_tree__module_cmds__DirName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));

#line 1170 "module_cmds.m"
        {
#line 1170 "module_cmds.m"
          *parse_tree__module_cmds__LibPath_10 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_16, parse_tree__module_cmds__LibFileName_14);
        }
#line 1169 "module_cmds.m"
      }
#line 1160 "module_cmds.m"
  }
#line 1157 "module_cmds.m"
}

#line 1140 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
#line 1140 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1140 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1140 "module_cmds.m"
{
#line 1140 "module_cmds.m"
  {
#line 1140 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1140 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1140 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_Option_8;

#line 1140 "module_cmds.m"
    {
#line 1140 "module_cmds.m"
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1140 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
#line 1140 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1140 "module_cmds.m"
  }
#line 1140 "module_cmds.m"
}

#line 1136 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1136 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1136 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1136 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
#line 1136 "module_cmds.m"
{
#line 1136 "module_cmds.m"
  {
#line 1136 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1136 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

#line 1136 "module_cmds.m"
    {
#line 1136 "module_cmds.m"
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
#line 1136 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
#line 1136 "module_cmds.m"
  }
#line 1136 "module_cmds.m"
}

#line 1132 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
#line 1132 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1132 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1132 "module_cmds.m"
{
#line 1132 "module_cmds.m"
  {
#line 1132 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1132 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1132 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_HeadVar__3_43;

#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      parse_tree__module_cmds__conv0_HeadVar__3_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1132__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1132 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__3_43));
#line 1132 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1132 "module_cmds.m"
  }
#line 1132 "module_cmds.m"
}

#line 1097 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1097 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 1097 "module_cmds.m"
{
#line 1100 "module_cmds.m"
  {
#line 1100 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamExt_10;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamFileName_11;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamDirName_12;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__GradeDir_14;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchStdLib_18;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__MainFunc_19;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__Erlang_25;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchLibs_26;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchProg_27;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_57_57;
#line 1100 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_59_59;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_65_65;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_67_67;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_69_69;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_70_70;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_72_72;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_73_73;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_74_74;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_75_75;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_77_77;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_78_78;
#line 1100 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_80_80;
#line 1136 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 1103 "module_cmds.m"
    {
#line 1103 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 537, &parse_tree__module_cmds__BeamExt_10);
    }
#line 1105 "module_cmds.m"
    {
#line 1105 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
#line 1107 "module_cmds.m"
    {
#line 1107 "module_cmds.m"
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
#line 1108 "module_cmds.m"
    {
#line 1108 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
#line 1113 "module_cmds.m"
    {
#line 1113 "module_cmds.m"
      libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 1114 "module_cmds.m"
    {
#line 1114 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 555, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
#line 1122 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "module_cmds.m"
      {
#line 1124 "module_cmds.m"
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
#line 1125 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
#line 1123 "module_cmds.m"
      }
#line 1122 "module_cmds.m"
    else
#line 1117 "module_cmds.m"
      {
#line 1117 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 1117 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
#line 1117 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 1117 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;

#line 1118 "module_cmds.m"
        {
#line 1118 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
#line 1118 "module_cmds.m"
        {
#line 1118 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_35_35, parse_tree__module_cmds__GradeDir_14);
        }
#line 1118 "module_cmds.m"
        {
#line 1118 "module_cmds.m"
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, (MR_String) "libmer_std.beams");
        }
#line 1119 "module_cmds.m"
        {
#line 1119 "module_cmds.m"
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 1121 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 1117 "module_cmds.m"
      }
#line 1130 "module_cmds.m"
    {
#line 1130 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 549, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 2530 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 1132 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1));
#line 1132 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1132 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
#line 1132 "module_cmds.m"
    }
#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__V_41_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 547, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1136 "module_cmds.m"
    {
#line 1136 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1136 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2));
#line 1136 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1136 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
#line 1136 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
#line 1136 "module_cmds.m"
    }
#line 1136 "module_cmds.m"
    {
#line 1136 "module_cmds.m"
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1139 "module_cmds.m"
    {
#line 1139 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__Erlang_25);
    }
#line 1141 "module_cmds.m"
    {
#line 1141 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1140 "module_cmds.m"
    {
#line 1140 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_4[2], parse_tree__module_cmds__V_54_54);
    }
#line 1140 "module_cmds.m"
    {
#line 1140 "module_cmds.m"
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_50_50);
    }
#line 1145 "module_cmds.m"
    {
#line 1145 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
#line 1145 "module_cmds.m"
    {
#line 1145 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__V_59_59);
    }
#line 1145 "module_cmds.m"
    {
#line 1145 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[6])));
#line 1153 "module_cmds.m"
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1153 "module_cmds.m"
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1153 "module_cmds.m"
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1153 "module_cmds.m"
    }
#line 1152 "module_cmds.m"
    {
#line 1152 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1152 "module_cmds.m"
    }
#line 1152 "module_cmds.m"
    {
#line 1152 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1152 "module_cmds.m"
    }
#line 1152 "module_cmds.m"
    {
#line 1152 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1152 "module_cmds.m"
    }
#line 1151 "module_cmds.m"
    {
#line 1151 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell "));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1151 "module_cmds.m"
    }
#line 1151 "module_cmds.m"
    {
#line 1151 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1151 "module_cmds.m"
    }
#line 1150 "module_cmds.m"
    {
#line 1150 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 1150 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1150 "module_cmds.m"
    }
#line 1149 "module_cmds.m"
    {
#line 1149 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 1149 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1149 "module_cmds.m"
    }
#line 1148 "module_cmds.m"
    {
#line 1148 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "rem Generated by the Mercury compiler.\n"));
#line 1148 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1148 "module_cmds.m"
    }
#line 1147 "module_cmds.m"
    {
#line 1147 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 1147 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1147 "module_cmds.m"
    }
#line 1146 "module_cmds.m"
    {
#line 1146 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
#line 1146 "module_cmds.m"
      return;
    }
#line 1100 "module_cmds.m"
  }
#line 1097 "module_cmds.m"
}

#line 1077 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1077 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1077 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1077 "module_cmds.m"
{
#line 1077 "module_cmds.m"
  {
#line 1077 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1077 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1077 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_Option_8;

#line 1077 "module_cmds.m"
    {
#line 1077 "module_cmds.m"
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1077 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
#line 1077 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1077 "module_cmds.m"
  }
#line 1077 "module_cmds.m"
}

#line 1073 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1073 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1073 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1073 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
#line 1073 "module_cmds.m"
{
#line 1073 "module_cmds.m"
  {
#line 1073 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1073 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

#line 1073 "module_cmds.m"
    {
#line 1073 "module_cmds.m"
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
#line 1073 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
#line 1073 "module_cmds.m"
  }
#line 1073 "module_cmds.m"
}

#line 1069 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1069 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1069 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1069 "module_cmds.m"
{
#line 1069 "module_cmds.m"
  {
#line 1069 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1069 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1069 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_HeadVar__3_43;

#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      parse_tree__module_cmds__conv0_HeadVar__3_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1069__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1069 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__3_43));
#line 1069 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1069 "module_cmds.m"
  }
#line 1069 "module_cmds.m"
}

#line 1036 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 1036 "module_cmds.m"
{
#line 1039 "module_cmds.m"
  {
#line 1039 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamExt_10;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamFileName_11;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamDirName_12;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__GradeDir_14;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchStdLib_18;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__MainFunc_19;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__Erlang_25;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchLibs_26;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchProg_27;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_57_57;
#line 1039 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_59_59;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_65_65;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_67_67;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_69_69;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_70_70;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_72_72;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_73_73;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_74_74;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_75_75;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_77_77;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_78_78;
#line 1039 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_80_80;
#line 1073 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 1040 "module_cmds.m"
    {
#line 1040 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 537, &parse_tree__module_cmds__BeamExt_10);
    }
#line 1042 "module_cmds.m"
    {
#line 1042 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
#line 1044 "module_cmds.m"
    {
#line 1044 "module_cmds.m"
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
#line 1045 "module_cmds.m"
    {
#line 1045 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
#line 1050 "module_cmds.m"
    {
#line 1050 "module_cmds.m"
      libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 1051 "module_cmds.m"
    {
#line 1051 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 555, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
#line 1059 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "module_cmds.m"
      {
#line 1061 "module_cmds.m"
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
#line 1062 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
#line 1060 "module_cmds.m"
      }
#line 1059 "module_cmds.m"
    else
#line 1054 "module_cmds.m"
      {
#line 1054 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 1054 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
#line 1054 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 1054 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;

#line 1055 "module_cmds.m"
        {
#line 1055 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
#line 1055 "module_cmds.m"
        {
#line 1055 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_35_35, parse_tree__module_cmds__GradeDir_14);
        }
#line 1055 "module_cmds.m"
        {
#line 1055 "module_cmds.m"
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, (MR_String) "libmer_std.beams");
        }
#line 1056 "module_cmds.m"
        {
#line 1056 "module_cmds.m"
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 1058 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 1054 "module_cmds.m"
      }
#line 1067 "module_cmds.m"
    {
#line 1067 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 549, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 3022 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 1069 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1));
#line 1069 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1069 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
#line 1069 "module_cmds.m"
    }
#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__V_41_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 547, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1073 "module_cmds.m"
    {
#line 1073 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1073 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2));
#line 1073 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1073 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
#line 1073 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
#line 1073 "module_cmds.m"
    }
#line 1073 "module_cmds.m"
    {
#line 1073 "module_cmds.m"
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1076 "module_cmds.m"
    {
#line 1076 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__Erlang_25);
    }
#line 1078 "module_cmds.m"
    {
#line 1078 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1077 "module_cmds.m"
    {
#line 1077 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_4[1], parse_tree__module_cmds__V_54_54);
    }
#line 1077 "module_cmds.m"
    {
#line 1077 "module_cmds.m"
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_50_50);
    }
#line 1082 "module_cmds.m"
    {
#line 1082 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
#line 1082 "module_cmds.m"
    {
#line 1082 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR\"/", parse_tree__module_cmds__V_59_59);
    }
#line 1082 "module_cmds.m"
    {
#line 1082 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[5])));
#line 1093 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1093 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1093 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1093 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1092 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1092 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1092 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell \\\n"));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1091 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1091 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "exec "));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1091 "module_cmds.m"
    }
#line 1090 "module_cmds.m"
    {
#line 1090 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "DIR=\140dirname \"\0440\"\140\n"));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1090 "module_cmds.m"
    }
#line 1089 "module_cmds.m"
    {
#line 1089 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "# Generated by the Mercury compiler.\n"));
#line 1089 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1089 "module_cmds.m"
    }
#line 1088 "module_cmds.m"
    {
#line 1088 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 1088 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1088 "module_cmds.m"
    }
#line 1087 "module_cmds.m"
    {
#line 1087 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
#line 1087 "module_cmds.m"
      return;
    }
#line 1039 "module_cmds.m"
  }
#line 1036 "module_cmds.m"
}

#line 980 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 980 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 980 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 980 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 980 "module_cmds.m"
{
#line 985 "module_cmds.m"
  {
#line 985 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 985 "module_cmds.m"
    {
#line 985 "module_cmds.m"
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(parse_tree__module_cmds__NestedClassPrefixes_10, parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__Continue_14, parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19, parse_tree__module_cmds__STATE_VARIABLE_Acc_20);
#line 985 "module_cmds.m"
      return;
    }
#line 985 "module_cmds.m"
  }
#line 980 "module_cmds.m"
}

#line 973 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 973 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 973 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4)
#line 973 "module_cmds.m"
{
#line 975 "module_cmds.m"
  {
#line 975 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 975 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseName_5;
#line 975 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_7_7;

#line 977 "module_cmds.m"
    {
#line 977 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__module_cmds__ClassFileName_3, (MR_String) ".class", &parse_tree__module_cmds__BaseName_5);
    }
#line 975 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 975 "module_cmds.m"
      {
#line 978 "module_cmds.m"
        parse_tree__module_cmds__V_7_7 = (MR_String) "\044";
#line 978 "module_cmds.m"
        {
#line 978 "module_cmds.m"
          *parse_tree__module_cmds__ClassPrefix_4 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__BaseName_5, parse_tree__module_cmds__V_7_7);
        }
#line 978 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 975 "module_cmds.m"
      }
#line 975 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 975 "module_cmds.m"
  }
#line 973 "module_cmds.m"
}

#line 861 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 861 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 861 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 861 "module_cmds.m"
{
#line 864 "module_cmds.m"
  {
#line 864 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_53_53;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
#line 864 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_15;
#line 864 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_16;
#line 864 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_17;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;
#line 864 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_22_22;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_25_25;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_26_26;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_32_32;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_35_35;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_37_37;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_39_39;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_44_44;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_46_46;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 864 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_49_49;

#line 865 "module_cmds.m"
    {
#line 865 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 866 "module_cmds.m"
    {
#line 866 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 520, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3397 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__JarFileName_9);
    }
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 0) = ((MR_Box) (parse_tree__module_cmds__V_22_22));
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "module_cmds.m"
    }
#line 870 "module_cmds.m"
    {
#line 870 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_26_26, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
#line 870 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_26_26, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 870 "module_cmds.m"
    }
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_26_26);
    }
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__V_21_21, parse_tree__module_cmds__V_25_25);
    }
#line 871 "module_cmds.m"
    {
#line 871 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) ";", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
#line 873 "module_cmds.m"
    {
#line 873 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 517, &parse_tree__module_cmds__Java_16);
    }
#line 874 "module_cmds.m"
    {
#line 874 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
#line 882 "module_cmds.m"
    {
#line 882 "module_cmds.m"
      parse_tree__module_cmds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[4])));
#line 882 "module_cmds.m"
    }
#line 882 "module_cmds.m"
    {
#line 882 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) ((MR_String) " jmercury."));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__V_49_49));
#line 882 "module_cmds.m"
    }
#line 882 "module_cmds.m"
    {
#line 882 "module_cmds.m"
      parse_tree__module_cmds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 1) = ((MR_Box) (parse_tree__module_cmds__V_47_47));
#line 882 "module_cmds.m"
    }
#line 881 "module_cmds.m"
    {
#line 881 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 0) = ((MR_Box) ((MR_String) "\n"));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 1) = ((MR_Box) (parse_tree__module_cmds__V_46_46));
#line 881 "module_cmds.m"
    }
#line 881 "module_cmds.m"
    {
#line 881 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_44_44));
#line 881 "module_cmds.m"
    }
#line 881 "module_cmds.m"
    {
#line 881 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 881 "module_cmds.m"
    }
#line 880 "module_cmds.m"
    {
#line 880 "module_cmds.m"
      parse_tree__module_cmds__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 880 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__V_41_41));
#line 880 "module_cmds.m"
    }
#line 879 "module_cmds.m"
    {
#line 879 "module_cmds.m"
      parse_tree__module_cmds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 879 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 1) = ((MR_Box) (parse_tree__module_cmds__V_39_39));
#line 879 "module_cmds.m"
    }
#line 878 "module_cmds.m"
    {
#line 878 "module_cmds.m"
      parse_tree__module_cmds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_35_35, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
#line 878 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_35_35, 1) = ((MR_Box) (parse_tree__module_cmds__V_37_37));
#line 878 "module_cmds.m"
    }
#line 877 "module_cmds.m"
    {
#line 877 "module_cmds.m"
      parse_tree__module_cmds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_32_32, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 877 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_32_32, 1) = ((MR_Box) (parse_tree__module_cmds__V_35_35));
#line 877 "module_cmds.m"
    }
#line 876 "module_cmds.m"
    {
#line 876 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_32_32);
#line 876 "module_cmds.m"
      return;
    }
#line 864 "module_cmds.m"
  }
#line 861 "module_cmds.m"
}

#line 844 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
#line 844 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 844 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 844 "module_cmds.m"
{
#line 844 "module_cmds.m"
  {
#line 844 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 844 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 844 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_HeadVar__2_34;

#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__conv0_HeadVar__2_34 = parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__844__1_1_f_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 844 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__2_34));
#line 844 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 844 "module_cmds.m"
  }
#line 844 "module_cmds.m"
}

#line 834 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 834 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 834 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 834 "module_cmds.m"
{
#line 837 "module_cmds.m"
  {
#line 837 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs0_14;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_15;
#line 837 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_17;
#line 837 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_18;
#line 837 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_19;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_23_23;
#line 837 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 837 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_29_29;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_30_30;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_44_44;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_46_46;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_48_48;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_51_51;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_53_53;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_55_55;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_57_57;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_58_58;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 837 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_62_62;

#line 838 "module_cmds.m"
    {
#line 838 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 839 "module_cmds.m"
    {
#line 839 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 520, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3671 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 842 "module_cmds.m"
    {
#line 842 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
#line 842 "module_cmds.m"
    {
#line 842 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__V_26_26);
    }
#line 842 "module_cmds.m"
    {
#line 842 "module_cmds.m"
      parse_tree__module_cmds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 0) = ((MR_Box) (parse_tree__module_cmds__V_24_24));
#line 842 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "module_cmds.m"
    }
#line 843 "module_cmds.m"
    {
#line 843 "module_cmds.m"
      parse_tree__module_cmds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_30_30, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
#line 843 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_30_30, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 843 "module_cmds.m"
    }
#line 843 "module_cmds.m"
    {
#line 843 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_30_30);
    }
#line 842 "module_cmds.m"
    {
#line 842 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs0_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__V_23_23, parse_tree__module_cmds__V_29_29);
    }
#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_15 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__TypeCtorInfo_67_67, (MR_Word) &parse_tree__module_cmds_scalar_common_5[1], parse_tree__module_cmds__Java_Incl_Dirs0_14);
    }
#line 846 "module_cmds.m"
    {
#line 846 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\\;", parse_tree__module_cmds__Java_Incl_Dirs_15);
    }
#line 848 "module_cmds.m"
    {
#line 848 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 517, &parse_tree__module_cmds__Java_18);
    }
#line 849 "module_cmds.m"
    {
#line 849 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_19);
    }
#line 858 "module_cmds.m"
    {
#line 858 "module_cmds.m"
      parse_tree__module_cmds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_62_62, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_19));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
#line 858 "module_cmds.m"
    }
#line 858 "module_cmds.m"
    {
#line 858 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_62_62));
#line 858 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 1) = ((MR_Box) (parse_tree__module_cmds__V_60_60));
#line 857 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) (parse_tree__module_cmds__Java_18));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_58_58));
#line 857 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_55_55, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_55_55, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 857 "module_cmds.m"
    }
#line 856 "module_cmds.m"
    {
#line 856 "module_cmds.m"
      parse_tree__module_cmds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_53_53, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
#line 856 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_53_53, 1) = ((MR_Box) (parse_tree__module_cmds__V_55_55));
#line 856 "module_cmds.m"
    }
#line 855 "module_cmds.m"
    {
#line 855 "module_cmds.m"
      parse_tree__module_cmds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 0) = ((MR_Box) ((MR_String) "\n"));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 1) = ((MR_Box) (parse_tree__module_cmds__V_53_53));
#line 855 "module_cmds.m"
    }
#line 855 "module_cmds.m"
    {
#line 855 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_17));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 1) = ((MR_Box) (parse_tree__module_cmds__V_51_51));
#line 855 "module_cmds.m"
    }
#line 855 "module_cmds.m"
    {
#line 855 "module_cmds.m"
      parse_tree__module_cmds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 1) = ((MR_Box) (parse_tree__module_cmds__V_50_50));
#line 855 "module_cmds.m"
    }
#line 854 "module_cmds.m"
    {
#line 854 "module_cmds.m"
      parse_tree__module_cmds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
#line 854 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 1) = ((MR_Box) (parse_tree__module_cmds__V_48_48));
#line 854 "module_cmds.m"
    }
#line 853 "module_cmds.m"
    {
#line 853 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 853 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 1) = ((MR_Box) (parse_tree__module_cmds__V_46_46));
#line 853 "module_cmds.m"
    }
#line 852 "module_cmds.m"
    {
#line 852 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 852 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_44_44));
#line 852 "module_cmds.m"
    }
#line 851 "module_cmds.m"
    {
#line 851 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_41_41);
#line 851 "module_cmds.m"
      return;
    }
#line 837 "module_cmds.m"
  }
#line 834 "module_cmds.m"
}

#line 790 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 790 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 790 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 790 "module_cmds.m"
{
#line 793 "module_cmds.m"
  {
#line 793 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
#line 793 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_15;
#line 793 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_16;
#line 793 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_17;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;
#line 793 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_22_22;
#line 793 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_27_27;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_28_28;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_34_34;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_37_37;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_39_39;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_45_45;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_49_49;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_51_51;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_52_52;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_56_56;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_58_58;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_59_59;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_61_61;
#line 793 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;

#line 794 "module_cmds.m"
    {
#line 794 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 795 "module_cmds.m"
    {
#line 795 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 520, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3949 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 798 "module_cmds.m"
    {
#line 798 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
#line 798 "module_cmds.m"
    {
#line 798 "module_cmds.m"
      parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__V_24_24);
    }
#line 798 "module_cmds.m"
    {
#line 798 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 0) = ((MR_Box) (parse_tree__module_cmds__V_22_22));
#line 798 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "module_cmds.m"
    }
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
#line 799 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 799 "module_cmds.m"
    }
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_28_28);
    }
#line 798 "module_cmds.m"
    {
#line 798 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__V_21_21, parse_tree__module_cmds__V_27_27);
    }
#line 800 "module_cmds.m"
    {
#line 800 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
#line 802 "module_cmds.m"
    {
#line 802 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 517, &parse_tree__module_cmds__Java_16);
    }
#line 803 "module_cmds.m"
    {
#line 803 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
#line 816 "module_cmds.m"
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 816 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (parse_tree__module_cmds__V_61_61));
#line 815 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      parse_tree__module_cmds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 815 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_58_58));
#line 815 "module_cmds.m"
    }
#line 814 "module_cmds.m"
    {
#line 814 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 1) = ((MR_Box) (parse_tree__module_cmds__V_56_56));
#line 814 "module_cmds.m"
    }
#line 813 "module_cmds.m"
    {
#line 813 "module_cmds.m"
      parse_tree__module_cmds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 0) = ((MR_Box) ((MR_String) "\n"));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 1) = ((MR_Box) (parse_tree__module_cmds__V_54_54));
#line 813 "module_cmds.m"
    }
#line 813 "module_cmds.m"
    {
#line 813 "module_cmds.m"
      parse_tree__module_cmds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 1) = ((MR_Box) (parse_tree__module_cmds__V_52_52));
#line 813 "module_cmds.m"
    }
#line 813 "module_cmds.m"
    {
#line 813 "module_cmds.m"
      parse_tree__module_cmds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 1) = ((MR_Box) (parse_tree__module_cmds__V_51_51));
#line 813 "module_cmds.m"
    }
#line 812 "module_cmds.m"
    {
#line 812 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) ((MR_String) "esac\n"));
#line 812 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__V_49_49));
#line 812 "module_cmds.m"
    }
#line 811 "module_cmds.m"
    {
#line 811 "module_cmds.m"
      parse_tree__module_cmds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
#line 811 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 1) = ((MR_Box) (parse_tree__module_cmds__V_47_47));
#line 811 "module_cmds.m"
    }
#line 810 "module_cmds.m"
    {
#line 810 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
#line 810 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_45_45));
#line 810 "module_cmds.m"
    }
#line 809 "module_cmds.m"
    {
#line 809 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
#line 809 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 809 "module_cmds.m"
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__V_41_41));
#line 808 "module_cmds.m"
    }
#line 807 "module_cmds.m"
    {
#line 807 "module_cmds.m"
      parse_tree__module_cmds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 807 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 1) = ((MR_Box) (parse_tree__module_cmds__V_39_39));
#line 807 "module_cmds.m"
    }
#line 806 "module_cmds.m"
    {
#line 806 "module_cmds.m"
      parse_tree__module_cmds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 806 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 1) = ((MR_Box) (parse_tree__module_cmds__V_37_37));
#line 806 "module_cmds.m"
    }
#line 805 "module_cmds.m"
    {
#line 805 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_34_34);
#line 805 "module_cmds.m"
      return;
    }
#line 793 "module_cmds.m"
  }
#line 790 "module_cmds.m"
}

#line 742 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void)
#line 742 "module_cmds.m"
{
#line 743 "module_cmds.m"
  {
#line 743 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 746 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__use_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 746 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 4203 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 746 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 743 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 743 "module_cmds.m"
  }
#line 742 "module_cmds.m"
}

#line 723 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void)
#line 723 "module_cmds.m"
{
#line 732 "module_cmds.m"
  {
#line 732 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 732 "module_cmds.m"
    {
#line 732 "module_cmds.m"
      return parse_tree__module_cmds__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 732 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 732 "module_cmds.m"
  }
#line 723 "module_cmds.m"
}

#line 345 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 345 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 345 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
#line 345 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12)
#line 345 "module_cmds.m"
{
#line 350 "module_cmds.m"
  {
#line 350 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 350 "module_cmds.m"
    {
#line 350 "module_cmds.m"
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, parse_tree__module_cmds__Byte_9, parse_tree__module_cmds__Continue_10, parse_tree__module_cmds__Differ_12);
#line 350 "module_cmds.m"
      return;
    }
#line 350 "module_cmds.m"
  }
#line 345 "module_cmds.m"
}

#line 325 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 325 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 325 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6)
#line 325 "module_cmds.m"
{
#line 325 "module_cmds.m"
  {
#line 325 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 325 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_Continue_10;
#line 325 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv0_Differ_12;

#line 325 "module_cmds.m"
    {
#line 325 "module_cmds.m"
      parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_Continue_10, ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv0_Differ_12);
    }
#line 325 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_Continue_10));
#line 325 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv0_Differ_12));
#line 325 "module_cmds.m"
  }
#line 325 "module_cmds.m"
}

#line 318 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
#line 318 "module_cmds.m"
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
#line 318 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
#line 318 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__FilesDiffer_8)
#line 318 "module_cmds.m"
{
#line 323 "module_cmds.m"
  {
#line 323 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 323 "module_cmds.m"
    MR_Word parse_tree__module_cmds__FilesDiffer0_10;
#line 323 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_16_16;
#line 329 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_20_20;
#line 329 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;

#line 325 "module_cmds.m"
    {
#line 325 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 325 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[0]));
#line 325 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 1) = ((MR_Box) (parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1));
#line 325 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 325 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 3) = ((MR_Box) (parse_tree__module_cmds__TmpOutputFileStream_7));
#line 325 "module_cmds.m"
    }
#line 324 "module_cmds.m"
    {
#line 324 "module_cmds.m"
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[1], parse_tree__module_cmds__OutputFileStream_6, parse_tree__module_cmds__V_16_16, ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[1])), &parse_tree__module_cmds__FilesDiffer0_10);
    }
#line 329 "module_cmds.m"
    parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer0_10)) == (MR_mktag((MR_Integer) 0)));
#line 329 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 329 "module_cmds.m"
      {
#line 329 "module_cmds.m"
        parse_tree__module_cmds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer0_10, (MR_Integer) 0)));
#line 329 "module_cmds.m"
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 329 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 329 "module_cmds.m"
          {
#line 329 "module_cmds.m"
            parse_tree__module_cmds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_20_20, (MR_Integer) 0)));
#line 329 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__V_21_21 == (MR_Integer) 0);
#line 329 "module_cmds.m"
          }
#line 329 "module_cmds.m"
      }
#line 341 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 330 "module_cmds.m"
      {
#line 330 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpByteResult2_11;

#line 330 "module_cmds.m"
        {
#line 330 "module_cmds.m"
          mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_7, &parse_tree__module_cmds__TmpByteResult2_11);
        }
#line 334 "module_cmds.m"
#line 334 "module_cmds.m"
        switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult2_11)) {
#line 334 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 334 "module_cmds.m"
          case (MR_Integer) 0:
#line 336 "module_cmds.m"
            *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
#line 334 "module_cmds.m"
            break;
#line 334 "module_cmds.m"
          case (MR_Integer) 1:
#line 332 "module_cmds.m"
            {
#line 333 "module_cmds.m"
              *parse_tree__module_cmds__FilesDiffer_8 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[3];
#line 332 "module_cmds.m"
            }
#line 334 "module_cmds.m"
            break;
#line 334 "module_cmds.m"
          case (MR_Integer) 2:
#line 338 "module_cmds.m"
            {
#line 338 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult2_11, (MR_Integer) 0)));
#line 338 "module_cmds.m"
              MR_Word parse_tree__module_cmds__V_23_23;

#line 339 "module_cmds.m"
              {
#line 339 "module_cmds.m"
                parse_tree__module_cmds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "module_cmds.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 0) = ((MR_Box) (parse_tree__module_cmds__Error_13));
#line 339 "module_cmds.m"
              }
#line 339 "module_cmds.m"
              {
#line 339 "module_cmds.m"
                MR_Word base;
#line 339 "module_cmds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 339 "module_cmds.m"
                *parse_tree__module_cmds__FilesDiffer_8 = base;
#line 339 "module_cmds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_cmds__V_23_23));
#line 339 "module_cmds.m"
              }
#line 338 "module_cmds.m"
            }
#line 334 "module_cmds.m"
            break;
#line 334 "module_cmds.m"
        }
#line 330 "module_cmds.m"
      }
#line 341 "module_cmds.m"
    else
#line 342 "module_cmds.m"
      *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
#line 323 "module_cmds.m"
  }
#line 318 "module_cmds.m"
}

#line 297 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
#line 297 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__Msg_9,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_10,
#line 297 "module_cmds.m"
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
#line 297 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_12)
#line 297 "module_cmds.m"
{
#line 301 "module_cmds.m"
  {
#line 301 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 301 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 301 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MoveRes_15;
#line 301 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_21_21;
#line 301 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 301 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_25_25;
#line 301 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 316 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_17_17;

#line 302 "module_cmds.m"
    {
#line 302 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_8, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 304 "module_cmds.m"
    {
#line 304 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Msg_9, (MR_String) ".\n");
    }
#line 304 "module_cmds.m"
    {
#line 304 "module_cmds.m"
      parse_tree__module_cmds__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\' has ", parse_tree__module_cmds__V_27_27);
    }
#line 304 "module_cmds.m"
    {
#line 304 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__V_25_25);
    }
#line 304 "module_cmds.m"
    {
#line 304 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", parse_tree__module_cmds__V_24_24);
    }
#line 303 "module_cmds.m"
    {
#line 303 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_21_21);
    }
#line 305 "module_cmds.m"
    {
#line 305 "module_cmds.m"
      parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__OutputFileName_10, &parse_tree__module_cmds__MoveRes_15);
    }
#line 309 "module_cmds.m"
    if ((parse_tree__module_cmds__MoveRes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "module_cmds.m"
      *parse_tree__module_cmds__Result_12 = (MR_Integer) 0;
#line 309 "module_cmds.m"
    else
#line 310 "module_cmds.m"
      {
#line 310 "module_cmds.m"
        MR_Word parse_tree__module_cmds__MoveError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MoveRes_15, (MR_Integer) 0)));
#line 310 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_30_30;
#line 310 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;
#line 310 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 310 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_36_36;

#line 311 "module_cmds.m"
        *parse_tree__module_cmds__Result_12 = (MR_Integer) 2;
#line 313 "module_cmds.m"
        {
#line 313 "module_cmds.m"
          parse_tree__module_cmds__V_36_36 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__MoveError_16);
        }
#line 312 "module_cmds.m"
        {
#line 312 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", parse_tree__module_cmds__V_36_36);
        }
#line 312 "module_cmds.m"
        {
#line 312 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__V_34_34);
        }
#line 312 "module_cmds.m"
        {
#line 312 "module_cmds.m"
          parse_tree__module_cmds__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "Error creating \140", parse_tree__module_cmds__V_33_33);
        }
#line 312 "module_cmds.m"
        {
#line 312 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_30_30);
        }
#line 314 "module_cmds.m"
        {
#line 314 "module_cmds.m"
          mercury__io__nl_2_p_0();
        }
#line 310 "module_cmds.m"
      }
#line 316 "module_cmds.m"
    {
#line 316 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__V_17_17);
    }
#line 301 "module_cmds.m"
  }
#line 297 "module_cmds.m"
}

#line 196 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_launcher_batch_file_6_p_0(
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 196 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Pred_9,
#line 196 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 196 "module_cmds.m"
{
#line 1238 "module_cmds.m"
  {
#line 1238 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1238 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1238 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1248 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1240 "module_cmds.m"
    {
#line 1240 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1243 "module_cmds.m"
    {
#line 1243 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1244 "module_cmds.m"
    {
#line 1244 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1248 "module_cmds.m"
    {
#line 1248 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1249 "module_cmds.m"
    {
#line 1249 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1255 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1256 "module_cmds.m"
      {
#line 1256 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1256 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1257 "module_cmds.m"
        {
#line 1257 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1257 "module_cmds.m"
          return;
        }
#line 1256 "module_cmds.m"
      }
#line 1255 "module_cmds.m"
    else
#line 1251 "module_cmds.m"
      {
#line 1251 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1252 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1252 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34;

#line 1252 "module_cmds.m"
        {
#line 1252 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34);
        }
#line 1253 "module_cmds.m"
        {
#line 1253 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1254 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1251 "module_cmds.m"
      }
#line 1238 "module_cmds.m"
  }
#line 196 "module_cmds.m"
}

#line 192 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_launcher_shell_script_6_p_0(
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 192 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Pred_9,
#line 192 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 192 "module_cmds.m"
{
#line 1199 "module_cmds.m"
  {
#line 1199 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1199 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1199 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 1199 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_29_29;
#line 1209 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1201 "module_cmds.m"
    {
#line 1201 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1204 "module_cmds.m"
    {
#line 1204 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_14);
    }
#line 1206 "module_cmds.m"
    {
#line 1206 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1205 "module_cmds.m"
    {
#line 1205 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_29_29);
    }
#line 1205 "module_cmds.m"
    {
#line 1205 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_26_26);
    }
#line 1209 "module_cmds.m"
    {
#line 1209 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1210 "module_cmds.m"
    {
#line 1210 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1230 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1231 "module_cmds.m"
      {
#line 1231 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;
#line 1231 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1232 "module_cmds.m"
        {
#line 1232 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
#line 1232 "module_cmds.m"
        {
#line 1232 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_35_35);
#line 1232 "module_cmds.m"
          return;
        }
#line 1231 "module_cmds.m"
      }
#line 1230 "module_cmds.m"
    else
#line 1212 "module_cmds.m"
      {
#line 1212 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1212 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ChmodResult_18;
#line 1212 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_38_38;
#line 1213 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1213 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36;

#line 1213 "module_cmds.m"
        {
#line 1213 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36);
        }
#line 1214 "module_cmds.m"
        {
#line 1214 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          parse_tree__module_cmds__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_38_38, &parse_tree__module_cmds__ChmodResult_18);
        }
#line 1225 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "module_cmds.m"
          {
#line 1226 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
#line 1226 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_43_43;

#line 1227 "module_cmds.m"
            {
#line 1227 "module_cmds.m"
              parse_tree__module_cmds__V_43_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
#line 1227 "module_cmds.m"
            {
#line 1227 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_43_43);
#line 1227 "module_cmds.m"
              return;
            }
#line 1226 "module_cmds.m"
          }
#line 1225 "module_cmds.m"
        else
#line 1217 "module_cmds.m"
          {
#line 1217 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

#line 1218 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
#line 1221 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 1219 "module_cmds.m"
              {
#line 1219 "module_cmds.m"
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1220 "module_cmds.m"
                {
#line 1220 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
#line 1220 "module_cmds.m"
                  return;
                }
#line 1219 "module_cmds.m"
              }
#line 1221 "module_cmds.m"
            else
#line 1222 "module_cmds.m"
              {
#line 1222 "module_cmds.m"
                {
#line 1222 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1222 "module_cmds.m"
                  return;
                }
#line 1222 "module_cmds.m"
              }
#line 1217 "module_cmds.m"
          }
#line 1212 "module_cmds.m"
      }
#line 1199 "module_cmds.m"
  }
#line 192 "module_cmds.m"
}

#line 187 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_erlang_shell_script_5_p_0(
#line 187 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 187 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 187 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 187 "module_cmds.m"
{
#line 1017 "module_cmds.m"
  {
#line 1017 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1017 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_10;

#line 1018 "module_cmds.m"
    {
#line 1018 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_10);
    }
#line 1027 "module_cmds.m"
#line 1027 "module_cmds.m"
    switch (parse_tree__module_cmds__TargetEnvType_10) {
#line 1027 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1027 "module_cmds.m"
      case (MR_Integer) 1:
#line 1027 "module_cmds.m"
      case (MR_Integer) 2:
#line 1027 "module_cmds.m"
      case (MR_Integer) 0:
#line 1023 "module_cmds.m"
        {
#line 1023 "module_cmds.m"
          MR_String parse_tree__module_cmds__FileName_31;
#line 1023 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Verbose_32;
#line 1023 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OpenResult_34;
#line 1023 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_42_42;
#line 1023 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_45_45;
#line 1209 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_33_33;

#line 1201 "module_cmds.m"
          {
#line 1201 "module_cmds.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_31);
          }
#line 1204 "module_cmds.m"
          {
#line 1204 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_32);
          }
#line 1206 "module_cmds.m"
          {
#line 1206 "module_cmds.m"
            parse_tree__module_cmds__V_45_45 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_31, (MR_String) "\'...\n");
          }
#line 1205 "module_cmds.m"
          {
#line 1205 "module_cmds.m"
            parse_tree__module_cmds__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_45_45);
          }
#line 1205 "module_cmds.m"
          {
#line 1205 "module_cmds.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, parse_tree__module_cmds__V_42_42);
          }
#line 1209 "module_cmds.m"
          {
#line 1209 "module_cmds.m"
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__V_33_33);
          }
#line 1210 "module_cmds.m"
          {
#line 1210 "module_cmds.m"
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__OpenResult_34);
          }
#line 1230 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 1231 "module_cmds.m"
            {
#line 1231 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_51_51;
#line 1231 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Message_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));

#line 1232 "module_cmds.m"
              {
#line 1232 "module_cmds.m"
                parse_tree__module_cmds__V_51_51 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_65);
              }
#line 1232 "module_cmds.m"
              {
#line 1232 "module_cmds.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_51_51);
#line 1232 "module_cmds.m"
                return;
              }
#line 1231 "module_cmds.m"
            }
#line 1230 "module_cmds.m"
          else
#line 1212 "module_cmds.m"
            {
#line 1212 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));
#line 1212 "module_cmds.m"
              MR_Word parse_tree__module_cmds__ChmodResult_36;
#line 1212 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_54_54;

#line 1213 "module_cmds.m"
              {
#line 1213 "module_cmds.m"
                parse_tree__module_cmds__write_erlang_shell_script_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Stream_35);
              }
#line 1214 "module_cmds.m"
              {
#line 1214 "module_cmds.m"
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_35);
              }
#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_31);
              }
#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_54_54, &parse_tree__module_cmds__ChmodResult_36);
              }
#line 1225 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_36)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "module_cmds.m"
                {
#line 1226 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Message_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));
#line 1226 "module_cmds.m"
                  MR_String parse_tree__module_cmds__V_59_59;

#line 1227 "module_cmds.m"
                  {
#line 1227 "module_cmds.m"
                    parse_tree__module_cmds__V_59_59 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_38);
                  }
#line 1227 "module_cmds.m"
                  {
#line 1227 "module_cmds.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_59_59);
#line 1227 "module_cmds.m"
                    return;
                  }
#line 1226 "module_cmds.m"
                }
#line 1225 "module_cmds.m"
              else
#line 1217 "module_cmds.m"
                {
#line 1217 "module_cmds.m"
                  MR_Integer parse_tree__module_cmds__Status_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));

#line 1218 "module_cmds.m"
                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_37 == (MR_Integer) 0);
#line 1221 "module_cmds.m"
                  if (parse_tree__module_cmds__succeeded)
#line 1219 "module_cmds.m"
                    {
#line 1219 "module_cmds.m"
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1220 "module_cmds.m"
                      {
#line 1220 "module_cmds.m"
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, (MR_String) "% done.\n");
#line 1220 "module_cmds.m"
                        return;
                      }
#line 1219 "module_cmds.m"
                    }
#line 1221 "module_cmds.m"
                  else
#line 1222 "module_cmds.m"
                    {
#line 1222 "module_cmds.m"
                      {
#line 1222 "module_cmds.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1222 "module_cmds.m"
                        return;
                      }
#line 1222 "module_cmds.m"
                    }
#line 1217 "module_cmds.m"
                }
#line 1212 "module_cmds.m"
            }
#line 1023 "module_cmds.m"
        }
#line 1027 "module_cmds.m"
        break;
#line 1027 "module_cmds.m"
      case (MR_Integer) 4:
#line 1027 "module_cmds.m"
      case (MR_Integer) 3:
#line 1031 "module_cmds.m"
        {
#line 1031 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
#line 1031 "module_cmds.m"
          return;
        }
#line 1027 "module_cmds.m"
        break;
#line 1027 "module_cmds.m"
    }
#line 1017 "module_cmds.m"
  }
#line 187 "module_cmds.m"
}

#line 176 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__get_env_classpath_3_p_0(
#line 176 "module_cmds.m"
  MR_String * parse_tree__module_cmds__Classpath_4)
#line 176 "module_cmds.m"
{
#line 997 "module_cmds.m"
  {
#line 997 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 997 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeCP_6;

#line 998 "module_cmds.m"
    {
#line 998 "module_cmds.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "CLASSPATH", &parse_tree__module_cmds__MaybeCP_6);
    }
#line 1001 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeCP_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "module_cmds.m"
      {
#line 1002 "module_cmds.m"
        MR_Word parse_tree__module_cmds__MaybeJCP_7;

#line 1003 "module_cmds.m"
        {
#line 1003 "module_cmds.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "java.class.path", &parse_tree__module_cmds__MaybeJCP_7);
        }
#line 1006 "module_cmds.m"
        if ((parse_tree__module_cmds__MaybeJCP_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = (MR_String) "";
#line 1006 "module_cmds.m"
        else
#line 1005 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeJCP_7, (MR_Integer) 0)));
#line 1002 "module_cmds.m"
      }
#line 1001 "module_cmds.m"
    else
#line 1000 "module_cmds.m"
      *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeCP_6, (MR_Integer) 0)));
#line 997 "module_cmds.m"
  }
#line 176 "module_cmds.m"
}

#line 167 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(
#line 167 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_4,
#line 167 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFiles_5,
#line 167 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ListClassFiles_6)
#line 167 "module_cmds.m"
{
#line 951 "module_cmds.m"
  {
#line 951 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 951 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_7;
#line 951 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_8;
#line 951 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_9;

#line 952 "module_cmds.m"
    {
#line 952 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 647, &parse_tree__module_cmds__UseSubdirs_7);
    }
#line 953 "module_cmds.m"
    {
#line 953 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 648, &parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 954 "module_cmds.m"
    {
#line 954 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_9 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_7, parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 968 "module_cmds.m"
#line 968 "module_cmds.m"
    switch (parse_tree__module_cmds__AnySubdirs_9) {
#line 968 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 968 "module_cmds.m"
      case (MR_Integer) 0:
#line 970 "module_cmds.m"
        *parse_tree__module_cmds__ListClassFiles_6 = parse_tree__module_cmds__ClassFiles_5;
#line 968 "module_cmds.m"
        break;
#line 968 "module_cmds.m"
      case (MR_Integer) 1:
#line 956 "module_cmds.m"
        {
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__ClassSubdir_10;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_14_14;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_15_15;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_17_17;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_19_19;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_20_20;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_22_22;
#line 956 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_24_24;

#line 957 "module_cmds.m"
          {
#line 957 "module_cmds.m"
            parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_4, &parse_tree__module_cmds__ClassSubdir_10);
          }
#line 967 "module_cmds.m"
          {
#line 967 "module_cmds.m"
            parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, (MR_String) "/| |\'\140");
          }
#line 967 "module_cmds.m"
          {
#line 967 "module_cmds.m"
            parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", parse_tree__module_cmds__V_24_24);
          }
#line 966 "module_cmds.m"
          {
#line 966 "module_cmds.m"
            parse_tree__module_cmds__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__module_cmds__V_22_22);
          }
#line 966 "module_cmds.m"
          {
#line 966 "module_cmds.m"
            parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassFiles_5, parse_tree__module_cmds__V_20_20);
          }
#line 966 "module_cmds.m"
          {
#line 966 "module_cmds.m"
            parse_tree__module_cmds__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", parse_tree__module_cmds__V_19_19);
          }
#line 965 "module_cmds.m"
          {
#line 965 "module_cmds.m"
            parse_tree__module_cmds__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", parse_tree__module_cmds__V_17_17);
          }
#line 965 "module_cmds.m"
          {
#line 965 "module_cmds.m"
            parse_tree__module_cmds__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, parse_tree__module_cmds__V_15_15);
          }
#line 965 "module_cmds.m"
          {
#line 965 "module_cmds.m"
            *parse_tree__module_cmds__ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", parse_tree__module_cmds__V_14_14);
          }
#line 956 "module_cmds.m"
        }
#line 968 "module_cmds.m"
        break;
#line 968 "module_cmds.m"
    }
#line 951 "module_cmds.m"
  }
#line 167 "module_cmds.m"
}

#line 942 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 942 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 942 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 942 "module_cmds.m"
{
#line 942 "module_cmds.m"
  {
#line 942 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 942 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 942 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_HeadVar__3_3;

#line 942 "module_cmds.m"
    {
#line 942 "module_cmds.m"
      parse_tree__module_cmds__conv3_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 942 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_HeadVar__3_3));
#line 942 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 942 "module_cmds.m"
  }
#line 942 "module_cmds.m"
}

#line 931 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 931 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 931 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8)
#line 931 "module_cmds.m"
{
#line 931 "module_cmds.m"
  {
#line 931 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 931 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv2_Continue_14;
#line 931 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20;

#line 931 "module_cmds.m"
    {
#line 931 "module_cmds.m"
      parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), ((MR_String) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv2_Continue_14, ((MR_Word) parse_tree__module_cmds__wrapper_arg_5), &parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20);
    }
#line 931 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv2_Continue_14));
#line 931 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_6 = ((MR_Box) (parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20));
#line 931 "module_cmds.m"
  }
#line 931 "module_cmds.m"
}

#line 924 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 924 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 924 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 924 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2)
#line 924 "module_cmds.m"
{
#line 924 "module_cmds.m"
  {
#line 924 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 924 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 924 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_ClassPrefix_4;

#line 924 "module_cmds.m"
    {
#line 924 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__make_nested_class_prefix_2_p_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv0_ClassPrefix_4);
    }
#line 924 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 924 "module_cmds.m"
      {
#line 924 "module_cmds.m"
        *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_ClassPrefix_4));
#line 924 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 924 "module_cmds.m"
      }
#line 924 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 924 "module_cmds.m"
  }
#line 924 "module_cmds.m"
}

#line 160 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0(
#line 160 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 160 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainClassFiles_8,
#line 160 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassSubDir_9,
#line 160 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__ListClassFiles_10)
#line 160 "module_cmds.m"
{
#line 912 "module_cmds.m"
  {
#line 912 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_42_42;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_12;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_13;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_14;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixes_15;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixesSet_16;
#line 912 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchDir_17;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_19;
#line 912 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_32_32;

#line 913 "module_cmds.m"
    {
#line 913 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 647, &parse_tree__module_cmds__UseSubdirs_12);
    }
#line 914 "module_cmds.m"
    {
#line 914 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 648, &parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 915 "module_cmds.m"
    {
#line 915 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_14 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_12, parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 919 "module_cmds.m"
#line 919 "module_cmds.m"
    switch (parse_tree__module_cmds__AnySubdirs_14) {
#line 919 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 919 "module_cmds.m"
      case (MR_Integer) 0:
#line 921 "module_cmds.m"
        {
#line 921 "module_cmds.m"
          *parse_tree__module_cmds__ClassSubDir_9 = mercury__dir__this_directory_0_f_0();
        }
#line 919 "module_cmds.m"
        break;
#line 919 "module_cmds.m"
      case (MR_Integer) 1:
#line 918 "module_cmds.m"
        {
#line 918 "module_cmds.m"
          parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__ClassSubDir_9);
        }
#line 919 "module_cmds.m"
        break;
#line 919 "module_cmds.m"
    }
#line 5498 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 924 "module_cmds.m"
    {
#line 924 "module_cmds.m"
      mercury__list__filter_map_3_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, (MR_Word) &parse_tree__module_cmds_scalar_common_5[0], parse_tree__module_cmds__MainClassFiles_8, &parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 926 "module_cmds.m"
    {
#line 926 "module_cmds.m"
      parse_tree__module_cmds__NestedClassPrefixesSet_16 = mercury__set__from_list_1_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 928 "module_cmds.m"
    {
#line 928 "module_cmds.m"
      parse_tree__module_cmds__SearchDir_17 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "jmercury");
    }
#line 931 "module_cmds.m"
    {
#line 931 "module_cmds.m"
      parse_tree__module_cmds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 931 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
#line 931 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
#line 931 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 931 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 3) = ((MR_Box) (parse_tree__module_cmds__NestedClassPrefixesSet_16));
#line 931 "module_cmds.m"
    }
#line 930 "module_cmds.m"
    {
#line 930 "module_cmds.m"
      mercury__dir__recursive_foldl2_7_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[0], parse_tree__module_cmds__V_32_32, parse_tree__module_cmds__SearchDir_17, (MR_Integer) 1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_cmds__Result_19);
    }
#line 946 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_19)) == (MR_mktag((MR_Integer) 1))))
#line 947 "module_cmds.m"
      {
#line 947 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 1)));
#line 947 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 947 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));

#line 948 "module_cmds.m"
        {
#line 948 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 948 "module_cmds.m"
        {
#line 948 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", parse_tree__module_cmds__V_37_37);
#line 948 "module_cmds.m"
          return;
        }
#line 947 "module_cmds.m"
      }
#line 946 "module_cmds.m"
    else
#line 934 "module_cmds.m"
      {
#line 934 "module_cmds.m"
        MR_Word parse_tree__module_cmds__NestedClassFiles_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));
#line 934 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles0_21;
#line 934 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles_22;
#line 937 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_54_54;

#line 935 "module_cmds.m"
        {
#line 935 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles0_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__MainClassFiles_8, parse_tree__module_cmds__NestedClassFiles_20);
        }
#line 937 "module_cmds.m"
        {
#line 937 "module_cmds.m"
          parse_tree__module_cmds__V_54_54 = mercury__dir__this_directory_0_f_0();
        }
#line 937 "module_cmds.m"
        parse_tree__module_cmds__succeeded = (strcmp(*parse_tree__module_cmds__ClassSubDir_9, parse_tree__module_cmds__V_54_54) == 0);
#line 939 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 938 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles_22 = parse_tree__module_cmds__AllClassFiles0_21;
#line 939 "module_cmds.m"
        else
#line 940 "module_cmds.m"
          {
#line 940 "module_cmds.m"
            MR_String parse_tree__module_cmds__ClassSubDirSep_23;
#line 940 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_39_39;

#line 940 "module_cmds.m"
            {
#line 940 "module_cmds.m"
              parse_tree__module_cmds__ClassSubDirSep_23 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "");
            }
#line 942 "module_cmds.m"
            {
#line 942 "module_cmds.m"
              parse_tree__module_cmds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 942 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 942 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
#line 942 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 942 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 3) = ((MR_Box) (parse_tree__module_cmds__ClassSubDirSep_23));
#line 942 "module_cmds.m"
            }
#line 941 "module_cmds.m"
            {
#line 941 "module_cmds.m"
              parse_tree__module_cmds__AllClassFiles_22 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__V_39_39, parse_tree__module_cmds__AllClassFiles0_21);
            }
#line 940 "module_cmds.m"
          }
#line 945 "module_cmds.m"
        {
#line 945 "module_cmds.m"
          mercury__list__sort_2_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__AllClassFiles_22, parse_tree__module_cmds__ListClassFiles_10);
#line 945 "module_cmds.m"
          return;
        }
#line 934 "module_cmds.m"
      }
#line 912 "module_cmds.m"
  }
#line 160 "module_cmds.m"
}

#line 153 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
#line 153 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_3,
#line 153 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9)
#line 153 "module_cmds.m"
{
#line 887 "module_cmds.m"
  {
#line 887 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 887 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdlibDir_5;
#line 887 "module_cmds.m"
    MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 889 "module_cmds.m"
    {
#line 889 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 555, &parse_tree__module_cmds__MaybeStdlibDir_5);
    }
#line 907 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdlibDir_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 907 "module_cmds.m"
    else
#line 892 "module_cmds.m"
      {
#line 892 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TypeCtorInfo_44_44;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdlibDir_5, (MR_Integer) 0)));
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__GradeDir_7;
#line 892 "module_cmds.m"
        MR_Word parse_tree__module_cmds__SourceDebug_8;
#line 892 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_31_31;
#line 892 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_39_39;
#line 892 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_40_40;

#line 893 "module_cmds.m"
        {
#line 893 "module_cmds.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_3, &parse_tree__module_cmds__GradeDir_7);
        }
#line 895 "module_cmds.m"
        {
#line 895 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 236, &parse_tree__module_cmds__SourceDebug_8);
        }
#line 902 "module_cmds.m"
#line 902 "module_cmds.m"
        switch (parse_tree__module_cmds__SourceDebug_8) {
#line 902 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 902 "module_cmds.m"
          case (MR_Integer) 0:
#line 903 "module_cmds.m"
            parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 902 "module_cmds.m"
            break;
#line 902 "module_cmds.m"
          case (MR_Integer) 1:
#line 898 "module_cmds.m"
            {
#line 898 "module_cmds.m"
              MR_Word parse_tree__module_cmds__TypeCtorInfo_43_43;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_13_13;
#line 898 "module_cmds.m"
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_15_15;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_16_16;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_19_19;
#line 898 "module_cmds.m"
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_21_21;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_22_22;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_25_25;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_27_27;
#line 898 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_28_28;

#line 899 "module_cmds.m"
              {
#line 899 "module_cmds.m"
                parse_tree__module_cmds__V_16_16 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 899 "module_cmds.m"
              {
#line 899 "module_cmds.m"
                parse_tree__module_cmds__V_15_15 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_16_16, parse_tree__module_cmds__GradeDir_7);
              }
#line 899 "module_cmds.m"
              {
#line 899 "module_cmds.m"
                parse_tree__module_cmds__V_13_13 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_15_15, (MR_String) "mer_browser.jar");
              }
#line 5758 "parse_tree.module_cmds.c"
              parse_tree__module_cmds__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 899 "module_cmds.m"
              {
#line 899 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_13_13)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14);
              }
#line 900 "module_cmds.m"
              {
#line 900 "module_cmds.m"
                parse_tree__module_cmds__V_22_22 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 900 "module_cmds.m"
              {
#line 900 "module_cmds.m"
                parse_tree__module_cmds__V_21_21 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_22_22, parse_tree__module_cmds__GradeDir_7);
              }
#line 900 "module_cmds.m"
              {
#line 900 "module_cmds.m"
                parse_tree__module_cmds__V_19_19 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_21_21, (MR_String) "mer_mdbcomp.jar");
              }
#line 900 "module_cmds.m"
              {
#line 900 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_19_19)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20);
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_27_27 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_28_28, parse_tree__module_cmds__GradeDir_7);
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_25_25 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_27_27, (MR_String) "mer_ssdb.jar");
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_25_25)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26);
              }
#line 898 "module_cmds.m"
            }
#line 902 "module_cmds.m"
            break;
#line 902 "module_cmds.m"
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, parse_tree__module_cmds__GradeDir_7);
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_33_33, (MR_String) "mer_std.jar");
        }
#line 5826 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_31_31)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32);
        }
#line 906 "module_cmds.m"
        {
#line 906 "module_cmds.m"
          parse_tree__module_cmds__V_40_40 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 906 "module_cmds.m"
        {
#line 906 "module_cmds.m"
          parse_tree__module_cmds__V_39_39 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_40_40, parse_tree__module_cmds__GradeDir_7);
        }
#line 906 "module_cmds.m"
        {
#line 906 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_39_39, (MR_String) "mer_rt.jar");
        }
#line 906 "module_cmds.m"
        {
#line 906 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_37_37)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32, parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9);
#line 906 "module_cmds.m"
          return;
        }
#line 892 "module_cmds.m"
      }
#line 887 "module_cmds.m"
  }
#line 153 "module_cmds.m"
}

#line 146 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_java_shell_script_5_p_0(
#line 146 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 146 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 146 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 146 "module_cmds.m"
{
#line 763 "module_cmds.m"
  {
#line 763 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 763 "module_cmds.m"
    MR_String parse_tree__module_cmds__JarFileName_11;
#line 763 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_12;

#line 765 "module_cmds.m"
    {
#line 765 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) ".jar", (MR_Integer) 1, &parse_tree__module_cmds__JarFileName_11);
    }
#line 767 "module_cmds.m"
    {
#line 767 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_12);
    }
#line 775 "module_cmds.m"
#line 775 "module_cmds.m"
    switch (parse_tree__module_cmds__TargetEnvType_12) {
#line 775 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 775 "module_cmds.m"
      case (MR_Integer) 1:
#line 775 "module_cmds.m"
      case (MR_Integer) 0:
#line 771 "module_cmds.m"
        {
#line 771 "module_cmds.m"
          MR_String parse_tree__module_cmds__FileName_40;
#line 771 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Verbose_41;
#line 771 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OpenResult_43;
#line 771 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_51_51;
#line 771 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_54_54;
#line 1209 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_42_42;

#line 1201 "module_cmds.m"
          {
#line 1201 "module_cmds.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_40);
          }
#line 1204 "module_cmds.m"
          {
#line 1204 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_41);
          }
#line 1206 "module_cmds.m"
          {
#line 1206 "module_cmds.m"
            parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_40, (MR_String) "\'...\n");
          }
#line 1205 "module_cmds.m"
          {
#line 1205 "module_cmds.m"
            parse_tree__module_cmds__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_54_54);
          }
#line 1205 "module_cmds.m"
          {
#line 1205 "module_cmds.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, parse_tree__module_cmds__V_51_51);
          }
#line 1209 "module_cmds.m"
          {
#line 1209 "module_cmds.m"
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__V_42_42);
          }
#line 1210 "module_cmds.m"
          {
#line 1210 "module_cmds.m"
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__OpenResult_43);
          }
#line 1230 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_43)) == (MR_mktag((MR_Integer) 1))))
#line 1231 "module_cmds.m"
            {
#line 1231 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_60_60;
#line 1231 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Message_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));

#line 1232 "module_cmds.m"
              {
#line 1232 "module_cmds.m"
                parse_tree__module_cmds__V_60_60 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_74);
              }
#line 1232 "module_cmds.m"
              {
#line 1232 "module_cmds.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_60_60);
#line 1232 "module_cmds.m"
                return;
              }
#line 1231 "module_cmds.m"
            }
#line 1230 "module_cmds.m"
          else
#line 1212 "module_cmds.m"
            {
#line 1212 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Stream_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));
#line 1212 "module_cmds.m"
              MR_Word parse_tree__module_cmds__ChmodResult_45;
#line 1212 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_63_63;

#line 1213 "module_cmds.m"
              {
#line 1213 "module_cmds.m"
                parse_tree__module_cmds__write_java_shell_script_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Stream_44);
              }
#line 1214 "module_cmds.m"
              {
#line 1214 "module_cmds.m"
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_44);
              }
#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                parse_tree__module_cmds__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_40);
              }
#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_63_63, &parse_tree__module_cmds__ChmodResult_45);
              }
#line 1225 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_45)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "module_cmds.m"
                {
#line 1226 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Message_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));
#line 1226 "module_cmds.m"
                  MR_String parse_tree__module_cmds__V_68_68;

#line 1227 "module_cmds.m"
                  {
#line 1227 "module_cmds.m"
                    parse_tree__module_cmds__V_68_68 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_47);
                  }
#line 1227 "module_cmds.m"
                  {
#line 1227 "module_cmds.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_68_68);
#line 1227 "module_cmds.m"
                    return;
                  }
#line 1226 "module_cmds.m"
                }
#line 1225 "module_cmds.m"
              else
#line 1217 "module_cmds.m"
                {
#line 1217 "module_cmds.m"
                  MR_Integer parse_tree__module_cmds__Status_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));

#line 1218 "module_cmds.m"
                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_46 == (MR_Integer) 0);
#line 1221 "module_cmds.m"
                  if (parse_tree__module_cmds__succeeded)
#line 1219 "module_cmds.m"
                    {
#line 1219 "module_cmds.m"
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1220 "module_cmds.m"
                      {
#line 1220 "module_cmds.m"
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, (MR_String) "% done.\n");
#line 1220 "module_cmds.m"
                        return;
                      }
#line 1219 "module_cmds.m"
                    }
#line 1221 "module_cmds.m"
                  else
#line 1222 "module_cmds.m"
                    {
#line 1222 "module_cmds.m"
                      {
#line 1222 "module_cmds.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1222 "module_cmds.m"
                        return;
                      }
#line 1222 "module_cmds.m"
                    }
#line 1217 "module_cmds.m"
                }
#line 1212 "module_cmds.m"
            }
#line 771 "module_cmds.m"
        }
#line 775 "module_cmds.m"
        break;
#line 775 "module_cmds.m"
      case (MR_Integer) 2:
#line 777 "module_cmds.m"
        {
#line 777 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
#line 777 "module_cmds.m"
          return;
        }
#line 775 "module_cmds.m"
        break;
#line 775 "module_cmds.m"
      case (MR_Integer) 4:
#line 775 "module_cmds.m"
      case (MR_Integer) 3:
#line 785 "module_cmds.m"
        {
#line 785 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
#line 785 "module_cmds.m"
          return;
        }
#line 775 "module_cmds.m"
        break;
#line 775 "module_cmds.m"
    }
#line 763 "module_cmds.m"
  }
#line 146 "module_cmds.m"
}

#line 136 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_command_string_3_p_0(
#line 136 "module_cmds.m"
  MR_String parse_tree__module_cmds__String0_4,
#line 136 "module_cmds.m"
  MR_Word parse_tree__module_cmds__QuoteType_5,
#line 136 "module_cmds.m"
  MR_String * parse_tree__module_cmds__String_6)
#line 136 "module_cmds.m"
{
#line 715 "module_cmds.m"
  {
#line 715 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 746 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__make_command_string_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 746 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 6135 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 746 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 715 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 713 "module_cmds.m"
      {
#line 713 "module_cmds.m"
        MR_String parse_tree__module_cmds__Quote_7;
#line 713 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_8_8;
#line 713 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_10_10;
#line 713 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_11_11;
#line 713 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_12_12;

#line 710 "module_cmds.m"
#line 710 "module_cmds.m"
        switch (parse_tree__module_cmds__QuoteType_5) {
#line 710 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 710 "module_cmds.m"
          case (MR_Integer) 1:
#line 712 "module_cmds.m"
            parse_tree__module_cmds__Quote_7 = (MR_String) " \"";
#line 710 "module_cmds.m"
            break;
#line 710 "module_cmds.m"
          case (MR_Integer) 0:
#line 709 "module_cmds.m"
            parse_tree__module_cmds__Quote_7 = (MR_String) " \'";
#line 710 "module_cmds.m"
            break;
#line 710 "module_cmds.m"
        }
#line 714 "module_cmds.m"
        {
#line 714 "module_cmds.m"
          parse_tree__module_cmds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "module_cmds.m"
        }
#line 714 "module_cmds.m"
        {
#line 714 "module_cmds.m"
          parse_tree__module_cmds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 0) = ((MR_Box) (parse_tree__module_cmds__String0_4));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 1) = ((MR_Box) (parse_tree__module_cmds__V_12_12));
#line 714 "module_cmds.m"
        }
#line 714 "module_cmds.m"
        {
#line 714 "module_cmds.m"
          parse_tree__module_cmds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 1) = ((MR_Box) (parse_tree__module_cmds__V_11_11));
#line 714 "module_cmds.m"
        }
#line 714 "module_cmds.m"
        {
#line 714 "module_cmds.m"
          parse_tree__module_cmds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
#line 714 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 1) = ((MR_Box) (parse_tree__module_cmds__V_10_10));
#line 714 "module_cmds.m"
        }
#line 714 "module_cmds.m"
        {
#line 714 "module_cmds.m"
          mercury__string__append_list_2_p_0(parse_tree__module_cmds__V_8_8, parse_tree__module_cmds__String_6);
#line 714 "module_cmds.m"
          return;
        }
#line 713 "module_cmds.m"
      }
#line 715 "module_cmds.m"
    else
#line 716 "module_cmds.m"
      *parse_tree__module_cmds__String_6 = parse_tree__module_cmds__String0_4;
#line 715 "module_cmds.m"
  }
#line 136 "module_cmds.m"
}

#line 685 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 685 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 685 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
#line 685 "module_cmds.m"
{
#line 685 "module_cmds.m"
  {
#line 685 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

#line 685 "module_cmds.m"
    {
#line 685 "module_cmds.m"
      mercury__io__write_char_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__module_cmds__wrapper_arg_1));
#line 685 "module_cmds.m"
      return;
    }
#line 685 "module_cmds.m"
  }
#line 685 "module_cmds.m"
}

#line 130 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(
#line 130 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_9,
#line 130 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ErrorStream_10,
#line 130 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Verbosity_11,
#line 130 "module_cmds.m"
  MR_String parse_tree__module_cmds__Command_12,
#line 130 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MaybeProcessOutput_13,
#line 130 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_14)
#line 130 "module_cmds.m"
{
#line 551 "module_cmds.m"
  {
#line 551 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 551 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__OldStatus_16;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_17;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__PrintCommand_18;
#line 551 "module_cmds.m"
    MR_String parse_tree__module_cmds__TmpFile_19;
#line 551 "module_cmds.m"
    MR_String parse_tree__module_cmds__CommandRedirected_20;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_21;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__CommandSucceeded_23;
#line 551 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessedTmpFile_27;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__ProcessOutputSucceeded_33;
#line 551 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TmpFileRes_36;
#line 674 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessOutput_26;
#line 702 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;

#line 553 "module_cmds.m"
    {
#line 553 "module_cmds.m"
      mercury__io__get_exit_status_3_p_0(&parse_tree__module_cmds__OldStatus_16);
    }
#line 554 "module_cmds.m"
    {
#line 554 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_17);
    }
#line 558 "module_cmds.m"
#line 558 "module_cmds.m"
    switch (parse_tree__module_cmds__Verbosity_11) {
#line 558 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 558 "module_cmds.m"
      case (MR_Integer) 0:
#line 556 "module_cmds.m"
        parse_tree__module_cmds__PrintCommand_18 = parse_tree__module_cmds__Verbose_17;
#line 558 "module_cmds.m"
        break;
#line 558 "module_cmds.m"
      case (MR_Integer) 1:
#line 559 "module_cmds.m"
        {
#line 560 "module_cmds.m"
          {
#line 560 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 51, &parse_tree__module_cmds__PrintCommand_18);
          }
#line 559 "module_cmds.m"
        }
#line 558 "module_cmds.m"
        break;
#line 558 "module_cmds.m"
    }
#line 568 "module_cmds.m"
#line 568 "module_cmds.m"
    switch (parse_tree__module_cmds__PrintCommand_18) {
#line 568 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "module_cmds.m"
      case (MR_Integer) 0:
#line 569 "module_cmds.m"
        {
#line 569 "module_cmds.m"
        }
#line 568 "module_cmds.m"
        break;
#line 568 "module_cmds.m"
      case (MR_Integer) 1:
#line 563 "module_cmds.m"
        {
#line 564 "module_cmds.m"
          {
#line 564 "module_cmds.m"
            mercury__io__write_string_3_p_0((MR_String) "% Invoking system command \140");
          }
#line 565 "module_cmds.m"
          {
#line 565 "module_cmds.m"
            mercury__io__write_string_3_p_0(parse_tree__module_cmds__Command_12);
          }
#line 566 "module_cmds.m"
          {
#line 566 "module_cmds.m"
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
#line 567 "module_cmds.m"
          {
#line 567 "module_cmds.m"
            mercury__io__flush_output_2_p_0();
          }
#line 563 "module_cmds.m"
        }
#line 568 "module_cmds.m"
        break;
#line 568 "module_cmds.m"
    }
#line 577 "module_cmds.m"
    {
#line 577 "module_cmds.m"
      mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__TmpFile_19);
    }
#line 578 "module_cmds.m"
    {
#line 578 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 582 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 581 "module_cmds.m"
      parse_tree__module_cmds__CommandRedirected_20 = parse_tree__module_cmds__Command_12;
#line 582 "module_cmds.m"
    else
#line 586 "module_cmds.m"
      {
#line 582 "module_cmds.m"
        {
#line 582 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 586 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 585 "module_cmds.m"
          {
#line 585 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_54_54;

#line 585 "module_cmds.m"
            {
#line 585 "module_cmds.m"
              parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) " > ", parse_tree__module_cmds__TmpFile_19);
            }
#line 585 "module_cmds.m"
            {
#line 585 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Command_12, parse_tree__module_cmds__V_54_54);
            }
#line 585 "module_cmds.m"
          }
#line 586 "module_cmds.m"
        else
#line 587 "module_cmds.m"
          {
#line 587 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_56_56;
#line 587 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_57_57;
#line 587 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_59_59;

#line 588 "module_cmds.m"
            {
#line 588 "module_cmds.m"
              parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 588 "module_cmds.m"
            }
#line 588 "module_cmds.m"
            {
#line 588 "module_cmds.m"
              parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) ((MR_String) " > "));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 588 "module_cmds.m"
            }
#line 588 "module_cmds.m"
            {
#line 588 "module_cmds.m"
              parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) (parse_tree__module_cmds__Command_12));
#line 588 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 588 "module_cmds.m"
            }
#line 588 "module_cmds.m"
            {
#line 588 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_56_56);
            }
#line 587 "module_cmds.m"
          }
#line 586 "module_cmds.m"
      }
#line 590 "module_cmds.m"
    {
#line 590 "module_cmds.m"
      mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__CommandRedirected_20, &parse_tree__module_cmds__Result_21);
    }
#line 600 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_21)) == (MR_mktag((MR_Integer) 1))))
#line 615 "module_cmds.m"
      {
#line 615 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));
#line 615 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_64_64;

#line 616 "module_cmds.m"
        {
#line 616 "module_cmds.m"
          parse_tree__module_cmds__V_64_64 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 616 "module_cmds.m"
        {
#line 616 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_64_64);
        }
#line 617 "module_cmds.m"
        parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 615 "module_cmds.m"
      }
#line 600 "module_cmds.m"
    else
#line 600 "module_cmds.m"
      {
#line 600 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));

#line 600 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__V_146_146)) == (MR_mktag((MR_Integer) 0))))
#line 592 "module_cmds.m"
          {
#line 592 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_146_146, (MR_Integer) 0)));

#line 593 "module_cmds.m"
            {
#line 593 "module_cmds.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
            }
#line 594 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_22 == (MR_Integer) 0);
#line 596 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 595 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 1;
#line 596 "module_cmds.m"
            else
#line 598 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 592 "module_cmds.m"
          }
#line 600 "module_cmds.m"
        else
#line 601 "module_cmds.m"
          {
#line 601 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Signal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_146_146, (MR_Integer) 0)));
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_67_67;
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_70_70;
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_71_71;
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_73_73;
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_76_76;
#line 601 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_77_77;

#line 603 "module_cmds.m"
            {
#line 603 "module_cmds.m"
              parse_tree__module_cmds__V_71_71 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_24);
            }
#line 603 "module_cmds.m"
            {
#line 603 "module_cmds.m"
              parse_tree__module_cmds__V_70_70 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_71_71, (MR_String) ".");
            }
#line 603 "module_cmds.m"
            {
#line 603 "module_cmds.m"
              parse_tree__module_cmds__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_70_70);
            }
#line 602 "module_cmds.m"
            {
#line 602 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_67_67);
            }
#line 608 "module_cmds.m"
            {
#line 608 "module_cmds.m"
              parse_tree__module_cmds__V_77_77 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_24);
            }
#line 608 "module_cmds.m"
            {
#line 608 "module_cmds.m"
              parse_tree__module_cmds__V_76_76 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_77_77, (MR_String) ".");
            }
#line 608 "module_cmds.m"
            {
#line 608 "module_cmds.m"
              parse_tree__module_cmds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_76_76);
            }
#line 607 "module_cmds.m"
            {
#line 607 "module_cmds.m"
              libs__file_util__report_error_3_p_0(parse_tree__module_cmds__V_73_73);
            }
#line 612 "module_cmds.m"
            {
#line 612 "module_cmds.m"
              libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__Signal_24);
            }
#line 613 "module_cmds.m"
            parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 601 "module_cmds.m"
          }
#line 600 "module_cmds.m"
      }
#line 622 "module_cmds.m"
    {
#line 622 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 622 "module_cmds.m"
    parse_tree__module_cmds__succeeded = !(parse_tree__module_cmds__succeeded);
#line 622 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 622 "module_cmds.m"
      {
#line 623 "module_cmds.m"
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__MaybeProcessOutput_13)) == (MR_mktag((MR_Integer) 1)));
#line 623 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 623 "module_cmds.m"
          parse_tree__module_cmds__ProcessOutput_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeProcessOutput_13, (MR_Integer) 0)));
#line 622 "module_cmds.m"
      }
#line 674 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 625 "module_cmds.m"
      {
#line 625 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProcessOutputRedirected_29;
#line 625 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ProcessOutputResult_30;
#line 648 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;

#line 625 "module_cmds.m"
        {
#line 625 "module_cmds.m"
          mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__ProcessedTmpFile_27);
        }
#line 628 "module_cmds.m"
        {
#line 628 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 641 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 629 "module_cmds.m"
          {
#line 629 "module_cmds.m"
            MR_Word parse_tree__module_cmds__SystemEnvType_28;

#line 629 "module_cmds.m"
            {
#line 629 "module_cmds.m"
              libs__globals__get_system_env_type_2_p_0(parse_tree__module_cmds__Globals_9, &parse_tree__module_cmds__SystemEnvType_28);
            }
#line 630 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__SystemEnvType_28 == (MR_Integer) 4);
#line 634 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 631 "module_cmds.m"
              {
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_84_84;
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_86_86;
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_87_87;
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_89_89;
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_90_90;
#line 631 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_92_92;

#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_92_92, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 633 "module_cmds.m"
                }
#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 0) = ((MR_Box) ((MR_String) " > "));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 1) = ((MR_Box) (parse_tree__module_cmds__V_92_92));
#line 633 "module_cmds.m"
                }
#line 632 "module_cmds.m"
                {
#line 632 "module_cmds.m"
                  parse_tree__module_cmds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_89_89, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_89_89, 1) = ((MR_Box) (parse_tree__module_cmds__V_90_90));
#line 632 "module_cmds.m"
                }
#line 632 "module_cmds.m"
                {
#line 632 "module_cmds.m"
                  parse_tree__module_cmds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_87_87, 0) = ((MR_Box) ((MR_String) " | "));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_87_87, 1) = ((MR_Box) (parse_tree__module_cmds__V_89_89));
#line 632 "module_cmds.m"
                }
#line 632 "module_cmds.m"
                {
#line 632 "module_cmds.m"
                  parse_tree__module_cmds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 1) = ((MR_Box) (parse_tree__module_cmds__V_87_87));
#line 632 "module_cmds.m"
                }
#line 632 "module_cmds.m"
                {
#line 632 "module_cmds.m"
                  parse_tree__module_cmds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 0) = ((MR_Box) ((MR_String) "Get-Content "));
#line 632 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 1) = ((MR_Box) (parse_tree__module_cmds__V_86_86));
#line 632 "module_cmds.m"
                }
#line 631 "module_cmds.m"
                {
#line 631 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_84_84);
                }
#line 631 "module_cmds.m"
              }
#line 634 "module_cmds.m"
            else
#line 637 "module_cmds.m"
              {
#line 637 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_96_96;
#line 637 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_97_97;
#line 637 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_99_99;
#line 637 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_100_100;
#line 637 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_102_102;

#line 639 "module_cmds.m"
                {
#line 639 "module_cmds.m"
                  parse_tree__module_cmds__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "module_cmds.m"
                }
#line 638 "module_cmds.m"
                {
#line 638 "module_cmds.m"
                  parse_tree__module_cmds__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_100_100, 0) = ((MR_Box) ((MR_String) " > "));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_100_100, 1) = ((MR_Box) (parse_tree__module_cmds__V_102_102));
#line 638 "module_cmds.m"
                }
#line 638 "module_cmds.m"
                {
#line 638 "module_cmds.m"
                  parse_tree__module_cmds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 1) = ((MR_Box) (parse_tree__module_cmds__V_100_100));
#line 638 "module_cmds.m"
                }
#line 638 "module_cmds.m"
                {
#line 638 "module_cmds.m"
                  parse_tree__module_cmds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_97_97, 0) = ((MR_Box) ((MR_String) " < "));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_97_97, 1) = ((MR_Box) (parse_tree__module_cmds__V_99_99));
#line 638 "module_cmds.m"
                }
#line 638 "module_cmds.m"
                {
#line 638 "module_cmds.m"
                  parse_tree__module_cmds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 638 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 1) = ((MR_Box) (parse_tree__module_cmds__V_97_97));
#line 638 "module_cmds.m"
                }
#line 637 "module_cmds.m"
                {
#line 637 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_96_96);
                }
#line 637 "module_cmds.m"
              }
#line 629 "module_cmds.m"
          }
#line 641 "module_cmds.m"
        else
#line 642 "module_cmds.m"
          {
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_104_104;
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_105_105;
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_107_107;
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_108_108;
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_110_110;

#line 644 "module_cmds.m"
            {
#line 644 "module_cmds.m"
              parse_tree__module_cmds__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_110_110, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 644 "module_cmds.m"
            }
#line 643 "module_cmds.m"
            {
#line 643 "module_cmds.m"
              parse_tree__module_cmds__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_108_108, 0) = ((MR_Box) ((MR_String) " > "));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_108_108, 1) = ((MR_Box) (parse_tree__module_cmds__V_110_110));
#line 643 "module_cmds.m"
            }
#line 643 "module_cmds.m"
            {
#line 643 "module_cmds.m"
              parse_tree__module_cmds__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_107_107, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_107_107, 1) = ((MR_Box) (parse_tree__module_cmds__V_108_108));
#line 643 "module_cmds.m"
            }
#line 643 "module_cmds.m"
            {
#line 643 "module_cmds.m"
              parse_tree__module_cmds__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_105_105, 0) = ((MR_Box) ((MR_String) " < "));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_105_105, 1) = ((MR_Box) (parse_tree__module_cmds__V_107_107));
#line 643 "module_cmds.m"
            }
#line 643 "module_cmds.m"
            {
#line 643 "module_cmds.m"
              parse_tree__module_cmds__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 643 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 1) = ((MR_Box) (parse_tree__module_cmds__V_105_105));
#line 643 "module_cmds.m"
            }
#line 642 "module_cmds.m"
            {
#line 642 "module_cmds.m"
              parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_104_104);
            }
#line 642 "module_cmds.m"
          }
#line 646 "module_cmds.m"
        {
#line 646 "module_cmds.m"
          mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__ProcessOutputRedirected_29, &parse_tree__module_cmds__ProcessOutputResult_30);
        }
#line 648 "module_cmds.m"
        {
#line 648 "module_cmds.m"
          mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpFile_19, &parse_tree__module_cmds__V_31_31);
        }
#line 659 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ProcessOutputResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 669 "module_cmds.m"
          {
#line 669 "module_cmds.m"
            MR_Word parse_tree__module_cmds__ProcessOutputError_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));
#line 669 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_116_116;

#line 671 "module_cmds.m"
            {
#line 671 "module_cmds.m"
              parse_tree__module_cmds__V_116_116 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__ProcessOutputError_35);
            }
#line 670 "module_cmds.m"
            {
#line 670 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_116_116);
            }
#line 672 "module_cmds.m"
            parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 669 "module_cmds.m"
          }
#line 659 "module_cmds.m"
        else
#line 659 "module_cmds.m"
          {
#line 659 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));

#line 659 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__V_147_147)) == (MR_mktag((MR_Integer) 0))))
#line 650 "module_cmds.m"
              {
#line 650 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputStatus_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_147_147, (MR_Integer) 0)));

#line 651 "module_cmds.m"
                {
#line 651 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
                }
#line 652 "module_cmds.m"
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__ProcessOutputStatus_32 == (MR_Integer) 0);
#line 654 "module_cmds.m"
                if (parse_tree__module_cmds__succeeded)
#line 653 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 654 "module_cmds.m"
                else
#line 657 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 650 "module_cmds.m"
              }
#line 659 "module_cmds.m"
            else
#line 660 "module_cmds.m"
              {
#line 660 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputSignal_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_147_147, (MR_Integer) 0)));
#line 660 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_120_120;
#line 660 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_123_123;
#line 660 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_124_124;

#line 663 "module_cmds.m"
                {
#line 663 "module_cmds.m"
                  libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 666 "module_cmds.m"
                {
#line 666 "module_cmds.m"
                  parse_tree__module_cmds__V_124_124 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 666 "module_cmds.m"
                {
#line 666 "module_cmds.m"
                  parse_tree__module_cmds__V_123_123 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_124_124, (MR_String) ".");
                }
#line 666 "module_cmds.m"
                {
#line 666 "module_cmds.m"
                  parse_tree__module_cmds__V_120_120 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_123_123);
                }
#line 664 "module_cmds.m"
                {
#line 664 "module_cmds.m"
                  libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_120_120);
                }
#line 667 "module_cmds.m"
                parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 660 "module_cmds.m"
              }
#line 659 "module_cmds.m"
          }
#line 625 "module_cmds.m"
      }
#line 674 "module_cmds.m"
    else
#line 675 "module_cmds.m"
      {
#line 675 "module_cmds.m"
        parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 676 "module_cmds.m"
        parse_tree__module_cmds__ProcessedTmpFile_27 = parse_tree__module_cmds__TmpFile_19;
#line 675 "module_cmds.m"
      }
#line 678 "module_cmds.m"
    {
#line 678 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_14 = mercury__bool__and_2_f_0(parse_tree__module_cmds__CommandSucceeded_23, parse_tree__module_cmds__ProcessOutputSucceeded_33);
    }
#line 682 "module_cmds.m"
    {
#line 682 "module_cmds.m"
      mercury__io__open_input_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__TmpFileRes_36);
    }
#line 696 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpFileRes_36)) == (MR_mktag((MR_Integer) 1))))
#line 697 "module_cmds.m"
      {
#line 697 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileError_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 697 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_130_130;
#line 697 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_133_133;

#line 699 "module_cmds.m"
        {
#line 699 "module_cmds.m"
          parse_tree__module_cmds__V_133_133 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_40);
        }
#line 699 "module_cmds.m"
        {
#line 699 "module_cmds.m"
          parse_tree__module_cmds__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", parse_tree__module_cmds__V_133_133);
        }
#line 698 "module_cmds.m"
        {
#line 698 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_130_130);
        }
#line 697 "module_cmds.m"
      }
#line 696 "module_cmds.m"
    else
#line 684 "module_cmds.m"
      {
#line 684 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileStream_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 684 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Res_38;
#line 684 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_134_134;

#line 685 "module_cmds.m"
        {
#line 685 "module_cmds.m"
          parse_tree__module_cmds__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 685 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[1]));
#line 685 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 1) = ((MR_Box) (parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1));
#line 685 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 685 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 3) = ((MR_Box) (parse_tree__module_cmds__ErrorStream_10));
#line 685 "module_cmds.m"
        }
#line 685 "module_cmds.m"
        {
#line 685 "module_cmds.m"
          mercury__io__input_stream_foldl_io_5_p_0(parse_tree__module_cmds__TmpFileStream_37, parse_tree__module_cmds__V_134_134, &parse_tree__module_cmds__Res_38);
        }
#line 689 "module_cmds.m"
        if ((parse_tree__module_cmds__Res_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "module_cmds.m"
          {
#line 688 "module_cmds.m"
          }
#line 689 "module_cmds.m"
        else
#line 690 "module_cmds.m"
          {
#line 690 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpFileReadError_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Res_38, (MR_Integer) 0)));
#line 690 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_136_136;
#line 690 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_139_139;

#line 693 "module_cmds.m"
            {
#line 693 "module_cmds.m"
              parse_tree__module_cmds__V_139_139 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileReadError_39);
            }
#line 692 "module_cmds.m"
            {
#line 692 "module_cmds.m"
              parse_tree__module_cmds__V_136_136 = mercury__string__f_43_43_2_f_0((MR_String) "error reading command output: ", parse_tree__module_cmds__V_139_139);
            }
#line 691 "module_cmds.m"
            {
#line 691 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_136_136);
            }
#line 690 "module_cmds.m"
          }
#line 695 "module_cmds.m"
        {
#line 695 "module_cmds.m"
          mercury__io__close_input_3_p_0(parse_tree__module_cmds__TmpFileStream_37);
        }
#line 684 "module_cmds.m"
      }
#line 702 "module_cmds.m"
    {
#line 702 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__V_41_41);
    }
#line 703 "module_cmds.m"
    {
#line 703 "module_cmds.m"
      mercury__io__set_exit_status_3_p_0(parse_tree__module_cmds__OldStatus_16);
#line 703 "module_cmds.m"
      return;
    }
#line 551 "module_cmds.m"
  }
#line 130 "module_cmds.m"
}

#line 120 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__invoke_system_command_7_p_0(
#line 120 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 120 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ErrorStream_9,
#line 120 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Verbosity_10,
#line 120 "module_cmds.m"
  MR_String parse_tree__module_cmds__Command_11,
#line 120 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_12)
#line 120 "module_cmds.m"
{
#line 546 "module_cmds.m"
  {
#line 546 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 547 "module_cmds.m"
    {
#line 547 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__ErrorStream_9, parse_tree__module_cmds__Verbosity_10, parse_tree__module_cmds__Command_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_12);
#line 547 "module_cmds.m"
      return;
    }
#line 546 "module_cmds.m"
  }
#line 120 "module_cmds.m"
}

#line 98 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__maybe_set_exit_status_3_p_0(
#line 98 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__1_1)
#line 98 "module_cmds.m"
{
#line 539 "module_cmds.m"
  {
#line 539 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 539 "module_cmds.m"
#line 539 "module_cmds.m"
    switch (parse_tree__module_cmds__HeadVar__1_1) {
#line 539 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 539 "module_cmds.m"
      case (MR_Integer) 0:
#line 540 "module_cmds.m"
        {
#line 541 "module_cmds.m"
          {
#line 541 "module_cmds.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 541 "module_cmds.m"
            return;
          }
#line 540 "module_cmds.m"
        }
#line 539 "module_cmds.m"
        break;
#line 539 "module_cmds.m"
      case (MR_Integer) 1:
#line 539 "module_cmds.m"
        {
#line 539 "module_cmds.m"
        }
#line 539 "module_cmds.m"
        break;
#line 539 "module_cmds.m"
    }
#line 539 "module_cmds.m"
  }
#line 98 "module_cmds.m"
}

#line 92 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__touch_datestamp_4_p_0(
#line 92 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_5,
#line 92 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_6)
#line 92 "module_cmds.m"
{
#line 519 "module_cmds.m"
  {
#line 519 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 519 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_8;
#line 519 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_9;
#line 519 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_16_16;
#line 519 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_19_19;

#line 520 "module_cmds.m"
    {
#line 520 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_5, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_8);
    }
#line 522 "module_cmds.m"
    {
#line 522 "module_cmds.m"
      parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, (MR_String) "\'... ");
    }
#line 522 "module_cmds.m"
    {
#line 522 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", parse_tree__module_cmds__V_19_19);
    }
#line 521 "module_cmds.m"
    {
#line 521 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, parse_tree__module_cmds__V_16_16);
    }
#line 523 "module_cmds.m"
    {
#line 523 "module_cmds.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__module_cmds__Verbose_8);
    }
#line 524 "module_cmds.m"
    {
#line 524 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_9);
    }
#line 530 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 531 "module_cmds.m"
      {
#line 531 "module_cmds.m"
        MR_Word parse_tree__module_cmds__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));
#line 531 "module_cmds.m"
        MR_String parse_tree__module_cmds__IOErrorMessage_12;
#line 531 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_23_23;
#line 531 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_26_26;
#line 531 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_27_27;
#line 531 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_29_29;

#line 532 "module_cmds.m"
        {
#line 532 "module_cmds.m"
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__IOError_11, &parse_tree__module_cmds__IOErrorMessage_12);
        }
#line 534 "module_cmds.m"
        {
#line 534 "module_cmds.m"
          parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__IOErrorMessage_12, (MR_String) ".\n");
        }
#line 534 "module_cmds.m"
        {
#line 534 "module_cmds.m"
          parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", parse_tree__module_cmds__V_29_29);
        }
#line 534 "module_cmds.m"
        {
#line 534 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, parse_tree__module_cmds__V_27_27);
        }
#line 533 "module_cmds.m"
        {
#line 533 "module_cmds.m"
          parse_tree__module_cmds__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\nError opening \140", parse_tree__module_cmds__V_26_26);
        }
#line 533 "module_cmds.m"
        {
#line 533 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_23_23);
#line 533 "module_cmds.m"
          return;
        }
#line 531 "module_cmds.m"
      }
#line 530 "module_cmds.m"
    else
#line 526 "module_cmds.m"
      {
#line 526 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OutputStream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));

#line 527 "module_cmds.m"
        {
#line 527 "module_cmds.m"
          mercury__io__write_string_4_p_0(parse_tree__module_cmds__OutputStream_10, (MR_String) "\n");
        }
#line 528 "module_cmds.m"
        {
#line 528 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__OutputStream_10);
        }
#line 529 "module_cmds.m"
        {
#line 529 "module_cmds.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, (MR_String) " done.\n");
#line 529 "module_cmds.m"
          return;
        }
#line 526 "module_cmds.m"
      }
#line 519 "module_cmds.m"
  }
#line 92 "module_cmds.m"
}

#line 84 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__touch_interface_datestamp_5_p_0(
#line 84 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 84 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ModuleName_7,
#line 84 "module_cmds.m"
  MR_String parse_tree__module_cmds__Ext_8)
#line 84 "module_cmds.m"
{
#line 514 "module_cmds.m"
  {
#line 514 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 514 "module_cmds.m"
    MR_String parse_tree__module_cmds__OutputFileName_10;

#line 515 "module_cmds.m"
    {
#line 515 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__ModuleName_7, parse_tree__module_cmds__Ext_8, (MR_Integer) 0, &parse_tree__module_cmds__OutputFileName_10);
    }
#line 517 "module_cmds.m"
    {
#line 517 "module_cmds.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_10);
#line 517 "module_cmds.m"
      return;
    }
#line 514 "module_cmds.m"
  }
#line 84 "module_cmds.m"
}

#line 74 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(
#line 74 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 74 "module_cmds.m"
  MR_String parse_tree__module_cmds__SourceDirName_8,
#line 74 "module_cmds.m"
  MR_String parse_tree__module_cmds__DestinationDirName_9,
#line 74 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 74 "module_cmds.m"
{
#line 470 "module_cmds.m"
  {
#line 470 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 470 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

#line 471 "module_cmds.m"
    {
#line 471 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 493 "module_cmds.m"
#line 493 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 493 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 493 "module_cmds.m"
      case (MR_Integer) 0:
#line 494 "module_cmds.m"
        {
#line 494 "module_cmds.m"
          MR_String parse_tree__module_cmds__Command_61;
#line 494 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OutputStream_62;

#line 409 "module_cmds.m"
          {
#line 409 "module_cmds.m"
            parse_tree__module_cmds__Command_61 = libs__file_util__make_install_dir_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9);
          }
#line 410 "module_cmds.m"
          {
#line 410 "module_cmds.m"
            mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_62);
          }
#line 547 "module_cmds.m"
          {
#line 547 "module_cmds.m"
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_62, (MR_Integer) 0, parse_tree__module_cmds__Command_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_10);
          }
#line 498 "module_cmds.m"
#line 498 "module_cmds.m"
          switch (*parse_tree__module_cmds__Succeeded_10) {
#line 498 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 498 "module_cmds.m"
            case (MR_Integer) 0:
#line 499 "module_cmds.m"
              {
#line 499 "module_cmds.m"
                MR_String parse_tree__module_cmds__ProgName_51;

#line 500 "module_cmds.m"
                {
#line 500 "module_cmds.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_51);
                }
#line 501 "module_cmds.m"
                {
#line 501 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_51);
                }
#line 502 "module_cmds.m"
                {
#line 502 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) ": error copying directory");
                }
#line 503 "module_cmds.m"
                {
#line 503 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) " \140");
                }
#line 504 "module_cmds.m"
                {
#line 504 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
                }
#line 505 "module_cmds.m"
                {
#line 505 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' to \140");
                }
#line 506 "module_cmds.m"
                {
#line 506 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
                }
#line 507 "module_cmds.m"
                {
#line 507 "module_cmds.m"
                  mercury__io__nl_2_p_0();
                }
#line 508 "module_cmds.m"
                {
#line 508 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
#line 508 "module_cmds.m"
                  return;
                }
#line 499 "module_cmds.m"
              }
#line 498 "module_cmds.m"
              break;
#line 498 "module_cmds.m"
            case (MR_Integer) 1:
#line 497 "module_cmds.m"
              {
#line 497 "module_cmds.m"
              }
#line 498 "module_cmds.m"
              break;
#line 498 "module_cmds.m"
          }
#line 494 "module_cmds.m"
        }
#line 493 "module_cmds.m"
        break;
#line 493 "module_cmds.m"
      case (MR_Integer) 1:
#line 473 "module_cmds.m"
        {
#line 473 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Result_13;

#line 474 "module_cmds.m"
          {
#line 474 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9, &parse_tree__module_cmds__Result_13);
          }
#line 478 "module_cmds.m"
          if ((parse_tree__module_cmds__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "module_cmds.m"
            *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 478 "module_cmds.m"
          else
#line 479 "module_cmds.m"
            {
#line 479 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_13, (MR_Integer) 0)));
#line 479 "module_cmds.m"
              MR_String parse_tree__module_cmds__ProgName_15;
#line 479 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_47_47;

#line 480 "module_cmds.m"
              *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 481 "module_cmds.m"
              {
#line 481 "module_cmds.m"
                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_15);
              }
#line 482 "module_cmds.m"
              {
#line 482 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_15);
              }
#line 483 "module_cmds.m"
              {
#line 483 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) ": error linking");
              }
#line 484 "module_cmds.m"
              {
#line 484 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) " \140");
              }
#line 485 "module_cmds.m"
              {
#line 485 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
              }
#line 486 "module_cmds.m"
              {
#line 486 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) "\' to \140");
              }
#line 487 "module_cmds.m"
              {
#line 487 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
              }
#line 488 "module_cmds.m"
              {
#line 488 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) "\': ");
              }
#line 489 "module_cmds.m"
              {
#line 489 "module_cmds.m"
                parse_tree__module_cmds__V_47_47 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_14);
              }
#line 489 "module_cmds.m"
              {
#line 489 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_47_47);
              }
#line 490 "module_cmds.m"
              {
#line 490 "module_cmds.m"
                mercury__io__nl_2_p_0();
              }
#line 491 "module_cmds.m"
              {
#line 491 "module_cmds.m"
                mercury__io__flush_output_2_p_0();
#line 491 "module_cmds.m"
                return;
              }
#line 479 "module_cmds.m"
            }
#line 473 "module_cmds.m"
        }
#line 493 "module_cmds.m"
        break;
#line 493 "module_cmds.m"
    }
#line 470 "module_cmds.m"
  }
#line 74 "module_cmds.m"
}

#line 69 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(
#line 69 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 69 "module_cmds.m"
  MR_String parse_tree__module_cmds__SourceFileName_8,
#line 69 "module_cmds.m"
  MR_String parse_tree__module_cmds__DestinationFileName_9,
#line 69 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 69 "module_cmds.m"
{
#line 427 "module_cmds.m"
  {
#line 427 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 427 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;
#line 427 "module_cmds.m"
    MR_Word parse_tree__module_cmds__PrintCommand_13;
#line 427 "module_cmds.m"
    MR_String parse_tree__module_cmds__LinkOrCopy_14;
#line 427 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_15;

#line 428 "module_cmds.m"
    {
#line 428 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 429 "module_cmds.m"
    {
#line 429 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 51, &parse_tree__module_cmds__PrintCommand_13);
    }
#line 442 "module_cmds.m"
#line 442 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 442 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 442 "module_cmds.m"
      case (MR_Integer) 0:
#line 443 "module_cmds.m"
        {
#line 444 "module_cmds.m"
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "copying";
#line 450 "module_cmds.m"
#line 450 "module_cmds.m"
          switch (parse_tree__module_cmds__PrintCommand_13) {
#line 450 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 450 "module_cmds.m"
            case (MR_Integer) 0:
#line 451 "module_cmds.m"
              {
#line 451 "module_cmds.m"
              }
#line 450 "module_cmds.m"
              break;
#line 450 "module_cmds.m"
            case (MR_Integer) 1:
#line 446 "module_cmds.m"
              {
#line 446 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_81_81;
#line 446 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_87_87;
#line 446 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_91_91;

#line 447 "module_cmds.m"
                {
#line 447 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Copying file \140");
                }
#line 7701 "parse_tree.module_cmds.c"
                parse_tree__module_cmds__V_87_87 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_87_87, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_81_81);
                }
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_81_81);
                }
#line 447 "module_cmds.m"
                {
#line 447 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_87_87, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_91_91);
                }
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_91_91);
                }
#line 447 "module_cmds.m"
                {
#line 447 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
#line 449 "module_cmds.m"
                {
#line 449 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 446 "module_cmds.m"
              }
#line 450 "module_cmds.m"
              break;
#line 450 "module_cmds.m"
          }
#line 453 "module_cmds.m"
          {
#line 453 "module_cmds.m"
            parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
#line 443 "module_cmds.m"
        }
#line 442 "module_cmds.m"
        break;
#line 442 "module_cmds.m"
      case (MR_Integer) 1:
#line 431 "module_cmds.m"
        {
#line 432 "module_cmds.m"
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "linking";
#line 438 "module_cmds.m"
#line 438 "module_cmds.m"
          switch (parse_tree__module_cmds__PrintCommand_13) {
#line 438 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 438 "module_cmds.m"
            case (MR_Integer) 0:
#line 439 "module_cmds.m"
              {
#line 439 "module_cmds.m"
              }
#line 438 "module_cmds.m"
              break;
#line 438 "module_cmds.m"
            case (MR_Integer) 1:
#line 434 "module_cmds.m"
              {
#line 434 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_60_60;
#line 434 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_66_66;
#line 434 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_70_70;

#line 435 "module_cmds.m"
                {
#line 435 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Linking file \140");
                }
#line 7788 "parse_tree.module_cmds.c"
                parse_tree__module_cmds__V_66_66 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_66_66, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_60_60);
                }
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_60_60);
                }
#line 435 "module_cmds.m"
                {
#line 435 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_66_66, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_70_70);
                }
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_70_70);
                }
#line 435 "module_cmds.m"
                {
#line 435 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
#line 437 "module_cmds.m"
                {
#line 437 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 434 "module_cmds.m"
              }
#line 438 "module_cmds.m"
              break;
#line 438 "module_cmds.m"
          }
#line 441 "module_cmds.m"
          {
#line 441 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
#line 431 "module_cmds.m"
        }
#line 442 "module_cmds.m"
        break;
#line 442 "module_cmds.m"
    }
#line 458 "module_cmds.m"
    if ((parse_tree__module_cmds__Result_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 458 "module_cmds.m"
    else
#line 459 "module_cmds.m"
      {
#line 459 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_15, (MR_Integer) 0)));
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProgName_17;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__ErrorMsg_18;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_100_100;
#line 459 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_106_106;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_110_110;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_120_120;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_130_130;
#line 459 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_140_140;

#line 460 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 461 "module_cmds.m"
        {
#line 461 "module_cmds.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_17);
        }
#line 462 "module_cmds.m"
        {
#line 462 "module_cmds.m"
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__Error_16, &parse_tree__module_cmds__ErrorMsg_18);
        }
#line 7881 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__V_106_106 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__ProgName_17, &parse_tree__module_cmds__V_100_100);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_100_100);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) ": error ");
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__LinkOrCopy_14, &parse_tree__module_cmds__V_110_110);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_110_110);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_120_120);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_120_120);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\' to \140");
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_130_130);
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_130_130);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\', ");
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__ErrorMsg_18, &parse_tree__module_cmds__V_140_140);
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_140_140);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 466 "module_cmds.m"
        {
#line 466 "module_cmds.m"
          mercury__io__flush_output_2_p_0();
#line 466 "module_cmds.m"
          return;
        }
#line 459 "module_cmds.m"
      }
#line 427 "module_cmds.m"
  }
#line 69 "module_cmds.m"
}

#line 61 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__maybe_make_symlink_6_p_0(
#line 61 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 61 "module_cmds.m"
  MR_String parse_tree__module_cmds__LinkTarget_8,
#line 61 "module_cmds.m"
  MR_String parse_tree__module_cmds__LinkName_9,
#line 61 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_10)
#line 61 "module_cmds.m"
{
#line 414 "module_cmds.m"
  {
#line 414 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 414 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

#line 415 "module_cmds.m"
    {
#line 415 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 421 "module_cmds.m"
#line 421 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 421 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 421 "module_cmds.m"
      case (MR_Integer) 0:
#line 423 "module_cmds.m"
        *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
#line 421 "module_cmds.m"
        break;
#line 421 "module_cmds.m"
      case (MR_Integer) 1:
#line 417 "module_cmds.m"
        {
#line 417 "module_cmds.m"
          MR_Word parse_tree__module_cmds__LinkResult_14;
#line 418 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_13_13;

#line 418 "module_cmds.m"
          {
#line 418 "module_cmds.m"
            mercury__io__remove_file_recursively_4_p_0(parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__V_13_13);
          }
#line 419 "module_cmds.m"
          {
#line 419 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__LinkTarget_8, parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__LinkResult_14);
          }
#line 420 "module_cmds.m"
          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__LinkResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "module_cmds.m"
          if (parse_tree__module_cmds__succeeded)
#line 420 "module_cmds.m"
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 1;
#line 420 "module_cmds.m"
          else
#line 420 "module_cmds.m"
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
#line 417 "module_cmds.m"
        }
#line 421 "module_cmds.m"
        break;
#line 421 "module_cmds.m"
    }
#line 414 "module_cmds.m"
  }
#line 61 "module_cmds.m"
}

#line 390 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 390 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 390 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
#line 390 "module_cmds.m"
{
#line 390 "module_cmds.m"
  {
#line 390 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

#line 390 "module_cmds.m"
    {
#line 390 "module_cmds.m"
      mercury__io__write_byte_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1));
#line 390 "module_cmds.m"
      return;
    }
#line 390 "module_cmds.m"
  }
#line 390 "module_cmds.m"
}

#line 53 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0(
#line 53 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 53 "module_cmds.m"
  MR_String parse_tree__module_cmds__Source_8,
#line 53 "module_cmds.m"
  MR_String parse_tree__module_cmds__Destination_9,
#line 53 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Res_10)
#line 53 "module_cmds.m"
{
#line 373 "module_cmds.m"
  {
#line 373 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 373 "module_cmds.m"
    MR_String parse_tree__module_cmds__Command_12;
#line 373 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OutputStream_13;
#line 373 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Succeeded_14;

#line 375 "module_cmds.m"
    {
#line 375 "module_cmds.m"
      parse_tree__module_cmds__Command_12 = libs__file_util__make_install_file_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__Source_8, parse_tree__module_cmds__Destination_9);
    }
#line 376 "module_cmds.m"
    {
#line 376 "module_cmds.m"
      mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_13);
    }
#line 547 "module_cmds.m"
    {
#line 547 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_13, (MR_Integer) 0, parse_tree__module_cmds__Command_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_cmds__Succeeded_14);
    }
#line 382 "module_cmds.m"
#line 382 "module_cmds.m"
    switch (parse_tree__module_cmds__Succeeded_14) {
#line 382 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "module_cmds.m"
      case (MR_Integer) 0:
#line 383 "module_cmds.m"
        {
#line 383 "module_cmds.m"
          MR_Word parse_tree__module_cmds__SourceRes_15;

#line 384 "module_cmds.m"
          {
#line 384 "module_cmds.m"
            mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__Source_8, &parse_tree__module_cmds__SourceRes_15);
          }
#line 399 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__SourceRes_15)) == (MR_mktag((MR_Integer) 1))))
#line 400 "module_cmds.m"
            {
#line 400 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));

#line 401 "module_cmds.m"
              {
#line 401 "module_cmds.m"
                MR_Word base;
#line 401 "module_cmds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "module_cmds.m"
                *parse_tree__module_cmds__Res_10 = base;
#line 401 "module_cmds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_31));
#line 401 "module_cmds.m"
              }
#line 400 "module_cmds.m"
            }
#line 399 "module_cmds.m"
          else
#line 386 "module_cmds.m"
            {
#line 386 "module_cmds.m"
              MR_Word parse_tree__module_cmds__SourceStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));
#line 386 "module_cmds.m"
              MR_Word parse_tree__module_cmds__DestRes_17;

#line 387 "module_cmds.m"
              {
#line 387 "module_cmds.m"
                mercury__io__open_binary_output_4_p_0(parse_tree__module_cmds__Destination_9, &parse_tree__module_cmds__DestRes_17);
              }
#line 395 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__DestRes_17)) == (MR_mktag((MR_Integer) 1))))
#line 396 "module_cmds.m"
                {
#line 396 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));

#line 397 "module_cmds.m"
                  {
#line 397 "module_cmds.m"
                    MR_Word base;
#line 397 "module_cmds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "module_cmds.m"
                    *parse_tree__module_cmds__Res_10 = base;
#line 397 "module_cmds.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_20));
#line 397 "module_cmds.m"
                  }
#line 396 "module_cmds.m"
                }
#line 395 "module_cmds.m"
              else
#line 389 "module_cmds.m"
                {
#line 389 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__DestStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));
#line 389 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__WriteByte_19;

#line 390 "module_cmds.m"
                  {
#line 390 "module_cmds.m"
                    parse_tree__module_cmds__WriteByte_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[0]));
#line 390 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 1) = ((MR_Box) (parse_tree__module_cmds__copy_file_6_p_0_1));
#line 390 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 3) = ((MR_Box) (parse_tree__module_cmds__DestStream_18));
#line 390 "module_cmds.m"
                  }
#line 391 "module_cmds.m"
                  {
#line 391 "module_cmds.m"
                    mercury__io__binary_input_stream_foldl_io_5_p_0(parse_tree__module_cmds__SourceStream_16, parse_tree__module_cmds__WriteByte_19, parse_tree__module_cmds__Res_10);
                  }
#line 393 "module_cmds.m"
                  {
#line 393 "module_cmds.m"
                    mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__SourceStream_16);
                  }
#line 394 "module_cmds.m"
                  {
#line 394 "module_cmds.m"
                    mercury__io__close_binary_output_3_p_0(parse_tree__module_cmds__DestStream_18);
#line 394 "module_cmds.m"
                    return;
                  }
#line 389 "module_cmds.m"
                }
#line 386 "module_cmds.m"
            }
#line 383 "module_cmds.m"
        }
#line 382 "module_cmds.m"
        break;
#line 382 "module_cmds.m"
      case (MR_Integer) 1:
#line 381 "module_cmds.m"
        *parse_tree__module_cmds__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "module_cmds.m"
        break;
#line 382 "module_cmds.m"
    }
#line 373 "module_cmds.m"
  }
#line 53 "module_cmds.m"
}

#line 45 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_4_p_0(
#line 45 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_5,
#line 45 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_6)
#line 45 "module_cmds.m"
{
#line 221 "module_cmds.m"
  {
#line 221 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 221 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_20;

#line 231 "module_cmds.m"
    {
#line 231 "module_cmds.m"
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_5, parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_20);
    }
#line 8272 "parse_tree.module_cmds.c"
#line 8273 "parse_tree.module_cmds.c"
    switch (parse_tree__module_cmds__Result_20) {
#line 8275 "parse_tree.module_cmds.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 8277 "parse_tree.module_cmds.c"
      case (MR_Integer) 2:
#line 8279 "parse_tree.module_cmds.c"
        {
#line 225 "module_cmds.m"
          {
#line 225 "module_cmds.m"
            libs__file_util__report_error_3_p_0((MR_String) "problem updating interface files.");
#line 225 "module_cmds.m"
            return;
          }
#line 8288 "parse_tree.module_cmds.c"
        }
#line 8290 "parse_tree.module_cmds.c"
        break;
#line 8292 "parse_tree.module_cmds.c"
      case (MR_Integer) 0:
#line 8294 "parse_tree.module_cmds.c"
      case (MR_Integer) 1:
#line 227 "module_cmds.m"
        {
#line 227 "module_cmds.m"
        }
#line 8300 "parse_tree.module_cmds.c"
        break;
#line 8302 "parse_tree.module_cmds.c"
    }
#line 221 "module_cmds.m"
  }
#line 45 "module_cmds.m"
}

#line 42 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(
#line 42 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 42 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_7,
#line 42 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 42 "module_cmds.m"
{
#line 230 "module_cmds.m"
  {
#line 230 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 230 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_10;

#line 231 "module_cmds.m"
    {
#line 231 "module_cmds.m"
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__Result_10);
    }
#line 237 "module_cmds.m"
#line 237 "module_cmds.m"
    switch (parse_tree__module_cmds__Result_10) {
#line 237 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 237 "module_cmds.m"
      case (MR_Integer) 2:
#line 239 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 0;
#line 237 "module_cmds.m"
        break;
#line 237 "module_cmds.m"
      case (MR_Integer) 0:
#line 237 "module_cmds.m"
      case (MR_Integer) 1:
#line 236 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 237 "module_cmds.m"
        break;
#line 237 "module_cmds.m"
    }
#line 230 "module_cmds.m"
  }
#line 42 "module_cmds.m"
}

#line 39 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_return_changed_5_p_0(
#line 39 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 39 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_7,
#line 39 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_8)
#line 39 "module_cmds.m"
{
#line 242 "module_cmds.m"
  {
#line 242 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 242 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_10;
#line 242 "module_cmds.m"
    MR_String parse_tree__module_cmds__TmpOutputFileName_11;
#line 242 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OutputFileRes_12;

#line 243 "module_cmds.m"
    {
#line 243 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 45, &parse_tree__module_cmds__Verbose_10);
    }
#line 244 "module_cmds.m"
    {
#line 244 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% Updating interface:\n");
    }
#line 245 "module_cmds.m"
    {
#line 245 "module_cmds.m"
      parse_tree__module_cmds__TmpOutputFileName_11 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_7, (MR_String) ".tmp");
    }
#line 246 "module_cmds.m"
    {
#line 246 "module_cmds.m"
      mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__OutputFileRes_12);
    }
#line 291 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OutputFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 292 "module_cmds.m"
      {
#line 293 "module_cmds.m"
        {
#line 293 "module_cmds.m"
          parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
#line 293 "module_cmds.m"
          return;
        }
#line 292 "module_cmds.m"
      }
#line 291 "module_cmds.m"
    else
#line 248 "module_cmds.m"
      {
#line 248 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OutputFileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OutputFileRes_12, (MR_Integer) 0)));
#line 248 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpOutputFileRes_14;

#line 249 "module_cmds.m"
        {
#line 249 "module_cmds.m"
          mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__TmpOutputFileRes_14);
        }
#line 280 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpOutputFileRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 282 "module_cmds.m"
          {
#line 282 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpOutputFileError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
#line 282 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_39_39;

#line 283 "module_cmds.m"
            *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
#line 284 "module_cmds.m"
            {
#line 284 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
#line 285 "module_cmds.m"
            {
#line 285 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
            }
#line 286 "module_cmds.m"
            {
#line 286 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__OutputFileName_7);
            }
#line 287 "module_cmds.m"
            {
#line 287 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "\': ");
            }
#line 288 "module_cmds.m"
            {
#line 288 "module_cmds.m"
              parse_tree__module_cmds__V_39_39 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpOutputFileError_21);
            }
#line 288 "module_cmds.m"
            {
#line 288 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_39_39);
            }
#line 289 "module_cmds.m"
            {
#line 289 "module_cmds.m"
              mercury__io__nl_2_p_0();
#line 289 "module_cmds.m"
              return;
            }
#line 282 "module_cmds.m"
          }
#line 280 "module_cmds.m"
        else
#line 251 "module_cmds.m"
          {
#line 251 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpOutputFileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
#line 251 "module_cmds.m"
            MR_Word parse_tree__module_cmds__FilesDiffer_16;

#line 252 "module_cmds.m"
            {
#line 252 "module_cmds.m"
              parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(parse_tree__module_cmds__OutputFileStream_13, parse_tree__module_cmds__TmpOutputFileStream_15, &parse_tree__module_cmds__FilesDiffer_16);
            }
#line 254 "module_cmds.m"
            {
#line 254 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
#line 255 "module_cmds.m"
            {
#line 255 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__TmpOutputFileStream_15);
            }
#line 263 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer_16)) == (MR_mktag((MR_Integer) 1))))
#line 276 "module_cmds.m"
              {
#line 277 "module_cmds.m"
                {
#line 277 "module_cmds.m"
                  parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
#line 277 "module_cmds.m"
                  return;
                }
#line 276 "module_cmds.m"
              }
#line 263 "module_cmds.m"
            else
#line 263 "module_cmds.m"
              {
#line 263 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer_16, (MR_Integer) 0)));

#line 263 "module_cmds.m"
                if (((MR_tag((MR_Word) parse_tree__module_cmds__V_68_68)) == (MR_mktag((MR_Integer) 1))))
#line 268 "module_cmds.m"
                  {
#line 268 "module_cmds.m"
                    MR_Word parse_tree__module_cmds__TmpFileError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_68_68, (MR_Integer) 0)));
#line 268 "module_cmds.m"
                    MR_String parse_tree__module_cmds__V_53_53;

#line 269 "module_cmds.m"
                    *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
#line 270 "module_cmds.m"
                    {
#line 270 "module_cmds.m"
                      mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
                    }
#line 271 "module_cmds.m"
                    {
#line 271 "module_cmds.m"
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__TmpOutputFileName_11);
                    }
#line 272 "module_cmds.m"
                    {
#line 272 "module_cmds.m"
                      mercury__io__write_string_3_p_0((MR_String) "\': ");
                    }
#line 273 "module_cmds.m"
                    {
#line 273 "module_cmds.m"
                      parse_tree__module_cmds__V_53_53 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_18);
                    }
#line 273 "module_cmds.m"
                    {
#line 273 "module_cmds.m"
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_53_53);
                    }
#line 274 "module_cmds.m"
                    {
#line 274 "module_cmds.m"
                      mercury__io__nl_2_p_0();
#line 274 "module_cmds.m"
                      return;
                    }
#line 268 "module_cmds.m"
                  }
#line 263 "module_cmds.m"
                else
#line 263 "module_cmds.m"
                  {
#line 263 "module_cmds.m"
                    MR_Word parse_tree__module_cmds__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_68_68, (MR_Integer) 0)));

#line 263 "module_cmds.m"
#line 263 "module_cmds.m"
                    switch (parse_tree__module_cmds__V_69_69) {
#line 263 "module_cmds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 263 "module_cmds.m"
                      case (MR_Integer) 0:
#line 257 "module_cmds.m"
                        {
#line 262 "module_cmds.m"
                          MR_Word parse_tree__module_cmds__V_17_17;

#line 258 "module_cmds.m"
                          *parse_tree__module_cmds__Result_8 = (MR_Integer) 1;
#line 259 "module_cmds.m"
                          {
#line 259 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% ");
                          }
#line 260 "module_cmds.m"
                          {
#line 260 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, parse_tree__module_cmds__OutputFileName_7);
                          }
#line 261 "module_cmds.m"
                          {
#line 261 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "\' has not changed.\n");
                          }
#line 262 "module_cmds.m"
                          {
#line 262 "module_cmds.m"
                            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__V_17_17);
                          }
#line 257 "module_cmds.m"
                        }
#line 263 "module_cmds.m"
                        break;
#line 263 "module_cmds.m"
                      case (MR_Integer) 1:
#line 264 "module_cmds.m"
                        {
#line 265 "module_cmds.m"
                          {
#line 265 "module_cmds.m"
                            parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "CHANGED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
#line 265 "module_cmds.m"
                            return;
                          }
#line 264 "module_cmds.m"
                        }
#line 263 "module_cmds.m"
                        break;
#line 263 "module_cmds.m"
                    }
#line 263 "module_cmds.m"
                  }
#line 263 "module_cmds.m"
              }
#line 251 "module_cmds.m"
          }
#line 248 "module_cmds.m"
      }
#line 242 "module_cmds.m"
  }
#line 39 "module_cmds.m"
}

void mercury__parse_tree__module_cmds__init(void)
{
}

void mercury__parse_tree__module_cmds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_command_verbosity_0);
	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_quote_char_0);
	MR_register_type_ctor_info(&parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_update_interface_result_0);
}

void mercury__parse_tree__module_cmds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_cmds. */
