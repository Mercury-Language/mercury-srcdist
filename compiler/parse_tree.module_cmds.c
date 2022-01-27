/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 105 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 108 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 111 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0;

#line 114 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0;

#line 117 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1;

#line 120 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2];

#line 123 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2];

#line 126 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2];

#line 129 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0;

#line 132 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1;

#line 135 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2];

#line 138 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2];

#line 141 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2];

#line 144 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0;

#line 147 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1;

#line 150 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2;

#line 153 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3];

#line 156 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3];

#line 159 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3];

#line 162 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 165 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 167 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 170 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 173 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 175 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 177 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 180 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 183 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 185 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 188 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 191 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 193 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 195 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 198 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 201 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 203 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 206 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 209 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 211 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 213 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 194 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_50_50,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_51_51,
#line 194 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_52_52,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 194 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 198 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 198 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_38_38,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 198 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 198 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 198 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10);

#line 982 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

#line 347 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 347 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12);

#line 1134 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1134__1_2_f_0(
#line 1134 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1134 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42);

#line 1071 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1071__1_2_f_0(
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42);

#line 846 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__846__1_1_f_0(
#line 846 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_33);

#line 1180 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1180 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1180 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1180 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7);

#line 1159 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1159 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1159 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1159 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1159 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10);

#line 1142 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
#line 1142 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1142 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1138 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1138 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1138 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

#line 1134 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
#line 1134 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1134 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1099 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 1079 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1075 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1075 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1075 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

#line 1071 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1038 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 982 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

#line 975 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 975 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 975 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4);

#line 863 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 863 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 846 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
#line 846 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 846 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 835 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 835 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 791 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 791 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10);

#line 743 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void);

#line 724 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void);

#line 347 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 347 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12);

#line 327 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6);

#line 320 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
#line 320 "module_cmds.m"
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
#line 320 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
#line 320 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__FilesDiffer_8);

#line 299 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
#line 299 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__Msg_9,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_10,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
#line 299 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_12);

#line 944 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 944 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 944 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 933 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8);

#line 926 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 926 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 926 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 926 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2);

#line 686 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 686 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3);

#line 391 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 391 "module_cmds.m"
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



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"
#include "parse_tree.module_cmds.mh"



#line 839 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 847 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 855 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 863 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  (MR_Integer) 0
};

#line 869 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  (MR_Integer) 1
};

#line 875 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 881 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 887 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 893 "parse_tree.module_cmds.c"
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

#line 910 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  (MR_Integer) 0
};

#line 916 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  (MR_Integer) 1
};

#line 922 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1
};

#line 928 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0
};

#line 934 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 940 "parse_tree.module_cmds.c"
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

#line 957 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0 = {
  (MR_String) "interface_new_or_changed",
  (MR_Integer) 0
};

#line 963 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1 = {
  (MR_String) "interface_unchanged",
  (MR_Integer) 1
};

#line 969 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2 = {
  (MR_String) "interface_error",
  (MR_Integer) 2
};

#line 975 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2
};

#line 982 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1
};

#line 989 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 996 "parse_tree.module_cmds.c"
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

#line 1013 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 1016 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1018 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1020 "parse_tree.module_cmds.c"
{
#line 1022 "parse_tree.module_cmds.c"
  {
#line 1024 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1027 "parse_tree.module_cmds.c"
    {
#line 1029 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____command_verbosity_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1032 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1034 "parse_tree.module_cmds.c"
  }
#line 1036 "parse_tree.module_cmds.c"
}

#line 1039 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 1042 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1044 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1046 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1048 "parse_tree.module_cmds.c"
{
#line 1050 "parse_tree.module_cmds.c"
  {
#line 1052 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1055 "parse_tree.module_cmds.c"
    {
#line 1057 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____command_verbosity_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1060 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1062 "parse_tree.module_cmds.c"
  }
#line 1064 "parse_tree.module_cmds.c"
}

#line 1067 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 1070 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1072 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1074 "parse_tree.module_cmds.c"
{
#line 1076 "parse_tree.module_cmds.c"
  {
#line 1078 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1081 "parse_tree.module_cmds.c"
    {
#line 1083 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____quote_char_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1086 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1088 "parse_tree.module_cmds.c"
  }
#line 1090 "parse_tree.module_cmds.c"
}

#line 1093 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 1096 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1098 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1100 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1102 "parse_tree.module_cmds.c"
{
#line 1104 "parse_tree.module_cmds.c"
  {
#line 1106 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1109 "parse_tree.module_cmds.c"
    {
#line 1111 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____quote_char_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1114 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1116 "parse_tree.module_cmds.c"
  }
#line 1118 "parse_tree.module_cmds.c"
}

#line 1121 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 1124 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1126 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1128 "parse_tree.module_cmds.c"
{
#line 1130 "parse_tree.module_cmds.c"
  {
#line 1132 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1135 "parse_tree.module_cmds.c"
    {
#line 1137 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____update_interface_result_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1140 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1142 "parse_tree.module_cmds.c"
  }
#line 1144 "parse_tree.module_cmds.c"
}

#line 1147 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 1150 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1152 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1154 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1156 "parse_tree.module_cmds.c"
{
#line 1158 "parse_tree.module_cmds.c"
  {
#line 1160 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1163 "parse_tree.module_cmds.c"
    {
#line 1165 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____update_interface_result_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1168 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1170 "parse_tree.module_cmds.c"
  }
#line 1172 "parse_tree.module_cmds.c"
}

#line 194 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_50_50,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_51_51,
#line 194 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_52_52,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 194 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 194 "module_cmds.m"
{
#line 1201 "module_cmds.m"
  {
#line 1201 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1201 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1201 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_29_29;
#line 1211 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1203 "module_cmds.m"
    {
#line 1203 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1206 "module_cmds.m"
    {
#line 1206 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 1208 "module_cmds.m"
    {
#line 1208 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1207 "module_cmds.m"
    {
#line 1207 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_29_29);
    }
#line 1207 "module_cmds.m"
    {
#line 1207 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_26_26);
    }
#line 1211 "module_cmds.m"
    {
#line 1211 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1212 "module_cmds.m"
    {
#line 1212 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1232 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1233 "module_cmds.m"
      {
#line 1233 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;
#line 1233 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1234 "module_cmds.m"
        {
#line 1234 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
#line 1234 "module_cmds.m"
        {
#line 1234 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_35_35);
#line 1234 "module_cmds.m"
          return;
        }
#line 1233 "module_cmds.m"
      }
#line 1232 "module_cmds.m"
    else
#line 1214 "module_cmds.m"
      {
#line 1214 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1214 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ChmodResult_18;
#line 1214 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_38_38;

#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(parse_tree__module_cmds__V_50_50, parse_tree__module_cmds__V_51_51, parse_tree__module_cmds__V_52_52, parse_tree__module_cmds__Stream_17);
        }
#line 1216 "module_cmds.m"
        {
#line 1216 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1217 "module_cmds.m"
        {
#line 1217 "module_cmds.m"
          parse_tree__module_cmds__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
#line 1217 "module_cmds.m"
        {
#line 1217 "module_cmds.m"
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_38_38, &parse_tree__module_cmds__ChmodResult_18);
        }
#line 1227 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "module_cmds.m"
          {
#line 1228 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
#line 1228 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_43_43;

#line 1229 "module_cmds.m"
            {
#line 1229 "module_cmds.m"
              parse_tree__module_cmds__V_43_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
#line 1229 "module_cmds.m"
            {
#line 1229 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_43_43);
#line 1229 "module_cmds.m"
              return;
            }
#line 1228 "module_cmds.m"
          }
#line 1227 "module_cmds.m"
        else
#line 1219 "module_cmds.m"
          {
#line 1219 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

#line 1220 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
#line 1220 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 1221 "module_cmds.m"
              {
#line 1221 "module_cmds.m"
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1222 "module_cmds.m"
                {
#line 1222 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
                }
#line 1221 "module_cmds.m"
              }
#line 1220 "module_cmds.m"
            else
#line 1224 "module_cmds.m"
              {
#line 1224 "module_cmds.m"
                {
#line 1224 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1224 "module_cmds.m"
                  return;
                }
#line 1224 "module_cmds.m"
              }
#line 1219 "module_cmds.m"
          }
#line 1214 "module_cmds.m"
      }
#line 1201 "module_cmds.m"
  }
#line 194 "module_cmds.m"
}

#line 198 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 198 "module_cmds.m"
  MR_String parse_tree__module_cmds__V_38_38,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 198 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 198 "module_cmds.m"
{
#line 1240 "module_cmds.m"
  {
#line 1240 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1250 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1242 "module_cmds.m"
    {
#line 1242 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 1247 "module_cmds.m"
    {
#line 1247 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1250 "module_cmds.m"
    {
#line 1250 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1251 "module_cmds.m"
    {
#line 1251 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1257 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1258 "module_cmds.m"
      {
#line 1258 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1258 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1259 "module_cmds.m"
          return;
        }
#line 1258 "module_cmds.m"
      }
#line 1257 "module_cmds.m"
    else
#line 1253 "module_cmds.m"
      {
#line 1253 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1254 "module_cmds.m"
        {
#line 1254 "module_cmds.m"
          parse_tree__module_cmds__write_java_batch_file_6_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__V_38_38, parse_tree__module_cmds__Stream_17);
        }
#line 1255 "module_cmds.m"
        {
#line 1255 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1256 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1253 "module_cmds.m"
      }
#line 1240 "module_cmds.m"
  }
#line 198 "module_cmds.m"
}

#line 198 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_36_36,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__V_37_37,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 198 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 198 "module_cmds.m"
{
#line 1240 "module_cmds.m"
  {
#line 1240 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1250 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1242 "module_cmds.m"
    {
#line 1242 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 1247 "module_cmds.m"
    {
#line 1247 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1250 "module_cmds.m"
    {
#line 1250 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1251 "module_cmds.m"
    {
#line 1251 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1257 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1258 "module_cmds.m"
      {
#line 1258 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1258 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1259 "module_cmds.m"
          return;
        }
#line 1258 "module_cmds.m"
      }
#line 1257 "module_cmds.m"
    else
#line 1253 "module_cmds.m"
      {
#line 1253 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1254 "module_cmds.m"
        {
#line 1254 "module_cmds.m"
          parse_tree__module_cmds__write_erlang_batch_file_5_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__Stream_17);
        }
#line 1255 "module_cmds.m"
        {
#line 1255 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1256 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1253 "module_cmds.m"
      }
#line 1240 "module_cmds.m"
  }
#line 198 "module_cmds.m"
}

#line 982 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 982 "module_cmds.m"
{
#line 987 "module_cmds.m"
  {
#line 987 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 989 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_29_29;
#line 989 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Dollar_17;
#line 989 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseNameToDollar_18;
#line 989 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_24_24;
#line 989 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_25_25;
#line 989 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;

#line 989 "module_cmds.m"
    {
#line 989 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__sub_string_search_3_p_0(parse_tree__module_cmds__BaseName_12, (MR_String) "\044", &parse_tree__module_cmds__Dollar_17);
    }
#line 989 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 989 "module_cmds.m"
      {
#line 990 "module_cmds.m"
        parse_tree__module_cmds__V_25_25 = (MR_Integer) 1;
#line 990 "module_cmds.m"
        parse_tree__module_cmds__V_24_24 = (parse_tree__module_cmds__Dollar_17 + parse_tree__module_cmds__V_25_25);
#line 990 "module_cmds.m"
        {
#line 990 "module_cmds.m"
          parse_tree__module_cmds__BaseNameToDollar_18 = mercury__string__left_2_f_0(parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__V_24_24);
        }
#line 991 "module_cmds.m"
        {
#line 991 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseNameToDollar_18);
        }
#line 1656 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 991 "module_cmds.m"
        {
#line 991 "module_cmds.m"
          parse_tree__module_cmds__succeeded = mercury__set__contains_2_p_0(parse_tree__module_cmds__TypeCtorInfo_29_29, parse_tree__module_cmds__NestedClassPrefixes_10, ((MR_Box) (parse_tree__module_cmds__V_26_26)));
        }
#line 989 "module_cmds.m"
      }
#line 988 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 993 "module_cmds.m"
      {
#line 993 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_28_28;

#line 993 "module_cmds.m"
        {
#line 993 "module_cmds.m"
          parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12);
        }
#line 993 "module_cmds.m"
        {
#line 993 "module_cmds.m"
          MR_Word base;
#line 993 "module_cmds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "module_cmds.m"
          *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = base;
#line 993 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__V_28_28));
#line 993 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19));
#line 993 "module_cmds.m"
        }
#line 993 "module_cmds.m"
      }
#line 988 "module_cmds.m"
    else
#line 988 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19;
#line 997 "module_cmds.m"
    *parse_tree__module_cmds__Continue_14 = (MR_Integer) 1;
#line 987 "module_cmds.m"
  }
#line 982 "module_cmds.m"
}

#line 347 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 347 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12)
#line 347 "module_cmds.m"
{
#line 351 "module_cmds.m"
  {
#line 351 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 351 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TmpByteResult_14;

#line 352 "module_cmds.m"
    {
#line 352 "module_cmds.m"
      mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, &parse_tree__module_cmds__TmpByteResult_14);
    }
#line 362 "module_cmds.m"
#line 362 "module_cmds.m"
    switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult_14)) {
#line 362 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 362 "module_cmds.m"
      case (MR_Integer) 0:
#line 363 "module_cmds.m"
        {
#line 364 "module_cmds.m"
          *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[2];
#line 365 "module_cmds.m"
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 363 "module_cmds.m"
        }
#line 362 "module_cmds.m"
        break;
#line 362 "module_cmds.m"
      case (MR_Integer) 1:
#line 354 "module_cmds.m"
        {
#line 354 "module_cmds.m"
          MR_Integer parse_tree__module_cmds__TmpByte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

#line 355 "module_cmds.m"
          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__TmpByte_15 == parse_tree__module_cmds__Byte_9);
#line 355 "module_cmds.m"
          if (parse_tree__module_cmds__succeeded)
#line 356 "module_cmds.m"
            {
#line 356 "module_cmds.m"
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[1];
#line 357 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 1;
#line 356 "module_cmds.m"
            }
#line 355 "module_cmds.m"
          else
#line 359 "module_cmds.m"
            {
#line 359 "module_cmds.m"
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[2];
#line 360 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 359 "module_cmds.m"
            }
#line 354 "module_cmds.m"
        }
#line 362 "module_cmds.m"
        break;
#line 362 "module_cmds.m"
      case (MR_Integer) 2:
#line 367 "module_cmds.m"
        {
#line 367 "module_cmds.m"
          MR_Word parse_tree__module_cmds__TmpByteError_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult_14, (MR_Integer) 0)));

#line 368 "module_cmds.m"
          {
#line 368 "module_cmds.m"
            MR_Word base;
#line 368 "module_cmds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 368 "module_cmds.m"
            *parse_tree__module_cmds__Differ_12 = base;
#line 368 "module_cmds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__TmpByteError_16));
#line 368 "module_cmds.m"
          }
#line 369 "module_cmds.m"
          *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 367 "module_cmds.m"
        }
#line 362 "module_cmds.m"
        break;
#line 362 "module_cmds.m"
    }
#line 351 "module_cmds.m"
  }
#line 347 "module_cmds.m"
}

#line 1134 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1134__1_2_f_0(
#line 1134 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1134 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42)
#line 1134 "module_cmds.m"
{
#line 1134 "module_cmds.m"
  {
#line 1134 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1134 "module_cmds.m"
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_43;
#line 1134 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__LambdaHeadVar__1_42, (MR_String) "lib");
    }
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__LambdaHeadVar__2_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1134 "module_cmds.m"
    return parse_tree__module_cmds__LambdaHeadVar__2_43;
#line 1134 "module_cmds.m"
  }
#line 1134 "module_cmds.m"
}

#line 1071 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1071__1_2_f_0(
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_42)
#line 1071 "module_cmds.m"
{
#line 1071 "module_cmds.m"
  {
#line 1071 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1071 "module_cmds.m"
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_43;
#line 1071 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__LambdaHeadVar__1_42, (MR_String) "lib");
    }
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__LambdaHeadVar__2_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1071 "module_cmds.m"
    return parse_tree__module_cmds__LambdaHeadVar__2_43;
#line 1071 "module_cmds.m"
  }
#line 1071 "module_cmds.m"
}

#line 846 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__846__1_1_f_0(
#line 846 "module_cmds.m"
  MR_String parse_tree__module_cmds__LambdaHeadVar__1_33)
#line 846 "module_cmds.m"
{
#line 846 "module_cmds.m"
  {
#line 846 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 846 "module_cmds.m"
    MR_String parse_tree__module_cmds__LambdaHeadVar__2_34;

#line 846 "module_cmds.m"
    {
#line 846 "module_cmds.m"
      parse_tree__module_cmds__LambdaHeadVar__2_34 = mercury__string__replace_all_3_f_0(parse_tree__module_cmds__LambdaHeadVar__1_33, (MR_String) "\\", (MR_String) "/");
    }
#line 846 "module_cmds.m"
    return parse_tree__module_cmds__LambdaHeadVar__2_34;
#line 846 "module_cmds.m"
  }
#line 846 "module_cmds.m"
}

#line 32 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0(
#line 32 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 32 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 32 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 32 "module_cmds.m"
{
#line 32 "module_cmds.m"
  {
#line 32 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 32 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 32 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 32 "module_cmds.m"
    {
#line 32 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
#line 32 "module_cmds.m"
  }
#line 32 "module_cmds.m"
}

#line 32 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0(
#line 32 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 32 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 32 "module_cmds.m"
{
#line 1946 "parse_tree.module_cmds.c"
  {
#line 1948 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 1951 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1953 "parse_tree.module_cmds.c"
  }
#line 32 "module_cmds.m"
}

#line 104 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0(
#line 104 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 104 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 104 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 104 "module_cmds.m"
{
#line 104 "module_cmds.m"
  {
#line 104 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 104 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 104 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 104 "module_cmds.m"
    {
#line 104 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
#line 104 "module_cmds.m"
  }
#line 104 "module_cmds.m"
}

#line 104 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0(
#line 104 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 104 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 104 "module_cmds.m"
{
#line 1997 "parse_tree.module_cmds.c"
  {
#line 1999 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 2002 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 2004 "parse_tree.module_cmds.c"
  }
#line 104 "module_cmds.m"
}

#line 108 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0(
#line 108 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__HeadVar__1_1,
#line 108 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2,
#line 108 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__3_3)
#line 108 "module_cmds.m"
{
#line 108 "module_cmds.m"
  {
#line 108 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 108 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_cmds__HeadVar__2_2;
#line 108 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_cmds__HeadVar__3_3;

#line 108 "module_cmds.m"
    {
#line 108 "module_cmds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_cmds__HeadVar__1_1, parse_tree__module_cmds__Cast_HeadVar1_4, parse_tree__module_cmds__Cast_HeadVar2_5);
    }
#line 108 "module_cmds.m"
  }
#line 108 "module_cmds.m"
}

#line 108 "module_cmds.m"
MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0(
#line 108 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_1,
#line 108 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__2_2)
#line 108 "module_cmds.m"
{
#line 2048 "parse_tree.module_cmds.c"
  {
#line 2050 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 2053 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 2055 "parse_tree.module_cmds.c"
  }
#line 108 "module_cmds.m"
}

#line 1180 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1180 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1180 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1180 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7)
#line 1180 "module_cmds.m"
{
#line 1182 "module_cmds.m"
  {
#line 1182 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1182 "module_cmds.m"
    MR_String parse_tree__module_cmds__Option_8;
#line 1182 "module_cmds.m"
    MR_String parse_tree__module_cmds__Dir_9;
#line 1182 "module_cmds.m"
    MR_String parse_tree__module_cmds__LineContinuation_10;
#line 1182 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_12_12;

#line 1186 "module_cmds.m"
#line 1186 "module_cmds.m"
    switch (parse_tree__module_cmds__Quote_6) {
#line 1186 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1186 "module_cmds.m"
      case (MR_Integer) 0:
#line 1188 "module_cmds.m"
        parse_tree__module_cmds__Dir_9 = parse_tree__module_cmds__Dir0_7;
#line 1186 "module_cmds.m"
        break;
#line 1186 "module_cmds.m"
      case (MR_Integer) 1:
#line 1185 "module_cmds.m"
        {
#line 1185 "module_cmds.m"
          parse_tree__module_cmds__Dir_9 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__Dir0_7);
        }
#line 1186 "module_cmds.m"
        break;
#line 1186 "module_cmds.m"
    }
#line 1193 "module_cmds.m"
#line 1193 "module_cmds.m"
    switch (parse_tree__module_cmds__BreakLines_5) {
#line 1193 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "module_cmds.m"
      case (MR_Integer) 0:
#line 1195 "module_cmds.m"
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) "";
#line 1193 "module_cmds.m"
        break;
#line 1193 "module_cmds.m"
      case (MR_Integer) 1:
#line 1192 "module_cmds.m"
        parse_tree__module_cmds__LineContinuation_10 = (MR_String) " \\\n";
#line 1193 "module_cmds.m"
        break;
#line 1193 "module_cmds.m"
    }
#line 1197 "module_cmds.m"
    {
#line 1197 "module_cmds.m"
      parse_tree__module_cmds__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Dir_9, parse_tree__module_cmds__LineContinuation_10);
    }
#line 1197 "module_cmds.m"
    {
#line 1197 "module_cmds.m"
      parse_tree__module_cmds__Option_8 = mercury__string__f_43_43_2_f_0((MR_String) " -pa ", parse_tree__module_cmds__V_12_12);
    }
#line 1182 "module_cmds.m"
    return parse_tree__module_cmds__Option_8;
#line 1182 "module_cmds.m"
  }
#line 1180 "module_cmds.m"
}

#line 1159 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1159 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1159 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1159 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1159 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10)
#line 1159 "module_cmds.m"
{
#line 1162 "module_cmds.m"
  {
#line 1162 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1162 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LibModuleName_12;
#line 1162 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NoSubdirsGlobals_13;
#line 1162 "module_cmds.m"
    MR_String parse_tree__module_cmds__LibFileName_14;
#line 1162 "module_cmds.m"
    MR_Word parse_tree__module_cmds__SearchResult_15;

#line 1163 "module_cmds.m"
    {
#line 1163 "module_cmds.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__module_cmds__LibName_9, &parse_tree__module_cmds__LibModuleName_12);
    }
#line 1164 "module_cmds.m"
    {
#line 1164 "module_cmds.m"
      libs__globals__set_option_4_p_0((MR_Integer) 634, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_3[1]), parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__NoSubdirsGlobals_13);
    }
#line 1165 "module_cmds.m"
    {
#line 1165 "module_cmds.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__module_cmds__NoSubdirsGlobals_13, (MR_String) "lib", parse_tree__module_cmds__LibModuleName_12, (MR_String) ".beams", (MR_Integer) 1, &parse_tree__module_cmds__LibFileName_14);
    }
#line 1168 "module_cmds.m"
    {
#line 1168 "module_cmds.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__module_cmds__MercuryLibDirs_8, parse_tree__module_cmds__LibFileName_14, &parse_tree__module_cmds__SearchResult_15);
    }
#line 1173 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__SearchResult_15)) == (MR_mktag((MR_Integer) 1))))
#line 1174 "module_cmds.m"
      {
#line 1174 "module_cmds.m"
        MR_String parse_tree__module_cmds__Error_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));
#line 1174 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;
#line 1174 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_33_33;

#line 1175 "module_cmds.m"
        *parse_tree__module_cmds__LibPath_10 = (MR_String) "";
#line 1176 "module_cmds.m"
        {
#line 1176 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1176 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 1) = ((MR_Box) (parse_tree__module_cmds__Error_17));
#line 1176 "module_cmds.m"
        }
#line 1176 "module_cmds.m"
        {
#line 1176 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 0) = ((MR_Box) (parse_tree__module_cmds__V_33_33));
#line 1176 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "module_cmds.m"
        }
#line 1176 "module_cmds.m"
        {
#line 1176 "module_cmds.m"
          parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(parse_tree__module_cmds__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__module_cmds__V_31_31);
        }
#line 1174 "module_cmds.m"
      }
#line 1173 "module_cmds.m"
    else
#line 1171 "module_cmds.m"
      {
#line 1171 "module_cmds.m"
        MR_String parse_tree__module_cmds__DirName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));

#line 1172 "module_cmds.m"
        {
#line 1172 "module_cmds.m"
          *parse_tree__module_cmds__LibPath_10 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_16, parse_tree__module_cmds__LibFileName_14);
        }
#line 1171 "module_cmds.m"
      }
#line 1162 "module_cmds.m"
  }
#line 1159 "module_cmds.m"
}

#line 1142 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
#line 1142 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1142 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1142 "module_cmds.m"
{
#line 1142 "module_cmds.m"
  {
#line 1142 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1142 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1142 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_Option_8;

#line 1142 "module_cmds.m"
    {
#line 1142 "module_cmds.m"
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1142 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
#line 1142 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1142 "module_cmds.m"
  }
#line 1142 "module_cmds.m"
}

#line 1138 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1138 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1138 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1138 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
#line 1138 "module_cmds.m"
{
#line 1138 "module_cmds.m"
  {
#line 1138 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1138 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

#line 1138 "module_cmds.m"
    {
#line 1138 "module_cmds.m"
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
#line 1138 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
#line 1138 "module_cmds.m"
  }
#line 1138 "module_cmds.m"
}

#line 1134 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
#line 1134 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1134 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1134 "module_cmds.m"
{
#line 1134 "module_cmds.m"
  {
#line 1134 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1134 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1134 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_43;

#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1134__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1134 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_43));
#line 1134 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1134 "module_cmds.m"
  }
#line 1134 "module_cmds.m"
}

#line 1099 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1099 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 1099 "module_cmds.m"
{
#line 1102 "module_cmds.m"
  {
#line 1102 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamExt_10;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamFileName_11;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamDirName_12;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__GradeDir_14;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchStdLib_18;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__MainFunc_19;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__Erlang_25;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchLibs_26;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchProg_27;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_57_57;
#line 1102 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_59_59;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_65_65;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_67_67;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_69_69;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_70_70;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_72_72;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_73_73;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_74_74;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_75_75;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_77_77;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_78_78;
#line 1102 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_80_80;
#line 1138 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 1105 "module_cmds.m"
    {
#line 1105 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 523, &parse_tree__module_cmds__BeamExt_10);
    }
#line 1107 "module_cmds.m"
    {
#line 1107 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
#line 1109 "module_cmds.m"
    {
#line 1109 "module_cmds.m"
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
#line 1110 "module_cmds.m"
    {
#line 1110 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
#line 1115 "module_cmds.m"
    {
#line 1115 "module_cmds.m"
      libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 1116 "module_cmds.m"
    {
#line 1116 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 541, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
#line 1124 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "module_cmds.m"
      {
#line 1126 "module_cmds.m"
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
#line 1127 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
#line 1125 "module_cmds.m"
      }
#line 1124 "module_cmds.m"
    else
#line 1119 "module_cmds.m"
      {
#line 1119 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 1119 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
#line 1119 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 1119 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;

#line 1120 "module_cmds.m"
        {
#line 1120 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
#line 1120 "module_cmds.m"
        {
#line 1120 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_35_35, parse_tree__module_cmds__GradeDir_14);
        }
#line 1120 "module_cmds.m"
        {
#line 1120 "module_cmds.m"
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, (MR_String) "libmer_std.beams");
        }
#line 1121 "module_cmds.m"
        {
#line 1121 "module_cmds.m"
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 1123 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 1119 "module_cmds.m"
      }
#line 1132 "module_cmds.m"
    {
#line 1132 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 535, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 2515 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 1134 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1));
#line 1134 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1134 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
#line 1134 "module_cmds.m"
    }
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__V_41_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 1136 "module_cmds.m"
    {
#line 1136 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1138 "module_cmds.m"
    {
#line 1138 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1138 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2));
#line 1138 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1138 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
#line 1138 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
#line 1138 "module_cmds.m"
    }
#line 1138 "module_cmds.m"
    {
#line 1138 "module_cmds.m"
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1141 "module_cmds.m"
    {
#line 1141 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 519, &parse_tree__module_cmds__Erlang_25);
    }
#line 1143 "module_cmds.m"
    {
#line 1143 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1142 "module_cmds.m"
    {
#line 1142 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_4[2], parse_tree__module_cmds__V_54_54);
    }
#line 1142 "module_cmds.m"
    {
#line 1142 "module_cmds.m"
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_50_50);
    }
#line 1147 "module_cmds.m"
    {
#line 1147 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
#line 1147 "module_cmds.m"
    {
#line 1147 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__V_59_59);
    }
#line 1147 "module_cmds.m"
    {
#line 1147 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1155 "module_cmds.m"
    {
#line 1155 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[6])));
#line 1155 "module_cmds.m"
    }
#line 1155 "module_cmds.m"
    {
#line 1155 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1155 "module_cmds.m"
    }
#line 1155 "module_cmds.m"
    {
#line 1155 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1155 "module_cmds.m"
    }
#line 1155 "module_cmds.m"
    {
#line 1155 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1155 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1155 "module_cmds.m"
    }
#line 1154 "module_cmds.m"
    {
#line 1154 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1154 "module_cmds.m"
    }
#line 1154 "module_cmds.m"
    {
#line 1154 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1154 "module_cmds.m"
    }
#line 1154 "module_cmds.m"
    {
#line 1154 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1154 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1154 "module_cmds.m"
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell "));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1153 "module_cmds.m"
    }
#line 1153 "module_cmds.m"
    {
#line 1153 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1153 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1153 "module_cmds.m"
    }
#line 1152 "module_cmds.m"
    {
#line 1152 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 1152 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1152 "module_cmds.m"
    }
#line 1151 "module_cmds.m"
    {
#line 1151 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 1151 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1151 "module_cmds.m"
    }
#line 1150 "module_cmds.m"
    {
#line 1150 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "rem Generated by the Mercury compiler.\n"));
#line 1150 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1150 "module_cmds.m"
    }
#line 1149 "module_cmds.m"
    {
#line 1149 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 1149 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1149 "module_cmds.m"
    }
#line 1148 "module_cmds.m"
    {
#line 1148 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
    }
#line 1102 "module_cmds.m"
  }
#line 1099 "module_cmds.m"
}

#line 1079 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1079 "module_cmds.m"
{
#line 1079 "module_cmds.m"
  {
#line 1079 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1079 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1079 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_Option_8;

#line 1079 "module_cmds.m"
    {
#line 1079 "module_cmds.m"
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1079 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
#line 1079 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1079 "module_cmds.m"
  }
#line 1079 "module_cmds.m"
}

#line 1075 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1075 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1075 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1075 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
#line 1075 "module_cmds.m"
{
#line 1075 "module_cmds.m"
  {
#line 1075 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1075 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

#line 1075 "module_cmds.m"
    {
#line 1075 "module_cmds.m"
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
#line 1075 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
#line 1075 "module_cmds.m"
  }
#line 1075 "module_cmds.m"
}

#line 1071 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1071 "module_cmds.m"
{
#line 1071 "module_cmds.m"
  {
#line 1071 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1071 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1071 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_43;

#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1071__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1071 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_43));
#line 1071 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1071 "module_cmds.m"
  }
#line 1071 "module_cmds.m"
}

#line 1038 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1038 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 1038 "module_cmds.m"
{
#line 1041 "module_cmds.m"
  {
#line 1041 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamExt_10;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamFileName_11;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamDirName_12;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__GradeDir_14;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchStdLib_18;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__MainFunc_19;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__Erlang_25;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchLibs_26;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchProg_27;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_57_57;
#line 1041 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_59_59;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_65_65;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_67_67;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_69_69;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_70_70;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_72_72;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_73_73;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_74_74;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_75_75;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_77_77;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_78_78;
#line 1041 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_80_80;
#line 1075 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 1042 "module_cmds.m"
    {
#line 1042 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 523, &parse_tree__module_cmds__BeamExt_10);
    }
#line 1044 "module_cmds.m"
    {
#line 1044 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
#line 1046 "module_cmds.m"
    {
#line 1046 "module_cmds.m"
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
#line 1047 "module_cmds.m"
    {
#line 1047 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
#line 1052 "module_cmds.m"
    {
#line 1052 "module_cmds.m"
      libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 1053 "module_cmds.m"
    {
#line 1053 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 541, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
#line 1061 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "module_cmds.m"
      {
#line 1063 "module_cmds.m"
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
#line 1064 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
#line 1062 "module_cmds.m"
      }
#line 1061 "module_cmds.m"
    else
#line 1056 "module_cmds.m"
      {
#line 1056 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 1056 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
#line 1056 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 1056 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;

#line 1057 "module_cmds.m"
        {
#line 1057 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
#line 1057 "module_cmds.m"
        {
#line 1057 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_35_35, parse_tree__module_cmds__GradeDir_14);
        }
#line 1057 "module_cmds.m"
        {
#line 1057 "module_cmds.m"
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, (MR_String) "libmer_std.beams");
        }
#line 1058 "module_cmds.m"
        {
#line 1058 "module_cmds.m"
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 1060 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 1056 "module_cmds.m"
      }
#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 535, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 3005 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1));
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
#line 1071 "module_cmds.m"
    }
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__V_41_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 1073 "module_cmds.m"
    {
#line 1073 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1075 "module_cmds.m"
    {
#line 1075 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2));
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
#line 1075 "module_cmds.m"
    }
#line 1075 "module_cmds.m"
    {
#line 1075 "module_cmds.m"
      mercury__list__map_foldl_5_p_2(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1078 "module_cmds.m"
    {
#line 1078 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 519, &parse_tree__module_cmds__Erlang_25);
    }
#line 1080 "module_cmds.m"
    {
#line 1080 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1079 "module_cmds.m"
    {
#line 1079 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_4[1], parse_tree__module_cmds__V_54_54);
    }
#line 1079 "module_cmds.m"
    {
#line 1079 "module_cmds.m"
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_50_50);
    }
#line 1084 "module_cmds.m"
    {
#line 1084 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
#line 1084 "module_cmds.m"
    {
#line 1084 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR\"/", parse_tree__module_cmds__V_59_59);
    }
#line 1084 "module_cmds.m"
    {
#line 1084 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1095 "module_cmds.m"
    {
#line 1095 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[5])));
#line 1095 "module_cmds.m"
    }
#line 1095 "module_cmds.m"
    {
#line 1095 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1095 "module_cmds.m"
    }
#line 1095 "module_cmds.m"
    {
#line 1095 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1095 "module_cmds.m"
    }
#line 1095 "module_cmds.m"
    {
#line 1095 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1095 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1095 "module_cmds.m"
    }
#line 1094 "module_cmds.m"
    {
#line 1094 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1094 "module_cmds.m"
    }
#line 1094 "module_cmds.m"
    {
#line 1094 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1094 "module_cmds.m"
    }
#line 1094 "module_cmds.m"
    {
#line 1094 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1094 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1094 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell \\\n"));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1093 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1093 "module_cmds.m"
    }
#line 1093 "module_cmds.m"
    {
#line 1093 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "exec "));
#line 1093 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1093 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "DIR=\140dirname \"\0440\"\140\n"));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1092 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "# Generated by the Mercury compiler.\n"));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1091 "module_cmds.m"
    }
#line 1090 "module_cmds.m"
    {
#line 1090 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1090 "module_cmds.m"
    }
#line 1089 "module_cmds.m"
    {
#line 1089 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
    }
#line 1041 "module_cmds.m"
  }
#line 1038 "module_cmds.m"
}

#line 982 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 982 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 982 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 982 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 982 "module_cmds.m"
{
#line 987 "module_cmds.m"
  {
#line 987 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 987 "module_cmds.m"
    {
#line 987 "module_cmds.m"
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(parse_tree__module_cmds__NestedClassPrefixes_10, parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__Continue_14, parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19, parse_tree__module_cmds__STATE_VARIABLE_Acc_20);
    }
#line 987 "module_cmds.m"
  }
#line 982 "module_cmds.m"
}

#line 975 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 975 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 975 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4)
#line 975 "module_cmds.m"
{
#line 977 "module_cmds.m"
  {
#line 977 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 977 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseName_5;
#line 977 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_7_7;

#line 979 "module_cmds.m"
    {
#line 979 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__module_cmds__ClassFileName_3, (MR_String) ".class", &parse_tree__module_cmds__BaseName_5);
    }
#line 977 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 977 "module_cmds.m"
      {
#line 980 "module_cmds.m"
        parse_tree__module_cmds__V_7_7 = (MR_String) "\044";
#line 980 "module_cmds.m"
        {
#line 980 "module_cmds.m"
          *parse_tree__module_cmds__ClassPrefix_4 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__BaseName_5, parse_tree__module_cmds__V_7_7);
        }
#line 980 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 977 "module_cmds.m"
      }
#line 977 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 977 "module_cmds.m"
  }
#line 975 "module_cmds.m"
}

#line 863 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_6_p_0(
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 863 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 863 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 863 "module_cmds.m"
{
#line 866 "module_cmds.m"
  {
#line 866 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_53_53;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
#line 866 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_15;
#line 866 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_16;
#line 866 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_17;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;
#line 866 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_22_22;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_25_25;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_26_26;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_32_32;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_35_35;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_37_37;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_39_39;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_44_44;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_46_46;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 866 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_49_49;

#line 867 "module_cmds.m"
    {
#line 867 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 868 "module_cmds.m"
    {
#line 868 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 512, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3376 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 871 "module_cmds.m"
    {
#line 871 "module_cmds.m"
      parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__JarFileName_9);
    }
#line 871 "module_cmds.m"
    {
#line 871 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 0) = ((MR_Box) (parse_tree__module_cmds__V_22_22));
#line 871 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "module_cmds.m"
    }
#line 872 "module_cmds.m"
    {
#line 872 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_26_26, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
#line 872 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_26_26, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 872 "module_cmds.m"
    }
#line 871 "module_cmds.m"
    {
#line 871 "module_cmds.m"
      parse_tree__module_cmds__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_26_26);
    }
#line 871 "module_cmds.m"
    {
#line 871 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_53_53, parse_tree__module_cmds__V_21_21, parse_tree__module_cmds__V_25_25);
    }
#line 873 "module_cmds.m"
    {
#line 873 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) ";", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
#line 875 "module_cmds.m"
    {
#line 875 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 509, &parse_tree__module_cmds__Java_16);
    }
#line 876 "module_cmds.m"
    {
#line 876 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
#line 884 "module_cmds.m"
    {
#line 884 "module_cmds.m"
      parse_tree__module_cmds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[4])));
#line 884 "module_cmds.m"
    }
#line 884 "module_cmds.m"
    {
#line 884 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) ((MR_String) " jmercury."));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__V_49_49));
#line 884 "module_cmds.m"
    }
#line 884 "module_cmds.m"
    {
#line 884 "module_cmds.m"
      parse_tree__module_cmds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
#line 884 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 1) = ((MR_Box) (parse_tree__module_cmds__V_47_47));
#line 884 "module_cmds.m"
    }
#line 883 "module_cmds.m"
    {
#line 883 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 0) = ((MR_Box) ((MR_String) "\n"));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 1) = ((MR_Box) (parse_tree__module_cmds__V_46_46));
#line 883 "module_cmds.m"
    }
#line 883 "module_cmds.m"
    {
#line 883 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_44_44));
#line 883 "module_cmds.m"
    }
#line 883 "module_cmds.m"
    {
#line 883 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
#line 883 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 883 "module_cmds.m"
    }
#line 882 "module_cmds.m"
    {
#line 882 "module_cmds.m"
      parse_tree__module_cmds__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 882 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__V_41_41));
#line 882 "module_cmds.m"
    }
#line 881 "module_cmds.m"
    {
#line 881 "module_cmds.m"
      parse_tree__module_cmds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 881 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 1) = ((MR_Box) (parse_tree__module_cmds__V_39_39));
#line 881 "module_cmds.m"
    }
#line 880 "module_cmds.m"
    {
#line 880 "module_cmds.m"
      parse_tree__module_cmds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_35_35, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
#line 880 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_35_35, 1) = ((MR_Box) (parse_tree__module_cmds__V_37_37));
#line 880 "module_cmds.m"
    }
#line 879 "module_cmds.m"
    {
#line 879 "module_cmds.m"
      parse_tree__module_cmds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_32_32, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 879 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_32_32, 1) = ((MR_Box) (parse_tree__module_cmds__V_35_35));
#line 879 "module_cmds.m"
    }
#line 878 "module_cmds.m"
    {
#line 878 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_32_32);
    }
#line 866 "module_cmds.m"
  }
#line 863 "module_cmds.m"
}

#line 846 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0_1(
#line 846 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 846 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 846 "module_cmds.m"
{
#line 846 "module_cmds.m"
  {
#line 846 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 846 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 846 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_LambdaHeadVar__2_34;

#line 846 "module_cmds.m"
    {
#line 846 "module_cmds.m"
      parse_tree__module_cmds__conv0_LambdaHeadVar__2_34 = parse_tree__module_cmds__IntroducedFrom__func__write_java_msys_shell_script__846__1_1_f_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 846 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_LambdaHeadVar__2_34));
#line 846 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 846 "module_cmds.m"
  }
#line 846 "module_cmds.m"
}

#line 835 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_msys_shell_script_6_p_0(
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 835 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 835 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 835 "module_cmds.m"
{
#line 839 "module_cmds.m"
  {
#line 839 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs0_14;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_15;
#line 839 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_17;
#line 839 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_18;
#line 839 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_19;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_23_23;
#line 839 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 839 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_29_29;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_30_30;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_44_44;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_46_46;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_48_48;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_51_51;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_53_53;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_55_55;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_57_57;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_58_58;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 839 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_62_62;

#line 840 "module_cmds.m"
    {
#line 840 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 841 "module_cmds.m"
    {
#line 841 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 512, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3648 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__V_26_26);
    }
#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 0) = ((MR_Box) (parse_tree__module_cmds__V_24_24));
#line 844 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "module_cmds.m"
    }
#line 845 "module_cmds.m"
    {
#line 845 "module_cmds.m"
      parse_tree__module_cmds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_30_30, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
#line 845 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_30_30, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 845 "module_cmds.m"
    }
#line 845 "module_cmds.m"
    {
#line 845 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_30_30);
    }
#line 844 "module_cmds.m"
    {
#line 844 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs0_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__V_23_23, parse_tree__module_cmds__V_29_29);
    }
#line 846 "module_cmds.m"
    {
#line 846 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_15 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__TypeCtorInfo_67_67, (MR_Word) &parse_tree__module_cmds_scalar_common_5[1], parse_tree__module_cmds__Java_Incl_Dirs0_14);
    }
#line 848 "module_cmds.m"
    {
#line 848 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_17 = mercury__string__join_list_2_f_0((MR_String) "\\;", parse_tree__module_cmds__Java_Incl_Dirs_15);
    }
#line 850 "module_cmds.m"
    {
#line 850 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 509, &parse_tree__module_cmds__Java_18);
    }
#line 851 "module_cmds.m"
    {
#line 851 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_19);
    }
#line 860 "module_cmds.m"
    {
#line 860 "module_cmds.m"
      parse_tree__module_cmds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_62_62, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_19));
#line 860 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
#line 860 "module_cmds.m"
    }
#line 860 "module_cmds.m"
    {
#line 860 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
#line 860 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_62_62));
#line 860 "module_cmds.m"
    }
#line 859 "module_cmds.m"
    {
#line 859 "module_cmds.m"
      parse_tree__module_cmds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 1) = ((MR_Box) (parse_tree__module_cmds__V_60_60));
#line 859 "module_cmds.m"
    }
#line 859 "module_cmds.m"
    {
#line 859 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) (parse_tree__module_cmds__Java_18));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_58_58));
#line 859 "module_cmds.m"
    }
#line 859 "module_cmds.m"
    {
#line 859 "module_cmds.m"
      parse_tree__module_cmds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_55_55, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
#line 859 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_55_55, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 859 "module_cmds.m"
    }
#line 858 "module_cmds.m"
    {
#line 858 "module_cmds.m"
      parse_tree__module_cmds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_53_53, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
#line 858 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_53_53, 1) = ((MR_Box) (parse_tree__module_cmds__V_55_55));
#line 858 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 0) = ((MR_Box) ((MR_String) "\n"));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 1) = ((MR_Box) (parse_tree__module_cmds__V_53_53));
#line 857 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_17));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 1) = ((MR_Box) (parse_tree__module_cmds__V_51_51));
#line 857 "module_cmds.m"
    }
#line 857 "module_cmds.m"
    {
#line 857 "module_cmds.m"
      parse_tree__module_cmds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
#line 857 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 1) = ((MR_Box) (parse_tree__module_cmds__V_50_50));
#line 857 "module_cmds.m"
    }
#line 856 "module_cmds.m"
    {
#line 856 "module_cmds.m"
      parse_tree__module_cmds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
#line 856 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 1) = ((MR_Box) (parse_tree__module_cmds__V_48_48));
#line 856 "module_cmds.m"
    }
#line 855 "module_cmds.m"
    {
#line 855 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 855 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_44_44, 1) = ((MR_Box) (parse_tree__module_cmds__V_46_46));
#line 855 "module_cmds.m"
    }
#line 854 "module_cmds.m"
    {
#line 854 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 854 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_44_44));
#line 854 "module_cmds.m"
    }
#line 853 "module_cmds.m"
    {
#line 853 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_41_41);
    }
#line 839 "module_cmds.m"
  }
#line 835 "module_cmds.m"
}

#line 791 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_6_p_0(
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 791 "module_cmds.m"
  MR_String parse_tree__module_cmds__JarFileName_9,
#line 791 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_10)
#line 791 "module_cmds.m"
{
#line 794 "module_cmds.m"
  {
#line 794 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_67_67;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
#line 794 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_15;
#line 794 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_16;
#line 794 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_17;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;
#line 794 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_22_22;
#line 794 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_27_27;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_28_28;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_34_34;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_37_37;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_39_39;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_45_45;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_49_49;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_51_51;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_52_52;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_56_56;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_58_58;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_59_59;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_61_61;
#line 794 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;

#line 795 "module_cmds.m"
    {
#line 795 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 796 "module_cmds.m"
    {
#line 796 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 512, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3924 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__JarFileName_9, (MR_String) "\"");
    }
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", parse_tree__module_cmds__V_24_24);
    }
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 0) = ((MR_Box) (parse_tree__module_cmds__V_22_22));
#line 799 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "module_cmds.m"
    }
#line 800 "module_cmds.m"
    {
#line 800 "module_cmds.m"
      parse_tree__module_cmds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
#line 800 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 800 "module_cmds.m"
    }
#line 800 "module_cmds.m"
    {
#line 800 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_28_28);
    }
#line 799 "module_cmds.m"
    {
#line 799 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_67_67, parse_tree__module_cmds__V_21_21, parse_tree__module_cmds__V_27_27);
    }
#line 801 "module_cmds.m"
    {
#line 801 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
#line 803 "module_cmds.m"
    {
#line 803 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 509, &parse_tree__module_cmds__Java_16);
    }
#line 804 "module_cmds.m"
    {
#line 804 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_8, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
#line 817 "module_cmds.m"
    {
#line 817 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
#line 817 "module_cmds.m"
    }
#line 817 "module_cmds.m"
    {
#line 817 "module_cmds.m"
      parse_tree__module_cmds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 0) = ((MR_Box) ((MR_String) "exec \"\044JAVA\" jmercury."));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 817 "module_cmds.m"
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (parse_tree__module_cmds__V_61_61));
#line 816 "module_cmds.m"
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_58_58, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 816 "module_cmds.m"
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_58_58));
#line 816 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 1) = ((MR_Box) (parse_tree__module_cmds__V_56_56));
#line 815 "module_cmds.m"
    }
#line 814 "module_cmds.m"
    {
#line 814 "module_cmds.m"
      parse_tree__module_cmds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 0) = ((MR_Box) ((MR_String) "\n"));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 1) = ((MR_Box) (parse_tree__module_cmds__V_54_54));
#line 814 "module_cmds.m"
    }
#line 814 "module_cmds.m"
    {
#line 814 "module_cmds.m"
      parse_tree__module_cmds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_51_51, 1) = ((MR_Box) (parse_tree__module_cmds__V_52_52));
#line 814 "module_cmds.m"
    }
#line 814 "module_cmds.m"
    {
#line 814 "module_cmds.m"
      parse_tree__module_cmds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
#line 814 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 1) = ((MR_Box) (parse_tree__module_cmds__V_51_51));
#line 814 "module_cmds.m"
    }
#line 813 "module_cmds.m"
    {
#line 813 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) ((MR_String) "esac\n"));
#line 813 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__V_49_49));
#line 813 "module_cmds.m"
    }
#line 812 "module_cmds.m"
    {
#line 812 "module_cmds.m"
      parse_tree__module_cmds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
#line 812 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 1) = ((MR_Box) (parse_tree__module_cmds__V_47_47));
#line 812 "module_cmds.m"
    }
#line 811 "module_cmds.m"
    {
#line 811 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
#line 811 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_45_45));
#line 811 "module_cmds.m"
    }
#line 810 "module_cmds.m"
    {
#line 810 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
#line 810 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 810 "module_cmds.m"
    }
#line 809 "module_cmds.m"
    {
#line 809 "module_cmds.m"
      parse_tree__module_cmds__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
#line 809 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__V_41_41));
#line 809 "module_cmds.m"
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 1) = ((MR_Box) (parse_tree__module_cmds__V_39_39));
#line 808 "module_cmds.m"
    }
#line 807 "module_cmds.m"
    {
#line 807 "module_cmds.m"
      parse_tree__module_cmds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 807 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 1) = ((MR_Box) (parse_tree__module_cmds__V_37_37));
#line 807 "module_cmds.m"
    }
#line 806 "module_cmds.m"
    {
#line 806 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_10, parse_tree__module_cmds__V_34_34);
    }
#line 794 "module_cmds.m"
  }
#line 791 "module_cmds.m"
}

#line 743 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void)
#line 743 "module_cmds.m"
{
#line 744 "module_cmds.m"
  {
#line 744 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 747 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__use_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 747 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 4176 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 744 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 744 "module_cmds.m"
  }
#line 743 "module_cmds.m"
}

#line 724 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void)
#line 724 "module_cmds.m"
{
#line 733 "module_cmds.m"
  {
#line 733 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 733 "module_cmds.m"
    {
#line 733 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 733 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 733 "module_cmds.m"
  }
#line 724 "module_cmds.m"
}

#line 347 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_8,
#line 347 "module_cmds.m"
  MR_Integer parse_tree__module_cmds__Byte_9,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_10,
#line 347 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__4_11,
#line 347 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Differ_12)
#line 347 "module_cmds.m"
{
#line 351 "module_cmds.m"
  {
#line 351 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 351 "module_cmds.m"
    {
#line 351 "module_cmds.m"
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_105_110_112_117_116_95_115_116_114_101_97_109_95_99_109_112_95_50_95_95_91_52_93_95_48_7_p_0(parse_tree__module_cmds__TmpOutputFileStream_8, parse_tree__module_cmds__Byte_9, parse_tree__module_cmds__Continue_10, parse_tree__module_cmds__Differ_12);
    }
#line 351 "module_cmds.m"
  }
#line 347 "module_cmds.m"
}

#line 327 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 327 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 327 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6)
#line 327 "module_cmds.m"
{
#line 327 "module_cmds.m"
  {
#line 327 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 327 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_Continue_10;
#line 327 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv0_Differ_12;

#line 327 "module_cmds.m"
    {
#line 327 "module_cmds.m"
      parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_Continue_10, ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv0_Differ_12);
    }
#line 327 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_Continue_10));
#line 327 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv0_Differ_12));
#line 327 "module_cmds.m"
  }
#line 327 "module_cmds.m"
}

#line 320 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(
#line 320 "module_cmds.m"
  MR_Word parse_tree__module_cmds__OutputFileStream_6,
#line 320 "module_cmds.m"
  MR_Word parse_tree__module_cmds__TmpOutputFileStream_7,
#line 320 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__FilesDiffer_8)
#line 320 "module_cmds.m"
{
#line 325 "module_cmds.m"
  {
#line 325 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 325 "module_cmds.m"
    MR_Word parse_tree__module_cmds__FilesDiffer0_10;
#line 325 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_16_16;
#line 331 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_20_20;
#line 331 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_21_21;

#line 327 "module_cmds.m"
    {
#line 327 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[0]));
#line 327 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 1) = ((MR_Box) (parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1));
#line 327 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 3) = ((MR_Box) (parse_tree__module_cmds__TmpOutputFileStream_7));
#line 327 "module_cmds.m"
    }
#line 326 "module_cmds.m"
    {
#line 326 "module_cmds.m"
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[1], parse_tree__module_cmds__OutputFileStream_6, parse_tree__module_cmds__V_16_16, ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[1])), &parse_tree__module_cmds__FilesDiffer0_10);
    }
#line 331 "module_cmds.m"
    parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer0_10)) == (MR_mktag((MR_Integer) 0)));
#line 331 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 331 "module_cmds.m"
      {
#line 331 "module_cmds.m"
        parse_tree__module_cmds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer0_10, (MR_Integer) 0)));
#line 331 "module_cmds.m"
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 331 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 331 "module_cmds.m"
          {
#line 331 "module_cmds.m"
            parse_tree__module_cmds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_20_20, (MR_Integer) 0)));
#line 331 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__V_21_21 == (MR_Integer) 0);
#line 331 "module_cmds.m"
          }
#line 331 "module_cmds.m"
      }
#line 331 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 332 "module_cmds.m"
      {
#line 332 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpByteResult2_11;

#line 332 "module_cmds.m"
        {
#line 332 "module_cmds.m"
          mercury__io__read_byte_4_p_0(parse_tree__module_cmds__TmpOutputFileStream_7, &parse_tree__module_cmds__TmpByteResult2_11);
        }
#line 336 "module_cmds.m"
#line 336 "module_cmds.m"
        switch (MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult2_11)) {
#line 336 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 336 "module_cmds.m"
          case (MR_Integer) 0:
#line 338 "module_cmds.m"
            *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
#line 336 "module_cmds.m"
            break;
#line 336 "module_cmds.m"
          case (MR_Integer) 1:
#line 334 "module_cmds.m"
            {
#line 335 "module_cmds.m"
              *parse_tree__module_cmds__FilesDiffer_8 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[3];
#line 334 "module_cmds.m"
            }
#line 336 "module_cmds.m"
            break;
#line 336 "module_cmds.m"
          case (MR_Integer) 2:
#line 340 "module_cmds.m"
            {
#line 340 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_cmds__TmpByteResult2_11, (MR_Integer) 0)));
#line 340 "module_cmds.m"
              MR_Word parse_tree__module_cmds__V_23_23;

#line 341 "module_cmds.m"
              {
#line 341 "module_cmds.m"
                parse_tree__module_cmds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "module_cmds.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 0) = ((MR_Box) (parse_tree__module_cmds__Error_13));
#line 341 "module_cmds.m"
              }
#line 341 "module_cmds.m"
              {
#line 341 "module_cmds.m"
                MR_Word base;
#line 341 "module_cmds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 341 "module_cmds.m"
                *parse_tree__module_cmds__FilesDiffer_8 = base;
#line 341 "module_cmds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_cmds__V_23_23));
#line 341 "module_cmds.m"
              }
#line 340 "module_cmds.m"
            }
#line 336 "module_cmds.m"
            break;
#line 336 "module_cmds.m"
        }
#line 332 "module_cmds.m"
      }
#line 331 "module_cmds.m"
    else
#line 344 "module_cmds.m"
      *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
#line 325 "module_cmds.m"
  }
#line 320 "module_cmds.m"
}

#line 299 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__update_interface_create_file_7_p_0(
#line 299 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__Msg_9,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_10,
#line 299 "module_cmds.m"
  MR_String parse_tree__module_cmds__TmpOutputFileName_11,
#line 299 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_12)
#line 299 "module_cmds.m"
{
#line 303 "module_cmds.m"
  {
#line 303 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 303 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 303 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MoveRes_15;
#line 303 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_21_21;
#line 303 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 303 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_25_25;
#line 303 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 318 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_17_17;

#line 304 "module_cmds.m"
    {
#line 304 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_8, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 306 "module_cmds.m"
    {
#line 306 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Msg_9, (MR_String) ".\n");
    }
#line 306 "module_cmds.m"
    {
#line 306 "module_cmds.m"
      parse_tree__module_cmds__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\' has ", parse_tree__module_cmds__V_27_27);
    }
#line 306 "module_cmds.m"
    {
#line 306 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__V_25_25);
    }
#line 306 "module_cmds.m"
    {
#line 306 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "% \140", parse_tree__module_cmds__V_24_24);
    }
#line 305 "module_cmds.m"
    {
#line 305 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_21_21);
    }
#line 307 "module_cmds.m"
    {
#line 307 "module_cmds.m"
      parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__OutputFileName_10, &parse_tree__module_cmds__MoveRes_15);
    }
#line 311 "module_cmds.m"
    if ((parse_tree__module_cmds__MoveRes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "module_cmds.m"
      *parse_tree__module_cmds__Result_12 = (MR_Integer) 0;
#line 311 "module_cmds.m"
    else
#line 312 "module_cmds.m"
      {
#line 312 "module_cmds.m"
        MR_Word parse_tree__module_cmds__MoveError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MoveRes_15, (MR_Integer) 0)));
#line 312 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_30_30;
#line 312 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;
#line 312 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 312 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_36_36;

#line 313 "module_cmds.m"
        *parse_tree__module_cmds__Result_12 = (MR_Integer) 2;
#line 315 "module_cmds.m"
        {
#line 315 "module_cmds.m"
          parse_tree__module_cmds__V_36_36 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__MoveError_16);
        }
#line 314 "module_cmds.m"
        {
#line 314 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", parse_tree__module_cmds__V_36_36);
        }
#line 314 "module_cmds.m"
        {
#line 314 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_10, parse_tree__module_cmds__V_34_34);
        }
#line 314 "module_cmds.m"
        {
#line 314 "module_cmds.m"
          parse_tree__module_cmds__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "Error creating \140", parse_tree__module_cmds__V_33_33);
        }
#line 314 "module_cmds.m"
        {
#line 314 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_30_30);
        }
#line 316 "module_cmds.m"
        {
#line 316 "module_cmds.m"
          mercury__io__nl_2_p_0();
        }
#line 312 "module_cmds.m"
      }
#line 318 "module_cmds.m"
    {
#line 318 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__V_17_17);
    }
#line 303 "module_cmds.m"
  }
#line 299 "module_cmds.m"
}

#line 198 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_launcher_batch_file_6_p_0(
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 198 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Pred_9,
#line 198 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 198 "module_cmds.m"
{
#line 1240 "module_cmds.m"
  {
#line 1240 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1240 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1240 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1250 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1242 "module_cmds.m"
    {
#line 1242 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1245 "module_cmds.m"
    {
#line 1245 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 1247 "module_cmds.m"
    {
#line 1247 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1246 "module_cmds.m"
    {
#line 1246 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1250 "module_cmds.m"
    {
#line 1250 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1251 "module_cmds.m"
    {
#line 1251 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1257 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1258 "module_cmds.m"
      {
#line 1258 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1258 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1259 "module_cmds.m"
        {
#line 1259 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1259 "module_cmds.m"
          return;
        }
#line 1258 "module_cmds.m"
      }
#line 1257 "module_cmds.m"
    else
#line 1253 "module_cmds.m"
      {
#line 1253 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1254 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1254 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34;

#line 1254 "module_cmds.m"
        {
#line 1254 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34);
        }
#line 1255 "module_cmds.m"
        {
#line 1255 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1256 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1253 "module_cmds.m"
      }
#line 1240 "module_cmds.m"
  }
#line 198 "module_cmds.m"
}

#line 194 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_launcher_shell_script_6_p_0(
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_8,
#line 194 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Pred_9,
#line 194 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 194 "module_cmds.m"
{
#line 1201 "module_cmds.m"
  {
#line 1201 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1201 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1201 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 1201 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_29_29;
#line 1211 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1203 "module_cmds.m"
    {
#line 1203 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_13);
    }
#line 1206 "module_cmds.m"
    {
#line 1206 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_14);
    }
#line 1208 "module_cmds.m"
    {
#line 1208 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1207 "module_cmds.m"
    {
#line 1207 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_29_29);
    }
#line 1207 "module_cmds.m"
    {
#line 1207 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_26_26);
    }
#line 1211 "module_cmds.m"
    {
#line 1211 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1212 "module_cmds.m"
    {
#line 1212 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1232 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1233 "module_cmds.m"
      {
#line 1233 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;
#line 1233 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1234 "module_cmds.m"
        {
#line 1234 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
#line 1234 "module_cmds.m"
        {
#line 1234 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_35_35);
#line 1234 "module_cmds.m"
          return;
        }
#line 1233 "module_cmds.m"
      }
#line 1232 "module_cmds.m"
    else
#line 1214 "module_cmds.m"
      {
#line 1214 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1214 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ChmodResult_18;
#line 1214 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_38_38;
#line 1215 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1215 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36;

#line 1215 "module_cmds.m"
        {
#line 1215 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36);
        }
#line 1216 "module_cmds.m"
        {
#line 1216 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1217 "module_cmds.m"
        {
#line 1217 "module_cmds.m"
          parse_tree__module_cmds__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
#line 1217 "module_cmds.m"
        {
#line 1217 "module_cmds.m"
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_38_38, &parse_tree__module_cmds__ChmodResult_18);
        }
#line 1227 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "module_cmds.m"
          {
#line 1228 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
#line 1228 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_43_43;

#line 1229 "module_cmds.m"
            {
#line 1229 "module_cmds.m"
              parse_tree__module_cmds__V_43_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
#line 1229 "module_cmds.m"
            {
#line 1229 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_43_43);
#line 1229 "module_cmds.m"
              return;
            }
#line 1228 "module_cmds.m"
          }
#line 1227 "module_cmds.m"
        else
#line 1219 "module_cmds.m"
          {
#line 1219 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

#line 1220 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
#line 1220 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 1221 "module_cmds.m"
              {
#line 1221 "module_cmds.m"
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1222 "module_cmds.m"
                {
#line 1222 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
                }
#line 1221 "module_cmds.m"
              }
#line 1220 "module_cmds.m"
            else
#line 1224 "module_cmds.m"
              {
#line 1224 "module_cmds.m"
                {
#line 1224 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1224 "module_cmds.m"
                  return;
                }
#line 1224 "module_cmds.m"
              }
#line 1219 "module_cmds.m"
          }
#line 1214 "module_cmds.m"
      }
#line 1201 "module_cmds.m"
  }
#line 194 "module_cmds.m"
}

#line 189 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_erlang_shell_script_5_p_0(
#line 189 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 189 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 189 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 189 "module_cmds.m"
{
#line 1019 "module_cmds.m"
  {
#line 1019 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1019 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_10;

#line 1020 "module_cmds.m"
    {
#line 1020 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_10);
    }
#line 1029 "module_cmds.m"
#line 1029 "module_cmds.m"
    switch (parse_tree__module_cmds__TargetEnvType_10) {
#line 1029 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1029 "module_cmds.m"
      case (MR_Integer) 1:
#line 1029 "module_cmds.m"
      case (MR_Integer) 2:
#line 1029 "module_cmds.m"
      case (MR_Integer) 0:
#line 1025 "module_cmds.m"
        {
#line 1025 "module_cmds.m"
          MR_String parse_tree__module_cmds__FileName_31;
#line 1025 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Verbose_32;
#line 1025 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OpenResult_34;
#line 1025 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_42_42;
#line 1025 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_45_45;
#line 1211 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_33_33;

#line 1203 "module_cmds.m"
          {
#line 1203 "module_cmds.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_31);
          }
#line 1206 "module_cmds.m"
          {
#line 1206 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_32);
          }
#line 1208 "module_cmds.m"
          {
#line 1208 "module_cmds.m"
            parse_tree__module_cmds__V_45_45 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_31, (MR_String) "\'...\n");
          }
#line 1207 "module_cmds.m"
          {
#line 1207 "module_cmds.m"
            parse_tree__module_cmds__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_45_45);
          }
#line 1207 "module_cmds.m"
          {
#line 1207 "module_cmds.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, parse_tree__module_cmds__V_42_42);
          }
#line 1211 "module_cmds.m"
          {
#line 1211 "module_cmds.m"
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__V_33_33);
          }
#line 1212 "module_cmds.m"
          {
#line 1212 "module_cmds.m"
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__OpenResult_34);
          }
#line 1232 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 1233 "module_cmds.m"
            {
#line 1233 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_51_51;
#line 1233 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Message_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));

#line 1234 "module_cmds.m"
              {
#line 1234 "module_cmds.m"
                parse_tree__module_cmds__V_51_51 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_65);
              }
#line 1234 "module_cmds.m"
              {
#line 1234 "module_cmds.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_51_51);
#line 1234 "module_cmds.m"
                return;
              }
#line 1233 "module_cmds.m"
            }
#line 1232 "module_cmds.m"
          else
#line 1214 "module_cmds.m"
            {
#line 1214 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));
#line 1214 "module_cmds.m"
              MR_Word parse_tree__module_cmds__ChmodResult_36;
#line 1214 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_54_54;

#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                parse_tree__module_cmds__write_erlang_shell_script_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Stream_35);
              }
#line 1216 "module_cmds.m"
              {
#line 1216 "module_cmds.m"
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_35);
              }
#line 1217 "module_cmds.m"
              {
#line 1217 "module_cmds.m"
                parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_31);
              }
#line 1217 "module_cmds.m"
              {
#line 1217 "module_cmds.m"
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_54_54, &parse_tree__module_cmds__ChmodResult_36);
              }
#line 1227 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_36)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "module_cmds.m"
                {
#line 1228 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Message_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));
#line 1228 "module_cmds.m"
                  MR_String parse_tree__module_cmds__V_59_59;

#line 1229 "module_cmds.m"
                  {
#line 1229 "module_cmds.m"
                    parse_tree__module_cmds__V_59_59 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_38);
                  }
#line 1229 "module_cmds.m"
                  {
#line 1229 "module_cmds.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_59_59);
#line 1229 "module_cmds.m"
                    return;
                  }
#line 1228 "module_cmds.m"
                }
#line 1227 "module_cmds.m"
              else
#line 1219 "module_cmds.m"
                {
#line 1219 "module_cmds.m"
                  MR_Integer parse_tree__module_cmds__Status_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));

#line 1220 "module_cmds.m"
                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_37 == (MR_Integer) 0);
#line 1220 "module_cmds.m"
                  if (parse_tree__module_cmds__succeeded)
#line 1221 "module_cmds.m"
                    {
#line 1221 "module_cmds.m"
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1222 "module_cmds.m"
                      {
#line 1222 "module_cmds.m"
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, (MR_String) "% done.\n");
                      }
#line 1221 "module_cmds.m"
                    }
#line 1220 "module_cmds.m"
                  else
#line 1224 "module_cmds.m"
                    {
#line 1224 "module_cmds.m"
                      {
#line 1224 "module_cmds.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1224 "module_cmds.m"
                        return;
                      }
#line 1224 "module_cmds.m"
                    }
#line 1219 "module_cmds.m"
                }
#line 1214 "module_cmds.m"
            }
#line 1025 "module_cmds.m"
        }
#line 1029 "module_cmds.m"
        break;
#line 1029 "module_cmds.m"
      case (MR_Integer) 4:
#line 1029 "module_cmds.m"
      case (MR_Integer) 3:
#line 1033 "module_cmds.m"
        {
#line 1033 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
#line 1029 "module_cmds.m"
        break;
#line 1029 "module_cmds.m"
    }
#line 1019 "module_cmds.m"
  }
#line 189 "module_cmds.m"
}

#line 178 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__get_env_classpath_3_p_0(
#line 178 "module_cmds.m"
  MR_String * parse_tree__module_cmds__Classpath_4)
#line 178 "module_cmds.m"
{
#line 999 "module_cmds.m"
  {
#line 999 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 999 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeCP_6;

#line 1000 "module_cmds.m"
    {
#line 1000 "module_cmds.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "CLASSPATH", &parse_tree__module_cmds__MaybeCP_6);
    }
#line 1003 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeCP_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "module_cmds.m"
      {
#line 1004 "module_cmds.m"
        MR_Word parse_tree__module_cmds__MaybeJCP_7;

#line 1005 "module_cmds.m"
        {
#line 1005 "module_cmds.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "java.class.path", &parse_tree__module_cmds__MaybeJCP_7);
        }
#line 1008 "module_cmds.m"
        if ((parse_tree__module_cmds__MaybeJCP_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = (MR_String) "";
#line 1008 "module_cmds.m"
        else
#line 1007 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeJCP_7, (MR_Integer) 0)));
#line 1004 "module_cmds.m"
      }
#line 1003 "module_cmds.m"
    else
#line 1002 "module_cmds.m"
      *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeCP_6, (MR_Integer) 0)));
#line 999 "module_cmds.m"
  }
#line 178 "module_cmds.m"
}

#line 169 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(
#line 169 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_4,
#line 169 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFiles_5,
#line 169 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ListClassFiles_6)
#line 169 "module_cmds.m"
{
#line 953 "module_cmds.m"
  {
#line 953 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 953 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_7;
#line 953 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_8;
#line 953 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_9;

#line 954 "module_cmds.m"
    {
#line 954 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 633, &parse_tree__module_cmds__UseSubdirs_7);
    }
#line 955 "module_cmds.m"
    {
#line 955 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 634, &parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 956 "module_cmds.m"
    {
#line 956 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_9 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_7, parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 970 "module_cmds.m"
#line 970 "module_cmds.m"
    switch (parse_tree__module_cmds__AnySubdirs_9) {
#line 970 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 970 "module_cmds.m"
      case (MR_Integer) 0:
#line 972 "module_cmds.m"
        *parse_tree__module_cmds__ListClassFiles_6 = parse_tree__module_cmds__ClassFiles_5;
#line 970 "module_cmds.m"
        break;
#line 970 "module_cmds.m"
      case (MR_Integer) 1:
#line 958 "module_cmds.m"
        {
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__ClassSubdir_10;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_14_14;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_15_15;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_17_17;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_19_19;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_20_20;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_22_22;
#line 958 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_24_24;

#line 959 "module_cmds.m"
          {
#line 959 "module_cmds.m"
            parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_4, &parse_tree__module_cmds__ClassSubdir_10);
          }
#line 969 "module_cmds.m"
          {
#line 969 "module_cmds.m"
            parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, (MR_String) "/| |\'\140");
          }
#line 969 "module_cmds.m"
          {
#line 969 "module_cmds.m"
            parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", parse_tree__module_cmds__V_24_24);
          }
#line 968 "module_cmds.m"
          {
#line 968 "module_cmds.m"
            parse_tree__module_cmds__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__module_cmds__V_22_22);
          }
#line 968 "module_cmds.m"
          {
#line 968 "module_cmds.m"
            parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassFiles_5, parse_tree__module_cmds__V_20_20);
          }
#line 968 "module_cmds.m"
          {
#line 968 "module_cmds.m"
            parse_tree__module_cmds__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", parse_tree__module_cmds__V_19_19);
          }
#line 967 "module_cmds.m"
          {
#line 967 "module_cmds.m"
            parse_tree__module_cmds__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", parse_tree__module_cmds__V_17_17);
          }
#line 967 "module_cmds.m"
          {
#line 967 "module_cmds.m"
            parse_tree__module_cmds__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, parse_tree__module_cmds__V_15_15);
          }
#line 967 "module_cmds.m"
          {
#line 967 "module_cmds.m"
            *parse_tree__module_cmds__ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", parse_tree__module_cmds__V_14_14);
          }
#line 958 "module_cmds.m"
        }
#line 970 "module_cmds.m"
        break;
#line 970 "module_cmds.m"
    }
#line 953 "module_cmds.m"
  }
#line 169 "module_cmds.m"
}

#line 944 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 944 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 944 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 944 "module_cmds.m"
{
#line 944 "module_cmds.m"
  {
#line 944 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 944 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 944 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_HeadVar__3_3;

#line 944 "module_cmds.m"
    {
#line 944 "module_cmds.m"
      parse_tree__module_cmds__conv3_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 944 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_HeadVar__3_3));
#line 944 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 944 "module_cmds.m"
  }
#line 944 "module_cmds.m"
}

#line 933 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 933 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 933 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8)
#line 933 "module_cmds.m"
{
#line 933 "module_cmds.m"
  {
#line 933 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 933 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv2_Continue_14;
#line 933 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20;

#line 933 "module_cmds.m"
    {
#line 933 "module_cmds.m"
      parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), ((MR_String) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv2_Continue_14, ((MR_Word) parse_tree__module_cmds__wrapper_arg_5), &parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20);
    }
#line 933 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv2_Continue_14));
#line 933 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_6 = ((MR_Box) (parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20));
#line 933 "module_cmds.m"
  }
#line 933 "module_cmds.m"
}

#line 926 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 926 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 926 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 926 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2)
#line 926 "module_cmds.m"
{
#line 926 "module_cmds.m"
  {
#line 926 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 926 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 926 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_ClassPrefix_4;

#line 926 "module_cmds.m"
    {
#line 926 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__make_nested_class_prefix_2_p_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv0_ClassPrefix_4);
    }
#line 926 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 926 "module_cmds.m"
      {
#line 926 "module_cmds.m"
        *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_ClassPrefix_4));
#line 926 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 926 "module_cmds.m"
      }
#line 926 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 926 "module_cmds.m"
  }
#line 926 "module_cmds.m"
}

#line 162 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0(
#line 162 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 162 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainClassFiles_8,
#line 162 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassSubDir_9,
#line 162 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__ListClassFiles_10)
#line 162 "module_cmds.m"
{
#line 914 "module_cmds.m"
  {
#line 914 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_42_42;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_12;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_13;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_14;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixes_15;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixesSet_16;
#line 914 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchDir_17;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_19;
#line 914 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_32_32;

#line 915 "module_cmds.m"
    {
#line 915 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 633, &parse_tree__module_cmds__UseSubdirs_12);
    }
#line 916 "module_cmds.m"
    {
#line 916 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 634, &parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 917 "module_cmds.m"
    {
#line 917 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_14 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_12, parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 921 "module_cmds.m"
#line 921 "module_cmds.m"
    switch (parse_tree__module_cmds__AnySubdirs_14) {
#line 921 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 921 "module_cmds.m"
      case (MR_Integer) 0:
#line 923 "module_cmds.m"
        {
#line 923 "module_cmds.m"
          *parse_tree__module_cmds__ClassSubDir_9 = mercury__dir__this_directory_0_f_0();
        }
#line 921 "module_cmds.m"
        break;
#line 921 "module_cmds.m"
      case (MR_Integer) 1:
#line 920 "module_cmds.m"
        {
#line 920 "module_cmds.m"
          parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__ClassSubDir_9);
        }
#line 921 "module_cmds.m"
        break;
#line 921 "module_cmds.m"
    }
#line 5463 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 926 "module_cmds.m"
    {
#line 926 "module_cmds.m"
      mercury__list__filter_map_3_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, (MR_Word) &parse_tree__module_cmds_scalar_common_5[0], parse_tree__module_cmds__MainClassFiles_8, &parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 928 "module_cmds.m"
    {
#line 928 "module_cmds.m"
      parse_tree__module_cmds__NestedClassPrefixesSet_16 = mercury__set__from_list_1_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 930 "module_cmds.m"
    {
#line 930 "module_cmds.m"
      parse_tree__module_cmds__SearchDir_17 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "jmercury");
    }
#line 933 "module_cmds.m"
    {
#line 933 "module_cmds.m"
      parse_tree__module_cmds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 933 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
#line 933 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
#line 933 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 933 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 3) = ((MR_Box) (parse_tree__module_cmds__NestedClassPrefixesSet_16));
#line 933 "module_cmds.m"
    }
#line 932 "module_cmds.m"
    {
#line 932 "module_cmds.m"
      mercury__dir__recursive_foldl2_7_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[0], parse_tree__module_cmds__V_32_32, parse_tree__module_cmds__SearchDir_17, (MR_Integer) 1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_cmds__Result_19);
    }
#line 948 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_19)) == (MR_mktag((MR_Integer) 1))))
#line 949 "module_cmds.m"
      {
#line 949 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 1)));
#line 949 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 949 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));

#line 950 "module_cmds.m"
        {
#line 950 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 950 "module_cmds.m"
        {
#line 950 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", parse_tree__module_cmds__V_37_37);
#line 950 "module_cmds.m"
          return;
        }
#line 949 "module_cmds.m"
      }
#line 948 "module_cmds.m"
    else
#line 936 "module_cmds.m"
      {
#line 936 "module_cmds.m"
        MR_Word parse_tree__module_cmds__NestedClassFiles_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));
#line 936 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles0_21;
#line 936 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles_22;
#line 939 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_54_54;

#line 937 "module_cmds.m"
        {
#line 937 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles0_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__MainClassFiles_8, parse_tree__module_cmds__NestedClassFiles_20);
        }
#line 939 "module_cmds.m"
        {
#line 939 "module_cmds.m"
          parse_tree__module_cmds__V_54_54 = mercury__dir__this_directory_0_f_0();
        }
#line 939 "module_cmds.m"
        parse_tree__module_cmds__succeeded = (strcmp(*parse_tree__module_cmds__ClassSubDir_9, parse_tree__module_cmds__V_54_54) == 0);
#line 939 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 940 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles_22 = parse_tree__module_cmds__AllClassFiles0_21;
#line 939 "module_cmds.m"
        else
#line 942 "module_cmds.m"
          {
#line 942 "module_cmds.m"
            MR_String parse_tree__module_cmds__ClassSubDirSep_23;
#line 942 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_39_39;

#line 942 "module_cmds.m"
            {
#line 942 "module_cmds.m"
              parse_tree__module_cmds__ClassSubDirSep_23 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "");
            }
#line 944 "module_cmds.m"
            {
#line 944 "module_cmds.m"
              parse_tree__module_cmds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 944 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 944 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
#line 944 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 944 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 3) = ((MR_Box) (parse_tree__module_cmds__ClassSubDirSep_23));
#line 944 "module_cmds.m"
            }
#line 943 "module_cmds.m"
            {
#line 943 "module_cmds.m"
              parse_tree__module_cmds__AllClassFiles_22 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__V_39_39, parse_tree__module_cmds__AllClassFiles0_21);
            }
#line 942 "module_cmds.m"
          }
#line 947 "module_cmds.m"
        {
#line 947 "module_cmds.m"
          mercury__list__sort_2_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__AllClassFiles_22, parse_tree__module_cmds__ListClassFiles_10);
        }
#line 936 "module_cmds.m"
      }
#line 914 "module_cmds.m"
  }
#line 162 "module_cmds.m"
}

#line 155 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(
#line 155 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_3,
#line 155 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9)
#line 155 "module_cmds.m"
{
#line 887 "module_cmds.m"
  {
#line 887 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 887 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdlibDir_5;
#line 887 "module_cmds.m"
    MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 891 "module_cmds.m"
    {
#line 891 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 541, &parse_tree__module_cmds__MaybeStdlibDir_5);
    }
#line 909 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdlibDir_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 909 "module_cmds.m"
    else
#line 894 "module_cmds.m"
      {
#line 894 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TypeCtorInfo_44_44;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdlibDir_5, (MR_Integer) 0)));
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__GradeDir_7;
#line 894 "module_cmds.m"
        MR_Word parse_tree__module_cmds__SourceDebug_8;
#line 894 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_31_31;
#line 894 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_39_39;
#line 894 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_40_40;

#line 895 "module_cmds.m"
        {
#line 895 "module_cmds.m"
          libs__compute_grade__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_3, &parse_tree__module_cmds__GradeDir_7);
        }
#line 897 "module_cmds.m"
        {
#line 897 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 233, &parse_tree__module_cmds__SourceDebug_8);
        }
#line 904 "module_cmds.m"
#line 904 "module_cmds.m"
        switch (parse_tree__module_cmds__SourceDebug_8) {
#line 904 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "module_cmds.m"
          case (MR_Integer) 0:
#line 905 "module_cmds.m"
            parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 904 "module_cmds.m"
            break;
#line 904 "module_cmds.m"
          case (MR_Integer) 1:
#line 900 "module_cmds.m"
            {
#line 900 "module_cmds.m"
              MR_Word parse_tree__module_cmds__TypeCtorInfo_43_43;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_13_13;
#line 900 "module_cmds.m"
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_15_15;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_16_16;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_19_19;
#line 900 "module_cmds.m"
              MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_21_21;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_22_22;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_25_25;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_27_27;
#line 900 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_28_28;

#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_16_16 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_15_15 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_16_16, parse_tree__module_cmds__GradeDir_7);
              }
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                parse_tree__module_cmds__V_13_13 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_15_15, (MR_String) "mer_browser.jar");
              }
#line 5721 "parse_tree.module_cmds.c"
              parse_tree__module_cmds__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 901 "module_cmds.m"
              {
#line 901 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_13_13)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14);
              }
#line 902 "module_cmds.m"
              {
#line 902 "module_cmds.m"
                parse_tree__module_cmds__V_22_22 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 902 "module_cmds.m"
              {
#line 902 "module_cmds.m"
                parse_tree__module_cmds__V_21_21 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_22_22, parse_tree__module_cmds__GradeDir_7);
              }
#line 902 "module_cmds.m"
              {
#line 902 "module_cmds.m"
                parse_tree__module_cmds__V_19_19 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_21_21, (MR_String) "mer_mdbcomp.jar");
              }
#line 902 "module_cmds.m"
              {
#line 902 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_19_19)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20);
              }
#line 903 "module_cmds.m"
              {
#line 903 "module_cmds.m"
                parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
              }
#line 903 "module_cmds.m"
              {
#line 903 "module_cmds.m"
                parse_tree__module_cmds__V_27_27 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_28_28, parse_tree__module_cmds__GradeDir_7);
              }
#line 903 "module_cmds.m"
              {
#line 903 "module_cmds.m"
                parse_tree__module_cmds__V_25_25 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_27_27, (MR_String) "mer_ssdb.jar");
              }
#line 903 "module_cmds.m"
              {
#line 903 "module_cmds.m"
                mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_25_25)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26);
              }
#line 900 "module_cmds.m"
            }
#line 904 "module_cmds.m"
            break;
#line 904 "module_cmds.m"
        }
#line 907 "module_cmds.m"
        {
#line 907 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 907 "module_cmds.m"
        {
#line 907 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, parse_tree__module_cmds__GradeDir_7);
        }
#line 907 "module_cmds.m"
        {
#line 907 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_33_33, (MR_String) "mer_std.jar");
        }
#line 5789 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 907 "module_cmds.m"
        {
#line 907 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_31_31)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32);
        }
#line 908 "module_cmds.m"
        {
#line 908 "module_cmds.m"
          parse_tree__module_cmds__V_40_40 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 908 "module_cmds.m"
        {
#line 908 "module_cmds.m"
          parse_tree__module_cmds__V_39_39 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_40_40, parse_tree__module_cmds__GradeDir_7);
        }
#line 908 "module_cmds.m"
        {
#line 908 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_39_39, (MR_String) "mer_rt.jar");
        }
#line 908 "module_cmds.m"
        {
#line 908 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_37_37)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32, parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9);
        }
#line 894 "module_cmds.m"
      }
#line 887 "module_cmds.m"
  }
#line 155 "module_cmds.m"
}

#line 148 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__create_java_shell_script_5_p_0(
#line 148 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 148 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 148 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 148 "module_cmds.m"
{
#line 764 "module_cmds.m"
  {
#line 764 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 764 "module_cmds.m"
    MR_String parse_tree__module_cmds__JarFileName_11;
#line 764 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_12;

#line 766 "module_cmds.m"
    {
#line 766 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) ".jar", (MR_Integer) 1, &parse_tree__module_cmds__JarFileName_11);
    }
#line 768 "module_cmds.m"
    {
#line 768 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_12);
    }
#line 776 "module_cmds.m"
#line 776 "module_cmds.m"
    switch (parse_tree__module_cmds__TargetEnvType_12) {
#line 776 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 776 "module_cmds.m"
      case (MR_Integer) 1:
#line 776 "module_cmds.m"
      case (MR_Integer) 0:
#line 772 "module_cmds.m"
        {
#line 772 "module_cmds.m"
          MR_String parse_tree__module_cmds__FileName_40;
#line 772 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Verbose_41;
#line 772 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OpenResult_43;
#line 772 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_51_51;
#line 772 "module_cmds.m"
          MR_String parse_tree__module_cmds__V_54_54;
#line 1211 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_42_42;

#line 1203 "module_cmds.m"
          {
#line 1203 "module_cmds.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 0, &parse_tree__module_cmds__FileName_40);
          }
#line 1206 "module_cmds.m"
          {
#line 1206 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_41);
          }
#line 1208 "module_cmds.m"
          {
#line 1208 "module_cmds.m"
            parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_40, (MR_String) "\'...\n");
          }
#line 1207 "module_cmds.m"
          {
#line 1207 "module_cmds.m"
            parse_tree__module_cmds__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_54_54);
          }
#line 1207 "module_cmds.m"
          {
#line 1207 "module_cmds.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, parse_tree__module_cmds__V_51_51);
          }
#line 1211 "module_cmds.m"
          {
#line 1211 "module_cmds.m"
            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__V_42_42);
          }
#line 1212 "module_cmds.m"
          {
#line 1212 "module_cmds.m"
            mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_40, &parse_tree__module_cmds__OpenResult_43);
          }
#line 1232 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_43)) == (MR_mktag((MR_Integer) 1))))
#line 1233 "module_cmds.m"
            {
#line 1233 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_60_60;
#line 1233 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Message_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));

#line 1234 "module_cmds.m"
              {
#line 1234 "module_cmds.m"
                parse_tree__module_cmds__V_60_60 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_74);
              }
#line 1234 "module_cmds.m"
              {
#line 1234 "module_cmds.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_60_60);
#line 1234 "module_cmds.m"
                return;
              }
#line 1233 "module_cmds.m"
            }
#line 1232 "module_cmds.m"
          else
#line 1214 "module_cmds.m"
            {
#line 1214 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Stream_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_43, (MR_Integer) 0)));
#line 1214 "module_cmds.m"
              MR_Word parse_tree__module_cmds__ChmodResult_45;
#line 1214 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_63_63;

#line 1215 "module_cmds.m"
              {
#line 1215 "module_cmds.m"
                parse_tree__module_cmds__write_java_shell_script_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Stream_44);
              }
#line 1216 "module_cmds.m"
              {
#line 1216 "module_cmds.m"
                mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_44);
              }
#line 1217 "module_cmds.m"
              {
#line 1217 "module_cmds.m"
                parse_tree__module_cmds__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_40);
              }
#line 1217 "module_cmds.m"
              {
#line 1217 "module_cmds.m"
                mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_63_63, &parse_tree__module_cmds__ChmodResult_45);
              }
#line 1227 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_45)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "module_cmds.m"
                {
#line 1228 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Message_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));
#line 1228 "module_cmds.m"
                  MR_String parse_tree__module_cmds__V_68_68;

#line 1229 "module_cmds.m"
                  {
#line 1229 "module_cmds.m"
                    parse_tree__module_cmds__V_68_68 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_47);
                  }
#line 1229 "module_cmds.m"
                  {
#line 1229 "module_cmds.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_68_68);
#line 1229 "module_cmds.m"
                    return;
                  }
#line 1228 "module_cmds.m"
                }
#line 1227 "module_cmds.m"
              else
#line 1219 "module_cmds.m"
                {
#line 1219 "module_cmds.m"
                  MR_Integer parse_tree__module_cmds__Status_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_45, (MR_Integer) 0)));

#line 1220 "module_cmds.m"
                  parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_46 == (MR_Integer) 0);
#line 1220 "module_cmds.m"
                  if (parse_tree__module_cmds__succeeded)
#line 1221 "module_cmds.m"
                    {
#line 1221 "module_cmds.m"
                      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1222 "module_cmds.m"
                      {
#line 1222 "module_cmds.m"
                        libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_41, (MR_String) "% done.\n");
                      }
#line 1221 "module_cmds.m"
                    }
#line 1220 "module_cmds.m"
                  else
#line 1224 "module_cmds.m"
                    {
#line 1224 "module_cmds.m"
                      {
#line 1224 "module_cmds.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1224 "module_cmds.m"
                        return;
                      }
#line 1224 "module_cmds.m"
                    }
#line 1219 "module_cmds.m"
                }
#line 1214 "module_cmds.m"
            }
#line 772 "module_cmds.m"
        }
#line 776 "module_cmds.m"
        break;
#line 776 "module_cmds.m"
      case (MR_Integer) 2:
#line 778 "module_cmds.m"
        {
#line 778 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_115_104_101_108_108_95_115_99_114_105_112_116_95_95_104_111_53_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
#line 776 "module_cmds.m"
        break;
#line 776 "module_cmds.m"
      case (MR_Integer) 4:
#line 776 "module_cmds.m"
      case (MR_Integer) 3:
#line 786 "module_cmds.m"
        {
#line 786 "module_cmds.m"
          parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_54_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__JarFileName_11, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
        }
#line 776 "module_cmds.m"
        break;
#line 776 "module_cmds.m"
    }
#line 764 "module_cmds.m"
  }
#line 148 "module_cmds.m"
}

#line 138 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_command_string_3_p_0(
#line 138 "module_cmds.m"
  MR_String parse_tree__module_cmds__String0_4,
#line 138 "module_cmds.m"
  MR_Word parse_tree__module_cmds__QuoteType_5,
#line 138 "module_cmds.m"
  MR_String * parse_tree__module_cmds__String_6)
#line 138 "module_cmds.m"
{
#line 707 "module_cmds.m"
  {
#line 707 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 747 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__make_command_string_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 747 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 6090 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 707 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 714 "module_cmds.m"
      {
#line 714 "module_cmds.m"
        MR_String parse_tree__module_cmds__Quote_7;
#line 714 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_8_8;
#line 714 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_10_10;
#line 714 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_11_11;
#line 714 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_12_12;

#line 711 "module_cmds.m"
#line 711 "module_cmds.m"
        switch (parse_tree__module_cmds__QuoteType_5) {
#line 711 "module_cmds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 711 "module_cmds.m"
          case (MR_Integer) 1:
#line 713 "module_cmds.m"
            parse_tree__module_cmds__Quote_7 = (MR_String) " \"";
#line 711 "module_cmds.m"
            break;
#line 711 "module_cmds.m"
          case (MR_Integer) 0:
#line 710 "module_cmds.m"
            parse_tree__module_cmds__Quote_7 = (MR_String) " \'";
#line 711 "module_cmds.m"
            break;
#line 711 "module_cmds.m"
        }
#line 715 "module_cmds.m"
        {
#line 715 "module_cmds.m"
          parse_tree__module_cmds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 715 "module_cmds.m"
        }
#line 715 "module_cmds.m"
        {
#line 715 "module_cmds.m"
          parse_tree__module_cmds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 0) = ((MR_Box) (parse_tree__module_cmds__String0_4));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 1) = ((MR_Box) (parse_tree__module_cmds__V_12_12));
#line 715 "module_cmds.m"
        }
#line 715 "module_cmds.m"
        {
#line 715 "module_cmds.m"
          parse_tree__module_cmds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 1) = ((MR_Box) (parse_tree__module_cmds__V_11_11));
#line 715 "module_cmds.m"
        }
#line 715 "module_cmds.m"
        {
#line 715 "module_cmds.m"
          parse_tree__module_cmds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
#line 715 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 1) = ((MR_Box) (parse_tree__module_cmds__V_10_10));
#line 715 "module_cmds.m"
        }
#line 715 "module_cmds.m"
        {
#line 715 "module_cmds.m"
          mercury__string__append_list_2_p_0(parse_tree__module_cmds__V_8_8, parse_tree__module_cmds__String_6);
        }
#line 714 "module_cmds.m"
      }
#line 707 "module_cmds.m"
    else
#line 717 "module_cmds.m"
      *parse_tree__module_cmds__String_6 = parse_tree__module_cmds__String0_4;
#line 707 "module_cmds.m"
  }
#line 138 "module_cmds.m"
}

#line 686 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 686 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 686 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
#line 686 "module_cmds.m"
{
#line 686 "module_cmds.m"
  {
#line 686 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

#line 686 "module_cmds.m"
    {
#line 686 "module_cmds.m"
      mercury__io__write_char_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 686 "module_cmds.m"
  }
#line 686 "module_cmds.m"
}

#line 132 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(
#line 132 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_9,
#line 132 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ErrorStream_10,
#line 132 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Verbosity_11,
#line 132 "module_cmds.m"
  MR_String parse_tree__module_cmds__Command_12,
#line 132 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MaybeProcessOutput_13,
#line 132 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_14)
#line 132 "module_cmds.m"
{
#line 552 "module_cmds.m"
  {
#line 552 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 552 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__OldStatus_16;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_17;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__PrintCommand_18;
#line 552 "module_cmds.m"
    MR_String parse_tree__module_cmds__TmpFile_19;
#line 552 "module_cmds.m"
    MR_String parse_tree__module_cmds__CommandRedirected_20;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_21;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__CommandSucceeded_23;
#line 552 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessedTmpFile_27;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__ProcessOutputSucceeded_33;
#line 552 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TmpFileRes_36;
#line 621 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessOutput_26;
#line 703 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;

#line 554 "module_cmds.m"
    {
#line 554 "module_cmds.m"
      mercury__io__get_exit_status_3_p_0(&parse_tree__module_cmds__OldStatus_16);
    }
#line 555 "module_cmds.m"
    {
#line 555 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_17);
    }
#line 559 "module_cmds.m"
#line 559 "module_cmds.m"
    switch (parse_tree__module_cmds__Verbosity_11) {
#line 559 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 559 "module_cmds.m"
      case (MR_Integer) 0:
#line 557 "module_cmds.m"
        parse_tree__module_cmds__PrintCommand_18 = parse_tree__module_cmds__Verbose_17;
#line 559 "module_cmds.m"
        break;
#line 559 "module_cmds.m"
      case (MR_Integer) 1:
#line 560 "module_cmds.m"
        {
#line 561 "module_cmds.m"
          {
#line 561 "module_cmds.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 52, &parse_tree__module_cmds__PrintCommand_18);
          }
#line 560 "module_cmds.m"
        }
#line 559 "module_cmds.m"
        break;
#line 559 "module_cmds.m"
    }
#line 569 "module_cmds.m"
#line 569 "module_cmds.m"
    switch (parse_tree__module_cmds__PrintCommand_18) {
#line 569 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 569 "module_cmds.m"
      case (MR_Integer) 0:
#line 570 "module_cmds.m"
        {
#line 570 "module_cmds.m"
        }
#line 569 "module_cmds.m"
        break;
#line 569 "module_cmds.m"
      case (MR_Integer) 1:
#line 564 "module_cmds.m"
        {
#line 565 "module_cmds.m"
          {
#line 565 "module_cmds.m"
            mercury__io__write_string_3_p_0((MR_String) "% Invoking system command \140");
          }
#line 566 "module_cmds.m"
          {
#line 566 "module_cmds.m"
            mercury__io__write_string_3_p_0(parse_tree__module_cmds__Command_12);
          }
#line 567 "module_cmds.m"
          {
#line 567 "module_cmds.m"
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
#line 568 "module_cmds.m"
          {
#line 568 "module_cmds.m"
            mercury__io__flush_output_2_p_0();
          }
#line 564 "module_cmds.m"
        }
#line 569 "module_cmds.m"
        break;
#line 569 "module_cmds.m"
    }
#line 578 "module_cmds.m"
    {
#line 578 "module_cmds.m"
      mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__TmpFile_19);
    }
#line 579 "module_cmds.m"
    {
#line 579 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 579 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 582 "module_cmds.m"
      parse_tree__module_cmds__CommandRedirected_20 = parse_tree__module_cmds__Command_12;
#line 579 "module_cmds.m"
    else
#line 583 "module_cmds.m"
      {
#line 583 "module_cmds.m"
        {
#line 583 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 583 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 586 "module_cmds.m"
          {
#line 586 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_54_54;

#line 586 "module_cmds.m"
            {
#line 586 "module_cmds.m"
              parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) " > ", parse_tree__module_cmds__TmpFile_19);
            }
#line 586 "module_cmds.m"
            {
#line 586 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Command_12, parse_tree__module_cmds__V_54_54);
            }
#line 586 "module_cmds.m"
          }
#line 583 "module_cmds.m"
        else
#line 588 "module_cmds.m"
          {
#line 588 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_56_56;
#line 588 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_57_57;
#line 588 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_59_59;

#line 589 "module_cmds.m"
            {
#line 589 "module_cmds.m"
              parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 589 "module_cmds.m"
            }
#line 589 "module_cmds.m"
            {
#line 589 "module_cmds.m"
              parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) ((MR_String) " > "));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 589 "module_cmds.m"
            }
#line 589 "module_cmds.m"
            {
#line 589 "module_cmds.m"
              parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) (parse_tree__module_cmds__Command_12));
#line 589 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 589 "module_cmds.m"
            }
#line 589 "module_cmds.m"
            {
#line 589 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_56_56);
            }
#line 588 "module_cmds.m"
          }
#line 583 "module_cmds.m"
      }
#line 591 "module_cmds.m"
    {
#line 591 "module_cmds.m"
      mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__CommandRedirected_20, &parse_tree__module_cmds__Result_21);
    }
#line 601 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_21)) == (MR_mktag((MR_Integer) 1))))
#line 616 "module_cmds.m"
      {
#line 616 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));
#line 616 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_64_64;

#line 617 "module_cmds.m"
        {
#line 617 "module_cmds.m"
          parse_tree__module_cmds__V_64_64 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 617 "module_cmds.m"
        {
#line 617 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_64_64);
        }
#line 618 "module_cmds.m"
        parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 616 "module_cmds.m"
      }
#line 601 "module_cmds.m"
    else
#line 601 "module_cmds.m"
      {
#line 601 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));

#line 601 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__V_146_146)) == (MR_mktag((MR_Integer) 0))))
#line 593 "module_cmds.m"
          {
#line 593 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_146_146, (MR_Integer) 0)));

#line 594 "module_cmds.m"
            {
#line 594 "module_cmds.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
            }
#line 595 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_22 == (MR_Integer) 0);
#line 595 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 596 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 1;
#line 595 "module_cmds.m"
            else
#line 599 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 593 "module_cmds.m"
          }
#line 601 "module_cmds.m"
        else
#line 602 "module_cmds.m"
          {
#line 602 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Signal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_146_146, (MR_Integer) 0)));
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_67_67;
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_70_70;
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_71_71;
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_73_73;
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_76_76;
#line 602 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_77_77;

#line 604 "module_cmds.m"
            {
#line 604 "module_cmds.m"
              parse_tree__module_cmds__V_71_71 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_24);
            }
#line 604 "module_cmds.m"
            {
#line 604 "module_cmds.m"
              parse_tree__module_cmds__V_70_70 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_71_71, (MR_String) ".");
            }
#line 604 "module_cmds.m"
            {
#line 604 "module_cmds.m"
              parse_tree__module_cmds__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_70_70);
            }
#line 603 "module_cmds.m"
            {
#line 603 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_67_67);
            }
#line 609 "module_cmds.m"
            {
#line 609 "module_cmds.m"
              parse_tree__module_cmds__V_77_77 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_24);
            }
#line 609 "module_cmds.m"
            {
#line 609 "module_cmds.m"
              parse_tree__module_cmds__V_76_76 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_77_77, (MR_String) ".");
            }
#line 609 "module_cmds.m"
            {
#line 609 "module_cmds.m"
              parse_tree__module_cmds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_76_76);
            }
#line 608 "module_cmds.m"
            {
#line 608 "module_cmds.m"
              libs__file_util__report_error_3_p_0(parse_tree__module_cmds__V_73_73);
            }
#line 613 "module_cmds.m"
            {
#line 613 "module_cmds.m"
              libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__Signal_24);
            }
#line 614 "module_cmds.m"
            parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 602 "module_cmds.m"
          }
#line 601 "module_cmds.m"
      }
#line 623 "module_cmds.m"
    {
#line 623 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 623 "module_cmds.m"
    parse_tree__module_cmds__succeeded = !(parse_tree__module_cmds__succeeded);
#line 623 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 623 "module_cmds.m"
      {
#line 624 "module_cmds.m"
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__MaybeProcessOutput_13)) == (MR_mktag((MR_Integer) 1)));
#line 624 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 624 "module_cmds.m"
          parse_tree__module_cmds__ProcessOutput_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeProcessOutput_13, (MR_Integer) 0)));
#line 623 "module_cmds.m"
      }
#line 621 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 626 "module_cmds.m"
      {
#line 626 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProcessOutputRedirected_29;
#line 626 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ProcessOutputResult_30;
#line 649 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;

#line 626 "module_cmds.m"
        {
#line 626 "module_cmds.m"
          mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__ProcessedTmpFile_27);
        }
#line 629 "module_cmds.m"
        {
#line 629 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 629 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 630 "module_cmds.m"
          {
#line 630 "module_cmds.m"
            MR_Word parse_tree__module_cmds__SystemEnvType_28;

#line 630 "module_cmds.m"
            {
#line 630 "module_cmds.m"
              libs__globals__get_system_env_type_2_p_0(parse_tree__module_cmds__Globals_9, &parse_tree__module_cmds__SystemEnvType_28);
            }
#line 631 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__SystemEnvType_28 == (MR_Integer) 4);
#line 631 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 632 "module_cmds.m"
              {
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_84_84;
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_86_86;
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_87_87;
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_89_89;
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_90_90;
#line 632 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_92_92;

#line 634 "module_cmds.m"
                {
#line 634 "module_cmds.m"
                  parse_tree__module_cmds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_92_92, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 634 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 634 "module_cmds.m"
                }
#line 634 "module_cmds.m"
                {
#line 634 "module_cmds.m"
                  parse_tree__module_cmds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 0) = ((MR_Box) ((MR_String) " > "));
#line 634 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 1) = ((MR_Box) (parse_tree__module_cmds__V_92_92));
#line 634 "module_cmds.m"
                }
#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_89_89, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_89_89, 1) = ((MR_Box) (parse_tree__module_cmds__V_90_90));
#line 633 "module_cmds.m"
                }
#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_87_87, 0) = ((MR_Box) ((MR_String) " | "));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_87_87, 1) = ((MR_Box) (parse_tree__module_cmds__V_89_89));
#line 633 "module_cmds.m"
                }
#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 1) = ((MR_Box) (parse_tree__module_cmds__V_87_87));
#line 633 "module_cmds.m"
                }
#line 633 "module_cmds.m"
                {
#line 633 "module_cmds.m"
                  parse_tree__module_cmds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 0) = ((MR_Box) ((MR_String) "Get-Content "));
#line 633 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 1) = ((MR_Box) (parse_tree__module_cmds__V_86_86));
#line 633 "module_cmds.m"
                }
#line 632 "module_cmds.m"
                {
#line 632 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_84_84);
                }
#line 632 "module_cmds.m"
              }
#line 631 "module_cmds.m"
            else
#line 638 "module_cmds.m"
              {
#line 638 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_96_96;
#line 638 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_97_97;
#line 638 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_99_99;
#line 638 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_100_100;
#line 638 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_102_102;

#line 640 "module_cmds.m"
                {
#line 640 "module_cmds.m"
                  parse_tree__module_cmds__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 640 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "module_cmds.m"
                }
#line 639 "module_cmds.m"
                {
#line 639 "module_cmds.m"
                  parse_tree__module_cmds__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_100_100, 0) = ((MR_Box) ((MR_String) " > "));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_100_100, 1) = ((MR_Box) (parse_tree__module_cmds__V_102_102));
#line 639 "module_cmds.m"
                }
#line 639 "module_cmds.m"
                {
#line 639 "module_cmds.m"
                  parse_tree__module_cmds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 1) = ((MR_Box) (parse_tree__module_cmds__V_100_100));
#line 639 "module_cmds.m"
                }
#line 639 "module_cmds.m"
                {
#line 639 "module_cmds.m"
                  parse_tree__module_cmds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_97_97, 0) = ((MR_Box) ((MR_String) " < "));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_97_97, 1) = ((MR_Box) (parse_tree__module_cmds__V_99_99));
#line 639 "module_cmds.m"
                }
#line 639 "module_cmds.m"
                {
#line 639 "module_cmds.m"
                  parse_tree__module_cmds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 639 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 1) = ((MR_Box) (parse_tree__module_cmds__V_97_97));
#line 639 "module_cmds.m"
                }
#line 638 "module_cmds.m"
                {
#line 638 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_96_96);
                }
#line 638 "module_cmds.m"
              }
#line 630 "module_cmds.m"
          }
#line 629 "module_cmds.m"
        else
#line 643 "module_cmds.m"
          {
#line 643 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_104_104;
#line 643 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_105_105;
#line 643 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_107_107;
#line 643 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_108_108;
#line 643 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_110_110;

#line 645 "module_cmds.m"
            {
#line 645 "module_cmds.m"
              parse_tree__module_cmds__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_110_110, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 645 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 645 "module_cmds.m"
            }
#line 644 "module_cmds.m"
            {
#line 644 "module_cmds.m"
              parse_tree__module_cmds__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_108_108, 0) = ((MR_Box) ((MR_String) " > "));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_108_108, 1) = ((MR_Box) (parse_tree__module_cmds__V_110_110));
#line 644 "module_cmds.m"
            }
#line 644 "module_cmds.m"
            {
#line 644 "module_cmds.m"
              parse_tree__module_cmds__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_107_107, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_107_107, 1) = ((MR_Box) (parse_tree__module_cmds__V_108_108));
#line 644 "module_cmds.m"
            }
#line 644 "module_cmds.m"
            {
#line 644 "module_cmds.m"
              parse_tree__module_cmds__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_105_105, 0) = ((MR_Box) ((MR_String) " < "));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_105_105, 1) = ((MR_Box) (parse_tree__module_cmds__V_107_107));
#line 644 "module_cmds.m"
            }
#line 644 "module_cmds.m"
            {
#line 644 "module_cmds.m"
              parse_tree__module_cmds__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 644 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 1) = ((MR_Box) (parse_tree__module_cmds__V_105_105));
#line 644 "module_cmds.m"
            }
#line 643 "module_cmds.m"
            {
#line 643 "module_cmds.m"
              parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_104_104);
            }
#line 643 "module_cmds.m"
          }
#line 647 "module_cmds.m"
        {
#line 647 "module_cmds.m"
          mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__ProcessOutputRedirected_29, &parse_tree__module_cmds__ProcessOutputResult_30);
        }
#line 649 "module_cmds.m"
        {
#line 649 "module_cmds.m"
          mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpFile_19, &parse_tree__module_cmds__V_31_31);
        }
#line 660 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ProcessOutputResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 670 "module_cmds.m"
          {
#line 670 "module_cmds.m"
            MR_Word parse_tree__module_cmds__ProcessOutputError_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));
#line 670 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_116_116;

#line 672 "module_cmds.m"
            {
#line 672 "module_cmds.m"
              parse_tree__module_cmds__V_116_116 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__ProcessOutputError_35);
            }
#line 671 "module_cmds.m"
            {
#line 671 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_116_116);
            }
#line 673 "module_cmds.m"
            parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 670 "module_cmds.m"
          }
#line 660 "module_cmds.m"
        else
#line 660 "module_cmds.m"
          {
#line 660 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));

#line 660 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__V_147_147)) == (MR_mktag((MR_Integer) 0))))
#line 651 "module_cmds.m"
              {
#line 651 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputStatus_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_147_147, (MR_Integer) 0)));

#line 652 "module_cmds.m"
                {
#line 652 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
                }
#line 653 "module_cmds.m"
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__ProcessOutputStatus_32 == (MR_Integer) 0);
#line 653 "module_cmds.m"
                if (parse_tree__module_cmds__succeeded)
#line 654 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 653 "module_cmds.m"
                else
#line 658 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 651 "module_cmds.m"
              }
#line 660 "module_cmds.m"
            else
#line 661 "module_cmds.m"
              {
#line 661 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputSignal_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_147_147, (MR_Integer) 0)));
#line 661 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_120_120;
#line 661 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_123_123;
#line 661 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_124_124;

#line 664 "module_cmds.m"
                {
#line 664 "module_cmds.m"
                  libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 667 "module_cmds.m"
                {
#line 667 "module_cmds.m"
                  parse_tree__module_cmds__V_124_124 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 667 "module_cmds.m"
                {
#line 667 "module_cmds.m"
                  parse_tree__module_cmds__V_123_123 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_124_124, (MR_String) ".");
                }
#line 667 "module_cmds.m"
                {
#line 667 "module_cmds.m"
                  parse_tree__module_cmds__V_120_120 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_123_123);
                }
#line 665 "module_cmds.m"
                {
#line 665 "module_cmds.m"
                  libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_120_120);
                }
#line 668 "module_cmds.m"
                parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 661 "module_cmds.m"
              }
#line 660 "module_cmds.m"
          }
#line 626 "module_cmds.m"
      }
#line 621 "module_cmds.m"
    else
#line 676 "module_cmds.m"
      {
#line 676 "module_cmds.m"
        parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 677 "module_cmds.m"
        parse_tree__module_cmds__ProcessedTmpFile_27 = parse_tree__module_cmds__TmpFile_19;
#line 676 "module_cmds.m"
      }
#line 679 "module_cmds.m"
    {
#line 679 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_14 = mercury__bool__and_2_f_0(parse_tree__module_cmds__CommandSucceeded_23, parse_tree__module_cmds__ProcessOutputSucceeded_33);
    }
#line 683 "module_cmds.m"
    {
#line 683 "module_cmds.m"
      mercury__io__open_input_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__TmpFileRes_36);
    }
#line 697 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpFileRes_36)) == (MR_mktag((MR_Integer) 1))))
#line 698 "module_cmds.m"
      {
#line 698 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileError_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 698 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_130_130;
#line 698 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_133_133;

#line 700 "module_cmds.m"
        {
#line 700 "module_cmds.m"
          parse_tree__module_cmds__V_133_133 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_40);
        }
#line 700 "module_cmds.m"
        {
#line 700 "module_cmds.m"
          parse_tree__module_cmds__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", parse_tree__module_cmds__V_133_133);
        }
#line 699 "module_cmds.m"
        {
#line 699 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_130_130);
        }
#line 698 "module_cmds.m"
      }
#line 697 "module_cmds.m"
    else
#line 685 "module_cmds.m"
      {
#line 685 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileStream_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 685 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Res_38;
#line 685 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_134_134;

#line 686 "module_cmds.m"
        {
#line 686 "module_cmds.m"
          parse_tree__module_cmds__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 686 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[1]));
#line 686 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 1) = ((MR_Box) (parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1));
#line 686 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 686 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_134_134, 3) = ((MR_Box) (parse_tree__module_cmds__ErrorStream_10));
#line 686 "module_cmds.m"
        }
#line 686 "module_cmds.m"
        {
#line 686 "module_cmds.m"
          mercury__io__input_stream_foldl_io_5_p_0(parse_tree__module_cmds__TmpFileStream_37, parse_tree__module_cmds__V_134_134, &parse_tree__module_cmds__Res_38);
        }
#line 690 "module_cmds.m"
        if ((parse_tree__module_cmds__Res_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "module_cmds.m"
          {
#line 689 "module_cmds.m"
          }
#line 690 "module_cmds.m"
        else
#line 691 "module_cmds.m"
          {
#line 691 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpFileReadError_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Res_38, (MR_Integer) 0)));
#line 691 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_136_136;
#line 691 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_139_139;

#line 694 "module_cmds.m"
            {
#line 694 "module_cmds.m"
              parse_tree__module_cmds__V_139_139 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileReadError_39);
            }
#line 693 "module_cmds.m"
            {
#line 693 "module_cmds.m"
              parse_tree__module_cmds__V_136_136 = mercury__string__f_43_43_2_f_0((MR_String) "error reading command output: ", parse_tree__module_cmds__V_139_139);
            }
#line 692 "module_cmds.m"
            {
#line 692 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_136_136);
            }
#line 691 "module_cmds.m"
          }
#line 696 "module_cmds.m"
        {
#line 696 "module_cmds.m"
          mercury__io__close_input_3_p_0(parse_tree__module_cmds__TmpFileStream_37);
        }
#line 685 "module_cmds.m"
      }
#line 703 "module_cmds.m"
    {
#line 703 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__V_41_41);
    }
#line 704 "module_cmds.m"
    {
#line 704 "module_cmds.m"
      mercury__io__set_exit_status_3_p_0(parse_tree__module_cmds__OldStatus_16);
    }
#line 552 "module_cmds.m"
  }
#line 132 "module_cmds.m"
}

#line 122 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__invoke_system_command_7_p_0(
#line 122 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_8,
#line 122 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ErrorStream_9,
#line 122 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Verbosity_10,
#line 122 "module_cmds.m"
  MR_String parse_tree__module_cmds__Command_11,
#line 122 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_12)
#line 122 "module_cmds.m"
{
#line 547 "module_cmds.m"
  {
#line 547 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 548 "module_cmds.m"
    {
#line 548 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__ErrorStream_9, parse_tree__module_cmds__Verbosity_10, parse_tree__module_cmds__Command_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_12);
    }
#line 547 "module_cmds.m"
  }
#line 122 "module_cmds.m"
}

#line 100 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__maybe_set_exit_status_3_p_0(
#line 100 "module_cmds.m"
  MR_Word parse_tree__module_cmds__HeadVar__1_1)
#line 100 "module_cmds.m"
{
#line 540 "module_cmds.m"
  {
#line 540 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 540 "module_cmds.m"
#line 540 "module_cmds.m"
    switch (parse_tree__module_cmds__HeadVar__1_1) {
#line 540 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 540 "module_cmds.m"
      case (MR_Integer) 0:
#line 541 "module_cmds.m"
        {
#line 542 "module_cmds.m"
          {
#line 542 "module_cmds.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 541 "module_cmds.m"
        }
#line 540 "module_cmds.m"
        break;
#line 540 "module_cmds.m"
      case (MR_Integer) 1:
#line 540 "module_cmds.m"
        {
#line 540 "module_cmds.m"
        }
#line 540 "module_cmds.m"
        break;
#line 540 "module_cmds.m"
    }
#line 540 "module_cmds.m"
  }
#line 100 "module_cmds.m"
}

#line 94 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__touch_datestamp_4_p_0(
#line 94 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_5,
#line 94 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_6)
#line 94 "module_cmds.m"
{
#line 520 "module_cmds.m"
  {
#line 520 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 520 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_8;
#line 520 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_9;
#line 520 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_16_16;
#line 520 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_19_19;

#line 521 "module_cmds.m"
    {
#line 521 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_5, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_8);
    }
#line 523 "module_cmds.m"
    {
#line 523 "module_cmds.m"
      parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, (MR_String) "\'... ");
    }
#line 523 "module_cmds.m"
    {
#line 523 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", parse_tree__module_cmds__V_19_19);
    }
#line 522 "module_cmds.m"
    {
#line 522 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, parse_tree__module_cmds__V_16_16);
    }
#line 524 "module_cmds.m"
    {
#line 524 "module_cmds.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__module_cmds__Verbose_8);
    }
#line 525 "module_cmds.m"
    {
#line 525 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_9);
    }
#line 531 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 532 "module_cmds.m"
      {
#line 532 "module_cmds.m"
        MR_Word parse_tree__module_cmds__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));
#line 532 "module_cmds.m"
        MR_String parse_tree__module_cmds__IOErrorMessage_12;
#line 532 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_23_23;
#line 532 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_26_26;
#line 532 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_27_27;
#line 532 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_29_29;

#line 533 "module_cmds.m"
        {
#line 533 "module_cmds.m"
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__IOError_11, &parse_tree__module_cmds__IOErrorMessage_12);
        }
#line 535 "module_cmds.m"
        {
#line 535 "module_cmds.m"
          parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__IOErrorMessage_12, (MR_String) ".\n");
        }
#line 535 "module_cmds.m"
        {
#line 535 "module_cmds.m"
          parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", parse_tree__module_cmds__V_29_29);
        }
#line 535 "module_cmds.m"
        {
#line 535 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, parse_tree__module_cmds__V_27_27);
        }
#line 534 "module_cmds.m"
        {
#line 534 "module_cmds.m"
          parse_tree__module_cmds__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\nError opening \140", parse_tree__module_cmds__V_26_26);
        }
#line 534 "module_cmds.m"
        {
#line 534 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_23_23);
        }
#line 532 "module_cmds.m"
      }
#line 531 "module_cmds.m"
    else
#line 527 "module_cmds.m"
      {
#line 527 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OutputStream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));

#line 528 "module_cmds.m"
        {
#line 528 "module_cmds.m"
          mercury__io__write_string_4_p_0(parse_tree__module_cmds__OutputStream_10, (MR_String) "\n");
        }
#line 529 "module_cmds.m"
        {
#line 529 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__OutputStream_10);
        }
#line 530 "module_cmds.m"
        {
#line 530 "module_cmds.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, (MR_String) " done.\n");
        }
#line 527 "module_cmds.m"
      }
#line 520 "module_cmds.m"
  }
#line 94 "module_cmds.m"
}

#line 86 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__touch_interface_datestamp_5_p_0(
#line 86 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 86 "module_cmds.m"
  MR_Word parse_tree__module_cmds__ModuleName_7,
#line 86 "module_cmds.m"
  MR_String parse_tree__module_cmds__Ext_8)
#line 86 "module_cmds.m"
{
#line 515 "module_cmds.m"
  {
#line 515 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 515 "module_cmds.m"
    MR_String parse_tree__module_cmds__OutputFileName_10;

#line 516 "module_cmds.m"
    {
#line 516 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__ModuleName_7, parse_tree__module_cmds__Ext_8, (MR_Integer) 0, &parse_tree__module_cmds__OutputFileName_10);
    }
#line 518 "module_cmds.m"
    {
#line 518 "module_cmds.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_10);
    }
#line 515 "module_cmds.m"
  }
#line 86 "module_cmds.m"
}

#line 76 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(
#line 76 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 76 "module_cmds.m"
  MR_String parse_tree__module_cmds__SourceDirName_8,
#line 76 "module_cmds.m"
  MR_String parse_tree__module_cmds__DestinationDirName_9,
#line 76 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 76 "module_cmds.m"
{
#line 471 "module_cmds.m"
  {
#line 471 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 471 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

#line 472 "module_cmds.m"
    {
#line 472 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 619, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 494 "module_cmds.m"
#line 494 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 494 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 494 "module_cmds.m"
      case (MR_Integer) 0:
#line 495 "module_cmds.m"
        {
#line 495 "module_cmds.m"
          MR_String parse_tree__module_cmds__Command_61;
#line 495 "module_cmds.m"
          MR_Word parse_tree__module_cmds__OutputStream_62;

#line 410 "module_cmds.m"
          {
#line 410 "module_cmds.m"
            parse_tree__module_cmds__Command_61 = libs__file_util__make_install_dir_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9);
          }
#line 411 "module_cmds.m"
          {
#line 411 "module_cmds.m"
            mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_62);
          }
#line 548 "module_cmds.m"
          {
#line 548 "module_cmds.m"
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_62, (MR_Integer) 0, parse_tree__module_cmds__Command_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_10);
          }
#line 499 "module_cmds.m"
#line 499 "module_cmds.m"
          switch (*parse_tree__module_cmds__Succeeded_10) {
#line 499 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 499 "module_cmds.m"
            case (MR_Integer) 0:
#line 500 "module_cmds.m"
              {
#line 500 "module_cmds.m"
                MR_String parse_tree__module_cmds__ProgName_51;

#line 501 "module_cmds.m"
                {
#line 501 "module_cmds.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_51);
                }
#line 502 "module_cmds.m"
                {
#line 502 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_51);
                }
#line 503 "module_cmds.m"
                {
#line 503 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) ": error copying directory");
                }
#line 504 "module_cmds.m"
                {
#line 504 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) " \140");
                }
#line 505 "module_cmds.m"
                {
#line 505 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
                }
#line 506 "module_cmds.m"
                {
#line 506 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' to \140");
                }
#line 507 "module_cmds.m"
                {
#line 507 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
                }
#line 508 "module_cmds.m"
                {
#line 508 "module_cmds.m"
                  mercury__io__nl_2_p_0();
                }
#line 509 "module_cmds.m"
                {
#line 509 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 500 "module_cmds.m"
              }
#line 499 "module_cmds.m"
              break;
#line 499 "module_cmds.m"
            case (MR_Integer) 1:
#line 498 "module_cmds.m"
              {
#line 498 "module_cmds.m"
              }
#line 499 "module_cmds.m"
              break;
#line 499 "module_cmds.m"
          }
#line 495 "module_cmds.m"
        }
#line 494 "module_cmds.m"
        break;
#line 494 "module_cmds.m"
      case (MR_Integer) 1:
#line 474 "module_cmds.m"
        {
#line 474 "module_cmds.m"
          MR_Word parse_tree__module_cmds__Result_13;

#line 475 "module_cmds.m"
          {
#line 475 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9, &parse_tree__module_cmds__Result_13);
          }
#line 479 "module_cmds.m"
          if ((parse_tree__module_cmds__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "module_cmds.m"
            *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 479 "module_cmds.m"
          else
#line 480 "module_cmds.m"
            {
#line 480 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_13, (MR_Integer) 0)));
#line 480 "module_cmds.m"
              MR_String parse_tree__module_cmds__ProgName_15;
#line 480 "module_cmds.m"
              MR_String parse_tree__module_cmds__V_47_47;

#line 481 "module_cmds.m"
              *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 482 "module_cmds.m"
              {
#line 482 "module_cmds.m"
                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_15);
              }
#line 483 "module_cmds.m"
              {
#line 483 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_15);
              }
#line 484 "module_cmds.m"
              {
#line 484 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) ": error linking");
              }
#line 485 "module_cmds.m"
              {
#line 485 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) " \140");
              }
#line 486 "module_cmds.m"
              {
#line 486 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
              }
#line 487 "module_cmds.m"
              {
#line 487 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) "\' to \140");
              }
#line 488 "module_cmds.m"
              {
#line 488 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
              }
#line 489 "module_cmds.m"
              {
#line 489 "module_cmds.m"
                mercury__io__write_string_3_p_0((MR_String) "\': ");
              }
#line 490 "module_cmds.m"
              {
#line 490 "module_cmds.m"
                parse_tree__module_cmds__V_47_47 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_14);
              }
#line 490 "module_cmds.m"
              {
#line 490 "module_cmds.m"
                mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_47_47);
              }
#line 491 "module_cmds.m"
              {
#line 491 "module_cmds.m"
                mercury__io__nl_2_p_0();
              }
#line 492 "module_cmds.m"
              {
#line 492 "module_cmds.m"
                mercury__io__flush_output_2_p_0();
              }
#line 480 "module_cmds.m"
            }
#line 474 "module_cmds.m"
        }
#line 494 "module_cmds.m"
        break;
#line 494 "module_cmds.m"
    }
#line 471 "module_cmds.m"
  }
#line 76 "module_cmds.m"
}

#line 71 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(
#line 71 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 71 "module_cmds.m"
  MR_String parse_tree__module_cmds__SourceFileName_8,
#line 71 "module_cmds.m"
  MR_String parse_tree__module_cmds__DestinationFileName_9,
#line 71 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_10)
#line 71 "module_cmds.m"
{
#line 428 "module_cmds.m"
  {
#line 428 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 428 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;
#line 428 "module_cmds.m"
    MR_Word parse_tree__module_cmds__PrintCommand_13;
#line 428 "module_cmds.m"
    MR_String parse_tree__module_cmds__LinkOrCopy_14;
#line 428 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_15;

#line 429 "module_cmds.m"
    {
#line 429 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 619, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 430 "module_cmds.m"
    {
#line 430 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 52, &parse_tree__module_cmds__PrintCommand_13);
    }
#line 443 "module_cmds.m"
#line 443 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 443 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 443 "module_cmds.m"
      case (MR_Integer) 0:
#line 444 "module_cmds.m"
        {
#line 445 "module_cmds.m"
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "copying";
#line 451 "module_cmds.m"
#line 451 "module_cmds.m"
          switch (parse_tree__module_cmds__PrintCommand_13) {
#line 451 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 451 "module_cmds.m"
            case (MR_Integer) 0:
#line 452 "module_cmds.m"
              {
#line 452 "module_cmds.m"
              }
#line 451 "module_cmds.m"
              break;
#line 451 "module_cmds.m"
            case (MR_Integer) 1:
#line 447 "module_cmds.m"
              {
#line 447 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_81_81;
#line 447 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_87_87;
#line 447 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_91_91;

#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Copying file \140");
                }
#line 7636 "parse_tree.module_cmds.c"
                parse_tree__module_cmds__V_87_87 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 449 "module_cmds.m"
                {
#line 449 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_87_87, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_81_81);
                }
#line 449 "module_cmds.m"
                {
#line 449 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_81_81);
                }
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
#line 449 "module_cmds.m"
                {
#line 449 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_87_87, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_91_91);
                }
#line 449 "module_cmds.m"
                {
#line 449 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_91_91);
                }
#line 448 "module_cmds.m"
                {
#line 448 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
#line 450 "module_cmds.m"
                {
#line 450 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 447 "module_cmds.m"
              }
#line 451 "module_cmds.m"
              break;
#line 451 "module_cmds.m"
          }
#line 454 "module_cmds.m"
          {
#line 454 "module_cmds.m"
            parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
#line 444 "module_cmds.m"
        }
#line 443 "module_cmds.m"
        break;
#line 443 "module_cmds.m"
      case (MR_Integer) 1:
#line 432 "module_cmds.m"
        {
#line 433 "module_cmds.m"
          parse_tree__module_cmds__LinkOrCopy_14 = (MR_String) "linking";
#line 439 "module_cmds.m"
#line 439 "module_cmds.m"
          switch (parse_tree__module_cmds__PrintCommand_13) {
#line 439 "module_cmds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 439 "module_cmds.m"
            case (MR_Integer) 0:
#line 440 "module_cmds.m"
              {
#line 440 "module_cmds.m"
              }
#line 439 "module_cmds.m"
              break;
#line 439 "module_cmds.m"
            case (MR_Integer) 1:
#line 435 "module_cmds.m"
              {
#line 435 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_60_60;
#line 435 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_66_66;
#line 435 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_70_70;

#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Linking file \140");
                }
#line 7723 "parse_tree.module_cmds.c"
                parse_tree__module_cmds__V_66_66 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 437 "module_cmds.m"
                {
#line 437 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_66_66, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_60_60);
                }
#line 437 "module_cmds.m"
                {
#line 437 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_60_60);
                }
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\' -> \140");
                }
#line 437 "module_cmds.m"
                {
#line 437 "module_cmds.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_66_66, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_70_70);
                }
#line 437 "module_cmds.m"
                {
#line 437 "module_cmds.m"
                  mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_70_70);
                }
#line 436 "module_cmds.m"
                {
#line 436 "module_cmds.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
#line 438 "module_cmds.m"
                {
#line 438 "module_cmds.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 435 "module_cmds.m"
              }
#line 439 "module_cmds.m"
              break;
#line 439 "module_cmds.m"
          }
#line 442 "module_cmds.m"
          {
#line 442 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_15);
          }
#line 432 "module_cmds.m"
        }
#line 443 "module_cmds.m"
        break;
#line 443 "module_cmds.m"
    }
#line 459 "module_cmds.m"
    if ((parse_tree__module_cmds__Result_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 459 "module_cmds.m"
    else
#line 460 "module_cmds.m"
      {
#line 460 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_15, (MR_Integer) 0)));
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProgName_17;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__ErrorMsg_18;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_100_100;
#line 460 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_106_106;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_110_110;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_120_120;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_130_130;
#line 460 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_140_140;

#line 461 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 462 "module_cmds.m"
        {
#line 462 "module_cmds.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_17);
        }
#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__Error_16, &parse_tree__module_cmds__ErrorMsg_18);
        }
#line 7816 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__V_106_106 = (MR_Word) &parse_tree__module_cmds_scalar_common_3[0];
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__ProgName_17, &parse_tree__module_cmds__V_100_100);
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_100_100);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) ": error ");
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__LinkOrCopy_14, &parse_tree__module_cmds__V_110_110);
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_110_110);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__SourceFileName_8, &parse_tree__module_cmds__V_120_120);
        }
#line 465 "module_cmds.m"
        {
#line 465 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_120_120);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\' to \140");
        }
#line 466 "module_cmds.m"
        {
#line 466 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__V_130_130);
        }
#line 466 "module_cmds.m"
        {
#line 466 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_130_130);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\', ");
        }
#line 466 "module_cmds.m"
        {
#line 466 "module_cmds.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__module_cmds__V_106_106, parse_tree__module_cmds__ErrorMsg_18, &parse_tree__module_cmds__V_140_140);
        }
#line 466 "module_cmds.m"
        {
#line 466 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_140_140);
        }
#line 464 "module_cmds.m"
        {
#line 464 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 467 "module_cmds.m"
        {
#line 467 "module_cmds.m"
          mercury__io__flush_output_2_p_0();
        }
#line 460 "module_cmds.m"
      }
#line 428 "module_cmds.m"
  }
#line 71 "module_cmds.m"
}

#line 63 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__maybe_make_symlink_6_p_0(
#line 63 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 63 "module_cmds.m"
  MR_String parse_tree__module_cmds__LinkTarget_8,
#line 63 "module_cmds.m"
  MR_String parse_tree__module_cmds__LinkName_9,
#line 63 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_10)
#line 63 "module_cmds.m"
{
#line 415 "module_cmds.m"
  {
#line 415 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 415 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

#line 416 "module_cmds.m"
    {
#line 416 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 619, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 422 "module_cmds.m"
#line 422 "module_cmds.m"
    switch (parse_tree__module_cmds__UseSymLinks_12) {
#line 422 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "module_cmds.m"
      case (MR_Integer) 0:
#line 424 "module_cmds.m"
        *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
#line 422 "module_cmds.m"
        break;
#line 422 "module_cmds.m"
      case (MR_Integer) 1:
#line 418 "module_cmds.m"
        {
#line 418 "module_cmds.m"
          MR_Word parse_tree__module_cmds__LinkResult_14;
#line 419 "module_cmds.m"
          MR_Word parse_tree__module_cmds__V_13_13;

#line 419 "module_cmds.m"
          {
#line 419 "module_cmds.m"
            mercury__io__remove_file_recursively_4_p_0(parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__V_13_13);
          }
#line 420 "module_cmds.m"
          {
#line 420 "module_cmds.m"
            mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__LinkTarget_8, parse_tree__module_cmds__LinkName_9, &parse_tree__module_cmds__LinkResult_14);
          }
#line 421 "module_cmds.m"
          parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__LinkResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "module_cmds.m"
          if (parse_tree__module_cmds__succeeded)
#line 421 "module_cmds.m"
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 1;
#line 421 "module_cmds.m"
          else
#line 421 "module_cmds.m"
            *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
#line 418 "module_cmds.m"
        }
#line 422 "module_cmds.m"
        break;
#line 422 "module_cmds.m"
    }
#line 415 "module_cmds.m"
  }
#line 63 "module_cmds.m"
}

#line 391 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0_1(
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 391 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 391 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
#line 391 "module_cmds.m"
{
#line 391 "module_cmds.m"
  {
#line 391 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

#line 391 "module_cmds.m"
    {
#line 391 "module_cmds.m"
      mercury__io__write_byte_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 391 "module_cmds.m"
  }
#line 391 "module_cmds.m"
}

#line 55 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__copy_file_6_p_0(
#line 55 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 55 "module_cmds.m"
  MR_String parse_tree__module_cmds__Source_8,
#line 55 "module_cmds.m"
  MR_String parse_tree__module_cmds__Destination_9,
#line 55 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Res_10)
#line 55 "module_cmds.m"
{
#line 374 "module_cmds.m"
  {
#line 374 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 374 "module_cmds.m"
    MR_String parse_tree__module_cmds__Command_12;
#line 374 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OutputStream_13;
#line 374 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Succeeded_14;

#line 376 "module_cmds.m"
    {
#line 376 "module_cmds.m"
      parse_tree__module_cmds__Command_12 = libs__file_util__make_install_file_command_3_f_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__Source_8, parse_tree__module_cmds__Destination_9);
    }
#line 377 "module_cmds.m"
    {
#line 377 "module_cmds.m"
      mercury__io__output_stream_3_p_0(&parse_tree__module_cmds__OutputStream_13);
    }
#line 548 "module_cmds.m"
    {
#line 548 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_13, (MR_Integer) 0, parse_tree__module_cmds__Command_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_cmds__Succeeded_14);
    }
#line 383 "module_cmds.m"
#line 383 "module_cmds.m"
    switch (parse_tree__module_cmds__Succeeded_14) {
#line 383 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 383 "module_cmds.m"
      case (MR_Integer) 0:
#line 384 "module_cmds.m"
        {
#line 384 "module_cmds.m"
          MR_Word parse_tree__module_cmds__SourceRes_15;

#line 385 "module_cmds.m"
          {
#line 385 "module_cmds.m"
            mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__Source_8, &parse_tree__module_cmds__SourceRes_15);
          }
#line 400 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__SourceRes_15)) == (MR_mktag((MR_Integer) 1))))
#line 401 "module_cmds.m"
            {
#line 401 "module_cmds.m"
              MR_Word parse_tree__module_cmds__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));

#line 402 "module_cmds.m"
              {
#line 402 "module_cmds.m"
                MR_Word base;
#line 402 "module_cmds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "module_cmds.m"
                *parse_tree__module_cmds__Res_10 = base;
#line 402 "module_cmds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_31));
#line 402 "module_cmds.m"
              }
#line 401 "module_cmds.m"
            }
#line 400 "module_cmds.m"
          else
#line 387 "module_cmds.m"
            {
#line 387 "module_cmds.m"
              MR_Word parse_tree__module_cmds__SourceStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SourceRes_15, (MR_Integer) 0)));
#line 387 "module_cmds.m"
              MR_Word parse_tree__module_cmds__DestRes_17;

#line 388 "module_cmds.m"
              {
#line 388 "module_cmds.m"
                mercury__io__open_binary_output_4_p_0(parse_tree__module_cmds__Destination_9, &parse_tree__module_cmds__DestRes_17);
              }
#line 396 "module_cmds.m"
              if (((MR_tag((MR_Word) parse_tree__module_cmds__DestRes_17)) == (MR_mktag((MR_Integer) 1))))
#line 397 "module_cmds.m"
                {
#line 397 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));

#line 398 "module_cmds.m"
                  {
#line 398 "module_cmds.m"
                    MR_Word base;
#line 398 "module_cmds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "module_cmds.m"
                    *parse_tree__module_cmds__Res_10 = base;
#line 398 "module_cmds.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__Error_20));
#line 398 "module_cmds.m"
                  }
#line 397 "module_cmds.m"
                }
#line 396 "module_cmds.m"
              else
#line 390 "module_cmds.m"
                {
#line 390 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__DestStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__DestRes_17, (MR_Integer) 0)));
#line 390 "module_cmds.m"
                  MR_Word parse_tree__module_cmds__WriteByte_19;

#line 391 "module_cmds.m"
                  {
#line 391 "module_cmds.m"
                    parse_tree__module_cmds__WriteByte_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[0]));
#line 391 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 1) = ((MR_Box) (parse_tree__module_cmds__copy_file_6_p_0_1));
#line 391 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "module_cmds.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_cmds__WriteByte_19, 3) = ((MR_Box) (parse_tree__module_cmds__DestStream_18));
#line 391 "module_cmds.m"
                  }
#line 392 "module_cmds.m"
                  {
#line 392 "module_cmds.m"
                    mercury__io__binary_input_stream_foldl_io_5_p_0(parse_tree__module_cmds__SourceStream_16, parse_tree__module_cmds__WriteByte_19, parse_tree__module_cmds__Res_10);
                  }
#line 394 "module_cmds.m"
                  {
#line 394 "module_cmds.m"
                    mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__SourceStream_16);
                  }
#line 395 "module_cmds.m"
                  {
#line 395 "module_cmds.m"
                    mercury__io__close_binary_output_3_p_0(parse_tree__module_cmds__DestStream_18);
                  }
#line 390 "module_cmds.m"
                }
#line 387 "module_cmds.m"
            }
#line 384 "module_cmds.m"
        }
#line 383 "module_cmds.m"
        break;
#line 383 "module_cmds.m"
      case (MR_Integer) 1:
#line 382 "module_cmds.m"
        *parse_tree__module_cmds__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "module_cmds.m"
        break;
#line 383 "module_cmds.m"
    }
#line 374 "module_cmds.m"
  }
#line 55 "module_cmds.m"
}

#line 47 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_4_p_0(
#line 47 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_5,
#line 47 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_6)
#line 47 "module_cmds.m"
{
#line 223 "module_cmds.m"
  {
#line 223 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 223 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_20;

#line 233 "module_cmds.m"
    {
#line 233 "module_cmds.m"
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_5, parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_20);
    }
#line 8201 "parse_tree.module_cmds.c"
#line 8202 "parse_tree.module_cmds.c"
    switch (parse_tree__module_cmds__Result_20) {
#line 8204 "parse_tree.module_cmds.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 8206 "parse_tree.module_cmds.c"
      case (MR_Integer) 2:
#line 8208 "parse_tree.module_cmds.c"
        {
#line 227 "module_cmds.m"
          {
#line 227 "module_cmds.m"
            libs__file_util__report_error_3_p_0((MR_String) "problem updating interface files.");
          }
#line 8215 "parse_tree.module_cmds.c"
        }
#line 8217 "parse_tree.module_cmds.c"
        break;
#line 8219 "parse_tree.module_cmds.c"
      case (MR_Integer) 0:
#line 8221 "parse_tree.module_cmds.c"
      case (MR_Integer) 1:
#line 229 "module_cmds.m"
        {
#line 229 "module_cmds.m"
        }
#line 8227 "parse_tree.module_cmds.c"
        break;
#line 8229 "parse_tree.module_cmds.c"
    }
#line 223 "module_cmds.m"
  }
#line 47 "module_cmds.m"
}

#line 44 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(
#line 44 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 44 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_7,
#line 44 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Succeeded_8)
#line 44 "module_cmds.m"
{
#line 232 "module_cmds.m"
  {
#line 232 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 232 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_10;

#line 233 "module_cmds.m"
    {
#line 233 "module_cmds.m"
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__Result_10);
    }
#line 239 "module_cmds.m"
#line 239 "module_cmds.m"
    switch (parse_tree__module_cmds__Result_10) {
#line 239 "module_cmds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 239 "module_cmds.m"
      case (MR_Integer) 2:
#line 241 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 0;
#line 239 "module_cmds.m"
        break;
#line 239 "module_cmds.m"
      case (MR_Integer) 0:
#line 239 "module_cmds.m"
      case (MR_Integer) 1:
#line 238 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 239 "module_cmds.m"
        break;
#line 239 "module_cmds.m"
    }
#line 232 "module_cmds.m"
  }
#line 44 "module_cmds.m"
}

#line 41 "module_cmds.m"
void MR_CALL 
parse_tree__module_cmds__update_interface_return_changed_5_p_0(
#line 41 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 41 "module_cmds.m"
  MR_String parse_tree__module_cmds__OutputFileName_7,
#line 41 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Result_8)
#line 41 "module_cmds.m"
{
#line 244 "module_cmds.m"
  {
#line 244 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 244 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_10;
#line 244 "module_cmds.m"
    MR_String parse_tree__module_cmds__TmpOutputFileName_11;
#line 244 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OutputFileRes_12;

#line 245 "module_cmds.m"
    {
#line 245 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 46, &parse_tree__module_cmds__Verbose_10);
    }
#line 246 "module_cmds.m"
    {
#line 246 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% Updating interface:\n");
    }
#line 247 "module_cmds.m"
    {
#line 247 "module_cmds.m"
      parse_tree__module_cmds__TmpOutputFileName_11 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_7, (MR_String) ".tmp");
    }
#line 248 "module_cmds.m"
    {
#line 248 "module_cmds.m"
      mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__OutputFileName_7, &parse_tree__module_cmds__OutputFileRes_12);
    }
#line 293 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OutputFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 294 "module_cmds.m"
      {
#line 295 "module_cmds.m"
        {
#line 295 "module_cmds.m"
          parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
        }
#line 294 "module_cmds.m"
      }
#line 293 "module_cmds.m"
    else
#line 250 "module_cmds.m"
      {
#line 250 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OutputFileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OutputFileRes_12, (MR_Integer) 0)));
#line 250 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpOutputFileRes_14;

#line 251 "module_cmds.m"
        {
#line 251 "module_cmds.m"
          mercury__io__open_binary_input_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__TmpOutputFileRes_14);
        }
#line 282 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpOutputFileRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 284 "module_cmds.m"
          {
#line 284 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpOutputFileError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
#line 284 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_39_39;

#line 285 "module_cmds.m"
            *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
#line 286 "module_cmds.m"
            {
#line 286 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
#line 287 "module_cmds.m"
            {
#line 287 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
            }
#line 288 "module_cmds.m"
            {
#line 288 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__OutputFileName_7);
            }
#line 289 "module_cmds.m"
            {
#line 289 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "\': ");
            }
#line 290 "module_cmds.m"
            {
#line 290 "module_cmds.m"
              parse_tree__module_cmds__V_39_39 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpOutputFileError_21);
            }
#line 290 "module_cmds.m"
            {
#line 290 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_39_39);
            }
#line 291 "module_cmds.m"
            {
#line 291 "module_cmds.m"
              mercury__io__nl_2_p_0();
            }
#line 284 "module_cmds.m"
          }
#line 282 "module_cmds.m"
        else
#line 253 "module_cmds.m"
          {
#line 253 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpOutputFileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpOutputFileRes_14, (MR_Integer) 0)));
#line 253 "module_cmds.m"
            MR_Word parse_tree__module_cmds__FilesDiffer_16;

#line 254 "module_cmds.m"
            {
#line 254 "module_cmds.m"
              parse_tree__module_cmds__binary_input_stream_cmp_5_p_0(parse_tree__module_cmds__OutputFileStream_13, parse_tree__module_cmds__TmpOutputFileStream_15, &parse_tree__module_cmds__FilesDiffer_16);
            }
#line 256 "module_cmds.m"
            {
#line 256 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__OutputFileStream_13);
            }
#line 257 "module_cmds.m"
            {
#line 257 "module_cmds.m"
              mercury__io__close_binary_input_3_p_0(parse_tree__module_cmds__TmpOutputFileStream_15);
            }
#line 265 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__FilesDiffer_16)) == (MR_mktag((MR_Integer) 1))))
#line 278 "module_cmds.m"
              {
#line 279 "module_cmds.m"
                {
#line 279 "module_cmds.m"
                  parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "been CREATED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
                }
#line 278 "module_cmds.m"
              }
#line 265 "module_cmds.m"
            else
#line 265 "module_cmds.m"
              {
#line 265 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__FilesDiffer_16, (MR_Integer) 0)));

#line 265 "module_cmds.m"
                if (((MR_tag((MR_Word) parse_tree__module_cmds__V_68_68)) == (MR_mktag((MR_Integer) 1))))
#line 270 "module_cmds.m"
                  {
#line 270 "module_cmds.m"
                    MR_Word parse_tree__module_cmds__TmpFileError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_68_68, (MR_Integer) 0)));
#line 270 "module_cmds.m"
                    MR_String parse_tree__module_cmds__V_53_53;

#line 271 "module_cmds.m"
                    *parse_tree__module_cmds__Result_8 = (MR_Integer) 2;
#line 272 "module_cmds.m"
                    {
#line 272 "module_cmds.m"
                      mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
                    }
#line 273 "module_cmds.m"
                    {
#line 273 "module_cmds.m"
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__TmpOutputFileName_11);
                    }
#line 274 "module_cmds.m"
                    {
#line 274 "module_cmds.m"
                      mercury__io__write_string_3_p_0((MR_String) "\': ");
                    }
#line 275 "module_cmds.m"
                    {
#line 275 "module_cmds.m"
                      parse_tree__module_cmds__V_53_53 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_18);
                    }
#line 275 "module_cmds.m"
                    {
#line 275 "module_cmds.m"
                      mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_53_53);
                    }
#line 276 "module_cmds.m"
                    {
#line 276 "module_cmds.m"
                      mercury__io__nl_2_p_0();
                    }
#line 270 "module_cmds.m"
                  }
#line 265 "module_cmds.m"
                else
#line 265 "module_cmds.m"
                  {
#line 265 "module_cmds.m"
                    MR_Word parse_tree__module_cmds__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_68_68, (MR_Integer) 0)));

#line 265 "module_cmds.m"
#line 265 "module_cmds.m"
                    switch (parse_tree__module_cmds__V_69_69) {
#line 265 "module_cmds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "module_cmds.m"
                      case (MR_Integer) 0:
#line 259 "module_cmds.m"
                        {
#line 264 "module_cmds.m"
                          MR_Word parse_tree__module_cmds__V_17_17;

#line 260 "module_cmds.m"
                          *parse_tree__module_cmds__Result_8 = (MR_Integer) 1;
#line 261 "module_cmds.m"
                          {
#line 261 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "% ");
                          }
#line 262 "module_cmds.m"
                          {
#line 262 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, parse_tree__module_cmds__OutputFileName_7);
                          }
#line 263 "module_cmds.m"
                          {
#line 263 "module_cmds.m"
                            libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_10, (MR_String) "\' has not changed.\n");
                          }
#line 264 "module_cmds.m"
                          {
#line 264 "module_cmds.m"
                            mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpOutputFileName_11, &parse_tree__module_cmds__V_17_17);
                          }
#line 259 "module_cmds.m"
                        }
#line 265 "module_cmds.m"
                        break;
#line 265 "module_cmds.m"
                      case (MR_Integer) 1:
#line 266 "module_cmds.m"
                        {
#line 267 "module_cmds.m"
                          {
#line 267 "module_cmds.m"
                            parse_tree__module_cmds__update_interface_create_file_7_p_0(parse_tree__module_cmds__Globals_6, (MR_String) "CHANGED", parse_tree__module_cmds__OutputFileName_7, parse_tree__module_cmds__TmpOutputFileName_11, parse_tree__module_cmds__Result_8);
                          }
#line 266 "module_cmds.m"
                        }
#line 265 "module_cmds.m"
                        break;
#line 265 "module_cmds.m"
                    }
#line 265 "module_cmds.m"
                  }
#line 265 "module_cmds.m"
              }
#line 253 "module_cmds.m"
          }
#line 250 "module_cmds.m"
      }
#line 244 "module_cmds.m"
  }
#line 41 "module_cmds.m"
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
