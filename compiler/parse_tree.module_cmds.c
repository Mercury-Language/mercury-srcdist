/*
** Automatically generated from `module_cmds.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 139 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 142 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0;

#line 145 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0;

#line 148 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1;

#line 151 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2];

#line 154 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2];

#line 157 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2];

#line 160 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0;

#line 163 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1;

#line 166 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2];

#line 169 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2];

#line 172 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2];

#line 175 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0;

#line 178 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1;

#line 181 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2;

#line 184 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3];

#line 187 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3];

#line 190 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3];

#line 193 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 196 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 198 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 201 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 204 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 206 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 208 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 211 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 214 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 216 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 219 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 222 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 224 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 226 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 229 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 232 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 234 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2);

#line 237 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 240 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 242 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 244 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3);

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_53_93_95_48_6_p_0(
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

#line 919 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 919 "module_cmds.m"
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

#line 1071 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1071__1_2_f_0(
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42);

#line 1008 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1008__1_2_f_0(
#line 1008 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1008 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42);

#line 1117 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1117 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1117 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1117 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7);

#line 1096 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1096 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1096 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1096 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1096 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10);

#line 1079 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1079 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1075 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
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
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1071 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1036 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 1036 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 1016 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1016 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1016 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 1012 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1012 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1012 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4);

#line 1008 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1008 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1008 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 975 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 919 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20);

#line 912 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 912 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 912 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4);

#line 798 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_5_p_0(
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 766 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_5_p_0(
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8);

#line 725 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void);

#line 706 "module_cmds.m"
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

#line 324 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 324 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 324 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 324 "module_cmds.m"
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

#line 880 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 880 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 880 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1);

#line 869 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8);

#line 863 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 863 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 863 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 863 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2);

#line 668 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 668 "module_cmds.m"
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[3][5];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[1][3];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][6];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][10];

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[3][1];

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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_3[3][5] = {
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_5[1][12] = {
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_6[1][6] = {
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_7[1][10] = {
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

static /* final */ const MR_Box parse_tree__module_cmds_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[1]))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 822 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 830 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 838 "parse_tree.module_cmds.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_cmds__io__pti_res_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 846 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  (MR_Integer) 0
};

#line 852 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  (MR_Integer) 1
};

#line 858 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 864 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_command_verbosity_0_1
};

#line 870 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 876 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_command_verbosity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____command_verbosity_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____command_verbosity_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "command_verbosity",
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_command_verbosity_0
  },
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_command_verbosity_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_command_verbosity_0
};

#line 897 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  (MR_Integer) 0
};

#line 903 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  (MR_Integer) 1
};

#line 909 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1
};

#line 915 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0[2] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_quote_char_0_0
};

#line 921 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 927 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_quote_char_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____quote_char_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____quote_char_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "quote_char",
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_quote_char_0
  },
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_quote_char_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_quote_char_0
};

#line 948 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0 = {
  (MR_String) "interface_new_or_changed",
  (MR_Integer) 0
};

#line 954 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1 = {
  (MR_String) "interface_unchanged",
  (MR_Integer) 1
};

#line 960 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDesc parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2 = {
  (MR_String) "interface_error",
  (MR_Integer) 2
};

#line 966 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2
};

#line 973 "parse_tree.module_cmds.c"
static const MR_EnumFunctorDescPtr parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0[3] = {
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_2,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_0,
  &parse_tree__module_cmds__parse_tree__module_cmds__enum_functor_desc_update_interface_result_0_1
};

#line 980 "parse_tree.module_cmds.c"
static const MR_Integer parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 987 "parse_tree.module_cmds.c"
const MR_TypeCtorInfo_Struct parse_tree__module_cmds__parse_tree__module_cmds__type_ctor_info_update_interface_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_cmds____Unify____update_interface_result_0_0_10001)),
  ((MR_Box) (parse_tree__module_cmds____Compare____update_interface_result_0_0_10001)),
  (MR_String) "parse_tree.module_cmds",
  (MR_String) "update_interface_result",
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_name_ordered_update_interface_result_0
  },
  {
    parse_tree__module_cmds__parse_tree__module_cmds__enum_value_ordered_update_interface_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__module_cmds__parse_tree__module_cmds__functor_number_map_update_interface_result_0
};

#line 1008 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____command_verbosity_0_0_10001(
#line 1011 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1013 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1015 "parse_tree.module_cmds.c"
{
#line 1017 "parse_tree.module_cmds.c"
  {
#line 1019 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1022 "parse_tree.module_cmds.c"
    {
#line 1024 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____command_verbosity_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1027 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1029 "parse_tree.module_cmds.c"
  }
#line 1031 "parse_tree.module_cmds.c"
}

#line 1034 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____command_verbosity_0_0_10001(
#line 1037 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1039 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1041 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1043 "parse_tree.module_cmds.c"
{
#line 1045 "parse_tree.module_cmds.c"
  {
#line 1047 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1050 "parse_tree.module_cmds.c"
    {
#line 1052 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____command_verbosity_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1055 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1057 "parse_tree.module_cmds.c"
  }
#line 1059 "parse_tree.module_cmds.c"
}

#line 1062 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____quote_char_0_0_10001(
#line 1065 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1067 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1069 "parse_tree.module_cmds.c"
{
#line 1071 "parse_tree.module_cmds.c"
  {
#line 1073 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1076 "parse_tree.module_cmds.c"
    {
#line 1078 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____quote_char_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1081 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1083 "parse_tree.module_cmds.c"
  }
#line 1085 "parse_tree.module_cmds.c"
}

#line 1088 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____quote_char_0_0_10001(
#line 1091 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1093 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1095 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1097 "parse_tree.module_cmds.c"
{
#line 1099 "parse_tree.module_cmds.c"
  {
#line 1101 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1104 "parse_tree.module_cmds.c"
    {
#line 1106 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____quote_char_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1109 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1111 "parse_tree.module_cmds.c"
  }
#line 1113 "parse_tree.module_cmds.c"
}

#line 1116 "parse_tree.module_cmds.c"
static MR_bool MR_CALL 
parse_tree__module_cmds____Unify____update_interface_result_0_0_10001(
#line 1119 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1121 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2)
#line 1123 "parse_tree.module_cmds.c"
{
#line 1125 "parse_tree.module_cmds.c"
  {
#line 1127 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded;

#line 1130 "parse_tree.module_cmds.c"
    {
#line 1132 "parse_tree.module_cmds.c"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds____Unify____update_interface_result_0_0(((MR_Word) parse_tree__module_cmds__wrapper_arg_1), ((MR_Word) parse_tree__module_cmds__wrapper_arg_2));
    }
#line 1135 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1137 "parse_tree.module_cmds.c"
  }
#line 1139 "parse_tree.module_cmds.c"
}

#line 1142 "parse_tree.module_cmds.c"
static void MR_CALL 
parse_tree__module_cmds____Compare____update_interface_result_0_0_10001(
#line 1145 "parse_tree.module_cmds.c"
  MR_Box * parse_tree__module_cmds__wrapper_arg_1,
#line 1147 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 1149 "parse_tree.module_cmds.c"
  MR_Box parse_tree__module_cmds__wrapper_arg_3)
#line 1151 "parse_tree.module_cmds.c"
{
#line 1153 "parse_tree.module_cmds.c"
  {
#line 1155 "parse_tree.module_cmds.c"
    MR_Word parse_tree__module_cmds__conv0_HeadVar__1_1;

#line 1158 "parse_tree.module_cmds.c"
    {
#line 1160 "parse_tree.module_cmds.c"
      parse_tree__module_cmds____Compare____update_interface_result_0_0(&parse_tree__module_cmds__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3));
    }
#line 1163 "parse_tree.module_cmds.c"
    *parse_tree__module_cmds__wrapper_arg_1 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__1_1));
#line 1165 "parse_tree.module_cmds.c"
  }
#line 1167 "parse_tree.module_cmds.c"
}

#line 196 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_53_93_95_48_6_p_0(
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
#line 1177 "module_cmds.m"
  {
#line 1177 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1187 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1179 "module_cmds.m"
    {
#line 1179 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 1, &parse_tree__module_cmds__FileName_13);
    }
#line 1182 "module_cmds.m"
    {
#line 1182 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_14);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1187 "module_cmds.m"
    {
#line 1187 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1188 "module_cmds.m"
    {
#line 1188 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1194 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1195 "module_cmds.m"
      {
#line 1195 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1195 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1196 "module_cmds.m"
          return;
        }
#line 1195 "module_cmds.m"
      }
#line 1194 "module_cmds.m"
    else
#line 1190 "module_cmds.m"
      {
#line 1190 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1191 "module_cmds.m"
        {
#line 1191 "module_cmds.m"
          parse_tree__module_cmds__write_java_batch_file_5_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__Stream_17);
        }
#line 1192 "module_cmds.m"
        {
#line 1192 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1193 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1190 "module_cmds.m"
      }
#line 1177 "module_cmds.m"
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
#line 1177 "module_cmds.m"
  {
#line 1177 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1187 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1179 "module_cmds.m"
    {
#line 1179 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 1, &parse_tree__module_cmds__FileName_13);
    }
#line 1182 "module_cmds.m"
    {
#line 1182 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_14);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1187 "module_cmds.m"
    {
#line 1187 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1188 "module_cmds.m"
    {
#line 1188 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1194 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1195 "module_cmds.m"
      {
#line 1195 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1195 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1196 "module_cmds.m"
          return;
        }
#line 1195 "module_cmds.m"
      }
#line 1194 "module_cmds.m"
    else
#line 1190 "module_cmds.m"
      {
#line 1190 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1191 "module_cmds.m"
        {
#line 1191 "module_cmds.m"
          parse_tree__module_cmds__write_erlang_batch_file_5_p_0(parse_tree__module_cmds__V_36_36, parse_tree__module_cmds__V_37_37, parse_tree__module_cmds__Stream_17);
        }
#line 1192 "module_cmds.m"
        {
#line 1192 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1193 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1190 "module_cmds.m"
      }
#line 1177 "module_cmds.m"
  }
#line 196 "module_cmds.m"
}

#line 919 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 919 "module_cmds.m"
{
#line 924 "module_cmds.m"
  {
#line 924 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 926 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_29_29;
#line 926 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__Dollar_17;
#line 926 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseNameToDollar_18;
#line 926 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_24_24;
#line 926 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__V_25_25;
#line 926 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;

#line 926 "module_cmds.m"
    {
#line 926 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__sub_string_search_3_p_0(parse_tree__module_cmds__BaseName_12, (MR_String) "\044", &parse_tree__module_cmds__Dollar_17);
    }
#line 926 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 926 "module_cmds.m"
      {
#line 927 "module_cmds.m"
        parse_tree__module_cmds__V_25_25 = (MR_Integer) 1;
#line 927 "module_cmds.m"
        parse_tree__module_cmds__V_24_24 = (parse_tree__module_cmds__Dollar_17 + parse_tree__module_cmds__V_25_25);
#line 927 "module_cmds.m"
        {
#line 927 "module_cmds.m"
          parse_tree__module_cmds__BaseNameToDollar_18 = mercury__string__left_2_f_0(parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__V_24_24);
        }
#line 928 "module_cmds.m"
        {
#line 928 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseNameToDollar_18);
        }
#line 1459 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 928 "module_cmds.m"
        {
#line 928 "module_cmds.m"
          parse_tree__module_cmds__succeeded = mercury__set__contains_2_p_0(parse_tree__module_cmds__TypeCtorInfo_29_29, parse_tree__module_cmds__NestedClassPrefixes_10, ((MR_Box) (parse_tree__module_cmds__V_26_26)));
        }
#line 926 "module_cmds.m"
      }
#line 931 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 930 "module_cmds.m"
      {
#line 930 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_28_28;

#line 930 "module_cmds.m"
        {
#line 930 "module_cmds.m"
          parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12);
        }
#line 930 "module_cmds.m"
        {
#line 930 "module_cmds.m"
          MR_Word base;
#line 930 "module_cmds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "module_cmds.m"
          *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = base;
#line 930 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_cmds__V_28_28));
#line 930 "module_cmds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19));
#line 930 "module_cmds.m"
        }
#line 930 "module_cmds.m"
      }
#line 931 "module_cmds.m"
    else
#line 930 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_Acc_20 = parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19;
#line 934 "module_cmds.m"
    *parse_tree__module_cmds__Continue_14 = (MR_Integer) 1;
#line 924 "module_cmds.m"
  }
#line 919 "module_cmds.m"
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
    if ((parse_tree__module_cmds__TmpByteResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "module_cmds.m"
      {
#line 363 "module_cmds.m"
        *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[1];
#line 364 "module_cmds.m"
        *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 362 "module_cmds.m"
      }
#line 361 "module_cmds.m"
    else
#line 361 "module_cmds.m"
      if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult_14)) == (MR_mktag((MR_Integer) 2))))
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
      else
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
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[0];
#line 356 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 1;
#line 355 "module_cmds.m"
            }
#line 357 "module_cmds.m"
          else
#line 358 "module_cmds.m"
            {
#line 358 "module_cmds.m"
              *parse_tree__module_cmds__Differ_12 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[1];
#line 359 "module_cmds.m"
              *parse_tree__module_cmds__Continue_10 = (MR_Integer) 0;
#line 358 "module_cmds.m"
            }
#line 353 "module_cmds.m"
        }
#line 350 "module_cmds.m"
  }
#line 345 "module_cmds.m"
}

#line 1071 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1071__1_2_f_0(
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1071 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42)
#line 1071 "module_cmds.m"
{
#line 1071 "module_cmds.m"
  {
#line 1071 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1071 "module_cmds.m"
    MR_String parse_tree__module_cmds__HeadVar__3_43;
#line 1071 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__HeadVar__2_42, (MR_String) "lib");
    }
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      return parse_tree__module_cmds__HeadVar__3_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1071 "module_cmds.m"
    return parse_tree__module_cmds__HeadVar__3_43;
#line 1071 "module_cmds.m"
  }
#line 1071 "module_cmds.m"
}

#line 1008 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1008__1_2_f_0(
#line 1008 "module_cmds.m"
  MR_String parse_tree__module_cmds__GradeDir_14,
#line 1008 "module_cmds.m"
  MR_String parse_tree__module_cmds__HeadVar__2_42)
#line 1008 "module_cmds.m"
{
#line 1008 "module_cmds.m"
  {
#line 1008 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1008 "module_cmds.m"
    MR_String parse_tree__module_cmds__HeadVar__3_43;
#line 1008 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_44_44;

#line 1008 "module_cmds.m"
    {
#line 1008 "module_cmds.m"
      parse_tree__module_cmds__V_44_44 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__HeadVar__2_42, (MR_String) "lib");
    }
#line 1008 "module_cmds.m"
    {
#line 1008 "module_cmds.m"
      return parse_tree__module_cmds__HeadVar__3_43 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_44_44, parse_tree__module_cmds__GradeDir_14);
    }
#line 1008 "module_cmds.m"
    return parse_tree__module_cmds__HeadVar__3_43;
#line 1008 "module_cmds.m"
  }
#line 1008 "module_cmds.m"
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
#line 1714 "parse_tree.module_cmds.c"
  {
#line 1716 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 1719 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1721 "parse_tree.module_cmds.c"
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
#line 1767 "parse_tree.module_cmds.c"
  {
#line 1769 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 1772 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1774 "parse_tree.module_cmds.c"
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
#line 1820 "parse_tree.module_cmds.c"
  {
#line 1822 "parse_tree.module_cmds.c"
    MR_bool parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__HeadVar__2_1 == parse_tree__module_cmds__HeadVar__2_2);

#line 1825 "parse_tree.module_cmds.c"
    return parse_tree__module_cmds__succeeded;
#line 1827 "parse_tree.module_cmds.c"
  }
#line 106 "module_cmds.m"
}

#line 1117 "module_cmds.m"
static MR_String MR_CALL 
parse_tree__module_cmds__pa_option_3_f_0(
#line 1117 "module_cmds.m"
  MR_Word parse_tree__module_cmds__BreakLines_5,
#line 1117 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Quote_6,
#line 1117 "module_cmds.m"
  MR_String parse_tree__module_cmds__Dir0_7)
#line 1117 "module_cmds.m"
{
#line 1119 "module_cmds.m"
  {
#line 1119 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1119 "module_cmds.m"
    MR_String parse_tree__module_cmds__Option_8;
#line 1119 "module_cmds.m"
    MR_String parse_tree__module_cmds__Dir_9;
#line 1119 "module_cmds.m"
    MR_String parse_tree__module_cmds__LineContinuation_10;
#line 1119 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_12_12;

#line 1123 "module_cmds.m"
    if ((parse_tree__module_cmds__Quote_6 == (MR_Integer) 0))
#line 1125 "module_cmds.m"
      parse_tree__module_cmds__Dir_9 = parse_tree__module_cmds__Dir0_7;
#line 1123 "module_cmds.m"
    else
#line 1122 "module_cmds.m"
      {
#line 1122 "module_cmds.m"
        parse_tree__module_cmds__Dir_9 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__Dir0_7);
      }
#line 1130 "module_cmds.m"
    if ((parse_tree__module_cmds__BreakLines_5 == (MR_Integer) 0))
#line 1132 "module_cmds.m"
      parse_tree__module_cmds__LineContinuation_10 = (MR_String) "";
#line 1130 "module_cmds.m"
    else
#line 1129 "module_cmds.m"
      parse_tree__module_cmds__LineContinuation_10 = (MR_String) " \\\n";
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      parse_tree__module_cmds__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Dir_9, parse_tree__module_cmds__LineContinuation_10);
    }
#line 1134 "module_cmds.m"
    {
#line 1134 "module_cmds.m"
      return parse_tree__module_cmds__Option_8 = mercury__string__f_43_43_2_f_0((MR_String) " -pa ", parse_tree__module_cmds__V_12_12);
    }
#line 1119 "module_cmds.m"
    return parse_tree__module_cmds__Option_8;
#line 1119 "module_cmds.m"
  }
#line 1117 "module_cmds.m"
}

#line 1096 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__find_erlang_library_path_6_p_0(
#line 1096 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_7,
#line 1096 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MercuryLibDirs_8,
#line 1096 "module_cmds.m"
  MR_String parse_tree__module_cmds__LibName_9,
#line 1096 "module_cmds.m"
  MR_String * parse_tree__module_cmds__LibPath_10)
#line 1096 "module_cmds.m"
{
#line 1099 "module_cmds.m"
  {
#line 1099 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1099 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LibModuleName_12;
#line 1099 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NoSubdirsGlobals_13;
#line 1099 "module_cmds.m"
    MR_String parse_tree__module_cmds__LibFileName_14;
#line 1099 "module_cmds.m"
    MR_Word parse_tree__module_cmds__SearchResult_15;

#line 1100 "module_cmds.m"
    {
#line 1100 "module_cmds.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__module_cmds__LibName_9, &parse_tree__module_cmds__LibModuleName_12);
    }
#line 1101 "module_cmds.m"
    {
#line 1101 "module_cmds.m"
      libs__globals__set_option_4_p_0((MR_Integer) 641, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_8[0]), parse_tree__module_cmds__Globals_7, &parse_tree__module_cmds__NoSubdirsGlobals_13);
    }
#line 1102 "module_cmds.m"
    {
#line 1102 "module_cmds.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__module_cmds__NoSubdirsGlobals_13, (MR_String) "lib", parse_tree__module_cmds__LibModuleName_12, (MR_String) ".beams", (MR_Integer) 1, &parse_tree__module_cmds__LibFileName_14);
    }
#line 1105 "module_cmds.m"
    {
#line 1105 "module_cmds.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__module_cmds__MercuryLibDirs_8, parse_tree__module_cmds__LibFileName_14, &parse_tree__module_cmds__SearchResult_15);
    }
#line 1110 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__SearchResult_15)) == (MR_mktag((MR_Integer) 1))))
#line 1111 "module_cmds.m"
      {
#line 1111 "module_cmds.m"
        MR_String parse_tree__module_cmds__Error_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));
#line 1111 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;
#line 1111 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_33_33;

#line 1112 "module_cmds.m"
        *parse_tree__module_cmds__LibPath_10 = (MR_String) "";
#line 1113 "module_cmds.m"
        {
#line 1113 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1113 "module_cmds.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_cmds__V_33_33, 1) = ((MR_Box) (parse_tree__module_cmds__Error_17));
#line 1113 "module_cmds.m"
        }
#line 1113 "module_cmds.m"
        {
#line 1113 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 0) = ((MR_Box) (parse_tree__module_cmds__V_33_33));
#line 1113 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "module_cmds.m"
        }
#line 1113 "module_cmds.m"
        {
#line 1113 "module_cmds.m"
          parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(parse_tree__module_cmds__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__module_cmds__V_31_31);
#line 1113 "module_cmds.m"
          return;
        }
#line 1111 "module_cmds.m"
      }
#line 1110 "module_cmds.m"
    else
#line 1108 "module_cmds.m"
      {
#line 1108 "module_cmds.m"
        MR_String parse_tree__module_cmds__DirName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__SearchResult_15, (MR_Integer) 0)));

#line 1109 "module_cmds.m"
        {
#line 1109 "module_cmds.m"
          *parse_tree__module_cmds__LibPath_10 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__DirName_16, parse_tree__module_cmds__LibFileName_14);
        }
#line 1108 "module_cmds.m"
      }
#line 1099 "module_cmds.m"
  }
#line 1096 "module_cmds.m"
}

#line 1079 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_3(
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
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2(
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
parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1(
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
    MR_String parse_tree__module_cmds__conv0_HeadVar__3_43;

#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__conv0_HeadVar__3_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_batch_file__1071__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1071 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__3_43));
#line 1071 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1071 "module_cmds.m"
  }
#line 1071 "module_cmds.m"
}

#line 1036 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_batch_file_5_p_0(
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
#line 1075 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 1042 "module_cmds.m"
    {
#line 1042 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__BeamExt_10);
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
      libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 1053 "module_cmds.m"
    {
#line 1053 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 551, &parse_tree__module_cmds__MaybeStdLibDir_15);
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
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 1060 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 1056 "module_cmds.m"
      }
#line 1069 "module_cmds.m"
    {
#line 1069 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 545, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 2267 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1071 "module_cmds.m"
    {
#line 1071 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
#line 1071 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_1));
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
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 543, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1075 "module_cmds.m"
    {
#line 1075 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1075 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_batch_file_5_p_0_2));
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
      mercury__list__map_foldl_5_p_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1078 "module_cmds.m"
    {
#line 1078 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 529, &parse_tree__module_cmds__Erlang_25);
    }
#line 1079 "module_cmds.m"
    {
#line 1079 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1079 "module_cmds.m"
    {
#line 1079 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_3[2], parse_tree__module_cmds__V_54_54);
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
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__V_59_59);
    }
#line 1084 "module_cmds.m"
    {
#line 1084 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 0, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[6])));
#line 1092 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1092 "module_cmds.m"
    }
#line 1092 "module_cmds.m"
    {
#line 1092 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1092 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1092 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1091 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1091 "module_cmds.m"
    }
#line 1091 "module_cmds.m"
    {
#line 1091 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1091 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1091 "module_cmds.m"
    }
#line 1090 "module_cmds.m"
    {
#line 1090 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1090 "module_cmds.m"
    }
#line 1090 "module_cmds.m"
    {
#line 1090 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell "));
#line 1090 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1090 "module_cmds.m"
    }
#line 1089 "module_cmds.m"
    {
#line 1089 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1089 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1089 "module_cmds.m"
    }
#line 1088 "module_cmds.m"
    {
#line 1088 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 1088 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1088 "module_cmds.m"
    }
#line 1087 "module_cmds.m"
    {
#line 1087 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 1087 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1087 "module_cmds.m"
    }
#line 1086 "module_cmds.m"
    {
#line 1086 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "rem Generated by the Mercury compiler.\n"));
#line 1086 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1086 "module_cmds.m"
    }
#line 1085 "module_cmds.m"
    {
#line 1085 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 1085 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1085 "module_cmds.m"
    }
#line 1085 "module_cmds.m"
    {
#line 1085 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
#line 1085 "module_cmds.m"
      return;
    }
#line 1039 "module_cmds.m"
  }
#line 1036 "module_cmds.m"
}

#line 1016 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_3(
#line 1016 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1016 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1016 "module_cmds.m"
{
#line 1016 "module_cmds.m"
  {
#line 1016 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1016 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1016 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_Option_8;

#line 1016 "module_cmds.m"
    {
#line 1016 "module_cmds.m"
      parse_tree__module_cmds__conv3_Option_8 = parse_tree__module_cmds__pa_option_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1016 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_Option_8));
#line 1016 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1016 "module_cmds.m"
  }
#line 1016 "module_cmds.m"
}

#line 1012 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2(
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 1012 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 1012 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 1012 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4)
#line 1012 "module_cmds.m"
{
#line 1012 "module_cmds.m"
  {
#line 1012 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1012 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv1_LibPath_10;

#line 1012 "module_cmds.m"
    {
#line 1012 "module_cmds.m"
      parse_tree__module_cmds__find_erlang_library_path_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 4))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_LibPath_10);
    }
#line 1012 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_LibPath_10));
#line 1012 "module_cmds.m"
  }
#line 1012 "module_cmds.m"
}

#line 1008 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1(
#line 1008 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 1008 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 1008 "module_cmds.m"
{
#line 1008 "module_cmds.m"
  {
#line 1008 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 1008 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 1008 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_HeadVar__3_43;

#line 1008 "module_cmds.m"
    {
#line 1008 "module_cmds.m"
      parse_tree__module_cmds__conv0_HeadVar__3_43 = parse_tree__module_cmds__IntroducedFrom__func__write_erlang_shell_script__1008__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 1008 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_HeadVar__3_43));
#line 1008 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 1008 "module_cmds.m"
  }
#line 1008 "module_cmds.m"
}

#line 975 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_erlang_shell_script_5_p_0(
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 975 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 975 "module_cmds.m"
{
#line 978 "module_cmds.m"
  {
#line 978 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_85_85;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamExt_10;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamFileName_11;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamDirName_12;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__BeamBaseNameNoExt_13;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__GradeDir_14;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdLibDir_15;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchStdLib_18;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__MainFunc_19;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs0_20;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryLibDirs_21;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList0_23;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__LinkLibrariesList_24;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__Erlang_25;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchLibs_26;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchProg_27;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_57_57;
#line 978 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_59_59;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_60_60;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_63_63;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_65_65;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_67_67;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_69_69;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_70_70;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_72_72;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_73_73;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_74_74;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_75_75;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_77_77;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_78_78;
#line 978 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_80_80;
#line 1012 "module_cmds.m"
    MR_Box parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48;

#line 979 "module_cmds.m"
    {
#line 979 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 533, &parse_tree__module_cmds__BeamExt_10);
    }
#line 981 "module_cmds.m"
    {
#line 981 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__BeamExt_10, (MR_Integer) 1, &parse_tree__module_cmds__BeamFileName_11);
    }
#line 983 "module_cmds.m"
    {
#line 983 "module_cmds.m"
      parse_tree__module_cmds__BeamDirName_12 = mercury__dir__dirname_1_f_0(parse_tree__module_cmds__BeamFileName_11);
    }
#line 984 "module_cmds.m"
    {
#line 984 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__module_cmds__MainModuleName_7, &parse_tree__module_cmds__BeamBaseNameNoExt_13);
    }
#line 989 "module_cmds.m"
    {
#line 989 "module_cmds.m"
      libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__GradeDir_14);
    }
#line 990 "module_cmds.m"
    {
#line 990 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 551, &parse_tree__module_cmds__MaybeStdLibDir_15);
    }
#line 998 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "module_cmds.m"
      {
#line 1000 "module_cmds.m"
        parse_tree__module_cmds__SearchStdLib_18 = (MR_String) "";
#line 1001 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "main_2_p_0";
#line 999 "module_cmds.m"
      }
#line 998 "module_cmds.m"
    else
#line 993 "module_cmds.m"
      {
#line 993 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 993 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibBeamsPath_17;
#line 993 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 993 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;

#line 994 "module_cmds.m"
        {
#line 994 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_16, (MR_String) "lib");
        }
#line 994 "module_cmds.m"
        {
#line 994 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_35_35, parse_tree__module_cmds__GradeDir_14);
        }
#line 994 "module_cmds.m"
        {
#line 994 "module_cmds.m"
          parse_tree__module_cmds__StdLibBeamsPath_17 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, (MR_String) "libmer_std.beams");
        }
#line 995 "module_cmds.m"
        {
#line 995 "module_cmds.m"
          parse_tree__module_cmds__SearchStdLib_18 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 1, parse_tree__module_cmds__StdLibBeamsPath_17);
        }
#line 997 "module_cmds.m"
        parse_tree__module_cmds__MainFunc_19 = (MR_String) "mercury__main_wrapper";
#line 993 "module_cmds.m"
      }
#line 1006 "module_cmds.m"
    {
#line 1006 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 545, &parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 2759 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1008 "module_cmds.m"
    {
#line 1008 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
#line 1008 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_1));
#line 1008 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1008 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_41_41, 3) = ((MR_Box) (parse_tree__module_cmds__GradeDir_14));
#line 1008 "module_cmds.m"
    }
#line 1008 "module_cmds.m"
    {
#line 1008 "module_cmds.m"
      parse_tree__module_cmds__MercuryLibDirs_21 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__V_41_41, parse_tree__module_cmds__MercuryLibDirs0_20);
    }
#line 1010 "module_cmds.m"
    {
#line 1010 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 543, &parse_tree__module_cmds__LinkLibrariesList0_23);
    }
#line 1012 "module_cmds.m"
    {
#line 1012 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_9[0]));
#line 1012 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__write_erlang_shell_script_5_p_0_2));
#line 1012 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1012 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 3) = ((MR_Box) (parse_tree__module_cmds__Globals_6));
#line 1012 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_47_47, 4) = ((MR_Box) (parse_tree__module_cmds__MercuryLibDirs_21));
#line 1012 "module_cmds.m"
    }
#line 1012 "module_cmds.m"
    {
#line 1012 "module_cmds.m"
      mercury__list__map_foldl_5_p_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__module_cmds__V_47_47, parse_tree__module_cmds__LinkLibrariesList0_23, &parse_tree__module_cmds__LinkLibrariesList_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv2_STATE_VARIABLE_IO_48_48);
    }
#line 1015 "module_cmds.m"
    {
#line 1015 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 529, &parse_tree__module_cmds__Erlang_25);
    }
#line 1016 "module_cmds.m"
    {
#line 1016 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__LinkLibrariesList_24);
    }
#line 1016 "module_cmds.m"
    {
#line 1016 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_85_85, parse_tree__module_cmds__TypeCtorInfo_85_85, (MR_Word) &parse_tree__module_cmds_scalar_common_3[1], parse_tree__module_cmds__V_54_54);
    }
#line 1016 "module_cmds.m"
    {
#line 1016 "module_cmds.m"
      parse_tree__module_cmds__SearchLibs_26 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_50_50);
    }
#line 1021 "module_cmds.m"
    {
#line 1021 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = libs__options__quote_arg_1_f_0(parse_tree__module_cmds__BeamDirName_12);
    }
#line 1021 "module_cmds.m"
    {
#line 1021 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR\"/", parse_tree__module_cmds__V_59_59);
    }
#line 1021 "module_cmds.m"
    {
#line 1021 "module_cmds.m"
      parse_tree__module_cmds__SearchProg_27 = parse_tree__module_cmds__pa_option_3_f_0((MR_Integer) 1, (MR_Integer) 0, parse_tree__module_cmds__V_57_57);
    }
#line 1032 "module_cmds.m"
    {
#line 1032 "module_cmds.m"
      parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__MainFunc_19));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[5])));
#line 1032 "module_cmds.m"
    }
#line 1032 "module_cmds.m"
    {
#line 1032 "module_cmds.m"
      parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 1032 "module_cmds.m"
    }
#line 1032 "module_cmds.m"
    {
#line 1032 "module_cmds.m"
      parse_tree__module_cmds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 0) = ((MR_Box) (parse_tree__module_cmds__BeamBaseNameNoExt_13));
#line 1032 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_77_77, 1) = ((MR_Box) (parse_tree__module_cmds__V_78_78));
#line 1032 "module_cmds.m"
    }
#line 1031 "module_cmds.m"
    {
#line 1031 "module_cmds.m"
      parse_tree__module_cmds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 0) = ((MR_Box) ((MR_String) " -s "));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_75_75, 1) = ((MR_Box) (parse_tree__module_cmds__V_77_77));
#line 1031 "module_cmds.m"
    }
#line 1031 "module_cmds.m"
    {
#line 1031 "module_cmds.m"
      parse_tree__module_cmds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 0) = ((MR_Box) (parse_tree__module_cmds__SearchProg_27));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_74_74, 1) = ((MR_Box) (parse_tree__module_cmds__V_75_75));
#line 1031 "module_cmds.m"
    }
#line 1031 "module_cmds.m"
    {
#line 1031 "module_cmds.m"
      parse_tree__module_cmds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 0) = ((MR_Box) (parse_tree__module_cmds__SearchLibs_26));
#line 1031 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_73_73, 1) = ((MR_Box) (parse_tree__module_cmds__V_74_74));
#line 1031 "module_cmds.m"
    }
#line 1030 "module_cmds.m"
    {
#line 1030 "module_cmds.m"
      parse_tree__module_cmds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 0) = ((MR_Box) (parse_tree__module_cmds__SearchStdLib_18));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_72_72, 1) = ((MR_Box) (parse_tree__module_cmds__V_73_73));
#line 1030 "module_cmds.m"
    }
#line 1030 "module_cmds.m"
    {
#line 1030 "module_cmds.m"
      parse_tree__module_cmds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 0) = ((MR_Box) ((MR_String) " -noshell \\\n"));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_70_70, 1) = ((MR_Box) (parse_tree__module_cmds__V_72_72));
#line 1030 "module_cmds.m"
    }
#line 1030 "module_cmds.m"
    {
#line 1030 "module_cmds.m"
      parse_tree__module_cmds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 0) = ((MR_Box) (parse_tree__module_cmds__Erlang_25));
#line 1030 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_69_69, 1) = ((MR_Box) (parse_tree__module_cmds__V_70_70));
#line 1030 "module_cmds.m"
    }
#line 1029 "module_cmds.m"
    {
#line 1029 "module_cmds.m"
      parse_tree__module_cmds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 0) = ((MR_Box) ((MR_String) "exec "));
#line 1029 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_67_67, 1) = ((MR_Box) (parse_tree__module_cmds__V_69_69));
#line 1029 "module_cmds.m"
    }
#line 1028 "module_cmds.m"
    {
#line 1028 "module_cmds.m"
      parse_tree__module_cmds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 0) = ((MR_Box) ((MR_String) "DIR=\140dirname \"\0440\"\140\n"));
#line 1028 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_65_65, 1) = ((MR_Box) (parse_tree__module_cmds__V_67_67));
#line 1028 "module_cmds.m"
    }
#line 1027 "module_cmds.m"
    {
#line 1027 "module_cmds.m"
      parse_tree__module_cmds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 0) = ((MR_Box) ((MR_String) "# Generated by the Mercury compiler.\n"));
#line 1027 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_63_63, 1) = ((MR_Box) (parse_tree__module_cmds__V_65_65));
#line 1027 "module_cmds.m"
    }
#line 1026 "module_cmds.m"
    {
#line 1026 "module_cmds.m"
      parse_tree__module_cmds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 1026 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_60_60, 1) = ((MR_Box) (parse_tree__module_cmds__V_63_63));
#line 1026 "module_cmds.m"
    }
#line 1026 "module_cmds.m"
    {
#line 1026 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_60_60);
#line 1026 "module_cmds.m"
      return;
    }
#line 978 "module_cmds.m"
  }
#line 975 "module_cmds.m"
}

#line 919 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__NestedClassPrefixes_10,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__DirName_11,
#line 919 "module_cmds.m"
  MR_String parse_tree__module_cmds__BaseName_12,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds___FileType_13,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__Continue_14,
#line 919 "module_cmds.m"
  MR_Word parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19,
#line 919 "module_cmds.m"
  MR_Word * parse_tree__module_cmds__STATE_VARIABLE_Acc_20)
#line 919 "module_cmds.m"
{
#line 924 "module_cmds.m"
  {
#line 924 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 924 "module_cmds.m"
    {
#line 924 "module_cmds.m"
      parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_110_101_115_116_101_100_95_99_108_97_115_115_95_102_105_108_101_115_95_95_91_52_93_95_48_9_p_0(parse_tree__module_cmds__NestedClassPrefixes_10, parse_tree__module_cmds__DirName_11, parse_tree__module_cmds__BaseName_12, parse_tree__module_cmds__Continue_14, parse_tree__module_cmds__STATE_VARIABLE_Acc_0_19, parse_tree__module_cmds__STATE_VARIABLE_Acc_20);
#line 924 "module_cmds.m"
      return;
    }
#line 924 "module_cmds.m"
  }
#line 919 "module_cmds.m"
}

#line 912 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__make_nested_class_prefix_2_p_0(
#line 912 "module_cmds.m"
  MR_String parse_tree__module_cmds__ClassFileName_3,
#line 912 "module_cmds.m"
  MR_String * parse_tree__module_cmds__ClassPrefix_4)
#line 912 "module_cmds.m"
{
#line 914 "module_cmds.m"
  {
#line 914 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 914 "module_cmds.m"
    MR_String parse_tree__module_cmds__BaseName_5;
#line 914 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_7_7;

#line 916 "module_cmds.m"
    {
#line 916 "module_cmds.m"
      parse_tree__module_cmds__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__module_cmds__ClassFileName_3, (MR_String) ".class", &parse_tree__module_cmds__BaseName_5);
    }
#line 914 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 914 "module_cmds.m"
      {
#line 917 "module_cmds.m"
        parse_tree__module_cmds__V_7_7 = (MR_String) "\044";
#line 917 "module_cmds.m"
        {
#line 917 "module_cmds.m"
          *parse_tree__module_cmds__ClassPrefix_4 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__BaseName_5, parse_tree__module_cmds__V_7_7);
        }
#line 917 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 914 "module_cmds.m"
      }
#line 914 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 914 "module_cmds.m"
  }
#line 912 "module_cmds.m"
}

#line 798 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_batch_file_5_p_0(
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 798 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 798 "module_cmds.m"
{
#line 801 "module_cmds.m"
  {
#line 801 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_52_52;
#line 801 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassDirName_10;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_11;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_12;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_13;
#line 801 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_14;
#line 801 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_15;
#line 801 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_16;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_20_20;
#line 801 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_21_21;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_24_24;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_25_25;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_31_31;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_34_34;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_36_36;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_38_38;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_40_40;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_42_42;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_45_45;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_46_46;
#line 801 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_48_48;

#line 802 "module_cmds.m"
    {
#line 802 "module_cmds.m"
      parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__ClassDirName_10);
    }
#line 804 "module_cmds.m"
    {
#line 804 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__MercuryStdLibs_11);
    }
#line 805 "module_cmds.m"
    {
#line 805 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 516, &parse_tree__module_cmds__UserClasspath_12);
    }
#line 3139 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", parse_tree__module_cmds__ClassDirName_10);
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_20_20, 0) = ((MR_Box) (parse_tree__module_cmds__V_21_21));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "module_cmds.m"
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_25_25, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
#line 808 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_25_25, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_12));
#line 808 "module_cmds.m"
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_52_52, parse_tree__module_cmds__MercuryStdLibs_11, parse_tree__module_cmds__V_25_25);
    }
#line 808 "module_cmds.m"
    {
#line 808 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_13 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_52_52, parse_tree__module_cmds__V_20_20, parse_tree__module_cmds__V_24_24);
    }
#line 810 "module_cmds.m"
    {
#line 810 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_14 = mercury__string__join_list_2_f_0((MR_String) ";", parse_tree__module_cmds__Java_Incl_Dirs_13);
    }
#line 812 "module_cmds.m"
    {
#line 812 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 513, &parse_tree__module_cmds__Java_15);
    }
#line 813 "module_cmds.m"
    {
#line 813 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_7, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_16);
    }
#line 821 "module_cmds.m"
    {
#line 821 "module_cmds.m"
      parse_tree__module_cmds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_16));
#line 821 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[4])));
#line 821 "module_cmds.m"
    }
#line 821 "module_cmds.m"
    {
#line 821 "module_cmds.m"
      parse_tree__module_cmds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 0) = ((MR_Box) ((MR_String) " jmercury."));
#line 821 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_46_46, 1) = ((MR_Box) (parse_tree__module_cmds__V_48_48));
#line 821 "module_cmds.m"
    }
#line 820 "module_cmds.m"
    {
#line 820 "module_cmds.m"
      parse_tree__module_cmds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 0) = ((MR_Box) (parse_tree__module_cmds__Java_15));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 1) = ((MR_Box) (parse_tree__module_cmds__V_46_46));
#line 820 "module_cmds.m"
    }
#line 820 "module_cmds.m"
    {
#line 820 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) ((MR_String) "\n"));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_45_45));
#line 820 "module_cmds.m"
    }
#line 820 "module_cmds.m"
    {
#line 820 "module_cmds.m"
      parse_tree__module_cmds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_42_42, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_14));
#line 820 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_42_42, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 820 "module_cmds.m"
    }
#line 819 "module_cmds.m"
    {
#line 819 "module_cmds.m"
      parse_tree__module_cmds__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_40_40, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
#line 819 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_40_40, 1) = ((MR_Box) (parse_tree__module_cmds__V_42_42));
#line 819 "module_cmds.m"
    }
#line 818 "module_cmds.m"
    {
#line 818 "module_cmds.m"
      parse_tree__module_cmds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_38_38, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
#line 818 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_38_38, 1) = ((MR_Box) (parse_tree__module_cmds__V_40_40));
#line 818 "module_cmds.m"
    }
#line 817 "module_cmds.m"
    {
#line 817 "module_cmds.m"
      parse_tree__module_cmds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_36_36, 0) = ((MR_Box) ((MR_String) "setlocal\n"));
#line 817 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_36_36, 1) = ((MR_Box) (parse_tree__module_cmds__V_38_38));
#line 817 "module_cmds.m"
    }
#line 816 "module_cmds.m"
    {
#line 816 "module_cmds.m"
      parse_tree__module_cmds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
#line 816 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 1) = ((MR_Box) (parse_tree__module_cmds__V_36_36));
#line 816 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      parse_tree__module_cmds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
#line 815 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_31_31, 1) = ((MR_Box) (parse_tree__module_cmds__V_34_34));
#line 815 "module_cmds.m"
    }
#line 815 "module_cmds.m"
    {
#line 815 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_31_31);
#line 815 "module_cmds.m"
      return;
    }
#line 801 "module_cmds.m"
  }
#line 798 "module_cmds.m"
}

#line 766 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__write_java_shell_script_5_p_0(
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Globals_6,
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__MainModuleName_7,
#line 766 "module_cmds.m"
  MR_Word parse_tree__module_cmds__Stream_8)
#line 766 "module_cmds.m"
{
#line 769 "module_cmds.m"
  {
#line 769 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_65_65;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassDirName_10;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassDirNameUnix_11;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MercuryStdLibs_12;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UserClasspath_13;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Java_Incl_Dirs_14;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassPath_15;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__Java_16;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__ClassName_17;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_23_23;
#line 769 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_27_27;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_28_28;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_34_34;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_37_37;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_39_39;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_43_43;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_45_45;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_47_47;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_49_49;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_50_50;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_52_52;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_54_54;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_56_56;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_57_57;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_59_59;
#line 769 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_61_61;

#line 771 "module_cmds.m"
    {
#line 771 "module_cmds.m"
      parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__ClassDirName_10);
    }
#line 772 "module_cmds.m"
    {
#line 772 "module_cmds.m"
      mercury__string__replace_all_4_p_0(parse_tree__module_cmds__ClassDirName_10, (MR_String) "\\", (MR_String) "/", &parse_tree__module_cmds__ClassDirNameUnix_11);
    }
#line 774 "module_cmds.m"
    {
#line 774 "module_cmds.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__MercuryStdLibs_12);
    }
#line 775 "module_cmds.m"
    {
#line 775 "module_cmds.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 516, &parse_tree__module_cmds__UserClasspath_13);
    }
#line 3395 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 778 "module_cmds.m"
    {
#line 778 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044DIR/", parse_tree__module_cmds__ClassDirNameUnix_11);
    }
#line 778 "module_cmds.m"
    {
#line 778 "module_cmds.m"
      parse_tree__module_cmds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 0) = ((MR_Box) (parse_tree__module_cmds__V_24_24));
#line 778 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "module_cmds.m"
    }
#line 778 "module_cmds.m"
    {
#line 778 "module_cmds.m"
      parse_tree__module_cmds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
#line 778 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_28_28, 1) = ((MR_Box) (parse_tree__module_cmds__UserClasspath_13));
#line 778 "module_cmds.m"
    }
#line 778 "module_cmds.m"
    {
#line 778 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_65_65, parse_tree__module_cmds__MercuryStdLibs_12, parse_tree__module_cmds__V_28_28);
    }
#line 778 "module_cmds.m"
    {
#line 778 "module_cmds.m"
      parse_tree__module_cmds__Java_Incl_Dirs_14 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_65_65, parse_tree__module_cmds__V_23_23, parse_tree__module_cmds__V_27_27);
    }
#line 780 "module_cmds.m"
    {
#line 780 "module_cmds.m"
      parse_tree__module_cmds__ClassPath_15 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", parse_tree__module_cmds__Java_Incl_Dirs_14);
    }
#line 782 "module_cmds.m"
    {
#line 782 "module_cmds.m"
      libs__globals__lookup_string_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 513, &parse_tree__module_cmds__Java_16);
    }
#line 783 "module_cmds.m"
    {
#line 783 "module_cmds.m"
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__module_cmds__MainModuleName_7, (MR_Integer) 0, (MR_String) ".", &parse_tree__module_cmds__ClassName_17);
    }
#line 795 "module_cmds.m"
    {
#line 795 "module_cmds.m"
      parse_tree__module_cmds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 0) = ((MR_Box) (parse_tree__module_cmds__ClassName_17));
#line 795 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[3])));
#line 795 "module_cmds.m"
    }
#line 794 "module_cmds.m"
    {
#line 794 "module_cmds.m"
      parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) ((MR_String) "exec \044JAVA jmercury."));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (parse_tree__module_cmds__V_61_61));
#line 794 "module_cmds.m"
    }
#line 794 "module_cmds.m"
    {
#line 794 "module_cmds.m"
      parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 794 "module_cmds.m"
    }
#line 794 "module_cmds.m"
    {
#line 794 "module_cmds.m"
      parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) (parse_tree__module_cmds__Java_16));
#line 794 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 794 "module_cmds.m"
    }
#line 793 "module_cmds.m"
    {
#line 793 "module_cmds.m"
      parse_tree__module_cmds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 0) = ((MR_Box) ((MR_String) "JAVA=\044{JAVA:-"));
#line 793 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_54_54, 1) = ((MR_Box) (parse_tree__module_cmds__V_56_56));
#line 793 "module_cmds.m"
    }
#line 792 "module_cmds.m"
    {
#line 792 "module_cmds.m"
      parse_tree__module_cmds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_52_52, 1) = ((MR_Box) (parse_tree__module_cmds__V_54_54));
#line 792 "module_cmds.m"
    }
#line 792 "module_cmds.m"
    {
#line 792 "module_cmds.m"
      parse_tree__module_cmds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_50_50, 1) = ((MR_Box) (parse_tree__module_cmds__V_52_52));
#line 792 "module_cmds.m"
    }
#line 792 "module_cmds.m"
    {
#line 792 "module_cmds.m"
      parse_tree__module_cmds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 0) = ((MR_Box) (parse_tree__module_cmds__ClassPath_15));
#line 792 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_49_49, 1) = ((MR_Box) (parse_tree__module_cmds__V_50_50));
#line 792 "module_cmds.m"
    }
#line 791 "module_cmds.m"
    {
#line 791 "module_cmds.m"
      parse_tree__module_cmds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
#line 791 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_47_47, 1) = ((MR_Box) (parse_tree__module_cmds__V_49_49));
#line 791 "module_cmds.m"
    }
#line 790 "module_cmds.m"
    {
#line 790 "module_cmds.m"
      parse_tree__module_cmds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 0) = ((MR_Box) ((MR_String) "esac\n"));
#line 790 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_45_45, 1) = ((MR_Box) (parse_tree__module_cmds__V_47_47));
#line 790 "module_cmds.m"
    }
#line 789 "module_cmds.m"
    {
#line 789 "module_cmds.m"
      parse_tree__module_cmds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
#line 789 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_43_43, 1) = ((MR_Box) (parse_tree__module_cmds__V_45_45));
#line 789 "module_cmds.m"
    }
#line 788 "module_cmds.m"
    {
#line 788 "module_cmds.m"
      parse_tree__module_cmds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
#line 788 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_41_41, 1) = ((MR_Box) (parse_tree__module_cmds__V_43_43));
#line 788 "module_cmds.m"
    }
#line 787 "module_cmds.m"
    {
#line 787 "module_cmds.m"
      parse_tree__module_cmds__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
#line 787 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__V_41_41));
#line 787 "module_cmds.m"
    }
#line 786 "module_cmds.m"
    {
#line 786 "module_cmds.m"
      parse_tree__module_cmds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 786 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_37_37, 1) = ((MR_Box) (parse_tree__module_cmds__V_39_39));
#line 786 "module_cmds.m"
    }
#line 785 "module_cmds.m"
    {
#line 785 "module_cmds.m"
      parse_tree__module_cmds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 785 "module_cmds.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_34_34, 1) = ((MR_Box) (parse_tree__module_cmds__V_37_37));
#line 785 "module_cmds.m"
    }
#line 785 "module_cmds.m"
    {
#line 785 "module_cmds.m"
      mercury__io__write_strings_4_p_0(parse_tree__module_cmds__Stream_8, parse_tree__module_cmds__V_34_34);
#line 785 "module_cmds.m"
      return;
    }
#line 769 "module_cmds.m"
  }
#line 766 "module_cmds.m"
}

#line 725 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_win32_0_p_0(void)
#line 725 "module_cmds.m"
{
#line 726 "module_cmds.m"
  {
#line 726 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 729 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__use_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 729 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 3634 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 729 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 726 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 726 "module_cmds.m"
  }
#line 725 "module_cmds.m"
}

#line 706 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__use_dotnet_0_p_0(void)
#line 706 "module_cmds.m"
{
#line 715 "module_cmds.m"
  {
#line 715 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 715 "module_cmds.m"
    {
#line 715 "module_cmds.m"
      return parse_tree__module_cmds__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 715 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 715 "module_cmds.m"
  }
#line 706 "module_cmds.m"
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

#line 324 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1(
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 324 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 324 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 324 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 324 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6)
#line 324 "module_cmds.m"
{
#line 324 "module_cmds.m"
  {
#line 324 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 324 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_Continue_10;
#line 324 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv0_Differ_12;

#line 324 "module_cmds.m"
    {
#line 324 "module_cmds.m"
      parse_tree__module_cmds__binary_input_stream_cmp_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv1_Continue_10, ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv0_Differ_12);
    }
#line 324 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv1_Continue_10));
#line 324 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv0_Differ_12));
#line 324 "module_cmds.m"
  }
#line 324 "module_cmds.m"
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

#line 324 "module_cmds.m"
    {
#line 324 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_7[0]));
#line 324 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 1) = ((MR_Box) (parse_tree__module_cmds__binary_input_stream_cmp_5_p_0_1));
#line 324 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 324 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_16_16, 3) = ((MR_Box) (parse_tree__module_cmds__TmpOutputFileStream_7));
#line 324 "module_cmds.m"
    }
#line 324 "module_cmds.m"
    {
#line 324 "module_cmds.m"
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[1], parse_tree__module_cmds__OutputFileStream_6, parse_tree__module_cmds__V_16_16, ((MR_Box) (&parse_tree__module_cmds_scalar_common_8[0])), &parse_tree__module_cmds__FilesDiffer0_10);
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
        if ((parse_tree__module_cmds__TmpByteResult2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "module_cmds.m"
          *parse_tree__module_cmds__FilesDiffer_8 = parse_tree__module_cmds__FilesDiffer0_10;
#line 334 "module_cmds.m"
        else
#line 334 "module_cmds.m"
          if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpByteResult2_11)) == (MR_mktag((MR_Integer) 2))))
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
          else
#line 332 "module_cmds.m"
            {
#line 333 "module_cmds.m"
              *parse_tree__module_cmds__FilesDiffer_8 = (MR_Word) &parse_tree__module_cmds_scalar_common_8[2];
#line 332 "module_cmds.m"
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
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_8, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_14);
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
#line 303 "module_cmds.m"
    {
#line 303 "module_cmds.m"
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
#line 312 "module_cmds.m"
        {
#line 312 "module_cmds.m"
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
#line 1177 "module_cmds.m"
  {
#line 1177 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1177 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_24_24;
#line 1177 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_27_27;
#line 1187 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1179 "module_cmds.m"
    {
#line 1179 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) ".bat", (MR_Integer) 1, &parse_tree__module_cmds__FileName_13);
    }
#line 1182 "module_cmds.m"
    {
#line 1182 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_14);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", parse_tree__module_cmds__V_27_27);
    }
#line 1183 "module_cmds.m"
    {
#line 1183 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_24_24);
    }
#line 1187 "module_cmds.m"
    {
#line 1187 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1188 "module_cmds.m"
    {
#line 1188 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1194 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1195 "module_cmds.m"
      {
#line 1195 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1195 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;

#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_18);
        }
#line 1196 "module_cmds.m"
        {
#line 1196 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_batch_file\'/6", parse_tree__module_cmds__V_33_33);
#line 1196 "module_cmds.m"
          return;
        }
#line 1195 "module_cmds.m"
      }
#line 1194 "module_cmds.m"
    else
#line 1190 "module_cmds.m"
      {
#line 1190 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1191 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1191 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34;

#line 1191 "module_cmds.m"
        {
#line 1191 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_34_34);
        }
#line 1192 "module_cmds.m"
        {
#line 1192 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1193 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1190 "module_cmds.m"
      }
#line 1177 "module_cmds.m"
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
#line 1138 "module_cmds.m"
  {
#line 1138 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 1138 "module_cmds.m"
    MR_String parse_tree__module_cmds__FileName_13;
#line 1138 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_14;
#line 1138 "module_cmds.m"
    MR_Word parse_tree__module_cmds__OpenResult_16;
#line 1138 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_26_26;
#line 1138 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_29_29;
#line 1148 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_15_15;

#line 1140 "module_cmds.m"
    {
#line 1140 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__MainModuleName_8, (MR_String) "", (MR_Integer) 1, &parse_tree__module_cmds__FileName_13);
    }
#line 1143 "module_cmds.m"
    {
#line 1143 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_14);
    }
#line 1144 "module_cmds.m"
    {
#line 1144 "module_cmds.m"
      parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_13, (MR_String) "\'...\n");
    }
#line 1144 "module_cmds.m"
    {
#line 1144 "module_cmds.m"
      parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_29_29);
    }
#line 1144 "module_cmds.m"
    {
#line 1144 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, parse_tree__module_cmds__V_26_26);
    }
#line 1148 "module_cmds.m"
    {
#line 1148 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__V_15_15);
    }
#line 1149 "module_cmds.m"
    {
#line 1149 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_13, &parse_tree__module_cmds__OpenResult_16);
    }
#line 1169 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
#line 1170 "module_cmds.m"
      {
#line 1170 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_35_35;
#line 1170 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Message_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));

#line 1171 "module_cmds.m"
        {
#line 1171 "module_cmds.m"
          parse_tree__module_cmds__V_35_35 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_49);
        }
#line 1171 "module_cmds.m"
        {
#line 1171 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_35_35);
#line 1171 "module_cmds.m"
          return;
        }
#line 1170 "module_cmds.m"
      }
#line 1169 "module_cmds.m"
    else
#line 1151 "module_cmds.m"
      {
#line 1151 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Stream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_16, (MR_Integer) 0)));
#line 1151 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ChmodResult_18;
#line 1151 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_38_38;
#line 1152 "module_cmds.m"
        void MR_CALL (* parse_tree__module_cmds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Pred_9, (MR_Integer) 1)));
#line 1152 "module_cmds.m"
        MR_Box parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36;

#line 1152 "module_cmds.m"
        {
#line 1152 "module_cmds.m"
          parse_tree__module_cmds__func_0(((MR_Box) parse_tree__module_cmds__Pred_9), ((MR_Box) (parse_tree__module_cmds__Stream_17)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__module_cmds__conv1_STATE_VARIABLE_IO_36_36);
        }
#line 1153 "module_cmds.m"
        {
#line 1153 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_17);
        }
#line 1154 "module_cmds.m"
        {
#line 1154 "module_cmds.m"
          parse_tree__module_cmds__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_13);
        }
#line 1154 "module_cmds.m"
        {
#line 1154 "module_cmds.m"
          mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_38_38, &parse_tree__module_cmds__ChmodResult_18);
        }
#line 1164 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1165 "module_cmds.m"
          {
#line 1165 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));
#line 1165 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_43_43;

#line 1166 "module_cmds.m"
            {
#line 1166 "module_cmds.m"
              parse_tree__module_cmds__V_43_43 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_20);
            }
#line 1166 "module_cmds.m"
            {
#line 1166 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_43_43);
#line 1166 "module_cmds.m"
              return;
            }
#line 1165 "module_cmds.m"
          }
#line 1164 "module_cmds.m"
        else
#line 1156 "module_cmds.m"
          {
#line 1156 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_18, (MR_Integer) 0)));

#line 1157 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_19 == (MR_Integer) 0);
#line 1160 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 1158 "module_cmds.m"
              {
#line 1158 "module_cmds.m"
                *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 1159 "module_cmds.m"
                {
#line 1159 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_14, (MR_String) "% done.\n");
#line 1159 "module_cmds.m"
                  return;
                }
#line 1158 "module_cmds.m"
              }
#line 1160 "module_cmds.m"
            else
#line 1161 "module_cmds.m"
              {
#line 1161 "module_cmds.m"
                {
#line 1161 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1161 "module_cmds.m"
                  return;
                }
#line 1161 "module_cmds.m"
              }
#line 1156 "module_cmds.m"
          }
#line 1151 "module_cmds.m"
      }
#line 1138 "module_cmds.m"
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
#line 956 "module_cmds.m"
  {
#line 956 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 956 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_10;

#line 957 "module_cmds.m"
    {
#line 957 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_10);
    }
#line 966 "module_cmds.m"
    if ((((parse_tree__module_cmds__TargetEnvType_10 == (MR_Integer) 4)) || ((parse_tree__module_cmds__TargetEnvType_10 == (MR_Integer) 3))))
#line 970 "module_cmds.m"
      {
#line 970 "module_cmds.m"
        parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_49_95_95_91_53_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
#line 970 "module_cmds.m"
        return;
      }
#line 966 "module_cmds.m"
    else
#line 962 "module_cmds.m"
      {
#line 962 "module_cmds.m"
        MR_String parse_tree__module_cmds__FileName_31;
#line 962 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Verbose_32;
#line 962 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OpenResult_34;
#line 962 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_42_42;
#line 962 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_45_45;
#line 1148 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_33_33;

#line 1140 "module_cmds.m"
        {
#line 1140 "module_cmds.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 1, &parse_tree__module_cmds__FileName_31);
        }
#line 1143 "module_cmds.m"
        {
#line 1143 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_32);
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          parse_tree__module_cmds__V_45_45 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_31, (MR_String) "\'...\n");
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          parse_tree__module_cmds__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_45_45);
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, parse_tree__module_cmds__V_42_42);
        }
#line 1148 "module_cmds.m"
        {
#line 1148 "module_cmds.m"
          mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__V_33_33);
        }
#line 1149 "module_cmds.m"
        {
#line 1149 "module_cmds.m"
          mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__OpenResult_34);
        }
#line 1169 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 1170 "module_cmds.m"
          {
#line 1170 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_51_51;
#line 1170 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));

#line 1171 "module_cmds.m"
            {
#line 1171 "module_cmds.m"
              parse_tree__module_cmds__V_51_51 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_65);
            }
#line 1171 "module_cmds.m"
            {
#line 1171 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_51_51);
#line 1171 "module_cmds.m"
              return;
            }
#line 1170 "module_cmds.m"
          }
#line 1169 "module_cmds.m"
        else
#line 1151 "module_cmds.m"
          {
#line 1151 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));
#line 1151 "module_cmds.m"
            MR_Word parse_tree__module_cmds__ChmodResult_36;
#line 1151 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_54_54;

#line 1152 "module_cmds.m"
            {
#line 1152 "module_cmds.m"
              parse_tree__module_cmds__write_erlang_shell_script_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Stream_35);
            }
#line 1153 "module_cmds.m"
            {
#line 1153 "module_cmds.m"
              mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_35);
            }
#line 1154 "module_cmds.m"
            {
#line 1154 "module_cmds.m"
              parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_31);
            }
#line 1154 "module_cmds.m"
            {
#line 1154 "module_cmds.m"
              mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_54_54, &parse_tree__module_cmds__ChmodResult_36);
            }
#line 1164 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_36)) == (MR_mktag((MR_Integer) 1))))
#line 1165 "module_cmds.m"
              {
#line 1165 "module_cmds.m"
                MR_Word parse_tree__module_cmds__Message_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));
#line 1165 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_59_59;

#line 1166 "module_cmds.m"
                {
#line 1166 "module_cmds.m"
                  parse_tree__module_cmds__V_59_59 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_38);
                }
#line 1166 "module_cmds.m"
                {
#line 1166 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_59_59);
#line 1166 "module_cmds.m"
                  return;
                }
#line 1165 "module_cmds.m"
              }
#line 1164 "module_cmds.m"
            else
#line 1156 "module_cmds.m"
              {
#line 1156 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__Status_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));

#line 1157 "module_cmds.m"
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_37 == (MR_Integer) 0);
#line 1160 "module_cmds.m"
                if (parse_tree__module_cmds__succeeded)
#line 1158 "module_cmds.m"
                  {
#line 1158 "module_cmds.m"
                    *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1159 "module_cmds.m"
                    {
#line 1159 "module_cmds.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, (MR_String) "% done.\n");
#line 1159 "module_cmds.m"
                      return;
                    }
#line 1158 "module_cmds.m"
                  }
#line 1160 "module_cmds.m"
                else
#line 1161 "module_cmds.m"
                  {
#line 1161 "module_cmds.m"
                    {
#line 1161 "module_cmds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1161 "module_cmds.m"
                      return;
                    }
#line 1161 "module_cmds.m"
                  }
#line 1156 "module_cmds.m"
              }
#line 1151 "module_cmds.m"
          }
#line 962 "module_cmds.m"
      }
#line 956 "module_cmds.m"
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
#line 936 "module_cmds.m"
  {
#line 936 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 936 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeCP_6;

#line 937 "module_cmds.m"
    {
#line 937 "module_cmds.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "CLASSPATH", &parse_tree__module_cmds__MaybeCP_6);
    }
#line 940 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeCP_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "module_cmds.m"
      {
#line 941 "module_cmds.m"
        MR_Word parse_tree__module_cmds__MaybeJCP_7;

#line 942 "module_cmds.m"
        {
#line 942 "module_cmds.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "java.class.path", &parse_tree__module_cmds__MaybeJCP_7);
        }
#line 945 "module_cmds.m"
        if ((parse_tree__module_cmds__MaybeJCP_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = (MR_String) "";
#line 945 "module_cmds.m"
        else
#line 944 "module_cmds.m"
          *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeJCP_7, (MR_Integer) 0)));
#line 941 "module_cmds.m"
      }
#line 940 "module_cmds.m"
    else
#line 939 "module_cmds.m"
      *parse_tree__module_cmds__Classpath_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeCP_6, (MR_Integer) 0)));
#line 936 "module_cmds.m"
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
#line 890 "module_cmds.m"
  {
#line 890 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 890 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_7;
#line 890 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_8;
#line 890 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_9;

#line 891 "module_cmds.m"
    {
#line 891 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 640, &parse_tree__module_cmds__UseSubdirs_7);
    }
#line 892 "module_cmds.m"
    {
#line 892 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_4, (MR_Integer) 641, &parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 893 "module_cmds.m"
    {
#line 893 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_9 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_7, parse_tree__module_cmds__UseGradeSubdirs_8);
    }
#line 907 "module_cmds.m"
    if ((parse_tree__module_cmds__AnySubdirs_9 == (MR_Integer) 0))
#line 909 "module_cmds.m"
      *parse_tree__module_cmds__ListClassFiles_6 = parse_tree__module_cmds__ClassFiles_5;
#line 907 "module_cmds.m"
    else
#line 895 "module_cmds.m"
      {
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__ClassSubdir_10;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_14_14;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_15_15;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_17_17;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_19_19;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_20_20;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_22_22;
#line 895 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_24_24;

#line 896 "module_cmds.m"
        {
#line 896 "module_cmds.m"
          parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_4, &parse_tree__module_cmds__ClassSubdir_10);
        }
#line 906 "module_cmds.m"
        {
#line 906 "module_cmds.m"
          parse_tree__module_cmds__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, (MR_String) "/| |\'\140");
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", parse_tree__module_cmds__V_24_24);
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__module_cmds__V_22_22);
        }
#line 905 "module_cmds.m"
        {
#line 905 "module_cmds.m"
          parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassFiles_5, parse_tree__module_cmds__V_20_20);
        }
#line 904 "module_cmds.m"
        {
#line 904 "module_cmds.m"
          parse_tree__module_cmds__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", parse_tree__module_cmds__V_19_19);
        }
#line 904 "module_cmds.m"
        {
#line 904 "module_cmds.m"
          parse_tree__module_cmds__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", parse_tree__module_cmds__V_17_17);
        }
#line 904 "module_cmds.m"
        {
#line 904 "module_cmds.m"
          parse_tree__module_cmds__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__ClassSubdir_10, parse_tree__module_cmds__V_15_15);
        }
#line 904 "module_cmds.m"
        {
#line 904 "module_cmds.m"
          *parse_tree__module_cmds__ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", parse_tree__module_cmds__V_14_14);
        }
#line 895 "module_cmds.m"
      }
#line 890 "module_cmds.m"
  }
#line 167 "module_cmds.m"
}

#line 880 "module_cmds.m"
static MR_Box MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3(
#line 880 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 880 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1)
#line 880 "module_cmds.m"
{
#line 880 "module_cmds.m"
  {
#line 880 "module_cmds.m"
    MR_Box parse_tree__module_cmds__wrapper_arg_2;
#line 880 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 880 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv3_HeadVar__3_3;

#line 880 "module_cmds.m"
    {
#line 880 "module_cmds.m"
      parse_tree__module_cmds__conv3_HeadVar__3_3 = mercury__string__remove_prefix_if_present_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1));
    }
#line 880 "module_cmds.m"
    parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv3_HeadVar__3_3));
#line 880 "module_cmds.m"
    return parse_tree__module_cmds__wrapper_arg_2;
#line 880 "module_cmds.m"
  }
#line 880 "module_cmds.m"
}

#line 869 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2(
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_3,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_4,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_5,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_6,
#line 869 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_7,
#line 869 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_8)
#line 869 "module_cmds.m"
{
#line 869 "module_cmds.m"
  {
#line 869 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 869 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv2_Continue_14;
#line 869 "module_cmds.m"
    MR_Word parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20;

#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__accumulate_nested_class_files_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_String) parse_tree__module_cmds__wrapper_arg_1), ((MR_String) parse_tree__module_cmds__wrapper_arg_2), ((MR_Word) parse_tree__module_cmds__wrapper_arg_3), &parse_tree__module_cmds__conv2_Continue_14, ((MR_Word) parse_tree__module_cmds__wrapper_arg_5), &parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20);
    }
#line 869 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_4 = ((MR_Box) (parse_tree__module_cmds__conv2_Continue_14));
#line 869 "module_cmds.m"
    *parse_tree__module_cmds__wrapper_arg_6 = ((MR_Box) (parse_tree__module_cmds__conv1_STATE_VARIABLE_Acc_20));
#line 869 "module_cmds.m"
  }
#line 869 "module_cmds.m"
}

#line 863 "module_cmds.m"
static MR_bool MR_CALL 
parse_tree__module_cmds__list_class_files_for_jar_6_p_0_1(
#line 863 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 863 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 863 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_2)
#line 863 "module_cmds.m"
{
#line 863 "module_cmds.m"
  {
#line 863 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 863 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;
#line 863 "module_cmds.m"
    MR_String parse_tree__module_cmds__conv0_ClassPrefix_4;

#line 863 "module_cmds.m"
    {
#line 863 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__make_nested_class_prefix_2_p_0(((MR_String) parse_tree__module_cmds__wrapper_arg_1), &parse_tree__module_cmds__conv0_ClassPrefix_4);
    }
#line 863 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 863 "module_cmds.m"
      {
#line 863 "module_cmds.m"
        *parse_tree__module_cmds__wrapper_arg_2 = ((MR_Box) (parse_tree__module_cmds__conv0_ClassPrefix_4));
#line 863 "module_cmds.m"
        parse_tree__module_cmds__succeeded = MR_TRUE;
#line 863 "module_cmds.m"
      }
#line 863 "module_cmds.m"
    return parse_tree__module_cmds__succeeded;
#line 863 "module_cmds.m"
  }
#line 863 "module_cmds.m"
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
#line 851 "module_cmds.m"
  {
#line 851 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TypeCtorInfo_42_42;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSubdirs_12;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseGradeSubdirs_13;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__AnySubdirs_14;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixes_15;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__NestedClassPrefixesSet_16;
#line 851 "module_cmds.m"
    MR_String parse_tree__module_cmds__SearchDir_17;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_19;
#line 851 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_32_32;

#line 852 "module_cmds.m"
    {
#line 852 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 640, &parse_tree__module_cmds__UseSubdirs_12);
    }
#line 853 "module_cmds.m"
    {
#line 853 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 641, &parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 854 "module_cmds.m"
    {
#line 854 "module_cmds.m"
      parse_tree__module_cmds__AnySubdirs_14 = mercury__bool__or_2_f_0(parse_tree__module_cmds__UseSubdirs_12, parse_tree__module_cmds__UseGradeSubdirs_13);
    }
#line 858 "module_cmds.m"
    if ((parse_tree__module_cmds__AnySubdirs_14 == (MR_Integer) 0))
#line 860 "module_cmds.m"
      {
#line 860 "module_cmds.m"
        *parse_tree__module_cmds__ClassSubDir_9 = mercury__dir__this_directory_0_f_0();
      }
#line 858 "module_cmds.m"
    else
#line 857 "module_cmds.m"
      {
#line 857 "module_cmds.m"
        parse_tree__file_names__get_class_dir_name_2_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__ClassSubDir_9);
      }
#line 4879 "parse_tree.module_cmds.c"
    parse_tree__module_cmds__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 863 "module_cmds.m"
    {
#line 863 "module_cmds.m"
      mercury__list__filter_map_3_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, (MR_Word) &parse_tree__module_cmds_scalar_common_4[0], parse_tree__module_cmds__MainClassFiles_8, &parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 865 "module_cmds.m"
    {
#line 865 "module_cmds.m"
      parse_tree__module_cmds__NestedClassPrefixesSet_16 = mercury__set__from_list_1_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__NestedClassPrefixes_15);
    }
#line 867 "module_cmds.m"
    {
#line 867 "module_cmds.m"
      parse_tree__module_cmds__SearchDir_17 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "jmercury");
    }
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      parse_tree__module_cmds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_5[0]));
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_2));
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 869 "module_cmds.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_32_32, 3) = ((MR_Box) (parse_tree__module_cmds__NestedClassPrefixesSet_16));
#line 869 "module_cmds.m"
    }
#line 869 "module_cmds.m"
    {
#line 869 "module_cmds.m"
      mercury__dir__recursive_foldl2_7_p_0((MR_Word) &parse_tree__module_cmds_scalar_common_1[0], parse_tree__module_cmds__V_32_32, parse_tree__module_cmds__SearchDir_17, (MR_Integer) 1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_cmds__Result_19);
    }
#line 885 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_19)) == (MR_mktag((MR_Integer) 1))))
#line 886 "module_cmds.m"
      {
#line 886 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 1)));
#line 886 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 886 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));

#line 887 "module_cmds.m"
        {
#line 887 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 887 "module_cmds.m"
        {
#line 887 "module_cmds.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.list_class_files_for_jar\'/6", parse_tree__module_cmds__V_37_37);
#line 887 "module_cmds.m"
          return;
        }
#line 886 "module_cmds.m"
      }
#line 885 "module_cmds.m"
    else
#line 873 "module_cmds.m"
      {
#line 873 "module_cmds.m"
        MR_Word parse_tree__module_cmds__NestedClassFiles_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_19, (MR_Integer) 0)));
#line 873 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles0_21;
#line 873 "module_cmds.m"
        MR_Word parse_tree__module_cmds__AllClassFiles_22;
#line 876 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_54_54;

#line 874 "module_cmds.m"
        {
#line 874 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles0_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__MainClassFiles_8, parse_tree__module_cmds__NestedClassFiles_20);
        }
#line 876 "module_cmds.m"
        {
#line 876 "module_cmds.m"
          parse_tree__module_cmds__V_54_54 = mercury__dir__this_directory_0_f_0();
        }
#line 876 "module_cmds.m"
        parse_tree__module_cmds__succeeded = (strcmp(*parse_tree__module_cmds__ClassSubDir_9, parse_tree__module_cmds__V_54_54) == 0);
#line 878 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 877 "module_cmds.m"
          parse_tree__module_cmds__AllClassFiles_22 = parse_tree__module_cmds__AllClassFiles0_21;
#line 878 "module_cmds.m"
        else
#line 879 "module_cmds.m"
          {
#line 879 "module_cmds.m"
            MR_String parse_tree__module_cmds__ClassSubDirSep_23;
#line 879 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_39_39;

#line 879 "module_cmds.m"
            {
#line 879 "module_cmds.m"
              parse_tree__module_cmds__ClassSubDirSep_23 = mercury__dir__f_slash_2_f_0(*parse_tree__module_cmds__ClassSubDir_9, (MR_String) "");
            }
#line 880 "module_cmds.m"
            {
#line 880 "module_cmds.m"
              parse_tree__module_cmds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 880 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_6[0]));
#line 880 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 1) = ((MR_Box) (parse_tree__module_cmds__list_class_files_for_jar_6_p_0_3));
#line 880 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "module_cmds.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_39_39, 3) = ((MR_Box) (parse_tree__module_cmds__ClassSubDirSep_23));
#line 880 "module_cmds.m"
            }
#line 880 "module_cmds.m"
            {
#line 880 "module_cmds.m"
              parse_tree__module_cmds__AllClassFiles_22 = mercury__list__map_2_f_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__V_39_39, parse_tree__module_cmds__AllClassFiles0_21);
            }
#line 879 "module_cmds.m"
          }
#line 884 "module_cmds.m"
        {
#line 884 "module_cmds.m"
          mercury__list__sort_2_p_0(parse_tree__module_cmds__TypeCtorInfo_42_42, parse_tree__module_cmds__AllClassFiles_22, parse_tree__module_cmds__ListClassFiles_10);
#line 884 "module_cmds.m"
          return;
        }
#line 873 "module_cmds.m"
      }
#line 851 "module_cmds.m"
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
#line 826 "module_cmds.m"
  {
#line 826 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 826 "module_cmds.m"
    MR_Word parse_tree__module_cmds__MaybeStdlibDir_5;
#line 826 "module_cmds.m"
    MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 828 "module_cmds.m"
    {
#line 828 "module_cmds.m"
      libs__globals__lookup_maybe_string_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 551, &parse_tree__module_cmds__MaybeStdlibDir_5);
    }
#line 846 "module_cmds.m"
    if ((parse_tree__module_cmds__MaybeStdlibDir_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "module_cmds.m"
      *parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 846 "module_cmds.m"
    else
#line 831 "module_cmds.m"
      {
#line 831 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TypeCtorInfo_44_44;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__StdLibDir_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeStdlibDir_5, (MR_Integer) 0)));
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__GradeDir_7;
#line 831 "module_cmds.m"
        MR_Word parse_tree__module_cmds__SourceDebug_8;
#line 831 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_31_31;
#line 831 "module_cmds.m"
        MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_33_33;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_34_34;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_37_37;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_39_39;
#line 831 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_40_40;

#line 832 "module_cmds.m"
        {
#line 832 "module_cmds.m"
          libs__handle_options__grade_directory_component_2_p_0(parse_tree__module_cmds__Globals_3, &parse_tree__module_cmds__GradeDir_7);
        }
#line 834 "module_cmds.m"
        {
#line 834 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_3, (MR_Integer) 231, &parse_tree__module_cmds__SourceDebug_8);
        }
#line 841 "module_cmds.m"
        if ((parse_tree__module_cmds__SourceDebug_8 == (MR_Integer) 0))
#line 842 "module_cmds.m"
          parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26 = parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10;
#line 841 "module_cmds.m"
        else
#line 837 "module_cmds.m"
          {
#line 837 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TypeCtorInfo_43_43;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_13_13;
#line 837 "module_cmds.m"
            MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_15_15;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_16_16;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_19_19;
#line 837 "module_cmds.m"
            MR_Word parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_21_21;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_22_22;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_25_25;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_27_27;
#line 837 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_28_28;

#line 838 "module_cmds.m"
            {
#line 838 "module_cmds.m"
              parse_tree__module_cmds__V_16_16 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
            }
#line 838 "module_cmds.m"
            {
#line 838 "module_cmds.m"
              parse_tree__module_cmds__V_15_15 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_16_16, parse_tree__module_cmds__GradeDir_7);
            }
#line 838 "module_cmds.m"
            {
#line 838 "module_cmds.m"
              parse_tree__module_cmds__V_13_13 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_15_15, (MR_String) "mer_browser.jar");
            }
#line 5132 "parse_tree.module_cmds.c"
            parse_tree__module_cmds__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 838 "module_cmds.m"
            {
#line 838 "module_cmds.m"
              mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_13_13)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_10_10, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14);
            }
#line 839 "module_cmds.m"
            {
#line 839 "module_cmds.m"
              parse_tree__module_cmds__V_22_22 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
            }
#line 839 "module_cmds.m"
            {
#line 839 "module_cmds.m"
              parse_tree__module_cmds__V_21_21 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_22_22, parse_tree__module_cmds__GradeDir_7);
            }
#line 839 "module_cmds.m"
            {
#line 839 "module_cmds.m"
              parse_tree__module_cmds__V_19_19 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_21_21, (MR_String) "mer_mdbcomp.jar");
            }
#line 839 "module_cmds.m"
            {
#line 839 "module_cmds.m"
              mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_19_19)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_14_14, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20);
            }
#line 840 "module_cmds.m"
            {
#line 840 "module_cmds.m"
              parse_tree__module_cmds__V_28_28 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
            }
#line 840 "module_cmds.m"
            {
#line 840 "module_cmds.m"
              parse_tree__module_cmds__V_27_27 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_28_28, parse_tree__module_cmds__GradeDir_7);
            }
#line 840 "module_cmds.m"
            {
#line 840 "module_cmds.m"
              parse_tree__module_cmds__V_25_25 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_27_27, (MR_String) "mer_ssdb.jar");
            }
#line 840 "module_cmds.m"
            {
#line 840 "module_cmds.m"
              mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_43_43, ((MR_Box) (parse_tree__module_cmds__V_25_25)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_20_20, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26);
            }
#line 837 "module_cmds.m"
          }
#line 844 "module_cmds.m"
        {
#line 844 "module_cmds.m"
          parse_tree__module_cmds__V_34_34 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 844 "module_cmds.m"
        {
#line 844 "module_cmds.m"
          parse_tree__module_cmds__V_33_33 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_34_34, parse_tree__module_cmds__GradeDir_7);
        }
#line 844 "module_cmds.m"
        {
#line 844 "module_cmds.m"
          parse_tree__module_cmds__V_31_31 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_33_33, (MR_String) "mer_std.jar");
        }
#line 5196 "parse_tree.module_cmds.c"
        parse_tree__module_cmds__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 844 "module_cmds.m"
        {
#line 844 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_31_31)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_26_26, &parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32);
        }
#line 845 "module_cmds.m"
        {
#line 845 "module_cmds.m"
          parse_tree__module_cmds__V_40_40 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__StdLibDir_6, (MR_String) "lib");
        }
#line 845 "module_cmds.m"
        {
#line 845 "module_cmds.m"
          parse_tree__module_cmds__V_39_39 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_40_40, parse_tree__module_cmds__GradeDir_7);
        }
#line 845 "module_cmds.m"
        {
#line 845 "module_cmds.m"
          parse_tree__module_cmds__V_37_37 = mercury__dir__f_slash_2_f_0(parse_tree__module_cmds__V_39_39, (MR_String) "mer_rt.jar");
        }
#line 845 "module_cmds.m"
        {
#line 845 "module_cmds.m"
          mercury__list__cons_3_p_0(parse_tree__module_cmds__TypeCtorInfo_44_44, ((MR_Box) (parse_tree__module_cmds__V_37_37)), parse_tree__module_cmds__STATE_VARIABLE_StdLibs_32_32, parse_tree__module_cmds__STATE_VARIABLE_StdLibs_9);
#line 845 "module_cmds.m"
          return;
        }
#line 831 "module_cmds.m"
      }
#line 826 "module_cmds.m"
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
#line 746 "module_cmds.m"
  {
#line 746 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 746 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TargetEnvType_10;

#line 747 "module_cmds.m"
    {
#line 747 "module_cmds.m"
      libs__globals__get_target_env_type_2_p_0(parse_tree__module_cmds__Globals_6, &parse_tree__module_cmds__TargetEnvType_10);
    }
#line 756 "module_cmds.m"
    if ((((parse_tree__module_cmds__TargetEnvType_10 == (MR_Integer) 4)) || ((parse_tree__module_cmds__TargetEnvType_10 == (MR_Integer) 3))))
#line 761 "module_cmds.m"
      {
#line 761 "module_cmds.m"
        parse_tree__module_cmds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_108_97_117_110_99_104_101_114_95_98_97_116_99_104_95_102_105_108_101_95_95_104_111_51_95_95_91_53_93_95_48_6_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Succeeded_8);
#line 761 "module_cmds.m"
        return;
      }
#line 756 "module_cmds.m"
    else
#line 752 "module_cmds.m"
      {
#line 752 "module_cmds.m"
        MR_String parse_tree__module_cmds__FileName_31;
#line 752 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Verbose_32;
#line 752 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OpenResult_34;
#line 752 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_42_42;
#line 752 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_45_45;
#line 1148 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_33_33;

#line 1140 "module_cmds.m"
        {
#line 1140 "module_cmds.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, (MR_String) "", (MR_Integer) 1, &parse_tree__module_cmds__FileName_31);
        }
#line 1143 "module_cmds.m"
        {
#line 1143 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_32);
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          parse_tree__module_cmds__V_45_45 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__FileName_31, (MR_String) "\'...\n");
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          parse_tree__module_cmds__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", parse_tree__module_cmds__V_45_45);
        }
#line 1144 "module_cmds.m"
        {
#line 1144 "module_cmds.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, parse_tree__module_cmds__V_42_42);
        }
#line 1148 "module_cmds.m"
        {
#line 1148 "module_cmds.m"
          mercury__io__remove_file_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__V_33_33);
        }
#line 1149 "module_cmds.m"
        {
#line 1149 "module_cmds.m"
          mercury__io__open_output_4_p_0(parse_tree__module_cmds__FileName_31, &parse_tree__module_cmds__OpenResult_34);
        }
#line 1169 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 1170 "module_cmds.m"
          {
#line 1170 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_51_51;
#line 1170 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Message_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));

#line 1171 "module_cmds.m"
            {
#line 1171 "module_cmds.m"
              parse_tree__module_cmds__V_51_51 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_65);
            }
#line 1171 "module_cmds.m"
            {
#line 1171 "module_cmds.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_51_51);
#line 1171 "module_cmds.m"
              return;
            }
#line 1170 "module_cmds.m"
          }
#line 1169 "module_cmds.m"
        else
#line 1151 "module_cmds.m"
          {
#line 1151 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__OpenResult_34, (MR_Integer) 0)));
#line 1151 "module_cmds.m"
            MR_Word parse_tree__module_cmds__ChmodResult_36;
#line 1151 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_54_54;

#line 1152 "module_cmds.m"
            {
#line 1152 "module_cmds.m"
              parse_tree__module_cmds__write_java_shell_script_5_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__MainModuleName_7, parse_tree__module_cmds__Stream_35);
            }
#line 1153 "module_cmds.m"
            {
#line 1153 "module_cmds.m"
              mercury__io__close_output_3_p_0(parse_tree__module_cmds__Stream_35);
            }
#line 1154 "module_cmds.m"
            {
#line 1154 "module_cmds.m"
              parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", parse_tree__module_cmds__FileName_31);
            }
#line 1154 "module_cmds.m"
            {
#line 1154 "module_cmds.m"
              mercury__io__call_system_4_p_0(parse_tree__module_cmds__V_54_54, &parse_tree__module_cmds__ChmodResult_36);
            }
#line 1164 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__ChmodResult_36)) == (MR_mktag((MR_Integer) 1))))
#line 1165 "module_cmds.m"
              {
#line 1165 "module_cmds.m"
                MR_Word parse_tree__module_cmds__Message_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));
#line 1165 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_59_59;

#line 1166 "module_cmds.m"
                {
#line 1166 "module_cmds.m"
                  parse_tree__module_cmds__V_59_59 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Message_38);
                }
#line 1166 "module_cmds.m"
                {
#line 1166 "module_cmds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", parse_tree__module_cmds__V_59_59);
#line 1166 "module_cmds.m"
                  return;
                }
#line 1165 "module_cmds.m"
              }
#line 1164 "module_cmds.m"
            else
#line 1156 "module_cmds.m"
              {
#line 1156 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__Status_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ChmodResult_36, (MR_Integer) 0)));

#line 1157 "module_cmds.m"
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_37 == (MR_Integer) 0);
#line 1160 "module_cmds.m"
                if (parse_tree__module_cmds__succeeded)
#line 1158 "module_cmds.m"
                  {
#line 1158 "module_cmds.m"
                    *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
#line 1159 "module_cmds.m"
                    {
#line 1159 "module_cmds.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_32, (MR_String) "% done.\n");
#line 1159 "module_cmds.m"
                      return;
                    }
#line 1158 "module_cmds.m"
                  }
#line 1160 "module_cmds.m"
                else
#line 1161 "module_cmds.m"
                  {
#line 1161 "module_cmds.m"
                    {
#line 1161 "module_cmds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_cmds", (MR_String) "predicate \140parse_tree.module_cmds.create_launcher_shell_script\'/6", (MR_String) "chmod exit status != 0");
#line 1161 "module_cmds.m"
                      return;
                    }
#line 1161 "module_cmds.m"
                  }
#line 1156 "module_cmds.m"
              }
#line 1151 "module_cmds.m"
          }
#line 752 "module_cmds.m"
      }
#line 746 "module_cmds.m"
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
#line 698 "module_cmds.m"
  {
#line 698 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 729 "module_cmds.m"
{
#define MR_PROC_LABEL parse_tree__module_cmds__make_command_string_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 729 "module_cmds.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif

#line 5472 "parse_tree.module_cmds.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 729 "module_cmds.m"
	}
parse_tree__module_cmds__succeeded  = SUCCESS_INDICATOR;
}
#line 698 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 696 "module_cmds.m"
      {
#line 696 "module_cmds.m"
        MR_String parse_tree__module_cmds__Quote_7;
#line 696 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_8_8;
#line 696 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_10_10;
#line 696 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_11_11;
#line 696 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_12_12;

#line 693 "module_cmds.m"
        if ((parse_tree__module_cmds__QuoteType_5 == (MR_Integer) 1))
#line 695 "module_cmds.m"
          parse_tree__module_cmds__Quote_7 = (MR_String) " \"";
#line 693 "module_cmds.m"
        else
#line 692 "module_cmds.m"
          parse_tree__module_cmds__Quote_7 = (MR_String) " \'";
#line 697 "module_cmds.m"
        {
#line 697 "module_cmds.m"
          parse_tree__module_cmds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "module_cmds.m"
        }
#line 697 "module_cmds.m"
        {
#line 697 "module_cmds.m"
          parse_tree__module_cmds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 0) = ((MR_Box) (parse_tree__module_cmds__String0_4));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_11_11, 1) = ((MR_Box) (parse_tree__module_cmds__V_12_12));
#line 697 "module_cmds.m"
        }
#line 697 "module_cmds.m"
        {
#line 697 "module_cmds.m"
          parse_tree__module_cmds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 0) = ((MR_Box) (parse_tree__module_cmds__Quote_7));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_10_10, 1) = ((MR_Box) (parse_tree__module_cmds__V_11_11));
#line 697 "module_cmds.m"
        }
#line 697 "module_cmds.m"
        {
#line 697 "module_cmds.m"
          parse_tree__module_cmds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
#line 697 "module_cmds.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_8_8, 1) = ((MR_Box) (parse_tree__module_cmds__V_10_10));
#line 697 "module_cmds.m"
        }
#line 697 "module_cmds.m"
        {
#line 697 "module_cmds.m"
          mercury__string__append_list_2_p_0(parse_tree__module_cmds__V_8_8, parse_tree__module_cmds__String_6);
#line 697 "module_cmds.m"
          return;
        }
#line 696 "module_cmds.m"
      }
#line 698 "module_cmds.m"
    else
#line 699 "module_cmds.m"
      *parse_tree__module_cmds__String_6 = parse_tree__module_cmds__String0_4;
#line 698 "module_cmds.m"
  }
#line 136 "module_cmds.m"
}

#line 668 "module_cmds.m"
static void MR_CALL 
parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1(
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__closure_arg,
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_1,
#line 668 "module_cmds.m"
  MR_Box parse_tree__module_cmds__wrapper_arg_2,
#line 668 "module_cmds.m"
  MR_Box * parse_tree__module_cmds__wrapper_arg_3)
#line 668 "module_cmds.m"
{
#line 668 "module_cmds.m"
  {
#line 668 "module_cmds.m"
    MR_Box parse_tree__module_cmds__closure = parse_tree__module_cmds__closure_arg;

#line 668 "module_cmds.m"
    {
#line 668 "module_cmds.m"
      mercury__io__write_char_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) parse_tree__module_cmds__wrapper_arg_1));
#line 668 "module_cmds.m"
      return;
    }
#line 668 "module_cmds.m"
  }
#line 668 "module_cmds.m"
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
#line 540 "module_cmds.m"
  {
#line 540 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 540 "module_cmds.m"
    MR_Integer parse_tree__module_cmds__OldStatus_16;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_17;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__PrintCommand_18;
#line 540 "module_cmds.m"
    MR_String parse_tree__module_cmds__TmpFile_19;
#line 540 "module_cmds.m"
    MR_String parse_tree__module_cmds__CommandRedirected_20;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_21;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__CommandSucceeded_23;
#line 540 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessedTmpFile_27;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__ProcessOutputSucceeded_33;
#line 540 "module_cmds.m"
    MR_Word parse_tree__module_cmds__TmpFileRes_36;
#line 657 "module_cmds.m"
    MR_String parse_tree__module_cmds__ProcessOutput_26;
#line 685 "module_cmds.m"
    MR_Word parse_tree__module_cmds__V_41_41;

#line 542 "module_cmds.m"
    {
#line 542 "module_cmds.m"
      mercury__io__get_exit_status_3_p_0(&parse_tree__module_cmds__OldStatus_16);
    }
#line 543 "module_cmds.m"
    {
#line 543 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_17);
    }
#line 547 "module_cmds.m"
    if ((parse_tree__module_cmds__Verbosity_11 == (MR_Integer) 0))
#line 545 "module_cmds.m"
      parse_tree__module_cmds__PrintCommand_18 = parse_tree__module_cmds__Verbose_17;
#line 547 "module_cmds.m"
    else
#line 548 "module_cmds.m"
      {
#line 549 "module_cmds.m"
        {
#line 549 "module_cmds.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_9, (MR_Integer) 50, &parse_tree__module_cmds__PrintCommand_18);
        }
#line 548 "module_cmds.m"
      }
#line 557 "module_cmds.m"
    if ((parse_tree__module_cmds__PrintCommand_18 == (MR_Integer) 0))
#line 558 "module_cmds.m"
      {
#line 558 "module_cmds.m"
      }
#line 557 "module_cmds.m"
    else
#line 552 "module_cmds.m"
      {
#line 553 "module_cmds.m"
        {
#line 553 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "% Invoking system command \140");
        }
#line 554 "module_cmds.m"
        {
#line 554 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__Command_12);
        }
#line 555 "module_cmds.m"
        {
#line 555 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\'...\n");
        }
#line 556 "module_cmds.m"
        {
#line 556 "module_cmds.m"
          mercury__io__flush_output_2_p_0();
        }
#line 552 "module_cmds.m"
      }
#line 566 "module_cmds.m"
    {
#line 566 "module_cmds.m"
      mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__TmpFile_19);
    }
#line 567 "module_cmds.m"
    {
#line 567 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 571 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 570 "module_cmds.m"
      parse_tree__module_cmds__CommandRedirected_20 = parse_tree__module_cmds__Command_12;
#line 571 "module_cmds.m"
    else
#line 575 "module_cmds.m"
      {
#line 571 "module_cmds.m"
        {
#line 571 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 575 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 574 "module_cmds.m"
          {
#line 574 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_54_54;

#line 574 "module_cmds.m"
            {
#line 574 "module_cmds.m"
              parse_tree__module_cmds__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) " > ", parse_tree__module_cmds__TmpFile_19);
            }
#line 574 "module_cmds.m"
            {
#line 574 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__Command_12, parse_tree__module_cmds__V_54_54);
            }
#line 574 "module_cmds.m"
          }
#line 575 "module_cmds.m"
        else
#line 576 "module_cmds.m"
          {
#line 576 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_56_56;
#line 576 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_57_57;
#line 576 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_59_59;

#line 577 "module_cmds.m"
            {
#line 577 "module_cmds.m"
              parse_tree__module_cmds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 577 "module_cmds.m"
            }
#line 577 "module_cmds.m"
            {
#line 577 "module_cmds.m"
              parse_tree__module_cmds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 0) = ((MR_Box) ((MR_String) " > "));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_57_57, 1) = ((MR_Box) (parse_tree__module_cmds__V_59_59));
#line 577 "module_cmds.m"
            }
#line 577 "module_cmds.m"
            {
#line 577 "module_cmds.m"
              parse_tree__module_cmds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 0) = ((MR_Box) (parse_tree__module_cmds__Command_12));
#line 577 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_56_56, 1) = ((MR_Box) (parse_tree__module_cmds__V_57_57));
#line 577 "module_cmds.m"
            }
#line 576 "module_cmds.m"
            {
#line 576 "module_cmds.m"
              parse_tree__module_cmds__CommandRedirected_20 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_56_56);
            }
#line 576 "module_cmds.m"
          }
#line 575 "module_cmds.m"
      }
#line 579 "module_cmds.m"
    {
#line 579 "module_cmds.m"
      mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__CommandRedirected_20, &parse_tree__module_cmds__Result_21);
    }
#line 589 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_21)) == (MR_mktag((MR_Integer) 1))))
#line 598 "module_cmds.m"
      {
#line 598 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));
#line 598 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_64_64;

#line 599 "module_cmds.m"
        {
#line 599 "module_cmds.m"
          parse_tree__module_cmds__V_64_64 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_25);
        }
#line 599 "module_cmds.m"
        {
#line 599 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_64_64);
        }
#line 600 "module_cmds.m"
        parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 598 "module_cmds.m"
      }
#line 589 "module_cmds.m"
    else
#line 589 "module_cmds.m"
      {
#line 589 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_21, (MR_Integer) 0)));

#line 589 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__V_140_140)) == (MR_mktag((MR_Integer) 0))))
#line 581 "module_cmds.m"
          {
#line 581 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Status_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_140_140, (MR_Integer) 0)));

#line 582 "module_cmds.m"
            {
#line 582 "module_cmds.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
            }
#line 583 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__Status_22 == (MR_Integer) 0);
#line 585 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 584 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 1;
#line 585 "module_cmds.m"
            else
#line 587 "module_cmds.m"
              parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 581 "module_cmds.m"
          }
#line 589 "module_cmds.m"
        else
#line 590 "module_cmds.m"
          {
#line 590 "module_cmds.m"
            MR_Integer parse_tree__module_cmds__Signal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_140_140, (MR_Integer) 0)));
#line 590 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_68_68;
#line 590 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_71_71;
#line 590 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_72_72;

#line 593 "module_cmds.m"
            {
#line 593 "module_cmds.m"
              libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__Signal_24);
            }
#line 595 "module_cmds.m"
            {
#line 595 "module_cmds.m"
              parse_tree__module_cmds__V_72_72 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__Signal_24);
            }
#line 595 "module_cmds.m"
            {
#line 595 "module_cmds.m"
              parse_tree__module_cmds__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_72_72, (MR_String) ".");
            }
#line 594 "module_cmds.m"
            {
#line 594 "module_cmds.m"
              parse_tree__module_cmds__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_71_71);
            }
#line 594 "module_cmds.m"
            {
#line 594 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_68_68);
            }
#line 596 "module_cmds.m"
            parse_tree__module_cmds__CommandSucceeded_23 = (MR_Integer) 0;
#line 590 "module_cmds.m"
          }
#line 589 "module_cmds.m"
      }
#line 605 "module_cmds.m"
    {
#line 605 "module_cmds.m"
      parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_dotnet_0_p_0();
    }
#line 605 "module_cmds.m"
    parse_tree__module_cmds__succeeded = !(parse_tree__module_cmds__succeeded);
#line 605 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 605 "module_cmds.m"
      {
#line 606 "module_cmds.m"
        parse_tree__module_cmds__succeeded = ((MR_tag((MR_Word) parse_tree__module_cmds__MaybeProcessOutput_13)) == (MR_mktag((MR_Integer) 1)));
#line 606 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 606 "module_cmds.m"
          parse_tree__module_cmds__ProcessOutput_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__MaybeProcessOutput_13, (MR_Integer) 0)));
#line 605 "module_cmds.m"
      }
#line 657 "module_cmds.m"
    if (parse_tree__module_cmds__succeeded)
#line 608 "module_cmds.m"
      {
#line 608 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProcessOutputRedirected_29;
#line 608 "module_cmds.m"
        MR_Word parse_tree__module_cmds__ProcessOutputResult_30;
#line 631 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_31_31;

#line 608 "module_cmds.m"
        {
#line 608 "module_cmds.m"
          mercury__io__make_temp_3_p_0(&parse_tree__module_cmds__ProcessedTmpFile_27);
        }
#line 611 "module_cmds.m"
        {
#line 611 "module_cmds.m"
          parse_tree__module_cmds__succeeded = parse_tree__module_cmds__use_win32_0_p_0();
        }
#line 624 "module_cmds.m"
        if (parse_tree__module_cmds__succeeded)
#line 612 "module_cmds.m"
          {
#line 612 "module_cmds.m"
            MR_Word parse_tree__module_cmds__SystemEnvType_28;

#line 612 "module_cmds.m"
            {
#line 612 "module_cmds.m"
              libs__globals__get_system_env_type_2_p_0(parse_tree__module_cmds__Globals_9, &parse_tree__module_cmds__SystemEnvType_28);
            }
#line 613 "module_cmds.m"
            parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__SystemEnvType_28 == (MR_Integer) 4);
#line 617 "module_cmds.m"
            if (parse_tree__module_cmds__succeeded)
#line 614 "module_cmds.m"
              {
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_78_78;
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_80_80;
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_81_81;
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_83_83;
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_84_84;
#line 614 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_86_86;

#line 616 "module_cmds.m"
                {
#line 616 "module_cmds.m"
                  parse_tree__module_cmds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 616 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 616 "module_cmds.m"
                }
#line 615 "module_cmds.m"
                {
#line 615 "module_cmds.m"
                  parse_tree__module_cmds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 0) = ((MR_Box) ((MR_String) " > "));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_84_84, 1) = ((MR_Box) (parse_tree__module_cmds__V_86_86));
#line 615 "module_cmds.m"
                }
#line 615 "module_cmds.m"
                {
#line 615 "module_cmds.m"
                  parse_tree__module_cmds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_83_83, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_83_83, 1) = ((MR_Box) (parse_tree__module_cmds__V_84_84));
#line 615 "module_cmds.m"
                }
#line 615 "module_cmds.m"
                {
#line 615 "module_cmds.m"
                  parse_tree__module_cmds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_81_81, 0) = ((MR_Box) ((MR_String) " | "));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_81_81, 1) = ((MR_Box) (parse_tree__module_cmds__V_83_83));
#line 615 "module_cmds.m"
                }
#line 615 "module_cmds.m"
                {
#line 615 "module_cmds.m"
                  parse_tree__module_cmds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 615 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_80_80, 1) = ((MR_Box) (parse_tree__module_cmds__V_81_81));
#line 615 "module_cmds.m"
                }
#line 614 "module_cmds.m"
                {
#line 614 "module_cmds.m"
                  parse_tree__module_cmds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 0) = ((MR_Box) ((MR_String) "Get-Content "));
#line 614 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_78_78, 1) = ((MR_Box) (parse_tree__module_cmds__V_80_80));
#line 614 "module_cmds.m"
                }
#line 614 "module_cmds.m"
                {
#line 614 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_78_78);
                }
#line 614 "module_cmds.m"
              }
#line 617 "module_cmds.m"
            else
#line 620 "module_cmds.m"
              {
#line 620 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_90_90;
#line 620 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_91_91;
#line 620 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_93_93;
#line 620 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_94_94;
#line 620 "module_cmds.m"
                MR_Word parse_tree__module_cmds__V_96_96;

#line 621 "module_cmds.m"
                {
#line 621 "module_cmds.m"
                  parse_tree__module_cmds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "module_cmds.m"
                }
#line 621 "module_cmds.m"
                {
#line 621 "module_cmds.m"
                  parse_tree__module_cmds__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_94_94, 0) = ((MR_Box) ((MR_String) " > "));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_94_94, 1) = ((MR_Box) (parse_tree__module_cmds__V_96_96));
#line 621 "module_cmds.m"
                }
#line 621 "module_cmds.m"
                {
#line 621 "module_cmds.m"
                  parse_tree__module_cmds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_93_93, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_93_93, 1) = ((MR_Box) (parse_tree__module_cmds__V_94_94));
#line 621 "module_cmds.m"
                }
#line 621 "module_cmds.m"
                {
#line 621 "module_cmds.m"
                  parse_tree__module_cmds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_91_91, 0) = ((MR_Box) ((MR_String) " < "));
#line 621 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_91_91, 1) = ((MR_Box) (parse_tree__module_cmds__V_93_93));
#line 621 "module_cmds.m"
                }
#line 620 "module_cmds.m"
                {
#line 620 "module_cmds.m"
                  parse_tree__module_cmds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 620 "module_cmds.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_90_90, 1) = ((MR_Box) (parse_tree__module_cmds__V_91_91));
#line 620 "module_cmds.m"
                }
#line 620 "module_cmds.m"
                {
#line 620 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_90_90);
                }
#line 620 "module_cmds.m"
              }
#line 612 "module_cmds.m"
          }
#line 624 "module_cmds.m"
        else
#line 625 "module_cmds.m"
          {
#line 625 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_98_98;
#line 625 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_99_99;
#line 625 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_101_101;
#line 625 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_102_102;
#line 625 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_104_104;

#line 626 "module_cmds.m"
            {
#line 626 "module_cmds.m"
              parse_tree__module_cmds__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessedTmpFile_27));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_cmds_scalar_common_1[2])));
#line 626 "module_cmds.m"
            }
#line 626 "module_cmds.m"
            {
#line 626 "module_cmds.m"
              parse_tree__module_cmds__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 0) = ((MR_Box) ((MR_String) " > "));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_102_102, 1) = ((MR_Box) (parse_tree__module_cmds__V_104_104));
#line 626 "module_cmds.m"
            }
#line 626 "module_cmds.m"
            {
#line 626 "module_cmds.m"
              parse_tree__module_cmds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_101_101, 0) = ((MR_Box) (parse_tree__module_cmds__TmpFile_19));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_101_101, 1) = ((MR_Box) (parse_tree__module_cmds__V_102_102));
#line 626 "module_cmds.m"
            }
#line 626 "module_cmds.m"
            {
#line 626 "module_cmds.m"
              parse_tree__module_cmds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 0) = ((MR_Box) ((MR_String) " < "));
#line 626 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_99_99, 1) = ((MR_Box) (parse_tree__module_cmds__V_101_101));
#line 626 "module_cmds.m"
            }
#line 625 "module_cmds.m"
            {
#line 625 "module_cmds.m"
              parse_tree__module_cmds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_98_98, 0) = ((MR_Box) (parse_tree__module_cmds__ProcessOutput_26));
#line 625 "module_cmds.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_98_98, 1) = ((MR_Box) (parse_tree__module_cmds__V_99_99));
#line 625 "module_cmds.m"
            }
#line 625 "module_cmds.m"
            {
#line 625 "module_cmds.m"
              parse_tree__module_cmds__ProcessOutputRedirected_29 = mercury__string__append_list_1_f_0(parse_tree__module_cmds__V_98_98);
            }
#line 625 "module_cmds.m"
          }
#line 629 "module_cmds.m"
        {
#line 629 "module_cmds.m"
          mercury__io__call_system_return_signal_4_p_0(parse_tree__module_cmds__ProcessOutputRedirected_29, &parse_tree__module_cmds__ProcessOutputResult_30);
        }
#line 631 "module_cmds.m"
        {
#line 631 "module_cmds.m"
          mercury__io__remove_file_4_p_0(parse_tree__module_cmds__TmpFile_19, &parse_tree__module_cmds__V_31_31);
        }
#line 642 "module_cmds.m"
        if (((MR_tag((MR_Word) parse_tree__module_cmds__ProcessOutputResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 652 "module_cmds.m"
          {
#line 652 "module_cmds.m"
            MR_Word parse_tree__module_cmds__ProcessOutputError_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));
#line 652 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_110_110;

#line 653 "module_cmds.m"
            {
#line 653 "module_cmds.m"
              parse_tree__module_cmds__V_110_110 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__ProcessOutputError_35);
            }
#line 653 "module_cmds.m"
            {
#line 653 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_110_110);
            }
#line 655 "module_cmds.m"
            parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 652 "module_cmds.m"
          }
#line 642 "module_cmds.m"
        else
#line 642 "module_cmds.m"
          {
#line 642 "module_cmds.m"
            MR_Word parse_tree__module_cmds__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__ProcessOutputResult_30, (MR_Integer) 0)));

#line 642 "module_cmds.m"
            if (((MR_tag((MR_Word) parse_tree__module_cmds__V_141_141)) == (MR_mktag((MR_Integer) 0))))
#line 633 "module_cmds.m"
              {
#line 633 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputStatus_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_141_141, (MR_Integer) 0)));

#line 634 "module_cmds.m"
                {
#line 634 "module_cmds.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__PrintCommand_18, (MR_String) "% done.\n");
                }
#line 635 "module_cmds.m"
                parse_tree__module_cmds__succeeded = (parse_tree__module_cmds__ProcessOutputStatus_32 == (MR_Integer) 0);
#line 637 "module_cmds.m"
                if (parse_tree__module_cmds__succeeded)
#line 636 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 637 "module_cmds.m"
                else
#line 640 "module_cmds.m"
                  parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 633 "module_cmds.m"
              }
#line 642 "module_cmds.m"
            else
#line 643 "module_cmds.m"
              {
#line 643 "module_cmds.m"
                MR_Integer parse_tree__module_cmds__ProcessOutputSignal_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__V_141_141, (MR_Integer) 0)));
#line 643 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_114_114;
#line 643 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_117_117;
#line 643 "module_cmds.m"
                MR_String parse_tree__module_cmds__V_118_118;

#line 646 "module_cmds.m"
                {
#line 646 "module_cmds.m"
                  libs__process_util__raise_signal_3_p_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 649 "module_cmds.m"
                {
#line 649 "module_cmds.m"
                  parse_tree__module_cmds__V_118_118 = mercury__string__int_to_string_1_f_0(parse_tree__module_cmds__ProcessOutputSignal_34);
                }
#line 649 "module_cmds.m"
                {
#line 649 "module_cmds.m"
                  parse_tree__module_cmds__V_117_117 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__V_118_118, (MR_String) ".");
                }
#line 647 "module_cmds.m"
                {
#line 647 "module_cmds.m"
                  parse_tree__module_cmds__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", parse_tree__module_cmds__V_117_117);
                }
#line 647 "module_cmds.m"
                {
#line 647 "module_cmds.m"
                  libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_114_114);
                }
#line 650 "module_cmds.m"
                parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 0;
#line 643 "module_cmds.m"
              }
#line 642 "module_cmds.m"
          }
#line 608 "module_cmds.m"
      }
#line 657 "module_cmds.m"
    else
#line 658 "module_cmds.m"
      {
#line 658 "module_cmds.m"
        parse_tree__module_cmds__ProcessOutputSucceeded_33 = (MR_Integer) 1;
#line 659 "module_cmds.m"
        parse_tree__module_cmds__ProcessedTmpFile_27 = parse_tree__module_cmds__TmpFile_19;
#line 658 "module_cmds.m"
      }
#line 661 "module_cmds.m"
    {
#line 661 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_14 = mercury__bool__and_2_f_0(parse_tree__module_cmds__CommandSucceeded_23, parse_tree__module_cmds__ProcessOutputSucceeded_33);
    }
#line 665 "module_cmds.m"
    {
#line 665 "module_cmds.m"
      mercury__io__open_input_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__TmpFileRes_36);
    }
#line 679 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__TmpFileRes_36)) == (MR_mktag((MR_Integer) 1))))
#line 680 "module_cmds.m"
      {
#line 680 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileError_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 680 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_124_124;
#line 680 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_127_127;

#line 682 "module_cmds.m"
        {
#line 682 "module_cmds.m"
          parse_tree__module_cmds__V_127_127 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileError_40);
        }
#line 681 "module_cmds.m"
        {
#line 681 "module_cmds.m"
          parse_tree__module_cmds__V_124_124 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", parse_tree__module_cmds__V_127_127);
        }
#line 681 "module_cmds.m"
        {
#line 681 "module_cmds.m"
          libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_124_124);
        }
#line 680 "module_cmds.m"
      }
#line 679 "module_cmds.m"
    else
#line 667 "module_cmds.m"
      {
#line 667 "module_cmds.m"
        MR_Word parse_tree__module_cmds__TmpFileStream_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__TmpFileRes_36, (MR_Integer) 0)));
#line 667 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Res_38;
#line 667 "module_cmds.m"
        MR_Word parse_tree__module_cmds__V_128_128;

#line 668 "module_cmds.m"
        {
#line 668 "module_cmds.m"
          parse_tree__module_cmds__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 668 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_128_128, 0) = ((MR_Box) (&parse_tree__module_cmds_scalar_common_2[1]));
#line 668 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_128_128, 1) = ((MR_Box) (parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0_1));
#line 668 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 668 "module_cmds.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_cmds__V_128_128, 3) = ((MR_Box) (parse_tree__module_cmds__ErrorStream_10));
#line 668 "module_cmds.m"
        }
#line 668 "module_cmds.m"
        {
#line 668 "module_cmds.m"
          mercury__io__input_stream_foldl_io_5_p_0(parse_tree__module_cmds__TmpFileStream_37, parse_tree__module_cmds__V_128_128, &parse_tree__module_cmds__Res_38);
        }
#line 672 "module_cmds.m"
        if ((parse_tree__module_cmds__Res_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "module_cmds.m"
          {
#line 671 "module_cmds.m"
          }
#line 672 "module_cmds.m"
        else
#line 673 "module_cmds.m"
          {
#line 673 "module_cmds.m"
            MR_Word parse_tree__module_cmds__TmpFileReadError_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Res_38, (MR_Integer) 0)));
#line 673 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_130_130;
#line 673 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_133_133;

#line 675 "module_cmds.m"
            {
#line 675 "module_cmds.m"
              parse_tree__module_cmds__V_133_133 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__TmpFileReadError_39);
            }
#line 674 "module_cmds.m"
            {
#line 674 "module_cmds.m"
              parse_tree__module_cmds__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "error reading command output: ", parse_tree__module_cmds__V_133_133);
            }
#line 674 "module_cmds.m"
            {
#line 674 "module_cmds.m"
              libs__file_util__report_error_to_stream_4_p_0(parse_tree__module_cmds__ErrorStream_10, parse_tree__module_cmds__V_130_130);
            }
#line 673 "module_cmds.m"
          }
#line 678 "module_cmds.m"
        {
#line 678 "module_cmds.m"
          mercury__io__close_input_3_p_0(parse_tree__module_cmds__TmpFileStream_37);
        }
#line 667 "module_cmds.m"
      }
#line 685 "module_cmds.m"
    {
#line 685 "module_cmds.m"
      mercury__io__remove_file_4_p_0(parse_tree__module_cmds__ProcessedTmpFile_27, &parse_tree__module_cmds__V_41_41);
    }
#line 686 "module_cmds.m"
    {
#line 686 "module_cmds.m"
      mercury__io__set_exit_status_3_p_0(parse_tree__module_cmds__OldStatus_16);
#line 686 "module_cmds.m"
      return;
    }
#line 540 "module_cmds.m"
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
#line 535 "module_cmds.m"
  {
#line 535 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 536 "module_cmds.m"
    {
#line 536 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_8, parse_tree__module_cmds__ErrorStream_9, parse_tree__module_cmds__Verbosity_10, parse_tree__module_cmds__Command_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_12);
#line 536 "module_cmds.m"
      return;
    }
#line 535 "module_cmds.m"
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
#line 528 "module_cmds.m"
  {
#line 528 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;

#line 528 "module_cmds.m"
    if ((parse_tree__module_cmds__HeadVar__1_1 == (MR_Integer) 0))
#line 529 "module_cmds.m"
      {
#line 530 "module_cmds.m"
        {
#line 530 "module_cmds.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 530 "module_cmds.m"
          return;
        }
#line 529 "module_cmds.m"
      }
#line 528 "module_cmds.m"
    else
#line 528 "module_cmds.m"
      {
#line 528 "module_cmds.m"
      }
#line 528 "module_cmds.m"
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
#line 508 "module_cmds.m"
  {
#line 508 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 508 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Verbose_8;
#line 508 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_9;
#line 508 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_16_16;
#line 508 "module_cmds.m"
    MR_String parse_tree__module_cmds__V_19_19;

#line 509 "module_cmds.m"
    {
#line 509 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_5, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_8);
    }
#line 511 "module_cmds.m"
    {
#line 511 "module_cmds.m"
      parse_tree__module_cmds__V_19_19 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, (MR_String) "\'... ");
    }
#line 510 "module_cmds.m"
    {
#line 510 "module_cmds.m"
      parse_tree__module_cmds__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Touching \140", parse_tree__module_cmds__V_19_19);
    }
#line 510 "module_cmds.m"
    {
#line 510 "module_cmds.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, parse_tree__module_cmds__V_16_16);
    }
#line 512 "module_cmds.m"
    {
#line 512 "module_cmds.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__module_cmds__Verbose_8);
    }
#line 513 "module_cmds.m"
    {
#line 513 "module_cmds.m"
      mercury__io__open_output_4_p_0(parse_tree__module_cmds__OutputFileName_6, &parse_tree__module_cmds__Result_9);
    }
#line 519 "module_cmds.m"
    if (((MR_tag((MR_Word) parse_tree__module_cmds__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 520 "module_cmds.m"
      {
#line 520 "module_cmds.m"
        MR_Word parse_tree__module_cmds__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));
#line 520 "module_cmds.m"
        MR_String parse_tree__module_cmds__IOErrorMessage_12;
#line 520 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_23_23;
#line 520 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_26_26;
#line 520 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_27_27;
#line 520 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_29_29;

#line 521 "module_cmds.m"
        {
#line 521 "module_cmds.m"
          mercury__io__error_message_2_p_0(parse_tree__module_cmds__IOError_11, &parse_tree__module_cmds__IOErrorMessage_12);
        }
#line 523 "module_cmds.m"
        {
#line 523 "module_cmds.m"
          parse_tree__module_cmds__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__IOErrorMessage_12, (MR_String) ".\n");
        }
#line 523 "module_cmds.m"
        {
#line 523 "module_cmds.m"
          parse_tree__module_cmds__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", parse_tree__module_cmds__V_29_29);
        }
#line 522 "module_cmds.m"
        {
#line 522 "module_cmds.m"
          parse_tree__module_cmds__V_26_26 = mercury__string__f_43_43_2_f_0(parse_tree__module_cmds__OutputFileName_6, parse_tree__module_cmds__V_27_27);
        }
#line 522 "module_cmds.m"
        {
#line 522 "module_cmds.m"
          parse_tree__module_cmds__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\nError opening \140", parse_tree__module_cmds__V_26_26);
        }
#line 522 "module_cmds.m"
        {
#line 522 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_23_23);
#line 522 "module_cmds.m"
          return;
        }
#line 520 "module_cmds.m"
      }
#line 519 "module_cmds.m"
    else
#line 515 "module_cmds.m"
      {
#line 515 "module_cmds.m"
        MR_Word parse_tree__module_cmds__OutputStream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_cmds__Result_9, (MR_Integer) 0)));

#line 516 "module_cmds.m"
        {
#line 516 "module_cmds.m"
          mercury__io__write_string_4_p_0(parse_tree__module_cmds__OutputStream_10, (MR_String) "\n");
        }
#line 517 "module_cmds.m"
        {
#line 517 "module_cmds.m"
          mercury__io__close_output_3_p_0(parse_tree__module_cmds__OutputStream_10);
        }
#line 518 "module_cmds.m"
        {
#line 518 "module_cmds.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__module_cmds__Verbose_8, (MR_String) " done.\n");
#line 518 "module_cmds.m"
          return;
        }
#line 515 "module_cmds.m"
      }
#line 508 "module_cmds.m"
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
#line 503 "module_cmds.m"
  {
#line 503 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 503 "module_cmds.m"
    MR_String parse_tree__module_cmds__OutputFileName_10;

#line 504 "module_cmds.m"
    {
#line 504 "module_cmds.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__ModuleName_7, parse_tree__module_cmds__Ext_8, (MR_Integer) 0, &parse_tree__module_cmds__OutputFileName_10);
    }
#line 506 "module_cmds.m"
    {
#line 506 "module_cmds.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(parse_tree__module_cmds__Globals_6, parse_tree__module_cmds__OutputFileName_10);
#line 506 "module_cmds.m"
      return;
    }
#line 503 "module_cmds.m"
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
#line 459 "module_cmds.m"
  {
#line 459 "module_cmds.m"
    MR_bool parse_tree__module_cmds__succeeded;
#line 459 "module_cmds.m"
    MR_Word parse_tree__module_cmds__UseSymLinks_12;

#line 460 "module_cmds.m"
    {
#line 460 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 626, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 482 "module_cmds.m"
    if ((parse_tree__module_cmds__UseSymLinks_12 == (MR_Integer) 0))
#line 483 "module_cmds.m"
      {
#line 483 "module_cmds.m"
        MR_String parse_tree__module_cmds__Command_61;
#line 483 "module_cmds.m"
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
#line 536 "module_cmds.m"
        {
#line 536 "module_cmds.m"
          parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_62, (MR_Integer) 0, parse_tree__module_cmds__Command_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_cmds__Succeeded_10);
        }
#line 487 "module_cmds.m"
        if ((*parse_tree__module_cmds__Succeeded_10 == (MR_Integer) 0))
#line 488 "module_cmds.m"
          {
#line 488 "module_cmds.m"
            MR_String parse_tree__module_cmds__ProgName_51;

#line 489 "module_cmds.m"
            {
#line 489 "module_cmds.m"
              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_51);
            }
#line 490 "module_cmds.m"
            {
#line 490 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_51);
            }
#line 491 "module_cmds.m"
            {
#line 491 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) ": error copying directory");
            }
#line 492 "module_cmds.m"
            {
#line 492 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) " \140");
            }
#line 493 "module_cmds.m"
            {
#line 493 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
            }
#line 494 "module_cmds.m"
            {
#line 494 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to \140");
            }
#line 495 "module_cmds.m"
            {
#line 495 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
            }
#line 496 "module_cmds.m"
            {
#line 496 "module_cmds.m"
              mercury__io__nl_2_p_0();
            }
#line 497 "module_cmds.m"
            {
#line 497 "module_cmds.m"
              mercury__io__flush_output_2_p_0();
#line 497 "module_cmds.m"
              return;
            }
#line 488 "module_cmds.m"
          }
#line 487 "module_cmds.m"
        else
#line 486 "module_cmds.m"
          {
#line 486 "module_cmds.m"
          }
#line 483 "module_cmds.m"
      }
#line 482 "module_cmds.m"
    else
#line 462 "module_cmds.m"
      {
#line 462 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Result_13;

#line 463 "module_cmds.m"
        {
#line 463 "module_cmds.m"
          mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceDirName_8, parse_tree__module_cmds__DestinationDirName_9, &parse_tree__module_cmds__Result_13);
        }
#line 467 "module_cmds.m"
        if ((parse_tree__module_cmds__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "module_cmds.m"
          *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 467 "module_cmds.m"
        else
#line 468 "module_cmds.m"
          {
#line 468 "module_cmds.m"
            MR_Word parse_tree__module_cmds__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_13, (MR_Integer) 0)));
#line 468 "module_cmds.m"
            MR_String parse_tree__module_cmds__ProgName_15;
#line 468 "module_cmds.m"
            MR_String parse_tree__module_cmds__V_47_47;

#line 469 "module_cmds.m"
            *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 470 "module_cmds.m"
            {
#line 470 "module_cmds.m"
              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_15);
            }
#line 471 "module_cmds.m"
            {
#line 471 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_15);
            }
#line 472 "module_cmds.m"
            {
#line 472 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) ": error linking");
            }
#line 473 "module_cmds.m"
            {
#line 473 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) " \140");
            }
#line 474 "module_cmds.m"
            {
#line 474 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceDirName_8);
            }
#line 475 "module_cmds.m"
            {
#line 475 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to \140");
            }
#line 476 "module_cmds.m"
            {
#line 476 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationDirName_9);
            }
#line 477 "module_cmds.m"
            {
#line 477 "module_cmds.m"
              mercury__io__write_string_3_p_0((MR_String) "\': ");
            }
#line 478 "module_cmds.m"
            {
#line 478 "module_cmds.m"
              parse_tree__module_cmds__V_47_47 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_14);
            }
#line 478 "module_cmds.m"
            {
#line 478 "module_cmds.m"
              mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_47_47);
            }
#line 479 "module_cmds.m"
            {
#line 479 "module_cmds.m"
              mercury__io__nl_2_p_0();
            }
#line 480 "module_cmds.m"
            {
#line 480 "module_cmds.m"
              mercury__io__flush_output_2_p_0();
#line 480 "module_cmds.m"
              return;
            }
#line 468 "module_cmds.m"
          }
#line 462 "module_cmds.m"
      }
#line 459 "module_cmds.m"
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
    MR_String parse_tree__module_cmds__LinkOrCopy_13;
#line 427 "module_cmds.m"
    MR_Word parse_tree__module_cmds__Result_14;

#line 428 "module_cmds.m"
    {
#line 428 "module_cmds.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 626, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 433 "module_cmds.m"
    if ((parse_tree__module_cmds__UseSymLinks_12 == (MR_Integer) 0))
#line 434 "module_cmds.m"
      {
#line 435 "module_cmds.m"
        parse_tree__module_cmds__LinkOrCopy_13 = (MR_String) "copying";
#line 436 "module_cmds.m"
        {
#line 436 "module_cmds.m"
          parse_tree__module_cmds__copy_file_6_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_14);
        }
#line 434 "module_cmds.m"
      }
#line 433 "module_cmds.m"
    else
#line 430 "module_cmds.m"
      {
#line 431 "module_cmds.m"
        parse_tree__module_cmds__LinkOrCopy_13 = (MR_String) "linking";
#line 432 "module_cmds.m"
        {
#line 432 "module_cmds.m"
          mercury__io__make_symlink_5_p_0(parse_tree__module_cmds__SourceFileName_8, parse_tree__module_cmds__DestinationFileName_9, &parse_tree__module_cmds__Result_14);
        }
#line 430 "module_cmds.m"
      }
#line 441 "module_cmds.m"
    if ((parse_tree__module_cmds__Result_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 1;
#line 441 "module_cmds.m"
    else
#line 442 "module_cmds.m"
      {
#line 442 "module_cmds.m"
        MR_Word parse_tree__module_cmds__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_cmds__Result_14, (MR_Integer) 0)));
#line 442 "module_cmds.m"
        MR_String parse_tree__module_cmds__ProgName_16;
#line 442 "module_cmds.m"
        MR_String parse_tree__module_cmds__V_36_36;

#line 443 "module_cmds.m"
        *parse_tree__module_cmds__Succeeded_10 = (MR_Integer) 0;
#line 444 "module_cmds.m"
        {
#line 444 "module_cmds.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__module_cmds__ProgName_16);
        }
#line 445 "module_cmds.m"
        {
#line 445 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__ProgName_16);
        }
#line 446 "module_cmds.m"
        {
#line 446 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) ": error ");
        }
#line 447 "module_cmds.m"
        {
#line 447 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__LinkOrCopy_13);
        }
#line 448 "module_cmds.m"
        {
#line 448 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) " \140");
        }
#line 449 "module_cmds.m"
        {
#line 449 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__SourceFileName_8);
        }
#line 450 "module_cmds.m"
        {
#line 450 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\' to \140");
        }
#line 451 "module_cmds.m"
        {
#line 451 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__DestinationFileName_9);
        }
#line 452 "module_cmds.m"
        {
#line 452 "module_cmds.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 453 "module_cmds.m"
        {
#line 453 "module_cmds.m"
          parse_tree__module_cmds__V_36_36 = mercury__io__error_message_1_f_0(parse_tree__module_cmds__Error_15);
        }
#line 453 "module_cmds.m"
        {
#line 453 "module_cmds.m"
          mercury__io__write_string_3_p_0(parse_tree__module_cmds__V_36_36);
        }
#line 454 "module_cmds.m"
        {
#line 454 "module_cmds.m"
          mercury__io__nl_2_p_0();
        }
#line 455 "module_cmds.m"
        {
#line 455 "module_cmds.m"
          mercury__io__flush_output_2_p_0();
#line 455 "module_cmds.m"
          return;
        }
#line 442 "module_cmds.m"
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
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_7, (MR_Integer) 626, &parse_tree__module_cmds__UseSymLinks_12);
    }
#line 421 "module_cmds.m"
    if ((parse_tree__module_cmds__UseSymLinks_12 == (MR_Integer) 0))
#line 423 "module_cmds.m"
      *parse_tree__module_cmds__Result_10 = (MR_Integer) 0;
#line 421 "module_cmds.m"
    else
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
#line 536 "module_cmds.m"
    {
#line 536 "module_cmds.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(parse_tree__module_cmds__Globals_7, parse_tree__module_cmds__OutputStream_13, (MR_Integer) 0, parse_tree__module_cmds__Command_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_cmds__Succeeded_14);
    }
#line 382 "module_cmds.m"
    if ((parse_tree__module_cmds__Succeeded_14 == (MR_Integer) 0))
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
    else
#line 381 "module_cmds.m"
      *parse_tree__module_cmds__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
#line 7294 "parse_tree.module_cmds.c"
    if ((parse_tree__module_cmds__Result_20 == (MR_Integer) 2))
#line 7296 "parse_tree.module_cmds.c"
      {
#line 225 "module_cmds.m"
        {
#line 225 "module_cmds.m"
          libs__file_util__report_error_3_p_0((MR_String) "problem updating interface files.");
#line 225 "module_cmds.m"
          return;
        }
#line 7305 "parse_tree.module_cmds.c"
      }
#line 7307 "parse_tree.module_cmds.c"
    else
#line 227 "module_cmds.m"
      {
#line 227 "module_cmds.m"
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
    if ((parse_tree__module_cmds__Result_10 == (MR_Integer) 2))
#line 239 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 0;
#line 237 "module_cmds.m"
    else
#line 236 "module_cmds.m"
      *parse_tree__module_cmds__Succeeded_8 = (MR_Integer) 1;
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
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_cmds__Globals_6, (MR_Integer) 44, &parse_tree__module_cmds__Verbose_10);
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
                    if ((parse_tree__module_cmds__V_69_69 == (MR_Integer) 0))
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
                    else
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
