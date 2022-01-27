/*
** Automatically generated from `compile_target_code.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_deps_file.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "backend_libs.compile_target_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 145 "backend_libs.compile_target_code.c"
static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 148 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0;

#line 151 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1;

#line 154 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2;

#line 157 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3];

#line 160 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3];

#line 163 "backend_libs.compile_target_code.c"
static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3];

#line 166 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0;

#line 169 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1;

#line 172 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2;

#line 175 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3;

#line 178 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4;

#line 181 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5;

#line 184 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6;

#line 187 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7;

#line 190 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8;

#line 193 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0[9];

#line 196 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[9];

#line 199 "backend_libs.compile_target_code.c"
static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[9];

#line 202 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0;

#line 205 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1;

#line 208 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_2;

#line 211 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[3];

#line 214 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[3];

#line 217 "backend_libs.compile_target_code.c"
static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[3];

#line 220 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
#line 223 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 225 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

#line 228 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
#line 231 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 233 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 235 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

#line 238 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
#line 241 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 243 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

#line 246 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
#line 249 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 251 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 253 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

#line 256 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
#line 259 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 261 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

#line 264 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
#line 267 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 269 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 271 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

#line 274 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
#line 277 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 279 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2);

#line 282 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
#line 285 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 287 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 289 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3);

#line 1639 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_30_30,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_31_31,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
#line 1639 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14);

#line 1639 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_30_30,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_31_31,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_32_32,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__V_33_33,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
#line 1639 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14);

#line 3097 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 3097 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ErlangArchiveFileName_12,
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_13,
#line 3097 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

#line 2331 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2331__1_2_f_0(
#line 2331 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_9,
#line 2331 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__2_19);

#line 1468 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1468__1_8_p_0(
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_26,
#line 1468 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_28,
#line 1468 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__5_65,
#line 1468 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__6_66);

#line 1437 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_17,
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__StdLibDir_18,
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_36);

#line 993 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__993__1_1_f_0(
#line 993 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_11);

#line 3263 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3263__1_5_p_0(
#line 3263 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 3263 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_23,
#line 3263 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__HeadVar__3_24);

#line 1385 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1385__1_2_p_0(
#line 1385 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_43,
#line 1385 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__2_44);

#line 1511 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_erlang_program_init_file__1511__1_6_p_0(
#line 1511 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 1511 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 1511 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_58,
#line 1511 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_59);

#line 1181 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1181__1_1_f_0(
#line 1181 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_52);

#line 378 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__378__1_6_p_0(
#line 378 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 378 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Prefix_26,
#line 378 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_79,
#line 378 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_80);

#line 371 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__371__1_2_f_0(
#line 371 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Imports_10,
#line 371 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_68);

#line 363 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__363__1_1_f_0(
#line 363 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_59);

#line 1687 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
#line 1687 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3);

#line 1687 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2);

#line 1643 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
#line 1643 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3);

#line 1643 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2);

#line 3642 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
#line 3642 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FullArch_2);

#line 3488 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_9_p_0(
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_12,
#line 3488 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Cmd_13,
#line 3488 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_14,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeProcessOutput_15,
#line 3488 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

#line 3479 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_11,
#line 3479 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Cmd_12,
#line 3479 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_13,
#line 3479 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

#line 3363 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
#line 3363 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 3363 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Basename_6);

#line 3247 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
#line 3247 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3247 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 3247 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3247 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_4);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 3232 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
#line 3232 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Strings_6,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Prefix_7,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Suffix_8,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Separator_9,
#line 3232 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Result_10);

#line 3214 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
#line 3214 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__2_2,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__4_4,
#line 3214 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__HeadVar__5_5);

#line 3120 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 3120 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__4_4,
#line 3120 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__5_5);

#line 3078 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
#line 3078 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6,
#line 3078 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ClassSubDir_7,
#line 3078 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ClassFileName_8);

#line 3048 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_java_archive_7_p_0_1(
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 3048 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

#line 3023 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_java_archive_7_p_0(
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 3023 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__JarFileName_10,
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_11,
#line 3023 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12);

#line 3014 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 3014 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 3005 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
#line 3005 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_6,
#line 3005 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ExeFileName_7,
#line 3005 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_8);

#line 2970 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
#line 2970 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 2970 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 2970 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3);

#line 2959 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 2959 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3);

#line 2837 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
#line 2837 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2837 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2826 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
#line 2826 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__OutputFileName0_14,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__SourceList0_15,
#line 2826 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2762 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0(
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 2762 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibFileName_11,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Quote_12,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_13,
#line 2762 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14);

#line 2703 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MercuryLibDirs_10,
#line 2703 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibName_11,
#line 2703 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__LinkerOpt_12,
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_27,
#line 2703 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_28);

#line 2680 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
#line 2680 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3);

#line 2649 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
#line 2649 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2649 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
#line 2649 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__OutputOpt_6);

#line 2630 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
#line 2630 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileNameA_6,
#line 2630 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileNameB_7,
#line 2630 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__SameTimestamp_8);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2624 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
#line 2624 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2624 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FrameworkOpts_4);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2617 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
#line 2617 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2617 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FrameworkDirs_4);

#line 2544 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_4_p_0(
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ObjExt_5,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__PicObjExt_6,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LinkWithPicObjExt_7,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileName_8);

#line 2541 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
#line 2541 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2541 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2532 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
#line 2532 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 2532 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Files_6,
#line 2532 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__ObjectFiles_7,
#line 2532 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__NonObjectFiles_8);

#line 2480 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
#line 2480 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2480 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
#line 2480 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__ResCmdLinkOpts_6);

#line 2468 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
#line 2468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2468 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__UseThreadLibs_4);

#line 2415 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
#line 2415 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2415 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_5,
#line 2415 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__SystemLibs_6);

#line 2400 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2380 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_6,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_7,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__RpathFlagOpt_8,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__RpathSepOpt_9,
#line 2380 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__RpathOpts_10);

#line 2335 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_5,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_6);

#line 2331 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
#line 2331 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2331 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 2324 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
#line 2324 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 2324 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MaybeLinkLibraries_6);

#line 2293 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
#line 2293 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2293 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_10,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__StdLibDir_11,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_12,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibExt_13,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Name_14,
#line 2293 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__StaticArg_15,
#line 2293 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__SharedArg_16);

#line 2128 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
#line 2128 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2128 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_5,
#line 2128 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__StdLibs_6);

#line 1843 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_13,
#line 1843 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__OutputFileName_14,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectsList_15,
#line 1843 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

#line 1536 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1536 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 1536 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

#line 1517 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_14,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_15,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_16,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_17,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_18,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__TargetExt_19,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__StdInitFileNames_20,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_21,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_22,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ModuleNameOption_23,
#line 1517 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MaybeInitTargetFile_24);

#line 1426 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_12,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_13,
#line 1426 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14);

#line 1318 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__InitFileStream_11,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_12,
#line 1318 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_13,
#line 1318 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_14,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__FileNames_15,
#line 1318 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MkInitOK_16);

#line 1311 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 1311 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Ext_9,
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MkDir_10,
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_11,
#line 1311 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FileName_12);

#line 1237 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1237 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 1237 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

#line 1225 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_12,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__AllModules_13,
#line 1225 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__TargetExt_14,
#line 1225 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_15,
#line 1225 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16);

#line 1136 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void);

#line 998 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
#line 998 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 998 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Flags_4);

#line 993 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 988 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
#line 988 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 988 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__InclOpt_4);

#line 634 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_grade_defines_3_p_0(
#line 634 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 634 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_5,
#line 634 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__GradeDefines_6);

#line 425 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
#line 425 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 425 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_5,
#line 425 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__AllCFlags_6);

#line 2400 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 993 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 3271 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
#line 3271 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3271 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 3263 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3263 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 3263 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

#line 1385 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0_1(
#line 1385 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1385 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1385 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2);

#line 1181 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
#line 1181 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1181 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 378 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 378 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 378 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4);

#line 371 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
#line 371 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 371 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);

#line 363 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
#line 363 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 363 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[10][2];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[3][5];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[14][3];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[1][9];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][1];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[3][8];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[1][10];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[1][11];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[3][7];




static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "_H */\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
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
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[3][5] = {
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_erlang_file_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (backend_libs__compile_target_code__link_module_list_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__output_library_link_flags_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) (backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_framework_directories_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__get_frameworks_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__create_archive_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[2])),
    ((MR_Box) (backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_9[1][11] = {
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1596 "backend_libs.compile_target_code.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1604 "backend_libs.compile_target_code.c"
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

#line 1616 "backend_libs.compile_target_code.c"
const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "compile_init_file_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1637 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0 = {
  (MR_String) "is_as_new_as",
  (MR_Integer) 0
};

#line 1643 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1 = {
  (MR_String) "is_not_as_new_as",
  (MR_Integer) 1
};

#line 1649 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2 = {
  (MR_String) "missing_timestamp",
  (MR_Integer) 2
};

#line 1655 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

#line 1662 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2
};

#line 1669 "backend_libs.compile_target_code.c"
static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1676 "backend_libs.compile_target_code.c"
const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_is_as_new_as_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "is_as_new_as",
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0
  },
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0
};

#line 1697 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0 = {
  (MR_String) "executable",
  (MR_Integer) 0
};

#line 1703 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1 = {
  (MR_String) "static_library",
  (MR_Integer) 1
};

#line 1709 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2 = {
  (MR_String) "shared_library",
  (MR_Integer) 2
};

#line 1715 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3 = {
  (MR_String) "csharp_executable",
  (MR_Integer) 3
};

#line 1721 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4 = {
  (MR_String) "csharp_library",
  (MR_Integer) 4
};

#line 1727 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5 = {
  (MR_String) "java_launcher",
  (MR_Integer) 5
};

#line 1733 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6 = {
  (MR_String) "java_archive",
  (MR_Integer) 6
};

#line 1739 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7 = {
  (MR_String) "erlang_launcher",
  (MR_Integer) 7
};

#line 1745 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8 = {
  (MR_String) "erlang_archive",
  (MR_Integer) 8
};

#line 1751 "backend_libs.compile_target_code.c"
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

#line 1764 "backend_libs.compile_target_code.c"
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

#line 1777 "backend_libs.compile_target_code.c"
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

#line 1790 "backend_libs.compile_target_code.c"
const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "linked_target_type",
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0
  },
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0
};

#line 1811 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0 = {
  (MR_String) "pic",
  (MR_Integer) 0
};

#line 1817 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1 = {
  (MR_String) "link_with_pic",
  (MR_Integer) 1
};

#line 1823 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_2 = {
  (MR_String) "non_pic",
  (MR_Integer) 2
};

#line 1829 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_2
};

#line 1836 "backend_libs.compile_target_code.c"
static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[3] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0
};

#line 1843 "backend_libs.compile_target_code.c"
static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1850 "backend_libs.compile_target_code.c"
const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____pic_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____pic_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "pic",
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0
  },
  {
    backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0
};

#line 1871 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001(
#line 1874 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1876 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
#line 1878 "backend_libs.compile_target_code.c"
{
#line 1880 "backend_libs.compile_target_code.c"
  {
#line 1882 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1885 "backend_libs.compile_target_code.c"
    {
#line 1887 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
#line 1890 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 1892 "backend_libs.compile_target_code.c"
  }
#line 1894 "backend_libs.compile_target_code.c"
}

#line 1897 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001(
#line 1900 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 1902 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 1904 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
#line 1906 "backend_libs.compile_target_code.c"
{
#line 1908 "backend_libs.compile_target_code.c"
  {
#line 1910 "backend_libs.compile_target_code.c"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

#line 1913 "backend_libs.compile_target_code.c"
    {
#line 1915 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
#line 1918 "backend_libs.compile_target_code.c"
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
#line 1920 "backend_libs.compile_target_code.c"
  }
#line 1922 "backend_libs.compile_target_code.c"
}

#line 1925 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001(
#line 1928 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1930 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
#line 1932 "backend_libs.compile_target_code.c"
{
#line 1934 "backend_libs.compile_target_code.c"
  {
#line 1936 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1939 "backend_libs.compile_target_code.c"
    {
#line 1941 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____is_as_new_as_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
#line 1944 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 1946 "backend_libs.compile_target_code.c"
  }
#line 1948 "backend_libs.compile_target_code.c"
}

#line 1951 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001(
#line 1954 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 1956 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 1958 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
#line 1960 "backend_libs.compile_target_code.c"
{
#line 1962 "backend_libs.compile_target_code.c"
  {
#line 1964 "backend_libs.compile_target_code.c"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

#line 1967 "backend_libs.compile_target_code.c"
    {
#line 1969 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code____Compare____is_as_new_as_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
#line 1972 "backend_libs.compile_target_code.c"
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
#line 1974 "backend_libs.compile_target_code.c"
  }
#line 1976 "backend_libs.compile_target_code.c"
}

#line 1979 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001(
#line 1982 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1984 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
#line 1986 "backend_libs.compile_target_code.c"
{
#line 1988 "backend_libs.compile_target_code.c"
  {
#line 1990 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1993 "backend_libs.compile_target_code.c"
    {
#line 1995 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____linked_target_type_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
#line 1998 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 2000 "backend_libs.compile_target_code.c"
  }
#line 2002 "backend_libs.compile_target_code.c"
}

#line 2005 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001(
#line 2008 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 2010 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 2012 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
#line 2014 "backend_libs.compile_target_code.c"
{
#line 2016 "backend_libs.compile_target_code.c"
  {
#line 2018 "backend_libs.compile_target_code.c"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

#line 2021 "backend_libs.compile_target_code.c"
    {
#line 2023 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code____Compare____linked_target_type_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
#line 2026 "backend_libs.compile_target_code.c"
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
#line 2028 "backend_libs.compile_target_code.c"
  }
#line 2030 "backend_libs.compile_target_code.c"
}

#line 2033 "backend_libs.compile_target_code.c"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0_10001(
#line 2036 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 2038 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2)
#line 2040 "backend_libs.compile_target_code.c"
{
#line 2042 "backend_libs.compile_target_code.c"
  {
#line 2044 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 2047 "backend_libs.compile_target_code.c"
    {
#line 2049 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code____Unify____pic_0_0(((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2));
    }
#line 2052 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 2054 "backend_libs.compile_target_code.c"
  }
#line 2056 "backend_libs.compile_target_code.c"
}

#line 2059 "backend_libs.compile_target_code.c"
static void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0_10001(
#line 2062 "backend_libs.compile_target_code.c"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_1,
#line 2064 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 2066 "backend_libs.compile_target_code.c"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3)
#line 2068 "backend_libs.compile_target_code.c"
{
#line 2070 "backend_libs.compile_target_code.c"
  {
#line 2072 "backend_libs.compile_target_code.c"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__1_1;

#line 2075 "backend_libs.compile_target_code.c"
    {
#line 2077 "backend_libs.compile_target_code.c"
      backend_libs__compile_target_code____Compare____pic_0_0(&backend_libs__compile_target_code__conv0_HeadVar__1_1, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_2), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3));
    }
#line 2080 "backend_libs.compile_target_code.c"
    *backend_libs__compile_target_code__wrapper_arg_1 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__1_1));
#line 2082 "backend_libs.compile_target_code.c"
  }
#line 2084 "backend_libs.compile_target_code.c"
}

#line 1639 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_30_30,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_31_31,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
#line 1639 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14)
#line 1639 "compile_target_code.m"
{
#line 1647 "compile_target_code.m"
  {
#line 1647 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1647 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 1647 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Stats_17;

#line 1648 "compile_target_code.m"
    {
#line 1648 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 1649 "compile_target_code.m"
    {
#line 1649 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 54, &backend_libs__compile_target_code__Stats_17);
    }
#line 1673 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeInitTargetFile_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1675 "compile_target_code.m"
      *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1673 "compile_target_code.m"
    else
#line 1651 "compile_target_code.m"
      {
#line 1651 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__InitTargetFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitTargetFile_10, (MR_Integer) 0)));
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Rel_19;
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TimeResultA_50;
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TimeResultB_51;
#line 2141 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__TimeA_52;
#line 2143 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__TimeB_53;

#line 1711 "compile_target_code.m"
        {
#line 1711 "compile_target_code.m"
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitObjFileName_13, &backend_libs__compile_target_code__TimeResultA_50);
        }
#line 1712 "compile_target_code.m"
        {
#line 1712 "compile_target_code.m"
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__TimeResultB_51);
        }
#line 1714 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_50)) == (MR_mktag((MR_Integer) 0)));
#line 1714 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1714 "compile_target_code.m"
          {
#line 1714 "compile_target_code.m"
            backend_libs__compile_target_code__TimeA_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_50, (MR_Integer) 0)));
#line 1715 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_51)) == (MR_mktag((MR_Integer) 0)));
#line 1715 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 1715 "compile_target_code.m"
              backend_libs__compile_target_code__TimeB_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_51, (MR_Integer) 0)));
#line 1714 "compile_target_code.m"
          }
#line 2172 "backend_libs.compile_target_code.c"
        if (backend_libs__compile_target_code__succeeded)
#line 2174 "backend_libs.compile_target_code.c"
          {
#line 2176 "backend_libs.compile_target_code.c"
            MR_Word backend_libs__compile_target_code__Compare_54;

#line 1717 "compile_target_code.m"
            {
#line 1717 "compile_target_code.m"
              mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_54, backend_libs__compile_target_code__TimeA_52, backend_libs__compile_target_code__TimeB_53);
            }
#line 1699 "compile_target_code.m"
            if ((backend_libs__compile_target_code__Compare_54 == (MR_Integer) 1))
#line 1701 "compile_target_code.m"
              backend_libs__compile_target_code__Rel_19 = (MR_Integer) 1;
#line 1699 "compile_target_code.m"
            else
#line 1699 "compile_target_code.m"
              if ((backend_libs__compile_target_code__Compare_54 == (MR_Integer) 0))
#line 1698 "compile_target_code.m"
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
#line 1699 "compile_target_code.m"
              else
#line 1698 "compile_target_code.m"
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
#line 2198 "backend_libs.compile_target_code.c"
          }
#line 2200 "backend_libs.compile_target_code.c"
        else
#line 1703 "compile_target_code.m"
          backend_libs__compile_target_code__Rel_19 = (MR_Integer) 2;
#line 1655 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Rel_19 == (MR_Integer) 1))
#line 1655 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 1655 "compile_target_code.m"
        else
#line 1655 "compile_target_code.m"
          if ((backend_libs__compile_target_code__Rel_19 == (MR_Integer) 2))
#line 1656 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 1655 "compile_target_code.m"
          else
#line 1655 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = MR_FALSE;
#line 1655 "compile_target_code.m"
        if (!(backend_libs__compile_target_code__succeeded))
#line 1654 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MustCompile_11 == (MR_Integer) 1);
#line 1670 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1660 "compile_target_code.m"
          {
#line 1660 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__CompileOk_20;

#line 1659 "compile_target_code.m"
            {
#line 1659 "compile_target_code.m"
              libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling initialization file...\n");
            }
#line 1661 "compile_target_code.m"
            {
#line 1661 "compile_target_code.m"
              backend_libs__compile_target_code__IntroducedFrom__pred__make_erlang_program_init_file__1511__1_6_p_0(backend_libs__compile_target_code__V_30_30, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__CompileOk_20);
            }
#line 1662 "compile_target_code.m"
            {
#line 1662 "compile_target_code.m"
              libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
            }
#line 1666 "compile_target_code.m"
            if ((backend_libs__compile_target_code__CompileOk_20 == (MR_Integer) 0))
#line 1668 "compile_target_code.m"
              *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1666 "compile_target_code.m"
            else
#line 1665 "compile_target_code.m"
              {
#line 1665 "compile_target_code.m"
                MR_Word base;
#line 1665 "compile_target_code.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1665 "compile_target_code.m"
                *backend_libs__compile_target_code__Result_14 = base;
#line 1665 "compile_target_code.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
#line 1665 "compile_target_code.m"
              }
#line 1660 "compile_target_code.m"
          }
#line 1670 "compile_target_code.m"
        else
#line 1671 "compile_target_code.m"
          {
#line 1671 "compile_target_code.m"
            MR_Word base;
#line 1671 "compile_target_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1671 "compile_target_code.m"
            *backend_libs__compile_target_code__Result_14 = base;
#line 1671 "compile_target_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
#line 1671 "compile_target_code.m"
          }
#line 1651 "compile_target_code.m"
      }
#line 1647 "compile_target_code.m"
  }
#line 1639 "compile_target_code.m"
}

#line 1639 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_30_30,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_31_31,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__V_32_32,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__V_33_33,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_10,
#line 1639 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1639 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_13,
#line 1639 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14)
#line 1639 "compile_target_code.m"
{
#line 1647 "compile_target_code.m"
  {
#line 1647 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1647 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 1647 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Stats_17;

#line 1648 "compile_target_code.m"
    {
#line 1648 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 1649 "compile_target_code.m"
    {
#line 1649 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 54, &backend_libs__compile_target_code__Stats_17);
    }
#line 1673 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeInitTargetFile_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1675 "compile_target_code.m"
      *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1673 "compile_target_code.m"
    else
#line 1651 "compile_target_code.m"
      {
#line 1651 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__InitTargetFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitTargetFile_10, (MR_Integer) 0)));
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Rel_19;
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TimeResultA_52;
#line 1651 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TimeResultB_53;
#line 2343 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__TimeA_54;
#line 2345 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__TimeB_55;

#line 1711 "compile_target_code.m"
        {
#line 1711 "compile_target_code.m"
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitObjFileName_13, &backend_libs__compile_target_code__TimeResultA_52);
        }
#line 1712 "compile_target_code.m"
        {
#line 1712 "compile_target_code.m"
          mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__TimeResultB_53);
        }
#line 1714 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_52)) == (MR_mktag((MR_Integer) 0)));
#line 1714 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1714 "compile_target_code.m"
          {
#line 1714 "compile_target_code.m"
            backend_libs__compile_target_code__TimeA_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_52, (MR_Integer) 0)));
#line 1715 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_53)) == (MR_mktag((MR_Integer) 0)));
#line 1715 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 1715 "compile_target_code.m"
              backend_libs__compile_target_code__TimeB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_53, (MR_Integer) 0)));
#line 1714 "compile_target_code.m"
          }
#line 2374 "backend_libs.compile_target_code.c"
        if (backend_libs__compile_target_code__succeeded)
#line 2376 "backend_libs.compile_target_code.c"
          {
#line 2378 "backend_libs.compile_target_code.c"
            MR_Word backend_libs__compile_target_code__Compare_56;

#line 1717 "compile_target_code.m"
            {
#line 1717 "compile_target_code.m"
              mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_56, backend_libs__compile_target_code__TimeA_54, backend_libs__compile_target_code__TimeB_55);
            }
#line 1699 "compile_target_code.m"
            if ((backend_libs__compile_target_code__Compare_56 == (MR_Integer) 1))
#line 1701 "compile_target_code.m"
              backend_libs__compile_target_code__Rel_19 = (MR_Integer) 1;
#line 1699 "compile_target_code.m"
            else
#line 1699 "compile_target_code.m"
              if ((backend_libs__compile_target_code__Compare_56 == (MR_Integer) 0))
#line 1698 "compile_target_code.m"
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
#line 1699 "compile_target_code.m"
              else
#line 1698 "compile_target_code.m"
                backend_libs__compile_target_code__Rel_19 = (MR_Integer) 0;
#line 2400 "backend_libs.compile_target_code.c"
          }
#line 2402 "backend_libs.compile_target_code.c"
        else
#line 1703 "compile_target_code.m"
          backend_libs__compile_target_code__Rel_19 = (MR_Integer) 2;
#line 1655 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Rel_19 == (MR_Integer) 1))
#line 1655 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 1655 "compile_target_code.m"
        else
#line 1655 "compile_target_code.m"
          if ((backend_libs__compile_target_code__Rel_19 == (MR_Integer) 2))
#line 1656 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 1655 "compile_target_code.m"
          else
#line 1655 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = MR_FALSE;
#line 1655 "compile_target_code.m"
        if (!(backend_libs__compile_target_code__succeeded))
#line 1654 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MustCompile_11 == (MR_Integer) 1);
#line 1670 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1660 "compile_target_code.m"
          {
#line 1660 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__CompileOk_20;

#line 1659 "compile_target_code.m"
            {
#line 1659 "compile_target_code.m"
              libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling initialization file...\n");
            }
#line 1661 "compile_target_code.m"
            {
#line 1661 "compile_target_code.m"
              backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1468__1_8_p_0(backend_libs__compile_target_code__V_30_30, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__V_32_32, backend_libs__compile_target_code__V_33_33, backend_libs__compile_target_code__InitTargetFileName_18, &backend_libs__compile_target_code__CompileOk_20);
            }
#line 1662 "compile_target_code.m"
            {
#line 1662 "compile_target_code.m"
              libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
            }
#line 1666 "compile_target_code.m"
            if ((backend_libs__compile_target_code__CompileOk_20 == (MR_Integer) 0))
#line 1668 "compile_target_code.m"
              *backend_libs__compile_target_code__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1666 "compile_target_code.m"
            else
#line 1665 "compile_target_code.m"
              {
#line 1665 "compile_target_code.m"
                MR_Word base;
#line 1665 "compile_target_code.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1665 "compile_target_code.m"
                *backend_libs__compile_target_code__Result_14 = base;
#line 1665 "compile_target_code.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
#line 1665 "compile_target_code.m"
              }
#line 1660 "compile_target_code.m"
          }
#line 1670 "compile_target_code.m"
        else
#line 1671 "compile_target_code.m"
          {
#line 1671 "compile_target_code.m"
            MR_Word base;
#line 1671 "compile_target_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1671 "compile_target_code.m"
            *backend_libs__compile_target_code__Result_14 = base;
#line 1671 "compile_target_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_13));
#line 1671 "compile_target_code.m"
          }
#line 1651 "compile_target_code.m"
      }
#line 1647 "compile_target_code.m"
  }
#line 1639 "compile_target_code.m"
}

#line 3097 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 3097 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ErlangArchiveFileName_12,
#line 3097 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_13,
#line 3097 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 3097 "compile_target_code.m"
{
#line 3102 "compile_target_code.m"
  {
#line 3102 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3102 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Res_17;
#line 3104 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_16_16;

#line 3104 "compile_target_code.m"
    {
#line 3104 "compile_target_code.m"
      mercury__io__remove_file_recursively_4_p_0(backend_libs__compile_target_code__ErlangArchiveFileName_12, &backend_libs__compile_target_code__V_16_16);
    }
#line 3105 "compile_target_code.m"
    {
#line 3105 "compile_target_code.m"
      mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__ErlangArchiveFileName_12, &backend_libs__compile_target_code__Res_17);
    }
#line 3110 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Res_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3108 "compile_target_code.m"
      {
#line 3108 "compile_target_code.m"
        backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__ErlangArchiveFileName_12, backend_libs__compile_target_code__ObjectList_13, backend_libs__compile_target_code__Succeeded_14);
#line 3108 "compile_target_code.m"
        return;
      }
#line 3110 "compile_target_code.m"
    else
#line 3111 "compile_target_code.m"
      {
#line 3111 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Res_17, (MR_Integer) 0)));
#line 3111 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_28_28;

#line 3112 "compile_target_code.m"
        {
#line 3112 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, (MR_String) "Error creating \140");
        }
#line 3113 "compile_target_code.m"
        {
#line 3113 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__ErlangArchiveFileName_12);
        }
#line 3114 "compile_target_code.m"
        {
#line 3114 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, (MR_String) "\': ");
        }
#line 3115 "compile_target_code.m"
        {
#line 3115 "compile_target_code.m"
          backend_libs__compile_target_code__V_28_28 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_18);
        }
#line 3115 "compile_target_code.m"
        {
#line 3115 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__V_28_28);
        }
#line 3116 "compile_target_code.m"
        {
#line 3116 "compile_target_code.m"
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_10);
        }
#line 3117 "compile_target_code.m"
        *backend_libs__compile_target_code__Succeeded_14 = (MR_Integer) 0;
#line 3111 "compile_target_code.m"
      }
#line 3102 "compile_target_code.m"
  }
#line 3097 "compile_target_code.m"
}

#line 2331 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2331__1_2_f_0(
#line 2331 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_9,
#line 2331 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__2_19)
#line 2331 "compile_target_code.m"
{
#line 2331 "compile_target_code.m"
  {
#line 2331 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HeadVar__3_20;
#line 2331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_21_21;

#line 2331 "compile_target_code.m"
    {
#line 2331 "compile_target_code.m"
      backend_libs__compile_target_code__V_21_21 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__HeadVar__2_19, (MR_String) "lib");
    }
#line 2331 "compile_target_code.m"
    {
#line 2331 "compile_target_code.m"
      return backend_libs__compile_target_code__HeadVar__3_20 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_21_21, backend_libs__compile_target_code__GradeDir_9);
    }
#line 2331 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__3_20;
#line 2331 "compile_target_code.m"
  }
#line 2331 "compile_target_code.m"
}

#line 1468 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1468__1_8_p_0(
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 1468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_26,
#line 1468 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__InitObjFileName_28,
#line 1468 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__5_65,
#line 1468 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__6_66)
#line 1468 "compile_target_code.m"
{
#line 1468 "compile_target_code.m"
  {
#line 1468 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1468 "compile_target_code.m"
    {
#line 1468 "compile_target_code.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__PIC_26, backend_libs__compile_target_code__HeadVar__5_65, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__HeadVar__6_66);
#line 1468 "compile_target_code.m"
      return;
    }
#line 1468 "compile_target_code.m"
  }
#line 1468 "compile_target_code.m"
}

#line 1437 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_17,
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__StdLibDir_18,
#line 1437 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_36)
#line 1437 "compile_target_code.m"
{
#line 1437 "compile_target_code.m"
  {
#line 1437 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1437 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HeadVar__4_37;
#line 1437 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_38_38;
#line 1437 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_39_39;

#line 1437 "compile_target_code.m"
    {
#line 1437 "compile_target_code.m"
      backend_libs__compile_target_code__V_39_39 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_18, (MR_String) "modules");
    }
#line 1437 "compile_target_code.m"
    {
#line 1437 "compile_target_code.m"
      backend_libs__compile_target_code__V_38_38 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_39_39, backend_libs__compile_target_code__GradeDir_17);
    }
#line 1437 "compile_target_code.m"
    {
#line 1437 "compile_target_code.m"
      return backend_libs__compile_target_code__HeadVar__4_37 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_38_38, backend_libs__compile_target_code__HeadVar__3_36);
    }
#line 1437 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__4_37;
#line 1437 "compile_target_code.m"
  }
#line 1437 "compile_target_code.m"
}

#line 993 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__993__1_1_f_0(
#line 993 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_11)
#line 993 "compile_target_code.m"
{
#line 993 "compile_target_code.m"
  {
#line 993 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 993 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HeadVar__2_12;
#line 993 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_14_14;
#line 993 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_15_15;

#line 994 "compile_target_code.m"
    {
#line 994 "compile_target_code.m"
      backend_libs__compile_target_code__V_15_15 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__HeadVar__1_11);
    }
#line 994 "compile_target_code.m"
    {
#line 994 "compile_target_code.m"
      backend_libs__compile_target_code__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_14_14, 0) = ((MR_Box) (backend_libs__compile_target_code__V_15_15));
#line 994 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 994 "compile_target_code.m"
    }
#line 994 "compile_target_code.m"
    {
#line 994 "compile_target_code.m"
      backend_libs__compile_target_code__HeadVar__2_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_12, 0) = ((MR_Box) ((MR_String) "-I"));
#line 994 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_12, 1) = ((MR_Box) (backend_libs__compile_target_code__V_14_14));
#line 994 "compile_target_code.m"
    }
#line 993 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__2_12;
#line 993 "compile_target_code.m"
  }
#line 993 "compile_target_code.m"
}

#line 3263 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3263__1_5_p_0(
#line 3263 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 3263 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_23,
#line 3263 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__HeadVar__3_24)
#line 3263 "compile_target_code.m"
{
#line 3263 "compile_target_code.m"
  {
#line 3263 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3265 "compile_target_code.m"
    {
#line 3265 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__HeadVar__2_23, (MR_String) ".m", (MR_Integer) 1, backend_libs__compile_target_code__HeadVar__3_24);
#line 3265 "compile_target_code.m"
      return;
    }
#line 3263 "compile_target_code.m"
  }
#line 3263 "compile_target_code.m"
}

#line 1385 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1385__1_2_p_0(
#line 1385 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_43,
#line 1385 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__2_44)
#line 1385 "compile_target_code.m"
{
#line 1385 "compile_target_code.m"
  {
#line 1385 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1385 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_45_45;

#line 1387 "compile_target_code.m"
    {
#line 1387 "compile_target_code.m"
      backend_libs__compile_target_code__V_45_45 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__HeadVar__1_43);
    }
#line 1387 "compile_target_code.m"
    {
#line 1387 "compile_target_code.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_45_45, backend_libs__compile_target_code__HeadVar__2_44);
#line 1387 "compile_target_code.m"
      return;
    }
#line 1385 "compile_target_code.m"
  }
#line 1385 "compile_target_code.m"
}

#line 1511 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__make_erlang_program_init_file__1511__1_6_p_0(
#line 1511 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 1511 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 1511 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_58,
#line 1511 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_59)
#line 1511 "compile_target_code.m"
{
#line 1511 "compile_target_code.m"
  {
#line 1511 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1511 "compile_target_code.m"
    {
#line 1511 "compile_target_code.m"
      backend_libs__compile_target_code__compile_erlang_file_6_p_0(backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__HeadVar__3_58, backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__HeadVar__4_59);
#line 1511 "compile_target_code.m"
      return;
    }
#line 1511 "compile_target_code.m"
  }
#line 1511 "compile_target_code.m"
}

#line 1181 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1181__1_1_f_0(
#line 1181 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_52)
#line 1181 "compile_target_code.m"
{
#line 1181 "compile_target_code.m"
  {
#line 1181 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1181 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HeadVar__2_53;
#line 1181 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_55_55;
#line 1181 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_56_56;

#line 1182 "compile_target_code.m"
    {
#line 1182 "compile_target_code.m"
      backend_libs__compile_target_code__V_56_56 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__HeadVar__1_52);
    }
#line 1182 "compile_target_code.m"
    {
#line 1182 "compile_target_code.m"
      backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__V_56_56));
#line 1182 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 1182 "compile_target_code.m"
    }
#line 1182 "compile_target_code.m"
    {
#line 1182 "compile_target_code.m"
      backend_libs__compile_target_code__HeadVar__2_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_53, 0) = ((MR_Box) ((MR_String) "-I"));
#line 1182 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
#line 1182 "compile_target_code.m"
    }
#line 1181 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__2_53;
#line 1181 "compile_target_code.m"
  }
#line 1181 "compile_target_code.m"
}

#line 378 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__378__1_6_p_0(
#line 378 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 378 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Prefix_26,
#line 378 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_79,
#line 378 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_80)
#line 378 "compile_target_code.m"
{
#line 378 "compile_target_code.m"
  {
#line 378 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 378 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FileName_33;
#line 378 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_85_85;

#line 380 "compile_target_code.m"
    {
#line 380 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__HeadVar__3_79, (MR_String) ".dll", (MR_Integer) 1, &backend_libs__compile_target_code__FileName_33);
    }
#line 382 "compile_target_code.m"
    {
#line 382 "compile_target_code.m"
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_33));
#line 382 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 382 "compile_target_code.m"
    }
#line 382 "compile_target_code.m"
    {
#line 382 "compile_target_code.m"
      MR_Word base;
#line 382 "compile_target_code.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "compile_target_code.m"
      *backend_libs__compile_target_code__HeadVar__4_80 = base;
#line 382 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__Prefix_26));
#line 382 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
#line 382 "compile_target_code.m"
    }
#line 378 "compile_target_code.m"
  }
#line 378 "compile_target_code.m"
}

#line 371 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__371__1_2_f_0(
#line 371 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Imports_10,
#line 371 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_68)
#line 371 "compile_target_code.m"
{
#line 371 "compile_target_code.m"
  {
#line 371 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HeadVar__3_69;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 2)));
#line 373 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 0)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 1)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 3)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 4)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 5)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 6)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 7)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 8)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 9)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 10)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 11)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 12)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 13)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 14)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 15)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 16)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 17)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 18)));
#line 373 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 19)));
#line 373 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 20)));

#line 373 "compile_target_code.m"
    {
#line 373 "compile_target_code.m"
      return backend_libs__compile_target_code__HeadVar__3_69 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(backend_libs__compile_target_code__HeadVar__2_68, backend_libs__compile_target_code__V_70_70);
    }
#line 371 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__3_69;
#line 371 "compile_target_code.m"
  }
#line 371 "compile_target_code.m"
}

#line 363 "compile_target_code.m"
static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__363__1_1_f_0(
#line 363 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__1_59)
#line 363 "compile_target_code.m"
{
#line 363 "compile_target_code.m"
  {
#line 363 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 363 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HeadVar__2_60;
#line 363 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_62_62;

#line 364 "compile_target_code.m"
    {
#line 364 "compile_target_code.m"
      backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__1_59));
#line 364 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 364 "compile_target_code.m"
    }
#line 364 "compile_target_code.m"
    {
#line 364 "compile_target_code.m"
      backend_libs__compile_target_code__HeadVar__2_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_60, 0) = ((MR_Box) ((MR_String) "-lib:"));
#line 364 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_60, 1) = ((MR_Box) (backend_libs__compile_target_code__V_62_62));
#line 364 "compile_target_code.m"
    }
#line 363 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__2_60;
#line 363 "compile_target_code.m"
  }
#line 363 "compile_target_code.m"
}

#line 39 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code____Compare____pic_0_0(
#line 39 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 39 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 39 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
#line 39 "compile_target_code.m"
{
#line 39 "compile_target_code.m"
  {
#line 39 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 39 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
#line 39 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

#line 39 "compile_target_code.m"
    {
#line 39 "compile_target_code.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
#line 39 "compile_target_code.m"
      return;
    }
#line 39 "compile_target_code.m"
  }
#line 39 "compile_target_code.m"
}

#line 39 "compile_target_code.m"
MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____pic_0_0(
#line 39 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
#line 39 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
#line 39 "compile_target_code.m"
{
#line 3092 "backend_libs.compile_target_code.c"
  {
#line 3094 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

#line 3097 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 3099 "backend_libs.compile_target_code.c"
  }
#line 39 "compile_target_code.m"
}

#line 113 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code____Compare____linked_target_type_0_0(
#line 113 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 113 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 113 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
#line 113 "compile_target_code.m"
{
#line 113 "compile_target_code.m"
  {
#line 113 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 113 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
#line 113 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

#line 113 "compile_target_code.m"
    {
#line 113 "compile_target_code.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
#line 113 "compile_target_code.m"
      return;
    }
#line 113 "compile_target_code.m"
  }
#line 113 "compile_target_code.m"
}

#line 113 "compile_target_code.m"
MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____linked_target_type_0_0(
#line 113 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
#line 113 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
#line 113 "compile_target_code.m"
{
#line 3145 "backend_libs.compile_target_code.c"
  {
#line 3147 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

#line 3150 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 3152 "backend_libs.compile_target_code.c"
  }
#line 113 "compile_target_code.m"
}

#line 1687 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code____Compare____is_as_new_as_0_0(
#line 1687 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
#line 1687 "compile_target_code.m"
{
#line 1687 "compile_target_code.m"
  {
#line 1687 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1687 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar1_4 = (MR_Integer) backend_libs__compile_target_code__HeadVar__2_2;
#line 1687 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__Cast_HeadVar2_5 = (MR_Integer) backend_libs__compile_target_code__HeadVar__3_3;

#line 1687 "compile_target_code.m"
    {
#line 1687 "compile_target_code.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Cast_HeadVar1_4, backend_libs__compile_target_code__Cast_HeadVar2_5);
#line 1687 "compile_target_code.m"
      return;
    }
#line 1687 "compile_target_code.m"
  }
#line 1687 "compile_target_code.m"
}

#line 1687 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____is_as_new_as_0_0(
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_1,
#line 1687 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
#line 1687 "compile_target_code.m"
{
#line 3198 "backend_libs.compile_target_code.c"
  {
#line 3200 "backend_libs.compile_target_code.c"
    MR_bool backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HeadVar__2_1 == backend_libs__compile_target_code__HeadVar__2_2);

#line 3203 "backend_libs.compile_target_code.c"
    return backend_libs__compile_target_code__succeeded;
#line 3205 "backend_libs.compile_target_code.c"
  }
#line 1687 "compile_target_code.m"
}

#line 1643 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0(
#line 1643 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__1_1,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__3_3)
#line 1643 "compile_target_code.m"
{
#line 1643 "compile_target_code.m"
  {
#line 1643 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1643 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Cast_HeadVar1_4 = backend_libs__compile_target_code__HeadVar__2_2;
#line 1643 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Cast_HeadVar2_5 = backend_libs__compile_target_code__HeadVar__3_3;

#line 1643 "compile_target_code.m"
    {
#line 1643 "compile_target_code.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__compile_target_code_scalar_common_2[0], backend_libs__compile_target_code__HeadVar__1_1, ((MR_Box) (backend_libs__compile_target_code__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__compile_target_code__Cast_HeadVar2_5)));
#line 1643 "compile_target_code.m"
      return;
    }
#line 1643 "compile_target_code.m"
  }
#line 1643 "compile_target_code.m"
}

#line 1643 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0(
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 1643 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2)
#line 1643 "compile_target_code.m"
{
#line 1643 "compile_target_code.m"
  {
#line 1643 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1643 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Cast_HeadVar1_3 = backend_libs__compile_target_code__HeadVar__1_1;
#line 1643 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Cast_HeadVar2_4 = backend_libs__compile_target_code__HeadVar__2_2;

#line 1643 "compile_target_code.m"
    {
#line 1643 "compile_target_code.m"
      return backend_libs__compile_target_code__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) backend_libs__compile_target_code__Cast_HeadVar1_3, (MR_Word) backend_libs__compile_target_code__Cast_HeadVar2_4);
    }
#line 1643 "compile_target_code.m"
    return backend_libs__compile_target_code__succeeded;
#line 1643 "compile_target_code.m"
  }
#line 1643 "compile_target_code.m"
}

#line 3642 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(
#line 3642 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FullArch_2)
#line 3642 "compile_target_code.m"
{
#line 3644 "compile_target_code.m"
  {
#line 3644 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3644 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ArchComponents_3;
#line 3644 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Mfr_5;
#line 3644 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OS_6;
#line 3644 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_8_8;
#line 3644 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_9_9;
#line 3644 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_10_10;
#line 3644 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_11_11;
#line 3648 "compile_target_code.m"
    MR_String backend_libs__compile_target_code___CPU_4;

#line 3645 "compile_target_code.m"
    {
#line 3645 "compile_target_code.m"
      backend_libs__compile_target_code__ArchComponents_3 = mercury__string__split_at_char_2_f_0((MR_Char) 45, backend_libs__compile_target_code__FullArch_2);
    }
#line 3648 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__ArchComponents_3)) == (MR_mktag((MR_Integer) 1)));
#line 3648 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 3648 "compile_target_code.m"
      {
#line 3648 "compile_target_code.m"
        backend_libs__compile_target_code___CPU_4 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ArchComponents_3, (MR_Integer) 0)));
#line 3648 "compile_target_code.m"
        backend_libs__compile_target_code__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ArchComponents_3, (MR_Integer) 1)));
#line 3648 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 3648 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 3648 "compile_target_code.m"
          {
#line 3648 "compile_target_code.m"
            backend_libs__compile_target_code__Mfr_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_8_8, (MR_Integer) 0)));
#line 3648 "compile_target_code.m"
            backend_libs__compile_target_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_8_8, (MR_Integer) 1)));
#line 3649 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Mfr_5, (MR_String) "apple") == 0);
#line 3644 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 3644 "compile_target_code.m"
              {
#line 3648 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 3648 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 3648 "compile_target_code.m"
                  {
#line 3648 "compile_target_code.m"
                    backend_libs__compile_target_code__OS_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_9_9, (MR_Integer) 0)));
#line 3648 "compile_target_code.m"
                    backend_libs__compile_target_code__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_9_9, (MR_Integer) 1)));
#line 3648 "compile_target_code.m"
                    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3644 "compile_target_code.m"
                    if (backend_libs__compile_target_code__succeeded)
#line 3644 "compile_target_code.m"
                      {
#line 3650 "compile_target_code.m"
                        backend_libs__compile_target_code__V_11_11 = (MR_String) "darwin";
#line 3650 "compile_target_code.m"
                        {
#line 3650 "compile_target_code.m"
                          return backend_libs__compile_target_code__succeeded = mercury__string__prefix_2_p_0(backend_libs__compile_target_code__OS_6, backend_libs__compile_target_code__V_11_11);
                        }
#line 3644 "compile_target_code.m"
                      }
#line 3648 "compile_target_code.m"
                  }
#line 3644 "compile_target_code.m"
              }
#line 3648 "compile_target_code.m"
          }
#line 3648 "compile_target_code.m"
      }
#line 3644 "compile_target_code.m"
    return backend_libs__compile_target_code__succeeded;
#line 3644 "compile_target_code.m"
  }
#line 3642 "compile_target_code.m"
}

#line 3488 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_9_p_0(
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_12,
#line 3488 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Cmd_13,
#line 3488 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_14,
#line 3488 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MaybeProcessOutput_15,
#line 3488 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
#line 3488 "compile_target_code.m"
{
#line 3493 "compile_target_code.m"
  {
#line 3493 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3493 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RestrictedCommandLine_18;

#line 3494 "compile_target_code.m"
    {
#line 3494 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_18);
    }
#line 3541 "compile_target_code.m"
    if ((backend_libs__compile_target_code__RestrictedCommandLine_18 == (MR_Integer) 0))
#line 3542 "compile_target_code.m"
      {
#line 3542 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_32_32;
#line 3542 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__FullCmd_57;

#line 3543 "compile_target_code.m"
        {
#line 3543 "compile_target_code.m"
          backend_libs__compile_target_code__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__Args_14);
        }
#line 3543 "compile_target_code.m"
        {
#line 3543 "compile_target_code.m"
          backend_libs__compile_target_code__FullCmd_57 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Cmd_13, backend_libs__compile_target_code__V_32_32);
        }
#line 3544 "compile_target_code.m"
        {
#line 3544 "compile_target_code.m"
          parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__Verbosity_12, backend_libs__compile_target_code__FullCmd_57, backend_libs__compile_target_code__MaybeProcessOutput_15, backend_libs__compile_target_code__Succeeded_16);
#line 3544 "compile_target_code.m"
          return;
        }
#line 3542 "compile_target_code.m"
      }
#line 3541 "compile_target_code.m"
    else
#line 3497 "compile_target_code.m"
      {
#line 3497 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__TmpFile_19;
#line 3497 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__OpenResult_20;

#line 3500 "compile_target_code.m"
        {
#line 3500 "compile_target_code.m"
          mercury__io__make_temp_3_p_0(&backend_libs__compile_target_code__TmpFile_19);
        }
#line 3501 "compile_target_code.m"
        {
#line 3501 "compile_target_code.m"
          mercury__io__open_output_4_p_0(backend_libs__compile_target_code__TmpFile_19, &backend_libs__compile_target_code__OpenResult_20);
        }
#line 3536 "compile_target_code.m"
        if (((MR_tag((MR_Word) backend_libs__compile_target_code__OpenResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 3538 "compile_target_code.m"
          *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 3536 "compile_target_code.m"
        else
#line 3503 "compile_target_code.m"
          {
#line 3503 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__TmpStream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__OpenResult_20, (MR_Integer) 0)));
#line 3503 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__TmpFileArgs_22;
#line 3503 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__VeryVerbose_23;
#line 3503 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__FullCmd_24;
#line 3503 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__Succeeded0_25;
#line 3503 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__RemoveResult_26;
#line 3503 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_52_52;
#line 3503 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_54_54;
#line 3503 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__EnvType_67;

#line 3507 "compile_target_code.m"
            {
#line 3507 "compile_target_code.m"
              backend_libs__compile_target_code__TmpFileArgs_22 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__Args_14, (MR_String) "\\", (MR_String) "\\\\");
            }
#line 3509 "compile_target_code.m"
            {
#line 3509 "compile_target_code.m"
              mercury__io__write_string_4_p_0(backend_libs__compile_target_code__TmpStream_21, backend_libs__compile_target_code__TmpFileArgs_22);
            }
#line 3510 "compile_target_code.m"
            {
#line 3510 "compile_target_code.m"
              mercury__io__close_output_3_p_0(backend_libs__compile_target_code__TmpStream_21);
            }
#line 3512 "compile_target_code.m"
            {
#line 3512 "compile_target_code.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 45, &backend_libs__compile_target_code__VeryVerbose_23);
            }
#line 3520 "compile_target_code.m"
            if ((backend_libs__compile_target_code__VeryVerbose_23 == (MR_Integer) 0))
#line 3521 "compile_target_code.m"
              {
#line 3521 "compile_target_code.m"
              }
#line 3520 "compile_target_code.m"
            else
#line 3514 "compile_target_code.m"
              {
#line 3514 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__V_44_44;
#line 3514 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__V_46_46;
#line 3514 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__EnvType_61;

#line 3515 "compile_target_code.m"
                {
#line 3515 "compile_target_code.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Args placed in ");
                }
#line 3554 "compile_target_code.m"
                {
#line 3554 "compile_target_code.m"
                  libs__globals__get_system_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__EnvType_61);
                }
#line 3558 "compile_target_code.m"
                if ((backend_libs__compile_target_code__EnvType_61 == (MR_Integer) 4))
#line 3556 "compile_target_code.m"
                  {
#line 3557 "compile_target_code.m"
                    {
#line 3557 "compile_target_code.m"
                      backend_libs__compile_target_code__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", backend_libs__compile_target_code__TmpFile_19);
                    }
#line 3556 "compile_target_code.m"
                  }
#line 3558 "compile_target_code.m"
                else
#line 3563 "compile_target_code.m"
                  {
#line 3564 "compile_target_code.m"
                    {
#line 3564 "compile_target_code.m"
                      backend_libs__compile_target_code__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\100", backend_libs__compile_target_code__TmpFile_19);
                    }
#line 3563 "compile_target_code.m"
                  }
#line 3516 "compile_target_code.m"
                {
#line 3516 "compile_target_code.m"
                  backend_libs__compile_target_code__V_44_44 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__V_46_46, (MR_String) ": \140");
                }
#line 3516 "compile_target_code.m"
                {
#line 3516 "compile_target_code.m"
                  mercury__io__write_string_3_p_0(backend_libs__compile_target_code__V_44_44);
                }
#line 3517 "compile_target_code.m"
                {
#line 3517 "compile_target_code.m"
                  mercury__io__write_string_3_p_0(backend_libs__compile_target_code__TmpFileArgs_22);
                }
#line 3518 "compile_target_code.m"
                {
#line 3518 "compile_target_code.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                }
#line 3519 "compile_target_code.m"
                {
#line 3519 "compile_target_code.m"
                  mercury__io__flush_output_2_p_0();
                }
#line 3514 "compile_target_code.m"
              }
#line 3554 "compile_target_code.m"
            {
#line 3554 "compile_target_code.m"
              libs__globals__get_system_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__EnvType_67);
            }
#line 3558 "compile_target_code.m"
            if ((backend_libs__compile_target_code__EnvType_67 == (MR_Integer) 4))
#line 3556 "compile_target_code.m"
              {
#line 3557 "compile_target_code.m"
                {
#line 3557 "compile_target_code.m"
                  backend_libs__compile_target_code__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", backend_libs__compile_target_code__TmpFile_19);
                }
#line 3556 "compile_target_code.m"
              }
#line 3558 "compile_target_code.m"
            else
#line 3563 "compile_target_code.m"
              {
#line 3564 "compile_target_code.m"
                {
#line 3564 "compile_target_code.m"
                  backend_libs__compile_target_code__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "\100", backend_libs__compile_target_code__TmpFile_19);
                }
#line 3563 "compile_target_code.m"
              }
#line 3524 "compile_target_code.m"
            {
#line 3524 "compile_target_code.m"
              backend_libs__compile_target_code__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_54_54);
            }
#line 3524 "compile_target_code.m"
            {
#line 3524 "compile_target_code.m"
              backend_libs__compile_target_code__FullCmd_24 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Cmd_13, backend_libs__compile_target_code__V_52_52);
            }
#line 3525 "compile_target_code.m"
            {
#line 3525 "compile_target_code.m"
              parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__Verbosity_12, backend_libs__compile_target_code__FullCmd_24, backend_libs__compile_target_code__MaybeProcessOutput_15, &backend_libs__compile_target_code__Succeeded0_25);
            }
#line 3528 "compile_target_code.m"
            {
#line 3528 "compile_target_code.m"
              mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TmpFile_19, &backend_libs__compile_target_code__RemoveResult_26);
            }
#line 3532 "compile_target_code.m"
            if ((backend_libs__compile_target_code__RemoveResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3531 "compile_target_code.m"
              *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__Succeeded0_25;
#line 3532 "compile_target_code.m"
            else
#line 3534 "compile_target_code.m"
              *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 3503 "compile_target_code.m"
          }
#line 3497 "compile_target_code.m"
      }
#line 3493 "compile_target_code.m"
  }
#line 3488 "compile_target_code.m"
}

#line 3479 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 3479 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_11,
#line 3479 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Cmd_12,
#line 3479 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_13,
#line 3479 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 3479 "compile_target_code.m"
{
#line 3484 "compile_target_code.m"
  {
#line 3484 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3485 "compile_target_code.m"
    {
#line 3485 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__Verbosity_11, backend_libs__compile_target_code__Cmd_12, backend_libs__compile_target_code__Args_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__Succeeded_14);
#line 3485 "compile_target_code.m"
      return;
    }
#line 3484 "compile_target_code.m"
  }
#line 3479 "compile_target_code.m"
}

#line 3363 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
#line 3363 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 3363 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Basename_6)
#line 3363 "compile_target_code.m"
{
#line 3366 "compile_target_code.m"
  {
#line 3366 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_130_130;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFiles0_8;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFiles1_9;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceInitFiles0_10;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_11;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDir_12;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFiles2_14;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceInitFiles_15;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebugInitFiles_16;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceLevel_17;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TraceOpt_18;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFiles3_19;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebug_20;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFiles_21;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RuntimeFlagsList_22;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RuntimeFlags_23;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileDirsList_24;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InitFileDirs_25;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExperimentalComplexity_26;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExperimentalComplexityOpt_27;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Grade_28;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInit_29;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFileName_30;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErrorStream_31;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInitArgs_32;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MkInitCmdOk_33;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_86_86;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_88_88;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_89_89;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_91_91;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_92_92;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_94_94;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_95_95;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_97_97;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_98_98;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_100_100;
#line 3366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_101_101;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_102_102;
#line 3366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_104_104;
#line 3401 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_71_71;

#line 3367 "compile_target_code.m"
    {
#line 3367 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 551, &backend_libs__compile_target_code__InitFiles0_8);
    }
#line 3769 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3370 "compile_target_code.m"
    {
#line 3370 "compile_target_code.m"
      mercury__list__remove_dups_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles0_8, &backend_libs__compile_target_code__InitFiles1_9);
    }
#line 3371 "compile_target_code.m"
    {
#line 3371 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 552, &backend_libs__compile_target_code__TraceInitFiles0_10);
    }
#line 3373 "compile_target_code.m"
    {
#line 3373 "compile_target_code.m"
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 548, &backend_libs__compile_target_code__MaybeStdLibDir_11);
    }
#line 3375 "compile_target_code.m"
    {
#line 3375 "compile_target_code.m"
      libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__GradeDir_12);
    }
#line 3391 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeStdLibDir_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3395 "compile_target_code.m"
      {
#line 3396 "compile_target_code.m"
        backend_libs__compile_target_code__InitFiles2_14 = backend_libs__compile_target_code__InitFiles1_9;
#line 3397 "compile_target_code.m"
        backend_libs__compile_target_code__TraceInitFiles_15 = backend_libs__compile_target_code__TraceInitFiles0_10;
#line 3398 "compile_target_code.m"
        backend_libs__compile_target_code__SourceDebugInitFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3395 "compile_target_code.m"
      }
#line 3391 "compile_target_code.m"
    else
#line 3377 "compile_target_code.m"
      {
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StdLibDir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_11, (MR_Integer) 0)));
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_43_43;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_44_44;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_45_45;
#line 3377 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_48_48;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_49_49;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_50_50;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_51_51;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_54_54;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_55_55;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_56_56;
#line 3377 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_59_59;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_60_60;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_61_61;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_62_62;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_65_65;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_66_66;
#line 3377 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_67_67;

#line 3379 "compile_target_code.m"
        {
#line 3379 "compile_target_code.m"
          backend_libs__compile_target_code__V_45_45 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
#line 3379 "compile_target_code.m"
        {
#line 3379 "compile_target_code.m"
          backend_libs__compile_target_code__V_44_44 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_45_45, backend_libs__compile_target_code__GradeDir_12);
        }
#line 3379 "compile_target_code.m"
        {
#line 3379 "compile_target_code.m"
          backend_libs__compile_target_code__V_43_43 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_44_44, (MR_String) "mer_rt.init");
        }
#line 3380 "compile_target_code.m"
        {
#line 3380 "compile_target_code.m"
          backend_libs__compile_target_code__V_51_51 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
#line 3380 "compile_target_code.m"
        {
#line 3380 "compile_target_code.m"
          backend_libs__compile_target_code__V_50_50 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_51_51, backend_libs__compile_target_code__GradeDir_12);
        }
#line 3380 "compile_target_code.m"
        {
#line 3380 "compile_target_code.m"
          backend_libs__compile_target_code__V_49_49 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_50_50, (MR_String) "mer_std.init");
        }
#line 3380 "compile_target_code.m"
        {
#line 3380 "compile_target_code.m"
          backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3380 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
#line 3380 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__InitFiles1_9));
#line 3380 "compile_target_code.m"
        }
#line 3379 "compile_target_code.m"
        {
#line 3379 "compile_target_code.m"
          backend_libs__compile_target_code__InitFiles2_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3379 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFiles2_14, 0) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
#line 3379 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFiles2_14, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
#line 3379 "compile_target_code.m"
        }
#line 3384 "compile_target_code.m"
        {
#line 3384 "compile_target_code.m"
          backend_libs__compile_target_code__V_56_56 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
#line 3384 "compile_target_code.m"
        {
#line 3384 "compile_target_code.m"
          backend_libs__compile_target_code__V_55_55 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_56_56, backend_libs__compile_target_code__GradeDir_12);
        }
#line 3384 "compile_target_code.m"
        {
#line 3384 "compile_target_code.m"
          backend_libs__compile_target_code__V_54_54 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_55_55, (MR_String) "mer_browser.init");
        }
#line 3385 "compile_target_code.m"
        {
#line 3385 "compile_target_code.m"
          backend_libs__compile_target_code__V_62_62 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
#line 3385 "compile_target_code.m"
        {
#line 3385 "compile_target_code.m"
          backend_libs__compile_target_code__V_61_61 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_62_62, backend_libs__compile_target_code__GradeDir_12);
        }
#line 3385 "compile_target_code.m"
        {
#line 3385 "compile_target_code.m"
          backend_libs__compile_target_code__V_60_60 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_61_61, (MR_String) "mer_mdbcomp.init");
        }
#line 3385 "compile_target_code.m"
        {
#line 3385 "compile_target_code.m"
          backend_libs__compile_target_code__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3385 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 0) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
#line 3385 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 1) = ((MR_Box) (backend_libs__compile_target_code__TraceInitFiles0_10));
#line 3385 "compile_target_code.m"
        }
#line 3384 "compile_target_code.m"
        {
#line 3384 "compile_target_code.m"
          backend_libs__compile_target_code__TraceInitFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3384 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TraceInitFiles_15, 0) = ((MR_Box) (backend_libs__compile_target_code__V_54_54));
#line 3384 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__TraceInitFiles_15, 1) = ((MR_Box) (backend_libs__compile_target_code__V_59_59));
#line 3384 "compile_target_code.m"
        }
#line 3389 "compile_target_code.m"
        {
#line 3389 "compile_target_code.m"
          backend_libs__compile_target_code__V_67_67 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_13, (MR_String) "modules");
        }
#line 3389 "compile_target_code.m"
        {
#line 3389 "compile_target_code.m"
          backend_libs__compile_target_code__V_66_66 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_67_67, backend_libs__compile_target_code__GradeDir_12);
        }
#line 3389 "compile_target_code.m"
        {
#line 3389 "compile_target_code.m"
          backend_libs__compile_target_code__V_65_65 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_66_66, (MR_String) "mer_ssdb.init");
        }
#line 3390 "compile_target_code.m"
        {
#line 3390 "compile_target_code.m"
          backend_libs__compile_target_code__SourceDebugInitFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3390 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFiles_16, 0) = ((MR_Box) (backend_libs__compile_target_code__V_65_65));
#line 3390 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3390 "compile_target_code.m"
        }
#line 3377 "compile_target_code.m"
      }
#line 3400 "compile_target_code.m"
    {
#line 3400 "compile_target_code.m"
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__TraceLevel_17);
    }
#line 3401 "compile_target_code.m"
    {
#line 3401 "compile_target_code.m"
      backend_libs__compile_target_code__V_71_71 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_17);
    }
#line 3401 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_71_71 == (MR_Integer) 0);
#line 3404 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 3402 "compile_target_code.m"
      {
#line 3402 "compile_target_code.m"
        backend_libs__compile_target_code__TraceOpt_18 = (MR_String) "-t";
#line 3403 "compile_target_code.m"
        {
#line 3403 "compile_target_code.m"
          backend_libs__compile_target_code__InitFiles3_19 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles2_14, backend_libs__compile_target_code__TraceInitFiles_15);
        }
#line 3402 "compile_target_code.m"
      }
#line 3404 "compile_target_code.m"
    else
#line 3405 "compile_target_code.m"
      {
#line 3405 "compile_target_code.m"
        backend_libs__compile_target_code__TraceOpt_18 = (MR_String) "";
#line 3406 "compile_target_code.m"
        backend_libs__compile_target_code__InitFiles3_19 = backend_libs__compile_target_code__InitFiles2_14;
#line 3405 "compile_target_code.m"
      }
#line 3408 "compile_target_code.m"
    {
#line 3408 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 229, &backend_libs__compile_target_code__SourceDebug_20);
    }
#line 3412 "compile_target_code.m"
    if ((backend_libs__compile_target_code__SourceDebug_20 == (MR_Integer) 0))
#line 3414 "compile_target_code.m"
      backend_libs__compile_target_code__InitFiles_21 = backend_libs__compile_target_code__InitFiles3_19;
#line 3412 "compile_target_code.m"
    else
#line 3411 "compile_target_code.m"
      {
#line 3411 "compile_target_code.m"
        backend_libs__compile_target_code__InitFiles_21 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_130_130, backend_libs__compile_target_code__InitFiles3_19, backend_libs__compile_target_code__SourceDebugInitFiles_16);
      }
#line 3416 "compile_target_code.m"
    {
#line 3416 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 562, &backend_libs__compile_target_code__RuntimeFlagsList_22);
    }
#line 3418 "compile_target_code.m"
    {
#line 3418 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__RuntimeFlagsList_22, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__RuntimeFlags_23);
    }
#line 3419 "compile_target_code.m"
    {
#line 3419 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 550, &backend_libs__compile_target_code__InitFileDirsList_24);
    }
#line 3421 "compile_target_code.m"
    {
#line 3421 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__InitFileDirsList_24, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__InitFileDirs_25);
    }
#line 3422 "compile_target_code.m"
    {
#line 3422 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 208, &backend_libs__compile_target_code__ExperimentalComplexity_26);
    }
#line 3424 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ExperimentalComplexity_26, (MR_String) "") == 0);
#line 3426 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 3425 "compile_target_code.m"
      backend_libs__compile_target_code__ExperimentalComplexityOpt_27 = (MR_String) "";
#line 3426 "compile_target_code.m"
    else
#line 3427 "compile_target_code.m"
      {
#line 3427 "compile_target_code.m"
        {
#line 3427 "compile_target_code.m"
          backend_libs__compile_target_code__ExperimentalComplexityOpt_27 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", backend_libs__compile_target_code__ExperimentalComplexity_26);
        }
#line 3427 "compile_target_code.m"
      }
#line 3429 "compile_target_code.m"
    {
#line 3429 "compile_target_code.m"
      libs__handle_options__compute_grade_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__Grade_28);
    }
#line 3430 "compile_target_code.m"
    {
#line 3430 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 578, &backend_libs__compile_target_code__MkInit_29);
    }
#line 3431 "compile_target_code.m"
    {
#line 3431 "compile_target_code.m"
      backend_libs__compile_target_code__CFileName_30 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, (MR_String) ".c");
    }
#line 3432 "compile_target_code.m"
    {
#line 3432 "compile_target_code.m"
      mercury__io__output_stream_3_p_0(&backend_libs__compile_target_code__ErrorStream_31);
    }
#line 3438 "compile_target_code.m"
    {
#line 3438 "compile_target_code.m"
      backend_libs__compile_target_code__V_101_101 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__CFileName_30);
    }
#line 3439 "compile_target_code.m"
    {
#line 3439 "compile_target_code.m"
      backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3439 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__InitFileDirs_25));
#line 3439 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[9])));
#line 3439 "compile_target_code.m"
    }
#line 3439 "compile_target_code.m"
    {
#line 3439 "compile_target_code.m"
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3439 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) ((MR_String) " "));
#line 3439 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
#line 3439 "compile_target_code.m"
    }
#line 3438 "compile_target_code.m"
    {
#line 3438 "compile_target_code.m"
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3438 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) (backend_libs__compile_target_code__V_101_101));
#line 3438 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
#line 3438 "compile_target_code.m"
    }
#line 3438 "compile_target_code.m"
    {
#line 3438 "compile_target_code.m"
      backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3438 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) ((MR_String) " -o "));
#line 3438 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
#line 3438 "compile_target_code.m"
    }
#line 3437 "compile_target_code.m"
    {
#line 3437 "compile_target_code.m"
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3437 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeFlags_23));
#line 3437 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
#line 3437 "compile_target_code.m"
    }
#line 3437 "compile_target_code.m"
    {
#line 3437 "compile_target_code.m"
      backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3437 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) ((MR_String) " "));
#line 3437 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
#line 3437 "compile_target_code.m"
    }
#line 3436 "compile_target_code.m"
    {
#line 3436 "compile_target_code.m"
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3436 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) (backend_libs__compile_target_code__ExperimentalComplexityOpt_27));
#line 3436 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
#line 3436 "compile_target_code.m"
    }
#line 3436 "compile_target_code.m"
    {
#line 3436 "compile_target_code.m"
      backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3436 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) ((MR_String) " "));
#line 3436 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
#line 3436 "compile_target_code.m"
    }
#line 3435 "compile_target_code.m"
    {
#line 3435 "compile_target_code.m"
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3435 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpt_18));
#line 3435 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
#line 3435 "compile_target_code.m"
    }
#line 3435 "compile_target_code.m"
    {
#line 3435 "compile_target_code.m"
      backend_libs__compile_target_code__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3435 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 0) = ((MR_Box) ((MR_String) " "));
#line 3435 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
#line 3435 "compile_target_code.m"
    }
#line 3434 "compile_target_code.m"
    {
#line 3434 "compile_target_code.m"
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3434 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) (backend_libs__compile_target_code__Grade_28));
#line 3434 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_89_89));
#line 3434 "compile_target_code.m"
    }
#line 3434 "compile_target_code.m"
    {
#line 3434 "compile_target_code.m"
      backend_libs__compile_target_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3434 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 0) = ((MR_Box) ((MR_String) " -g "));
#line 3434 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
#line 3434 "compile_target_code.m"
    }
#line 3433 "compile_target_code.m"
    {
#line 3433 "compile_target_code.m"
      backend_libs__compile_target_code__MkInitArgs_32 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_86_86);
    }
#line 3443 "compile_target_code.m"
    {
#line 3443 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__ErrorStream_31, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_29, backend_libs__compile_target_code__MkInitArgs_32, backend_libs__compile_target_code__InitFiles_21, &backend_libs__compile_target_code__MkInitCmdOk_33);
    }
#line 3462 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MkInitCmdOk_33 == (MR_Integer) 0))
#line 3463 "compile_target_code.m"
      {
#line 3464 "compile_target_code.m"
        {
#line 3464 "compile_target_code.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 3465 "compile_target_code.m"
        {
#line 3465 "compile_target_code.m"
          mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while creating ");
        }
#line 3466 "compile_target_code.m"
        {
#line 3466 "compile_target_code.m"
          mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
        }
#line 3467 "compile_target_code.m"
        {
#line 3467 "compile_target_code.m"
          mercury__io__write_string_3_p_0(backend_libs__compile_target_code__CFileName_30);
        }
#line 3468 "compile_target_code.m"
        {
#line 3468 "compile_target_code.m"
          mercury__io__write_string_3_p_0((MR_String) "\'\n");
#line 3468 "compile_target_code.m"
          return;
        }
#line 3463 "compile_target_code.m"
      }
#line 3462 "compile_target_code.m"
    else
#line 3446 "compile_target_code.m"
      {
#line 3446 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__PIC_34;
#line 3446 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__ObjExt_35;
#line 3446 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__ObjFileName_36;
#line 3446 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__CompileOk_37;

#line 3447 "compile_target_code.m"
        {
#line 3447 "compile_target_code.m"
          backend_libs__compile_target_code__get_object_code_type_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__PIC_34);
        }
#line 3448 "compile_target_code.m"
        {
#line 3448 "compile_target_code.m"
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__PIC_34, &backend_libs__compile_target_code__ObjExt_35);
        }
#line 3449 "compile_target_code.m"
        {
#line 3449 "compile_target_code.m"
          backend_libs__compile_target_code__ObjFileName_36 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, backend_libs__compile_target_code__ObjExt_35);
        }
#line 3450 "compile_target_code.m"
        {
#line 3450 "compile_target_code.m"
          backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__ErrorStream_31, backend_libs__compile_target_code__PIC_34, backend_libs__compile_target_code__CFileName_30, backend_libs__compile_target_code__ObjFileName_36, backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__CompileOk_37);
        }
#line 3454 "compile_target_code.m"
        if ((backend_libs__compile_target_code__CompileOk_37 == (MR_Integer) 0))
#line 3455 "compile_target_code.m"
          {
#line 3456 "compile_target_code.m"
            {
#line 3456 "compile_target_code.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 3457 "compile_target_code.m"
            {
#line 3457 "compile_target_code.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while compiling ");
            }
#line 3458 "compile_target_code.m"
            {
#line 3458 "compile_target_code.m"
              mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
            }
#line 3459 "compile_target_code.m"
            {
#line 3459 "compile_target_code.m"
              mercury__io__write_string_3_p_0(backend_libs__compile_target_code__CFileName_30);
            }
#line 3460 "compile_target_code.m"
            {
#line 3460 "compile_target_code.m"
              mercury__io__write_string_3_p_0((MR_String) "\'\n");
#line 3460 "compile_target_code.m"
              return;
            }
#line 3455 "compile_target_code.m"
          }
#line 3454 "compile_target_code.m"
        else
#line 3453 "compile_target_code.m"
          {
#line 3453 "compile_target_code.m"
          }
#line 3446 "compile_target_code.m"
      }
#line 3366 "compile_target_code.m"
  }
#line 3363 "compile_target_code.m"
}

#line 3247 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
#line 3247 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3247 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 3247 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3247 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__4_4)
#line 3247 "compile_target_code.m"
{
#line 3250 "compile_target_code.m"
  {
#line 3250 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3250 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3250 "compile_target_code.m"
      *backend_libs__compile_target_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3250 "compile_target_code.m"
    else
#line 3252 "compile_target_code.m"
      {
#line 3252 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Module_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_2, (MR_Integer) 0)));
#line 3252 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Modules_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__2_2, (MR_Integer) 1)));
#line 3252 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__FileName_16;
#line 3252 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__FileNames_17;
#line 3252 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__ModuleName_19;
#line 3252 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_22_22;

#line 3253 "compile_target_code.m"
        {
#line 3253 "compile_target_code.m"
          backend_libs__compile_target_code__V_22_22 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__Module_13);
        }
#line 3253 "compile_target_code.m"
        {
#line 3253 "compile_target_code.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_22_22, &backend_libs__compile_target_code__ModuleName_19);
        }
#line 3254 "compile_target_code.m"
        {
#line 3254 "compile_target_code.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__ModuleName_19, backend_libs__compile_target_code__HeadVar__3_3, (MR_Integer) 1, &backend_libs__compile_target_code__FileName_16);
        }
#line 3256 "compile_target_code.m"
        {
#line 3256 "compile_target_code.m"
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Modules_14, backend_libs__compile_target_code__HeadVar__3_3, &backend_libs__compile_target_code__FileNames_17);
        }
#line 3252 "compile_target_code.m"
        {
#line 3252 "compile_target_code.m"
          MR_Word base;
#line 3252 "compile_target_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3252 "compile_target_code.m"
          *backend_libs__compile_target_code__HeadVar__4_4 = base;
#line 3252 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_16));
#line 3252 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__compile_target_code__FileNames_17));
#line 3252 "compile_target_code.m"
        }
#line 3252 "compile_target_code.m"
      }
#line 3250 "compile_target_code.m"
  }
#line 3247 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 3232 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_quoted_string_list_5_p_0(
#line 3232 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Strings_6,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Prefix_7,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Suffix_8,
#line 3232 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Separator_9,
#line 3232 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Result_10)
#line 3232 "compile_target_code.m"
{
#line 3235 "compile_target_code.m"
  {
#line 3235 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3235 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3235 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_11_11;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__V_11_11 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_13, backend_libs__compile_target_code__TypeCtorInfo_13_13, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[13], backend_libs__compile_target_code__Strings_6);
    }
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_11_11, backend_libs__compile_target_code__Prefix_7, backend_libs__compile_target_code__Suffix_8, backend_libs__compile_target_code__Separator_9, backend_libs__compile_target_code__Result_10);
#line 3236 "compile_target_code.m"
      return;
    }
#line 3235 "compile_target_code.m"
  }
#line 3232 "compile_target_code.m"
}

#line 3214 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__join_string_list_5_p_0(
#line 3214 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__2_2,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3214 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__4_4,
#line 3214 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__HeadVar__5_5)
#line 3214 "compile_target_code.m"
{
#line 3217 "compile_target_code.m"
  {
#line 3217 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3217 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3217 "compile_target_code.m"
      *backend_libs__compile_target_code__HeadVar__5_5 = (MR_String) "";
#line 3217 "compile_target_code.m"
    else
#line 3218 "compile_target_code.m"
      {
#line 3218 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__String_9 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__1_1, (MR_Integer) 0)));
#line 3218 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Strings_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__1_1, (MR_Integer) 1)));

#line 3222 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Strings_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3220 "compile_target_code.m"
          {
#line 3220 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_24_24;
#line 3220 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_25_25;
#line 3220 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_26_26;

#line 3221 "compile_target_code.m"
            {
#line 3221 "compile_target_code.m"
              backend_libs__compile_target_code__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__3_3));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3221 "compile_target_code.m"
            }
#line 3221 "compile_target_code.m"
            {
#line 3221 "compile_target_code.m"
              backend_libs__compile_target_code__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 0) = ((MR_Box) (backend_libs__compile_target_code__String_9));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 1) = ((MR_Box) (backend_libs__compile_target_code__V_26_26));
#line 3221 "compile_target_code.m"
            }
#line 3221 "compile_target_code.m"
            {
#line 3221 "compile_target_code.m"
              backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__2_2));
#line 3221 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__V_25_25));
#line 3221 "compile_target_code.m"
            }
#line 3221 "compile_target_code.m"
            {
#line 3221 "compile_target_code.m"
              mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__HeadVar__5_5);
#line 3221 "compile_target_code.m"
              return;
            }
#line 3220 "compile_target_code.m"
          }
#line 3222 "compile_target_code.m"
        else
#line 3223 "compile_target_code.m"
          {
#line 3223 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Result0_17;
#line 3223 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_18_18;
#line 3223 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_19_19;
#line 3223 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_20_20;
#line 3223 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_21_21;
#line 3223 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_22_22;

#line 3224 "compile_target_code.m"
            {
#line 3224 "compile_target_code.m"
              backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__Strings_10, backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__HeadVar__3_3, backend_libs__compile_target_code__HeadVar__4_4, &backend_libs__compile_target_code__Result0_17);
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              backend_libs__compile_target_code__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_22_22, 0) = ((MR_Box) (backend_libs__compile_target_code__Result0_17));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3225 "compile_target_code.m"
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__4_4));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_22_22));
#line 3225 "compile_target_code.m"
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__3_3));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__V_21_21));
#line 3225 "compile_target_code.m"
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              backend_libs__compile_target_code__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_19_19, 0) = ((MR_Box) (backend_libs__compile_target_code__String_9));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_19_19, 1) = ((MR_Box) (backend_libs__compile_target_code__V_20_20));
#line 3225 "compile_target_code.m"
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              backend_libs__compile_target_code__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_18_18, 0) = ((MR_Box) (backend_libs__compile_target_code__HeadVar__2_2));
#line 3225 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_18_18, 1) = ((MR_Box) (backend_libs__compile_target_code__V_19_19));
#line 3225 "compile_target_code.m"
            }
#line 3225 "compile_target_code.m"
            {
#line 3225 "compile_target_code.m"
              mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_18_18, backend_libs__compile_target_code__HeadVar__5_5);
#line 3225 "compile_target_code.m"
              return;
            }
#line 3223 "compile_target_code.m"
          }
#line 3218 "compile_target_code.m"
      }
#line 3217 "compile_target_code.m"
  }
#line 3214 "compile_target_code.m"
}

#line 3120 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 3120 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3,
#line 3120 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__4_4,
#line 3120 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__HeadVar__5_5)
#line 3120 "compile_target_code.m"
{
#line 3123 "compile_target_code.m"
  while (MR_TRUE)
#line 3123 "compile_target_code.m"
    {
#line 3123 "compile_target_code.m"
      /* tailcall optimized into a loop */
#line 3123 "compile_target_code.m"
      {
#line 3123 "compile_target_code.m"
        MR_bool backend_libs__compile_target_code__succeeded;

#line 3123 "compile_target_code.m"
        if ((backend_libs__compile_target_code__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3124 "compile_target_code.m"
          *backend_libs__compile_target_code__HeadVar__5_5 = (MR_Integer) 1;
#line 3123 "compile_target_code.m"
        else
#line 3126 "compile_target_code.m"
          {
#line 3126 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Obj_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__4_4, (MR_Integer) 0)));
#line 3126 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__Objs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__HeadVar__4_4, (MR_Integer) 1)));
#line 3126 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__Res_21;

#line 3127 "compile_target_code.m"
            {
#line 3127 "compile_target_code.m"
              parse_tree__module_cmds__copy_file_6_p_0(backend_libs__compile_target_code__HeadVar__1_1, backend_libs__compile_target_code__Obj_17, backend_libs__compile_target_code__HeadVar__3_3, &backend_libs__compile_target_code__Res_21);
            }
#line 3132 "compile_target_code.m"
            if ((backend_libs__compile_target_code__Res_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3130 "compile_target_code.m"
              {
#line 3130 "compile_target_code.m"
                /* direct tailcall eliminated */
#line 3130 "compile_target_code.m"
                {
#line 3130 "compile_target_code.m"
                  MR_Word backend_libs__compile_target_code__HeadVar__4__tmp_copy_4 = backend_libs__compile_target_code__Objs_18;

#line 3130 "compile_target_code.m"
                  backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__4__tmp_copy_4;
#line 3130 "compile_target_code.m"
                }
#line 3130 "compile_target_code.m"
                continue;
#line 3130 "compile_target_code.m"
              }
#line 3132 "compile_target_code.m"
            else
#line 3133 "compile_target_code.m"
              {
#line 3133 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__Error_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Res_21, (MR_Integer) 0)));
#line 3133 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__V_31_31;

#line 3134 "compile_target_code.m"
                {
#line 3134 "compile_target_code.m"
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, (MR_String) "Error copying \140");
                }
#line 3135 "compile_target_code.m"
                {
#line 3135 "compile_target_code.m"
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__Obj_17);
                }
#line 3136 "compile_target_code.m"
                {
#line 3136 "compile_target_code.m"
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, (MR_String) "\': ");
                }
#line 3137 "compile_target_code.m"
                {
#line 3137 "compile_target_code.m"
                  backend_libs__compile_target_code__V_31_31 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_22);
                }
#line 3137 "compile_target_code.m"
                {
#line 3137 "compile_target_code.m"
                  mercury__io__write_string_4_p_0(backend_libs__compile_target_code__HeadVar__2_2, backend_libs__compile_target_code__V_31_31);
                }
#line 3138 "compile_target_code.m"
                {
#line 3138 "compile_target_code.m"
                  mercury__io__nl_3_p_0(backend_libs__compile_target_code__HeadVar__2_2);
                }
#line 3139 "compile_target_code.m"
                *backend_libs__compile_target_code__HeadVar__5_5 = (MR_Integer) 0;
#line 3133 "compile_target_code.m"
              }
#line 3126 "compile_target_code.m"
          }
#line 3123 "compile_target_code.m"
      }
#line 3123 "compile_target_code.m"
      break;
#line 3123 "compile_target_code.m"
    }
#line 3120 "compile_target_code.m"
}

#line 3078 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_jar_class_argument_5_p_0(
#line 3078 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6,
#line 3078 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ClassSubDir_7,
#line 3078 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ClassFileName_8)
#line 3078 "compile_target_code.m"
{
#line 3081 "compile_target_code.m"
  {
#line 3081 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3082 "compile_target_code.m"
    {
#line 3082 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = mercury__dir__path_name_is_absolute_1_p_0(backend_libs__compile_target_code__ClassFileName_8);
    }
#line 3084 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 3082 "compile_target_code.m"
      {
#line 3082 "compile_target_code.m"
      }
#line 3084 "compile_target_code.m"
    else
#line 3085 "compile_target_code.m"
      {
#line 3085 "compile_target_code.m"
        {
#line 3085 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, (MR_String) "-C ");
        }
#line 3086 "compile_target_code.m"
        {
#line 3086 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__ClassSubDir_7);
        }
#line 3087 "compile_target_code.m"
        {
#line 3087 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, (MR_String) " ");
        }
#line 3085 "compile_target_code.m"
      }
#line 3089 "compile_target_code.m"
    {
#line 3089 "compile_target_code.m"
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__ClassFileName_8);
    }
#line 3090 "compile_target_code.m"
    {
#line 3090 "compile_target_code.m"
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
#line 3090 "compile_target_code.m"
      return;
    }
#line 3081 "compile_target_code.m"
  }
#line 3078 "compile_target_code.m"
}

#line 3048 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_java_archive_7_p_0_1(
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3048 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 3048 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
#line 3048 "compile_target_code.m"
{
#line 3048 "compile_target_code.m"
  {
#line 3048 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

#line 3048 "compile_target_code.m"
    {
#line 3048 "compile_target_code.m"
      backend_libs__compile_target_code__write_jar_class_argument_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
#line 3048 "compile_target_code.m"
      return;
    }
#line 3048 "compile_target_code.m"
  }
#line 3048 "compile_target_code.m"
}

#line 3023 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_java_archive_7_p_0(
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 3023 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__JarFileName_10,
#line 3023 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_11,
#line 3023 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
#line 3023 "compile_target_code.m"
{
#line 3027 "compile_target_code.m"
  {
#line 3027 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3027 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Jar_14;
#line 3027 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ClassSubDir_15;
#line 3027 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ListClassFiles_16;
#line 3027 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TempFileName_19;
#line 3027 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__OpenResult_20;

#line 3028 "compile_target_code.m"
    {
#line 3028 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 616, &backend_libs__compile_target_code__Jar_14);
    }
#line 3030 "compile_target_code.m"
    {
#line 3030 "compile_target_code.m"
      parse_tree__module_cmds__list_class_files_for_jar_6_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ObjectList_11, &backend_libs__compile_target_code__ClassSubDir_15, &backend_libs__compile_target_code__ListClassFiles_16);
    }
#line 3035 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ListClassFiles_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3033 "compile_target_code.m"
      {
#line 3034 "compile_target_code.m"
        {
#line 3034 "compile_target_code.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.create_java_archive\'/7", (MR_String) "empty list of .class files");
#line 3034 "compile_target_code.m"
          return;
        }
#line 3033 "compile_target_code.m"
      }
#line 3035 "compile_target_code.m"
    else
#line 3036 "compile_target_code.m"
      {
#line 3036 "compile_target_code.m"
      }
#line 3044 "compile_target_code.m"
    {
#line 3044 "compile_target_code.m"
      mercury__io__make_temp_5_p_0((MR_String) ".", (MR_String) "mtmp", &backend_libs__compile_target_code__TempFileName_19);
    }
#line 3045 "compile_target_code.m"
    {
#line 3045 "compile_target_code.m"
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__TempFileName_19, &backend_libs__compile_target_code__OpenResult_20);
    }
#line 3068 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__OpenResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 3069 "compile_target_code.m"
      {
#line 3069 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Error_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__OpenResult_20, (MR_Integer) 0)));
#line 3069 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_44_44;

#line 3070 "compile_target_code.m"
        {
#line 3070 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_9, (MR_String) "Error creating \140");
        }
#line 3071 "compile_target_code.m"
        {
#line 3071 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__TempFileName_19);
        }
#line 3072 "compile_target_code.m"
        {
#line 3072 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_9, (MR_String) "\': ");
        }
#line 3073 "compile_target_code.m"
        {
#line 3073 "compile_target_code.m"
          backend_libs__compile_target_code__V_44_44 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_27);
        }
#line 3073 "compile_target_code.m"
        {
#line 3073 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__V_44_44);
        }
#line 3074 "compile_target_code.m"
        {
#line 3074 "compile_target_code.m"
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_9);
        }
#line 3075 "compile_target_code.m"
        *backend_libs__compile_target_code__Succeeded_12 = (MR_Integer) 0;
#line 3069 "compile_target_code.m"
      }
#line 3068 "compile_target_code.m"
    else
#line 3047 "compile_target_code.m"
      {
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Stream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__OpenResult_20, (MR_Integer) 0)));
#line 3047 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Cmd_22;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_47_47;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_50_50;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_51_51;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_53_53;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_54_54;
#line 3047 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_56_56;
#line 3048 "compile_target_code.m"
        MR_Box backend_libs__compile_target_code__conv0_STATE_VARIABLE_IO_48_48;
#line 3056 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_23_23;

#line 3048 "compile_target_code.m"
        {
#line 3048 "compile_target_code.m"
          backend_libs__compile_target_code__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 3048 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_47_47, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[2]));
#line 3048 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_47_47, 1) = ((MR_Box) (backend_libs__compile_target_code__create_java_archive_7_p_0_1));
#line 3048 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3048 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_47_47, 3) = ((MR_Box) (backend_libs__compile_target_code__Stream_21));
#line 3048 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_47_47, 4) = ((MR_Box) (backend_libs__compile_target_code__ClassSubDir_15));
#line 3048 "compile_target_code.m"
        }
#line 3048 "compile_target_code.m"
        {
#line 3048 "compile_target_code.m"
          mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_47_47, backend_libs__compile_target_code__ListClassFiles_16, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv0_STATE_VARIABLE_IO_48_48);
        }
#line 3050 "compile_target_code.m"
        {
#line 3050 "compile_target_code.m"
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__Stream_21);
        }
#line 3053 "compile_target_code.m"
        {
#line 3053 "compile_target_code.m"
          backend_libs__compile_target_code__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 0) = ((MR_Box) (backend_libs__compile_target_code__TempFileName_19));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3053 "compile_target_code.m"
        }
#line 3053 "compile_target_code.m"
        {
#line 3053 "compile_target_code.m"
          backend_libs__compile_target_code__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 0) = ((MR_Box) ((MR_String) " \100"));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 1) = ((MR_Box) (backend_libs__compile_target_code__V_56_56));
#line 3053 "compile_target_code.m"
        }
#line 3053 "compile_target_code.m"
        {
#line 3053 "compile_target_code.m"
          backend_libs__compile_target_code__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 0) = ((MR_Box) (backend_libs__compile_target_code__JarFileName_10));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_54_54));
#line 3053 "compile_target_code.m"
        }
#line 3053 "compile_target_code.m"
        {
#line 3053 "compile_target_code.m"
          backend_libs__compile_target_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 0) = ((MR_Box) ((MR_String) " cf "));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 1) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
#line 3053 "compile_target_code.m"
        }
#line 3053 "compile_target_code.m"
        {
#line 3053 "compile_target_code.m"
          backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) (backend_libs__compile_target_code__Jar_14));
#line 3053 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_51_51));
#line 3053 "compile_target_code.m"
        }
#line 3052 "compile_target_code.m"
        {
#line 3052 "compile_target_code.m"
          backend_libs__compile_target_code__Cmd_22 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_50_50);
        }
#line 3054 "compile_target_code.m"
        {
#line 3054 "compile_target_code.m"
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, (MR_Integer) 1, backend_libs__compile_target_code__Cmd_22, backend_libs__compile_target_code__Succeeded_12);
        }
#line 3056 "compile_target_code.m"
        {
#line 3056 "compile_target_code.m"
          mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TempFileName_19, &backend_libs__compile_target_code__V_23_23);
        }
#line 3064 "compile_target_code.m"
        if ((*backend_libs__compile_target_code__Succeeded_12 == (MR_Integer) 0))
#line 3066 "compile_target_code.m"
          {
#line 3066 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_26_26;

#line 3066 "compile_target_code.m"
            {
#line 3066 "compile_target_code.m"
              mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__JarFileName_10, &backend_libs__compile_target_code__V_26_26);
            }
#line 3066 "compile_target_code.m"
          }
#line 3064 "compile_target_code.m"
        else
#line 3059 "compile_target_code.m"
          {
#line 3059 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__IndexCmd_24;
#line 3059 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_62_62;
#line 3059 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_63_63;
#line 3059 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_65_65;
#line 3062 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_25_25;

#line 3061 "compile_target_code.m"
            {
#line 3061 "compile_target_code.m"
              backend_libs__compile_target_code__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_65_65, 0) = ((MR_Box) (backend_libs__compile_target_code__JarFileName_10));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3061 "compile_target_code.m"
            }
#line 3061 "compile_target_code.m"
            {
#line 3061 "compile_target_code.m"
              backend_libs__compile_target_code__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_63_63, 0) = ((MR_Box) ((MR_String) " i "));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_63_63, 1) = ((MR_Box) (backend_libs__compile_target_code__V_65_65));
#line 3061 "compile_target_code.m"
            }
#line 3061 "compile_target_code.m"
            {
#line 3061 "compile_target_code.m"
              backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) (backend_libs__compile_target_code__Jar_14));
#line 3061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (backend_libs__compile_target_code__V_63_63));
#line 3061 "compile_target_code.m"
            }
#line 3061 "compile_target_code.m"
            {
#line 3061 "compile_target_code.m"
              backend_libs__compile_target_code__IndexCmd_24 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_62_62);
            }
#line 3062 "compile_target_code.m"
            {
#line 3062 "compile_target_code.m"
              parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, (MR_Integer) 1, backend_libs__compile_target_code__IndexCmd_24, &backend_libs__compile_target_code__V_25_25);
            }
#line 3059 "compile_target_code.m"
          }
#line 3047 "compile_target_code.m"
      }
#line 3027 "compile_target_code.m"
  }
#line 3023 "compile_target_code.m"
}

#line 3014 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2(
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3014 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 3014 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
#line 3014 "compile_target_code.m"
{
#line 3014 "compile_target_code.m"
  {
#line 3014 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

#line 3014 "compile_target_code.m"
    {
#line 3014 "compile_target_code.m"
      mercury__io__write_string_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
#line 3014 "compile_target_code.m"
      return;
    }
#line 3014 "compile_target_code.m"
  }
#line 3014 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 3005 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__write_cli_shell_script_5_p_0(
#line 3005 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_6,
#line 3005 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ExeFileName_7,
#line 3005 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_8)
#line 3005 "compile_target_code.m"
{
#line 3008 "compile_target_code.m"
  {
#line 3008 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_56;
#line 3008 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CLI_10;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_11;
#line 3008 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_12;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_20_20;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_21_21;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_24_24;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_26_26;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_28_28;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_29_29;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_31_31;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_33_33;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_35_35;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_36_36;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_38_38;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_40_40;
#line 3008 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_54_54;
#line 3014 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_14;

#line 3009 "compile_target_code.m"
    {
#line 3009 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 524, &backend_libs__compile_target_code__CLI_10);
    }
#line 3010 "compile_target_code.m"
    {
#line 3010 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 538, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
#line 5299 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__V_54_54 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_56, backend_libs__compile_target_code__TypeCtorInfo_13_56, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[12], backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_54_54, (MR_String) "", (MR_String) "", (MR_String) ":", &backend_libs__compile_target_code__LinkLibraryDirectories_12);
    }
#line 3014 "compile_target_code.m"
    {
#line 3014 "compile_target_code.m"
      backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3014 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[2]));
#line 3014 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2));
#line 3014 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3014 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 3) = ((MR_Box) (backend_libs__compile_target_code__Stream_8));
#line 3014 "compile_target_code.m"
    }
#line 3020 "compile_target_code.m"
    {
#line 3020 "compile_target_code.m"
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3020 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) (backend_libs__compile_target_code__ExeFileName_7));
#line 3020 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
#line 3020 "compile_target_code.m"
    }
#line 3020 "compile_target_code.m"
    {
#line 3020 "compile_target_code.m"
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3020 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) "exec \"\044CLI_INTERPRETER\" \"\044DIR/"));
#line 3020 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
#line 3020 "compile_target_code.m"
    }
#line 3019 "compile_target_code.m"
    {
#line 3019 "compile_target_code.m"
      backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
#line 3019 "compile_target_code.m"
    }
#line 3019 "compile_target_code.m"
    {
#line 3019 "compile_target_code.m"
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) (backend_libs__compile_target_code__CLI_10));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
#line 3019 "compile_target_code.m"
    }
#line 3019 "compile_target_code.m"
    {
#line 3019 "compile_target_code.m"
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) ((MR_String) "CLI_INTERPRETER=\044{CLI_INTERPRETER:-"));
#line 3019 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
#line 3019 "compile_target_code.m"
    }
#line 3018 "compile_target_code.m"
    {
#line 3018 "compile_target_code.m"
      backend_libs__compile_target_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3018 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 0) = ((MR_Box) ((MR_String) "export MONO_PATH\n"));
#line 3018 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 1) = ((MR_Box) (backend_libs__compile_target_code__V_33_33));
#line 3018 "compile_target_code.m"
    }
#line 3017 "compile_target_code.m"
    {
#line 3017 "compile_target_code.m"
      backend_libs__compile_target_code__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 1) = ((MR_Box) (backend_libs__compile_target_code__V_31_31));
#line 3017 "compile_target_code.m"
    }
#line 3017 "compile_target_code.m"
    {
#line 3017 "compile_target_code.m"
      backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_12));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
#line 3017 "compile_target_code.m"
    }
#line 3017 "compile_target_code.m"
    {
#line 3017 "compile_target_code.m"
      backend_libs__compile_target_code__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 0) = ((MR_Box) ((MR_String) "MONO_PATH=\044MONO_PATH:"));
#line 3017 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_26_26, 1) = ((MR_Box) (backend_libs__compile_target_code__V_28_28));
#line 3017 "compile_target_code.m"
    }
#line 3016 "compile_target_code.m"
    {
#line 3016 "compile_target_code.m"
      backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3016 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
#line 3016 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__V_26_26));
#line 3016 "compile_target_code.m"
    }
#line 3015 "compile_target_code.m"
    {
#line 3015 "compile_target_code.m"
      backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3015 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
#line 3015 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_24_24));
#line 3015 "compile_target_code.m"
    }
#line 3014 "compile_target_code.m"
    {
#line 3014 "compile_target_code.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_20_20, backend_libs__compile_target_code__V_21_21, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_14);
    }
#line 3008 "compile_target_code.m"
  }
#line 3005 "compile_target_code.m"
}

#line 2970 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
#line 2970 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__1_1,
#line 2970 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HeadVar__2_2,
#line 2970 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__HeadVar__3_3)
#line 2970 "compile_target_code.m"
{
#line 2973 "compile_target_code.m"
  {
#line 2973 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2973 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HeadVar__4_4;

#line 2973 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HeadVar__1_1 == (MR_Integer) 1))
#line 2973 "compile_target_code.m"
      if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 0))
#line 3002 "compile_target_code.m"
        {
#line 3003 "compile_target_code.m"
          {
#line 3003 "compile_target_code.m"
            return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
          }
#line 3002 "compile_target_code.m"
        }
#line 2973 "compile_target_code.m"
      else
#line 2973 "compile_target_code.m"
        if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 1))
#line 2980 "compile_target_code.m"
          backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
        else
#line 2981 "compile_target_code.m"
          backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
    else
#line 2973 "compile_target_code.m"
      if ((backend_libs__compile_target_code__HeadVar__1_1 == (MR_Integer) 2))
#line 2973 "compile_target_code.m"
        if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 0))
#line 3002 "compile_target_code.m"
          {
#line 3003 "compile_target_code.m"
            {
#line 3003 "compile_target_code.m"
              return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
            }
#line 3002 "compile_target_code.m"
          }
#line 2973 "compile_target_code.m"
        else
#line 2973 "compile_target_code.m"
          if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 1))
#line 2985 "compile_target_code.m"
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
          else
#line 2986 "compile_target_code.m"
            backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
      else
#line 2973 "compile_target_code.m"
        if ((backend_libs__compile_target_code__HeadVar__1_1 == (MR_Integer) 0))
#line 2973 "compile_target_code.m"
          if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 0))
#line 2973 "compile_target_code.m"
            {
#line 2974 "compile_target_code.m"
              MR_Box backend_libs__compile_target_code__conv0_HeadVar__4_4;

#line 2974 "compile_target_code.m"
              {
#line 2974 "compile_target_code.m"
                backend_libs__compile_target_code__conv0_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "backend_libs.compile_target_code", (MR_String) "function \140backend_libs.compile_target_code.csharp_file_name\'/3", (MR_String) "microsoft c# compiler in posix env");
              }
#line 2974 "compile_target_code.m"
              backend_libs__compile_target_code__HeadVar__4_4 = ((MR_String) backend_libs__compile_target_code__conv0_HeadVar__4_4);
#line 2973 "compile_target_code.m"
            }
#line 2973 "compile_target_code.m"
          else
#line 2973 "compile_target_code.m"
            if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 1))
#line 2975 "compile_target_code.m"
              backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
            else
#line 2976 "compile_target_code.m"
              backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
        else
#line 2973 "compile_target_code.m"
          if ((backend_libs__compile_target_code__HeadVar__1_1 == (MR_Integer) 4))
#line 2973 "compile_target_code.m"
            if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 0))
#line 3002 "compile_target_code.m"
              {
#line 3003 "compile_target_code.m"
                {
#line 3003 "compile_target_code.m"
                  return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
                }
#line 3002 "compile_target_code.m"
              }
#line 2973 "compile_target_code.m"
            else
#line 2973 "compile_target_code.m"
              if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 1))
#line 2996 "compile_target_code.m"
                backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
              else
#line 3002 "compile_target_code.m"
                {
#line 3003 "compile_target_code.m"
                  {
#line 3003 "compile_target_code.m"
                    return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
                  }
#line 3002 "compile_target_code.m"
                }
#line 2973 "compile_target_code.m"
          else
#line 2973 "compile_target_code.m"
            if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 0))
#line 3002 "compile_target_code.m"
              {
#line 3003 "compile_target_code.m"
                {
#line 3003 "compile_target_code.m"
                  return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
                }
#line 3002 "compile_target_code.m"
              }
#line 2973 "compile_target_code.m"
            else
#line 2973 "compile_target_code.m"
              if ((backend_libs__compile_target_code__HeadVar__2_2 == (MR_Integer) 1))
#line 2990 "compile_target_code.m"
                backend_libs__compile_target_code__HeadVar__4_4 = backend_libs__compile_target_code__HeadVar__3_3;
#line 2973 "compile_target_code.m"
              else
#line 3002 "compile_target_code.m"
                {
#line 3003 "compile_target_code.m"
                  {
#line 3003 "compile_target_code.m"
                    return backend_libs__compile_target_code__HeadVar__4_4 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__HeadVar__3_3, (MR_String) "/", (MR_String) "\\\\");
                  }
#line 3002 "compile_target_code.m"
                }
#line 2973 "compile_target_code.m"
    return backend_libs__compile_target_code__HeadVar__4_4;
#line 2973 "compile_target_code.m"
  }
#line 2970 "compile_target_code.m"
}

#line 2959 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 2959 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_2,
#line 2959 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_3)
#line 2959 "compile_target_code.m"
{
#line 2959 "compile_target_code.m"
  {
#line 2959 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

#line 2959 "compile_target_code.m"
    {
#line 2959 "compile_target_code.m"
      backend_libs__compile_target_code__write_cli_shell_script_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1));
#line 2959 "compile_target_code.m"
      return;
    }
#line 2959 "compile_target_code.m"
  }
#line 2959 "compile_target_code.m"
}

#line 2837 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
#line 2837 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2837 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 2837 "compile_target_code.m"
{
#line 2837 "compile_target_code.m"
  {
#line 2837 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 2837 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 2837 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__4_4;

#line 2837 "compile_target_code.m"
    {
#line 2837 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__4_4 = backend_libs__compile_target_code__csharp_file_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 2837 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__4_4));
#line 2837 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 2837 "compile_target_code.m"
  }
#line 2837 "compile_target_code.m"
}

#line 2826 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_13,
#line 2826 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__OutputFileName0_14,
#line 2826 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__SourceList0_15,
#line 2826 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
#line 2826 "compile_target_code.m"
{
#line 2831 "compile_target_code.m"
  {
#line 2831 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_93_93;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__EnvType_18;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__CSharpCompilerType_19;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OutputFileName_20;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceList_21;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NoLogoOpt_22;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LineNumbers_23;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NoWarnLineNumberOpt_24;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HighLevelData_26;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HighLevelDataOpt_27;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Debug_28;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DebugOpt_29;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__CSCFlagsList_30;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TargetOption_31;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SignAssemblyOpt_32;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_35;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_37;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_38;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraries_41;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MercuryStdLibs_42;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Cmd_43;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CmdArgs_44;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Succeeded0_45;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TargetEnvType_46;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CLI_47;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_50_50;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_73_73;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_74_74;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_75_75;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_76_76;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_77_77;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_78_78;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_79_79;
#line 2831 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_80_80;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_82_82;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_83_83;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_84_84;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_85_85;
#line 2831 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_87_87;

#line 2832 "compile_target_code.m"
    {
#line 2832 "compile_target_code.m"
      libs__globals__get_system_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__EnvType_18);
    }
#line 2833 "compile_target_code.m"
    {
#line 2833 "compile_target_code.m"
      libs__globals__get_csharp_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__CSharpCompilerType_19);
    }
#line 2835 "compile_target_code.m"
    {
#line 2835 "compile_target_code.m"
      backend_libs__compile_target_code__OutputFileName_20 = backend_libs__compile_target_code__csharp_file_name_3_f_0(backend_libs__compile_target_code__EnvType_18, backend_libs__compile_target_code__CSharpCompilerType_19, backend_libs__compile_target_code__OutputFileName0_14);
    }
#line 5791 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_93_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2837 "compile_target_code.m"
    {
#line 2837 "compile_target_code.m"
      backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2837 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[1]));
#line 2837 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1));
#line 2837 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2837 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 3) = ((MR_Box) (backend_libs__compile_target_code__EnvType_18));
#line 2837 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_50_50, 4) = ((MR_Box) (backend_libs__compile_target_code__CSharpCompilerType_19));
#line 2837 "compile_target_code.m"
    }
#line 2837 "compile_target_code.m"
    {
#line 2837 "compile_target_code.m"
      backend_libs__compile_target_code__SourceList_21 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__SourceList0_15);
    }
#line 2844 "compile_target_code.m"
    if ((backend_libs__compile_target_code__CSharpCompilerType_19 == (MR_Integer) 0))
#line 2843 "compile_target_code.m"
      backend_libs__compile_target_code__NoLogoOpt_22 = (MR_String) "-nologo ";
#line 2844 "compile_target_code.m"
    else
#line 2848 "compile_target_code.m"
      backend_libs__compile_target_code__NoLogoOpt_22 = (MR_String) "";
#line 2851 "compile_target_code.m"
    {
#line 2851 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 133, &backend_libs__compile_target_code__LineNumbers_23);
    }
#line 2859 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LineNumbers_23 == (MR_Integer) 0))
#line 2861 "compile_target_code.m"
      backend_libs__compile_target_code__NoWarnLineNumberOpt_24 = (MR_String) "";
#line 2859 "compile_target_code.m"
    else
#line 2858 "compile_target_code.m"
      backend_libs__compile_target_code__NoWarnLineNumberOpt_24 = (MR_String) "-nowarn:162,219 ";
#line 2866 "compile_target_code.m"
    {
#line 2866 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 521, &backend_libs__compile_target_code__Cmd_43);
    }
#line 2867 "compile_target_code.m"
    {
#line 2867 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 249, &backend_libs__compile_target_code__HighLevelData_26);
    }
#line 2871 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HighLevelData_26 == (MR_Integer) 0))
#line 2873 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelDataOpt_27 = (MR_String) "";
#line 2871 "compile_target_code.m"
    else
#line 2870 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelDataOpt_27 = (MR_String) "-define:MR_HIGHLEVEL_DATA";
#line 2875 "compile_target_code.m"
    {
#line 2875 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 481, &backend_libs__compile_target_code__Debug_28);
    }
#line 2879 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Debug_28 == (MR_Integer) 0))
#line 2881 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_29 = (MR_String) "";
#line 2879 "compile_target_code.m"
    else
#line 2878 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_29 = (MR_String) "-debug ";
#line 2883 "compile_target_code.m"
    {
#line 2883 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 522, &backend_libs__compile_target_code__CSCFlagsList_30);
    }
#line 2888 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 3))
#line 2885 "compile_target_code.m"
      {
#line 2886 "compile_target_code.m"
        backend_libs__compile_target_code__TargetOption_31 = (MR_String) "-target:exe";
#line 2887 "compile_target_code.m"
        backend_libs__compile_target_code__SignAssemblyOpt_32 = (MR_String) "";
#line 2885 "compile_target_code.m"
      }
#line 2888 "compile_target_code.m"
    else
#line 2888 "compile_target_code.m"
      if ((backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 4))
#line 2889 "compile_target_code.m"
        {
#line 2889 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__KeyFile_33;

#line 2890 "compile_target_code.m"
          backend_libs__compile_target_code__TargetOption_31 = (MR_String) "-target:library";
#line 2891 "compile_target_code.m"
          {
#line 2891 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 566, &backend_libs__compile_target_code__KeyFile_33);
          }
#line 2892 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__KeyFile_33, (MR_String) "") == 0);
#line 2894 "compile_target_code.m"
          if (backend_libs__compile_target_code__succeeded)
#line 2893 "compile_target_code.m"
            backend_libs__compile_target_code__SignAssemblyOpt_32 = (MR_String) "";
#line 2894 "compile_target_code.m"
          else
#line 2894 "compile_target_code.m"
            {
#line 2894 "compile_target_code.m"
              MR_String backend_libs__compile_target_code__V_61_61;

#line 2894 "compile_target_code.m"
              {
#line 2894 "compile_target_code.m"
                backend_libs__compile_target_code__V_61_61 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__KeyFile_33, (MR_String) " ");
              }
#line 2894 "compile_target_code.m"
              {
#line 2894 "compile_target_code.m"
                backend_libs__compile_target_code__SignAssemblyOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", backend_libs__compile_target_code__V_61_61);
              }
#line 2894 "compile_target_code.m"
            }
#line 2889 "compile_target_code.m"
        }
#line 2888 "compile_target_code.m"
      else
#line 2904 "compile_target_code.m"
        {
#line 2905 "compile_target_code.m"
          {
#line 2905 "compile_target_code.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.create_csharp_exe_or_lib\'/9", (MR_String) "wrong target type");
#line 2905 "compile_target_code.m"
            return;
          }
#line 2904 "compile_target_code.m"
        }
#line 2908 "compile_target_code.m"
    {
#line 2908 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 538, &backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34);
    }
#line 2911 "compile_target_code.m"
    {
#line 2911 "compile_target_code.m"
      backend_libs__compile_target_code__LinkLibraryDirectoriesList_35 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__LinkLibraryDirectoriesList0_34);
    }
#line 2914 "compile_target_code.m"
    {
#line 2914 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibraryDirectoriesList_35, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_37);
    }
#line 2917 "compile_target_code.m"
    {
#line 2917 "compile_target_code.m"
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__MaybeLinkLibraries_38);
    }
#line 2925 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2927 "compile_target_code.m"
      backend_libs__compile_target_code__LinkLibraries_41 = (MR_String) "";
#line 2925 "compile_target_code.m"
    else
#line 2919 "compile_target_code.m"
      {
#line 2919 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__LinkLibrariesList0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_38, (MR_Integer) 0)));
#line 2919 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_40;

#line 2921 "compile_target_code.m"
        {
#line 2921 "compile_target_code.m"
          backend_libs__compile_target_code__LinkLibrariesList_40 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_50_50, backend_libs__compile_target_code__LinkLibrariesList0_39);
        }
#line 2923 "compile_target_code.m"
        {
#line 2923 "compile_target_code.m"
          backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_40, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_41);
        }
#line 2919 "compile_target_code.m"
      }
#line 2930 "compile_target_code.m"
    {
#line 2930 "compile_target_code.m"
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__MercuryStdLibs_42);
    }
#line 2939 "compile_target_code.m"
    {
#line 2939 "compile_target_code.m"
      backend_libs__compile_target_code__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", backend_libs__compile_target_code__OutputFileName_20);
    }
#line 2943 "compile_target_code.m"
    {
#line 2943 "compile_target_code.m"
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2943 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_42));
#line 2943 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2943 "compile_target_code.m"
    }
#line 2942 "compile_target_code.m"
    {
#line 2942 "compile_target_code.m"
      backend_libs__compile_target_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2942 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_41));
#line 2942 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
#line 2942 "compile_target_code.m"
    }
#line 2941 "compile_target_code.m"
    {
#line 2941 "compile_target_code.m"
      backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2941 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_37));
#line 2941 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (backend_libs__compile_target_code__V_84_84));
#line 2941 "compile_target_code.m"
    }
#line 2940 "compile_target_code.m"
    {
#line 2940 "compile_target_code.m"
      backend_libs__compile_target_code__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2940 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_82_82, 0) = ((MR_Box) (backend_libs__compile_target_code__SignAssemblyOpt_32));
#line 2940 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_82_82, 1) = ((MR_Box) (backend_libs__compile_target_code__V_83_83));
#line 2940 "compile_target_code.m"
    }
#line 2939 "compile_target_code.m"
    {
#line 2939 "compile_target_code.m"
      backend_libs__compile_target_code__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2939 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 0) = ((MR_Box) (backend_libs__compile_target_code__V_80_80));
#line 2939 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 1) = ((MR_Box) (backend_libs__compile_target_code__V_82_82));
#line 2939 "compile_target_code.m"
    }
#line 2938 "compile_target_code.m"
    {
#line 2938 "compile_target_code.m"
      backend_libs__compile_target_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2938 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 0) = ((MR_Box) (backend_libs__compile_target_code__TargetOption_31));
#line 2938 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 1) = ((MR_Box) (backend_libs__compile_target_code__V_79_79));
#line 2938 "compile_target_code.m"
    }
#line 2937 "compile_target_code.m"
    {
#line 2937 "compile_target_code.m"
      backend_libs__compile_target_code__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2937 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpt_29));
#line 2937 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_77_77, 1) = ((MR_Box) (backend_libs__compile_target_code__V_78_78));
#line 2937 "compile_target_code.m"
    }
#line 2936 "compile_target_code.m"
    {
#line 2936 "compile_target_code.m"
      backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2936 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelDataOpt_27));
#line 2936 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (backend_libs__compile_target_code__V_77_77));
#line 2936 "compile_target_code.m"
    }
#line 2935 "compile_target_code.m"
    {
#line 2935 "compile_target_code.m"
      backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2935 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__NoWarnLineNumberOpt_24));
#line 2935 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
#line 2935 "compile_target_code.m"
    }
#line 2934 "compile_target_code.m"
    {
#line 2934 "compile_target_code.m"
      backend_libs__compile_target_code__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2934 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 0) = ((MR_Box) (backend_libs__compile_target_code__NoLogoOpt_22));
#line 2934 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 1) = ((MR_Box) (backend_libs__compile_target_code__V_75_75));
#line 2934 "compile_target_code.m"
    }
#line 2944 "compile_target_code.m"
    {
#line 2944 "compile_target_code.m"
      backend_libs__compile_target_code__V_87_87 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__CSCFlagsList_30, backend_libs__compile_target_code__SourceList_21);
    }
#line 2943 "compile_target_code.m"
    {
#line 2943 "compile_target_code.m"
      backend_libs__compile_target_code__V_73_73 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_93_93, backend_libs__compile_target_code__V_74_74, backend_libs__compile_target_code__V_87_87);
    }
#line 2933 "compile_target_code.m"
    {
#line 2933 "compile_target_code.m"
      backend_libs__compile_target_code__CmdArgs_44 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_73_73);
    }
#line 2946 "compile_target_code.m"
    {
#line 2946 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_long_system_command_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__Cmd_43, backend_libs__compile_target_code__CmdArgs_44, &backend_libs__compile_target_code__Succeeded0_45);
    }
#line 2950 "compile_target_code.m"
    {
#line 2950 "compile_target_code.m"
      libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__TargetEnvType_46);
    }
#line 2951 "compile_target_code.m"
    {
#line 2951 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 524, &backend_libs__compile_target_code__CLI_47);
    }
#line 2953 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Succeeded0_45 == (MR_Integer) 1);
#line 2953 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2953 "compile_target_code.m"
      {
#line 2954 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 3);
#line 2953 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2953 "compile_target_code.m"
          {
#line 2955 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__CLI_47, (MR_String) "") == 0);
#line 2955 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
#line 2953 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 2956 "compile_target_code.m"
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__TargetEnvType_46 == (MR_Integer) 0);
#line 2953 "compile_target_code.m"
          }
#line 2953 "compile_target_code.m"
      }
#line 2961 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2958 "compile_target_code.m"
      {
#line 2958 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_91_91;

#line 2959 "compile_target_code.m"
        {
#line 2959 "compile_target_code.m"
          backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2959 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[1]));
#line 2959 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2));
#line 2959 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2959 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_10));
#line 2959 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_91_91, 4) = ((MR_Box) (backend_libs__compile_target_code__OutputFileName_20));
#line 2959 "compile_target_code.m"
        }
#line 2958 "compile_target_code.m"
        {
#line 2958 "compile_target_code.m"
          parse_tree__module_cmds__create_launcher_shell_script_6_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_13, backend_libs__compile_target_code__V_91_91, backend_libs__compile_target_code__Succeeded_16);
#line 2958 "compile_target_code.m"
          return;
        }
#line 2958 "compile_target_code.m"
      }
#line 2961 "compile_target_code.m"
    else
#line 2962 "compile_target_code.m"
      *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__Succeeded0_45;
#line 2831 "compile_target_code.m"
  }
#line 2826 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 2762 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0(
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 2762 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibFileName_11,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Quote_12,
#line 2762 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectList_13,
#line 2762 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 2762 "compile_target_code.m"
{
#line 2766 "compile_target_code.m"
  {
#line 2766 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ArCmd_16;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ArFlagsList_17;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ArFlags_18;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ArOutputFlag_19;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RanLib_20;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Objects_21;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_CompilerType_22;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ArOutputSpace_24;
#line 2766 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MakeLibCmdArgs_29;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MakeLibCmdSucceeded_30;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_47_47;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_48_48;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_50_50;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_51_51;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_52_52;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_53_53;
#line 2766 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_55_55;

#line 2767 "compile_target_code.m"
    {
#line 2767 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 573, &backend_libs__compile_target_code__ArCmd_16);
    }
#line 2768 "compile_target_code.m"
    {
#line 2768 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 575, &backend_libs__compile_target_code__ArFlagsList_17);
    }
#line 2770 "compile_target_code.m"
    {
#line 2770 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__ArFlagsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__ArFlags_18);
    }
#line 2771 "compile_target_code.m"
    {
#line 2771 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 574, &backend_libs__compile_target_code__ArOutputFlag_19);
    }
#line 2773 "compile_target_code.m"
    {
#line 2773 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 576, &backend_libs__compile_target_code__RanLib_20);
    }
#line 2777 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Quote_12 == (MR_Integer) 0))
#line 2778 "compile_target_code.m"
      {
#line 2782 "compile_target_code.m"
        {
#line 2782 "compile_target_code.m"
          backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_21);
        }
#line 2778 "compile_target_code.m"
      }
#line 2777 "compile_target_code.m"
    else
#line 2775 "compile_target_code.m"
      {
#line 2775 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2775 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_71_71;

#line 3236 "compile_target_code.m"
        {
#line 3236 "compile_target_code.m"
          backend_libs__compile_target_code__V_71_71 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_73, backend_libs__compile_target_code__TypeCtorInfo_13_73, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[11], backend_libs__compile_target_code__ObjectList_13);
        }
#line 3236 "compile_target_code.m"
        {
#line 3236 "compile_target_code.m"
          backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_71_71, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_21);
        }
#line 2775 "compile_target_code.m"
      }
#line 2790 "compile_target_code.m"
    {
#line 2790 "compile_target_code.m"
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__C_CompilerType_22);
    }
#line 2796 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_22)) == (MR_mktag((MR_Integer) 3))))
#line 2795 "compile_target_code.m"
      backend_libs__compile_target_code__ArOutputSpace_24 = (MR_String) "";
#line 2796 "compile_target_code.m"
    else
#line 2802 "compile_target_code.m"
      backend_libs__compile_target_code__ArOutputSpace_24 = (MR_String) " ";
#line 2808 "compile_target_code.m"
    {
#line 2808 "compile_target_code.m"
      backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2808 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__Objects_21));
#line 2808 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2808 "compile_target_code.m"
    }
#line 2807 "compile_target_code.m"
    {
#line 2807 "compile_target_code.m"
      backend_libs__compile_target_code__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
#line 2807 "compile_target_code.m"
    }
#line 2807 "compile_target_code.m"
    {
#line 2807 "compile_target_code.m"
      backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) (backend_libs__compile_target_code__LibFileName_11));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
#line 2807 "compile_target_code.m"
    }
#line 2807 "compile_target_code.m"
    {
#line 2807 "compile_target_code.m"
      backend_libs__compile_target_code__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 0) = ((MR_Box) (backend_libs__compile_target_code__ArOutputSpace_24));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_51_51, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
#line 2807 "compile_target_code.m"
    }
#line 2807 "compile_target_code.m"
    {
#line 2807 "compile_target_code.m"
      backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) (backend_libs__compile_target_code__ArOutputFlag_19));
#line 2807 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_51_51));
#line 2807 "compile_target_code.m"
    }
#line 2806 "compile_target_code.m"
    {
#line 2806 "compile_target_code.m"
      backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2806 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) ((MR_String) " "));
#line 2806 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
#line 2806 "compile_target_code.m"
    }
#line 2806 "compile_target_code.m"
    {
#line 2806 "compile_target_code.m"
      backend_libs__compile_target_code__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2806 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 0) = ((MR_Box) (backend_libs__compile_target_code__ArFlags_18));
#line 2806 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
#line 2806 "compile_target_code.m"
    }
#line 2805 "compile_target_code.m"
    {
#line 2805 "compile_target_code.m"
      backend_libs__compile_target_code__MakeLibCmdArgs_29 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_47_47);
    }
#line 3485 "compile_target_code.m"
    {
#line 3485 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__ArCmd_16, backend_libs__compile_target_code__MakeLibCmdArgs_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__compile_target_code__MakeLibCmdSucceeded_30);
    }
#line 2815 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__RanLib_20, (MR_String) "") == 0);
#line 2816 "compile_target_code.m"
    if (!(backend_libs__compile_target_code__succeeded))
#line 2816 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__MakeLibCmdSucceeded_30 == (MR_Integer) 0);
#line 2820 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2819 "compile_target_code.m"
      *backend_libs__compile_target_code__Succeeded_14 = backend_libs__compile_target_code__MakeLibCmdSucceeded_30;
#line 2820 "compile_target_code.m"
    else
#line 2821 "compile_target_code.m"
      {
#line 2821 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__RanLibCmd_31;
#line 2821 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_59_59;
#line 2821 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_60_60;
#line 2821 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_62_62;

#line 2821 "compile_target_code.m"
        {
#line 2821 "compile_target_code.m"
          backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) (backend_libs__compile_target_code__LibFileName_11));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2821 "compile_target_code.m"
        }
#line 2821 "compile_target_code.m"
        {
#line 2821 "compile_target_code.m"
          backend_libs__compile_target_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 0) = ((MR_Box) ((MR_String) " "));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 1) = ((MR_Box) (backend_libs__compile_target_code__V_62_62));
#line 2821 "compile_target_code.m"
        }
#line 2821 "compile_target_code.m"
        {
#line 2821 "compile_target_code.m"
          backend_libs__compile_target_code__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 0) = ((MR_Box) (backend_libs__compile_target_code__RanLib_20));
#line 2821 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_59_59, 1) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
#line 2821 "compile_target_code.m"
        }
#line 2821 "compile_target_code.m"
        {
#line 2821 "compile_target_code.m"
          backend_libs__compile_target_code__RanLibCmd_31 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_59_59);
        }
#line 2822 "compile_target_code.m"
        {
#line 2822 "compile_target_code.m"
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, (MR_Integer) 1, backend_libs__compile_target_code__RanLibCmd_31, backend_libs__compile_target_code__Succeeded_14);
#line 2822 "compile_target_code.m"
          return;
        }
#line 2821 "compile_target_code.m"
      }
#line 2766 "compile_target_code.m"
  }
#line 2762 "compile_target_code.m"
}

#line 2703 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__process_link_library_8_p_0(
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MercuryLibDirs_10,
#line 2703 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibName_11,
#line 2703 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__LinkerOpt_12,
#line 2703 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_27,
#line 2703 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_28)
#line 2703 "compile_target_code.m"
{
#line 2707 "compile_target_code.m"
  {
#line 2707 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2707 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Target_15;
#line 2707 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MercuryLinkage_16;
#line 2707 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkOpt_17;
#line 2707 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LibSuffix_18;
#line 2707 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MercuryLibs_19;
#line 2733 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_59_59;

#line 2708 "compile_target_code.m"
    {
#line 2708 "compile_target_code.m"
      libs__globals__get_target_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__Target_15);
    }
#line 2714 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Target_15 == (MR_Integer) 0))
#line 2710 "compile_target_code.m"
      {
#line 2711 "compile_target_code.m"
        {
#line 2711 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 555, &backend_libs__compile_target_code__MercuryLinkage_16);
        }
#line 2712 "compile_target_code.m"
        backend_libs__compile_target_code__LinkOpt_17 = (MR_String) "-l";
#line 2713 "compile_target_code.m"
        backend_libs__compile_target_code__LibSuffix_18 = (MR_String) "";
#line 2710 "compile_target_code.m"
      }
#line 2714 "compile_target_code.m"
    else
#line 2714 "compile_target_code.m"
      if ((backend_libs__compile_target_code__Target_15 == (MR_Integer) 2))
#line 2715 "compile_target_code.m"
        {
#line 2716 "compile_target_code.m"
          backend_libs__compile_target_code__MercuryLinkage_16 = (MR_String) "shared";
#line 2717 "compile_target_code.m"
          backend_libs__compile_target_code__LinkOpt_17 = (MR_String) "-r:";
#line 2718 "compile_target_code.m"
          backend_libs__compile_target_code__LibSuffix_18 = (MR_String) ".dll";
#line 2715 "compile_target_code.m"
        }
#line 2714 "compile_target_code.m"
      else
#line 2714 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Target_15 == (MR_Integer) 4))
#line 2726 "compile_target_code.m"
          {
#line 2727 "compile_target_code.m"
            {
#line 2727 "compile_target_code.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_erlang");
#line 2727 "compile_target_code.m"
              return;
            }
#line 2726 "compile_target_code.m"
          }
#line 2714 "compile_target_code.m"
        else
#line 2714 "compile_target_code.m"
          if ((backend_libs__compile_target_code__Target_15 == (MR_Integer) 1))
#line 2720 "compile_target_code.m"
            {
#line 2721 "compile_target_code.m"
              {
#line 2721 "compile_target_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_java");
#line 2721 "compile_target_code.m"
                return;
              }
#line 2720 "compile_target_code.m"
            }
#line 2714 "compile_target_code.m"
          else
#line 2723 "compile_target_code.m"
            {
#line 2724 "compile_target_code.m"
              {
#line 2724 "compile_target_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_java");
#line 2724 "compile_target_code.m"
                return;
              }
#line 2723 "compile_target_code.m"
            }
#line 2730 "compile_target_code.m"
    {
#line 2730 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 546, &backend_libs__compile_target_code__MercuryLibs_19);
    }
#line 2733 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_16, (MR_String) "static") == 0);
#line 2733 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2733 "compile_target_code.m"
      {
#line 6619 "backend_libs.compile_target_code.c"
        backend_libs__compile_target_code__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2734 "compile_target_code.m"
        {
#line 2734 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = mercury__list__member_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_59_59, ((MR_Box) (backend_libs__compile_target_code__LibName_11)), backend_libs__compile_target_code__MercuryLibs_19);
        }
#line 2733 "compile_target_code.m"
      }
#line 2758 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2738 "compile_target_code.m"
      {
#line 2738 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__LibModuleName_20;
#line 2738 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__LibExt_21;
#line 2738 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__NoSubDirGlobals_22;
#line 2738 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__LibFileName_23;
#line 2738 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__SearchResult_24;

#line 2738 "compile_target_code.m"
        {
#line 2738 "compile_target_code.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__LibName_11, &backend_libs__compile_target_code__LibModuleName_20);
        }
#line 2739 "compile_target_code.m"
        {
#line 2739 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 569, &backend_libs__compile_target_code__LibExt_21);
        }
#line 2741 "compile_target_code.m"
        {
#line 2741 "compile_target_code.m"
          libs__globals__set_option_4_p_0((MR_Integer) 641, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_6[0]), backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__NoSubDirGlobals_22);
        }
#line 2743 "compile_target_code.m"
        {
#line 2743 "compile_target_code.m"
          parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__NoSubDirGlobals_22, (MR_String) "lib", backend_libs__compile_target_code__LibModuleName_20, backend_libs__compile_target_code__LibExt_21, (MR_Integer) 1, &backend_libs__compile_target_code__LibFileName_23);
        }
#line 2746 "compile_target_code.m"
        {
#line 2746 "compile_target_code.m"
          libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, backend_libs__compile_target_code__MercuryLibDirs_10, backend_libs__compile_target_code__LibFileName_23, &backend_libs__compile_target_code__SearchResult_24);
        }
#line 2751 "compile_target_code.m"
        if (((MR_tag((MR_Word) backend_libs__compile_target_code__SearchResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 2752 "compile_target_code.m"
          {
#line 2752 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Error_26 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SearchResult_24, (MR_Integer) 0)));
#line 2752 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_53_53;
#line 2752 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_55_55;

#line 2753 "compile_target_code.m"
            *backend_libs__compile_target_code__LinkerOpt_12 = (MR_String) "";
#line 2755 "compile_target_code.m"
            {
#line 2755 "compile_target_code.m"
              backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2755 "compile_target_code.m"
              MR_hl_field(MR_mktag(3), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2755 "compile_target_code.m"
              MR_hl_field(MR_mktag(3), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (backend_libs__compile_target_code__Error_26));
#line 2755 "compile_target_code.m"
            }
#line 2755 "compile_target_code.m"
            {
#line 2755 "compile_target_code.m"
              backend_libs__compile_target_code__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2755 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 0) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
#line 2755 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2755 "compile_target_code.m"
            }
#line 2754 "compile_target_code.m"
            {
#line 2754 "compile_target_code.m"
              parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(backend_libs__compile_target_code__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, backend_libs__compile_target_code__V_53_53);
            }
#line 2756 "compile_target_code.m"
            *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_28 = (MR_Integer) 0;
#line 2752 "compile_target_code.m"
          }
#line 2751 "compile_target_code.m"
        else
#line 2749 "compile_target_code.m"
          {
#line 2749 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__DirName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__SearchResult_24, (MR_Integer) 0)));

#line 2750 "compile_target_code.m"
            {
#line 2750 "compile_target_code.m"
              *backend_libs__compile_target_code__LinkerOpt_12 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__DirName_25, backend_libs__compile_target_code__LibFileName_23);
            }
#line 2750 "compile_target_code.m"
            *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_28 = backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_27;
#line 2749 "compile_target_code.m"
          }
#line 2738 "compile_target_code.m"
      }
#line 2758 "compile_target_code.m"
    else
#line 2759 "compile_target_code.m"
      {
#line 2759 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_58_58;

#line 2759 "compile_target_code.m"
        {
#line 2759 "compile_target_code.m"
          backend_libs__compile_target_code__V_58_58 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LibName_11, backend_libs__compile_target_code__LibSuffix_18);
        }
#line 2759 "compile_target_code.m"
        {
#line 2759 "compile_target_code.m"
          *backend_libs__compile_target_code__LinkerOpt_12 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkOpt_17, backend_libs__compile_target_code__V_58_58);
        }
#line 2759 "compile_target_code.m"
        *backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_28 = backend_libs__compile_target_code__STATE_VARIABLE_Succeeded_0_27;
#line 2759 "compile_target_code.m"
      }
#line 2707 "compile_target_code.m"
  }
#line 2703 "compile_target_code.m"
}

#line 2680 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
#line 2680 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3)
#line 2680 "compile_target_code.m"
{
#line 2682 "compile_target_code.m"
  {
#line 2682 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2682 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Flags_4;
#line 2682 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__ReserveStackSize_5;

#line 2683 "compile_target_code.m"
    {
#line 2683 "compile_target_code.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 567, &backend_libs__compile_target_code__ReserveStackSize_5);
    }
#line 2684 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ReserveStackSize_5 == (MR_Integer) -1);
#line 2686 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2685 "compile_target_code.m"
      backend_libs__compile_target_code__Flags_4 = (MR_String) "";
#line 2686 "compile_target_code.m"
    else
#line 2687 "compile_target_code.m"
      {
#line 2687 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__C_CompilerType_6;

#line 2687 "compile_target_code.m"
        {
#line 2687 "compile_target_code.m"
          libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__C_CompilerType_6);
        }
#line 2695 "compile_target_code.m"
        if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_6)) == (MR_mktag((MR_Integer) 3))))
#line 2696 "compile_target_code.m"
          {
#line 2696 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_21_21;

#line 6800 "backend_libs.compile_target_code.c"
            {
#line 6802 "backend_libs.compile_target_code.c"
              backend_libs__compile_target_code__V_21_21 = mercury__string__int_to_string_1_f_0(backend_libs__compile_target_code__ReserveStackSize_5);
            }
#line 6805 "backend_libs.compile_target_code.c"
            {
#line 6807 "backend_libs.compile_target_code.c"
              return backend_libs__compile_target_code__Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-stack:", backend_libs__compile_target_code__V_21_21);
            }
#line 2696 "compile_target_code.m"
          }
#line 2695 "compile_target_code.m"
        else
#line 2693 "compile_target_code.m"
          {
#line 2693 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_23_23;

#line 6819 "backend_libs.compile_target_code.c"
            {
#line 6821 "backend_libs.compile_target_code.c"
              backend_libs__compile_target_code__V_23_23 = mercury__string__int_to_string_1_f_0(backend_libs__compile_target_code__ReserveStackSize_5);
            }
#line 6824 "backend_libs.compile_target_code.c"
            {
#line 6826 "backend_libs.compile_target_code.c"
              return backend_libs__compile_target_code__Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", backend_libs__compile_target_code__V_23_23);
            }
#line 2693 "compile_target_code.m"
          }
#line 2687 "compile_target_code.m"
      }
#line 2682 "compile_target_code.m"
    return backend_libs__compile_target_code__Flags_4;
#line 2682 "compile_target_code.m"
  }
#line 2680 "compile_target_code.m"
}

#line 2649 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_linker_output_option_3_p_0(
#line 2649 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2649 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
#line 2649 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__OutputOpt_6)
#line 2649 "compile_target_code.m"
{
#line 2652 "compile_target_code.m"
  {
#line 2652 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2652 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_CompilerType_7;

#line 2653 "compile_target_code.m"
    {
#line 2653 "compile_target_code.m"
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_7);
    }
#line 2671 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_7)) == (MR_mktag((MR_Integer) 3))))
#line 2665 "compile_target_code.m"
      {
#line 2660 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_5 == (MR_Integer) 0);
#line 2665 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2664 "compile_target_code.m"
          *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -Fe";
#line 2665 "compile_target_code.m"
        else
#line 2669 "compile_target_code.m"
          *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -o ";
#line 2665 "compile_target_code.m"
      }
#line 2671 "compile_target_code.m"
    else
#line 2677 "compile_target_code.m"
      *backend_libs__compile_target_code__OutputOpt_6 = (MR_String) " -o ";
#line 2652 "compile_target_code.m"
  }
#line 2649 "compile_target_code.m"
}

#line 2630 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__same_timestamp_5_p_0(
#line 2630 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileNameA_6,
#line 2630 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileNameB_7,
#line 2630 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__SameTimestamp_8)
#line 2630 "compile_target_code.m"
{
#line 2633 "compile_target_code.m"
  {
#line 2633 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2633 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeCompare_10;
#line 2633 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TimeResultA_21;
#line 2633 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TimeResultB_22;
#line 1719 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TimeA_23;
#line 1719 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TimeB_24;
#line 2635 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_14_14;

#line 1711 "compile_target_code.m"
    {
#line 1711 "compile_target_code.m"
      mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__FileNameA_6, &backend_libs__compile_target_code__TimeResultA_21);
    }
#line 1712 "compile_target_code.m"
    {
#line 1712 "compile_target_code.m"
      mercury__io__file_modification_time_4_p_0(backend_libs__compile_target_code__FileNameB_7, &backend_libs__compile_target_code__TimeResultB_22);
    }
#line 1714 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultA_21)) == (MR_mktag((MR_Integer) 0)));
#line 1714 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1714 "compile_target_code.m"
      {
#line 1714 "compile_target_code.m"
        backend_libs__compile_target_code__TimeA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultA_21, (MR_Integer) 0)));
#line 1715 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__TimeResultB_22)) == (MR_mktag((MR_Integer) 0)));
#line 1715 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1715 "compile_target_code.m"
          backend_libs__compile_target_code__TimeB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__TimeResultB_22, (MR_Integer) 0)));
#line 1714 "compile_target_code.m"
      }
#line 1719 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1717 "compile_target_code.m"
      {
#line 1717 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Compare_25;

#line 1717 "compile_target_code.m"
        {
#line 1717 "compile_target_code.m"
          mercury__time____Compare____time_t_0_0(&backend_libs__compile_target_code__Compare_25, backend_libs__compile_target_code__TimeA_23, backend_libs__compile_target_code__TimeB_24);
        }
#line 1718 "compile_target_code.m"
        {
#line 1718 "compile_target_code.m"
          backend_libs__compile_target_code__MaybeCompare_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_10, 0) = ((MR_Box) (backend_libs__compile_target_code__Compare_25));
#line 1718 "compile_target_code.m"
        }
#line 1717 "compile_target_code.m"
      }
#line 1719 "compile_target_code.m"
    else
#line 1720 "compile_target_code.m"
      backend_libs__compile_target_code__MaybeCompare_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2635 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = ((MR_tag((MR_Word) backend_libs__compile_target_code__MaybeCompare_10)) == (MR_mktag((MR_Integer) 1)));
#line 2635 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2635 "compile_target_code.m"
      {
#line 2635 "compile_target_code.m"
        backend_libs__compile_target_code__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeCompare_10, (MR_Integer) 0)));
#line 2635 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_14_14 == (MR_Integer) 0);
#line 2635 "compile_target_code.m"
      }
#line 2637 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2636 "compile_target_code.m"
      *backend_libs__compile_target_code__SameTimestamp_8 = (MR_Integer) 1;
#line 2637 "compile_target_code.m"
    else
#line 2638 "compile_target_code.m"
      *backend_libs__compile_target_code__SameTimestamp_8 = (MR_Integer) 0;
#line 2633 "compile_target_code.m"
  }
#line 2630 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 2624 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_frameworks_2_p_0(
#line 2624 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2624 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FrameworkOpts_4)
#line 2624 "compile_target_code.m"
{
#line 2626 "compile_target_code.m"
  {
#line 2626 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2626 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_17;
#line 2626 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Frameworks_5;
#line 2626 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_15_15;

#line 2627 "compile_target_code.m"
    {
#line 2627 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 564, &backend_libs__compile_target_code__Frameworks_5);
    }
#line 7050 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__V_15_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_17, backend_libs__compile_target_code__TypeCtorInfo_13_17, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[10], backend_libs__compile_target_code__Frameworks_5);
    }
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_15_15, (MR_String) "-framework ", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__FrameworkOpts_4);
#line 3236 "compile_target_code.m"
      return;
    }
#line 2626 "compile_target_code.m"
  }
#line 2624 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 2617 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_framework_directories_2_p_0(
#line 2617 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2617 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FrameworkDirs_4)
#line 2617 "compile_target_code.m"
{
#line 2619 "compile_target_code.m"
  {
#line 2619 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2619 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_17;
#line 2619 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__FrameworkDirs0_5;
#line 2619 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_15_15;

#line 2620 "compile_target_code.m"
    {
#line 2620 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 565, &backend_libs__compile_target_code__FrameworkDirs0_5);
    }
#line 7126 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__V_15_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_17, backend_libs__compile_target_code__TypeCtorInfo_13_17, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[9], backend_libs__compile_target_code__FrameworkDirs0_5);
    }
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_15_15, (MR_String) "-F", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__FrameworkDirs_4);
#line 3236 "compile_target_code.m"
      return;
    }
#line 2619 "compile_target_code.m"
  }
#line 2617 "compile_target_code.m"
}

#line 2544 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__has_object_file_extension_4_p_0(
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ObjExt_5,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__PicObjExt_6,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LinkWithPicObjExt_7,
#line 2544 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__FileName_8)
#line 2544 "compile_target_code.m"
{
#line 2549 "compile_target_code.m"
  {
#line 2549 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 2549 "compile_target_code.m"
    {
#line 2549 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = mercury__string__suffix_2_p_0(backend_libs__compile_target_code__FileName_8, backend_libs__compile_target_code__ObjExt_5);
    }
#line 2549 "compile_target_code.m"
    if (!(backend_libs__compile_target_code__succeeded))
#line 2549 "compile_target_code.m"
      {
#line 2551 "compile_target_code.m"
        {
#line 2551 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = mercury__string__suffix_2_p_0(backend_libs__compile_target_code__FileName_8, backend_libs__compile_target_code__PicObjExt_6);
        }
#line 2549 "compile_target_code.m"
        if (!(backend_libs__compile_target_code__succeeded))
#line 2553 "compile_target_code.m"
          {
#line 2553 "compile_target_code.m"
            return backend_libs__compile_target_code__succeeded = mercury__string__suffix_2_p_0(backend_libs__compile_target_code__FileName_8, backend_libs__compile_target_code__LinkWithPicObjExt_7);
          }
#line 2549 "compile_target_code.m"
      }
#line 2549 "compile_target_code.m"
    return backend_libs__compile_target_code__succeeded;
#line 2549 "compile_target_code.m"
  }
#line 2544 "compile_target_code.m"
}

#line 2541 "compile_target_code.m"
static MR_bool MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0_1(
#line 2541 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2541 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 2541 "compile_target_code.m"
{
#line 2541 "compile_target_code.m"
  {
#line 2541 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2541 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;

#line 2541 "compile_target_code.m"
    {
#line 2541 "compile_target_code.m"
      return backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code__has_object_file_extension_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 5))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 2541 "compile_target_code.m"
    return backend_libs__compile_target_code__succeeded;
#line 2541 "compile_target_code.m"
  }
#line 2541 "compile_target_code.m"
}

#line 2532 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__filter_object_files_4_p_0(
#line 2532 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 2532 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Files_6,
#line 2532 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__ObjectFiles_7,
#line 2532 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__NonObjectFiles_8)
#line 2532 "compile_target_code.m"
{
#line 2535 "compile_target_code.m"
  {
#line 2535 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2535 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ObjExt_9;
#line 2535 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__PicObjExt_10;
#line 2535 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkWithPicObjExt_11;
#line 2535 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_15_15;

#line 2536 "compile_target_code.m"
    {
#line 2536 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 504, &backend_libs__compile_target_code__ObjExt_9);
    }
#line 2537 "compile_target_code.m"
    {
#line 2537 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 505, &backend_libs__compile_target_code__PicObjExt_10);
    }
#line 2539 "compile_target_code.m"
    {
#line 2539 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 506, &backend_libs__compile_target_code__LinkWithPicObjExt_11);
    }
#line 2541 "compile_target_code.m"
    {
#line 2541 "compile_target_code.m"
      backend_libs__compile_target_code__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[0]));
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 1) = ((MR_Box) (backend_libs__compile_target_code__filter_object_files_4_p_0_1));
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 3) = ((MR_Box) (backend_libs__compile_target_code__ObjExt_9));
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 4) = ((MR_Box) (backend_libs__compile_target_code__PicObjExt_10));
#line 2541 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_15_15, 5) = ((MR_Box) (backend_libs__compile_target_code__LinkWithPicObjExt_11));
#line 2541 "compile_target_code.m"
    }
#line 2541 "compile_target_code.m"
    {
#line 2541 "compile_target_code.m"
      mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__compile_target_code__V_15_15, backend_libs__compile_target_code__Files_6, backend_libs__compile_target_code__ObjectFiles_7, backend_libs__compile_target_code__NonObjectFiles_8);
#line 2541 "compile_target_code.m"
      return;
    }
#line 2535 "compile_target_code.m"
  }
#line 2532 "compile_target_code.m"
}

#line 2480 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(
#line 2480 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2480 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_5,
#line 2480 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__ResCmdLinkOpts_6)
#line 2480 "compile_target_code.m"
{
#line 2484 "compile_target_code.m"
  {
#line 2484 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2484 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RestrictedCommandLine_7;

#line 2485 "compile_target_code.m"
    {
#line 2485 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_7);
    }
#line 2524 "compile_target_code.m"
    if ((backend_libs__compile_target_code__RestrictedCommandLine_7 == (MR_Integer) 0))
#line 2526 "compile_target_code.m"
      *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
#line 2524 "compile_target_code.m"
    else
#line 2512 "compile_target_code.m"
      if ((backend_libs__compile_target_code__LinkTargetType_5 == (MR_Integer) 0))
#line 2490 "compile_target_code.m"
        {
#line 2490 "compile_target_code.m"
          MR_Word backend_libs__compile_target_code__C_CompilerType_8;

#line 2491 "compile_target_code.m"
          {
#line 2491 "compile_target_code.m"
            libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_8);
          }
#line 2504 "compile_target_code.m"
          if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_8)) == (MR_mktag((MR_Integer) 3))))
#line 2493 "compile_target_code.m"
            {
#line 2503 "compile_target_code.m"
              {
#line 2503 "compile_target_code.m"
                backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[5]), (MR_String) "", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__ResCmdLinkOpts_6);
#line 2503 "compile_target_code.m"
                return;
              }
#line 2493 "compile_target_code.m"
            }
#line 2504 "compile_target_code.m"
          else
#line 2510 "compile_target_code.m"
            *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
#line 2490 "compile_target_code.m"
        }
#line 2512 "compile_target_code.m"
      else
#line 2522 "compile_target_code.m"
        *backend_libs__compile_target_code__ResCmdLinkOpts_6 = (MR_String) "";
#line 2484 "compile_target_code.m"
  }
#line 2480 "compile_target_code.m"
}

#line 2468 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__use_thread_libs_2_p_0(
#line 2468 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 2468 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__UseThreadLibs_4)
#line 2468 "compile_target_code.m"
{
#line 2470 "compile_target_code.m"
  {
#line 2470 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 2471 "compile_target_code.m"
    {
#line 2471 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 210, backend_libs__compile_target_code__UseThreadLibs_4);
#line 2471 "compile_target_code.m"
      return;
    }
#line 2470 "compile_target_code.m"
  }
#line 2468 "compile_target_code.m"
}

#line 2415 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
#line 2415 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2415 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_5,
#line 2415 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__SystemLibs_6)
#line 2415 "compile_target_code.m"
{
#line 2418 "compile_target_code.m"
  {
#line 2418 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2418 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceLevel_7;
#line 2418 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SystemTraceLibs_8;
#line 2418 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseThreadLibs_12;
#line 2418 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ThreadLibs_13;
#line 2418 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OtherSystemLibs_14;
#line 2418 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_28_28;
#line 2418 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_29_29;
#line 2418 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_30_30;
#line 2421 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_15_15;

#line 2420 "compile_target_code.m"
    {
#line 2420 "compile_target_code.m"
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__TraceLevel_7);
    }
#line 2421 "compile_target_code.m"
    {
#line 2421 "compile_target_code.m"
      backend_libs__compile_target_code__V_15_15 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_7);
    }
#line 2421 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_15_15 == (MR_Integer) 1);
#line 2423 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2422 "compile_target_code.m"
      backend_libs__compile_target_code__SystemTraceLibs_8 = (MR_String) "";
#line 2423 "compile_target_code.m"
    else
#line 2424 "compile_target_code.m"
      {
#line 2424 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SystemTraceLibs0_9;
#line 2424 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__UseReadline_10;

#line 2424 "compile_target_code.m"
        {
#line 2424 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 583, &backend_libs__compile_target_code__SystemTraceLibs0_9);
        }
#line 2425 "compile_target_code.m"
        {
#line 2425 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 561, &backend_libs__compile_target_code__UseReadline_10);
        }
#line 2430 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UseReadline_10 == (MR_Integer) 0))
#line 2432 "compile_target_code.m"
          backend_libs__compile_target_code__SystemTraceLibs_8 = backend_libs__compile_target_code__SystemTraceLibs0_9;
#line 2430 "compile_target_code.m"
        else
#line 2427 "compile_target_code.m"
          {
#line 2427 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__ReadlineLibs_11;
#line 2427 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_19_19;

#line 2428 "compile_target_code.m"
            {
#line 2428 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 589, &backend_libs__compile_target_code__ReadlineLibs_11);
            }
#line 2429 "compile_target_code.m"
            {
#line 2429 "compile_target_code.m"
              backend_libs__compile_target_code__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__compile_target_code__ReadlineLibs_11);
            }
#line 2429 "compile_target_code.m"
            {
#line 2429 "compile_target_code.m"
              backend_libs__compile_target_code__SystemTraceLibs_8 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__SystemTraceLibs0_9, backend_libs__compile_target_code__V_19_19);
            }
#line 2427 "compile_target_code.m"
          }
#line 2424 "compile_target_code.m"
      }
#line 2471 "compile_target_code.m"
    {
#line 2471 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 210, &backend_libs__compile_target_code__UseThreadLibs_12);
    }
#line 2441 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseThreadLibs_12 == (MR_Integer) 0))
#line 2443 "compile_target_code.m"
      backend_libs__compile_target_code__ThreadLibs_13 = (MR_String) "";
#line 2441 "compile_target_code.m"
    else
#line 2439 "compile_target_code.m"
      {
#line 2440 "compile_target_code.m"
        {
#line 2440 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 584, &backend_libs__compile_target_code__ThreadLibs_13);
        }
#line 2439 "compile_target_code.m"
      }
#line 2450 "compile_target_code.m"
    if ((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 0))
#line 2451 "compile_target_code.m"
      {
#line 2452 "compile_target_code.m"
        {
#line 2452 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 588, &backend_libs__compile_target_code__OtherSystemLibs_14);
        }
#line 2451 "compile_target_code.m"
      }
#line 2450 "compile_target_code.m"
    else
#line 2450 "compile_target_code.m"
      if ((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 2))
#line 2448 "compile_target_code.m"
        {
#line 2449 "compile_target_code.m"
          {
#line 2449 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 587, &backend_libs__compile_target_code__OtherSystemLibs_14);
          }
#line 2448 "compile_target_code.m"
        }
#line 2450 "compile_target_code.m"
      else
#line 2461 "compile_target_code.m"
        {
#line 2461 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__V_24_24;

#line 2462 "compile_target_code.m"
          {
#line 2462 "compile_target_code.m"
            backend_libs__compile_target_code__V_24_24 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_5)));
          }
#line 2462 "compile_target_code.m"
          {
#line 2462 "compile_target_code.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_system_libs\'/3", backend_libs__compile_target_code__V_24_24);
#line 2462 "compile_target_code.m"
            return;
          }
#line 2461 "compile_target_code.m"
        }
#line 2466 "compile_target_code.m"
    {
#line 2466 "compile_target_code.m"
      backend_libs__compile_target_code__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadLibs_13));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2466 "compile_target_code.m"
    }
#line 2466 "compile_target_code.m"
    {
#line 2466 "compile_target_code.m"
      backend_libs__compile_target_code__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 0) = ((MR_Box) (backend_libs__compile_target_code__OtherSystemLibs_14));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_29_29, 1) = ((MR_Box) (backend_libs__compile_target_code__V_30_30));
#line 2466 "compile_target_code.m"
    }
#line 2466 "compile_target_code.m"
    {
#line 2466 "compile_target_code.m"
      backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemTraceLibs_8));
#line 2466 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
#line 2466 "compile_target_code.m"
    }
#line 2465 "compile_target_code.m"
    {
#line 2465 "compile_target_code.m"
      *backend_libs__compile_target_code__SystemLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_28_28);
    }
#line 2418 "compile_target_code.m"
  }
#line 2415 "compile_target_code.m"
}

#line 2400 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0_1(
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 2400 "compile_target_code.m"
{
#line 2400 "compile_target_code.m"
  {
#line 2400 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 2400 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 2400 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 2400 "compile_target_code.m"
    {
#line 2400 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 2400 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 2400 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 2400 "compile_target_code.m"
  }
#line 2400 "compile_target_code.m"
}

#line 2380 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_6,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_7,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__RpathFlagOpt_8,
#line 2380 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__RpathSepOpt_9,
#line 2380 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__RpathOpts_10)
#line 2380 "compile_target_code.m"
{
#line 2386 "compile_target_code.m"
  {
#line 2386 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2386 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseInstallName_11;
#line 2386 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SharedLibsSupported_12;
#line 2386 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Linkage_13;

#line 2387 "compile_target_code.m"
    {
#line 2387 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_11);
    }
#line 2389 "compile_target_code.m"
    {
#line 2389 "compile_target_code.m"
      backend_libs__compile_target_code__shared_libraries_supported_2_p_0(backend_libs__compile_target_code__Globals_6, &backend_libs__compile_target_code__SharedLibsSupported_12);
    }
#line 2390 "compile_target_code.m"
    {
#line 2390 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 553, &backend_libs__compile_target_code__Linkage_13);
    }
#line 2392 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_11 == (MR_Integer) 0);
#line 2392 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2392 "compile_target_code.m"
      {
#line 2393 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__SharedLibsSupported_12 == (MR_Integer) 1);
#line 2392 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2392 "compile_target_code.m"
          {
#line 2394 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_13, (MR_String) "shared") == 0);
#line 2395 "compile_target_code.m"
            if (!(backend_libs__compile_target_code__succeeded))
#line 2395 "compile_target_code.m"
              backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_7 == (MR_Integer) 2);
#line 2392 "compile_target_code.m"
          }
#line 2392 "compile_target_code.m"
      }
#line 2411 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2399 "compile_target_code.m"
      {
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_25_25;
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RpathDirs0_14;
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RpathDirs_15;

#line 2398 "compile_target_code.m"
        {
#line 2398 "compile_target_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_6, (MR_Integer) 539, &backend_libs__compile_target_code__RpathDirs0_14);
        }
#line 7704 "backend_libs.compile_target_code.c"
        backend_libs__compile_target_code__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2400 "compile_target_code.m"
        {
#line 2400 "compile_target_code.m"
          backend_libs__compile_target_code__RpathDirs_15 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_25_25, backend_libs__compile_target_code__TypeCtorInfo_25_25, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[8], backend_libs__compile_target_code__RpathDirs0_14);
        }
#line 2404 "compile_target_code.m"
        if ((backend_libs__compile_target_code__RpathDirs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2403 "compile_target_code.m"
          *backend_libs__compile_target_code__RpathOpts_10 = (MR_String) "";
#line 2404 "compile_target_code.m"
        else
#line 2405 "compile_target_code.m"
          {
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathSep_18;
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathFlag_19;
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathOpts0_20;

#line 2406 "compile_target_code.m"
            {
#line 2406 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, backend_libs__compile_target_code__RpathSepOpt_9, &backend_libs__compile_target_code__RpathSep_18);
            }
#line 2407 "compile_target_code.m"
            {
#line 2407 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_6, backend_libs__compile_target_code__RpathFlagOpt_8, &backend_libs__compile_target_code__RpathFlag_19);
            }
#line 2408 "compile_target_code.m"
            {
#line 2408 "compile_target_code.m"
              backend_libs__compile_target_code__RpathOpts0_20 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__RpathSep_18, backend_libs__compile_target_code__RpathDirs_15);
            }
#line 2409 "compile_target_code.m"
            {
#line 2409 "compile_target_code.m"
              *backend_libs__compile_target_code__RpathOpts_10 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__RpathFlag_19, backend_libs__compile_target_code__RpathOpts0_20);
            }
#line 2405 "compile_target_code.m"
          }
#line 2399 "compile_target_code.m"
      }
#line 2411 "compile_target_code.m"
    else
#line 2412 "compile_target_code.m"
      *backend_libs__compile_target_code__RpathOpts_10 = (MR_String) "";
#line 2386 "compile_target_code.m"
  }
#line 2380 "compile_target_code.m"
}

#line 2335 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_2(
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4,
#line 2335 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_5,
#line 2335 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_6)
#line 2335 "compile_target_code.m"
{
#line 2335 "compile_target_code.m"
  {
#line 2335 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 2335 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv2_LinkerOpt_12;
#line 2335 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_28;

#line 2335 "compile_target_code.m"
    {
#line 2335 "compile_target_code.m"
      backend_libs__compile_target_code__process_link_library_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv2_LinkerOpt_12, ((MR_Word) backend_libs__compile_target_code__wrapper_arg_3), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_28);
    }
#line 2335 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_LinkerOpt_12));
#line 2335 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_4 = ((MR_Box) (backend_libs__compile_target_code__conv1_STATE_VARIABLE_Succeeded_28));
#line 2335 "compile_target_code.m"
  }
#line 2335 "compile_target_code.m"
}

#line 2331 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0_1(
#line 2331 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2331 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 2331 "compile_target_code.m"
{
#line 2331 "compile_target_code.m"
  {
#line 2331 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 2331 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 2331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__3_20;

#line 2331 "compile_target_code.m"
    {
#line 2331 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__3_20 = backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2331__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 2331 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__3_20));
#line 2331 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 2331 "compile_target_code.m"
  }
#line 2331 "compile_target_code.m"
}

#line 2324 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_link_libraries_4_p_0(
#line 2324 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 2324 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MaybeLinkLibraries_6)
#line 2324 "compile_target_code.m"
{
#line 2327 "compile_target_code.m"
  {
#line 2327 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_28_28;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MercuryLibDirs0_8;
#line 2327 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDir_9;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MercuryLibDirs_10;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibrariesList0_12;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibrariesList_13;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LibrariesSucceeded_14;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_18_18;
#line 2327 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_24_24;
#line 2335 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv4_LibrariesSucceeded_14;
#line 2335 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_16;

#line 2328 "compile_target_code.m"
    {
#line 2328 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 542, &backend_libs__compile_target_code__MercuryLibDirs0_8);
    }
#line 2330 "compile_target_code.m"
    {
#line 2330 "compile_target_code.m"
      libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__GradeDir_9);
    }
#line 7879 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2331 "compile_target_code.m"
    {
#line 2331 "compile_target_code.m"
      backend_libs__compile_target_code__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2331 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
#line 2331 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_1));
#line 2331 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2331 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_18_18, 3) = ((MR_Box) (backend_libs__compile_target_code__GradeDir_9));
#line 2331 "compile_target_code.m"
    }
#line 2331 "compile_target_code.m"
    {
#line 2331 "compile_target_code.m"
      backend_libs__compile_target_code__MercuryLibDirs_10 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__V_18_18, backend_libs__compile_target_code__MercuryLibDirs0_8);
    }
#line 2333 "compile_target_code.m"
    {
#line 2333 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 540, &backend_libs__compile_target_code__LinkLibrariesList0_12);
    }
#line 2335 "compile_target_code.m"
    {
#line 2335 "compile_target_code.m"
      backend_libs__compile_target_code__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2335 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_9[0]));
#line 2335 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_2));
#line 2335 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2335 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_5));
#line 2335 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_24_24, 4) = ((MR_Box) (backend_libs__compile_target_code__MercuryLibDirs_10));
#line 2335 "compile_target_code.m"
    }
#line 2335 "compile_target_code.m"
    {
#line 2335 "compile_target_code.m"
      mercury__list__map_foldl2_7_p_2(backend_libs__compile_target_code__TypeCtorInfo_28_28, backend_libs__compile_target_code__TypeCtorInfo_28_28, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__LinkLibrariesList0_12, &backend_libs__compile_target_code__LinkLibrariesList_13, ((MR_Box) ((MR_Integer) 1)), &backend_libs__compile_target_code__conv4_LibrariesSucceeded_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_16);
    }
#line 2335 "compile_target_code.m"
    backend_libs__compile_target_code__LibrariesSucceeded_14 = ((MR_Word) backend_libs__compile_target_code__conv4_LibrariesSucceeded_14);
#line 2341 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LibrariesSucceeded_14 == (MR_Integer) 0))
#line 2343 "compile_target_code.m"
      *backend_libs__compile_target_code__MaybeLinkLibraries_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2341 "compile_target_code.m"
    else
#line 2340 "compile_target_code.m"
      {
#line 2340 "compile_target_code.m"
        MR_Word base;
#line 2340 "compile_target_code.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2340 "compile_target_code.m"
        *backend_libs__compile_target_code__MaybeLinkLibraries_6 = base;
#line 2340 "compile_target_code.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibrariesList_13));
#line 2340 "compile_target_code.m"
      }
#line 2327 "compile_target_code.m"
  }
#line 2324 "compile_target_code.m"
}

#line 2293 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_lib_args_8_p_0(
#line 2293 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 2293 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_10,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__StdLibDir_11,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__GradeDir_12,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__LibExt_13,
#line 2293 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Name_14,
#line 2293 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__StaticArg_15,
#line 2293 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__SharedArg_16)
#line 2293 "compile_target_code.m"
{
#line 2297 "compile_target_code.m"
  {
#line 2297 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LibPrefix_17;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__StaticLibName_18;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_22_22;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_23_23;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_24_24;
#line 2297 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_25_25;

#line 2304 "compile_target_code.m"
    if ((((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 3)) || ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 4))))
#line 2308 "compile_target_code.m"
      backend_libs__compile_target_code__LibPrefix_17 = (MR_String) "";
#line 2304 "compile_target_code.m"
    else
#line 2304 "compile_target_code.m"
      if ((((((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 0)) || ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 2)))) || ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 1))))
#line 2303 "compile_target_code.m"
        backend_libs__compile_target_code__LibPrefix_17 = (MR_String) "lib";
#line 2304 "compile_target_code.m"
      else
#line 2314 "compile_target_code.m"
        {
#line 2314 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__V_21_21;

#line 2315 "compile_target_code.m"
          {
#line 2315 "compile_target_code.m"
            backend_libs__compile_target_code__V_21_21 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_10)));
          }
#line 2315 "compile_target_code.m"
          {
#line 2315 "compile_target_code.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_lib_args\'/8", backend_libs__compile_target_code__V_21_21);
#line 2315 "compile_target_code.m"
            return;
          }
#line 2314 "compile_target_code.m"
        }
#line 2317 "compile_target_code.m"
    {
#line 2317 "compile_target_code.m"
      backend_libs__compile_target_code__V_22_22 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__LibExt_13);
    }
#line 2317 "compile_target_code.m"
    {
#line 2317 "compile_target_code.m"
      backend_libs__compile_target_code__StaticLibName_18 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LibPrefix_17, backend_libs__compile_target_code__V_22_22);
    }
#line 2318 "compile_target_code.m"
    {
#line 2318 "compile_target_code.m"
      backend_libs__compile_target_code__V_25_25 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_11, (MR_String) "lib");
    }
#line 2318 "compile_target_code.m"
    {
#line 2318 "compile_target_code.m"
      backend_libs__compile_target_code__V_24_24 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_25_25, backend_libs__compile_target_code__GradeDir_12);
    }
#line 2318 "compile_target_code.m"
    {
#line 2318 "compile_target_code.m"
      backend_libs__compile_target_code__V_23_23 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_24_24, backend_libs__compile_target_code__StaticLibName_18);
    }
#line 2318 "compile_target_code.m"
    {
#line 2318 "compile_target_code.m"
      *backend_libs__compile_target_code__StaticArg_15 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_23_23);
    }
#line 2359 "compile_target_code.m"
    if ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 0))
#line 2359 "compile_target_code.m"
      {
#line 2359 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__LinkLibOpt_34;
#line 2359 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Suffix_35;
#line 2359 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_41_41;
#line 2359 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_42_42;

#line 2360 "compile_target_code.m"
        {
#line 2360 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 595, &backend_libs__compile_target_code__LinkLibOpt_34);
        }
#line 2361 "compile_target_code.m"
        {
#line 2361 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 596, &backend_libs__compile_target_code__Suffix_35);
        }
#line 2362 "compile_target_code.m"
        {
#line 2362 "compile_target_code.m"
          backend_libs__compile_target_code__V_42_42 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__Suffix_35);
        }
#line 2362 "compile_target_code.m"
        {
#line 2362 "compile_target_code.m"
          backend_libs__compile_target_code__V_41_41 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkLibOpt_34, backend_libs__compile_target_code__V_42_42);
        }
#line 2362 "compile_target_code.m"
        {
#line 2362 "compile_target_code.m"
          *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_41_41);
        }
#line 2359 "compile_target_code.m"
      }
#line 2359 "compile_target_code.m"
    else
#line 2359 "compile_target_code.m"
      if ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 2))
#line 2359 "compile_target_code.m"
        {
#line 2359 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__LinkLibOpt_48;
#line 2359 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__Suffix_49;
#line 2359 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__V_50_50;
#line 2359 "compile_target_code.m"
          MR_String backend_libs__compile_target_code__V_51_51;

#line 2360 "compile_target_code.m"
          {
#line 2360 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 597, &backend_libs__compile_target_code__LinkLibOpt_48);
          }
#line 2361 "compile_target_code.m"
          {
#line 2361 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 598, &backend_libs__compile_target_code__Suffix_49);
          }
#line 2362 "compile_target_code.m"
          {
#line 2362 "compile_target_code.m"
            backend_libs__compile_target_code__V_51_51 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, backend_libs__compile_target_code__Suffix_49);
          }
#line 2362 "compile_target_code.m"
          {
#line 2362 "compile_target_code.m"
            backend_libs__compile_target_code__V_50_50 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__LinkLibOpt_48, backend_libs__compile_target_code__V_51_51);
          }
#line 2362 "compile_target_code.m"
          {
#line 2362 "compile_target_code.m"
            *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_50_50);
          }
#line 2359 "compile_target_code.m"
        }
#line 2359 "compile_target_code.m"
      else
#line 2359 "compile_target_code.m"
        if ((backend_libs__compile_target_code__TargetType_10 == (MR_Integer) 1))
#line 2376 "compile_target_code.m"
          {
#line 2376 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_38_38;

#line 2377 "compile_target_code.m"
            {
#line 2377 "compile_target_code.m"
              backend_libs__compile_target_code__V_38_38 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_10)));
            }
#line 2377 "compile_target_code.m"
            {
#line 2377 "compile_target_code.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.make_link_lib\'/4", backend_libs__compile_target_code__V_38_38);
#line 2377 "compile_target_code.m"
              return;
            }
#line 2376 "compile_target_code.m"
          }
#line 2359 "compile_target_code.m"
        else
#line 2366 "compile_target_code.m"
          {
#line 2366 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_39_39;
#line 2366 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_40_40;

#line 2369 "compile_target_code.m"
            {
#line 2369 "compile_target_code.m"
              backend_libs__compile_target_code__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Name_14, (MR_String) ".dll");
            }
#line 2369 "compile_target_code.m"
            {
#line 2369 "compile_target_code.m"
              backend_libs__compile_target_code__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", backend_libs__compile_target_code__V_40_40);
            }
#line 2369 "compile_target_code.m"
            {
#line 2369 "compile_target_code.m"
              *backend_libs__compile_target_code__SharedArg_16 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__V_39_39);
            }
#line 2366 "compile_target_code.m"
          }
#line 2297 "compile_target_code.m"
  }
#line 2293 "compile_target_code.m"
}

#line 2128 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(
#line 2128 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 2128 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__TargetType_5,
#line 2128 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__StdLibs_6)
#line 2128 "compile_target_code.m"
{
#line 2131 "compile_target_code.m"
  {
#line 2131 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2131 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeStdlibDir_7;

#line 2132 "compile_target_code.m"
    {
#line 2132 "compile_target_code.m"
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 548, &backend_libs__compile_target_code__MaybeStdlibDir_7);
    }
#line 2288 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeStdlibDir_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2290 "compile_target_code.m"
      *backend_libs__compile_target_code__StdLibs_6 = (MR_String) "";
#line 2288 "compile_target_code.m"
    else
#line 2135 "compile_target_code.m"
      {
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StdLibDir_8 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdlibDir_7, (MR_Integer) 0)));
#line 2135 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__GCMethod_9;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__LibExt_10;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__MercuryLinkage_11;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__GradeDir_12;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StaticGCLibs_13;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SharedGCLibs_14;
#line 2135 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TraceLevel_23;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StaticTraceLibs_24;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SharedTraceLibs_25;
#line 2135 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__SourceDebug_34;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StaticSourceDebugLibs_41;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SharedSourceDebugLibs_42;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StaticStdLib_43;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StdLib_44;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StaticRuntimeLib_45;
#line 2135 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__RuntimeLib_46;
#line 2220 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_61_61;

#line 2136 "compile_target_code.m"
        {
#line 2136 "compile_target_code.m"
          libs__globals__get_gc_method_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GCMethod_9);
        }
#line 2145 "compile_target_code.m"
        if ((((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 3)) || ((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 4))))
#line 2148 "compile_target_code.m"
          {
#line 2149 "compile_target_code.m"
            backend_libs__compile_target_code__LibExt_10 = (MR_String) ".dll";
#line 2150 "compile_target_code.m"
            backend_libs__compile_target_code__MercuryLinkage_11 = (MR_String) "csharp";
#line 2148 "compile_target_code.m"
          }
#line 2145 "compile_target_code.m"
        else
#line 2145 "compile_target_code.m"
          if ((((((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 0)) || ((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 2)))) || ((backend_libs__compile_target_code__TargetType_5 == (MR_Integer) 1))))
#line 2141 "compile_target_code.m"
            {
#line 2142 "compile_target_code.m"
              {
#line 2142 "compile_target_code.m"
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 569, &backend_libs__compile_target_code__LibExt_10);
              }
#line 2143 "compile_target_code.m"
              {
#line 2143 "compile_target_code.m"
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 555, &backend_libs__compile_target_code__MercuryLinkage_11);
              }
#line 2141 "compile_target_code.m"
            }
#line 2145 "compile_target_code.m"
          else
#line 2156 "compile_target_code.m"
            {
#line 2156 "compile_target_code.m"
              MR_String backend_libs__compile_target_code__V_50_50;

#line 2157 "compile_target_code.m"
              {
#line 2157 "compile_target_code.m"
                backend_libs__compile_target_code__V_50_50 = mercury__string__string_1_f_0((MR_Word) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0, ((MR_Box) (backend_libs__compile_target_code__TargetType_5)));
              }
#line 2157 "compile_target_code.m"
              {
#line 2157 "compile_target_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", backend_libs__compile_target_code__V_50_50);
#line 2157 "compile_target_code.m"
                return;
              }
#line 2156 "compile_target_code.m"
            }
#line 2159 "compile_target_code.m"
        {
#line 2159 "compile_target_code.m"
          libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GradeDir_12);
        }
#line 2167 "compile_target_code.m"
        if ((backend_libs__compile_target_code__GCMethod_9 == (MR_Integer) 5))
#line 2213 "compile_target_code.m"
          {
#line 2214 "compile_target_code.m"
            backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
#line 2215 "compile_target_code.m"
            backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
#line 2213 "compile_target_code.m"
          }
#line 2167 "compile_target_code.m"
        else
#line 2167 "compile_target_code.m"
          if ((backend_libs__compile_target_code__GCMethod_9 == (MR_Integer) 0))
#line 2164 "compile_target_code.m"
            {
#line 2165 "compile_target_code.m"
              backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
#line 2166 "compile_target_code.m"
              backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
#line 2164 "compile_target_code.m"
            }
#line 2167 "compile_target_code.m"
          else
#line 2167 "compile_target_code.m"
            if ((backend_libs__compile_target_code__GCMethod_9 == (MR_Integer) 2))
#line 2182 "compile_target_code.m"
              {
#line 2182 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__LLDebug_16;
#line 2182 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__GCGrade1_17;
#line 2182 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__ProfTime_18;
#line 2182 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__ProfDeep_19;
#line 2182 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__GCGrade2_20;
#line 2182 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__Parallel_21;
#line 2182 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__GCGrade_22;

#line 2183 "compile_target_code.m"
                {
#line 2183 "compile_target_code.m"
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 296, &backend_libs__compile_target_code__LLDebug_16);
                }
#line 2187 "compile_target_code.m"
                if ((backend_libs__compile_target_code__LLDebug_16 == (MR_Integer) 0))
#line 2189 "compile_target_code.m"
                  backend_libs__compile_target_code__GCGrade1_17 = (MR_String) "gc";
#line 2187 "compile_target_code.m"
                else
#line 2186 "compile_target_code.m"
                  backend_libs__compile_target_code__GCGrade1_17 = (MR_String) "gc_ll_debug";
#line 2191 "compile_target_code.m"
                {
#line 2191 "compile_target_code.m"
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 187, &backend_libs__compile_target_code__ProfTime_18);
                }
#line 2192 "compile_target_code.m"
                {
#line 2192 "compile_target_code.m"
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 189, &backend_libs__compile_target_code__ProfDeep_19);
                }
#line 2194 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfTime_18 == (MR_Integer) 1);
#line 2195 "compile_target_code.m"
                if (!(backend_libs__compile_target_code__succeeded))
#line 2195 "compile_target_code.m"
                  backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfDeep_19 == (MR_Integer) 1);
#line 2199 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 2198 "compile_target_code.m"
                  {
#line 2198 "compile_target_code.m"
                    {
#line 2198 "compile_target_code.m"
                      backend_libs__compile_target_code__GCGrade2_20 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__GCGrade1_17, (MR_String) "_prof");
                    }
#line 2198 "compile_target_code.m"
                  }
#line 2199 "compile_target_code.m"
                else
#line 2200 "compile_target_code.m"
                  backend_libs__compile_target_code__GCGrade2_20 = backend_libs__compile_target_code__GCGrade1_17;
#line 2202 "compile_target_code.m"
                {
#line 2202 "compile_target_code.m"
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 210, &backend_libs__compile_target_code__Parallel_21);
                }
#line 2206 "compile_target_code.m"
                if ((backend_libs__compile_target_code__Parallel_21 == (MR_Integer) 0))
#line 2208 "compile_target_code.m"
                  backend_libs__compile_target_code__GCGrade_22 = backend_libs__compile_target_code__GCGrade2_20;
#line 2206 "compile_target_code.m"
                else
#line 2204 "compile_target_code.m"
                  {
#line 2205 "compile_target_code.m"
                    {
#line 2205 "compile_target_code.m"
                      backend_libs__compile_target_code__GCGrade_22 = mercury__string__f_43_43_2_f_0((MR_String) "par_", backend_libs__compile_target_code__GCGrade2_20);
                    }
#line 2204 "compile_target_code.m"
                  }
#line 2210 "compile_target_code.m"
                {
#line 2210 "compile_target_code.m"
                  backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, (MR_String) "", backend_libs__compile_target_code__LibExt_10, backend_libs__compile_target_code__GCGrade_22, &backend_libs__compile_target_code__StaticGCLibs_13, &backend_libs__compile_target_code__SharedGCLibs_14);
                }
#line 2182 "compile_target_code.m"
              }
#line 2167 "compile_target_code.m"
            else
#line 2167 "compile_target_code.m"
              if ((backend_libs__compile_target_code__GCMethod_9 == (MR_Integer) 3))
#line 2182 "compile_target_code.m"
                {
#line 2182 "compile_target_code.m"
                  MR_Word backend_libs__compile_target_code__LLDebug_125;
#line 2182 "compile_target_code.m"
                  MR_String backend_libs__compile_target_code__GCGrade1_126;
#line 2182 "compile_target_code.m"
                  MR_Word backend_libs__compile_target_code__ProfTime_127;
#line 2182 "compile_target_code.m"
                  MR_Word backend_libs__compile_target_code__ProfDeep_128;
#line 2182 "compile_target_code.m"
                  MR_String backend_libs__compile_target_code__GCGrade2_129;
#line 2182 "compile_target_code.m"
                  MR_Word backend_libs__compile_target_code__Parallel_130;
#line 2182 "compile_target_code.m"
                  MR_String backend_libs__compile_target_code__GCGrade_131;

#line 2183 "compile_target_code.m"
                  {
#line 2183 "compile_target_code.m"
                    libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 296, &backend_libs__compile_target_code__LLDebug_125);
                  }
#line 2187 "compile_target_code.m"
                  if ((backend_libs__compile_target_code__LLDebug_125 == (MR_Integer) 0))
#line 2189 "compile_target_code.m"
                    backend_libs__compile_target_code__GCGrade1_126 = (MR_String) "gc_debug";
#line 2187 "compile_target_code.m"
                  else
#line 2186 "compile_target_code.m"
                    backend_libs__compile_target_code__GCGrade1_126 = (MR_String) "gc_debug_ll_debug";
#line 2191 "compile_target_code.m"
                  {
#line 2191 "compile_target_code.m"
                    libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 187, &backend_libs__compile_target_code__ProfTime_127);
                  }
#line 2192 "compile_target_code.m"
                  {
#line 2192 "compile_target_code.m"
                    libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 189, &backend_libs__compile_target_code__ProfDeep_128);
                  }
#line 2194 "compile_target_code.m"
                  backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfTime_127 == (MR_Integer) 1);
#line 2195 "compile_target_code.m"
                  if (!(backend_libs__compile_target_code__succeeded))
#line 2195 "compile_target_code.m"
                    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__ProfDeep_128 == (MR_Integer) 1);
#line 2199 "compile_target_code.m"
                  if (backend_libs__compile_target_code__succeeded)
#line 2198 "compile_target_code.m"
                    {
#line 2198 "compile_target_code.m"
                      {
#line 2198 "compile_target_code.m"
                        backend_libs__compile_target_code__GCGrade2_129 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__GCGrade1_126, (MR_String) "_prof");
                      }
#line 2198 "compile_target_code.m"
                    }
#line 2199 "compile_target_code.m"
                  else
#line 2200 "compile_target_code.m"
                    backend_libs__compile_target_code__GCGrade2_129 = backend_libs__compile_target_code__GCGrade1_126;
#line 2202 "compile_target_code.m"
                  {
#line 2202 "compile_target_code.m"
                    libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 210, &backend_libs__compile_target_code__Parallel_130);
                  }
#line 2206 "compile_target_code.m"
                  if ((backend_libs__compile_target_code__Parallel_130 == (MR_Integer) 0))
#line 2208 "compile_target_code.m"
                    backend_libs__compile_target_code__GCGrade_131 = backend_libs__compile_target_code__GCGrade2_129;
#line 2206 "compile_target_code.m"
                  else
#line 2204 "compile_target_code.m"
                    {
#line 2205 "compile_target_code.m"
                      {
#line 2205 "compile_target_code.m"
                        backend_libs__compile_target_code__GCGrade_131 = mercury__string__f_43_43_2_f_0((MR_String) "par_", backend_libs__compile_target_code__GCGrade2_129);
                      }
#line 2204 "compile_target_code.m"
                    }
#line 2210 "compile_target_code.m"
                  {
#line 2210 "compile_target_code.m"
                    backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, (MR_String) "", backend_libs__compile_target_code__LibExt_10, backend_libs__compile_target_code__GCGrade_131, &backend_libs__compile_target_code__StaticGCLibs_13, &backend_libs__compile_target_code__SharedGCLibs_14);
                  }
#line 2182 "compile_target_code.m"
                }
#line 2167 "compile_target_code.m"
              else
#line 2167 "compile_target_code.m"
                if ((backend_libs__compile_target_code__GCMethod_9 == (MR_Integer) 4))
#line 2172 "compile_target_code.m"
                  {
#line 2173 "compile_target_code.m"
                    backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
#line 2174 "compile_target_code.m"
                    backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
#line 2172 "compile_target_code.m"
                  }
#line 2167 "compile_target_code.m"
                else
#line 2168 "compile_target_code.m"
                  {
#line 2169 "compile_target_code.m"
                    backend_libs__compile_target_code__StaticGCLibs_13 = (MR_String) "";
#line 2170 "compile_target_code.m"
                    backend_libs__compile_target_code__SharedGCLibs_14 = (MR_String) "";
#line 2168 "compile_target_code.m"
                  }
#line 2219 "compile_target_code.m"
        {
#line 2219 "compile_target_code.m"
          libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__TraceLevel_23);
        }
#line 2220 "compile_target_code.m"
        {
#line 2220 "compile_target_code.m"
          backend_libs__compile_target_code__V_61_61 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_23);
        }
#line 2220 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_61_61 == (MR_Integer) 1);
#line 2223 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2221 "compile_target_code.m"
          {
#line 2221 "compile_target_code.m"
            backend_libs__compile_target_code__StaticTraceLibs_24 = (MR_String) "";
#line 2222 "compile_target_code.m"
            backend_libs__compile_target_code__SharedTraceLibs_25 = (MR_String) "";
#line 2221 "compile_target_code.m"
          }
#line 2223 "compile_target_code.m"
        else
#line 2225 "compile_target_code.m"
          {
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticTraceLib_26;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__TraceLib_27;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticEventSpecLib_28;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__EventSpecLib_29;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticBrowserLib_30;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__BrowserLib_31;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticMdbCompLib_32;
#line 2225 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__MdbCompLib_33;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_67_67;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_68_68;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_69_69;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_70_70;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_73_73;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_74_74;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_75_75;
#line 2225 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_76_76;

#line 2224 "compile_target_code.m"
            {
#line 2224 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_trace", &backend_libs__compile_target_code__StaticTraceLib_26, &backend_libs__compile_target_code__TraceLib_27);
            }
#line 2226 "compile_target_code.m"
            {
#line 2226 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_eventspec", &backend_libs__compile_target_code__StaticEventSpecLib_28, &backend_libs__compile_target_code__EventSpecLib_29);
            }
#line 2228 "compile_target_code.m"
            {
#line 2228 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_browser", &backend_libs__compile_target_code__StaticBrowserLib_30, &backend_libs__compile_target_code__BrowserLib_31);
            }
#line 2230 "compile_target_code.m"
            {
#line 2230 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_mdbcomp", &backend_libs__compile_target_code__StaticMdbCompLib_32, &backend_libs__compile_target_code__MdbCompLib_33);
            }
#line 2234 "compile_target_code.m"
            {
#line 2234 "compile_target_code.m"
              backend_libs__compile_target_code__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2234 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticMdbCompLib_32));
#line 2234 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2234 "compile_target_code.m"
            }
#line 2233 "compile_target_code.m"
            {
#line 2233 "compile_target_code.m"
              backend_libs__compile_target_code__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticBrowserLib_30));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_69_69, 1) = ((MR_Box) (backend_libs__compile_target_code__V_70_70));
#line 2233 "compile_target_code.m"
            }
#line 2233 "compile_target_code.m"
            {
#line 2233 "compile_target_code.m"
              backend_libs__compile_target_code__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticEventSpecLib_28));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 1) = ((MR_Box) (backend_libs__compile_target_code__V_69_69));
#line 2233 "compile_target_code.m"
            }
#line 2233 "compile_target_code.m"
            {
#line 2233 "compile_target_code.m"
              backend_libs__compile_target_code__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticTraceLib_26));
#line 2233 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_67_67, 1) = ((MR_Box) (backend_libs__compile_target_code__V_68_68));
#line 2233 "compile_target_code.m"
            }
#line 2232 "compile_target_code.m"
            {
#line 2232 "compile_target_code.m"
              backend_libs__compile_target_code__StaticTraceLibs_24 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_67_67);
            }
#line 2236 "compile_target_code.m"
            {
#line 2236 "compile_target_code.m"
              backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) (backend_libs__compile_target_code__MdbCompLib_33));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2236 "compile_target_code.m"
            }
#line 2236 "compile_target_code.m"
            {
#line 2236 "compile_target_code.m"
              backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__BrowserLib_31));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
#line 2236 "compile_target_code.m"
            }
#line 2236 "compile_target_code.m"
            {
#line 2236 "compile_target_code.m"
              backend_libs__compile_target_code__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 0) = ((MR_Box) (backend_libs__compile_target_code__EventSpecLib_29));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_74_74, 1) = ((MR_Box) (backend_libs__compile_target_code__V_75_75));
#line 2236 "compile_target_code.m"
            }
#line 2236 "compile_target_code.m"
            {
#line 2236 "compile_target_code.m"
              backend_libs__compile_target_code__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_73_73, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceLib_27));
#line 2236 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_73_73, 1) = ((MR_Box) (backend_libs__compile_target_code__V_74_74));
#line 2236 "compile_target_code.m"
            }
#line 2235 "compile_target_code.m"
            {
#line 2235 "compile_target_code.m"
              backend_libs__compile_target_code__SharedTraceLibs_25 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_73_73);
            }
#line 2225 "compile_target_code.m"
          }
#line 2240 "compile_target_code.m"
        {
#line 2240 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 229, &backend_libs__compile_target_code__SourceDebug_34);
        }
#line 2253 "compile_target_code.m"
        if ((backend_libs__compile_target_code__SourceDebug_34 == (MR_Integer) 0))
#line 2254 "compile_target_code.m"
          {
#line 2255 "compile_target_code.m"
            backend_libs__compile_target_code__StaticSourceDebugLibs_41 = (MR_String) "";
#line 2256 "compile_target_code.m"
            backend_libs__compile_target_code__SharedSourceDebugLibs_42 = (MR_String) "";
#line 2254 "compile_target_code.m"
          }
#line 2253 "compile_target_code.m"
        else
#line 2242 "compile_target_code.m"
          {
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticSsdbLib_35;
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__SsdbLib_36;
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticBrowserLib2_37;
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__BrowserLib2_38;
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__StaticMdbCompLib2_39;
#line 2242 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__MdbCompLib2_40;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_83_83;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_84_84;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_85_85;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_88_88;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_89_89;
#line 2242 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_90_90;

#line 2243 "compile_target_code.m"
            {
#line 2243 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_ssdb", &backend_libs__compile_target_code__StaticSsdbLib_35, &backend_libs__compile_target_code__SsdbLib_36);
            }
#line 2245 "compile_target_code.m"
            {
#line 2245 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_browser", &backend_libs__compile_target_code__StaticBrowserLib2_37, &backend_libs__compile_target_code__BrowserLib2_38);
            }
#line 2247 "compile_target_code.m"
            {
#line 2247 "compile_target_code.m"
              backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_mdbcomp", &backend_libs__compile_target_code__StaticMdbCompLib2_39, &backend_libs__compile_target_code__MdbCompLib2_40);
            }
#line 2250 "compile_target_code.m"
            {
#line 2250 "compile_target_code.m"
              backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticMdbCompLib2_39));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2250 "compile_target_code.m"
            }
#line 2250 "compile_target_code.m"
            {
#line 2250 "compile_target_code.m"
              backend_libs__compile_target_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticBrowserLib2_37));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
#line 2250 "compile_target_code.m"
            }
#line 2250 "compile_target_code.m"
            {
#line 2250 "compile_target_code.m"
              backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticSsdbLib_35));
#line 2250 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (backend_libs__compile_target_code__V_84_84));
#line 2250 "compile_target_code.m"
            }
#line 2249 "compile_target_code.m"
            {
#line 2249 "compile_target_code.m"
              backend_libs__compile_target_code__StaticSourceDebugLibs_41 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_83_83);
            }
#line 2252 "compile_target_code.m"
            {
#line 2252 "compile_target_code.m"
              backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__MdbCompLib2_40));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2252 "compile_target_code.m"
            }
#line 2252 "compile_target_code.m"
            {
#line 2252 "compile_target_code.m"
              backend_libs__compile_target_code__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 0) = ((MR_Box) (backend_libs__compile_target_code__BrowserLib2_38));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 1) = ((MR_Box) (backend_libs__compile_target_code__V_90_90));
#line 2252 "compile_target_code.m"
            }
#line 2252 "compile_target_code.m"
            {
#line 2252 "compile_target_code.m"
              backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) (backend_libs__compile_target_code__SsdbLib_36));
#line 2252 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_89_89));
#line 2252 "compile_target_code.m"
            }
#line 2251 "compile_target_code.m"
            {
#line 2251 "compile_target_code.m"
              backend_libs__compile_target_code__SharedSourceDebugLibs_42 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_88_88);
            }
#line 2242 "compile_target_code.m"
          }
#line 2259 "compile_target_code.m"
        {
#line 2259 "compile_target_code.m"
          backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_std", &backend_libs__compile_target_code__StaticStdLib_43, &backend_libs__compile_target_code__StdLib_44);
        }
#line 2261 "compile_target_code.m"
        {
#line 2261 "compile_target_code.m"
          backend_libs__compile_target_code__link_lib_args_8_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__TargetType_5, backend_libs__compile_target_code__StdLibDir_8, backend_libs__compile_target_code__GradeDir_12, backend_libs__compile_target_code__LibExt_10, (MR_String) "mer_rt", &backend_libs__compile_target_code__StaticRuntimeLib_45, &backend_libs__compile_target_code__RuntimeLib_46);
        }
#line 2263 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "static") == 0);
#line 2271 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2264 "compile_target_code.m"
          {
#line 2264 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_95_95;
#line 2264 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_96_96;
#line 2264 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_97_97;
#line 2264 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_98_98;
#line 2264 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_99_99;

#line 2270 "compile_target_code.m"
            {
#line 2270 "compile_target_code.m"
              backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticGCLibs_13));
#line 2270 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2270 "compile_target_code.m"
            }
#line 2268 "compile_target_code.m"
            {
#line 2268 "compile_target_code.m"
              backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2268 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticRuntimeLib_45));
#line 2268 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
#line 2268 "compile_target_code.m"
            }
#line 2267 "compile_target_code.m"
            {
#line 2267 "compile_target_code.m"
              backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2267 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticStdLib_43));
#line 2267 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
#line 2267 "compile_target_code.m"
            }
#line 2266 "compile_target_code.m"
            {
#line 2266 "compile_target_code.m"
              backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticSourceDebugLibs_41));
#line 2266 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
#line 2266 "compile_target_code.m"
            }
#line 2265 "compile_target_code.m"
            {
#line 2265 "compile_target_code.m"
              backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticTraceLibs_24));
#line 2265 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
#line 2265 "compile_target_code.m"
            }
#line 2264 "compile_target_code.m"
            {
#line 2264 "compile_target_code.m"
              *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_95_95);
            }
#line 2264 "compile_target_code.m"
          }
#line 2271 "compile_target_code.m"
        else
#line 2279 "compile_target_code.m"
          {
#line 2271 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "shared") == 0);
#line 2279 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 2272 "compile_target_code.m"
              {
#line 2272 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_102_102;
#line 2272 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_103_103;
#line 2272 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_104_104;
#line 2272 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_105_105;
#line 2272 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_106_106;

#line 2278 "compile_target_code.m"
                {
#line 2278 "compile_target_code.m"
                  backend_libs__compile_target_code__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2278 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedGCLibs_14));
#line 2278 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2278 "compile_target_code.m"
                }
#line 2276 "compile_target_code.m"
                {
#line 2276 "compile_target_code.m"
                  backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2276 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeLib_46));
#line 2276 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
#line 2276 "compile_target_code.m"
                }
#line 2275 "compile_target_code.m"
                {
#line 2275 "compile_target_code.m"
                  backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2275 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__StdLib_44));
#line 2275 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
#line 2275 "compile_target_code.m"
                }
#line 2274 "compile_target_code.m"
                {
#line 2274 "compile_target_code.m"
                  backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedSourceDebugLibs_42));
#line 2274 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
#line 2274 "compile_target_code.m"
                }
#line 2273 "compile_target_code.m"
                {
#line 2273 "compile_target_code.m"
                  backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2273 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedTraceLibs_25));
#line 2273 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
#line 2273 "compile_target_code.m"
                }
#line 2272 "compile_target_code.m"
                {
#line 2272 "compile_target_code.m"
                  *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_102_102);
                }
#line 2272 "compile_target_code.m"
              }
#line 2279 "compile_target_code.m"
            else
#line 2285 "compile_target_code.m"
              {
#line 2279 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_11, (MR_String) "csharp") == 0);
#line 2285 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 2280 "compile_target_code.m"
                  {
#line 2280 "compile_target_code.m"
                    MR_Word backend_libs__compile_target_code__V_109_109;
#line 2280 "compile_target_code.m"
                    MR_Word backend_libs__compile_target_code__V_110_110;
#line 2280 "compile_target_code.m"
                    MR_Word backend_libs__compile_target_code__V_111_111;

#line 2284 "compile_target_code.m"
                    {
#line 2284 "compile_target_code.m"
                      backend_libs__compile_target_code__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 0) = ((MR_Box) (backend_libs__compile_target_code__StdLib_44));
#line 2284 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2284 "compile_target_code.m"
                    }
#line 2282 "compile_target_code.m"
                    {
#line 2282 "compile_target_code.m"
                      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedSourceDebugLibs_42));
#line 2282 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (backend_libs__compile_target_code__V_111_111));
#line 2282 "compile_target_code.m"
                    }
#line 2281 "compile_target_code.m"
                    {
#line 2281 "compile_target_code.m"
                      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2281 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__SharedTraceLibs_25));
#line 2281 "compile_target_code.m"
                      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
#line 2281 "compile_target_code.m"
                    }
#line 2280 "compile_target_code.m"
                    {
#line 2280 "compile_target_code.m"
                      *backend_libs__compile_target_code__StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_109_109);
                    }
#line 2280 "compile_target_code.m"
                  }
#line 2285 "compile_target_code.m"
                else
#line 2286 "compile_target_code.m"
                  {
#line 2286 "compile_target_code.m"
                    MR_String backend_libs__compile_target_code__V_115_115;

#line 2286 "compile_target_code.m"
                    {
#line 2286 "compile_target_code.m"
                      backend_libs__compile_target_code__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "unknown linkage ", backend_libs__compile_target_code__MercuryLinkage_11);
                    }
#line 2286 "compile_target_code.m"
                    {
#line 2286 "compile_target_code.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", backend_libs__compile_target_code__V_115_115);
#line 2286 "compile_target_code.m"
                      return;
                    }
#line 2286 "compile_target_code.m"
                  }
#line 2285 "compile_target_code.m"
              }
#line 2279 "compile_target_code.m"
          }
#line 2135 "compile_target_code.m"
      }
#line 2131 "compile_target_code.m"
  }
#line 2128 "compile_target_code.m"
}

#line 1843 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_12,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_13,
#line 1843 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__OutputFileName_14,
#line 1843 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectsList_15,
#line 1843 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
#line 1843 "compile_target_code.m"
{
#line 1849 "compile_target_code.m"
  {
#line 1849 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__CommandOpt_18;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RpathFlagOpt_19;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RpathSepOpt_20;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LDFlagsOpt_21;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ThreadFlagsOpt_22;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__DebugFlagsOpt_23;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceFlagsOpt_24;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__UndefOpt_26;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ReserveStackSizeOpt_27;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Strip_28;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkerStripOpt_29;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__StripExeCommand_30;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__StripExeFlags_33;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TargetDebug_34;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DebugOpts_35;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Linkage_36;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__StaticOpts_37;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseThreadLibs_38;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ThreadOpts_39;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HwlocOpts_41;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MercuryStdLibs_43;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SystemLibs_44;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ResCmdLinkOpts_45;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LDFlagsList_46;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LDFlags_47;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_48;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkerPathFlag_49;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_50;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RpathOpts_51;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FrameworkDirectories_52;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseInstallName_53;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InstallNameOpt_57;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceLevel_58;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TraceOpts_59;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Frameworks_60;
#line 1849 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_61;
#line 1849 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkOptSep_62;
#line 2006 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_111_111;

#line 1870 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 0))
#line 1871 "compile_target_code.m"
      {
#line 1872 "compile_target_code.m"
        backend_libs__compile_target_code__CommandOpt_18 = (MR_Integer) 571;
#line 1873 "compile_target_code.m"
        backend_libs__compile_target_code__RpathFlagOpt_19 = (MR_Integer) 604;
#line 1874 "compile_target_code.m"
        backend_libs__compile_target_code__RpathSepOpt_20 = (MR_Integer) 605;
#line 1875 "compile_target_code.m"
        backend_libs__compile_target_code__LDFlagsOpt_21 = (MR_Integer) 534;
#line 1876 "compile_target_code.m"
        backend_libs__compile_target_code__ThreadFlagsOpt_22 = (MR_Integer) 591;
#line 1877 "compile_target_code.m"
        backend_libs__compile_target_code__DebugFlagsOpt_23 = (MR_Integer) 599;
#line 1878 "compile_target_code.m"
        backend_libs__compile_target_code__TraceFlagsOpt_24 = (MR_Integer) 601;
#line 1879 "compile_target_code.m"
        backend_libs__compile_target_code__UndefOpt_26 = (MR_String) "";
#line 1880 "compile_target_code.m"
        {
#line 1880 "compile_target_code.m"
          backend_libs__compile_target_code__ReserveStackSizeOpt_27 = backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(backend_libs__compile_target_code__Globals_10);
        }
#line 1871 "compile_target_code.m"
      }
#line 1870 "compile_target_code.m"
    else
#line 1851 "compile_target_code.m"
      {
#line 1851 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__AllowUndef_25;

#line 1852 "compile_target_code.m"
        backend_libs__compile_target_code__CommandOpt_18 = (MR_Integer) 572;
#line 1853 "compile_target_code.m"
        backend_libs__compile_target_code__RpathFlagOpt_19 = (MR_Integer) 606;
#line 1854 "compile_target_code.m"
        backend_libs__compile_target_code__RpathSepOpt_20 = (MR_Integer) 607;
#line 1855 "compile_target_code.m"
        backend_libs__compile_target_code__LDFlagsOpt_21 = (MR_Integer) 536;
#line 1856 "compile_target_code.m"
        backend_libs__compile_target_code__ThreadFlagsOpt_22 = (MR_Integer) 592;
#line 1857 "compile_target_code.m"
        backend_libs__compile_target_code__DebugFlagsOpt_23 = (MR_Integer) 600;
#line 1858 "compile_target_code.m"
        backend_libs__compile_target_code__TraceFlagsOpt_24 = (MR_Integer) 602;
#line 1859 "compile_target_code.m"
        {
#line 1859 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 560, &backend_libs__compile_target_code__AllowUndef_25);
        }
#line 1864 "compile_target_code.m"
        if ((backend_libs__compile_target_code__AllowUndef_25 == (MR_Integer) 0))
#line 1865 "compile_target_code.m"
          {
#line 1866 "compile_target_code.m"
            {
#line 1866 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 609, &backend_libs__compile_target_code__UndefOpt_26);
            }
#line 1865 "compile_target_code.m"
          }
#line 1864 "compile_target_code.m"
        else
#line 1861 "compile_target_code.m"
          {
#line 1862 "compile_target_code.m"
            {
#line 1862 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 608, &backend_libs__compile_target_code__UndefOpt_26);
            }
#line 1861 "compile_target_code.m"
          }
#line 1869 "compile_target_code.m"
        backend_libs__compile_target_code__ReserveStackSizeOpt_27 = (MR_String) "";
#line 1851 "compile_target_code.m"
      }
#line 1884 "compile_target_code.m"
    {
#line 1884 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 557, &backend_libs__compile_target_code__Strip_28);
    }
#line 1886 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 0);
#line 1886 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1887 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Strip_28 == (MR_Integer) 1);
#line 1901 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1890 "compile_target_code.m"
      {
#line 1890 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__MercuryLinkage_31;
#line 1890 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__StripExeFlagsOpt_32;

#line 1889 "compile_target_code.m"
        {
#line 1889 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 594, &backend_libs__compile_target_code__LinkerStripOpt_29);
        }
#line 1891 "compile_target_code.m"
        {
#line 1891 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 613, &backend_libs__compile_target_code__StripExeCommand_30);
        }
#line 1893 "compile_target_code.m"
        {
#line 1893 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 555, &backend_libs__compile_target_code__MercuryLinkage_31);
        }
#line 1895 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_31, (MR_String) "shared") == 0);
#line 1897 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 1896 "compile_target_code.m"
          backend_libs__compile_target_code__StripExeFlagsOpt_32 = (MR_Integer) 614;
#line 1897 "compile_target_code.m"
        else
#line 1898 "compile_target_code.m"
          backend_libs__compile_target_code__StripExeFlagsOpt_32 = (MR_Integer) 615;
#line 1900 "compile_target_code.m"
        {
#line 1900 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__StripExeFlagsOpt_32, &backend_libs__compile_target_code__StripExeFlags_33);
        }
#line 1890 "compile_target_code.m"
      }
#line 1901 "compile_target_code.m"
    else
#line 1902 "compile_target_code.m"
      {
#line 1902 "compile_target_code.m"
        backend_libs__compile_target_code__LinkerStripOpt_29 = (MR_String) "";
#line 1903 "compile_target_code.m"
        backend_libs__compile_target_code__StripExeCommand_30 = (MR_String) "";
#line 1904 "compile_target_code.m"
        backend_libs__compile_target_code__StripExeFlags_33 = (MR_String) "";
#line 1902 "compile_target_code.m"
      }
#line 1907 "compile_target_code.m"
    {
#line 1907 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 481, &backend_libs__compile_target_code__TargetDebug_34);
    }
#line 1911 "compile_target_code.m"
    if ((backend_libs__compile_target_code__TargetDebug_34 == (MR_Integer) 0))
#line 1913 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpts_35 = (MR_String) "";
#line 1911 "compile_target_code.m"
    else
#line 1910 "compile_target_code.m"
      {
#line 1910 "compile_target_code.m"
        libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__DebugFlagsOpt_23, &backend_libs__compile_target_code__DebugOpts_35);
      }
#line 1917 "compile_target_code.m"
    {
#line 1917 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 553, &backend_libs__compile_target_code__Linkage_36);
    }
#line 1919 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 0);
#line 1919 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1920 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_36, (MR_String) "static") == 0);
#line 1923 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1922 "compile_target_code.m"
      {
#line 1922 "compile_target_code.m"
        {
#line 1922 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 593, &backend_libs__compile_target_code__StaticOpts_37);
        }
#line 1922 "compile_target_code.m"
      }
#line 1923 "compile_target_code.m"
    else
#line 1924 "compile_target_code.m"
      backend_libs__compile_target_code__StaticOpts_37 = (MR_String) "";
#line 1928 "compile_target_code.m"
    {
#line 1928 "compile_target_code.m"
      backend_libs__compile_target_code__use_thread_libs_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__UseThreadLibs_38);
    }
#line 1950 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseThreadLibs_38 == (MR_Integer) 0))
#line 1951 "compile_target_code.m"
      {
#line 1952 "compile_target_code.m"
        backend_libs__compile_target_code__ThreadOpts_39 = (MR_String) "";
#line 1953 "compile_target_code.m"
        backend_libs__compile_target_code__HwlocOpts_41 = (MR_String) "";
#line 1951 "compile_target_code.m"
      }
#line 1950 "compile_target_code.m"
    else
#line 1930 "compile_target_code.m"
      {
#line 1930 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__HighLevelCode_40;

#line 1931 "compile_target_code.m"
        {
#line 1931 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ThreadFlagsOpt_22, &backend_libs__compile_target_code__ThreadOpts_39);
        }
#line 1935 "compile_target_code.m"
        {
#line 1935 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 248, &backend_libs__compile_target_code__HighLevelCode_40);
        }
#line 1939 "compile_target_code.m"
        if ((backend_libs__compile_target_code__HighLevelCode_40 == (MR_Integer) 0))
#line 1940 "compile_target_code.m"
          {
#line 1940 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__HwlocFlagsOpt_42;

#line 1941 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_36, (MR_String) "shared") == 0);
#line 1943 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 1942 "compile_target_code.m"
              backend_libs__compile_target_code__HwlocFlagsOpt_42 = (MR_Integer) 585;
#line 1943 "compile_target_code.m"
            else
#line 1945 "compile_target_code.m"
              {
#line 1943 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_36, (MR_String) "static") == 0);
#line 1945 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 1944 "compile_target_code.m"
                  backend_libs__compile_target_code__HwlocFlagsOpt_42 = (MR_Integer) 586;
#line 1945 "compile_target_code.m"
                else
#line 1946 "compile_target_code.m"
                  {
#line 1946 "compile_target_code.m"
                    {
#line 1946 "compile_target_code.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_exe_or_shared_lib\'/9", (MR_String) "Invalid linkage");
#line 1946 "compile_target_code.m"
                      return;
                    }
#line 1946 "compile_target_code.m"
                  }
#line 1945 "compile_target_code.m"
              }
#line 1948 "compile_target_code.m"
            {
#line 1948 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__HwlocFlagsOpt_42, &backend_libs__compile_target_code__HwlocOpts_41);
            }
#line 1940 "compile_target_code.m"
          }
#line 1939 "compile_target_code.m"
        else
#line 1938 "compile_target_code.m"
          backend_libs__compile_target_code__HwlocOpts_41 = (MR_String) "";
#line 1930 "compile_target_code.m"
      }
#line 1957 "compile_target_code.m"
    {
#line 1957 "compile_target_code.m"
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__MercuryStdLibs_43);
    }
#line 1960 "compile_target_code.m"
    {
#line 1960 "compile_target_code.m"
      backend_libs__compile_target_code__get_system_libs_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__SystemLibs_44);
    }
#line 1966 "compile_target_code.m"
    {
#line 1966 "compile_target_code.m"
      backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__ResCmdLinkOpts_45);
    }
#line 1969 "compile_target_code.m"
    {
#line 1969 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LDFlagsOpt_21, &backend_libs__compile_target_code__LDFlagsList_46);
    }
#line 1970 "compile_target_code.m"
    {
#line 1970 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__LDFlagsList_46, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LDFlags_47);
    }
#line 1971 "compile_target_code.m"
    {
#line 1971 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 538, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_48);
    }
#line 1973 "compile_target_code.m"
    {
#line 1973 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 603, &backend_libs__compile_target_code__LinkerPathFlag_49);
    }
#line 1974 "compile_target_code.m"
    {
#line 1974 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibraryDirectoriesList_48, backend_libs__compile_target_code__LinkerPathFlag_49, (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_50);
    }
#line 1978 "compile_target_code.m"
    {
#line 1978 "compile_target_code.m"
      backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, backend_libs__compile_target_code__RpathFlagOpt_19, backend_libs__compile_target_code__RpathSepOpt_20, &backend_libs__compile_target_code__RpathOpts_51);
    }
#line 1982 "compile_target_code.m"
    {
#line 1982 "compile_target_code.m"
      backend_libs__compile_target_code__get_framework_directories_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__FrameworkDirectories_52);
    }
#line 1985 "compile_target_code.m"
    {
#line 1985 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_53);
    }
#line 1988 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_53 == (MR_Integer) 1);
#line 1988 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1989 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_12 == (MR_Integer) 2);
#line 2001 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1996 "compile_target_code.m"
      {
#line 1996 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__BaseFileName_54;
#line 1996 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SharedLibExt_55;
#line 1996 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__ShLibFileName_56;
#line 1996 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_110_110;

#line 1996 "compile_target_code.m"
        {
#line 1996 "compile_target_code.m"
          backend_libs__compile_target_code__BaseFileName_54 = mdbcomp__prim_data__sym_name_to_string_1_f_0(backend_libs__compile_target_code__ModuleName_13);
        }
#line 1997 "compile_target_code.m"
        {
#line 1997 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 568, &backend_libs__compile_target_code__SharedLibExt_55);
        }
#line 1999 "compile_target_code.m"
        {
#line 1999 "compile_target_code.m"
          backend_libs__compile_target_code__V_110_110 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__BaseFileName_54, backend_libs__compile_target_code__SharedLibExt_55);
        }
#line 1999 "compile_target_code.m"
        {
#line 1999 "compile_target_code.m"
          backend_libs__compile_target_code__ShLibFileName_56 = mercury__string__f_43_43_2_f_0((MR_String) "lib", backend_libs__compile_target_code__V_110_110);
        }
#line 2000 "compile_target_code.m"
        {
#line 2000 "compile_target_code.m"
          libs__file_util__get_install_name_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ShLibFileName_56, &backend_libs__compile_target_code__InstallNameOpt_57);
        }
#line 1996 "compile_target_code.m"
      }
#line 2001 "compile_target_code.m"
    else
#line 2002 "compile_target_code.m"
      backend_libs__compile_target_code__InstallNameOpt_57 = (MR_String) "";
#line 2005 "compile_target_code.m"
    {
#line 2005 "compile_target_code.m"
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__TraceLevel_58);
    }
#line 2006 "compile_target_code.m"
    {
#line 2006 "compile_target_code.m"
      backend_libs__compile_target_code__V_111_111 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_58);
    }
#line 2006 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_111_111 == (MR_Integer) 1);
#line 2008 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2007 "compile_target_code.m"
      backend_libs__compile_target_code__TraceOpts_59 = (MR_String) "";
#line 2008 "compile_target_code.m"
    else
#line 2009 "compile_target_code.m"
      {
#line 2009 "compile_target_code.m"
        libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__TraceFlagsOpt_24, &backend_libs__compile_target_code__TraceOpts_59);
      }
#line 2012 "compile_target_code.m"
    {
#line 2012 "compile_target_code.m"
      backend_libs__compile_target_code__get_frameworks_2_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__Frameworks_60);
    }
#line 2013 "compile_target_code.m"
    {
#line 2013 "compile_target_code.m"
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__MaybeLinkLibraries_61);
    }
#line 2014 "compile_target_code.m"
    {
#line 2014 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 590, &backend_libs__compile_target_code__LinkOptSep_62);
    }
#line 2117 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2119 "compile_target_code.m"
      *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 2117 "compile_target_code.m"
    else
#line 2016 "compile_target_code.m"
      {
#line 2016 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_61, (MR_Integer) 0)));
#line 2016 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__LinkLibraries_64;
#line 2016 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RestrictedCommandLine_65;
#line 2016 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__ArchiveSucceeded_71;
#line 2016 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__MaybeDeleteTmpArchive_72;
#line 2016 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Objects_73;

#line 2017 "compile_target_code.m"
        {
#line 2017 "compile_target_code.m"
          backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_63, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_64);
        }
#line 2020 "compile_target_code.m"
        {
#line 2020 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 649, &backend_libs__compile_target_code__RestrictedCommandLine_65);
        }
#line 2040 "compile_target_code.m"
        if ((backend_libs__compile_target_code__RestrictedCommandLine_65 == (MR_Integer) 0))
#line 2041 "compile_target_code.m"
          {
#line 2042 "compile_target_code.m"
            backend_libs__compile_target_code__ArchiveSucceeded_71 = (MR_Integer) 1;
#line 2043 "compile_target_code.m"
            backend_libs__compile_target_code__MaybeDeleteTmpArchive_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2044 "compile_target_code.m"
            {
#line 2044 "compile_target_code.m"
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__ObjectsList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_73);
            }
#line 2041 "compile_target_code.m"
          }
#line 2040 "compile_target_code.m"
        else
#line 2027 "compile_target_code.m"
          {
#line 2027 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__TmpFile_66;
#line 2027 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__LibExt_67;
#line 2027 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__TmpArchive_68;
#line 2027 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__ProperObjectFiles_69;
#line 2027 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__NonObjectFiles_70;
#line 2027 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_125_125;

#line 2028 "compile_target_code.m"
            {
#line 2028 "compile_target_code.m"
              mercury__io__make_temp_3_p_0(&backend_libs__compile_target_code__TmpFile_66);
            }
#line 2029 "compile_target_code.m"
            {
#line 2029 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 569, &backend_libs__compile_target_code__LibExt_67);
            }
#line 2030 "compile_target_code.m"
            {
#line 2030 "compile_target_code.m"
              backend_libs__compile_target_code__TmpArchive_68 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__TmpFile_66, backend_libs__compile_target_code__LibExt_67);
            }
#line 2033 "compile_target_code.m"
            {
#line 2033 "compile_target_code.m"
              backend_libs__compile_target_code__filter_object_files_4_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ObjectsList_15, &backend_libs__compile_target_code__ProperObjectFiles_69, &backend_libs__compile_target_code__NonObjectFiles_70);
            }
#line 2035 "compile_target_code.m"
            {
#line 2035 "compile_target_code.m"
              backend_libs__compile_target_code__create_archive_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__TmpArchive_68, (MR_Integer) 1, backend_libs__compile_target_code__ProperObjectFiles_69, &backend_libs__compile_target_code__ArchiveSucceeded_71);
            }
#line 2037 "compile_target_code.m"
            {
#line 2037 "compile_target_code.m"
              backend_libs__compile_target_code__MaybeDeleteTmpArchive_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDeleteTmpArchive_72, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpArchive_68));
#line 2037 "compile_target_code.m"
            }
#line 2038 "compile_target_code.m"
            {
#line 2038 "compile_target_code.m"
              backend_libs__compile_target_code__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpArchive_68));
#line 2038 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 1) = ((MR_Box) (backend_libs__compile_target_code__NonObjectFiles_70));
#line 2038 "compile_target_code.m"
            }
#line 2038 "compile_target_code.m"
            {
#line 2038 "compile_target_code.m"
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__V_125_125, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__Objects_73);
            }
#line 2027 "compile_target_code.m"
          }
#line 2107 "compile_target_code.m"
        if ((backend_libs__compile_target_code__ArchiveSucceeded_71 == (MR_Integer) 0))
#line 2109 "compile_target_code.m"
          *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 2107 "compile_target_code.m"
        else
#line 2048 "compile_target_code.m"
          {
#line 2048 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Command_74;
#line 2048 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__OutputOpt_75;
#line 2048 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__LinkCmd_76;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__Demangle_77;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__MaybeDemangleCmd_79;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__LinkSucceeded_80;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_129_129;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_130_130;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_132_132;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_133_133;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_135_135;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_136_136;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_138_138;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_139_139;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_141_141;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_142_142;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_144_144;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_145_145;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_147_147;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_148_148;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_150_150;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_151_151;
#line 2048 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_152_152;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_153_153;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_155_155;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_156_156;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_158_158;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_159_159;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_161_161;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_162_162;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_164_164;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_165_165;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_167_167;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_168_168;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_170_170;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_171_171;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_173_173;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_174_174;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_176_176;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_177_177;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_179_179;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_180_180;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_182_182;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_183_183;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_185_185;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_186_186;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_188_188;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_189_189;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_191_191;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_192_192;
#line 2048 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_194_194;

#line 2052 "compile_target_code.m"
            {
#line 2052 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__CommandOpt_18, &backend_libs__compile_target_code__Command_74);
            }
#line 2053 "compile_target_code.m"
            {
#line 2053 "compile_target_code.m"
              backend_libs__compile_target_code__get_linker_output_option_3_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__LinkTargetType_12, &backend_libs__compile_target_code__OutputOpt_75);
            }
#line 2062 "compile_target_code.m"
            {
#line 2062 "compile_target_code.m"
              backend_libs__compile_target_code__V_152_152 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__OutputFileName_14);
            }
#line 2076 "compile_target_code.m"
            {
#line 2076 "compile_target_code.m"
              backend_libs__compile_target_code__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_194_194, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemLibs_44));
#line 2076 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2076 "compile_target_code.m"
            }
#line 2075 "compile_target_code.m"
            {
#line 2075 "compile_target_code.m"
              backend_libs__compile_target_code__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_192_192, 0) = ((MR_Box) ((MR_String) " "));
#line 2075 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_192_192, 1) = ((MR_Box) (backend_libs__compile_target_code__V_194_194));
#line 2075 "compile_target_code.m"
            }
#line 2075 "compile_target_code.m"
            {
#line 2075 "compile_target_code.m"
              backend_libs__compile_target_code__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_191_191, 0) = ((MR_Box) (backend_libs__compile_target_code__HwlocOpts_41));
#line 2075 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_191_191, 1) = ((MR_Box) (backend_libs__compile_target_code__V_192_192));
#line 2075 "compile_target_code.m"
            }
#line 2074 "compile_target_code.m"
            {
#line 2074 "compile_target_code.m"
              backend_libs__compile_target_code__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_189_189, 0) = ((MR_Box) ((MR_String) " "));
#line 2074 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_189_189, 1) = ((MR_Box) (backend_libs__compile_target_code__V_191_191));
#line 2074 "compile_target_code.m"
            }
#line 2074 "compile_target_code.m"
            {
#line 2074 "compile_target_code.m"
              backend_libs__compile_target_code__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_188_188, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_43));
#line 2074 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_188_188, 1) = ((MR_Box) (backend_libs__compile_target_code__V_189_189));
#line 2074 "compile_target_code.m"
            }
#line 2073 "compile_target_code.m"
            {
#line 2073 "compile_target_code.m"
              backend_libs__compile_target_code__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2073 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_186_186, 0) = ((MR_Box) ((MR_String) " "));
#line 2073 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_186_186, 1) = ((MR_Box) (backend_libs__compile_target_code__V_188_188));
#line 2073 "compile_target_code.m"
            }
#line 2073 "compile_target_code.m"
            {
#line 2073 "compile_target_code.m"
              backend_libs__compile_target_code__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2073 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_185_185, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_64));
#line 2073 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_185_185, 1) = ((MR_Box) (backend_libs__compile_target_code__V_186_186));
#line 2073 "compile_target_code.m"
            }
#line 2072 "compile_target_code.m"
            {
#line 2072 "compile_target_code.m"
              backend_libs__compile_target_code__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2072 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_183_183, 0) = ((MR_Box) ((MR_String) " "));
#line 2072 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_183_183, 1) = ((MR_Box) (backend_libs__compile_target_code__V_185_185));
#line 2072 "compile_target_code.m"
            }
#line 2072 "compile_target_code.m"
            {
#line 2072 "compile_target_code.m"
              backend_libs__compile_target_code__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2072 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_182_182, 0) = ((MR_Box) (backend_libs__compile_target_code__LDFlags_47));
#line 2072 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_182_182, 1) = ((MR_Box) (backend_libs__compile_target_code__V_183_183));
#line 2072 "compile_target_code.m"
            }
#line 2071 "compile_target_code.m"
            {
#line 2071 "compile_target_code.m"
              backend_libs__compile_target_code__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2071 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_180_180, 0) = ((MR_Box) ((MR_String) " "));
#line 2071 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_180_180, 1) = ((MR_Box) (backend_libs__compile_target_code__V_182_182));
#line 2071 "compile_target_code.m"
            }
#line 2071 "compile_target_code.m"
            {
#line 2071 "compile_target_code.m"
              backend_libs__compile_target_code__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2071 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_179_179, 0) = ((MR_Box) (backend_libs__compile_target_code__ResCmdLinkOpts_45));
#line 2071 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_179_179, 1) = ((MR_Box) (backend_libs__compile_target_code__V_180_180));
#line 2071 "compile_target_code.m"
            }
#line 2070 "compile_target_code.m"
            {
#line 2070 "compile_target_code.m"
              backend_libs__compile_target_code__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2070 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_177_177, 0) = ((MR_Box) ((MR_String) " "));
#line 2070 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_177_177, 1) = ((MR_Box) (backend_libs__compile_target_code__V_179_179));
#line 2070 "compile_target_code.m"
            }
#line 2070 "compile_target_code.m"
            {
#line 2070 "compile_target_code.m"
              backend_libs__compile_target_code__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2070 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_176_176, 0) = ((MR_Box) (backend_libs__compile_target_code__Frameworks_60));
#line 2070 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_176_176, 1) = ((MR_Box) (backend_libs__compile_target_code__V_177_177));
#line 2070 "compile_target_code.m"
            }
#line 2069 "compile_target_code.m"
            {
#line 2069 "compile_target_code.m"
              backend_libs__compile_target_code__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2069 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_174_174, 0) = ((MR_Box) ((MR_String) " "));
#line 2069 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_174_174, 1) = ((MR_Box) (backend_libs__compile_target_code__V_176_176));
#line 2069 "compile_target_code.m"
            }
#line 2069 "compile_target_code.m"
            {
#line 2069 "compile_target_code.m"
              backend_libs__compile_target_code__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2069 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_173_173, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpts_35));
#line 2069 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_173_173, 1) = ((MR_Box) (backend_libs__compile_target_code__V_174_174));
#line 2069 "compile_target_code.m"
            }
#line 2068 "compile_target_code.m"
            {
#line 2068 "compile_target_code.m"
              backend_libs__compile_target_code__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_171_171, 0) = ((MR_Box) ((MR_String) " "));
#line 2068 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_171_171, 1) = ((MR_Box) (backend_libs__compile_target_code__V_173_173));
#line 2068 "compile_target_code.m"
            }
#line 2068 "compile_target_code.m"
            {
#line 2068 "compile_target_code.m"
              backend_libs__compile_target_code__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_170_170, 0) = ((MR_Box) (backend_libs__compile_target_code__InstallNameOpt_57));
#line 2068 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_170_170, 1) = ((MR_Box) (backend_libs__compile_target_code__V_171_171));
#line 2068 "compile_target_code.m"
            }
#line 2067 "compile_target_code.m"
            {
#line 2067 "compile_target_code.m"
              backend_libs__compile_target_code__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_168_168, 0) = ((MR_Box) ((MR_String) " "));
#line 2067 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_168_168, 1) = ((MR_Box) (backend_libs__compile_target_code__V_170_170));
#line 2067 "compile_target_code.m"
            }
#line 2067 "compile_target_code.m"
            {
#line 2067 "compile_target_code.m"
              backend_libs__compile_target_code__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_167_167, 0) = ((MR_Box) (backend_libs__compile_target_code__FrameworkDirectories_52));
#line 2067 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_167_167, 1) = ((MR_Box) (backend_libs__compile_target_code__V_168_168));
#line 2067 "compile_target_code.m"
            }
#line 2066 "compile_target_code.m"
            {
#line 2066 "compile_target_code.m"
              backend_libs__compile_target_code__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_165_165, 0) = ((MR_Box) ((MR_String) " "));
#line 2066 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_165_165, 1) = ((MR_Box) (backend_libs__compile_target_code__V_167_167));
#line 2066 "compile_target_code.m"
            }
#line 2066 "compile_target_code.m"
            {
#line 2066 "compile_target_code.m"
              backend_libs__compile_target_code__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_164_164, 0) = ((MR_Box) (backend_libs__compile_target_code__RpathOpts_51));
#line 2066 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_164_164, 1) = ((MR_Box) (backend_libs__compile_target_code__V_165_165));
#line 2066 "compile_target_code.m"
            }
#line 2065 "compile_target_code.m"
            {
#line 2065 "compile_target_code.m"
              backend_libs__compile_target_code__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_162_162, 0) = ((MR_Box) ((MR_String) " "));
#line 2065 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_162_162, 1) = ((MR_Box) (backend_libs__compile_target_code__V_164_164));
#line 2065 "compile_target_code.m"
            }
#line 2065 "compile_target_code.m"
            {
#line 2065 "compile_target_code.m"
              backend_libs__compile_target_code__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_161_161, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_50));
#line 2065 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_161_161, 1) = ((MR_Box) (backend_libs__compile_target_code__V_162_162));
#line 2065 "compile_target_code.m"
            }
#line 2064 "compile_target_code.m"
            {
#line 2064 "compile_target_code.m"
              backend_libs__compile_target_code__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_159_159, 0) = ((MR_Box) ((MR_String) " "));
#line 2064 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_159_159, 1) = ((MR_Box) (backend_libs__compile_target_code__V_161_161));
#line 2064 "compile_target_code.m"
            }
#line 2064 "compile_target_code.m"
            {
#line 2064 "compile_target_code.m"
              backend_libs__compile_target_code__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_158_158, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkOptSep_62));
#line 2064 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_158_158, 1) = ((MR_Box) (backend_libs__compile_target_code__V_159_159));
#line 2064 "compile_target_code.m"
            }
#line 2063 "compile_target_code.m"
            {
#line 2063 "compile_target_code.m"
              backend_libs__compile_target_code__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_156_156, 0) = ((MR_Box) ((MR_String) " "));
#line 2063 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_156_156, 1) = ((MR_Box) (backend_libs__compile_target_code__V_158_158));
#line 2063 "compile_target_code.m"
            }
#line 2063 "compile_target_code.m"
            {
#line 2063 "compile_target_code.m"
              backend_libs__compile_target_code__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_155_155, 0) = ((MR_Box) (backend_libs__compile_target_code__Objects_73));
#line 2063 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_155_155, 1) = ((MR_Box) (backend_libs__compile_target_code__V_156_156));
#line 2063 "compile_target_code.m"
            }
#line 2062 "compile_target_code.m"
            {
#line 2062 "compile_target_code.m"
              backend_libs__compile_target_code__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_153_153, 0) = ((MR_Box) ((MR_String) " "));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_153_153, 1) = ((MR_Box) (backend_libs__compile_target_code__V_155_155));
#line 2062 "compile_target_code.m"
            }
#line 2062 "compile_target_code.m"
            {
#line 2062 "compile_target_code.m"
              backend_libs__compile_target_code__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 0) = ((MR_Box) (backend_libs__compile_target_code__V_152_152));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 1) = ((MR_Box) (backend_libs__compile_target_code__V_153_153));
#line 2062 "compile_target_code.m"
            }
#line 2062 "compile_target_code.m"
            {
#line 2062 "compile_target_code.m"
              backend_libs__compile_target_code__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_150_150, 0) = ((MR_Box) (backend_libs__compile_target_code__OutputOpt_75));
#line 2062 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_150_150, 1) = ((MR_Box) (backend_libs__compile_target_code__V_151_151));
#line 2062 "compile_target_code.m"
            }
#line 2061 "compile_target_code.m"
            {
#line 2061 "compile_target_code.m"
              backend_libs__compile_target_code__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 0) = ((MR_Box) ((MR_String) " "));
#line 2061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 1) = ((MR_Box) (backend_libs__compile_target_code__V_150_150));
#line 2061 "compile_target_code.m"
            }
#line 2061 "compile_target_code.m"
            {
#line 2061 "compile_target_code.m"
              backend_libs__compile_target_code__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_147_147, 0) = ((MR_Box) (backend_libs__compile_target_code__ReserveStackSizeOpt_27));
#line 2061 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_147_147, 1) = ((MR_Box) (backend_libs__compile_target_code__V_148_148));
#line 2061 "compile_target_code.m"
            }
#line 2060 "compile_target_code.m"
            {
#line 2060 "compile_target_code.m"
              backend_libs__compile_target_code__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 0) = ((MR_Box) ((MR_String) " "));
#line 2060 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 1) = ((MR_Box) (backend_libs__compile_target_code__V_147_147));
#line 2060 "compile_target_code.m"
            }
#line 2060 "compile_target_code.m"
            {
#line 2060 "compile_target_code.m"
              backend_libs__compile_target_code__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpts_59));
#line 2060 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 1) = ((MR_Box) (backend_libs__compile_target_code__V_145_145));
#line 2060 "compile_target_code.m"
            }
#line 2059 "compile_target_code.m"
            {
#line 2059 "compile_target_code.m"
              backend_libs__compile_target_code__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 0) = ((MR_Box) ((MR_String) " "));
#line 2059 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 1) = ((MR_Box) (backend_libs__compile_target_code__V_144_144));
#line 2059 "compile_target_code.m"
            }
#line 2059 "compile_target_code.m"
            {
#line 2059 "compile_target_code.m"
              backend_libs__compile_target_code__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadOpts_39));
#line 2059 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 1) = ((MR_Box) (backend_libs__compile_target_code__V_142_142));
#line 2059 "compile_target_code.m"
            }
#line 2058 "compile_target_code.m"
            {
#line 2058 "compile_target_code.m"
              backend_libs__compile_target_code__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 0) = ((MR_Box) ((MR_String) " "));
#line 2058 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 1) = ((MR_Box) (backend_libs__compile_target_code__V_141_141));
#line 2058 "compile_target_code.m"
            }
#line 2058 "compile_target_code.m"
            {
#line 2058 "compile_target_code.m"
              backend_libs__compile_target_code__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 0) = ((MR_Box) (backend_libs__compile_target_code__UndefOpt_26));
#line 2058 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 1) = ((MR_Box) (backend_libs__compile_target_code__V_139_139));
#line 2058 "compile_target_code.m"
            }
#line 2057 "compile_target_code.m"
            {
#line 2057 "compile_target_code.m"
              backend_libs__compile_target_code__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 0) = ((MR_Box) ((MR_String) " "));
#line 2057 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 1) = ((MR_Box) (backend_libs__compile_target_code__V_138_138));
#line 2057 "compile_target_code.m"
            }
#line 2057 "compile_target_code.m"
            {
#line 2057 "compile_target_code.m"
              backend_libs__compile_target_code__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkerStripOpt_29));
#line 2057 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 1) = ((MR_Box) (backend_libs__compile_target_code__V_136_136));
#line 2057 "compile_target_code.m"
            }
#line 2056 "compile_target_code.m"
            {
#line 2056 "compile_target_code.m"
              backend_libs__compile_target_code__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 0) = ((MR_Box) ((MR_String) " "));
#line 2056 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 1) = ((MR_Box) (backend_libs__compile_target_code__V_135_135));
#line 2056 "compile_target_code.m"
            }
#line 2056 "compile_target_code.m"
            {
#line 2056 "compile_target_code.m"
              backend_libs__compile_target_code__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 0) = ((MR_Box) (backend_libs__compile_target_code__StaticOpts_37));
#line 2056 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 1) = ((MR_Box) (backend_libs__compile_target_code__V_133_133));
#line 2056 "compile_target_code.m"
            }
#line 2055 "compile_target_code.m"
            {
#line 2055 "compile_target_code.m"
              backend_libs__compile_target_code__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 0) = ((MR_Box) ((MR_String) " "));
#line 2055 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 1) = ((MR_Box) (backend_libs__compile_target_code__V_132_132));
#line 2055 "compile_target_code.m"
            }
#line 2055 "compile_target_code.m"
            {
#line 2055 "compile_target_code.m"
              backend_libs__compile_target_code__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 0) = ((MR_Box) (backend_libs__compile_target_code__Command_74));
#line 2055 "compile_target_code.m"
              MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 1) = ((MR_Box) (backend_libs__compile_target_code__V_130_130));
#line 2055 "compile_target_code.m"
            }
#line 2054 "compile_target_code.m"
            {
#line 2054 "compile_target_code.m"
              mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_129_129, &backend_libs__compile_target_code__LinkCmd_76);
            }
#line 2078 "compile_target_code.m"
            {
#line 2078 "compile_target_code.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 558, &backend_libs__compile_target_code__Demangle_77);
            }
#line 2084 "compile_target_code.m"
            if ((backend_libs__compile_target_code__Demangle_77 == (MR_Integer) 0))
#line 2086 "compile_target_code.m"
              backend_libs__compile_target_code__MaybeDemangleCmd_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2084 "compile_target_code.m"
            else
#line 2080 "compile_target_code.m"
              {
#line 2080 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__DemangleCmd_78;

#line 2081 "compile_target_code.m"
                {
#line 2081 "compile_target_code.m"
                  libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 580, &backend_libs__compile_target_code__DemangleCmd_78);
                }
#line 2083 "compile_target_code.m"
                {
#line 2083 "compile_target_code.m"
                  backend_libs__compile_target_code__MaybeDemangleCmd_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDemangleCmd_79, 0) = ((MR_Box) (backend_libs__compile_target_code__DemangleCmd_78));
#line 2083 "compile_target_code.m"
                }
#line 2080 "compile_target_code.m"
              }
#line 2089 "compile_target_code.m"
            {
#line 2089 "compile_target_code.m"
              parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__LinkCmd_76, backend_libs__compile_target_code__MaybeDemangleCmd_79, &backend_libs__compile_target_code__LinkSucceeded_80);
            }
#line 2094 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkSucceeded_80 == (MR_Integer) 1);
#line 2094 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 2094 "compile_target_code.m"
              {
#line 2095 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LinkerStripOpt_29, (MR_String) "") == 0);
#line 2094 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 2094 "compile_target_code.m"
                  {
#line 2096 "compile_target_code.m"
                    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__StripExeCommand_30, (MR_String) "") == 0);
#line 2096 "compile_target_code.m"
                    backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
#line 2094 "compile_target_code.m"
                  }
#line 2094 "compile_target_code.m"
              }
#line 2104 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 2101 "compile_target_code.m"
              {
#line 2101 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__StripCmd_81;
#line 2101 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_200_200;
#line 2101 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_201_201;
#line 2101 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_203_203;
#line 2101 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_204_204;
#line 2101 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_206_206;
#line 2101 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__V_207_207;

#line 2100 "compile_target_code.m"
                {
#line 2100 "compile_target_code.m"
                  backend_libs__compile_target_code__V_207_207 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__OutputFileName_14);
                }
#line 2101 "compile_target_code.m"
                {
#line 2101 "compile_target_code.m"
                  backend_libs__compile_target_code__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2101 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_206_206, 0) = ((MR_Box) (backend_libs__compile_target_code__V_207_207));
#line 2101 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2101 "compile_target_code.m"
                }
#line 2099 "compile_target_code.m"
                {
#line 2099 "compile_target_code.m"
                  backend_libs__compile_target_code__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_204_204, 0) = ((MR_Box) ((MR_String) " "));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_204_204, 1) = ((MR_Box) (backend_libs__compile_target_code__V_206_206));
#line 2099 "compile_target_code.m"
                }
#line 2099 "compile_target_code.m"
                {
#line 2099 "compile_target_code.m"
                  backend_libs__compile_target_code__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_203_203, 0) = ((MR_Box) (backend_libs__compile_target_code__StripExeFlags_33));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_203_203, 1) = ((MR_Box) (backend_libs__compile_target_code__V_204_204));
#line 2099 "compile_target_code.m"
                }
#line 2099 "compile_target_code.m"
                {
#line 2099 "compile_target_code.m"
                  backend_libs__compile_target_code__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_201_201, 0) = ((MR_Box) ((MR_String) " "));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_201_201, 1) = ((MR_Box) (backend_libs__compile_target_code__V_203_203));
#line 2099 "compile_target_code.m"
                }
#line 2099 "compile_target_code.m"
                {
#line 2099 "compile_target_code.m"
                  backend_libs__compile_target_code__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_200_200, 0) = ((MR_Box) (backend_libs__compile_target_code__StripExeCommand_30));
#line 2099 "compile_target_code.m"
                  MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_200_200, 1) = ((MR_Box) (backend_libs__compile_target_code__V_201_201));
#line 2099 "compile_target_code.m"
                }
#line 2098 "compile_target_code.m"
                {
#line 2098 "compile_target_code.m"
                  mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_200_200, &backend_libs__compile_target_code__StripCmd_81);
                }
#line 2102 "compile_target_code.m"
                {
#line 2102 "compile_target_code.m"
                  parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__ErrorStream_11, (MR_Integer) 1, backend_libs__compile_target_code__StripCmd_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__Succeeded_16);
                }
#line 2101 "compile_target_code.m"
              }
#line 2104 "compile_target_code.m"
            else
#line 2105 "compile_target_code.m"
              *backend_libs__compile_target_code__Succeeded_16 = backend_libs__compile_target_code__LinkSucceeded_80;
#line 2048 "compile_target_code.m"
          }
#line 2114 "compile_target_code.m"
        if ((backend_libs__compile_target_code__MaybeDeleteTmpArchive_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2115 "compile_target_code.m"
          {
#line 2115 "compile_target_code.m"
          }
#line 2114 "compile_target_code.m"
        else
#line 2112 "compile_target_code.m"
          {
#line 2112 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__FileToDelete_82 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeDeleteTmpArchive_72, (MR_Integer) 0)));
#line 2113 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_83_83;

#line 2113 "compile_target_code.m"
            {
#line 2113 "compile_target_code.m"
              mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__FileToDelete_82, &backend_libs__compile_target_code__V_83_83);
            }
#line 2112 "compile_target_code.m"
          }
#line 2016 "compile_target_code.m"
      }
#line 1849 "compile_target_code.m"
  }
#line 1843 "compile_target_code.m"
}

#line 1536 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1536 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 1536 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 1536 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
#line 1536 "compile_target_code.m"
{
#line 1536 "compile_target_code.m"
  {
#line 1536 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 1536 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_FileName_12;

#line 1536 "compile_target_code.m"
    {
#line 1536 "compile_target_code.m"
      backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_FileName_12);
    }
#line 1536 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_FileName_12));
#line 1536 "compile_target_code.m"
  }
#line 1536 "compile_target_code.m"
}

#line 1517 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_14,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_15,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_16,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_17,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_18,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__TargetExt_19,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__StdInitFileNames_20,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_21,
#line 1517 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_22,
#line 1517 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ModuleNameOption_23,
#line 1517 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MaybeInitTargetFile_24)
#line 1517 "compile_target_code.m"
{
#line 1525 "compile_target_code.m"
  {
#line 1525 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_122_122;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_26;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Stats_27;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Grade_28;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InitTargetFileName_29;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TargetFileNameList_30;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileDirsList_31;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InitFileDirs_32;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileNamesList0_33;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileNamesList1_34;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceInitFileNamesList0_35;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileNamesList2_36;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceInitFileNamesList_37;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TraceLevel_38;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TraceOpt_39;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileNamesList3_40;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebug_41;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileNamesList_42;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RuntimeFlagsList_43;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RuntimeFlags_44;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ExtraInits_45;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExtraInitsOpt_46;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Main_47;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NoMainOpt_48;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExperimentalComplexity_49;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExperimentalComplexityOpt_50;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TmpInitTargetFileName_51;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInitArgs_52;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MkInitOk_53;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_61_61;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_65_65;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_85_85;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_87_87;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_88_88;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_90_90;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_91_91;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_93_93;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_94_94;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_96_96;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_97_97;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_99_99;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_100_100;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_102_102;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_103_103;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_105_105;
#line 1525 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_106_106;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_107_107;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_109_109;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_110_110;
#line 1525 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_113_113;
#line 1535 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_66_66;
#line 1557 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_74_74;

#line 1526 "compile_target_code.m"
    {
#line 1526 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_26);
    }
#line 1527 "compile_target_code.m"
    {
#line 1527 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 54, &backend_libs__compile_target_code__Stats_27);
    }
#line 1528 "compile_target_code.m"
    {
#line 1528 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_26, (MR_String) "% Creating initialization file...\n");
    }
#line 1530 "compile_target_code.m"
    {
#line 1530 "compile_target_code.m"
      libs__handle_options__compute_grade_2_p_0(backend_libs__compile_target_code__Globals_14, &backend_libs__compile_target_code__Grade_28);
    }
#line 1532 "compile_target_code.m"
    {
#line 1532 "compile_target_code.m"
      backend_libs__compile_target_code__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_init", backend_libs__compile_target_code__TargetExt_19);
    }
#line 1532 "compile_target_code.m"
    {
#line 1532 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__ModuleName_17, backend_libs__compile_target_code__V_61_61, (MR_Integer) 0, &backend_libs__compile_target_code__InitTargetFileName_29);
    }
#line 1536 "compile_target_code.m"
    {
#line 1536 "compile_target_code.m"
      backend_libs__compile_target_code__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0]));
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 1) = ((MR_Box) (backend_libs__compile_target_code__make_init_target_file_13_p_0_1));
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_14));
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 4) = ((MR_Box) (backend_libs__compile_target_code__TargetExt_19));
#line 1536 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_65_65, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1536 "compile_target_code.m"
    }
#line 10681 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1535 "compile_target_code.m"
    {
#line 1535 "compile_target_code.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, backend_libs__compile_target_code__TypeCtorInfo_122_122, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_65_65, backend_libs__compile_target_code__ModuleNames_18, &backend_libs__compile_target_code__TargetFileNameList_30, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_66_66);
    }
#line 1539 "compile_target_code.m"
    {
#line 1539 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 550, &backend_libs__compile_target_code__InitFileDirsList_31);
    }
#line 1541 "compile_target_code.m"
    {
#line 1541 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__InitFileDirsList_31, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__InitFileDirs_32);
    }
#line 1543 "compile_target_code.m"
    {
#line 1543 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 551, &backend_libs__compile_target_code__InitFileNamesList0_33);
    }
#line 1549 "compile_target_code.m"
    {
#line 1549 "compile_target_code.m"
      mercury__list__remove_dups_2_p_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList0_33, &backend_libs__compile_target_code__InitFileNamesList1_34);
    }
#line 1551 "compile_target_code.m"
    {
#line 1551 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 552, &backend_libs__compile_target_code__TraceInitFileNamesList0_35);
    }
#line 1553 "compile_target_code.m"
    {
#line 1553 "compile_target_code.m"
      backend_libs__compile_target_code__InitFileNamesList2_36 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__StdInitFileNames_20, backend_libs__compile_target_code__InitFileNamesList1_34);
    }
#line 1554 "compile_target_code.m"
    {
#line 1554 "compile_target_code.m"
      backend_libs__compile_target_code__TraceInitFileNamesList_37 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__StdTraceInitFileNames_21, backend_libs__compile_target_code__TraceInitFileNamesList0_35);
    }
#line 1556 "compile_target_code.m"
    {
#line 1556 "compile_target_code.m"
      libs__globals__get_trace_level_2_p_0(backend_libs__compile_target_code__Globals_14, &backend_libs__compile_target_code__TraceLevel_38);
    }
#line 1557 "compile_target_code.m"
    {
#line 1557 "compile_target_code.m"
      backend_libs__compile_target_code__V_74_74 = libs__trace_params__given_trace_level_is_none_1_f_0(backend_libs__compile_target_code__TraceLevel_38);
    }
#line 1557 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__V_74_74 == (MR_Integer) 0);
#line 1560 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1558 "compile_target_code.m"
      {
#line 1558 "compile_target_code.m"
        backend_libs__compile_target_code__TraceOpt_39 = (MR_String) "-t";
#line 1559 "compile_target_code.m"
        {
#line 1559 "compile_target_code.m"
          backend_libs__compile_target_code__InitFileNamesList3_40 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList2_36, backend_libs__compile_target_code__TraceInitFileNamesList_37);
        }
#line 1558 "compile_target_code.m"
      }
#line 1560 "compile_target_code.m"
    else
#line 1561 "compile_target_code.m"
      {
#line 1561 "compile_target_code.m"
        backend_libs__compile_target_code__TraceOpt_39 = (MR_String) "";
#line 1562 "compile_target_code.m"
        backend_libs__compile_target_code__InitFileNamesList3_40 = backend_libs__compile_target_code__InitFileNamesList2_36;
#line 1561 "compile_target_code.m"
      }
#line 1565 "compile_target_code.m"
    {
#line 1565 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 229, &backend_libs__compile_target_code__SourceDebug_41);
    }
#line 1569 "compile_target_code.m"
    if ((backend_libs__compile_target_code__SourceDebug_41 == (MR_Integer) 0))
#line 1571 "compile_target_code.m"
      backend_libs__compile_target_code__InitFileNamesList_42 = backend_libs__compile_target_code__InitFileNamesList3_40;
#line 1569 "compile_target_code.m"
    else
#line 1568 "compile_target_code.m"
      {
#line 1568 "compile_target_code.m"
        backend_libs__compile_target_code__InitFileNamesList_42 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__InitFileNamesList3_40, backend_libs__compile_target_code__SourceDebugInitFileNames_22);
      }
#line 1574 "compile_target_code.m"
    {
#line 1574 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 562, &backend_libs__compile_target_code__RuntimeFlagsList_43);
    }
#line 1576 "compile_target_code.m"
    {
#line 1576 "compile_target_code.m"
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(backend_libs__compile_target_code__RuntimeFlagsList_43, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__RuntimeFlags_44);
    }
#line 1578 "compile_target_code.m"
    {
#line 1578 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 563, &backend_libs__compile_target_code__ExtraInits_45);
    }
#line 1583 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ExtraInits_45 == (MR_Integer) 0))
#line 1585 "compile_target_code.m"
      backend_libs__compile_target_code__ExtraInitsOpt_46 = (MR_String) "";
#line 1583 "compile_target_code.m"
    else
#line 1582 "compile_target_code.m"
      backend_libs__compile_target_code__ExtraInitsOpt_46 = (MR_String) "-x";
#line 1588 "compile_target_code.m"
    {
#line 1588 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 559, &backend_libs__compile_target_code__Main_47);
    }
#line 1592 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Main_47 == (MR_Integer) 0))
#line 1591 "compile_target_code.m"
      backend_libs__compile_target_code__NoMainOpt_48 = (MR_String) "-l";
#line 1592 "compile_target_code.m"
    else
#line 1594 "compile_target_code.m"
      backend_libs__compile_target_code__NoMainOpt_48 = (MR_String) "";
#line 1597 "compile_target_code.m"
    {
#line 1597 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_14, (MR_Integer) 208, &backend_libs__compile_target_code__ExperimentalComplexity_49);
    }
#line 1599 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ExperimentalComplexity_49, (MR_String) "") == 0);
#line 1601 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1600 "compile_target_code.m"
      backend_libs__compile_target_code__ExperimentalComplexityOpt_50 = (MR_String) "";
#line 1601 "compile_target_code.m"
    else
#line 1602 "compile_target_code.m"
      {
#line 1602 "compile_target_code.m"
        {
#line 1602 "compile_target_code.m"
          backend_libs__compile_target_code__ExperimentalComplexityOpt_50 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", backend_libs__compile_target_code__ExperimentalComplexity_49);
        }
#line 1602 "compile_target_code.m"
      }
#line 1605 "compile_target_code.m"
    {
#line 1605 "compile_target_code.m"
      backend_libs__compile_target_code__TmpInitTargetFileName_51 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__InitTargetFileName_29, (MR_String) ".tmp");
    }
#line 1613 "compile_target_code.m"
    {
#line 1613 "compile_target_code.m"
      backend_libs__compile_target_code__V_106_106 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__TmpInitTargetFileName_51);
    }
#line 1616 "compile_target_code.m"
    {
#line 1616 "compile_target_code.m"
      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__ModuleNameOption_23));
#line 1616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1616 "compile_target_code.m"
    }
#line 1614 "compile_target_code.m"
    {
#line 1614 "compile_target_code.m"
      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__InitFileDirs_32));
#line 1614 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
#line 1614 "compile_target_code.m"
    }
#line 1614 "compile_target_code.m"
    {
#line 1614 "compile_target_code.m"
      backend_libs__compile_target_code__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 0) = ((MR_Box) ((MR_String) " "));
#line 1614 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 1) = ((MR_Box) (backend_libs__compile_target_code__V_109_109));
#line 1614 "compile_target_code.m"
    }
#line 1613 "compile_target_code.m"
    {
#line 1613 "compile_target_code.m"
      backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
#line 1613 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_107_107));
#line 1613 "compile_target_code.m"
    }
#line 1613 "compile_target_code.m"
    {
#line 1613 "compile_target_code.m"
      backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) ((MR_String) " -o "));
#line 1613 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
#line 1613 "compile_target_code.m"
    }
#line 1612 "compile_target_code.m"
    {
#line 1612 "compile_target_code.m"
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1612 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) (backend_libs__compile_target_code__RuntimeFlags_44));
#line 1612 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_103_103));
#line 1612 "compile_target_code.m"
    }
#line 1612 "compile_target_code.m"
    {
#line 1612 "compile_target_code.m"
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1612 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) ((MR_String) " "));
#line 1612 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
#line 1612 "compile_target_code.m"
    }
#line 1611 "compile_target_code.m"
    {
#line 1611 "compile_target_code.m"
      backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) (backend_libs__compile_target_code__ExperimentalComplexityOpt_50));
#line 1611 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
#line 1611 "compile_target_code.m"
    }
#line 1611 "compile_target_code.m"
    {
#line 1611 "compile_target_code.m"
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) ((MR_String) " "));
#line 1611 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
#line 1611 "compile_target_code.m"
    }
#line 1610 "compile_target_code.m"
    {
#line 1610 "compile_target_code.m"
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__NoMainOpt_48));
#line 1610 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
#line 1610 "compile_target_code.m"
    }
#line 1610 "compile_target_code.m"
    {
#line 1610 "compile_target_code.m"
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) ((MR_String) " "));
#line 1610 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
#line 1610 "compile_target_code.m"
    }
#line 1609 "compile_target_code.m"
    {
#line 1609 "compile_target_code.m"
      backend_libs__compile_target_code__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 0) = ((MR_Box) (backend_libs__compile_target_code__ExtraInitsOpt_46));
#line 1609 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
#line 1609 "compile_target_code.m"
    }
#line 1609 "compile_target_code.m"
    {
#line 1609 "compile_target_code.m"
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) ((MR_String) " "));
#line 1609 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_93_93));
#line 1609 "compile_target_code.m"
    }
#line 1608 "compile_target_code.m"
    {
#line 1608 "compile_target_code.m"
      backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__TraceOpt_39));
#line 1608 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
#line 1608 "compile_target_code.m"
    }
#line 1608 "compile_target_code.m"
    {
#line 1608 "compile_target_code.m"
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) ((MR_String) " "));
#line 1608 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_90_90));
#line 1608 "compile_target_code.m"
    }
#line 1607 "compile_target_code.m"
    {
#line 1607 "compile_target_code.m"
      backend_libs__compile_target_code__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 0) = ((MR_Box) (backend_libs__compile_target_code__Grade_28));
#line 1607 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_87_87, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
#line 1607 "compile_target_code.m"
    }
#line 1607 "compile_target_code.m"
    {
#line 1607 "compile_target_code.m"
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) ((MR_String) " -g "));
#line 1607 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (backend_libs__compile_target_code__V_87_87));
#line 1607 "compile_target_code.m"
    }
#line 1606 "compile_target_code.m"
    {
#line 1606 "compile_target_code.m"
      backend_libs__compile_target_code__MkInitArgs_52 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_85_85);
    }
#line 1619 "compile_target_code.m"
    {
#line 1619 "compile_target_code.m"
      backend_libs__compile_target_code__V_113_113 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_122_122, backend_libs__compile_target_code__TargetFileNameList_30, backend_libs__compile_target_code__InitFileNamesList_42);
    }
#line 1618 "compile_target_code.m"
    {
#line 1618 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__ErrorStream_15, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_16, backend_libs__compile_target_code__MkInitArgs_52, backend_libs__compile_target_code__V_113_113, &backend_libs__compile_target_code__MkInitOk_53);
    }
#line 1622 "compile_target_code.m"
    {
#line 1622 "compile_target_code.m"
      libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_27);
    }
#line 1634 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MkInitOk_53 == (MR_Integer) 0))
#line 1636 "compile_target_code.m"
      *backend_libs__compile_target_code__MaybeInitTargetFile_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "compile_target_code.m"
    else
#line 1624 "compile_target_code.m"
      {
#line 1624 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__UpdateOk_54;

#line 1625 "compile_target_code.m"
        {
#line 1625 "compile_target_code.m"
          parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(backend_libs__compile_target_code__Globals_14, backend_libs__compile_target_code__InitTargetFileName_29, &backend_libs__compile_target_code__UpdateOk_54);
        }
#line 1630 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UpdateOk_54 == (MR_Integer) 0))
#line 1632 "compile_target_code.m"
          *backend_libs__compile_target_code__MaybeInitTargetFile_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1630 "compile_target_code.m"
        else
#line 1629 "compile_target_code.m"
          {
#line 1629 "compile_target_code.m"
            MR_Word base;
#line 1629 "compile_target_code.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "compile_target_code.m"
            *backend_libs__compile_target_code__MaybeInitTargetFile_24 = base;
#line 1629 "compile_target_code.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__compile_target_code__InitTargetFileName_29));
#line 1629 "compile_target_code.m"
          }
#line 1624 "compile_target_code.m"
      }
#line 1525 "compile_target_code.m"
  }
#line 1517 "compile_target_code.m"
}

#line 1426 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_10,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MustCompile_11,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_12,
#line 1426 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_13,
#line 1426 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_14)
#line 1426 "compile_target_code.m"
{
#line 1431 "compile_target_code.m"
  {
#line 1431 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_16;
#line 1431 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDir_17;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__StdInitFileNames_21;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__StdTraceInitFileNames_22;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_23;
#line 1431 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInit_24;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_25;
#line 1431 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__PIC_26;
#line 1431 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ObjExt_27;
#line 1431 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InitObjFileName_28;
#line 1431 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_61_61;

#line 1432 "compile_target_code.m"
    {
#line 1432 "compile_target_code.m"
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 548, &backend_libs__compile_target_code__MaybeStdLibDir_16);
    }
#line 1434 "compile_target_code.m"
    {
#line 1434 "compile_target_code.m"
      libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__GradeDir_17);
    }
#line 1449 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeStdLibDir_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "compile_target_code.m"
      {
#line 1451 "compile_target_code.m"
        backend_libs__compile_target_code__StdInitFileNames_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "compile_target_code.m"
        backend_libs__compile_target_code__StdTraceInitFileNames_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "compile_target_code.m"
        backend_libs__compile_target_code__SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "compile_target_code.m"
      }
#line 1449 "compile_target_code.m"
    else
#line 1436 "compile_target_code.m"
      {
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StdLibDir_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_16, (MR_Integer) 0)));
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_41_41;
#line 1436 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_43_43;
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_44_44;
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_47_47;
#line 1436 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_49_49;
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_50_50;
#line 1436 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_53_53;

#line 1439 "compile_target_code.m"
        {
#line 1439 "compile_target_code.m"
          backend_libs__compile_target_code__V_41_41 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_rt.init");
        }
#line 1440 "compile_target_code.m"
        {
#line 1440 "compile_target_code.m"
          backend_libs__compile_target_code__V_44_44 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_std.init");
        }
#line 1441 "compile_target_code.m"
        {
#line 1441 "compile_target_code.m"
          backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
#line 1441 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1441 "compile_target_code.m"
        }
#line 1439 "compile_target_code.m"
        {
#line 1439 "compile_target_code.m"
          backend_libs__compile_target_code__StdInitFileNames_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_21, 0) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
#line 1439 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
#line 1439 "compile_target_code.m"
        }
#line 1443 "compile_target_code.m"
        {
#line 1443 "compile_target_code.m"
          backend_libs__compile_target_code__V_47_47 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_browser.init");
        }
#line 1444 "compile_target_code.m"
        {
#line 1444 "compile_target_code.m"
          backend_libs__compile_target_code__V_50_50 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_mdbcomp.init");
        }
#line 1445 "compile_target_code.m"
        {
#line 1445 "compile_target_code.m"
          backend_libs__compile_target_code__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 0) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
#line 1445 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "compile_target_code.m"
        }
#line 1443 "compile_target_code.m"
        {
#line 1443 "compile_target_code.m"
          backend_libs__compile_target_code__StdTraceInitFileNames_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdTraceInitFileNames_22, 0) = ((MR_Box) (backend_libs__compile_target_code__V_47_47));
#line 1443 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdTraceInitFileNames_22, 1) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
#line 1443 "compile_target_code.m"
        }
#line 1447 "compile_target_code.m"
        {
#line 1447 "compile_target_code.m"
          backend_libs__compile_target_code__V_53_53 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1437__1_3_f_0(backend_libs__compile_target_code__GradeDir_17, backend_libs__compile_target_code__StdLibDir_18, (MR_String) "mer_ssdb.init");
        }
#line 1448 "compile_target_code.m"
        {
#line 1448 "compile_target_code.m"
          backend_libs__compile_target_code__SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_23, 0) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
#line 1448 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "compile_target_code.m"
        }
#line 1436 "compile_target_code.m"
      }
#line 1456 "compile_target_code.m"
    {
#line 1456 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 578, &backend_libs__compile_target_code__MkInit_24);
    }
#line 1457 "compile_target_code.m"
    {
#line 1457 "compile_target_code.m"
      backend_libs__compile_target_code__make_init_target_file_13_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__MkInit_24, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__ModuleNames_13, (MR_String) ".c", backend_libs__compile_target_code__StdInitFileNames_21, backend_libs__compile_target_code__StdTraceInitFileNames_22, backend_libs__compile_target_code__SourceDebugInitFileNames_23, (MR_String) "", &backend_libs__compile_target_code__MaybeInitTargetFile_25);
    }
#line 1461 "compile_target_code.m"
    {
#line 1461 "compile_target_code.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 0, &backend_libs__compile_target_code__PIC_26);
    }
#line 3281 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PIC_26 == (MR_Integer) 1))
#line 3285 "compile_target_code.m"
      {
#line 3286 "compile_target_code.m"
        {
#line 3286 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 506, &backend_libs__compile_target_code__ObjExt_27);
        }
#line 3285 "compile_target_code.m"
      }
#line 3281 "compile_target_code.m"
    else
#line 3281 "compile_target_code.m"
      if ((backend_libs__compile_target_code__PIC_26 == (MR_Integer) 2))
#line 3279 "compile_target_code.m"
        {
#line 3280 "compile_target_code.m"
          {
#line 3280 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 504, &backend_libs__compile_target_code__ObjExt_27);
          }
#line 3279 "compile_target_code.m"
        }
#line 3281 "compile_target_code.m"
      else
#line 3282 "compile_target_code.m"
        {
#line 3283 "compile_target_code.m"
          {
#line 3283 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 505, &backend_libs__compile_target_code__ObjExt_27);
          }
#line 3282 "compile_target_code.m"
        }
#line 1464 "compile_target_code.m"
    {
#line 1464 "compile_target_code.m"
      backend_libs__compile_target_code__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "_init", backend_libs__compile_target_code__ObjExt_27);
    }
#line 1464 "compile_target_code.m"
    {
#line 1464 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_12, backend_libs__compile_target_code__V_61_61, (MR_Integer) 0, &backend_libs__compile_target_code__InitObjFileName_28);
    }
#line 1471 "compile_target_code.m"
    {
#line 1471 "compile_target_code.m"
      backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_10, backend_libs__compile_target_code__PIC_26, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__MaybeInitTargetFile_25, backend_libs__compile_target_code__MustCompile_11, backend_libs__compile_target_code__InitObjFileName_28, backend_libs__compile_target_code__Result_14);
#line 1471 "compile_target_code.m"
      return;
    }
#line 1431 "compile_target_code.m"
  }
#line 1426 "compile_target_code.m"
}

#line 1318 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__InitFileStream_11,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Verbosity_12,
#line 1318 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_13,
#line 1318 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Args_14,
#line 1318 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__FileNames_15,
#line 1318 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MkInitOK_16)
#line 1318 "compile_target_code.m"
{
#line 1323 "compile_target_code.m"
  {
#line 1323 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1323 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TargetFileNames_18;
#line 1323 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TmpFile_19;
#line 1323 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__OpenResult_20;

#line 1325 "compile_target_code.m"
    {
#line 1325 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__FileNames_15, (MR_String) "", (MR_String) "\n", (MR_String) "", &backend_libs__compile_target_code__TargetFileNames_18);
    }
#line 1327 "compile_target_code.m"
    {
#line 1327 "compile_target_code.m"
      mercury__io__make_temp_3_p_0(&backend_libs__compile_target_code__TmpFile_19);
    }
#line 1328 "compile_target_code.m"
    {
#line 1328 "compile_target_code.m"
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__TmpFile_19, &backend_libs__compile_target_code__OpenResult_20);
    }
#line 1346 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__OpenResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 1348 "compile_target_code.m"
      *backend_libs__compile_target_code__MkInitOK_16 = (MR_Integer) 0;
#line 1346 "compile_target_code.m"
    else
#line 1330 "compile_target_code.m"
      {
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TmpStream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__OpenResult_20, (MR_Integer) 0)));
#line 1330 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__MkInitCmd_22;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__MkInitOK0_23;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RemoveResult_24;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_36_36;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_37_37;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_39_39;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_40_40;
#line 1330 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_42_42;

#line 1331 "compile_target_code.m"
        {
#line 1331 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__TmpStream_21, backend_libs__compile_target_code__TargetFileNames_18);
        }
#line 1332 "compile_target_code.m"
        {
#line 1332 "compile_target_code.m"
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__TmpStream_21);
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) (backend_libs__compile_target_code__TmpFile_19));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "compile_target_code.m"
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) " -f "));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
#line 1334 "compile_target_code.m"
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_39_39, 0) = ((MR_Box) (backend_libs__compile_target_code__Args_14));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_39_39, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
#line 1334 "compile_target_code.m"
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 0) = ((MR_Box) ((MR_String) " "));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 1) = ((MR_Box) (backend_libs__compile_target_code__V_39_39));
#line 1334 "compile_target_code.m"
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) (backend_libs__compile_target_code__MkInit_13));
#line 1334 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_37_37));
#line 1334 "compile_target_code.m"
        }
#line 1334 "compile_target_code.m"
        {
#line 1334 "compile_target_code.m"
          backend_libs__compile_target_code__MkInitCmd_22 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_36_36);
        }
#line 1335 "compile_target_code.m"
        {
#line 1335 "compile_target_code.m"
          parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_11, backend_libs__compile_target_code__Verbosity_12, backend_libs__compile_target_code__MkInitCmd_22, &backend_libs__compile_target_code__MkInitOK0_23);
        }
#line 1338 "compile_target_code.m"
        {
#line 1338 "compile_target_code.m"
          mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__TmpFile_19, &backend_libs__compile_target_code__RemoveResult_24);
        }
#line 1342 "compile_target_code.m"
        if ((backend_libs__compile_target_code__RemoveResult_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "compile_target_code.m"
          *backend_libs__compile_target_code__MkInitOK_16 = backend_libs__compile_target_code__MkInitOK0_23;
#line 1342 "compile_target_code.m"
        else
#line 1344 "compile_target_code.m"
          *backend_libs__compile_target_code__MkInitOK_16 = (MR_Integer) 0;
#line 1330 "compile_target_code.m"
      }
#line 1323 "compile_target_code.m"
  }
#line 1318 "compile_target_code.m"
}

#line 1311 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 1311 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Ext_9,
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MkDir_10,
#line 1311 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_11,
#line 1311 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__FileName_12)
#line 1311 "compile_target_code.m"
{
#line 1316 "compile_target_code.m"
  {
#line 1316 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 1316 "compile_target_code.m"
    {
#line 1316 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_9, backend_libs__compile_target_code__MkDir_10, backend_libs__compile_target_code__FileName_12);
#line 1316 "compile_target_code.m"
      return;
    }
#line 1316 "compile_target_code.m"
  }
#line 1311 "compile_target_code.m"
}

#line 1237 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1237 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 1237 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 1237 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
#line 1237 "compile_target_code.m"
{
#line 1237 "compile_target_code.m"
  {
#line 1237 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 1237 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_FileName_12;

#line 1237 "compile_target_code.m"
    {
#line 1237 "compile_target_code.m"
      backend_libs__compile_target_code__module_name_to_file_name_ext_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_FileName_12);
    }
#line 1237 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_FileName_12));
#line 1237 "compile_target_code.m"
  }
#line 1237 "compile_target_code.m"
}

#line 1225 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_10,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_11,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_12,
#line 1225 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__AllModules_13,
#line 1225 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__TargetExt_14,
#line 1225 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__MkInit_15,
#line 1225 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_16)
#line 1225 "compile_target_code.m"
{
#line 1230 "compile_target_code.m"
  {
#line 1230 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1230 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TmpInitFileName_18;
#line 1230 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InitFileRes_19;

#line 1231 "compile_target_code.m"
    {
#line 1231 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init.tmp", (MR_Integer) 0, &backend_libs__compile_target_code__TmpInitFileName_18);
    }
#line 1233 "compile_target_code.m"
    {
#line 1233 "compile_target_code.m"
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__TmpInitFileName_18, &backend_libs__compile_target_code__InitFileRes_19);
    }
#line 1298 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__InitFileRes_19)) == (MR_mktag((MR_Integer) 1))))
#line 1299 "compile_target_code.m"
      {
#line 1299 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Error_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitFileRes_19, (MR_Integer) 0)));
#line 1299 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__ProgName_38;
#line 1299 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_54_54;

#line 1300 "compile_target_code.m"
        {
#line 1300 "compile_target_code.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &backend_libs__compile_target_code__ProgName_38);
        }
#line 1301 "compile_target_code.m"
        {
#line 1301 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__ProgName_38);
        }
#line 1302 "compile_target_code.m"
        {
#line 1302 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, (MR_String) ": can\'t open \140");
        }
#line 1303 "compile_target_code.m"
        {
#line 1303 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__TmpInitFileName_18);
        }
#line 1304 "compile_target_code.m"
        {
#line 1304 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, (MR_String) "\' for output:\n");
        }
#line 1305 "compile_target_code.m"
        {
#line 1305 "compile_target_code.m"
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_11);
        }
#line 1306 "compile_target_code.m"
        {
#line 1306 "compile_target_code.m"
          backend_libs__compile_target_code__V_54_54 = mercury__io__error_message_1_f_0(backend_libs__compile_target_code__Error_37);
        }
#line 1306 "compile_target_code.m"
        {
#line 1306 "compile_target_code.m"
          mercury__io__write_string_4_p_0(backend_libs__compile_target_code__ErrorStream_11, backend_libs__compile_target_code__V_54_54);
        }
#line 1307 "compile_target_code.m"
        {
#line 1307 "compile_target_code.m"
          mercury__io__nl_3_p_0(backend_libs__compile_target_code__ErrorStream_11);
        }
#line 1308 "compile_target_code.m"
        *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 1299 "compile_target_code.m"
      }
#line 1298 "compile_target_code.m"
    else
#line 1235 "compile_target_code.m"
      {
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__InitFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__InitFileRes_19, (MR_Integer) 0)));
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__AllTargetFilesList_21;
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__MkInitOK_22;
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Succeeded0_26;
#line 1235 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__InitFileName_27;
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Succeeded1_28;
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__Succeeded2_29;
#line 1235 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_57_57;
#line 1236 "compile_target_code.m"
        MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_58_58;

#line 1237 "compile_target_code.m"
        {
#line 1237 "compile_target_code.m"
          backend_libs__compile_target_code__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0]));
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 1) = ((MR_Box) (backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1));
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_10));
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 4) = ((MR_Box) (backend_libs__compile_target_code__TargetExt_14));
#line 1237 "compile_target_code.m"
          MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_57_57, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1237 "compile_target_code.m"
        }
#line 1236 "compile_target_code.m"
        {
#line 1236 "compile_target_code.m"
          mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_57_57, backend_libs__compile_target_code__AllModules_13, &backend_libs__compile_target_code__AllTargetFilesList_21, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_58_58);
        }
#line 1241 "compile_target_code.m"
        {
#line 1241 "compile_target_code.m"
          backend_libs__compile_target_code__invoke_mkinit_9_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_20, (MR_Integer) 1, backend_libs__compile_target_code__MkInit_15, (MR_String) " -k ", backend_libs__compile_target_code__AllTargetFilesList_21, &backend_libs__compile_target_code__MkInitOK_22);
        }
#line 1258 "compile_target_code.m"
        if ((backend_libs__compile_target_code__MkInitOK_22 == (MR_Integer) 0))
#line 1260 "compile_target_code.m"
          backend_libs__compile_target_code__Succeeded0_26 = (MR_Integer) 0;
#line 1258 "compile_target_code.m"
        else
#line 1245 "compile_target_code.m"
          {
#line 1245 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__MaybeInitFileCommand_23;

#line 1246 "compile_target_code.m"
            {
#line 1246 "compile_target_code.m"
              libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 623, &backend_libs__compile_target_code__MaybeInitFileCommand_23);
            }
#line 1254 "compile_target_code.m"
            if ((backend_libs__compile_target_code__MaybeInitFileCommand_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1256 "compile_target_code.m"
              backend_libs__compile_target_code__Succeeded0_26 = (MR_Integer) 1;
#line 1254 "compile_target_code.m"
            else
#line 1249 "compile_target_code.m"
              {
#line 1249 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__InitFileCommand_24 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeInitFileCommand_23, (MR_Integer) 0)));
#line 1249 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__CommandString_25;

#line 1250 "compile_target_code.m"
                {
#line 1250 "compile_target_code.m"
                  backend_libs__compile_target_code__make_all_module_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileCommand_24, backend_libs__compile_target_code__MainModuleName_12, backend_libs__compile_target_code__AllModules_13, &backend_libs__compile_target_code__CommandString_25);
                }
#line 1252 "compile_target_code.m"
                {
#line 1252 "compile_target_code.m"
                  parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileStream_20, (MR_Integer) 1, backend_libs__compile_target_code__CommandString_25, &backend_libs__compile_target_code__Succeeded0_26);
                }
#line 1249 "compile_target_code.m"
              }
#line 1245 "compile_target_code.m"
          }
#line 1263 "compile_target_code.m"
        {
#line 1263 "compile_target_code.m"
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__InitFileStream_20);
        }
#line 1264 "compile_target_code.m"
        {
#line 1264 "compile_target_code.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init", (MR_Integer) 0, &backend_libs__compile_target_code__InitFileName_27);
        }
#line 1266 "compile_target_code.m"
        {
#line 1266 "compile_target_code.m"
          parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileName_27, &backend_libs__compile_target_code__Succeeded1_28);
        }
#line 1268 "compile_target_code.m"
        {
#line 1268 "compile_target_code.m"
          backend_libs__compile_target_code__Succeeded2_29 = mercury__bool__and_2_f_0(backend_libs__compile_target_code__Succeeded0_26, backend_libs__compile_target_code__Succeeded1_28);
        }
#line 1294 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Succeeded2_29 == (MR_Integer) 0))
#line 1296 "compile_target_code.m"
          *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 0;
#line 1294 "compile_target_code.m"
        else
#line 1270 "compile_target_code.m"
          {
#line 1270 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__UseGradeSubDirs_30;

#line 1273 "compile_target_code.m"
            {
#line 1273 "compile_target_code.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_10, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubDirs_30);
            }
#line 1290 "compile_target_code.m"
            if ((backend_libs__compile_target_code__UseGradeSubDirs_30 == (MR_Integer) 0))
#line 1292 "compile_target_code.m"
              *backend_libs__compile_target_code__Succeeded_16 = (MR_Integer) 1;
#line 1290 "compile_target_code.m"
            else
#line 1276 "compile_target_code.m"
              {
#line 1276 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__OutputStream_31;
#line 1276 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__NoSubdirGlobals0_32;
#line 1276 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__NoSubdirGlobals_33;
#line 1276 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__UserDirFileName_34;
#line 1276 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_75_75;
#line 1286 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_35_35;
#line 1289 "compile_target_code.m"
                MR_Word backend_libs__compile_target_code__V_36_36;

#line 1277 "compile_target_code.m"
                {
#line 1277 "compile_target_code.m"
                  mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ErrorStream_11, &backend_libs__compile_target_code__OutputStream_31);
                }
#line 1278 "compile_target_code.m"
                backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_6[0]);
#line 1278 "compile_target_code.m"
                {
#line 1278 "compile_target_code.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 640, backend_libs__compile_target_code__V_75_75, backend_libs__compile_target_code__Globals_10, &backend_libs__compile_target_code__NoSubdirGlobals0_32);
                }
#line 1280 "compile_target_code.m"
                {
#line 1280 "compile_target_code.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 641, backend_libs__compile_target_code__V_75_75, backend_libs__compile_target_code__NoSubdirGlobals0_32, &backend_libs__compile_target_code__NoSubdirGlobals_33);
                }
#line 1282 "compile_target_code.m"
                {
#line 1282 "compile_target_code.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__NoSubdirGlobals_33, backend_libs__compile_target_code__MainModuleName_12, (MR_String) ".init", (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_34);
                }
#line 1286 "compile_target_code.m"
                {
#line 1286 "compile_target_code.m"
                  mercury__io__remove_file_4_p_0(backend_libs__compile_target_code__UserDirFileName_34, &backend_libs__compile_target_code__V_35_35);
                }
#line 1287 "compile_target_code.m"
                {
#line 1287 "compile_target_code.m"
                  parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(backend_libs__compile_target_code__Globals_10, backend_libs__compile_target_code__InitFileName_27, backend_libs__compile_target_code__UserDirFileName_34, backend_libs__compile_target_code__Succeeded_16);
                }
#line 1289 "compile_target_code.m"
                {
#line 1289 "compile_target_code.m"
                  mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__OutputStream_31, &backend_libs__compile_target_code__V_36_36);
                }
#line 1276 "compile_target_code.m"
              }
#line 1270 "compile_target_code.m"
          }
#line 1235 "compile_target_code.m"
      }
#line 1230 "compile_target_code.m"
  }
#line 1225 "compile_target_code.m"
}

#line 1136 "compile_target_code.m"
static MR_String MR_CALL 
backend_libs__compile_target_code__java_classpath_separator_0_f_0(void)
#line 1136 "compile_target_code.m"
{
#line 1145 "compile_target_code.m"
  {
#line 1145 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1145 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__PathSeparator_2;

#line 1140 "compile_target_code.m"
    {
#line 1140 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = mercury__dir__use_windows_paths_0_p_0();
    }
#line 1141 "compile_target_code.m"
    if (!(backend_libs__compile_target_code__succeeded))
#line 1141 "compile_target_code.m"
      {
#line 1141 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = mercury__io__have_cygwin_0_p_0();
      }
#line 1145 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1144 "compile_target_code.m"
      backend_libs__compile_target_code__PathSeparator_2 = (MR_String) ";";
#line 1145 "compile_target_code.m"
    else
#line 1146 "compile_target_code.m"
      backend_libs__compile_target_code__PathSeparator_2 = (MR_String) ":";
#line 1145 "compile_target_code.m"
    return backend_libs__compile_target_code__PathSeparator_2;
#line 1145 "compile_target_code.m"
  }
#line 1136 "compile_target_code.m"
}

#line 998 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(
#line 998 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 998 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Flags_4)
#line 998 "compile_target_code.m"
{
#line 1000 "compile_target_code.m"
  {
#line 1000 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1000 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_CompilerType_5;
#line 1000 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__FlagsList_9;

#line 1001 "compile_target_code.m"
    {
#line 1001 "compile_target_code.m"
      libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_3, &backend_libs__compile_target_code__C_CompilerType_5);
    }
#line 1005 "compile_target_code.m"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_5)) == (MR_mktag((MR_Integer) 3))))
#line 1009 "compile_target_code.m"
      {
#line 1010 "compile_target_code.m"
        {
#line 1010 "compile_target_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 493, &backend_libs__compile_target_code__FlagsList_9);
        }
#line 1009 "compile_target_code.m"
      }
#line 1005 "compile_target_code.m"
    else
#line 1005 "compile_target_code.m"
      if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_5)) == (MR_mktag((MR_Integer) 2))))
#line 1006 "compile_target_code.m"
        {
#line 1007 "compile_target_code.m"
          {
#line 1007 "compile_target_code.m"
            libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 491, &backend_libs__compile_target_code__FlagsList_9);
          }
#line 1006 "compile_target_code.m"
        }
#line 1005 "compile_target_code.m"
      else
#line 1005 "compile_target_code.m"
        if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_5)) == (MR_mktag((MR_Integer) 1))))
#line 1003 "compile_target_code.m"
          {
#line 1004 "compile_target_code.m"
            {
#line 1004 "compile_target_code.m"
              libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 489, &backend_libs__compile_target_code__FlagsList_9);
            }
#line 1003 "compile_target_code.m"
          }
#line 1005 "compile_target_code.m"
        else
#line 1015 "compile_target_code.m"
          backend_libs__compile_target_code__FlagsList_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "compile_target_code.m"
    {
#line 1017 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__FlagsList_9, (MR_String) "", (MR_String) "", (MR_String) " ", backend_libs__compile_target_code__Flags_4);
#line 1017 "compile_target_code.m"
      return;
    }
#line 1000 "compile_target_code.m"
  }
#line 998 "compile_target_code.m"
}

#line 993 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0_1(
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 993 "compile_target_code.m"
{
#line 993 "compile_target_code.m"
  {
#line 993 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 993 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 993 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__2_12;

#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__993__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 993 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_12));
#line 993 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 993 "compile_target_code.m"
  }
#line 993 "compile_target_code.m"
}

#line 988 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(
#line 988 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 988 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__InclOpt_4)
#line 988 "compile_target_code.m"
{
#line 990 "compile_target_code.m"
  {
#line 990 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 990 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_20_20;
#line 990 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_Incl_Dirs_5;
#line 990 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_8_8;
#line 990 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_9_9;

#line 991 "compile_target_code.m"
    {
#line 991 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 485, &backend_libs__compile_target_code__C_Incl_Dirs_5);
    }
#line 12010 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__V_9_9 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_20, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_4[7], backend_libs__compile_target_code__C_Incl_Dirs_5);
    }
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__V_8_8 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_20, backend_libs__compile_target_code__V_9_9);
    }
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      *backend_libs__compile_target_code__InclOpt_4 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_8_8);
    }
#line 990 "compile_target_code.m"
  }
#line 988 "compile_target_code.m"
}

#line 634 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_grade_defines_3_p_0(
#line 634 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 634 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_5,
#line 634 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__GradeDefines_6)
#line 634 "compile_target_code.m"
{
#line 636 "compile_target_code.m"
  {
#line 636 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HighLevelCode_7;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HighLevelCodeOpt_8;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCC_NestedFunctions_9;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NestedFunctionsOpt_10;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HighLevelData_11;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HighLevelDataOpt_12;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCC_Regs_13;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RegOpt_14;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCC_Gotos_15;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GotoOpt_16;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ASM_Labels_17;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__AsmOpt_18;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Parallel_19;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ParallelOpt_20;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Threadscope_21;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ThreadscopeOpt_22;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GC_Method_23;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GC_Opt_25;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ProfileCalls_26;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ProfileCallsOpt_27;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ProfileTime_28;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ProfileTimeOpt_29;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ProfileMemory_30;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ProfileMemoryOpt_31;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ProfileDeep_32;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ProfileDeepOpt_33;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RecordTermSizesAsWords_34;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__RecordTermSizesAsCells_35;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RecordTermSizesOpt_36;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__PIC_Reg_Opt_38;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Tags_Method_39;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TagsOpt_40;
#line 636 "compile_target_code.m"
    MR_Integer backend_libs__compile_target_code__NumTagBits_41;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NumTagBitsString_42;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NumTagBitsOpt_43;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__DeclDebug_44;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DeclDebugOpt_45;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebug_46;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SourceDebugOpt_47;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ExecTrace_48;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExecTraceOpt_49;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Extend_50;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__StackSegments_51;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ExtendOpt_52;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LL_Debug_53;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LL_DebugOpt_54;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseTrail_55;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__UseTrailOpt_56;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TrailSegOpt_58;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MinimalModelStackCopy_59;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MinimalModelOwnStacks_60;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MinimalModelBaseOpt_61;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MinimalModelDebug_62;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MinimalModelOpt_63;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__PregeneratedDist_64;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__PregeneratedDistOpt_65;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SinglePrecFloat_66;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SinglePrecFloatOpt_67;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseRegions_68;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__UseRegionsOpt_73;
#line 636 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_97_97;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_124_124;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_125_125;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_126_126;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_127_127;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_128_128;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_129_129;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_130_130;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_131_131;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_132_132;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_133_133;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_134_134;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_135_135;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_136_136;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_137_137;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_138_138;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_139_139;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_140_140;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_141_141;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_142_142;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_143_143;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_144_144;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_145_145;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_146_146;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_147_147;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_148_148;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_149_149;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_150_150;
#line 636 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_151_151;

#line 637 "compile_target_code.m"
    {
#line 637 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 248, &backend_libs__compile_target_code__HighLevelCode_7);
    }
#line 641 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HighLevelCode_7 == (MR_Integer) 0))
#line 643 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelCodeOpt_8 = (MR_String) "";
#line 641 "compile_target_code.m"
    else
#line 640 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelCodeOpt_8 = (MR_String) "-DMR_HIGHLEVEL_CODE ";
#line 645 "compile_target_code.m"
    {
#line 645 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 250, &backend_libs__compile_target_code__GCC_NestedFunctions_9);
    }
#line 650 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GCC_NestedFunctions_9 == (MR_Integer) 0))
#line 652 "compile_target_code.m"
      backend_libs__compile_target_code__NestedFunctionsOpt_10 = (MR_String) "";
#line 650 "compile_target_code.m"
    else
#line 649 "compile_target_code.m"
      backend_libs__compile_target_code__NestedFunctionsOpt_10 = (MR_String) "-DMR_USE_GCC_NESTED_FUNCTIONS ";
#line 654 "compile_target_code.m"
    {
#line 654 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 249, &backend_libs__compile_target_code__HighLevelData_11);
    }
#line 658 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HighLevelData_11 == (MR_Integer) 0))
#line 660 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelDataOpt_12 = (MR_String) "";
#line 658 "compile_target_code.m"
    else
#line 657 "compile_target_code.m"
      backend_libs__compile_target_code__HighLevelDataOpt_12 = (MR_String) "-DMR_HIGHLEVEL_DATA ";
#line 662 "compile_target_code.m"
    {
#line 662 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 244, &backend_libs__compile_target_code__GCC_Regs_13);
    }
#line 666 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GCC_Regs_13 == (MR_Integer) 0))
#line 668 "compile_target_code.m"
      backend_libs__compile_target_code__RegOpt_14 = (MR_String) "";
#line 666 "compile_target_code.m"
    else
#line 665 "compile_target_code.m"
      backend_libs__compile_target_code__RegOpt_14 = (MR_String) "-DMR_USE_GCC_GLOBAL_REGISTERS ";
#line 670 "compile_target_code.m"
    {
#line 670 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 243, &backend_libs__compile_target_code__GCC_Gotos_15);
    }
#line 674 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GCC_Gotos_15 == (MR_Integer) 0))
#line 676 "compile_target_code.m"
      backend_libs__compile_target_code__GotoOpt_16 = (MR_String) "";
#line 674 "compile_target_code.m"
    else
#line 673 "compile_target_code.m"
      backend_libs__compile_target_code__GotoOpt_16 = (MR_String) "-DMR_USE_GCC_NONLOCAL_GOTOS ";
#line 678 "compile_target_code.m"
    {
#line 678 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 245, &backend_libs__compile_target_code__ASM_Labels_17);
    }
#line 682 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ASM_Labels_17 == (MR_Integer) 0))
#line 684 "compile_target_code.m"
      backend_libs__compile_target_code__AsmOpt_18 = (MR_String) "";
#line 682 "compile_target_code.m"
    else
#line 681 "compile_target_code.m"
      backend_libs__compile_target_code__AsmOpt_18 = (MR_String) "-DMR_USE_ASM_LABELS ";
#line 686 "compile_target_code.m"
    {
#line 686 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 210, &backend_libs__compile_target_code__Parallel_19);
    }
#line 690 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Parallel_19 == (MR_Integer) 0))
#line 692 "compile_target_code.m"
      backend_libs__compile_target_code__ParallelOpt_20 = (MR_String) "";
#line 690 "compile_target_code.m"
    else
#line 689 "compile_target_code.m"
      backend_libs__compile_target_code__ParallelOpt_20 = (MR_String) "-DMR_THREAD_SAFE ";
#line 694 "compile_target_code.m"
    {
#line 694 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 211, &backend_libs__compile_target_code__Threadscope_21);
    }
#line 698 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Threadscope_21 == (MR_Integer) 0))
#line 700 "compile_target_code.m"
      backend_libs__compile_target_code__ThreadscopeOpt_22 = (MR_String) "";
#line 698 "compile_target_code.m"
    else
#line 697 "compile_target_code.m"
      backend_libs__compile_target_code__ThreadscopeOpt_22 = (MR_String) "-DMR_THREADSCOPE ";
#line 702 "compile_target_code.m"
    {
#line 702 "compile_target_code.m"
      libs__globals__get_gc_method_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__GC_Method_23);
    }
#line 707 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GC_Method_23 == (MR_Integer) 5))
#line 722 "compile_target_code.m"
      backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "-DMR_NATIVE_GC ";
#line 707 "compile_target_code.m"
    else
#line 707 "compile_target_code.m"
      if ((backend_libs__compile_target_code__GC_Method_23 == (MR_Integer) 0))
#line 706 "compile_target_code.m"
        backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "";
#line 707 "compile_target_code.m"
      else
#line 707 "compile_target_code.m"
        if ((backend_libs__compile_target_code__GC_Method_23 == (MR_Integer) 2))
#line 712 "compile_target_code.m"
          backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ";
#line 707 "compile_target_code.m"
        else
#line 707 "compile_target_code.m"
          if ((backend_libs__compile_target_code__GC_Method_23 == (MR_Integer) 3))
#line 715 "compile_target_code.m"
            backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC -DMR_BOEHM_GC_DEBUG -DGC_DEBUG -DKEEP_BACKPTRS ";
#line 707 "compile_target_code.m"
          else
#line 707 "compile_target_code.m"
            if ((backend_libs__compile_target_code__GC_Method_23 == (MR_Integer) 4))
#line 719 "compile_target_code.m"
              backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_HGC ";
#line 707 "compile_target_code.m"
            else
#line 709 "compile_target_code.m"
              backend_libs__compile_target_code__GC_Opt_25 = (MR_String) "";
#line 724 "compile_target_code.m"
    {
#line 724 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 186, &backend_libs__compile_target_code__ProfileCalls_26);
    }
#line 728 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ProfileCalls_26 == (MR_Integer) 0))
#line 730 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileCallsOpt_27 = (MR_String) "";
#line 728 "compile_target_code.m"
    else
#line 727 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileCallsOpt_27 = (MR_String) "-DMR_MPROF_PROFILE_CALLS ";
#line 732 "compile_target_code.m"
    {
#line 732 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 187, &backend_libs__compile_target_code__ProfileTime_28);
    }
#line 736 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ProfileTime_28 == (MR_Integer) 0))
#line 738 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileTimeOpt_29 = (MR_String) "";
#line 736 "compile_target_code.m"
    else
#line 735 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileTimeOpt_29 = (MR_String) "-DMR_MPROF_PROFILE_TIME ";
#line 740 "compile_target_code.m"
    {
#line 740 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 188, &backend_libs__compile_target_code__ProfileMemory_30);
    }
#line 744 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ProfileMemory_30 == (MR_Integer) 0))
#line 746 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileMemoryOpt_31 = (MR_String) "";
#line 744 "compile_target_code.m"
    else
#line 743 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileMemoryOpt_31 = (MR_String) "-DMR_MPROF_PROFILE_MEMORY ";
#line 748 "compile_target_code.m"
    {
#line 748 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 189, &backend_libs__compile_target_code__ProfileDeep_32);
    }
#line 752 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ProfileDeep_32 == (MR_Integer) 0))
#line 754 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileDeepOpt_33 = (MR_String) "";
#line 752 "compile_target_code.m"
    else
#line 751 "compile_target_code.m"
      backend_libs__compile_target_code__ProfileDeepOpt_33 = (MR_String) "-DMR_DEEP_PROFILING ";
#line 756 "compile_target_code.m"
    {
#line 756 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 206, &backend_libs__compile_target_code__RecordTermSizesAsWords_34);
    }
#line 758 "compile_target_code.m"
    {
#line 758 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 207, &backend_libs__compile_target_code__RecordTermSizesAsCells_35);
    }
#line 765 "compile_target_code.m"
    if ((backend_libs__compile_target_code__RecordTermSizesAsWords_34 == (MR_Integer) 0))
#line 765 "compile_target_code.m"
      if ((backend_libs__compile_target_code__RecordTermSizesAsCells_35 == (MR_Integer) 0))
#line 777 "compile_target_code.m"
        backend_libs__compile_target_code__RecordTermSizesOpt_36 = (MR_String) "";
#line 765 "compile_target_code.m"
      else
#line 772 "compile_target_code.m"
        backend_libs__compile_target_code__RecordTermSizesOpt_36 = (MR_String) "-DMR_RECORD_TERM_SIZES -DMR_RECORD_TERM_SIZES_AS_CELLS ";
#line 765 "compile_target_code.m"
    else
#line 765 "compile_target_code.m"
      if ((backend_libs__compile_target_code__RecordTermSizesAsCells_35 == (MR_Integer) 0))
#line 768 "compile_target_code.m"
        backend_libs__compile_target_code__RecordTermSizesOpt_36 = (MR_String) "-DMR_RECORD_TERM_SIZES ";
#line 765 "compile_target_code.m"
      else
#line 761 "compile_target_code.m"
        {
#line 764 "compile_target_code.m"
          {
#line 764 "compile_target_code.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/3", (MR_String) "inconsistent record term size options");
#line 764 "compile_target_code.m"
            return;
          }
#line 761 "compile_target_code.m"
        }
#line 12458 "backend_libs.compile_target_code.c"
    if ((backend_libs__compile_target_code__PIC_5 == (MR_Integer) 1))
#line 793 "compile_target_code.m"
      backend_libs__compile_target_code__PIC_Reg_Opt_38 = (MR_String) "-DMR_PIC_REG ";
#line 12462 "backend_libs.compile_target_code.c"
    else
#line 12464 "backend_libs.compile_target_code.c"
      if ((backend_libs__compile_target_code__PIC_5 == (MR_Integer) 2))
#line 12466 "backend_libs.compile_target_code.c"
        {
#line 12468 "backend_libs.compile_target_code.c"
          MR_Word backend_libs__compile_target_code__PIC_Reg_154;

#line 787 "compile_target_code.m"
          {
#line 787 "compile_target_code.m"
            libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 246, &backend_libs__compile_target_code__PIC_Reg_154);
          }
#line 794 "compile_target_code.m"
          if ((backend_libs__compile_target_code__PIC_Reg_154 == (MR_Integer) 0))
#line 796 "compile_target_code.m"
            backend_libs__compile_target_code__PIC_Reg_Opt_38 = (MR_String) "";
#line 794 "compile_target_code.m"
          else
#line 793 "compile_target_code.m"
            backend_libs__compile_target_code__PIC_Reg_Opt_38 = (MR_String) "-DMR_PIC_REG ";
#line 12484 "backend_libs.compile_target_code.c"
        }
#line 12486 "backend_libs.compile_target_code.c"
      else
#line 793 "compile_target_code.m"
        backend_libs__compile_target_code__PIC_Reg_Opt_38 = (MR_String) "-DMR_PIC_REG ";
#line 799 "compile_target_code.m"
    {
#line 799 "compile_target_code.m"
      libs__globals__get_tags_method_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__Tags_Method_39);
    }
#line 803 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Tags_Method_39 == (MR_Integer) 2))
#line 802 "compile_target_code.m"
      backend_libs__compile_target_code__TagsOpt_40 = (MR_String) "-DMR_HIGHTAGS ";
#line 803 "compile_target_code.m"
    else
#line 807 "compile_target_code.m"
      backend_libs__compile_target_code__TagsOpt_40 = (MR_String) "";
#line 809 "compile_target_code.m"
    {
#line 809 "compile_target_code.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 231, &backend_libs__compile_target_code__NumTagBits_41);
    }
#line 810 "compile_target_code.m"
    {
#line 810 "compile_target_code.m"
      mercury__string__int_to_string_2_p_0(backend_libs__compile_target_code__NumTagBits_41, &backend_libs__compile_target_code__NumTagBitsString_42);
    }
#line 811 "compile_target_code.m"
    {
#line 811 "compile_target_code.m"
      backend_libs__compile_target_code__V_97_97 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__NumTagBitsString_42, (MR_String) " ");
    }
#line 811 "compile_target_code.m"
    {
#line 811 "compile_target_code.m"
      backend_libs__compile_target_code__NumTagBitsOpt_43 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_TAGBITS=", backend_libs__compile_target_code__V_97_97);
    }
#line 812 "compile_target_code.m"
    {
#line 812 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 181, &backend_libs__compile_target_code__DeclDebug_44);
    }
#line 816 "compile_target_code.m"
    if ((backend_libs__compile_target_code__DeclDebug_44 == (MR_Integer) 0))
#line 818 "compile_target_code.m"
      backend_libs__compile_target_code__DeclDebugOpt_45 = (MR_String) "";
#line 816 "compile_target_code.m"
    else
#line 815 "compile_target_code.m"
      backend_libs__compile_target_code__DeclDebugOpt_45 = (MR_String) "-DMR_DECL_DEBUG ";
#line 820 "compile_target_code.m"
    {
#line 820 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 227, &backend_libs__compile_target_code__SourceDebug_46);
    }
#line 824 "compile_target_code.m"
    if ((backend_libs__compile_target_code__SourceDebug_46 == (MR_Integer) 0))
#line 826 "compile_target_code.m"
      backend_libs__compile_target_code__SourceDebugOpt_47 = (MR_String) "";
#line 824 "compile_target_code.m"
    else
#line 823 "compile_target_code.m"
      backend_libs__compile_target_code__SourceDebugOpt_47 = (MR_String) "-DMR_SS_DEBUG ";
#line 828 "compile_target_code.m"
    {
#line 828 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 180, &backend_libs__compile_target_code__ExecTrace_48);
    }
#line 832 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ExecTrace_48 == (MR_Integer) 0))
#line 834 "compile_target_code.m"
      backend_libs__compile_target_code__ExecTraceOpt_49 = (MR_String) "";
#line 832 "compile_target_code.m"
    else
#line 831 "compile_target_code.m"
      backend_libs__compile_target_code__ExecTraceOpt_49 = (MR_String) "-DMR_EXEC_TRACE ";
#line 836 "compile_target_code.m"
    {
#line 836 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 221, &backend_libs__compile_target_code__Extend_50);
    }
#line 837 "compile_target_code.m"
    {
#line 837 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 222, &backend_libs__compile_target_code__StackSegments_51);
    }
#line 842 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Extend_50 == (MR_Integer) 0))
#line 842 "compile_target_code.m"
      if ((backend_libs__compile_target_code__StackSegments_51 == (MR_Integer) 0))
#line 849 "compile_target_code.m"
        backend_libs__compile_target_code__ExtendOpt_52 = (MR_String) "";
#line 842 "compile_target_code.m"
      else
#line 845 "compile_target_code.m"
        backend_libs__compile_target_code__ExtendOpt_52 = (MR_String) "-DMR_STACK_SEGMENTS ";
#line 842 "compile_target_code.m"
    else
#line 842 "compile_target_code.m"
      if ((backend_libs__compile_target_code__StackSegments_51 == (MR_Integer) 0))
#line 841 "compile_target_code.m"
        backend_libs__compile_target_code__ExtendOpt_52 = (MR_String) "-DMR_EXTEND_STACKS_WHEN_NEEDED ";
#line 842 "compile_target_code.m"
      else
#line 851 "compile_target_code.m"
        {
#line 853 "compile_target_code.m"
          MR_Box backend_libs__compile_target_code__conv0_ExtendOpt_52;

#line 853 "compile_target_code.m"
          {
#line 853 "compile_target_code.m"
            backend_libs__compile_target_code__conv0_ExtendOpt_52 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/3", (MR_String) "--extend-stacks-when-needed and --stack-segments");
#line 853 "compile_target_code.m"
            return;
          }
#line 853 "compile_target_code.m"
          backend_libs__compile_target_code__ExtendOpt_52 = ((MR_String) backend_libs__compile_target_code__conv0_ExtendOpt_52);
#line 851 "compile_target_code.m"
        }
#line 856 "compile_target_code.m"
    {
#line 856 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 296, &backend_libs__compile_target_code__LL_Debug_53);
    }
#line 860 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LL_Debug_53 == (MR_Integer) 0))
#line 862 "compile_target_code.m"
      backend_libs__compile_target_code__LL_DebugOpt_54 = (MR_String) "";
#line 860 "compile_target_code.m"
    else
#line 859 "compile_target_code.m"
      backend_libs__compile_target_code__LL_DebugOpt_54 = (MR_String) "-DMR_LL_DEBUG ";
#line 864 "compile_target_code.m"
    {
#line 864 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 212, &backend_libs__compile_target_code__UseTrail_55);
    }
#line 876 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseTrail_55 == (MR_Integer) 0))
#line 877 "compile_target_code.m"
      {
#line 878 "compile_target_code.m"
        backend_libs__compile_target_code__UseTrailOpt_56 = (MR_String) "";
#line 879 "compile_target_code.m"
        backend_libs__compile_target_code__TrailSegOpt_58 = (MR_String) "";
#line 877 "compile_target_code.m"
      }
#line 876 "compile_target_code.m"
    else
#line 866 "compile_target_code.m"
      {
#line 866 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TrailSegments_57;

#line 867 "compile_target_code.m"
        backend_libs__compile_target_code__UseTrailOpt_56 = (MR_String) "-DMR_USE_TRAIL ";
#line 868 "compile_target_code.m"
        {
#line 868 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 213, &backend_libs__compile_target_code__TrailSegments_57);
        }
#line 872 "compile_target_code.m"
        if ((backend_libs__compile_target_code__TrailSegments_57 == (MR_Integer) 0))
#line 874 "compile_target_code.m"
          backend_libs__compile_target_code__TrailSegOpt_58 = (MR_String) "";
#line 872 "compile_target_code.m"
        else
#line 871 "compile_target_code.m"
          backend_libs__compile_target_code__TrailSegOpt_58 = (MR_String) "-DMR_TRAIL_SEGMENTS ";
#line 866 "compile_target_code.m"
      }
#line 881 "compile_target_code.m"
    {
#line 881 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 214, &backend_libs__compile_target_code__MinimalModelStackCopy_59);
    }
#line 883 "compile_target_code.m"
    {
#line 883 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 215, &backend_libs__compile_target_code__MinimalModelOwnStacks_60);
    }
#line 890 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MinimalModelStackCopy_59 == (MR_Integer) 0))
#line 890 "compile_target_code.m"
      if ((backend_libs__compile_target_code__MinimalModelOwnStacks_60 == (MR_Integer) 0))
#line 901 "compile_target_code.m"
        backend_libs__compile_target_code__MinimalModelBaseOpt_61 = (MR_String) "";
#line 890 "compile_target_code.m"
      else
#line 897 "compile_target_code.m"
        backend_libs__compile_target_code__MinimalModelBaseOpt_61 = (MR_String) "-DMR_USE_MINIMAL_MODEL_OWN_STACKS ";
#line 890 "compile_target_code.m"
    else
#line 890 "compile_target_code.m"
      if ((backend_libs__compile_target_code__MinimalModelOwnStacks_60 == (MR_Integer) 0))
#line 893 "compile_target_code.m"
        backend_libs__compile_target_code__MinimalModelBaseOpt_61 = (MR_String) "-DMR_USE_MINIMAL_MODEL_STACK_COPY ";
#line 890 "compile_target_code.m"
      else
#line 886 "compile_target_code.m"
        {
#line 889 "compile_target_code.m"
          {
#line 889 "compile_target_code.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/3", (MR_String) "inconsistent minimal model options");
#line 889 "compile_target_code.m"
            return;
          }
#line 886 "compile_target_code.m"
        }
#line 903 "compile_target_code.m"
    {
#line 903 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 216, &backend_libs__compile_target_code__MinimalModelDebug_62);
    }
#line 914 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MinimalModelDebug_62 == (MR_Integer) 0))
#line 916 "compile_target_code.m"
      backend_libs__compile_target_code__MinimalModelOpt_63 = backend_libs__compile_target_code__MinimalModelBaseOpt_61;
#line 914 "compile_target_code.m"
    else
#line 910 "compile_target_code.m"
      {
#line 907 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MinimalModelBaseOpt_61, (MR_String) "") == 0);
#line 910 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 909 "compile_target_code.m"
          backend_libs__compile_target_code__MinimalModelOpt_63 = backend_libs__compile_target_code__MinimalModelBaseOpt_61;
#line 910 "compile_target_code.m"
        else
#line 911 "compile_target_code.m"
          {
#line 911 "compile_target_code.m"
            {
#line 911 "compile_target_code.m"
              backend_libs__compile_target_code__MinimalModelOpt_63 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__MinimalModelBaseOpt_61, (MR_String) "-DMR_MINIMAL_MODEL_DEBUG ");
            }
#line 911 "compile_target_code.m"
          }
#line 910 "compile_target_code.m"
      }
#line 919 "compile_target_code.m"
    {
#line 919 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 217, &backend_libs__compile_target_code__PregeneratedDist_64);
    }
#line 923 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PregeneratedDist_64 == (MR_Integer) 0))
#line 925 "compile_target_code.m"
      backend_libs__compile_target_code__PregeneratedDistOpt_65 = (MR_String) "";
#line 923 "compile_target_code.m"
    else
#line 922 "compile_target_code.m"
      backend_libs__compile_target_code__PregeneratedDistOpt_65 = (MR_String) "-DMR_PREGENERATED_DIST ";
#line 927 "compile_target_code.m"
    {
#line 927 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 218, &backend_libs__compile_target_code__SinglePrecFloat_66);
    }
#line 931 "compile_target_code.m"
    if ((backend_libs__compile_target_code__SinglePrecFloat_66 == (MR_Integer) 0))
#line 933 "compile_target_code.m"
      backend_libs__compile_target_code__SinglePrecFloatOpt_67 = (MR_String) "";
#line 931 "compile_target_code.m"
    else
#line 930 "compile_target_code.m"
      backend_libs__compile_target_code__SinglePrecFloatOpt_67 = (MR_String) "-DMR_USE_SINGLE_PREC_FLOAT ";
#line 936 "compile_target_code.m"
    {
#line 936 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 223, &backend_libs__compile_target_code__UseRegions_68);
    }
#line 958 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseRegions_68 == (MR_Integer) 0))
#line 960 "compile_target_code.m"
      backend_libs__compile_target_code__UseRegionsOpt_73 = (MR_String) "";
#line 958 "compile_target_code.m"
    else
#line 938 "compile_target_code.m"
      {
#line 938 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__UseRegionsDebug_70;
#line 938 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__UseRegionsOpt1_71;
#line 938 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__UseRegionsProfiling_72;

#line 940 "compile_target_code.m"
        {
#line 940 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 225, &backend_libs__compile_target_code__UseRegionsDebug_70);
        }
#line 945 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UseRegionsDebug_70 == (MR_Integer) 0))
#line 947 "compile_target_code.m"
          backend_libs__compile_target_code__UseRegionsOpt1_71 = (MR_String) "-DMR_USE_REGIONS ";
#line 945 "compile_target_code.m"
        else
#line 944 "compile_target_code.m"
          backend_libs__compile_target_code__UseRegionsOpt1_71 = (MR_String) "-DMR_USE_REGIONS -DMR_RBMM_DEBUG ";
#line 949 "compile_target_code.m"
        {
#line 949 "compile_target_code.m"
          libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 226, &backend_libs__compile_target_code__UseRegionsProfiling_72);
        }
#line 954 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UseRegionsProfiling_72 == (MR_Integer) 0))
#line 956 "compile_target_code.m"
          backend_libs__compile_target_code__UseRegionsOpt_73 = backend_libs__compile_target_code__UseRegionsOpt1_71;
#line 954 "compile_target_code.m"
        else
#line 952 "compile_target_code.m"
          {
#line 953 "compile_target_code.m"
            {
#line 953 "compile_target_code.m"
              backend_libs__compile_target_code__UseRegionsOpt_73 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__UseRegionsOpt1_71, (MR_String) "-DMR_RBMM_PROFILING ");
            }
#line 952 "compile_target_code.m"
          }
#line 938 "compile_target_code.m"
      }
#line 984 "compile_target_code.m"
    {
#line 984 "compile_target_code.m"
      backend_libs__compile_target_code__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 0) = ((MR_Box) (backend_libs__compile_target_code__UseRegionsOpt_73));
#line 984 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "compile_target_code.m"
    }
#line 983 "compile_target_code.m"
    {
#line 983 "compile_target_code.m"
      backend_libs__compile_target_code__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_150_150, 0) = ((MR_Box) (backend_libs__compile_target_code__SinglePrecFloatOpt_67));
#line 983 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_150_150, 1) = ((MR_Box) (backend_libs__compile_target_code__V_151_151));
#line 983 "compile_target_code.m"
    }
#line 982 "compile_target_code.m"
    {
#line 982 "compile_target_code.m"
      backend_libs__compile_target_code__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_149_149, 0) = ((MR_Box) (backend_libs__compile_target_code__PregeneratedDistOpt_65));
#line 982 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_149_149, 1) = ((MR_Box) (backend_libs__compile_target_code__V_150_150));
#line 982 "compile_target_code.m"
    }
#line 981 "compile_target_code.m"
    {
#line 981 "compile_target_code.m"
      backend_libs__compile_target_code__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 0) = ((MR_Box) (backend_libs__compile_target_code__MinimalModelOpt_63));
#line 981 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_148_148, 1) = ((MR_Box) (backend_libs__compile_target_code__V_149_149));
#line 981 "compile_target_code.m"
    }
#line 980 "compile_target_code.m"
    {
#line 980 "compile_target_code.m"
      backend_libs__compile_target_code__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_147_147, 0) = ((MR_Box) (backend_libs__compile_target_code__TrailSegOpt_58));
#line 980 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_147_147, 1) = ((MR_Box) (backend_libs__compile_target_code__V_148_148));
#line 980 "compile_target_code.m"
    }
#line 979 "compile_target_code.m"
    {
#line 979 "compile_target_code.m"
      backend_libs__compile_target_code__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_146_146, 0) = ((MR_Box) (backend_libs__compile_target_code__UseTrailOpt_56));
#line 979 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_146_146, 1) = ((MR_Box) (backend_libs__compile_target_code__V_147_147));
#line 979 "compile_target_code.m"
    }
#line 978 "compile_target_code.m"
    {
#line 978 "compile_target_code.m"
      backend_libs__compile_target_code__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 0) = ((MR_Box) (backend_libs__compile_target_code__ExecTraceOpt_49));
#line 978 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_145_145, 1) = ((MR_Box) (backend_libs__compile_target_code__V_146_146));
#line 978 "compile_target_code.m"
    }
#line 977 "compile_target_code.m"
    {
#line 977 "compile_target_code.m"
      backend_libs__compile_target_code__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 0) = ((MR_Box) (backend_libs__compile_target_code__SourceDebugOpt_47));
#line 977 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_144_144, 1) = ((MR_Box) (backend_libs__compile_target_code__V_145_145));
#line 977 "compile_target_code.m"
    }
#line 976 "compile_target_code.m"
    {
#line 976 "compile_target_code.m"
      backend_libs__compile_target_code__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_143_143, 0) = ((MR_Box) (backend_libs__compile_target_code__DeclDebugOpt_45));
#line 976 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_143_143, 1) = ((MR_Box) (backend_libs__compile_target_code__V_144_144));
#line 976 "compile_target_code.m"
    }
#line 976 "compile_target_code.m"
    {
#line 976 "compile_target_code.m"
      backend_libs__compile_target_code__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 0) = ((MR_Box) (backend_libs__compile_target_code__LL_DebugOpt_54));
#line 976 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_142_142, 1) = ((MR_Box) (backend_libs__compile_target_code__V_143_143));
#line 976 "compile_target_code.m"
    }
#line 975 "compile_target_code.m"
    {
#line 975 "compile_target_code.m"
      backend_libs__compile_target_code__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 0) = ((MR_Box) (backend_libs__compile_target_code__ExtendOpt_52));
#line 975 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_141_141, 1) = ((MR_Box) (backend_libs__compile_target_code__V_142_142));
#line 975 "compile_target_code.m"
    }
#line 974 "compile_target_code.m"
    {
#line 974 "compile_target_code.m"
      backend_libs__compile_target_code__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_140_140, 0) = ((MR_Box) (backend_libs__compile_target_code__NumTagBitsOpt_43));
#line 974 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_140_140, 1) = ((MR_Box) (backend_libs__compile_target_code__V_141_141));
#line 974 "compile_target_code.m"
    }
#line 974 "compile_target_code.m"
    {
#line 974 "compile_target_code.m"
      backend_libs__compile_target_code__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 0) = ((MR_Box) (backend_libs__compile_target_code__TagsOpt_40));
#line 974 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_139_139, 1) = ((MR_Box) (backend_libs__compile_target_code__V_140_140));
#line 974 "compile_target_code.m"
    }
#line 973 "compile_target_code.m"
    {
#line 973 "compile_target_code.m"
      backend_libs__compile_target_code__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 0) = ((MR_Box) (backend_libs__compile_target_code__PIC_Reg_Opt_38));
#line 973 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_138_138, 1) = ((MR_Box) (backend_libs__compile_target_code__V_139_139));
#line 973 "compile_target_code.m"
    }
#line 972 "compile_target_code.m"
    {
#line 972 "compile_target_code.m"
      backend_libs__compile_target_code__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_137_137, 0) = ((MR_Box) (backend_libs__compile_target_code__RecordTermSizesOpt_36));
#line 972 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_137_137, 1) = ((MR_Box) (backend_libs__compile_target_code__V_138_138));
#line 972 "compile_target_code.m"
    }
#line 971 "compile_target_code.m"
    {
#line 971 "compile_target_code.m"
      backend_libs__compile_target_code__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileDeepOpt_33));
#line 971 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_136_136, 1) = ((MR_Box) (backend_libs__compile_target_code__V_137_137));
#line 971 "compile_target_code.m"
    }
#line 971 "compile_target_code.m"
    {
#line 971 "compile_target_code.m"
      backend_libs__compile_target_code__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileMemoryOpt_31));
#line 971 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_135_135, 1) = ((MR_Box) (backend_libs__compile_target_code__V_136_136));
#line 971 "compile_target_code.m"
    }
#line 970 "compile_target_code.m"
    {
#line 970 "compile_target_code.m"
      backend_libs__compile_target_code__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_134_134, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileTimeOpt_29));
#line 970 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_134_134, 1) = ((MR_Box) (backend_libs__compile_target_code__V_135_135));
#line 970 "compile_target_code.m"
    }
#line 970 "compile_target_code.m"
    {
#line 970 "compile_target_code.m"
      backend_libs__compile_target_code__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 0) = ((MR_Box) (backend_libs__compile_target_code__ProfileCallsOpt_27));
#line 970 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_133_133, 1) = ((MR_Box) (backend_libs__compile_target_code__V_134_134));
#line 970 "compile_target_code.m"
    }
#line 969 "compile_target_code.m"
    {
#line 969 "compile_target_code.m"
      backend_libs__compile_target_code__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 0) = ((MR_Box) (backend_libs__compile_target_code__GC_Opt_25));
#line 969 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_132_132, 1) = ((MR_Box) (backend_libs__compile_target_code__V_133_133));
#line 969 "compile_target_code.m"
    }
#line 968 "compile_target_code.m"
    {
#line 968 "compile_target_code.m"
      backend_libs__compile_target_code__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_131_131, 0) = ((MR_Box) (backend_libs__compile_target_code__ThreadscopeOpt_22));
#line 968 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_131_131, 1) = ((MR_Box) (backend_libs__compile_target_code__V_132_132));
#line 968 "compile_target_code.m"
    }
#line 967 "compile_target_code.m"
    {
#line 967 "compile_target_code.m"
      backend_libs__compile_target_code__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 0) = ((MR_Box) (backend_libs__compile_target_code__ParallelOpt_20));
#line 967 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_130_130, 1) = ((MR_Box) (backend_libs__compile_target_code__V_131_131));
#line 967 "compile_target_code.m"
    }
#line 966 "compile_target_code.m"
    {
#line 966 "compile_target_code.m"
      backend_libs__compile_target_code__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 0) = ((MR_Box) (backend_libs__compile_target_code__AsmOpt_18));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_129_129, 1) = ((MR_Box) (backend_libs__compile_target_code__V_130_130));
#line 966 "compile_target_code.m"
    }
#line 966 "compile_target_code.m"
    {
#line 966 "compile_target_code.m"
      backend_libs__compile_target_code__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_128_128, 0) = ((MR_Box) (backend_libs__compile_target_code__GotoOpt_16));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_128_128, 1) = ((MR_Box) (backend_libs__compile_target_code__V_129_129));
#line 966 "compile_target_code.m"
    }
#line 966 "compile_target_code.m"
    {
#line 966 "compile_target_code.m"
      backend_libs__compile_target_code__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 0) = ((MR_Box) (backend_libs__compile_target_code__RegOpt_14));
#line 966 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_127_127, 1) = ((MR_Box) (backend_libs__compile_target_code__V_128_128));
#line 966 "compile_target_code.m"
    }
#line 965 "compile_target_code.m"
    {
#line 965 "compile_target_code.m"
      backend_libs__compile_target_code__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelDataOpt_12));
#line 965 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_126_126, 1) = ((MR_Box) (backend_libs__compile_target_code__V_127_127));
#line 965 "compile_target_code.m"
    }
#line 964 "compile_target_code.m"
    {
#line 964 "compile_target_code.m"
      backend_libs__compile_target_code__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 0) = ((MR_Box) (backend_libs__compile_target_code__NestedFunctionsOpt_10));
#line 964 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_125_125, 1) = ((MR_Box) (backend_libs__compile_target_code__V_126_126));
#line 964 "compile_target_code.m"
    }
#line 963 "compile_target_code.m"
    {
#line 963 "compile_target_code.m"
      backend_libs__compile_target_code__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 0) = ((MR_Box) (backend_libs__compile_target_code__HighLevelCodeOpt_8));
#line 963 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 1) = ((MR_Box) (backend_libs__compile_target_code__V_125_125));
#line 963 "compile_target_code.m"
    }
#line 962 "compile_target_code.m"
    {
#line 962 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_124_124, backend_libs__compile_target_code__GradeDefines_6);
#line 962 "compile_target_code.m"
      return;
    }
#line 636 "compile_target_code.m"
  }
#line 634 "compile_target_code.m"
}

#line 425 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(
#line 425 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 425 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_5,
#line 425 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__AllCFlags_6)
#line 425 "compile_target_code.m"
{
#line 427 "compile_target_code.m"
  {
#line 427 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_Flags_List_7;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFLAGS_8;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CC_Specific_CFLAGS_9;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseSubdirs_10;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SubDirInclOpt_11;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InclOpt_12;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FrameworkInclOpt_13;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDefinesOpts_14;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCC_Regs_15;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_REGS_16;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCC_Gotos_17;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Parallel_19;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFLAGS_FOR_PIC_21;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Target_Debug_22;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Target_DebugOpt_24;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseTrail_25;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__C_FnAlignOpt_31;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeLayoutOption_34;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TypeLayoutOpt_35;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_optimize_36;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OptimizeOpt_37;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Ansi_38;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__AnsiOpt_39;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__InlineAlloc_40;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InlineAllocOpt_41;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Warn_42;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__WarningOpt_43;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FullArch_44;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_45;
#line 427 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OverrideOpts_46;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_84_84;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_85_85;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_86_86;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_88_88;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_89_89;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_91_91;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_92_92;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_94_94;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_95_95;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_96_96;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_98_98;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_99_99;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_101_101;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_102_102;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_104_104;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_105_105;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_107_107;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_108_108;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_109_109;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_110_110;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_111_111;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_113_113;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_114_114;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_115_115;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_116_116;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_118_118;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_119_119;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_121_121;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_122_122;
#line 427 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_124_124;
#line 580 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_79_79;
#line 580 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_80_80;
#line 580 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_81_81;

#line 428 "compile_target_code.m"
    {
#line 428 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 483, &backend_libs__compile_target_code__C_Flags_List_7);
    }
#line 429 "compile_target_code.m"
    {
#line 429 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__C_Flags_List_7, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__CFLAGS_8);
    }
#line 430 "compile_target_code.m"
    {
#line 430 "compile_target_code.m"
      backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__CC_Specific_CFLAGS_9);
    }
#line 432 "compile_target_code.m"
    {
#line 432 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_10);
    }
#line 440 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseSubdirs_10 == (MR_Integer) 0))
#line 442 "compile_target_code.m"
      backend_libs__compile_target_code__SubDirInclOpt_11 = (MR_String) "";
#line 440 "compile_target_code.m"
    else
#line 439 "compile_target_code.m"
      backend_libs__compile_target_code__SubDirInclOpt_11 = (MR_String) "-I. ";
#line 445 "compile_target_code.m"
    {
#line 445 "compile_target_code.m"
      backend_libs__compile_target_code__gather_c_include_dir_flags_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__InclOpt_12);
    }
#line 446 "compile_target_code.m"
    {
#line 446 "compile_target_code.m"
      backend_libs__compile_target_code__get_framework_directories_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__FrameworkInclOpt_13);
    }
#line 447 "compile_target_code.m"
    {
#line 447 "compile_target_code.m"
      backend_libs__compile_target_code__gather_grade_defines_3_p_0(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__PIC_5, &backend_libs__compile_target_code__GradeDefinesOpts_14);
    }
#line 449 "compile_target_code.m"
    {
#line 449 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 244, &backend_libs__compile_target_code__GCC_Regs_15);
    }
#line 454 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GCC_Regs_15 == (MR_Integer) 0))
#line 456 "compile_target_code.m"
      backend_libs__compile_target_code__CFLAGS_FOR_REGS_16 = (MR_String) "";
#line 454 "compile_target_code.m"
    else
#line 451 "compile_target_code.m"
      {
#line 452 "compile_target_code.m"
        {
#line 452 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 498, &backend_libs__compile_target_code__CFLAGS_FOR_REGS_16);
        }
#line 451 "compile_target_code.m"
      }
#line 458 "compile_target_code.m"
    {
#line 458 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 243, &backend_libs__compile_target_code__GCC_Gotos_17);
    }
#line 463 "compile_target_code.m"
    if ((backend_libs__compile_target_code__GCC_Gotos_17 == (MR_Integer) 0))
#line 465 "compile_target_code.m"
      backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18 = (MR_String) "";
#line 463 "compile_target_code.m"
    else
#line 460 "compile_target_code.m"
      {
#line 461 "compile_target_code.m"
        {
#line 461 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 499, &backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18);
        }
#line 460 "compile_target_code.m"
      }
#line 467 "compile_target_code.m"
    {
#line 467 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 210, &backend_libs__compile_target_code__Parallel_19);
    }
#line 472 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Parallel_19 == (MR_Integer) 0))
#line 474 "compile_target_code.m"
      backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20 = (MR_String) "";
#line 472 "compile_target_code.m"
    else
#line 469 "compile_target_code.m"
      {
#line 470 "compile_target_code.m"
        {
#line 470 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 500, &backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20);
        }
#line 469 "compile_target_code.m"
      }
#line 479 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PIC_5 == (MR_Integer) 0))
#line 477 "compile_target_code.m"
      {
#line 478 "compile_target_code.m"
        {
#line 478 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 502, &backend_libs__compile_target_code__CFLAGS_FOR_PIC_21);
        }
#line 477 "compile_target_code.m"
      }
#line 479 "compile_target_code.m"
    else
#line 483 "compile_target_code.m"
      backend_libs__compile_target_code__CFLAGS_FOR_PIC_21 = (MR_String) "";
#line 485 "compile_target_code.m"
    {
#line 485 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 481, &backend_libs__compile_target_code__Target_Debug_22);
    }
#line 491 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Target_Debug_22 == (MR_Integer) 0))
#line 493 "compile_target_code.m"
      backend_libs__compile_target_code__Target_DebugOpt_24 = (MR_String) "";
#line 491 "compile_target_code.m"
    else
#line 487 "compile_target_code.m"
      {
#line 487 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Target_DebugOpt0_23;

#line 488 "compile_target_code.m"
        {
#line 488 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 501, &backend_libs__compile_target_code__Target_DebugOpt0_23);
        }
#line 490 "compile_target_code.m"
        {
#line 490 "compile_target_code.m"
          backend_libs__compile_target_code__Target_DebugOpt_24 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Target_DebugOpt0_23, (MR_String) " ");
        }
#line 487 "compile_target_code.m"
      }
#line 495 "compile_target_code.m"
    {
#line 495 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 212, &backend_libs__compile_target_code__UseTrail_25);
    }
#line 525 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseTrail_25 == (MR_Integer) 0))
#line 527 "compile_target_code.m"
      backend_libs__compile_target_code__C_FnAlignOpt_31 = (MR_String) "";
#line 525 "compile_target_code.m"
    else
#line 497 "compile_target_code.m"
      {
#line 497 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__C_CompilerType_26;

#line 508 "compile_target_code.m"
        {
#line 508 "compile_target_code.m"
          libs__globals__get_c_compiler_type_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__C_CompilerType_26);
        }
#line 514 "compile_target_code.m"
        if ((backend_libs__compile_target_code__C_CompilerType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 523 "compile_target_code.m"
          backend_libs__compile_target_code__C_FnAlignOpt_31 = (MR_String) "";
#line 514 "compile_target_code.m"
        else
#line 514 "compile_target_code.m"
          if (((MR_tag((MR_Word) backend_libs__compile_target_code__C_CompilerType_26)) == (MR_mktag((MR_Integer) 1))))
#line 510 "compile_target_code.m"
            {
#line 510 "compile_target_code.m"
              MR_Integer backend_libs__compile_target_code__BytesPerWord_30;
#line 510 "compile_target_code.m"
              MR_String backend_libs__compile_target_code__V_127_127;
#line 510 "compile_target_code.m"
              MR_String backend_libs__compile_target_code__V_128_128;

#line 511 "compile_target_code.m"
              {
#line 511 "compile_target_code.m"
                libs__globals__lookup_int_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 235, &backend_libs__compile_target_code__BytesPerWord_30);
              }
#line 13437 "backend_libs.compile_target_code.c"
              {
#line 13439 "backend_libs.compile_target_code.c"
                backend_libs__compile_target_code__V_127_127 = mercury__string__int_to_string_1_f_0(backend_libs__compile_target_code__BytesPerWord_30);
              }
#line 13442 "backend_libs.compile_target_code.c"
              {
#line 13444 "backend_libs.compile_target_code.c"
                backend_libs__compile_target_code__V_128_128 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__V_127_127, (MR_String) " ");
              }
#line 13447 "backend_libs.compile_target_code.c"
              {
#line 13449 "backend_libs.compile_target_code.c"
                backend_libs__compile_target_code__C_FnAlignOpt_31 = mercury__string__f_43_43_2_f_0((MR_String) "-falign-functions=", backend_libs__compile_target_code__V_128_128);
              }
#line 510 "compile_target_code.m"
            }
#line 514 "compile_target_code.m"
          else
#line 520 "compile_target_code.m"
            backend_libs__compile_target_code__C_FnAlignOpt_31 = (MR_String) "";
#line 497 "compile_target_code.m"
      }
#line 529 "compile_target_code.m"
    {
#line 529 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 219, &backend_libs__compile_target_code__TypeLayoutOption_34);
    }
#line 533 "compile_target_code.m"
    if ((backend_libs__compile_target_code__TypeLayoutOption_34 == (MR_Integer) 0))
#line 532 "compile_target_code.m"
      backend_libs__compile_target_code__TypeLayoutOpt_35 = (MR_String) "-DMR_NO_TYPE_LAYOUT ";
#line 533 "compile_target_code.m"
    else
#line 535 "compile_target_code.m"
      backend_libs__compile_target_code__TypeLayoutOpt_35 = (MR_String) "";
#line 537 "compile_target_code.m"
    {
#line 537 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 486, &backend_libs__compile_target_code__C_optimize_36);
    }
#line 542 "compile_target_code.m"
    if ((backend_libs__compile_target_code__C_optimize_36 == (MR_Integer) 0))
#line 544 "compile_target_code.m"
      backend_libs__compile_target_code__OptimizeOpt_37 = (MR_String) "";
#line 542 "compile_target_code.m"
    else
#line 539 "compile_target_code.m"
      {
#line 540 "compile_target_code.m"
        {
#line 540 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 496, &backend_libs__compile_target_code__OptimizeOpt_37);
        }
#line 539 "compile_target_code.m"
      }
#line 546 "compile_target_code.m"
    {
#line 546 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 487, &backend_libs__compile_target_code__Ansi_38);
    }
#line 550 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Ansi_38 == (MR_Integer) 0))
#line 552 "compile_target_code.m"
      backend_libs__compile_target_code__AnsiOpt_39 = (MR_String) "";
#line 550 "compile_target_code.m"
    else
#line 548 "compile_target_code.m"
      {
#line 549 "compile_target_code.m"
        {
#line 549 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 497, &backend_libs__compile_target_code__AnsiOpt_39);
        }
#line 548 "compile_target_code.m"
      }
#line 554 "compile_target_code.m"
    {
#line 554 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 488, &backend_libs__compile_target_code__InlineAlloc_40);
    }
#line 560 "compile_target_code.m"
    if ((backend_libs__compile_target_code__InlineAlloc_40 == (MR_Integer) 0))
#line 562 "compile_target_code.m"
      backend_libs__compile_target_code__InlineAllocOpt_41 = (MR_String) "";
#line 560 "compile_target_code.m"
    else
#line 559 "compile_target_code.m"
      backend_libs__compile_target_code__InlineAllocOpt_41 = (MR_String) "";
#line 564 "compile_target_code.m"
    {
#line 564 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 26, &backend_libs__compile_target_code__Warn_42);
    }
#line 568 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Warn_42 == (MR_Integer) 0))
#line 570 "compile_target_code.m"
      backend_libs__compile_target_code__WarningOpt_43 = (MR_String) "";
#line 568 "compile_target_code.m"
    else
#line 566 "compile_target_code.m"
      {
#line 567 "compile_target_code.m"
        {
#line 567 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 495, &backend_libs__compile_target_code__WarningOpt_43);
        }
#line 566 "compile_target_code.m"
      }
#line 578 "compile_target_code.m"
    {
#line 578 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 659, &backend_libs__compile_target_code__FullArch_44);
    }
#line 580 "compile_target_code.m"
    {
#line 580 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, (MR_Integer) 248, (MR_Integer) 0);
    }
#line 580 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 580 "compile_target_code.m"
      {
#line 581 "compile_target_code.m"
        backend_libs__compile_target_code__V_79_79 = (MR_Integer) 244;
#line 581 "compile_target_code.m"
        backend_libs__compile_target_code__V_80_80 = (MR_Integer) 1;
#line 581 "compile_target_code.m"
        {
#line 581 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, backend_libs__compile_target_code__V_79_79, backend_libs__compile_target_code__V_80_80);
        }
#line 580 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 580 "compile_target_code.m"
          {
#line 582 "compile_target_code.m"
            backend_libs__compile_target_code__V_81_81 = (MR_String) "powerpc-apple-darwin";
#line 582 "compile_target_code.m"
            {
#line 582 "compile_target_code.m"
              backend_libs__compile_target_code__succeeded = mercury__string__prefix_2_p_0(backend_libs__compile_target_code__FullArch_44, backend_libs__compile_target_code__V_81_81);
            }
#line 580 "compile_target_code.m"
          }
#line 580 "compile_target_code.m"
      }
#line 585 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 584 "compile_target_code.m"
      backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_45 = (MR_String) "-fno-loop-optimize ";
#line 585 "compile_target_code.m"
    else
#line 586 "compile_target_code.m"
      backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_45 = (MR_String) "";
#line 593 "compile_target_code.m"
    {
#line 593 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_4, (MR_Integer) 180, (MR_Integer) 1);
    }
#line 593 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 594 "compile_target_code.m"
      {
#line 594 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(backend_libs__compile_target_code__FullArch_44);
      }
#line 597 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 596 "compile_target_code.m"
      backend_libs__compile_target_code__OverrideOpts_46 = (MR_String) "-O0";
#line 597 "compile_target_code.m"
    else
#line 598 "compile_target_code.m"
      backend_libs__compile_target_code__OverrideOpts_46 = (MR_String) "";
#line 630 "compile_target_code.m"
    {
#line 630 "compile_target_code.m"
      backend_libs__compile_target_code__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 0) = ((MR_Box) (backend_libs__compile_target_code__OverrideOpts_46));
#line 630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "compile_target_code.m"
    }
#line 629 "compile_target_code.m"
    {
#line 629 "compile_target_code.m"
      backend_libs__compile_target_code__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 0) = ((MR_Box) ((MR_String) " "));
#line 629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_122_122, 1) = ((MR_Box) (backend_libs__compile_target_code__V_124_124));
#line 629 "compile_target_code.m"
    }
#line 629 "compile_target_code.m"
    {
#line 629 "compile_target_code.m"
      backend_libs__compile_target_code__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 0) = ((MR_Box) (backend_libs__compile_target_code__CC_Specific_CFLAGS_9));
#line 629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_121_121, 1) = ((MR_Box) (backend_libs__compile_target_code__V_122_122));
#line 629 "compile_target_code.m"
    }
#line 628 "compile_target_code.m"
    {
#line 628 "compile_target_code.m"
      backend_libs__compile_target_code__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 0) = ((MR_Box) ((MR_String) " "));
#line 628 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_119_119, 1) = ((MR_Box) (backend_libs__compile_target_code__V_121_121));
#line 628 "compile_target_code.m"
    }
#line 628 "compile_target_code.m"
    {
#line 628 "compile_target_code.m"
      backend_libs__compile_target_code__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_8));
#line 628 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_118_118, 1) = ((MR_Box) (backend_libs__compile_target_code__V_119_119));
#line 628 "compile_target_code.m"
    }
#line 627 "compile_target_code.m"
    {
#line 627 "compile_target_code.m"
      backend_libs__compile_target_code__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 0) = ((MR_Box) ((MR_String) " "));
#line 627 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_116_116, 1) = ((MR_Box) (backend_libs__compile_target_code__V_118_118));
#line 627 "compile_target_code.m"
    }
#line 627 "compile_target_code.m"
    {
#line 627 "compile_target_code.m"
      backend_libs__compile_target_code__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_115_115, 0) = ((MR_Box) (backend_libs__compile_target_code__WarningOpt_43));
#line 627 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_115_115, 1) = ((MR_Box) (backend_libs__compile_target_code__V_116_116));
#line 627 "compile_target_code.m"
    }
#line 626 "compile_target_code.m"
    {
#line 626 "compile_target_code.m"
      backend_libs__compile_target_code__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_114_114, 0) = ((MR_Box) (backend_libs__compile_target_code__C_FnAlignOpt_31));
#line 626 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_114_114, 1) = ((MR_Box) (backend_libs__compile_target_code__V_115_115));
#line 626 "compile_target_code.m"
    }
#line 625 "compile_target_code.m"
    {
#line 625 "compile_target_code.m"
      backend_libs__compile_target_code__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_113_113, 0) = ((MR_Box) (backend_libs__compile_target_code__AppleGCCRegWorkaroundOpt_45));
#line 625 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_113_113, 1) = ((MR_Box) (backend_libs__compile_target_code__V_114_114));
#line 625 "compile_target_code.m"
    }
#line 624 "compile_target_code.m"
    {
#line 624 "compile_target_code.m"
      backend_libs__compile_target_code__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 0) = ((MR_Box) ((MR_String) " "));
#line 624 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_111_111, 1) = ((MR_Box) (backend_libs__compile_target_code__V_113_113));
#line 624 "compile_target_code.m"
    }
#line 624 "compile_target_code.m"
    {
#line 624 "compile_target_code.m"
      backend_libs__compile_target_code__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 0) = ((MR_Box) (backend_libs__compile_target_code__AnsiOpt_39));
#line 624 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_110_110, 1) = ((MR_Box) (backend_libs__compile_target_code__V_111_111));
#line 624 "compile_target_code.m"
    }
#line 623 "compile_target_code.m"
    {
#line 623 "compile_target_code.m"
      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__InlineAllocOpt_41));
#line 623 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (backend_libs__compile_target_code__V_110_110));
#line 623 "compile_target_code.m"
    }
#line 622 "compile_target_code.m"
    {
#line 622 "compile_target_code.m"
      backend_libs__compile_target_code__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_108_108, 0) = ((MR_Box) (backend_libs__compile_target_code__TypeLayoutOpt_35));
#line 622 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_108_108, 1) = ((MR_Box) (backend_libs__compile_target_code__V_109_109));
#line 622 "compile_target_code.m"
    }
#line 621 "compile_target_code.m"
    {
#line 621 "compile_target_code.m"
      backend_libs__compile_target_code__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 0) = ((MR_Box) (backend_libs__compile_target_code__Target_DebugOpt_24));
#line 621 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 1) = ((MR_Box) (backend_libs__compile_target_code__V_108_108));
#line 621 "compile_target_code.m"
    }
#line 620 "compile_target_code.m"
    {
#line 620 "compile_target_code.m"
      backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) ((MR_String) " "));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_107_107));
#line 620 "compile_target_code.m"
    }
#line 620 "compile_target_code.m"
    {
#line 620 "compile_target_code.m"
      backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_PIC_21));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
#line 620 "compile_target_code.m"
    }
#line 620 "compile_target_code.m"
    {
#line 620 "compile_target_code.m"
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) ((MR_String) " "));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
#line 620 "compile_target_code.m"
    }
#line 620 "compile_target_code.m"
    {
#line 620 "compile_target_code.m"
      backend_libs__compile_target_code__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_THREADS_20));
#line 620 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_101_101, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
#line 620 "compile_target_code.m"
    }
#line 619 "compile_target_code.m"
    {
#line 619 "compile_target_code.m"
      backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) ((MR_String) " "));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (backend_libs__compile_target_code__V_101_101));
#line 619 "compile_target_code.m"
    }
#line 619 "compile_target_code.m"
    {
#line 619 "compile_target_code.m"
      backend_libs__compile_target_code__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_GOTOS_18));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_98_98, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
#line 619 "compile_target_code.m"
    }
#line 619 "compile_target_code.m"
    {
#line 619 "compile_target_code.m"
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) ((MR_String) " "));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_98_98));
#line 619 "compile_target_code.m"
    }
#line 619 "compile_target_code.m"
    {
#line 619 "compile_target_code.m"
      backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) (backend_libs__compile_target_code__CFLAGS_FOR_REGS_16));
#line 619 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
#line 619 "compile_target_code.m"
    }
#line 618 "compile_target_code.m"
    {
#line 618 "compile_target_code.m"
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) (backend_libs__compile_target_code__GradeDefinesOpts_14));
#line 618 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
#line 618 "compile_target_code.m"
    }
#line 617 "compile_target_code.m"
    {
#line 617 "compile_target_code.m"
      backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) ((MR_String) " "));
#line 617 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
#line 617 "compile_target_code.m"
    }
#line 617 "compile_target_code.m"
    {
#line 617 "compile_target_code.m"
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (backend_libs__compile_target_code__OptimizeOpt_37));
#line 617 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
#line 617 "compile_target_code.m"
    }
#line 616 "compile_target_code.m"
    {
#line 616 "compile_target_code.m"
      backend_libs__compile_target_code__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 0) = ((MR_Box) ((MR_String) " "));
#line 616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_89_89, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
#line 616 "compile_target_code.m"
    }
#line 616 "compile_target_code.m"
    {
#line 616 "compile_target_code.m"
      backend_libs__compile_target_code__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 0) = ((MR_Box) (backend_libs__compile_target_code__FrameworkInclOpt_13));
#line 616 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_88_88, 1) = ((MR_Box) (backend_libs__compile_target_code__V_89_89));
#line 616 "compile_target_code.m"
    }
#line 615 "compile_target_code.m"
    {
#line 615 "compile_target_code.m"
      backend_libs__compile_target_code__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 0) = ((MR_Box) ((MR_String) " "));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_86_86, 1) = ((MR_Box) (backend_libs__compile_target_code__V_88_88));
#line 615 "compile_target_code.m"
    }
#line 615 "compile_target_code.m"
    {
#line 615 "compile_target_code.m"
      backend_libs__compile_target_code__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_12));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_85_85, 1) = ((MR_Box) (backend_libs__compile_target_code__V_86_86));
#line 615 "compile_target_code.m"
    }
#line 615 "compile_target_code.m"
    {
#line 615 "compile_target_code.m"
      backend_libs__compile_target_code__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 0) = ((MR_Box) (backend_libs__compile_target_code__SubDirInclOpt_11));
#line 615 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_84_84, 1) = ((MR_Box) (backend_libs__compile_target_code__V_85_85));
#line 615 "compile_target_code.m"
    }
#line 614 "compile_target_code.m"
    {
#line 614 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_84_84, backend_libs__compile_target_code__AllCFlags_6);
#line 614 "compile_target_code.m"
      return;
    }
#line 427 "compile_target_code.m"
  }
#line 425 "compile_target_code.m"
}

#line 2400 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_2(
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 2400 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 2400 "compile_target_code.m"
{
#line 2400 "compile_target_code.m"
  {
#line 2400 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 2400 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 2400 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv1_HeadVar__2_2;

#line 2400 "compile_target_code.m"
    {
#line 2400 "compile_target_code.m"
      backend_libs__compile_target_code__conv1_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 2400 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv1_HeadVar__2_2));
#line 2400 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 2400 "compile_target_code.m"
  }
#line 2400 "compile_target_code.m"
}

#line 3236 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0_1(
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3236 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3236 "compile_target_code.m"
{
#line 3236 "compile_target_code.m"
  {
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3236 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__2_2;

#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3236 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_2));
#line 3236 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3236 "compile_target_code.m"
  }
#line 3236 "compile_target_code.m"
}

#line 237 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__output_library_link_flags_4_p_0(
#line 237 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 237 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6)
#line 237 "compile_target_code.m"
{
#line 3603 "compile_target_code.m"
  {
#line 3603 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_13_54;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkLibraryDirectoriesList_11;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkerPathFlag_12;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraryDirectories_13;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__RpathOpts_14;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeLinkLibraries_15;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkLibraries_17;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MercuryStdLibs_18;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SystemLibs_19;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkFlags_20;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_31_31;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_32_32;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_34_34;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_35_35;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_37_37;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_38_38;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_40_40;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_41_41;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_43_43;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_52_52;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseInstallName_62;
#line 3603 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SharedLibsSupported_63;
#line 3603 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Linkage_64;

#line 3610 "compile_target_code.m"
    {
#line 3610 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 538, &backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
#line 3612 "compile_target_code.m"
    {
#line 3612 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 603, &backend_libs__compile_target_code__LinkerPathFlag_12);
    }
#line 14058 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_13_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__V_52_52 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_13_54, backend_libs__compile_target_code__TypeCtorInfo_13_54, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[5], backend_libs__compile_target_code__LinkLibraryDirectoriesList_11);
    }
#line 3236 "compile_target_code.m"
    {
#line 3236 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__V_52_52, backend_libs__compile_target_code__LinkerPathFlag_12, (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraryDirectories_13);
    }
#line 2387 "compile_target_code.m"
    {
#line 2387 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 610, &backend_libs__compile_target_code__UseInstallName_62);
    }
#line 2389 "compile_target_code.m"
    {
#line 2389 "compile_target_code.m"
      backend_libs__compile_target_code__shared_libraries_supported_2_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__SharedLibsSupported_63);
    }
#line 2390 "compile_target_code.m"
    {
#line 2390 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 553, &backend_libs__compile_target_code__Linkage_64);
    }
#line 2392 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__UseInstallName_62 == (MR_Integer) 0);
#line 2392 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2392 "compile_target_code.m"
      {
#line 2393 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__SharedLibsSupported_63 == (MR_Integer) 1);
#line 2392 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 2394 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Linkage_64, (MR_String) "shared") == 0);
#line 2392 "compile_target_code.m"
      }
#line 2411 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2399 "compile_target_code.m"
      {
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_25_76;
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RpathDirs0_65;
#line 2399 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__RpathDirs_66;

#line 2398 "compile_target_code.m"
        {
#line 2398 "compile_target_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 539, &backend_libs__compile_target_code__RpathDirs0_65);
        }
#line 14115 "backend_libs.compile_target_code.c"
        backend_libs__compile_target_code__TypeCtorInfo_25_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2400 "compile_target_code.m"
        {
#line 2400 "compile_target_code.m"
          backend_libs__compile_target_code__RpathDirs_66 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_25_76, backend_libs__compile_target_code__TypeCtorInfo_25_76, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[6], backend_libs__compile_target_code__RpathDirs0_65);
        }
#line 2404 "compile_target_code.m"
        if ((backend_libs__compile_target_code__RpathDirs_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2403 "compile_target_code.m"
          backend_libs__compile_target_code__RpathOpts_14 = (MR_String) "";
#line 2404 "compile_target_code.m"
        else
#line 2405 "compile_target_code.m"
          {
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathSep_69;
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathFlag_70;
#line 2405 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__RpathOpts0_71;

#line 2406 "compile_target_code.m"
            {
#line 2406 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 605, &backend_libs__compile_target_code__RpathSep_69);
            }
#line 2407 "compile_target_code.m"
            {
#line 2407 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 604, &backend_libs__compile_target_code__RpathFlag_70);
            }
#line 2408 "compile_target_code.m"
            {
#line 2408 "compile_target_code.m"
              backend_libs__compile_target_code__RpathOpts0_71 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__RpathSep_69, backend_libs__compile_target_code__RpathDirs_66);
            }
#line 2409 "compile_target_code.m"
            {
#line 2409 "compile_target_code.m"
              backend_libs__compile_target_code__RpathOpts_14 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__RpathFlag_70, backend_libs__compile_target_code__RpathOpts0_71);
            }
#line 2405 "compile_target_code.m"
          }
#line 2399 "compile_target_code.m"
      }
#line 2411 "compile_target_code.m"
    else
#line 2412 "compile_target_code.m"
      backend_libs__compile_target_code__RpathOpts_14 = (MR_String) "";
#line 3617 "compile_target_code.m"
    {
#line 3617 "compile_target_code.m"
      backend_libs__compile_target_code__get_link_libraries_4_p_0(backend_libs__compile_target_code__Globals_5, &backend_libs__compile_target_code__MaybeLinkLibraries_15);
    }
#line 3621 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeLinkLibraries_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3623 "compile_target_code.m"
      backend_libs__compile_target_code__LinkLibraries_17 = (MR_String) "";
#line 3621 "compile_target_code.m"
    else
#line 3619 "compile_target_code.m"
      {
#line 3619 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__LinkLibrariesList_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeLinkLibraries_15, (MR_Integer) 0)));

#line 3620 "compile_target_code.m"
        {
#line 3620 "compile_target_code.m"
          backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__LinkLibrariesList_16, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__LinkLibraries_17);
        }
#line 3619 "compile_target_code.m"
      }
#line 3626 "compile_target_code.m"
    {
#line 3626 "compile_target_code.m"
      backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__MercuryStdLibs_18);
    }
#line 3627 "compile_target_code.m"
    {
#line 3627 "compile_target_code.m"
      backend_libs__compile_target_code__get_system_libs_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__SystemLibs_19);
    }
#line 3633 "compile_target_code.m"
    {
#line 3633 "compile_target_code.m"
      backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3633 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__SystemLibs_19));
#line 3633 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3633 "compile_target_code.m"
    }
#line 3632 "compile_target_code.m"
    {
#line 3632 "compile_target_code.m"
      backend_libs__compile_target_code__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3632 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 0) = ((MR_Box) ((MR_String) " "));
#line 3632 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_41_41, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
#line 3632 "compile_target_code.m"
    }
#line 3632 "compile_target_code.m"
    {
#line 3632 "compile_target_code.m"
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3632 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) (backend_libs__compile_target_code__MercuryStdLibs_18));
#line 3632 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
#line 3632 "compile_target_code.m"
    }
#line 3631 "compile_target_code.m"
    {
#line 3631 "compile_target_code.m"
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3631 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) " "));
#line 3631 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
#line 3631 "compile_target_code.m"
    }
#line 3631 "compile_target_code.m"
    {
#line 3631 "compile_target_code.m"
      backend_libs__compile_target_code__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3631 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraries_17));
#line 3631 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_37_37, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
#line 3631 "compile_target_code.m"
    }
#line 3630 "compile_target_code.m"
    {
#line 3630 "compile_target_code.m"
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) ((MR_String) " "));
#line 3630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_37_37));
#line 3630 "compile_target_code.m"
    }
#line 3630 "compile_target_code.m"
    {
#line 3630 "compile_target_code.m"
      backend_libs__compile_target_code__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 0) = ((MR_Box) (backend_libs__compile_target_code__RpathOpts_14));
#line 3630 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
#line 3630 "compile_target_code.m"
    }
#line 3629 "compile_target_code.m"
    {
#line 3629 "compile_target_code.m"
      backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) ((MR_String) " "));
#line 3629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_34_34));
#line 3629 "compile_target_code.m"
    }
#line 3629 "compile_target_code.m"
    {
#line 3629 "compile_target_code.m"
      backend_libs__compile_target_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 0) = ((MR_Box) (backend_libs__compile_target_code__LinkLibraryDirectories_13));
#line 3629 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_31_31, 1) = ((MR_Box) (backend_libs__compile_target_code__V_32_32));
#line 3629 "compile_target_code.m"
    }
#line 3628 "compile_target_code.m"
    {
#line 3628 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_31_31, &backend_libs__compile_target_code__LinkFlags_20);
    }
#line 3634 "compile_target_code.m"
    {
#line 3634 "compile_target_code.m"
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__LinkFlags_20);
    }
#line 3635 "compile_target_code.m"
    {
#line 3635 "compile_target_code.m"
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
#line 3635 "compile_target_code.m"
      return;
    }
#line 3603 "compile_target_code.m"
  }
#line 237 "compile_target_code.m"
}

#line 993 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0_1(
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 993 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 993 "compile_target_code.m"
{
#line 993 "compile_target_code.m"
  {
#line 993 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 993 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 993 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__2_12;

#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__993__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 993 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_12));
#line 993 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 993 "compile_target_code.m"
  }
#line 993 "compile_target_code.m"
}

#line 228 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(
#line 228 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 228 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6)
#line 228 "compile_target_code.m"
{
#line 3593 "compile_target_code.m"
  {
#line 3593 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3593 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_20_30;
#line 3593 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InclOpts_8;
#line 3593 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__C_Incl_Dirs_15;
#line 3593 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_18_18;
#line 3593 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_19_19;

#line 991 "compile_target_code.m"
    {
#line 991 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 485, &backend_libs__compile_target_code__C_Incl_Dirs_15);
    }
#line 14371 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_20_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__V_19_19 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_30, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_4[4], backend_libs__compile_target_code__C_Incl_Dirs_15);
    }
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__V_18_18 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_20_30, backend_libs__compile_target_code__V_19_19);
    }
#line 993 "compile_target_code.m"
    {
#line 993 "compile_target_code.m"
      backend_libs__compile_target_code__InclOpts_8 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_18_18);
    }
#line 3595 "compile_target_code.m"
    {
#line 3595 "compile_target_code.m"
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__InclOpts_8);
    }
#line 3596 "compile_target_code.m"
    {
#line 3596 "compile_target_code.m"
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
#line 3596 "compile_target_code.m"
      return;
    }
#line 3593 "compile_target_code.m"
  }
#line 228 "compile_target_code.m"
}

#line 220 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__output_grade_defines_4_p_0(
#line 220 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 220 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6)
#line 220 "compile_target_code.m"
{
#line 3582 "compile_target_code.m"
  {
#line 3582 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3582 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__PIC_8;
#line 3582 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDefines_9;

#line 3583 "compile_target_code.m"
    {
#line 3583 "compile_target_code.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__PIC_8);
    }
#line 3584 "compile_target_code.m"
    {
#line 3584 "compile_target_code.m"
      backend_libs__compile_target_code__gather_grade_defines_3_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__PIC_8, &backend_libs__compile_target_code__GradeDefines_9);
    }
#line 3585 "compile_target_code.m"
    {
#line 3585 "compile_target_code.m"
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__GradeDefines_9);
    }
#line 3586 "compile_target_code.m"
    {
#line 3586 "compile_target_code.m"
      mercury__io__nl_3_p_0(backend_libs__compile_target_code__Stream_6);
#line 3586 "compile_target_code.m"
      return;
    }
#line 3582 "compile_target_code.m"
  }
#line 220 "compile_target_code.m"
}

#line 213 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(
#line 213 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 213 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Stream_6)
#line 213 "compile_target_code.m"
{
#line 3572 "compile_target_code.m"
  {
#line 3572 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3572 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__PIC_8;
#line 3572 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CFlags_9;

#line 3573 "compile_target_code.m"
    {
#line 3573 "compile_target_code.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(backend_libs__compile_target_code__Globals_5, (MR_Integer) 0, &backend_libs__compile_target_code__PIC_8);
    }
#line 3574 "compile_target_code.m"
    {
#line 3574 "compile_target_code.m"
      backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__PIC_8, &backend_libs__compile_target_code__CFlags_9);
    }
#line 3575 "compile_target_code.m"
    {
#line 3575 "compile_target_code.m"
      mercury__io__write_string_4_p_0(backend_libs__compile_target_code__Stream_6, backend_libs__compile_target_code__CFlags_9);
#line 3575 "compile_target_code.m"
      return;
    }
#line 3572 "compile_target_code.m"
  }
#line 213 "compile_target_code.m"
}

#line 207 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_standalone_interface_4_p_0(
#line 207 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_5,
#line 207 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Basename_6)
#line 207 "compile_target_code.m"
{
#line 3318 "compile_target_code.m"
  {
#line 3318 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3318 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__HdrFileName_18;
#line 3318 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__OpenResult_19;

#line 3331 "compile_target_code.m"
    {
#line 3331 "compile_target_code.m"
      backend_libs__compile_target_code__HdrFileName_18 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__Basename_6, (MR_String) ".h");
    }
#line 3332 "compile_target_code.m"
    {
#line 3332 "compile_target_code.m"
      mercury__io__open_output_4_p_0(backend_libs__compile_target_code__HdrFileName_18, &backend_libs__compile_target_code__OpenResult_19);
    }
#line 14518 "backend_libs.compile_target_code.c"
    if (((MR_tag((MR_Word) backend_libs__compile_target_code__OpenResult_19)) == (MR_mktag((MR_Integer) 1))))
#line 14520 "backend_libs.compile_target_code.c"
      {
#line 14522 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__OpenResult_19, (MR_Integer) 0)));

#line 3359 "compile_target_code.m"
        {
#line 3359 "compile_target_code.m"
          parse_tree__error_util__unable_to_open_file_4_p_0(backend_libs__compile_target_code__HdrFileName_18, backend_libs__compile_target_code__Error_21);
#line 3359 "compile_target_code.m"
          return;
        }
#line 14532 "backend_libs.compile_target_code.c"
      }
#line 14534 "backend_libs.compile_target_code.c"
    else
#line 14536 "backend_libs.compile_target_code.c"
      {
#line 14538 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__HdrFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__OpenResult_19, (MR_Integer) 0)));
#line 14540 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_25_25;
#line 14542 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_28_28;
#line 14544 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__V_29_29;
#line 14546 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_30_30;
#line 14548 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_32_32;
#line 14550 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_34_34;
#line 14552 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__V_35_35;
#line 14554 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_36_36;
#line 14556 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_38_38;
#line 14558 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_40_40;
#line 14560 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_42_42;
#line 14562 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_44_44;
#line 14564 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_46_46;
#line 14566 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_48_48;
#line 14568 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_50_50;
#line 14570 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_52_52;
#line 14572 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_54_54;
#line 14574 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_56_56;
#line 14576 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_58_58;
#line 14578 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_60_60;
#line 14580 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_62_62;
#line 14582 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_64_64;
#line 14584 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_66_66;
#line 14586 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_68_68;
#line 14588 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_70_70;
#line 14590 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__V_71_71;

#line 3336 "compile_target_code.m"
        {
#line 3336 "compile_target_code.m"
          backend_libs__compile_target_code__V_29_29 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
#line 3337 "compile_target_code.m"
        {
#line 3337 "compile_target_code.m"
          backend_libs__compile_target_code__V_35_35 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
#line 3353 "compile_target_code.m"
        {
#line 3353 "compile_target_code.m"
          backend_libs__compile_target_code__V_71_71 = mercury__string__to_upper_1_f_0(backend_libs__compile_target_code__Basename_6);
        }
#line 3353 "compile_target_code.m"
        {
#line 3353 "compile_target_code.m"
          backend_libs__compile_target_code__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3353 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 0) = ((MR_Box) (backend_libs__compile_target_code__V_71_71));
#line 3353 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[7])));
#line 3353 "compile_target_code.m"
        }
#line 3353 "compile_target_code.m"
        {
#line 3353 "compile_target_code.m"
          backend_libs__compile_target_code__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3353 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 0) = ((MR_Box) ((MR_String) "#endif /* "));
#line 3353 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_68_68, 1) = ((MR_Box) (backend_libs__compile_target_code__V_70_70));
#line 3353 "compile_target_code.m"
        }
#line 3352 "compile_target_code.m"
        {
#line 3352 "compile_target_code.m"
          backend_libs__compile_target_code__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3352 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3352 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_66_66, 1) = ((MR_Box) (backend_libs__compile_target_code__V_68_68));
#line 3352 "compile_target_code.m"
        }
#line 3351 "compile_target_code.m"
        {
#line 3351 "compile_target_code.m"
          backend_libs__compile_target_code__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3351 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 3351 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 1) = ((MR_Box) (backend_libs__compile_target_code__V_66_66));
#line 3351 "compile_target_code.m"
        }
#line 3350 "compile_target_code.m"
        {
#line 3350 "compile_target_code.m"
          backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3350 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 3350 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (backend_libs__compile_target_code__V_64_64));
#line 3350 "compile_target_code.m"
        }
#line 3349 "compile_target_code.m"
        {
#line 3349 "compile_target_code.m"
          backend_libs__compile_target_code__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3349 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
#line 3349 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_60_60, 1) = ((MR_Box) (backend_libs__compile_target_code__V_62_62));
#line 3349 "compile_target_code.m"
        }
#line 3348 "compile_target_code.m"
        {
#line 3348 "compile_target_code.m"
          backend_libs__compile_target_code__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3348 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_58_58, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3348 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_58_58, 1) = ((MR_Box) (backend_libs__compile_target_code__V_60_60));
#line 3348 "compile_target_code.m"
        }
#line 3347 "compile_target_code.m"
        {
#line 3347 "compile_target_code.m"
          backend_libs__compile_target_code__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3347 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 0) = ((MR_Box) ((MR_String) "mercury_terminate(void);\n"));
#line 3347 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_56_56, 1) = ((MR_Box) (backend_libs__compile_target_code__V_58_58));
#line 3347 "compile_target_code.m"
        }
#line 3346 "compile_target_code.m"
        {
#line 3346 "compile_target_code.m"
          backend_libs__compile_target_code__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3346 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 0) = ((MR_Box) ((MR_String) "extern int\n"));
#line 3346 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_54_54, 1) = ((MR_Box) (backend_libs__compile_target_code__V_56_56));
#line 3346 "compile_target_code.m"
        }
#line 3345 "compile_target_code.m"
        {
#line 3345 "compile_target_code.m"
          backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3345 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3345 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_54_54));
#line 3345 "compile_target_code.m"
        }
#line 3344 "compile_target_code.m"
        {
#line 3344 "compile_target_code.m"
          backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3344 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) ((MR_String) "mercury_init(int argc, char **argv, void *stackbottom);\n"));
#line 3344 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
#line 3344 "compile_target_code.m"
        }
#line 3343 "compile_target_code.m"
        {
#line 3343 "compile_target_code.m"
          backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3343 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) ((MR_String) "extern void\n"));
#line 3343 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
#line 3343 "compile_target_code.m"
        }
#line 3342 "compile_target_code.m"
        {
#line 3342 "compile_target_code.m"
          backend_libs__compile_target_code__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3342 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3342 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
#line 3342 "compile_target_code.m"
        }
#line 3341 "compile_target_code.m"
        {
#line 3341 "compile_target_code.m"
          backend_libs__compile_target_code__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3341 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_44_44, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 3341 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_44_44, 1) = ((MR_Box) (backend_libs__compile_target_code__V_46_46));
#line 3341 "compile_target_code.m"
        }
#line 3340 "compile_target_code.m"
        {
#line 3340 "compile_target_code.m"
          backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3340 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) ((MR_String) "extern \"C\" {\n"));
#line 3340 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
#line 3340 "compile_target_code.m"
        }
#line 3339 "compile_target_code.m"
        {
#line 3339 "compile_target_code.m"
          backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3339 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
#line 3339 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
#line 3339 "compile_target_code.m"
        }
#line 3338 "compile_target_code.m"
        {
#line 3338 "compile_target_code.m"
          backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3338 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) ((MR_String) "\n"));
#line 3338 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
#line 3338 "compile_target_code.m"
        }
#line 3337 "compile_target_code.m"
        {
#line 3337 "compile_target_code.m"
          backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) "_H\n"));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
#line 3337 "compile_target_code.m"
        }
#line 3337 "compile_target_code.m"
        {
#line 3337 "compile_target_code.m"
          backend_libs__compile_target_code__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 0) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_34_34, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
#line 3337 "compile_target_code.m"
        }
#line 3337 "compile_target_code.m"
        {
#line 3337 "compile_target_code.m"
          backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) ((MR_String) "#define "));
#line 3337 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_34_34));
#line 3337 "compile_target_code.m"
        }
#line 3336 "compile_target_code.m"
        {
#line 3336 "compile_target_code.m"
          backend_libs__compile_target_code__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 0) = ((MR_Box) ((MR_String) "_H\n"));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_30_30, 1) = ((MR_Box) (backend_libs__compile_target_code__V_32_32));
#line 3336 "compile_target_code.m"
        }
#line 3336 "compile_target_code.m"
        {
#line 3336 "compile_target_code.m"
          backend_libs__compile_target_code__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 0) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_28_28, 1) = ((MR_Box) (backend_libs__compile_target_code__V_30_30));
#line 3336 "compile_target_code.m"
        }
#line 3336 "compile_target_code.m"
        {
#line 3336 "compile_target_code.m"
          backend_libs__compile_target_code__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 3336 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_25_25, 1) = ((MR_Box) (backend_libs__compile_target_code__V_28_28));
#line 3336 "compile_target_code.m"
        }
#line 3335 "compile_target_code.m"
        {
#line 3335 "compile_target_code.m"
          mercury__io__write_strings_4_p_0(backend_libs__compile_target_code__HdrFileStream_20, backend_libs__compile_target_code__V_25_25);
        }
#line 3355 "compile_target_code.m"
        {
#line 3355 "compile_target_code.m"
          mercury__io__close_output_3_p_0(backend_libs__compile_target_code__HdrFileStream_20);
        }
#line 3322 "compile_target_code.m"
        {
#line 3322 "compile_target_code.m"
          backend_libs__compile_target_code__make_standalone_int_body_4_p_0(backend_libs__compile_target_code__Globals_5, backend_libs__compile_target_code__Basename_6);
#line 3322 "compile_target_code.m"
          return;
        }
#line 14855 "backend_libs.compile_target_code.c"
      }
#line 3318 "compile_target_code.m"
  }
#line 207 "compile_target_code.m"
}

#line 196 "compile_target_code.m"
MR_bool MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(
#line 196 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_1,
#line 196 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__PIC_2,
#line 196 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Ext_3)
#line 196 "compile_target_code.m"
{
#line 3297 "compile_target_code.m"
  {
#line 3297 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3294 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_16_16;

#line 3294 "compile_target_code.m"
    {
#line 3294 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 504, &backend_libs__compile_target_code__V_16_16);
    }
#line 3294 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Ext_3, backend_libs__compile_target_code__V_16_16) == 0);
#line 3297 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 3296 "compile_target_code.m"
      {
#line 3296 "compile_target_code.m"
        *backend_libs__compile_target_code__PIC_2 = (MR_Integer) 2;
#line 3296 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 3296 "compile_target_code.m"
      }
#line 3297 "compile_target_code.m"
    else
#line 3301 "compile_target_code.m"
      {
#line 3298 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_17_17;

#line 3298 "compile_target_code.m"
        {
#line 3298 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 505, &backend_libs__compile_target_code__V_17_17);
        }
#line 3298 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Ext_3, backend_libs__compile_target_code__V_17_17) == 0);
#line 3301 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 3300 "compile_target_code.m"
          {
#line 3300 "compile_target_code.m"
            *backend_libs__compile_target_code__PIC_2 = (MR_Integer) 0;
#line 3300 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 3300 "compile_target_code.m"
          }
#line 3301 "compile_target_code.m"
        else
#line 3306 "compile_target_code.m"
          {
#line 3306 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_18_18;

#line 3302 "compile_target_code.m"
            {
#line 3302 "compile_target_code.m"
              libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 506, &backend_libs__compile_target_code__V_18_18);
            }
#line 3302 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__Ext_3, backend_libs__compile_target_code__V_18_18) == 0);
#line 3306 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 3306 "compile_target_code.m"
              {
#line 3305 "compile_target_code.m"
                *backend_libs__compile_target_code__PIC_2 = (MR_Integer) 1;
#line 3305 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = MR_TRUE;
#line 3306 "compile_target_code.m"
              }
#line 3306 "compile_target_code.m"
          }
#line 3301 "compile_target_code.m"
      }
#line 3297 "compile_target_code.m"
    return backend_libs__compile_target_code__succeeded;
#line 3297 "compile_target_code.m"
  }
#line 196 "compile_target_code.m"
}

#line 195 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(
#line 195 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_1,
#line 195 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_2,
#line 195 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Ext_3)
#line 195 "compile_target_code.m"
{
#line 3281 "compile_target_code.m"
  {
#line 3281 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;

#line 3281 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PIC_2 == (MR_Integer) 1))
#line 3285 "compile_target_code.m"
      {
#line 3286 "compile_target_code.m"
        {
#line 3286 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 506, backend_libs__compile_target_code__Ext_3);
#line 3286 "compile_target_code.m"
          return;
        }
#line 3285 "compile_target_code.m"
      }
#line 3281 "compile_target_code.m"
    else
#line 3281 "compile_target_code.m"
      if ((backend_libs__compile_target_code__PIC_2 == (MR_Integer) 2))
#line 3279 "compile_target_code.m"
        {
#line 3280 "compile_target_code.m"
          {
#line 3280 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 504, backend_libs__compile_target_code__Ext_3);
#line 3280 "compile_target_code.m"
            return;
          }
#line 3279 "compile_target_code.m"
        }
#line 3281 "compile_target_code.m"
      else
#line 3282 "compile_target_code.m"
        {
#line 3283 "compile_target_code.m"
          {
#line 3283 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_1, (MR_Integer) 505, backend_libs__compile_target_code__Ext_3);
#line 3283 "compile_target_code.m"
            return;
          }
#line 3282 "compile_target_code.m"
        }
#line 3281 "compile_target_code.m"
  }
#line 195 "compile_target_code.m"
}

#line 3271 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
#line 3271 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3271 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 3271 "compile_target_code.m"
{
#line 3271 "compile_target_code.m"
  {
#line 3271 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 3271 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3271 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv2_HeadVar__2_2;

#line 3271 "compile_target_code.m"
    {
#line 3271 "compile_target_code.m"
      backend_libs__compile_target_code__conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 3271 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_HeadVar__2_2));
#line 3271 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 3271 "compile_target_code.m"
  }
#line 3271 "compile_target_code.m"
}

#line 3263 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 3263 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 3263 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 3263 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
#line 3263 "compile_target_code.m"
{
#line 3263 "compile_target_code.m"
  {
#line 3263 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 3263 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__conv0_HeadVar__3_24;

#line 3263 "compile_target_code.m"
    {
#line 3263 "compile_target_code.m"
      backend_libs__compile_target_code__IntroducedFrom__pred__make_all_module_command__3263__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_HeadVar__3_24);
    }
#line 3263 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__3_24));
#line 3263 "compile_target_code.m"
  }
#line 3263 "compile_target_code.m"
}

#line 181 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0(
#line 181 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 181 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__Command0_9,
#line 181 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModule_10,
#line 181 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__AllModules_11,
#line 181 "compile_target_code.m"
  MR_String * backend_libs__compile_target_code__Command_12)
#line 181 "compile_target_code.m"
{
#line 3261 "compile_target_code.m"
  {
#line 3261 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_38_38;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_39_39;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ModuleNameStrings_17;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_20_20;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_21_21;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_29_29;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_31_31;
#line 3261 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_33_33;
#line 3263 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_19;

#line 3263 "compile_target_code.m"
    {
#line 3263 "compile_target_code.m"
      backend_libs__compile_target_code__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3263 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
#line 3263 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 1) = ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_1));
#line 3263 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3263 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_20_20, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_8));
#line 3263 "compile_target_code.m"
    }
#line 15136 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_38_38 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 3268 "compile_target_code.m"
    {
#line 3268 "compile_target_code.m"
      backend_libs__compile_target_code__V_29_29 = mercury__list__delete_all_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_38_38, backend_libs__compile_target_code__AllModules_11, ((MR_Box) (backend_libs__compile_target_code__MainModule_10)));
    }
#line 3268 "compile_target_code.m"
    {
#line 3268 "compile_target_code.m"
      backend_libs__compile_target_code__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3268 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 0) = ((MR_Box) (backend_libs__compile_target_code__MainModule_10));
#line 3268 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_21_21, 1) = ((MR_Box) (backend_libs__compile_target_code__V_29_29));
#line 3268 "compile_target_code.m"
    }
#line 15153 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3263 "compile_target_code.m"
    {
#line 3263 "compile_target_code.m"
      mercury__list__map_foldl_5_p_2(backend_libs__compile_target_code__TypeCtorInfo_38_38, backend_libs__compile_target_code__TypeCtorInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_20_20, backend_libs__compile_target_code__V_21_21, &backend_libs__compile_target_code__ModuleNameStrings_17, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv1_STATE_VARIABLE_IO_19);
    }
#line 3271 "compile_target_code.m"
    {
#line 3271 "compile_target_code.m"
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3271 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) (backend_libs__compile_target_code__Command0_9));
#line 3271 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__ModuleNameStrings_17));
#line 3271 "compile_target_code.m"
    }
#line 3271 "compile_target_code.m"
    {
#line 3271 "compile_target_code.m"
      backend_libs__compile_target_code__V_31_31 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_39_39, backend_libs__compile_target_code__TypeCtorInfo_39_39, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[3], backend_libs__compile_target_code__V_33_33);
    }
#line 3270 "compile_target_code.m"
    {
#line 3270 "compile_target_code.m"
      *backend_libs__compile_target_code__Command_12 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__V_31_31);
    }
#line 3261 "compile_target_code.m"
  }
#line 181 "compile_target_code.m"
}

#line 171 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__get_linked_target_type_2_p_0(
#line 171 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 171 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__LinkedTargetType_4)
#line 171 "compile_target_code.m"
{
#line 3196 "compile_target_code.m"
  {
#line 3196 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3196 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MakeSharedLib_5;

#line 3197 "compile_target_code.m"
    {
#line 3197 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 99, &backend_libs__compile_target_code__MakeSharedLib_5);
    }
#line 3201 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MakeSharedLib_5 == (MR_Integer) 0))
#line 3203 "compile_target_code.m"
      *backend_libs__compile_target_code__LinkedTargetType_4 = (MR_Integer) 0;
#line 3201 "compile_target_code.m"
    else
#line 3200 "compile_target_code.m"
      *backend_libs__compile_target_code__LinkedTargetType_4 = (MR_Integer) 2;
#line 3196 "compile_target_code.m"
  }
#line 171 "compile_target_code.m"
}

#line 163 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__get_object_code_type_3_p_0(
#line 163 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_4,
#line 163 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__FileType_5,
#line 163 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__ObjectCodeType_6)
#line 163 "compile_target_code.m"
{
#line 3144 "compile_target_code.m"
  {
#line 3144 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 3144 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__PicObjExt_7;
#line 3144 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LinkWithPicObjExt_8;
#line 3144 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ObjExt_9;
#line 3144 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MercuryLinkage_10;
#line 3144 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__GCCGlobals_11;
#line 3144 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__HighLevelCode_12;
#line 3144 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Target_13;

#line 3145 "compile_target_code.m"
    {
#line 3145 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 505, &backend_libs__compile_target_code__PicObjExt_7);
    }
#line 3147 "compile_target_code.m"
    {
#line 3147 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 506, &backend_libs__compile_target_code__LinkWithPicObjExt_8);
    }
#line 3149 "compile_target_code.m"
    {
#line 3149 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 504, &backend_libs__compile_target_code__ObjExt_9);
    }
#line 3150 "compile_target_code.m"
    {
#line 3150 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 555, &backend_libs__compile_target_code__MercuryLinkage_10);
    }
#line 3151 "compile_target_code.m"
    {
#line 3151 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 244, &backend_libs__compile_target_code__GCCGlobals_11);
    }
#line 3152 "compile_target_code.m"
    {
#line 3152 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_4, (MR_Integer) 248, &backend_libs__compile_target_code__HighLevelCode_12);
    }
#line 3153 "compile_target_code.m"
    {
#line 3153 "compile_target_code.m"
      libs__globals__get_target_2_p_0(backend_libs__compile_target_code__Globals_4, &backend_libs__compile_target_code__Target_13);
    }
#line 3164 "compile_target_code.m"
    if ((backend_libs__compile_target_code__FileType_5 == (MR_Integer) 0))
#line 3187 "compile_target_code.m"
      {
#line 3169 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_10, (MR_String) "shared") == 0);
#line 3187 "compile_target_code.m"
        if (backend_libs__compile_target_code__succeeded)
#line 3180 "compile_target_code.m"
          {
#line 3173 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LinkWithPicObjExt_8, backend_libs__compile_target_code__ObjExt_9) == 0);
#line 3174 "compile_target_code.m"
            if (!(backend_libs__compile_target_code__succeeded))
#line 3174 "compile_target_code.m"
              {
#line 3174 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__HighLevelCode_12 == (MR_Integer) 1);
#line 3174 "compile_target_code.m"
                if (!(backend_libs__compile_target_code__succeeded))
#line 3174 "compile_target_code.m"
                  {
#line 3175 "compile_target_code.m"
                    backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__GCCGlobals_11 == (MR_Integer) 0);
#line 3174 "compile_target_code.m"
                    if (!(backend_libs__compile_target_code__succeeded))
#line 3176 "compile_target_code.m"
                      {
#line 3176 "compile_target_code.m"
                        backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__Target_13 == (MR_Integer) 0);
#line 3176 "compile_target_code.m"
                        backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
#line 3176 "compile_target_code.m"
                      }
#line 3174 "compile_target_code.m"
                  }
#line 3174 "compile_target_code.m"
              }
#line 3180 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 3179 "compile_target_code.m"
              *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 2;
#line 3180 "compile_target_code.m"
            else
#line 3184 "compile_target_code.m"
              {
#line 3181 "compile_target_code.m"
                backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LinkWithPicObjExt_8, backend_libs__compile_target_code__PicObjExt_7) == 0);
#line 3184 "compile_target_code.m"
                if (backend_libs__compile_target_code__succeeded)
#line 3183 "compile_target_code.m"
                  *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 0;
#line 3184 "compile_target_code.m"
                else
#line 3185 "compile_target_code.m"
                  *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 1;
#line 3184 "compile_target_code.m"
              }
#line 3180 "compile_target_code.m"
          }
#line 3187 "compile_target_code.m"
        else
#line 3189 "compile_target_code.m"
          {
#line 3187 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MercuryLinkage_10, (MR_String) "static") == 0);
#line 3189 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 3188 "compile_target_code.m"
              *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 2;
#line 3189 "compile_target_code.m"
            else
#line 3191 "compile_target_code.m"
              {
#line 3191 "compile_target_code.m"
                MR_String backend_libs__compile_target_code__V_22_22;

#line 3192 "compile_target_code.m"
                {
#line 3192 "compile_target_code.m"
                  backend_libs__compile_target_code__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "unknown linkage ", backend_libs__compile_target_code__MercuryLinkage_10);
                }
#line 3191 "compile_target_code.m"
                {
#line 3191 "compile_target_code.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.get_object_code_type\'/3", backend_libs__compile_target_code__V_22_22);
#line 3191 "compile_target_code.m"
                  return;
                }
#line 3191 "compile_target_code.m"
              }
#line 3189 "compile_target_code.m"
          }
#line 3187 "compile_target_code.m"
      }
#line 3164 "compile_target_code.m"
    else
#line 3164 "compile_target_code.m"
      if ((backend_libs__compile_target_code__FileType_5 == (MR_Integer) 2))
#line 3166 "compile_target_code.m"
        {
#line 3166 "compile_target_code.m"
          backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__PicObjExt_7, backend_libs__compile_target_code__ObjExt_9) == 0);
#line 3166 "compile_target_code.m"
          if (backend_libs__compile_target_code__succeeded)
#line 3166 "compile_target_code.m"
            *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 2;
#line 3166 "compile_target_code.m"
          else
#line 3166 "compile_target_code.m"
            *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 0;
#line 3166 "compile_target_code.m"
        }
#line 3164 "compile_target_code.m"
      else
#line 3163 "compile_target_code.m"
        *backend_libs__compile_target_code__ObjectCodeType_6 = (MR_Integer) 2;
#line 3144 "compile_target_code.m"
  }
#line 163 "compile_target_code.m"
}

#line 156 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__shared_libraries_supported_2_p_0(
#line 156 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_3,
#line 156 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Supported_4)
#line 156 "compile_target_code.m"
{
#line 2641 "compile_target_code.m"
  {
#line 2641 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2641 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__LibExt_5;
#line 2641 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SharedLibExt_6;

#line 2644 "compile_target_code.m"
    {
#line 2644 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 569, &backend_libs__compile_target_code__LibExt_5);
    }
#line 2645 "compile_target_code.m"
    {
#line 2645 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_3, (MR_Integer) 568, &backend_libs__compile_target_code__SharedLibExt_6);
    }
#line 2647 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__LibExt_5, backend_libs__compile_target_code__SharedLibExt_6) == 0);
#line 2647 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
#line 2647 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 2647 "compile_target_code.m"
      *backend_libs__compile_target_code__Supported_4 = (MR_Integer) 1;
#line 2647 "compile_target_code.m"
    else
#line 2647 "compile_target_code.m"
      *backend_libs__compile_target_code__Supported_4 = (MR_Integer) 0;
#line 2641 "compile_target_code.m"
  }
#line 156 "compile_target_code.m"
}

#line 1385 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0_1(
#line 1385 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1385 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 1385 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2)
#line 1385 "compile_target_code.m"
{
#line 1385 "compile_target_code.m"
  {
#line 1385 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 1385 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__2_44;

#line 1385 "compile_target_code.m"
    {
#line 1385 "compile_target_code.m"
      backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1385__1_2_p_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv0_HeadVar__2_44);
    }
#line 1385 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_44));
#line 1385 "compile_target_code.m"
  }
#line 1385 "compile_target_code.m"
}

#line 148 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0(
#line 148 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Modules_7,
#line 148 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ExtraObjFiles_8,
#line 148 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 148 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
#line 148 "compile_target_code.m"
{
#line 1353 "compile_target_code.m"
  {
#line 1353 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1353 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OutputFileName0_12;
#line 1353 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OutputFileName_15;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MainModuleName_16;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__CompileToSharedLib_17;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TargetType_18;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__PIC_19;
#line 1353 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Obj_20;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__OutputStream_21;
#line 1353 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ObjectsList_22;

#line 1354 "compile_target_code.m"
    {
#line 1354 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 533, &backend_libs__compile_target_code__OutputFileName0_12);
    }
#line 1369 "compile_target_code.m"
    {
#line 1369 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 99, &backend_libs__compile_target_code__CompileToSharedLib_17);
    }
#line 1374 "compile_target_code.m"
    if ((backend_libs__compile_target_code__CompileToSharedLib_17 == (MR_Integer) 0))
#line 1376 "compile_target_code.m"
      backend_libs__compile_target_code__TargetType_18 = (MR_Integer) 0;
#line 1374 "compile_target_code.m"
    else
#line 1373 "compile_target_code.m"
      backend_libs__compile_target_code__TargetType_18 = (MR_Integer) 2;
#line 1378 "compile_target_code.m"
    {
#line 1378 "compile_target_code.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__TargetType_18, &backend_libs__compile_target_code__PIC_19);
    }
#line 3281 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PIC_19 == (MR_Integer) 1))
#line 3285 "compile_target_code.m"
      {
#line 3286 "compile_target_code.m"
        {
#line 3286 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 506, &backend_libs__compile_target_code__Obj_20);
        }
#line 3285 "compile_target_code.m"
      }
#line 3281 "compile_target_code.m"
    else
#line 3281 "compile_target_code.m"
      if ((backend_libs__compile_target_code__PIC_19 == (MR_Integer) 2))
#line 3279 "compile_target_code.m"
        {
#line 3280 "compile_target_code.m"
          {
#line 3280 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 504, &backend_libs__compile_target_code__Obj_20);
          }
#line 3279 "compile_target_code.m"
        }
#line 3281 "compile_target_code.m"
      else
#line 3282 "compile_target_code.m"
        {
#line 3283 "compile_target_code.m"
          {
#line 3283 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 505, &backend_libs__compile_target_code__Obj_20);
          }
#line 3282 "compile_target_code.m"
        }
#line 1381 "compile_target_code.m"
    {
#line 1381 "compile_target_code.m"
      mercury__io__output_stream_3_p_0(&backend_libs__compile_target_code__OutputStream_21);
    }
#line 1355 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__OutputFileName0_12, (MR_String) "") == 0);
#line 15582 "backend_libs.compile_target_code.c"
    if (backend_libs__compile_target_code__succeeded)
#line 15584 "backend_libs.compile_target_code.c"
      {
#line 15586 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__Module_73;
#line 15588 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__Modules_74;
#line 15590 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__FileName_76;
#line 15592 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__FileNames_77;
#line 15594 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__ModuleName_79;
#line 15596 "backend_libs.compile_target_code.c"
        MR_String backend_libs__compile_target_code__V_82_82;

#line 1359 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Modules_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1360 "compile_target_code.m"
          {
#line 1361 "compile_target_code.m"
            {
#line 1361 "compile_target_code.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.link_module_list\'/6", (MR_String) "no modules");
#line 1361 "compile_target_code.m"
              return;
            }
#line 1360 "compile_target_code.m"
          }
#line 1359 "compile_target_code.m"
        else
#line 1357 "compile_target_code.m"
          {
#line 1357 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_14_14;

#line 1357 "compile_target_code.m"
            backend_libs__compile_target_code__OutputFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 0)));
#line 1357 "compile_target_code.m"
            backend_libs__compile_target_code__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 1)));
#line 1357 "compile_target_code.m"
          }
#line 3251 "compile_target_code.m"
        backend_libs__compile_target_code__Module_73 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 0)));
#line 3251 "compile_target_code.m"
        backend_libs__compile_target_code__Modules_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__Modules_7, (MR_Integer) 1)));
#line 3253 "compile_target_code.m"
        {
#line 3253 "compile_target_code.m"
          backend_libs__compile_target_code__V_82_82 = mercury__dir__det_basename_1_f_0(backend_libs__compile_target_code__Module_73);
        }
#line 3253 "compile_target_code.m"
        {
#line 3253 "compile_target_code.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__V_82_82, &backend_libs__compile_target_code__ModuleName_79);
        }
#line 3254 "compile_target_code.m"
        {
#line 3254 "compile_target_code.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ModuleName_79, backend_libs__compile_target_code__Obj_20, (MR_Integer) 1, &backend_libs__compile_target_code__FileName_76);
        }
#line 3256 "compile_target_code.m"
        {
#line 3256 "compile_target_code.m"
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Modules_74, backend_libs__compile_target_code__Obj_20, &backend_libs__compile_target_code__FileNames_77);
        }
#line 3252 "compile_target_code.m"
        {
#line 3252 "compile_target_code.m"
          backend_libs__compile_target_code__ObjectsList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3252 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ObjectsList_22, 0) = ((MR_Box) (backend_libs__compile_target_code__FileName_76));
#line 3252 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ObjectsList_22, 1) = ((MR_Box) (backend_libs__compile_target_code__FileNames_77));
#line 3252 "compile_target_code.m"
        }
#line 15659 "backend_libs.compile_target_code.c"
      }
#line 15661 "backend_libs.compile_target_code.c"
    else
#line 15663 "backend_libs.compile_target_code.c"
      {
#line 1364 "compile_target_code.m"
        backend_libs__compile_target_code__OutputFileName_15 = backend_libs__compile_target_code__OutputFileName0_12;
#line 1382 "compile_target_code.m"
        {
#line 1382 "compile_target_code.m"
          backend_libs__compile_target_code__join_module_list_6_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Modules_7, backend_libs__compile_target_code__Obj_20, &backend_libs__compile_target_code__ObjectsList_22);
        }
#line 15672 "backend_libs.compile_target_code.c"
      }
#line 1367 "compile_target_code.m"
    {
#line 1367 "compile_target_code.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(backend_libs__compile_target_code__OutputFileName_15, &backend_libs__compile_target_code__MainModuleName_16);
    }
#line 15679 "backend_libs.compile_target_code.c"
    if ((backend_libs__compile_target_code__TargetType_18 == (MR_Integer) 0))
#line 15681 "backend_libs.compile_target_code.c"
      {
#line 15683 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__ModuleNames_25;
#line 15685 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__InitObjResult_27;

#line 1385 "compile_target_code.m"
        {
#line 1385 "compile_target_code.m"
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[2], backend_libs__compile_target_code__Modules_7, &backend_libs__compile_target_code__ModuleNames_25);
        }
#line 1391 "compile_target_code.m"
        {
#line 1391 "compile_target_code.m"
          backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__OutputStream_21, (MR_Integer) 1, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__ModuleNames_25, &backend_libs__compile_target_code__InitObjResult_27);
        }
#line 1409 "compile_target_code.m"
        if ((backend_libs__compile_target_code__InitObjResult_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "compile_target_code.m"
          *backend_libs__compile_target_code__Succeeded_10 = (MR_Integer) 0;
#line 1409 "compile_target_code.m"
        else
#line 1398 "compile_target_code.m"
          {
#line 1398 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__TypeCtorInfo_54_54;
#line 1398 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__InitObjFileName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__InitObjResult_27, (MR_Integer) 0)));
#line 1398 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__ExtraLinkObjectsList_29;
#line 1398 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__AllObjects0_30;
#line 1398 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__AllObjects_31;
#line 1398 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_48_48;

#line 1399 "compile_target_code.m"
            {
#line 1399 "compile_target_code.m"
              libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 541, &backend_libs__compile_target_code__ExtraLinkObjectsList_29);
            }
#line 15724 "backend_libs.compile_target_code.c"
            backend_libs__compile_target_code__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1401 "compile_target_code.m"
            {
#line 1401 "compile_target_code.m"
              backend_libs__compile_target_code__V_48_48 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_54, backend_libs__compile_target_code__ExtraLinkObjectsList_29, backend_libs__compile_target_code__ExtraObjFiles_8);
            }
#line 1401 "compile_target_code.m"
            {
#line 1401 "compile_target_code.m"
              backend_libs__compile_target_code__AllObjects0_30 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_54, backend_libs__compile_target_code__ObjectsList_22, backend_libs__compile_target_code__V_48_48);
            }
#line 1402 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__InitObjFileName_28, (MR_String) "") == 0);
#line 1404 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 1403 "compile_target_code.m"
              backend_libs__compile_target_code__AllObjects_31 = backend_libs__compile_target_code__AllObjects0_30;
#line 1404 "compile_target_code.m"
            else
#line 1405 "compile_target_code.m"
              {
#line 1405 "compile_target_code.m"
                backend_libs__compile_target_code__AllObjects_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "compile_target_code.m"
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__AllObjects_31, 0) = ((MR_Box) (backend_libs__compile_target_code__InitObjFileName_28));
#line 1405 "compile_target_code.m"
                MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__AllObjects_31, 1) = ((MR_Box) (backend_libs__compile_target_code__AllObjects0_30));
#line 1405 "compile_target_code.m"
              }
#line 1407 "compile_target_code.m"
            {
#line 1407 "compile_target_code.m"
              backend_libs__compile_target_code__link_8_p_0(backend_libs__compile_target_code__OutputStream_21, backend_libs__compile_target_code__TargetType_18, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__AllObjects_31, backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Succeeded_10);
#line 1407 "compile_target_code.m"
              return;
            }
#line 1398 "compile_target_code.m"
          }
#line 15763 "backend_libs.compile_target_code.c"
      }
#line 15765 "backend_libs.compile_target_code.c"
    else
#line 15767 "backend_libs.compile_target_code.c"
      {
#line 15769 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__TypeCtorInfo_54_96;
#line 15771 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__ExtraLinkObjectsList_90;
#line 15773 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__AllObjects_92;
#line 15775 "backend_libs.compile_target_code.c"
        MR_Word backend_libs__compile_target_code__V_95_95;

#line 1399 "compile_target_code.m"
        {
#line 1399 "compile_target_code.m"
          libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 541, &backend_libs__compile_target_code__ExtraLinkObjectsList_90);
        }
#line 15783 "backend_libs.compile_target_code.c"
        backend_libs__compile_target_code__TypeCtorInfo_54_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1401 "compile_target_code.m"
        {
#line 1401 "compile_target_code.m"
          backend_libs__compile_target_code__V_95_95 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_96, backend_libs__compile_target_code__ExtraLinkObjectsList_90, backend_libs__compile_target_code__ExtraObjFiles_8);
        }
#line 1401 "compile_target_code.m"
        {
#line 1401 "compile_target_code.m"
          backend_libs__compile_target_code__AllObjects_92 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_54_96, backend_libs__compile_target_code__ObjectsList_22, backend_libs__compile_target_code__V_95_95);
        }
#line 1407 "compile_target_code.m"
        {
#line 1407 "compile_target_code.m"
          backend_libs__compile_target_code__link_8_p_0(backend_libs__compile_target_code__OutputStream_21, backend_libs__compile_target_code__TargetType_18, backend_libs__compile_target_code__MainModuleName_16, backend_libs__compile_target_code__AllObjects_92, backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__Succeeded_10);
#line 1407 "compile_target_code.m"
          return;
        }
#line 15802 "backend_libs.compile_target_code.c"
      }
#line 1353 "compile_target_code.m"
  }
#line 148 "compile_target_code.m"
}

#line 137 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(
#line 137 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 137 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_10,
#line 137 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_11,
#line 137 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_12,
#line 137 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_13,
#line 137 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__MadeSymlinkOrCopy_14)
#line 137 "compile_target_code.m"
{
#line 2557 "compile_target_code.m"
  {
#line 2557 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 2557 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_16;

#line 2558 "compile_target_code.m"
    {
#line 2558 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_12, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_16);
    }
#line 2611 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseGradeSubdirs_16 == (MR_Integer) 0))
#line 2612 "compile_target_code.m"
      {
#line 2613 "compile_target_code.m"
        *backend_libs__compile_target_code__Succeeded_13 = (MR_Integer) 1;
#line 2614 "compile_target_code.m"
        *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 0;
#line 2612 "compile_target_code.m"
      }
#line 2611 "compile_target_code.m"
    else
#line 2560 "compile_target_code.m"
      {
#line 2560 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__Ext_17;
#line 2560 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__OutputFileName_18;
#line 2560 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__NoSubdirGlobals0_19;
#line 2560 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__NoSubdirGlobals_20;
#line 2560 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__UserDirFileName_21;
#line 2560 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__SameTimestamp_22;
#line 2560 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_31_31;

#line 1786 "compile_target_code.m"
        if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 3))
#line 1801 "compile_target_code.m"
          {
#line 1802 "compile_target_code.m"
            backend_libs__compile_target_code__Ext_17 = (MR_String) ".exe";
#line 1803 "compile_target_code.m"
            {
#line 1803 "compile_target_code.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
            }
#line 1801 "compile_target_code.m"
          }
#line 1786 "compile_target_code.m"
        else
#line 1786 "compile_target_code.m"
          if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 4))
#line 1806 "compile_target_code.m"
            {
#line 1807 "compile_target_code.m"
              backend_libs__compile_target_code__Ext_17 = (MR_String) ".dll";
#line 1808 "compile_target_code.m"
              {
#line 1808 "compile_target_code.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
              }
#line 1806 "compile_target_code.m"
            }
#line 1786 "compile_target_code.m"
          else
#line 1786 "compile_target_code.m"
            if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 8))
#line 1837 "compile_target_code.m"
              {
#line 1838 "compile_target_code.m"
                backend_libs__compile_target_code__Ext_17 = (MR_String) ".beams";
#line 1839 "compile_target_code.m"
                {
#line 1839 "compile_target_code.m"
                  parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_12, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                }
#line 1837 "compile_target_code.m"
              }
#line 1786 "compile_target_code.m"
            else
#line 1786 "compile_target_code.m"
              if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 0))
#line 1786 "compile_target_code.m"
                {
#line 1787 "compile_target_code.m"
                  {
#line 1787 "compile_target_code.m"
                    libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_12, (MR_Integer) 570, &backend_libs__compile_target_code__Ext_17);
                  }
#line 1788 "compile_target_code.m"
                  {
#line 1788 "compile_target_code.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                  }
#line 1786 "compile_target_code.m"
                }
#line 1786 "compile_target_code.m"
              else
#line 1786 "compile_target_code.m"
                if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 6))
#line 1832 "compile_target_code.m"
                  {
#line 1833 "compile_target_code.m"
                    backend_libs__compile_target_code__Ext_17 = (MR_String) ".jar";
#line 1834 "compile_target_code.m"
                    {
#line 1834 "compile_target_code.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                    }
#line 1832 "compile_target_code.m"
                  }
#line 1786 "compile_target_code.m"
                else
#line 1786 "compile_target_code.m"
                  if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 2))
#line 1796 "compile_target_code.m"
                    {
#line 1797 "compile_target_code.m"
                      {
#line 1797 "compile_target_code.m"
                        libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_12, (MR_Integer) 568, &backend_libs__compile_target_code__Ext_17);
                      }
#line 1798 "compile_target_code.m"
                      {
#line 1798 "compile_target_code.m"
                        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_12, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                      }
#line 1796 "compile_target_code.m"
                    }
#line 1786 "compile_target_code.m"
                  else
#line 1786 "compile_target_code.m"
                    if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 1))
#line 1791 "compile_target_code.m"
                      {
#line 1792 "compile_target_code.m"
                        {
#line 1792 "compile_target_code.m"
                          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_12, (MR_Integer) 569, &backend_libs__compile_target_code__Ext_17);
                        }
#line 1793 "compile_target_code.m"
                        {
#line 1793 "compile_target_code.m"
                          parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_12, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                        }
#line 1791 "compile_target_code.m"
                      }
#line 1786 "compile_target_code.m"
                    else
#line 1813 "compile_target_code.m"
                      {
#line 1813 "compile_target_code.m"
                        MR_Word backend_libs__compile_target_code__TargetEnvType_55;

#line 1815 "compile_target_code.m"
                        {
#line 1815 "compile_target_code.m"
                          libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_12, &backend_libs__compile_target_code__TargetEnvType_55);
                        }
#line 1822 "compile_target_code.m"
                        if ((((backend_libs__compile_target_code__TargetEnvType_55 == (MR_Integer) 4)) || ((backend_libs__compile_target_code__TargetEnvType_55 == (MR_Integer) 3))))
#line 1821 "compile_target_code.m"
                          backend_libs__compile_target_code__Ext_17 = (MR_String) ".bat";
#line 1822 "compile_target_code.m"
                        else
#line 1827 "compile_target_code.m"
                          backend_libs__compile_target_code__Ext_17 = (MR_String) "";
#line 1829 "compile_target_code.m"
                        {
#line 1829 "compile_target_code.m"
                          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_18);
                        }
#line 1813 "compile_target_code.m"
                      }
#line 2564 "compile_target_code.m"
        backend_libs__compile_target_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_6[0]);
#line 2564 "compile_target_code.m"
        {
#line 2564 "compile_target_code.m"
          libs__globals__set_option_4_p_0((MR_Integer) 640, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__Globals_12, &backend_libs__compile_target_code__NoSubdirGlobals0_19);
        }
#line 2566 "compile_target_code.m"
        {
#line 2566 "compile_target_code.m"
          libs__globals__set_option_4_p_0((MR_Integer) 641, backend_libs__compile_target_code__V_31_31, backend_libs__compile_target_code__NoSubdirGlobals0_19, &backend_libs__compile_target_code__NoSubdirGlobals_20);
        }
#line 2578 "compile_target_code.m"
        if ((((((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 8)) || ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 2)))) || ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 1))))
#line 2582 "compile_target_code.m"
          {
#line 2583 "compile_target_code.m"
            {
#line 2583 "compile_target_code.m"
              parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__NoSubdirGlobals_20, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_21);
            }
#line 2582 "compile_target_code.m"
          }
#line 2578 "compile_target_code.m"
        else
#line 2575 "compile_target_code.m"
          {
#line 2576 "compile_target_code.m"
            {
#line 2576 "compile_target_code.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__NoSubdirGlobals_20, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Ext_17, (MR_Integer) 1, &backend_libs__compile_target_code__UserDirFileName_21);
            }
#line 2575 "compile_target_code.m"
          }
#line 2587 "compile_target_code.m"
        {
#line 2587 "compile_target_code.m"
          backend_libs__compile_target_code__same_timestamp_5_p_0(backend_libs__compile_target_code__OutputFileName_18, backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__SameTimestamp_22);
        }
#line 2592 "compile_target_code.m"
        if ((backend_libs__compile_target_code__SameTimestamp_22 == (MR_Integer) 0))
#line 2593 "compile_target_code.m"
          {
#line 2593 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__OutputStream_23;
#line 2596 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_24_24;
#line 2608 "compile_target_code.m"
            MR_Word backend_libs__compile_target_code__V_25_25;

#line 2594 "compile_target_code.m"
            {
#line 2594 "compile_target_code.m"
              mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__ErrorStream_9, &backend_libs__compile_target_code__OutputStream_23);
            }
#line 2596 "compile_target_code.m"
            {
#line 2596 "compile_target_code.m"
              mercury__io__remove_file_recursively_4_p_0(backend_libs__compile_target_code__UserDirFileName_21, &backend_libs__compile_target_code__V_24_24);
            }
#line 2601 "compile_target_code.m"
            backend_libs__compile_target_code__succeeded = (backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 8);
#line 2604 "compile_target_code.m"
            if (backend_libs__compile_target_code__succeeded)
#line 2602 "compile_target_code.m"
              {
#line 2602 "compile_target_code.m"
                parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__OutputFileName_18, backend_libs__compile_target_code__UserDirFileName_21, backend_libs__compile_target_code__Succeeded_13);
              }
#line 2604 "compile_target_code.m"
            else
#line 2605 "compile_target_code.m"
              {
#line 2605 "compile_target_code.m"
                parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(backend_libs__compile_target_code__Globals_12, backend_libs__compile_target_code__OutputFileName_18, backend_libs__compile_target_code__UserDirFileName_21, backend_libs__compile_target_code__Succeeded_13);
              }
#line 2608 "compile_target_code.m"
            {
#line 2608 "compile_target_code.m"
              mercury__io__set_output_stream_4_p_0(backend_libs__compile_target_code__OutputStream_23, &backend_libs__compile_target_code__V_25_25);
            }
#line 2609 "compile_target_code.m"
            *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 1;
#line 2593 "compile_target_code.m"
          }
#line 2592 "compile_target_code.m"
        else
#line 2589 "compile_target_code.m"
          {
#line 2590 "compile_target_code.m"
            *backend_libs__compile_target_code__Succeeded_13 = (MR_Integer) 1;
#line 2591 "compile_target_code.m"
            *backend_libs__compile_target_code__MadeSymlinkOrCopy_14 = (MR_Integer) 0;
#line 2589 "compile_target_code.m"
          }
#line 2560 "compile_target_code.m"
      }
#line 2557 "compile_target_code.m"
  }
#line 137 "compile_target_code.m"
}

#line 127 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__link_8_p_0(
#line 127 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 127 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__LinkTargetType_10,
#line 127 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_11,
#line 127 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ObjectsList_12,
#line 127 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 127 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 127 "compile_target_code.m"
{
#line 1729 "compile_target_code.m"
  {
#line 1729 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1729 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 1729 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Stats_17;
#line 1729 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__OutputFileName_19;
#line 1729 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__LinkSucceeded_20;

#line 1730 "compile_target_code.m"
    {
#line 1730 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 1731 "compile_target_code.m"
    {
#line 1731 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 54, &backend_libs__compile_target_code__Stats_17);
    }
#line 1733 "compile_target_code.m"
    {
#line 1733 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Linking...\n");
    }
#line 1786 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 3))
#line 1801 "compile_target_code.m"
      {
#line 1803 "compile_target_code.m"
        {
#line 1803 "compile_target_code.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, (MR_String) ".exe", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
        }
#line 1801 "compile_target_code.m"
      }
#line 1786 "compile_target_code.m"
    else
#line 1786 "compile_target_code.m"
      if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 4))
#line 1806 "compile_target_code.m"
        {
#line 1808 "compile_target_code.m"
          {
#line 1808 "compile_target_code.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, (MR_String) ".dll", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
          }
#line 1806 "compile_target_code.m"
        }
#line 1786 "compile_target_code.m"
      else
#line 1786 "compile_target_code.m"
        if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 8))
#line 1837 "compile_target_code.m"
          {
#line 1839 "compile_target_code.m"
            {
#line 1839 "compile_target_code.m"
              parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_13, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, (MR_String) ".beams", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
            }
#line 1837 "compile_target_code.m"
          }
#line 1786 "compile_target_code.m"
        else
#line 1786 "compile_target_code.m"
          if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 0))
#line 1786 "compile_target_code.m"
            {
#line 1786 "compile_target_code.m"
              MR_String backend_libs__compile_target_code___Ext_74;

#line 1787 "compile_target_code.m"
              {
#line 1787 "compile_target_code.m"
                libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 570, &backend_libs__compile_target_code___Ext_74);
              }
#line 1788 "compile_target_code.m"
              {
#line 1788 "compile_target_code.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code___Ext_74, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
              }
#line 1786 "compile_target_code.m"
            }
#line 1786 "compile_target_code.m"
          else
#line 1786 "compile_target_code.m"
            if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 6))
#line 1832 "compile_target_code.m"
              {
#line 1834 "compile_target_code.m"
                {
#line 1834 "compile_target_code.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, (MR_String) ".jar", (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
                }
#line 1832 "compile_target_code.m"
              }
#line 1786 "compile_target_code.m"
            else
#line 1786 "compile_target_code.m"
              if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 2))
#line 1796 "compile_target_code.m"
                {
#line 1796 "compile_target_code.m"
                  MR_String backend_libs__compile_target_code___Ext_76;

#line 1797 "compile_target_code.m"
                  {
#line 1797 "compile_target_code.m"
                    libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 568, &backend_libs__compile_target_code___Ext_76);
                  }
#line 1798 "compile_target_code.m"
                  {
#line 1798 "compile_target_code.m"
                    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_13, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code___Ext_76, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
                  }
#line 1796 "compile_target_code.m"
                }
#line 1786 "compile_target_code.m"
              else
#line 1786 "compile_target_code.m"
                if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 1))
#line 1791 "compile_target_code.m"
                  {
#line 1791 "compile_target_code.m"
                    MR_String backend_libs__compile_target_code___Ext_77;

#line 1792 "compile_target_code.m"
                    {
#line 1792 "compile_target_code.m"
                      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 569, &backend_libs__compile_target_code___Ext_77);
                    }
#line 1793 "compile_target_code.m"
                    {
#line 1793 "compile_target_code.m"
                      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(backend_libs__compile_target_code__Globals_13, (MR_String) "lib", backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code___Ext_77, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
                    }
#line 1791 "compile_target_code.m"
                  }
#line 1786 "compile_target_code.m"
                else
#line 1813 "compile_target_code.m"
                  {
#line 1813 "compile_target_code.m"
                    MR_Word backend_libs__compile_target_code__TargetEnvType_48;
#line 1813 "compile_target_code.m"
                    MR_String backend_libs__compile_target_code___Ext_73;

#line 1815 "compile_target_code.m"
                    {
#line 1815 "compile_target_code.m"
                      libs__globals__get_target_env_type_2_p_0(backend_libs__compile_target_code__Globals_13, &backend_libs__compile_target_code__TargetEnvType_48);
                    }
#line 1822 "compile_target_code.m"
                    if ((((backend_libs__compile_target_code__TargetEnvType_48 == (MR_Integer) 4)) || ((backend_libs__compile_target_code__TargetEnvType_48 == (MR_Integer) 3))))
#line 1821 "compile_target_code.m"
                      backend_libs__compile_target_code___Ext_73 = (MR_String) ".bat";
#line 1822 "compile_target_code.m"
                    else
#line 1827 "compile_target_code.m"
                      backend_libs__compile_target_code___Ext_73 = (MR_String) "";
#line 1829 "compile_target_code.m"
                    {
#line 1829 "compile_target_code.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code___Ext_73, (MR_Integer) 0, &backend_libs__compile_target_code__OutputFileName_19);
                    }
#line 1813 "compile_target_code.m"
                  }
#line 1740 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 8))
#line 1767 "compile_target_code.m"
      {
#line 1767 "compile_target_code.m"
        backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
      }
#line 1740 "compile_target_code.m"
    else
#line 1740 "compile_target_code.m"
      if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 7))
#line 1764 "compile_target_code.m"
        {
#line 1764 "compile_target_code.m"
          parse_tree__module_cmds__create_erlang_shell_script_5_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, &backend_libs__compile_target_code__LinkSucceeded_20);
        }
#line 1740 "compile_target_code.m"
      else
#line 1740 "compile_target_code.m"
        if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 0))
#line 1738 "compile_target_code.m"
          {
#line 1738 "compile_target_code.m"
            backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__LinkTargetType_10, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
          }
#line 1740 "compile_target_code.m"
        else
#line 1740 "compile_target_code.m"
          if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 6))
#line 1760 "compile_target_code.m"
            {
#line 1760 "compile_target_code.m"
              backend_libs__compile_target_code__create_java_archive_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
            }
#line 1740 "compile_target_code.m"
          else
#line 1740 "compile_target_code.m"
            if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 5))
#line 1757 "compile_target_code.m"
              {
#line 1757 "compile_target_code.m"
                parse_tree__module_cmds__create_java_shell_script_5_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ModuleName_11, &backend_libs__compile_target_code__LinkSucceeded_20);
              }
#line 1740 "compile_target_code.m"
            else
#line 1740 "compile_target_code.m"
              if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 2))
#line 1746 "compile_target_code.m"
                {
#line 1746 "compile_target_code.m"
                  backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__LinkTargetType_10, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
                }
#line 1740 "compile_target_code.m"
              else
#line 1740 "compile_target_code.m"
                if ((backend_libs__compile_target_code__LinkTargetType_10 == (MR_Integer) 1))
#line 1741 "compile_target_code.m"
                  {
#line 1742 "compile_target_code.m"
                    {
#line 1742 "compile_target_code.m"
                      backend_libs__compile_target_code__create_archive_8_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__OutputFileName_19, (MR_Integer) 1, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
                    }
#line 1741 "compile_target_code.m"
                  }
#line 1740 "compile_target_code.m"
                else
#line 1753 "compile_target_code.m"
                  {
#line 1753 "compile_target_code.m"
                    backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__LinkTargetType_10, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__OutputFileName_19, backend_libs__compile_target_code__ObjectsList_12, &backend_libs__compile_target_code__LinkSucceeded_20);
                  }
#line 1770 "compile_target_code.m"
    {
#line 1770 "compile_target_code.m"
      libs__file_util__maybe_report_stats_3_p_0(backend_libs__compile_target_code__Stats_17);
    }
#line 1775 "compile_target_code.m"
    if ((backend_libs__compile_target_code__LinkSucceeded_20 == (MR_Integer) 0))
#line 1777 "compile_target_code.m"
      *backend_libs__compile_target_code__Succeeded_14 = (MR_Integer) 0;
#line 1775 "compile_target_code.m"
    else
#line 1773 "compile_target_code.m"
      {
#line 1773 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code___MadeSymlinkOrCopy_21;

#line 1773 "compile_target_code.m"
        {
#line 1773 "compile_target_code.m"
          backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__LinkTargetType_10, backend_libs__compile_target_code__ModuleName_11, backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__Succeeded_14, &backend_libs__compile_target_code___MadeSymlinkOrCopy_21);
        }
#line 1773 "compile_target_code.m"
      }
#line 1729 "compile_target_code.m"
  }
#line 127 "compile_target_code.m"
}

#line 109 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_erlang_program_init_file_7_p_0(
#line 109 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 109 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 109 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_10,
#line 109 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_11,
#line 109 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_12)
#line 109 "compile_target_code.m"
{
#line 1475 "compile_target_code.m"
  {
#line 1475 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MustCompile_14;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeStdLibDir_15;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__GradeDir_16;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__StdInitFileNames_18;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SourceDebugInitFileNames_19;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangModuleName_21;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ModuleNameStr_22;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ModuleNameOption_23;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInitErl_24;
#line 1475 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeInitTargetFile_25;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InitObjFileName_26;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_47_47;
#line 1475 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_51_51;

#line 1476 "compile_target_code.m"
    {
#line 1476 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 619, &backend_libs__compile_target_code__MustCompile_14);
    }
#line 1478 "compile_target_code.m"
    {
#line 1478 "compile_target_code.m"
      libs__globals__lookup_maybe_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 548, &backend_libs__compile_target_code__MaybeStdLibDir_15);
    }
#line 1480 "compile_target_code.m"
    {
#line 1480 "compile_target_code.m"
      libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_8, &backend_libs__compile_target_code__GradeDir_16);
    }
#line 1489 "compile_target_code.m"
    if ((backend_libs__compile_target_code__MaybeStdLibDir_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "compile_target_code.m"
      {
#line 1491 "compile_target_code.m"
        backend_libs__compile_target_code__StdInitFileNames_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1492 "compile_target_code.m"
        backend_libs__compile_target_code__SourceDebugInitFileNames_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1490 "compile_target_code.m"
      }
#line 1489 "compile_target_code.m"
    else
#line 1482 "compile_target_code.m"
      {
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__StdLibDir_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeStdLibDir_15, (MR_Integer) 0)));
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_35_35;
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_36_36;
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_37_37;
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_41_41;
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_42_42;
#line 1482 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_43_43;

#line 1484 "compile_target_code.m"
        {
#line 1484 "compile_target_code.m"
          backend_libs__compile_target_code__V_37_37 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_17, (MR_String) "modules");
        }
#line 1484 "compile_target_code.m"
        {
#line 1484 "compile_target_code.m"
          backend_libs__compile_target_code__V_36_36 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_37_37, backend_libs__compile_target_code__GradeDir_16);
        }
#line 1484 "compile_target_code.m"
        {
#line 1484 "compile_target_code.m"
          backend_libs__compile_target_code__V_35_35 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_36_36, (MR_String) "mer_std.init");
        }
#line 1485 "compile_target_code.m"
        {
#line 1485 "compile_target_code.m"
          backend_libs__compile_target_code__StdInitFileNames_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_18, 0) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
#line 1485 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__StdInitFileNames_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1485 "compile_target_code.m"
        }
#line 1487 "compile_target_code.m"
        {
#line 1487 "compile_target_code.m"
          backend_libs__compile_target_code__V_43_43 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__StdLibDir_17, (MR_String) "modules");
        }
#line 1487 "compile_target_code.m"
        {
#line 1487 "compile_target_code.m"
          backend_libs__compile_target_code__V_42_42 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_43_43, backend_libs__compile_target_code__GradeDir_16);
        }
#line 1487 "compile_target_code.m"
        {
#line 1487 "compile_target_code.m"
          backend_libs__compile_target_code__V_41_41 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_42_42, (MR_String) "mer_ssdb.init");
        }
#line 1488 "compile_target_code.m"
        {
#line 1488 "compile_target_code.m"
          backend_libs__compile_target_code__SourceDebugInitFileNames_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_19, 0) = ((MR_Box) (backend_libs__compile_target_code__V_41_41));
#line 1488 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__SourceDebugInitFileNames_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "compile_target_code.m"
        }
#line 1482 "compile_target_code.m"
      }
#line 1498 "compile_target_code.m"
    {
#line 1498 "compile_target_code.m"
      backend_libs__compile_target_code__ErlangModuleName_21 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(backend_libs__compile_target_code__ModuleName_10);
    }
#line 1499 "compile_target_code.m"
    {
#line 1499 "compile_target_code.m"
      backend_libs__compile_target_code__V_47_47 = mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(backend_libs__compile_target_code__ErlangModuleName_21, (MR_String) "__");
    }
#line 1499 "compile_target_code.m"
    {
#line 1499 "compile_target_code.m"
      backend_libs__compile_target_code__ModuleNameStr_22 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__V_47_47, (MR_String) "_init");
    }
#line 1500 "compile_target_code.m"
    {
#line 1500 "compile_target_code.m"
      backend_libs__compile_target_code__V_51_51 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__ModuleNameStr_22);
    }
#line 1500 "compile_target_code.m"
    {
#line 1500 "compile_target_code.m"
      backend_libs__compile_target_code__ModuleNameOption_23 = mercury__string__f_43_43_2_f_0((MR_String) " -m ", backend_libs__compile_target_code__V_51_51);
    }
#line 1502 "compile_target_code.m"
    {
#line 1502 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 579, &backend_libs__compile_target_code__MkInitErl_24);
    }
#line 1503 "compile_target_code.m"
    {
#line 1503 "compile_target_code.m"
      backend_libs__compile_target_code__make_init_target_file_13_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MkInitErl_24, backend_libs__compile_target_code__ModuleName_10, backend_libs__compile_target_code__ModuleNames_11, (MR_String) ".erl", backend_libs__compile_target_code__StdInitFileNames_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__compile_target_code__SourceDebugInitFileNames_19, backend_libs__compile_target_code__ModuleNameOption_23, &backend_libs__compile_target_code__MaybeInitTargetFile_25);
    }
#line 1507 "compile_target_code.m"
    {
#line 1507 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ModuleName_10, (MR_String) "_init.beam", (MR_Integer) 0, &backend_libs__compile_target_code__InitObjFileName_26);
    }
#line 1514 "compile_target_code.m"
    {
#line 1514 "compile_target_code.m"
      backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__MaybeInitTargetFile_25, backend_libs__compile_target_code__MustCompile_14, backend_libs__compile_target_code__InitObjFileName_26, backend_libs__compile_target_code__Result_12);
#line 1514 "compile_target_code.m"
      return;
    }
#line 1475 "compile_target_code.m"
  }
#line 109 "compile_target_code.m"
}

#line 103 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_init_obj_file_7_p_0(
#line 103 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 103 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 103 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_10,
#line 103 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleNames_11,
#line 103 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Result_12)
#line 103 "compile_target_code.m"
{
#line 1417 "compile_target_code.m"
  {
#line 1417 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1417 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MustCompile_14;

#line 1418 "compile_target_code.m"
    {
#line 1418 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 619, &backend_libs__compile_target_code__MustCompile_14);
    }
#line 1419 "compile_target_code.m"
    {
#line 1419 "compile_target_code.m"
      backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MustCompile_14, backend_libs__compile_target_code__ModuleName_10, backend_libs__compile_target_code__ModuleNames_11, backend_libs__compile_target_code__Result_12);
#line 1419 "compile_target_code.m"
      return;
    }
#line 1417 "compile_target_code.m"
  }
#line 103 "compile_target_code.m"
}

#line 97 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_erlang_library_init_file_7_p_0(
#line 97 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 97 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 97 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_10,
#line 97 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__AllModules_11,
#line 97 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
#line 97 "compile_target_code.m"
{
#line 1220 "compile_target_code.m"
  {
#line 1220 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1220 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInit_14;

#line 1221 "compile_target_code.m"
    {
#line 1221 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 579, &backend_libs__compile_target_code__MkInit_14);
    }
#line 1222 "compile_target_code.m"
    {
#line 1222 "compile_target_code.m"
      backend_libs__compile_target_code__make_library_init_file_2_9_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MainModuleName_10, backend_libs__compile_target_code__AllModules_11, (MR_String) ".erl", backend_libs__compile_target_code__MkInit_14, backend_libs__compile_target_code__Succeeded_12);
#line 1222 "compile_target_code.m"
      return;
    }
#line 1220 "compile_target_code.m"
  }
#line 97 "compile_target_code.m"
}

#line 88 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0(
#line 88 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_8,
#line 88 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 88 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__MainModuleName_10,
#line 88 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__AllModules_11,
#line 88 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
#line 88 "compile_target_code.m"
{
#line 1214 "compile_target_code.m"
  {
#line 1214 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1214 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MkInit_14;

#line 1215 "compile_target_code.m"
    {
#line 1215 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_8, (MR_Integer) 578, &backend_libs__compile_target_code__MkInit_14);
    }
#line 1216 "compile_target_code.m"
    {
#line 1216 "compile_target_code.m"
      backend_libs__compile_target_code__make_library_init_file_2_9_p_0(backend_libs__compile_target_code__Globals_8, backend_libs__compile_target_code__ErrorStream_9, backend_libs__compile_target_code__MainModuleName_10, backend_libs__compile_target_code__AllModules_11, (MR_String) ".c", backend_libs__compile_target_code__MkInit_14, backend_libs__compile_target_code__Succeeded_12);
#line 1216 "compile_target_code.m"
      return;
    }
#line 1214 "compile_target_code.m"
  }
#line 88 "compile_target_code.m"
}

#line 1181 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
#line 1181 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 1181 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 1181 "compile_target_code.m"
{
#line 1181 "compile_target_code.m"
  {
#line 1181 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 1181 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 1181 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__2_53;

#line 1181 "compile_target_code.m"
    {
#line 1181 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_53 = backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1181__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 1181 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_53));
#line 1181 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 1181 "compile_target_code.m"
  }
#line 1181 "compile_target_code.m"
}

#line 80 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0(
#line 80 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_7,
#line 80 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__ErlangFile_8,
#line 80 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 80 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
#line 80 "compile_target_code.m"
{
#line 1151 "compile_target_code.m"
  {
#line 1151 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_88_88;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_12;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ErlangCompiler_13;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangFlagsList0_14;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangNativeCode_15;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangFlagsList1_17;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ErlangFlagsList_18;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ERLANGFLAGS_19;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Erlang_Incl_Dirs_20;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InclOpt_21;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseSubdirs_23;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_24;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FullArch_25;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DestDir_29;
#line 1151 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Command_30;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_49_49;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_50_50;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_75_75;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_76_76;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_78_78;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_79_79;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_80_80;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_81_81;
#line 1151 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_83_83;

#line 1152 "compile_target_code.m"
    {
#line 1152 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_12);
    }
#line 1153 "compile_target_code.m"
    {
#line 1153 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, (MR_String) "% Compiling \140");
    }
#line 1154 "compile_target_code.m"
    {
#line 1154 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, backend_libs__compile_target_code__ErlangFile_8);
    }
#line 1155 "compile_target_code.m"
    {
#line 1155 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_12, (MR_String) "\':\n");
    }
#line 1156 "compile_target_code.m"
    {
#line 1156 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 525, &backend_libs__compile_target_code__ErlangCompiler_13);
    }
#line 1157 "compile_target_code.m"
    {
#line 1157 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 527, &backend_libs__compile_target_code__ErlangFlagsList0_14);
    }
#line 1159 "compile_target_code.m"
    {
#line 1159 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 531, &backend_libs__compile_target_code__ErlangNativeCode_15);
    }
#line 1160 "compile_target_code.m"
    {
#line 1160 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 532, &backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16);
    }
#line 1165 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ErlangNativeCode_15 == (MR_Integer) 0))
#line 1167 "compile_target_code.m"
      backend_libs__compile_target_code__ErlangFlagsList1_17 = backend_libs__compile_target_code__ErlangFlagsList0_14;
#line 1165 "compile_target_code.m"
    else
#line 1163 "compile_target_code.m"
      {
#line 1164 "compile_target_code.m"
        {
#line 1164 "compile_target_code.m"
          backend_libs__compile_target_code__ErlangFlagsList1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList1_17, 0) = ((MR_Box) ((MR_String) "+native"));
#line 1164 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList1_17, 1) = ((MR_Box) (backend_libs__compile_target_code__ErlangFlagsList0_14));
#line 1164 "compile_target_code.m"
        }
#line 1163 "compile_target_code.m"
      }
#line 1173 "compile_target_code.m"
    if ((backend_libs__compile_target_code__ErlangInhibitTrivialWarnings_16 == (MR_Integer) 0))
#line 1175 "compile_target_code.m"
      backend_libs__compile_target_code__ErlangFlagsList_18 = backend_libs__compile_target_code__ErlangFlagsList1_17;
#line 1173 "compile_target_code.m"
    else
#line 1170 "compile_target_code.m"
      {
#line 1170 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_45_45;

#line 1172 "compile_target_code.m"
        {
#line 1172 "compile_target_code.m"
          backend_libs__compile_target_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_function"));
#line 1172 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 1) = ((MR_Box) (backend_libs__compile_target_code__ErlangFlagsList1_17));
#line 1172 "compile_target_code.m"
        }
#line 1171 "compile_target_code.m"
        {
#line 1171 "compile_target_code.m"
          backend_libs__compile_target_code__ErlangFlagsList_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList_18, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_vars"));
#line 1171 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ErlangFlagsList_18, 1) = ((MR_Box) (backend_libs__compile_target_code__V_45_45));
#line 1171 "compile_target_code.m"
        }
#line 1170 "compile_target_code.m"
      }
#line 1177 "compile_target_code.m"
    {
#line 1177 "compile_target_code.m"
      backend_libs__compile_target_code__ERLANGFLAGS_19 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__ErlangFlagsList_18);
    }
#line 1179 "compile_target_code.m"
    {
#line 1179 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 529, &backend_libs__compile_target_code__Erlang_Incl_Dirs_20);
    }
#line 16909 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_88_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1181 "compile_target_code.m"
    {
#line 1181 "compile_target_code.m"
      backend_libs__compile_target_code__V_50_50 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_88_88, (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0], (MR_Word) &backend_libs__compile_target_code_scalar_common_4[1], backend_libs__compile_target_code__Erlang_Incl_Dirs_20);
    }
#line 1181 "compile_target_code.m"
    {
#line 1181 "compile_target_code.m"
      backend_libs__compile_target_code__V_49_49 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_88_88, backend_libs__compile_target_code__V_50_50);
    }
#line 1181 "compile_target_code.m"
    {
#line 1181 "compile_target_code.m"
      backend_libs__compile_target_code__InclOpt_21 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_49_49);
    }
#line 1184 "compile_target_code.m"
    {
#line 1184 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_23);
    }
#line 1185 "compile_target_code.m"
    {
#line 1185 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_24);
    }
#line 1186 "compile_target_code.m"
    {
#line 1186 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 659, &backend_libs__compile_target_code__FullArch_25);
    }
#line 1201 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseSubdirs_23 == (MR_Integer) 0))
#line 1203 "compile_target_code.m"
      backend_libs__compile_target_code__DestDir_29 = (MR_String) "";
#line 1201 "compile_target_code.m"
    else
#line 1188 "compile_target_code.m"
      {
#line 1188 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__DirName_27;
#line 1188 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_73_73;
#line 1198 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_28_28;

#line 1193 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UseGradeSubdirs_24 == (MR_Integer) 0))
#line 1194 "compile_target_code.m"
          {
#line 1195 "compile_target_code.m"
            {
#line 1195 "compile_target_code.m"
              backend_libs__compile_target_code__DirName_27 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "beams");
            }
#line 1194 "compile_target_code.m"
          }
#line 1193 "compile_target_code.m"
        else
#line 1190 "compile_target_code.m"
          {
#line 1190 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Grade_26;
#line 1190 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_65_65;
#line 1190 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_66_66;
#line 1190 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_67_67;

#line 1191 "compile_target_code.m"
            {
#line 1191 "compile_target_code.m"
              libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__Grade_26);
            }
#line 1192 "compile_target_code.m"
            {
#line 1192 "compile_target_code.m"
              backend_libs__compile_target_code__V_67_67 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_26);
            }
#line 1192 "compile_target_code.m"
            {
#line 1192 "compile_target_code.m"
              backend_libs__compile_target_code__V_66_66 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_67_67, backend_libs__compile_target_code__FullArch_25);
            }
#line 1192 "compile_target_code.m"
            {
#line 1192 "compile_target_code.m"
              backend_libs__compile_target_code__V_65_65 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_66_66, (MR_String) "Mercury");
            }
#line 1192 "compile_target_code.m"
            {
#line 1192 "compile_target_code.m"
              backend_libs__compile_target_code__DirName_27 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_65_65, (MR_String) "beams");
            }
#line 1190 "compile_target_code.m"
          }
#line 1198 "compile_target_code.m"
        {
#line 1198 "compile_target_code.m"
          mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__DirName_27, &backend_libs__compile_target_code__V_28_28);
        }
#line 1200 "compile_target_code.m"
        {
#line 1200 "compile_target_code.m"
          backend_libs__compile_target_code__V_73_73 = mercury__string__f_43_43_2_f_0(backend_libs__compile_target_code__DirName_27, (MR_String) " ");
        }
#line 1200 "compile_target_code.m"
        {
#line 1200 "compile_target_code.m"
          backend_libs__compile_target_code__DestDir_29 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", backend_libs__compile_target_code__V_73_73);
        }
#line 1188 "compile_target_code.m"
      }
#line 1207 "compile_target_code.m"
    {
#line 1207 "compile_target_code.m"
      backend_libs__compile_target_code__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 0) = ((MR_Box) (backend_libs__compile_target_code__ErlangFile_8));
#line 1207 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1207 "compile_target_code.m"
    }
#line 1207 "compile_target_code.m"
    {
#line 1207 "compile_target_code.m"
      backend_libs__compile_target_code__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_81_81, 0) = ((MR_Box) ((MR_String) " "));
#line 1207 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_81_81, 1) = ((MR_Box) (backend_libs__compile_target_code__V_83_83));
#line 1207 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      backend_libs__compile_target_code__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_80_80, 0) = ((MR_Box) (backend_libs__compile_target_code__ERLANGFLAGS_19));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_80_80, 1) = ((MR_Box) (backend_libs__compile_target_code__V_81_81));
#line 1206 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      backend_libs__compile_target_code__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 0) = ((MR_Box) (backend_libs__compile_target_code__DestDir_29));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_79_79, 1) = ((MR_Box) (backend_libs__compile_target_code__V_80_80));
#line 1206 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      backend_libs__compile_target_code__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_21));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_78_78, 1) = ((MR_Box) (backend_libs__compile_target_code__V_79_79));
#line 1206 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      backend_libs__compile_target_code__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 0) = ((MR_Box) ((MR_String) " "));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_76_76, 1) = ((MR_Box) (backend_libs__compile_target_code__V_78_78));
#line 1206 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      backend_libs__compile_target_code__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 0) = ((MR_Box) (backend_libs__compile_target_code__ErlangCompiler_13));
#line 1206 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_75_75, 1) = ((MR_Box) (backend_libs__compile_target_code__V_76_76));
#line 1206 "compile_target_code.m"
    }
#line 1206 "compile_target_code.m"
    {
#line 1206 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_75_75, &backend_libs__compile_target_code__Command_30);
    }
#line 1208 "compile_target_code.m"
    {
#line 1208 "compile_target_code.m"
      parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_7, (MR_Integer) 1, backend_libs__compile_target_code__Command_30, backend_libs__compile_target_code__Succeeded_10);
#line 1208 "compile_target_code.m"
      return;
    }
#line 1151 "compile_target_code.m"
  }
#line 80 "compile_target_code.m"
}

#line 378 "compile_target_code.m"
static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1,
#line 378 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_2,
#line 378 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_3,
#line 378 "compile_target_code.m"
  MR_Box * backend_libs__compile_target_code__wrapper_arg_4)
#line 378 "compile_target_code.m"
{
#line 378 "compile_target_code.m"
  {
#line 378 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 378 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv2_HeadVar__4_80;

#line 378 "compile_target_code.m"
    {
#line 378 "compile_target_code.m"
      backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__378__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1), &backend_libs__compile_target_code__conv2_HeadVar__4_80);
    }
#line 378 "compile_target_code.m"
    *backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv2_HeadVar__4_80));
#line 378 "compile_target_code.m"
  }
#line 378 "compile_target_code.m"
}

#line 371 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
#line 371 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 371 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 371 "compile_target_code.m"
{
#line 371 "compile_target_code.m"
  {
#line 371 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 371 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv1_HeadVar__3_69;

#line 371 "compile_target_code.m"
    {
#line 371 "compile_target_code.m"
      backend_libs__compile_target_code__conv1_HeadVar__3_69 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__371__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv1_HeadVar__3_69));
#line 371 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 371 "compile_target_code.m"
  }
#line 371 "compile_target_code.m"
}

#line 363 "compile_target_code.m"
static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
#line 363 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__closure_arg,
#line 363 "compile_target_code.m"
  MR_Box backend_libs__compile_target_code__wrapper_arg_1)
#line 363 "compile_target_code.m"
{
#line 363 "compile_target_code.m"
  {
#line 363 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__wrapper_arg_2;
#line 363 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__closure = backend_libs__compile_target_code__closure_arg;
#line 363 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__conv0_HeadVar__2_60;

#line 363 "compile_target_code.m"
    {
#line 363 "compile_target_code.m"
      backend_libs__compile_target_code__conv0_HeadVar__2_60 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__363__1_1_f_0(((MR_String) backend_libs__compile_target_code__wrapper_arg_1));
    }
#line 363 "compile_target_code.m"
    backend_libs__compile_target_code__wrapper_arg_2 = ((MR_Box) (backend_libs__compile_target_code__conv0_HeadVar__2_60));
#line 363 "compile_target_code.m"
    return backend_libs__compile_target_code__wrapper_arg_2;
#line 363 "compile_target_code.m"
  }
#line 363 "compile_target_code.m"
}

#line 74 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0(
#line 74 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 74 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Imports_10,
#line 74 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__CSharpFileName0_11,
#line 74 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__DLLFileName_12,
#line 74 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 74 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 74 "compile_target_code.m"
{
#line 331 "compile_target_code.m"
  {
#line 331 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_232_232;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeInfo_233_233;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__TypeCtorInfo_235_235;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CSharpFileName_17;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CSC_18;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__CSCFlagsList_19;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CSCFlags_20;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Debug_21;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DebugOpt_22;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__DLLDirs_23;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DLLDirOpts_24;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Prefix_26;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ForeignDeps_27;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ReferencedDlls_29;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ReferencedDllsList_34;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ReferencedDllsStr_35;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Command_36;
#line 331 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_55_55;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_56_56;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_57_57;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_67_67;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_71_71;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_72_72;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_73_73;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_75_75;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_77_77;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_89_89;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_90_90;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_91_91;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_92_92;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_94_94;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_95_95;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_96_96;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_97_97;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_99_99;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_100_100;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_102_102;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_175_175;
#line 331 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_176_176;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_66_66;
#line 366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_112_112;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_113_113;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_114_114;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_115_115;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_116_116;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_117_117;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_118_118;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_119_119;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_120_120;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_121_121;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_122_122;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_123_123;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_124_124;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_125_125;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_126_126;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_127_127;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_128_128;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_129_129;
#line 366 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_130_130;
#line 366 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_131_131;
#line 371 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_152_152;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_153_153;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_154_154;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_155_155;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_156_156;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_157_157;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_158_158;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_159_159;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_160_160;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_161_161;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_162_162;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_163_163;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_164_164;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_165_165;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_166_166;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_167_167;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_168_168;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_169_169;
#line 371 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_170_170;
#line 371 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_171_171;
#line 376 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_172_172;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_173_173;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_174_174;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_177_177;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_178_178;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_179_179;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_180_180;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_181_181;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_182_182;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_183_183;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_184_184;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_185_185;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_186_186;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_187_187;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_188_188;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_189_189;
#line 376 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_190_190;
#line 376 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_191_191;
#line 378 "compile_target_code.m"
    MR_Box backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_78_78;

#line 332 "compile_target_code.m"
    {
#line 332 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 333 "compile_target_code.m"
    {
#line 333 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling \140");
    }
#line 336 "compile_target_code.m"
    {
#line 336 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 521, &backend_libs__compile_target_code__CSC_18);
    }
#line 337 "compile_target_code.m"
    {
#line 337 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 522, &backend_libs__compile_target_code__CSCFlagsList_19);
    }
#line 338 "compile_target_code.m"
    {
#line 338 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__CSCFlagsList_19, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__CSCFlags_20);
    }
#line 342 "compile_target_code.m"
    {
#line 342 "compile_target_code.m"
      backend_libs__compile_target_code__CSharpFileName_17 = mercury__string__replace_all_3_f_0(backend_libs__compile_target_code__CSharpFileName0_11, (MR_String) "/", (MR_String) "\\\\");
    }
#line 334 "compile_target_code.m"
    {
#line 334 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, backend_libs__compile_target_code__CSharpFileName_17);
    }
#line 335 "compile_target_code.m"
    {
#line 335 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "\':\n");
    }
#line 344 "compile_target_code.m"
    {
#line 344 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 481, &backend_libs__compile_target_code__Debug_21);
    }
#line 352 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Debug_21 == (MR_Integer) 0))
#line 354 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_22 = (MR_String) "";
#line 352 "compile_target_code.m"
    else
#line 351 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_22 = (MR_String) "";
#line 360 "compile_target_code.m"
    {
#line 360 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 538, &backend_libs__compile_target_code__DLLDirs_23);
    }
#line 17489 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_232_232 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17491 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeInfo_233_233 = (MR_Word) &backend_libs__compile_target_code_scalar_common_1[0];
#line 363 "compile_target_code.m"
    {
#line 363 "compile_target_code.m"
      backend_libs__compile_target_code__V_57_57 = mercury__list__map_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_232_232, backend_libs__compile_target_code__TypeInfo_233_233, (MR_Word) &backend_libs__compile_target_code_scalar_common_4[0], backend_libs__compile_target_code__DLLDirs_23);
    }
#line 363 "compile_target_code.m"
    {
#line 363 "compile_target_code.m"
      backend_libs__compile_target_code__V_56_56 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_232_232, backend_libs__compile_target_code__V_57_57);
    }
#line 363 "compile_target_code.m"
    {
#line 363 "compile_target_code.m"
      backend_libs__compile_target_code__V_55_55 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_56_56);
    }
#line 362 "compile_target_code.m"
    {
#line 362 "compile_target_code.m"
      backend_libs__compile_target_code__DLLDirOpts_24 = mercury__string__f_43_43_2_f_0((MR_String) "-lib:Mercury/dlls ", backend_libs__compile_target_code__V_55_55);
    }
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 0)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 1)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 2)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 3)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 4)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 5)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 6)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 7)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 8)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 9)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 10)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 11)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 12)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 13)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 14)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 15)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 16)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 17)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 18)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 19)));
#line 366 "compile_target_code.m"
    backend_libs__compile_target_code__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 20)));
#line 366 "compile_target_code.m"
    {
#line 366 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(backend_libs__compile_target_code__V_66_66);
    }
#line 368 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 367 "compile_target_code.m"
      backend_libs__compile_target_code__Prefix_26 = (MR_String) "-addmodule:";
#line 368 "compile_target_code.m"
    else
#line 369 "compile_target_code.m"
      backend_libs__compile_target_code__Prefix_26 = (MR_String) "-r:";
#line 17568 "backend_libs.compile_target_code.c"
    backend_libs__compile_target_code__TypeCtorInfo_235_235 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 371 "compile_target_code.m"
    {
#line 371 "compile_target_code.m"
      backend_libs__compile_target_code__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_67_67, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[1]));
#line 371 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_67_67, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_2));
#line 371 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_67_67, 3) = ((MR_Box) (backend_libs__compile_target_code__Imports_10));
#line 371 "compile_target_code.m"
    }
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 0)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 1)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 2)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 3)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 4)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 5)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 6)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 7)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 8)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 9)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 10)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 11)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 12)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 13)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 14)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 15)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 16)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 17)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 18)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 19)));
#line 371 "compile_target_code.m"
    backend_libs__compile_target_code__V_171_171 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 20)));
#line 371 "compile_target_code.m"
    {
#line 371 "compile_target_code.m"
      backend_libs__compile_target_code__ForeignDeps_27 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, backend_libs__compile_target_code__TypeCtorInfo_235_235, backend_libs__compile_target_code__V_67_67, backend_libs__compile_target_code__V_71_71);
    }
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 0)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 1)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 2)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 3)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 4)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 5)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 6)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 7)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 8)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 9)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 10)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 11)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 12)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 13)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 14)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 15)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 16)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 17)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 18)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 19)));
#line 376 "compile_target_code.m"
    backend_libs__compile_target_code__V_191_191 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__Imports_10, (MR_Integer) 20)));
#line 377 "compile_target_code.m"
    {
#line 377 "compile_target_code.m"
      backend_libs__compile_target_code__V_75_75 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_235_235, backend_libs__compile_target_code__V_176_176, backend_libs__compile_target_code__ForeignDeps_27);
    }
#line 377 "compile_target_code.m"
    {
#line 377 "compile_target_code.m"
      backend_libs__compile_target_code__V_73_73 = mercury__list__f_43_43_2_f_0(backend_libs__compile_target_code__TypeCtorInfo_235_235, backend_libs__compile_target_code__V_175_175, backend_libs__compile_target_code__V_75_75);
    }
#line 376 "compile_target_code.m"
    {
#line 376 "compile_target_code.m"
      backend_libs__compile_target_code__ReferencedDlls_29 = parse_tree__write_deps_file__referenced_dlls_2_f_0(backend_libs__compile_target_code__V_72_72, backend_libs__compile_target_code__V_73_73);
    }
#line 378 "compile_target_code.m"
    {
#line 378 "compile_target_code.m"
      backend_libs__compile_target_code__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_5[0]));
#line 378 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_3));
#line 378 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 3) = ((MR_Box) (backend_libs__compile_target_code__Globals_13));
#line 378 "compile_target_code.m"
      MR_hl_field(MR_mktag(0), backend_libs__compile_target_code__V_77_77, 4) = ((MR_Box) (backend_libs__compile_target_code__Prefix_26));
#line 378 "compile_target_code.m"
    }
#line 378 "compile_target_code.m"
    {
#line 378 "compile_target_code.m"
      mercury__list__map_foldl_5_p_2(backend_libs__compile_target_code__TypeCtorInfo_235_235, backend_libs__compile_target_code__TypeInfo_233_233, (MR_Word) &mercury__io__io__type_ctor_info_state_0, backend_libs__compile_target_code__V_77_77, backend_libs__compile_target_code__ReferencedDlls_29, &backend_libs__compile_target_code__ReferencedDllsList_34, ((MR_Box) ((MR_Integer) 0)), &backend_libs__compile_target_code__conv3_STATE_VARIABLE_IO_78_78);
    }
#line 385 "compile_target_code.m"
    {
#line 385 "compile_target_code.m"
      backend_libs__compile_target_code__V_89_89 = mercury__list__condense_1_f_0(backend_libs__compile_target_code__TypeCtorInfo_232_232, backend_libs__compile_target_code__ReferencedDllsList_34);
    }
#line 384 "compile_target_code.m"
    {
#line 384 "compile_target_code.m"
      backend_libs__compile_target_code__ReferencedDllsStr_35 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_89_89);
    }
#line 389 "compile_target_code.m"
    {
#line 389 "compile_target_code.m"
      backend_libs__compile_target_code__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 0) = ((MR_Box) (backend_libs__compile_target_code__CSharpFileName_17));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "compile_target_code.m"
    }
#line 389 "compile_target_code.m"
    {
#line 389 "compile_target_code.m"
      backend_libs__compile_target_code__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 0) = ((MR_Box) ((MR_String) " "));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_100_100, 1) = ((MR_Box) (backend_libs__compile_target_code__V_102_102));
#line 389 "compile_target_code.m"
    }
#line 389 "compile_target_code.m"
    {
#line 389 "compile_target_code.m"
      backend_libs__compile_target_code__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 0) = ((MR_Box) (backend_libs__compile_target_code__DLLFileName_12));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_99_99, 1) = ((MR_Box) (backend_libs__compile_target_code__V_100_100));
#line 389 "compile_target_code.m"
    }
#line 389 "compile_target_code.m"
    {
#line 389 "compile_target_code.m"
      backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) ((MR_String) " -out:"));
#line 389 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (backend_libs__compile_target_code__V_99_99));
#line 389 "compile_target_code.m"
    }
#line 388 "compile_target_code.m"
    {
#line 388 "compile_target_code.m"
      backend_libs__compile_target_code__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 0) = ((MR_Box) (backend_libs__compile_target_code__ReferencedDllsStr_35));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_96_96, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
#line 388 "compile_target_code.m"
    }
#line 388 "compile_target_code.m"
    {
#line 388 "compile_target_code.m"
      backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) (backend_libs__compile_target_code__CSCFlags_20));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_96_96));
#line 388 "compile_target_code.m"
    }
#line 388 "compile_target_code.m"
    {
#line 388 "compile_target_code.m"
      backend_libs__compile_target_code__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 0) = ((MR_Box) (backend_libs__compile_target_code__DLLDirOpts_24));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_94_94, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
#line 388 "compile_target_code.m"
    }
#line 388 "compile_target_code.m"
    {
#line 388 "compile_target_code.m"
      backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) ((MR_String) " -t:library "));
#line 388 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_94_94));
#line 388 "compile_target_code.m"
    }
#line 387 "compile_target_code.m"
    {
#line 387 "compile_target_code.m"
      backend_libs__compile_target_code__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpt_22));
#line 387 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_91_91, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
#line 387 "compile_target_code.m"
    }
#line 387 "compile_target_code.m"
    {
#line 387 "compile_target_code.m"
      backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) (backend_libs__compile_target_code__CSC_18));
#line 387 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (backend_libs__compile_target_code__V_91_91));
#line 387 "compile_target_code.m"
    }
#line 387 "compile_target_code.m"
    {
#line 387 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_90_90, &backend_libs__compile_target_code__Command_36);
    }
#line 390 "compile_target_code.m"
    {
#line 390 "compile_target_code.m"
      parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, (MR_Integer) 1, backend_libs__compile_target_code__Command_36, backend_libs__compile_target_code__Succeeded_14);
#line 390 "compile_target_code.m"
      return;
    }
#line 331 "compile_target_code.m"
  }
#line 74 "compile_target_code.m"
}

#line 68 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__do_il_assemble_8_p_0(
#line 68 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 68 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__IL_File_10,
#line 68 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__TargetFile_11,
#line 68 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HasMain_12,
#line 68 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 68 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 68 "compile_target_code.m"
{
#line 287 "compile_target_code.m"
  {
#line 287 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__SignAssembly_17;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ILASM_18;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ILASMFlagsList_19;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ILASMFlags_20;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__SignOpt_21;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__VerboseOpt_22;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Debug_23;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DebugOpt_24;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__TargetOpt_25;
#line 287 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Command_26;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_42_42;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_43_43;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_45_45;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_46_46;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_47_47;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_48_48;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_49_49;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_50_50;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_52_52;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_53_53;
#line 287 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_55_55;

#line 288 "compile_target_code.m"
    {
#line 288 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 289 "compile_target_code.m"
    {
#line 289 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 566, &backend_libs__compile_target_code__SignAssembly_17);
    }
#line 290 "compile_target_code.m"
    {
#line 290 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Assembling \140");
    }
#line 291 "compile_target_code.m"
    {
#line 291 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, backend_libs__compile_target_code__IL_File_10);
    }
#line 292 "compile_target_code.m"
    {
#line 292 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "\':\n");
    }
#line 293 "compile_target_code.m"
    {
#line 293 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 515, &backend_libs__compile_target_code__ILASM_18);
    }
#line 294 "compile_target_code.m"
    {
#line 294 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 516, &backend_libs__compile_target_code__ILASMFlagsList_19);
    }
#line 295 "compile_target_code.m"
    {
#line 295 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__ILASMFlagsList_19, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__ILASMFlags_20);
    }
#line 299 "compile_target_code.m"
    if ((backend_libs__compile_target_code__SignAssembly_17 == (MR_Integer) 0))
#line 301 "compile_target_code.m"
      backend_libs__compile_target_code__SignOpt_21 = (MR_String) "";
#line 299 "compile_target_code.m"
    else
#line 298 "compile_target_code.m"
      backend_libs__compile_target_code__SignOpt_21 = (MR_String) "/keyf=mercury.sn ";
#line 306 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Verbose_16 == (MR_Integer) 0))
#line 308 "compile_target_code.m"
      backend_libs__compile_target_code__VerboseOpt_22 = (MR_String) "/quiet ";
#line 306 "compile_target_code.m"
    else
#line 305 "compile_target_code.m"
      backend_libs__compile_target_code__VerboseOpt_22 = (MR_String) "";
#line 310 "compile_target_code.m"
    {
#line 310 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 481, &backend_libs__compile_target_code__Debug_23);
    }
#line 314 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Debug_23 == (MR_Integer) 0))
#line 316 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_24 = (MR_String) "";
#line 314 "compile_target_code.m"
    else
#line 313 "compile_target_code.m"
      backend_libs__compile_target_code__DebugOpt_24 = (MR_String) "/debug ";
#line 321 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HasMain_12 == (MR_Integer) 0))
#line 320 "compile_target_code.m"
      backend_libs__compile_target_code__TargetOpt_25 = (MR_String) "";
#line 321 "compile_target_code.m"
    else
#line 323 "compile_target_code.m"
      backend_libs__compile_target_code__TargetOpt_25 = (MR_String) "/dll ";
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 0) = ((MR_Box) (backend_libs__compile_target_code__IL_File_10));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "compile_target_code.m"
    }
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_53_53, 1) = ((MR_Box) (backend_libs__compile_target_code__V_55_55));
#line 326 "compile_target_code.m"
    }
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 0) = ((MR_Box) (backend_libs__compile_target_code__TargetFile_11));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_52_52, 1) = ((MR_Box) (backend_libs__compile_target_code__V_53_53));
#line 326 "compile_target_code.m"
    }
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 0) = ((MR_Box) ((MR_String) " /out="));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_50_50, 1) = ((MR_Box) (backend_libs__compile_target_code__V_52_52));
#line 326 "compile_target_code.m"
    }
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 0) = ((MR_Box) (backend_libs__compile_target_code__ILASMFlags_20));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_49_49, 1) = ((MR_Box) (backend_libs__compile_target_code__V_50_50));
#line 326 "compile_target_code.m"
    }
#line 326 "compile_target_code.m"
    {
#line 326 "compile_target_code.m"
      backend_libs__compile_target_code__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 0) = ((MR_Box) (backend_libs__compile_target_code__TargetOpt_25));
#line 326 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_48_48, 1) = ((MR_Box) (backend_libs__compile_target_code__V_49_49));
#line 326 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      backend_libs__compile_target_code__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 0) = ((MR_Box) (backend_libs__compile_target_code__DebugOpt_24));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_47_47, 1) = ((MR_Box) (backend_libs__compile_target_code__V_48_48));
#line 325 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      backend_libs__compile_target_code__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 0) = ((MR_Box) (backend_libs__compile_target_code__VerboseOpt_22));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_46_46, 1) = ((MR_Box) (backend_libs__compile_target_code__V_47_47));
#line 325 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      backend_libs__compile_target_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 0) = ((MR_Box) (backend_libs__compile_target_code__SignOpt_21));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_45_45, 1) = ((MR_Box) (backend_libs__compile_target_code__V_46_46));
#line 325 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) ((MR_String) " "));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (backend_libs__compile_target_code__V_45_45));
#line 325 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) (backend_libs__compile_target_code__ILASM_18));
#line 325 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
#line 325 "compile_target_code.m"
    }
#line 325 "compile_target_code.m"
    {
#line 325 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_42_42, &backend_libs__compile_target_code__Command_26);
    }
#line 327 "compile_target_code.m"
    {
#line 327 "compile_target_code.m"
      parse_tree__module_cmds__invoke_system_command_7_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, (MR_Integer) 1, backend_libs__compile_target_code__Command_26, backend_libs__compile_target_code__Succeeded_14);
#line 327 "compile_target_code.m"
      return;
    }
#line 287 "compile_target_code.m"
  }
#line 68 "compile_target_code.m"
}

#line 62 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__il_assemble_7_p_0(
#line 62 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_8,
#line 62 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_9,
#line 62 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__HasMain_10,
#line 62 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_11,
#line 62 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
#line 62 "compile_target_code.m"
{
#line 262 "compile_target_code.m"
  {
#line 262 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 262 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__IL_File_14;
#line 262 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DllFile_15;
#line 262 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__DllSucceeded_16;

#line 263 "compile_target_code.m"
    {
#line 263 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ModuleName_9, (MR_String) ".il", (MR_Integer) 1, &backend_libs__compile_target_code__IL_File_14);
    }
#line 265 "compile_target_code.m"
    {
#line 265 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ModuleName_9, (MR_String) ".dll", (MR_Integer) 0, &backend_libs__compile_target_code__DllFile_15);
    }
#line 272 "compile_target_code.m"
    {
#line 272 "compile_target_code.m"
      backend_libs__compile_target_code__do_il_assemble_8_p_0(backend_libs__compile_target_code__ErrorStream_8, backend_libs__compile_target_code__IL_File_14, backend_libs__compile_target_code__DllFile_15, (MR_Integer) 1, backend_libs__compile_target_code__Globals_11, &backend_libs__compile_target_code__DllSucceeded_16);
    }
#line 281 "compile_target_code.m"
    if ((backend_libs__compile_target_code__HasMain_10 == (MR_Integer) 0))
#line 275 "compile_target_code.m"
      {
#line 275 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__ExeFile_17;
#line 275 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__ExeSucceeded_18;

#line 276 "compile_target_code.m"
        {
#line 276 "compile_target_code.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ModuleName_9, (MR_String) ".exe", (MR_Integer) 0, &backend_libs__compile_target_code__ExeFile_17);
        }
#line 278 "compile_target_code.m"
        {
#line 278 "compile_target_code.m"
          backend_libs__compile_target_code__do_il_assemble_8_p_0(backend_libs__compile_target_code__ErrorStream_8, backend_libs__compile_target_code__IL_File_14, backend_libs__compile_target_code__ExeFile_17, backend_libs__compile_target_code__HasMain_10, backend_libs__compile_target_code__Globals_11, &backend_libs__compile_target_code__ExeSucceeded_18);
        }
#line 280 "compile_target_code.m"
        {
#line 280 "compile_target_code.m"
          *backend_libs__compile_target_code__Succeeded_12 = mercury__bool__and_2_f_0(backend_libs__compile_target_code__DllSucceeded_16, backend_libs__compile_target_code__ExeSucceeded_18);
        }
#line 275 "compile_target_code.m"
      }
#line 281 "compile_target_code.m"
    else
#line 283 "compile_target_code.m"
      *backend_libs__compile_target_code__Succeeded_12 = backend_libs__compile_target_code__DllSucceeded_16;
#line 262 "compile_target_code.m"
  }
#line 62 "compile_target_code.m"
}

#line 57 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__compile_java_files_6_p_0(
#line 57 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_7,
#line 57 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__JavaFiles_8,
#line 57 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_9,
#line 57 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_10)
#line 57 "compile_target_code.m"
{
#line 1037 "compile_target_code.m"
  {
#line 1037 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_12;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__JavaCompiler_17;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__JavaFlagsList_18;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__JAVAFLAGS_19;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MercuryStdLibs_20;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UserClasspath_21;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Java_Incl_Dirs_22;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__EnvClasspath_23;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__ClassPathList_24;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ClassPath_25;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__InclOpt_26;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Target_Debug_27;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Target_DebugOpt_28;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseSubdirs_29;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__UseGradeSubdirs_30;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FullArch_31;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__DirOpts_36;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__MFilterJavac_37;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeMFilterJavac_38;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__JoinedJavaFiles_39;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CommandArgs_40;
#line 1037 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_61_61;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_103_103;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_104_104;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_105_105;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_106_106;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_107_107;
#line 1037 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_109_109;

#line 1038 "compile_target_code.m"
    {
#line 1038 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_12);
    }
#line 1055 "compile_target_code.m"
    if ((backend_libs__compile_target_code__JavaFiles_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1056 "compile_target_code.m"
      {
#line 1057 "compile_target_code.m"
        {
#line 1057 "compile_target_code.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.compile_target_code", (MR_String) "predicate \140backend_libs.compile_target_code.compile_java_files\'/6", (MR_String) "empty list");
#line 1057 "compile_target_code.m"
          return;
        }
#line 1056 "compile_target_code.m"
      }
#line 1055 "compile_target_code.m"
    else
#line 1040 "compile_target_code.m"
      {
#line 1040 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__JavaFile_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__JavaFiles_8, (MR_Integer) 0)));
#line 1040 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__MoreFiles_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__JavaFiles_8, (MR_Integer) 1)));

#line 1052 "compile_target_code.m"
        if ((backend_libs__compile_target_code__Verbose_12 == (MR_Integer) 0))
#line 1053 "compile_target_code.m"
          {
#line 1053 "compile_target_code.m"
          }
#line 1052 "compile_target_code.m"
        else
#line 1042 "compile_target_code.m"
          {
#line 1043 "compile_target_code.m"
            {
#line 1043 "compile_target_code.m"
              mercury__io__write_string_3_p_0((MR_String) "% Compiling \140");
            }
#line 1044 "compile_target_code.m"
            {
#line 1044 "compile_target_code.m"
              mercury__io__write_string_3_p_0(backend_libs__compile_target_code__JavaFile_13);
            }
#line 1048 "compile_target_code.m"
            if ((backend_libs__compile_target_code__MoreFiles_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "compile_target_code.m"
              {
#line 1047 "compile_target_code.m"
                {
#line 1047 "compile_target_code.m"
                  mercury__io__write_string_3_p_0((MR_String) "\':\n");
                }
#line 1046 "compile_target_code.m"
              }
#line 1048 "compile_target_code.m"
            else
#line 1049 "compile_target_code.m"
              {
#line 1050 "compile_target_code.m"
                {
#line 1050 "compile_target_code.m"
                  mercury__io__write_string_3_p_0((MR_String) "\', etc.:\n");
                }
#line 1049 "compile_target_code.m"
              }
#line 1042 "compile_target_code.m"
          }
#line 1040 "compile_target_code.m"
      }
#line 1060 "compile_target_code.m"
    {
#line 1060 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 509, &backend_libs__compile_target_code__JavaCompiler_17);
    }
#line 1061 "compile_target_code.m"
    {
#line 1061 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 511, &backend_libs__compile_target_code__JavaFlagsList_18);
    }
#line 1062 "compile_target_code.m"
    {
#line 1062 "compile_target_code.m"
      backend_libs__compile_target_code__join_string_list_5_p_0(backend_libs__compile_target_code__JavaFlagsList_18, (MR_String) "", (MR_String) "", (MR_String) " ", &backend_libs__compile_target_code__JAVAFLAGS_19);
    }
#line 1064 "compile_target_code.m"
    {
#line 1064 "compile_target_code.m"
      parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__MercuryStdLibs_20);
    }
#line 1065 "compile_target_code.m"
    {
#line 1065 "compile_target_code.m"
      libs__globals__lookup_accumulating_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 513, &backend_libs__compile_target_code__UserClasspath_21);
    }
#line 1066 "compile_target_code.m"
    {
#line 1066 "compile_target_code.m"
      backend_libs__compile_target_code__Java_Incl_Dirs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__compile_target_code__MercuryStdLibs_20, backend_libs__compile_target_code__UserClasspath_21);
    }
#line 1069 "compile_target_code.m"
    {
#line 1069 "compile_target_code.m"
      parse_tree__module_cmds__get_env_classpath_3_p_0(&backend_libs__compile_target_code__EnvClasspath_23);
    }
#line 1070 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__EnvClasspath_23, (MR_String) "") == 0);
#line 1072 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1071 "compile_target_code.m"
      backend_libs__compile_target_code__ClassPathList_24 = backend_libs__compile_target_code__Java_Incl_Dirs_22;
#line 1072 "compile_target_code.m"
    else
#line 1073 "compile_target_code.m"
      {
#line 1073 "compile_target_code.m"
        backend_libs__compile_target_code__ClassPathList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "compile_target_code.m"
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ClassPathList_24, 0) = ((MR_Box) (backend_libs__compile_target_code__EnvClasspath_23));
#line 1073 "compile_target_code.m"
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__ClassPathList_24, 1) = ((MR_Box) (backend_libs__compile_target_code__Java_Incl_Dirs_22));
#line 1073 "compile_target_code.m"
      }
#line 1075 "compile_target_code.m"
    {
#line 1075 "compile_target_code.m"
      backend_libs__compile_target_code__V_61_61 = backend_libs__compile_target_code__java_classpath_separator_0_f_0();
    }
#line 1075 "compile_target_code.m"
    {
#line 1075 "compile_target_code.m"
      backend_libs__compile_target_code__ClassPath_25 = mercury__string__join_list_2_f_0(backend_libs__compile_target_code__V_61_61, backend_libs__compile_target_code__ClassPathList_24);
    }
#line 1076 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__ClassPath_25, (MR_String) "") == 0);
#line 1078 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1077 "compile_target_code.m"
      backend_libs__compile_target_code__InclOpt_26 = (MR_String) "";
#line 1078 "compile_target_code.m"
    else
#line 1079 "compile_target_code.m"
      {
#line 1079 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_62_62;
#line 1079 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_64_64;
#line 1079 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__V_65_65;

#line 1080 "compile_target_code.m"
        {
#line 1080 "compile_target_code.m"
          backend_libs__compile_target_code__V_65_65 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__ClassPath_25);
        }
#line 1080 "compile_target_code.m"
        {
#line 1080 "compile_target_code.m"
          backend_libs__compile_target_code__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 0) = ((MR_Box) (backend_libs__compile_target_code__V_65_65));
#line 1080 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 1080 "compile_target_code.m"
        }
#line 1080 "compile_target_code.m"
        {
#line 1080 "compile_target_code.m"
          backend_libs__compile_target_code__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 0) = ((MR_Box) ((MR_String) "-classpath "));
#line 1080 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_62_62, 1) = ((MR_Box) (backend_libs__compile_target_code__V_64_64));
#line 1080 "compile_target_code.m"
        }
#line 1079 "compile_target_code.m"
        {
#line 1079 "compile_target_code.m"
          backend_libs__compile_target_code__InclOpt_26 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_62_62);
        }
#line 1079 "compile_target_code.m"
      }
#line 1083 "compile_target_code.m"
    {
#line 1083 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 481, &backend_libs__compile_target_code__Target_Debug_27);
    }
#line 1087 "compile_target_code.m"
    if ((backend_libs__compile_target_code__Target_Debug_27 == (MR_Integer) 0))
#line 1089 "compile_target_code.m"
      backend_libs__compile_target_code__Target_DebugOpt_28 = (MR_String) "";
#line 1087 "compile_target_code.m"
    else
#line 1086 "compile_target_code.m"
      backend_libs__compile_target_code__Target_DebugOpt_28 = (MR_String) "-g ";
#line 1092 "compile_target_code.m"
    {
#line 1092 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 640, &backend_libs__compile_target_code__UseSubdirs_29);
    }
#line 1093 "compile_target_code.m"
    {
#line 1093 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 641, &backend_libs__compile_target_code__UseGradeSubdirs_30);
    }
#line 1094 "compile_target_code.m"
    {
#line 1094 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 659, &backend_libs__compile_target_code__FullArch_31);
    }
#line 1115 "compile_target_code.m"
    if ((backend_libs__compile_target_code__UseSubdirs_29 == (MR_Integer) 0))
#line 1117 "compile_target_code.m"
      backend_libs__compile_target_code__DirOpts_36 = (MR_String) "";
#line 1115 "compile_target_code.m"
    else
#line 1096 "compile_target_code.m"
      {
#line 1096 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__SourceDirName_33;
#line 1096 "compile_target_code.m"
        MR_String backend_libs__compile_target_code__DestDirName_34;
#line 1096 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_90_90;
#line 1096 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_92_92;
#line 1096 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_93_93;
#line 1096 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_95_95;
#line 1096 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_97_97;
#line 1109 "compile_target_code.m"
        MR_Word backend_libs__compile_target_code__V_35_35;

#line 1102 "compile_target_code.m"
        if ((backend_libs__compile_target_code__UseGradeSubdirs_30 == (MR_Integer) 0))
#line 1103 "compile_target_code.m"
          {
#line 1104 "compile_target_code.m"
            {
#line 1104 "compile_target_code.m"
              backend_libs__compile_target_code__SourceDirName_33 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "javas");
            }
#line 1105 "compile_target_code.m"
            {
#line 1105 "compile_target_code.m"
              backend_libs__compile_target_code__DestDirName_34 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            }
#line 1103 "compile_target_code.m"
          }
#line 1102 "compile_target_code.m"
        else
#line 1098 "compile_target_code.m"
          {
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__Grade_32;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_77_77;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_78_78;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_79_79;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_83_83;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_84_84;
#line 1098 "compile_target_code.m"
            MR_String backend_libs__compile_target_code__V_85_85;

#line 1099 "compile_target_code.m"
            {
#line 1099 "compile_target_code.m"
              libs__handle_options__grade_directory_component_2_p_0(backend_libs__compile_target_code__Globals_9, &backend_libs__compile_target_code__Grade_32);
            }
#line 1100 "compile_target_code.m"
            {
#line 1100 "compile_target_code.m"
              backend_libs__compile_target_code__V_79_79 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_32);
            }
#line 1100 "compile_target_code.m"
            {
#line 1100 "compile_target_code.m"
              backend_libs__compile_target_code__V_78_78 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_79_79, backend_libs__compile_target_code__FullArch_31);
            }
#line 1100 "compile_target_code.m"
            {
#line 1100 "compile_target_code.m"
              backend_libs__compile_target_code__V_77_77 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_78_78, (MR_String) "Mercury");
            }
#line 1100 "compile_target_code.m"
            {
#line 1100 "compile_target_code.m"
              backend_libs__compile_target_code__SourceDirName_33 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_77_77, (MR_String) "javas");
            }
#line 1101 "compile_target_code.m"
            {
#line 1101 "compile_target_code.m"
              backend_libs__compile_target_code__V_85_85 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", backend_libs__compile_target_code__Grade_32);
            }
#line 1101 "compile_target_code.m"
            {
#line 1101 "compile_target_code.m"
              backend_libs__compile_target_code__V_84_84 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_85_85, backend_libs__compile_target_code__FullArch_31);
            }
#line 1101 "compile_target_code.m"
            {
#line 1101 "compile_target_code.m"
              backend_libs__compile_target_code__V_83_83 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_84_84, (MR_String) "Mercury");
            }
#line 1101 "compile_target_code.m"
            {
#line 1101 "compile_target_code.m"
              backend_libs__compile_target_code__DestDirName_34 = mercury__dir__f_slash_2_f_0(backend_libs__compile_target_code__V_83_83, (MR_String) "classs");
            }
#line 1098 "compile_target_code.m"
          }
#line 1109 "compile_target_code.m"
        {
#line 1109 "compile_target_code.m"
          mercury__dir__make_directory_4_p_0(backend_libs__compile_target_code__DestDirName_34, &backend_libs__compile_target_code__V_35_35);
        }
#line 1113 "compile_target_code.m"
        {
#line 1113 "compile_target_code.m"
          backend_libs__compile_target_code__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 0) = ((MR_Box) (backend_libs__compile_target_code__DestDirName_34));
#line 1113 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])));
#line 1113 "compile_target_code.m"
        }
#line 1113 "compile_target_code.m"
        {
#line 1113 "compile_target_code.m"
          backend_libs__compile_target_code__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 0) = ((MR_Box) ((MR_String) "-d "));
#line 1113 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_95_95, 1) = ((MR_Box) (backend_libs__compile_target_code__V_97_97));
#line 1113 "compile_target_code.m"
        }
#line 1112 "compile_target_code.m"
        {
#line 1112 "compile_target_code.m"
          backend_libs__compile_target_code__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 0) = ((MR_Box) ((MR_String) " "));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_93_93, 1) = ((MR_Box) (backend_libs__compile_target_code__V_95_95));
#line 1112 "compile_target_code.m"
        }
#line 1112 "compile_target_code.m"
        {
#line 1112 "compile_target_code.m"
          backend_libs__compile_target_code__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 0) = ((MR_Box) (backend_libs__compile_target_code__SourceDirName_33));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_92_92, 1) = ((MR_Box) (backend_libs__compile_target_code__V_93_93));
#line 1112 "compile_target_code.m"
        }
#line 1112 "compile_target_code.m"
        {
#line 1112 "compile_target_code.m"
          backend_libs__compile_target_code__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 0) = ((MR_Box) ((MR_String) "-sourcepath "));
#line 1112 "compile_target_code.m"
          MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_90_90, 1) = ((MR_Box) (backend_libs__compile_target_code__V_92_92));
#line 1112 "compile_target_code.m"
        }
#line 1111 "compile_target_code.m"
        {
#line 1111 "compile_target_code.m"
          backend_libs__compile_target_code__DirOpts_36 = mercury__string__append_list_1_f_0(backend_libs__compile_target_code__V_90_90);
        }
#line 1096 "compile_target_code.m"
      }
#line 1120 "compile_target_code.m"
    {
#line 1120 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_9, (MR_Integer) 582, &backend_libs__compile_target_code__MFilterJavac_37);
    }
#line 1121 "compile_target_code.m"
    backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__MFilterJavac_37, (MR_String) "") == 0);
#line 1123 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1122 "compile_target_code.m"
      backend_libs__compile_target_code__MaybeMFilterJavac_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1123 "compile_target_code.m"
    else
#line 1124 "compile_target_code.m"
      {
#line 1124 "compile_target_code.m"
        backend_libs__compile_target_code__MaybeMFilterJavac_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "compile_target_code.m"
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeMFilterJavac_38, 0) = ((MR_Box) (backend_libs__compile_target_code__MFilterJavac_37));
#line 1124 "compile_target_code.m"
      }
#line 1129 "compile_target_code.m"
    {
#line 1129 "compile_target_code.m"
      backend_libs__compile_target_code__JoinedJavaFiles_39 = mercury__string__join_list_2_f_0((MR_String) " ", backend_libs__compile_target_code__JavaFiles_8);
    }
#line 1131 "compile_target_code.m"
    {
#line 1131 "compile_target_code.m"
      backend_libs__compile_target_code__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 0) = ((MR_Box) (backend_libs__compile_target_code__JoinedJavaFiles_39));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "compile_target_code.m"
    }
#line 1131 "compile_target_code.m"
    {
#line 1131 "compile_target_code.m"
      backend_libs__compile_target_code__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 0) = ((MR_Box) ((MR_String) " "));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_107_107, 1) = ((MR_Box) (backend_libs__compile_target_code__V_109_109));
#line 1131 "compile_target_code.m"
    }
#line 1131 "compile_target_code.m"
    {
#line 1131 "compile_target_code.m"
      backend_libs__compile_target_code__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 0) = ((MR_Box) (backend_libs__compile_target_code__JAVAFLAGS_19));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_106_106, 1) = ((MR_Box) (backend_libs__compile_target_code__V_107_107));
#line 1131 "compile_target_code.m"
    }
#line 1131 "compile_target_code.m"
    {
#line 1131 "compile_target_code.m"
      backend_libs__compile_target_code__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 0) = ((MR_Box) (backend_libs__compile_target_code__Target_DebugOpt_28));
#line 1131 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_105_105, 1) = ((MR_Box) (backend_libs__compile_target_code__V_106_106));
#line 1131 "compile_target_code.m"
    }
#line 1130 "compile_target_code.m"
    {
#line 1130 "compile_target_code.m"
      backend_libs__compile_target_code__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 0) = ((MR_Box) (backend_libs__compile_target_code__DirOpts_36));
#line 1130 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_104_104, 1) = ((MR_Box) (backend_libs__compile_target_code__V_105_105));
#line 1130 "compile_target_code.m"
    }
#line 1130 "compile_target_code.m"
    {
#line 1130 "compile_target_code.m"
      backend_libs__compile_target_code__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 0) = ((MR_Box) (backend_libs__compile_target_code__InclOpt_26));
#line 1130 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_103_103, 1) = ((MR_Box) (backend_libs__compile_target_code__V_104_104));
#line 1130 "compile_target_code.m"
    }
#line 1130 "compile_target_code.m"
    {
#line 1130 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_103_103, &backend_libs__compile_target_code__CommandArgs_40);
    }
#line 1132 "compile_target_code.m"
    {
#line 1132 "compile_target_code.m"
      backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_9_p_0(backend_libs__compile_target_code__Globals_9, backend_libs__compile_target_code__ErrorStream_7, (MR_Integer) 1, backend_libs__compile_target_code__JavaCompiler_17, backend_libs__compile_target_code__CommandArgs_40, backend_libs__compile_target_code__MaybeMFilterJavac_38, backend_libs__compile_target_code__Succeeded_10);
#line 1132 "compile_target_code.m"
      return;
    }
#line 1037 "compile_target_code.m"
  }
#line 57 "compile_target_code.m"
}

#line 52 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__do_compile_c_file_8_p_0(
#line 52 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_9,
#line 52 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_10,
#line 52 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__C_File_11,
#line 52 "compile_target_code.m"
  MR_String backend_libs__compile_target_code__O_File_12,
#line 52 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_13,
#line 52 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_14)
#line 52 "compile_target_code.m"
{
#line 407 "compile_target_code.m"
  {
#line 407 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__Verbose_16;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__NameObjectFile_17;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__CC_18;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__AllCFlags_19;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__Command_20;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__MaybeFilterCmd_21;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_32_32;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_33_33;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_35_35;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_36_36;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_38_38;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_39_39;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_40_40;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_42_42;
#line 407 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_43_43;
#line 407 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__V_44_44;
#line 1031 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__FilterCmd_50;
#line 1026 "compile_target_code.m"
    MR_Word backend_libs__compile_target_code__V_53_53;

#line 408 "compile_target_code.m"
    {
#line 408 "compile_target_code.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 44, &backend_libs__compile_target_code__Verbose_16);
    }
#line 409 "compile_target_code.m"
    {
#line 409 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 503, &backend_libs__compile_target_code__NameObjectFile_17);
    }
#line 411 "compile_target_code.m"
    {
#line 411 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "% Compiling \140");
    }
#line 412 "compile_target_code.m"
    {
#line 412 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, backend_libs__compile_target_code__C_File_11);
    }
#line 413 "compile_target_code.m"
    {
#line 413 "compile_target_code.m"
      libs__file_util__maybe_write_string_4_p_0(backend_libs__compile_target_code__Verbose_16, (MR_String) "\':\n");
    }
#line 414 "compile_target_code.m"
    {
#line 414 "compile_target_code.m"
      libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, (MR_Integer) 482, &backend_libs__compile_target_code__CC_18);
    }
#line 415 "compile_target_code.m"
    {
#line 415 "compile_target_code.m"
      backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__PIC_10, &backend_libs__compile_target_code__AllCFlags_19);
    }
#line 419 "compile_target_code.m"
    {
#line 419 "compile_target_code.m"
      backend_libs__compile_target_code__V_39_39 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__C_File_11);
    }
#line 420 "compile_target_code.m"
    {
#line 420 "compile_target_code.m"
      backend_libs__compile_target_code__V_44_44 = libs__options__quote_arg_1_f_0(backend_libs__compile_target_code__O_File_12);
    }
#line 420 "compile_target_code.m"
    {
#line 420 "compile_target_code.m"
      backend_libs__compile_target_code__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 0) = ((MR_Box) (backend_libs__compile_target_code__V_44_44));
#line 420 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "compile_target_code.m"
    }
#line 420 "compile_target_code.m"
    {
#line 420 "compile_target_code.m"
      backend_libs__compile_target_code__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 0) = ((MR_Box) (backend_libs__compile_target_code__NameObjectFile_17));
#line 420 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_42_42, 1) = ((MR_Box) (backend_libs__compile_target_code__V_43_43));
#line 420 "compile_target_code.m"
    }
#line 419 "compile_target_code.m"
    {
#line 419 "compile_target_code.m"
      backend_libs__compile_target_code__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 0) = ((MR_Box) ((MR_String) " "));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_40_40, 1) = ((MR_Box) (backend_libs__compile_target_code__V_42_42));
#line 419 "compile_target_code.m"
    }
#line 419 "compile_target_code.m"
    {
#line 419 "compile_target_code.m"
      backend_libs__compile_target_code__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 0) = ((MR_Box) (backend_libs__compile_target_code__V_39_39));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_38_38, 1) = ((MR_Box) (backend_libs__compile_target_code__V_40_40));
#line 419 "compile_target_code.m"
    }
#line 419 "compile_target_code.m"
    {
#line 419 "compile_target_code.m"
      backend_libs__compile_target_code__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 0) = ((MR_Box) ((MR_String) " -c "));
#line 419 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_36_36, 1) = ((MR_Box) (backend_libs__compile_target_code__V_38_38));
#line 419 "compile_target_code.m"
    }
#line 418 "compile_target_code.m"
    {
#line 418 "compile_target_code.m"
      backend_libs__compile_target_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 0) = ((MR_Box) (backend_libs__compile_target_code__AllCFlags_19));
#line 418 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_35_35, 1) = ((MR_Box) (backend_libs__compile_target_code__V_36_36));
#line 418 "compile_target_code.m"
    }
#line 417 "compile_target_code.m"
    {
#line 417 "compile_target_code.m"
      backend_libs__compile_target_code__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 0) = ((MR_Box) ((MR_String) " "));
#line 417 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_33_33, 1) = ((MR_Box) (backend_libs__compile_target_code__V_35_35));
#line 417 "compile_target_code.m"
    }
#line 417 "compile_target_code.m"
    {
#line 417 "compile_target_code.m"
      backend_libs__compile_target_code__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 0) = ((MR_Box) (backend_libs__compile_target_code__CC_18));
#line 417 "compile_target_code.m"
      MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__V_32_32, 1) = ((MR_Box) (backend_libs__compile_target_code__V_33_33));
#line 417 "compile_target_code.m"
    }
#line 416 "compile_target_code.m"
    {
#line 416 "compile_target_code.m"
      mercury__string__append_list_2_p_0(backend_libs__compile_target_code__V_32_32, &backend_libs__compile_target_code__Command_20);
    }
#line 1026 "compile_target_code.m"
    {
#line 1026 "compile_target_code.m"
      backend_libs__compile_target_code__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__compile_target_code__Globals_13, (MR_Integer) 245, (MR_Integer) 1);
    }
#line 1026 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1026 "compile_target_code.m"
      {
#line 1027 "compile_target_code.m"
        backend_libs__compile_target_code__V_53_53 = (MR_Integer) 581;
#line 1027 "compile_target_code.m"
        {
#line 1027 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__V_53_53, &backend_libs__compile_target_code__FilterCmd_50);
        }
#line 1028 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = (strcmp(backend_libs__compile_target_code__FilterCmd_50, (MR_String) "") == 0);
#line 1028 "compile_target_code.m"
        backend_libs__compile_target_code__succeeded = !(backend_libs__compile_target_code__succeeded);
#line 1026 "compile_target_code.m"
      }
#line 1031 "compile_target_code.m"
    if (backend_libs__compile_target_code__succeeded)
#line 1030 "compile_target_code.m"
      {
#line 1030 "compile_target_code.m"
        backend_libs__compile_target_code__MaybeFilterCmd_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "compile_target_code.m"
        MR_hl_field(MR_mktag(1), backend_libs__compile_target_code__MaybeFilterCmd_21, 0) = ((MR_Box) (backend_libs__compile_target_code__FilterCmd_50));
#line 1030 "compile_target_code.m"
      }
#line 1031 "compile_target_code.m"
    else
#line 1032 "compile_target_code.m"
      backend_libs__compile_target_code__MaybeFilterCmd_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "compile_target_code.m"
    {
#line 422 "compile_target_code.m"
      parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(backend_libs__compile_target_code__Globals_13, backend_libs__compile_target_code__ErrorStream_9, (MR_Integer) 1, backend_libs__compile_target_code__Command_20, backend_libs__compile_target_code__MaybeFilterCmd_21, backend_libs__compile_target_code__Succeeded_14);
#line 422 "compile_target_code.m"
      return;
    }
#line 407 "compile_target_code.m"
  }
#line 52 "compile_target_code.m"
}

#line 46 "compile_target_code.m"
void MR_CALL 
backend_libs__compile_target_code__compile_c_file_7_p_0(
#line 46 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ErrorStream_8,
#line 46 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__PIC_9,
#line 46 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__ModuleName_10,
#line 46 "compile_target_code.m"
  MR_Word backend_libs__compile_target_code__Globals_11,
#line 46 "compile_target_code.m"
  MR_Word * backend_libs__compile_target_code__Succeeded_12)
#line 46 "compile_target_code.m"
{
#line 398 "compile_target_code.m"
  {
#line 398 "compile_target_code.m"
    MR_bool backend_libs__compile_target_code__succeeded;
#line 398 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__C_File_14;
#line 398 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__ObjExt_15;
#line 398 "compile_target_code.m"
    MR_String backend_libs__compile_target_code__O_File_16;

#line 399 "compile_target_code.m"
    {
#line 399 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ModuleName_10, (MR_String) ".c", (MR_Integer) 0, &backend_libs__compile_target_code__C_File_14);
    }
#line 3281 "compile_target_code.m"
    if ((backend_libs__compile_target_code__PIC_9 == (MR_Integer) 1))
#line 3285 "compile_target_code.m"
      {
#line 3286 "compile_target_code.m"
        {
#line 3286 "compile_target_code.m"
          libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_11, (MR_Integer) 506, &backend_libs__compile_target_code__ObjExt_15);
        }
#line 3285 "compile_target_code.m"
      }
#line 3281 "compile_target_code.m"
    else
#line 3281 "compile_target_code.m"
      if ((backend_libs__compile_target_code__PIC_9 == (MR_Integer) 2))
#line 3279 "compile_target_code.m"
        {
#line 3280 "compile_target_code.m"
          {
#line 3280 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_11, (MR_Integer) 504, &backend_libs__compile_target_code__ObjExt_15);
          }
#line 3279 "compile_target_code.m"
        }
#line 3281 "compile_target_code.m"
      else
#line 3282 "compile_target_code.m"
        {
#line 3283 "compile_target_code.m"
          {
#line 3283 "compile_target_code.m"
            libs__globals__lookup_string_option_3_p_0(backend_libs__compile_target_code__Globals_11, (MR_Integer) 505, &backend_libs__compile_target_code__ObjExt_15);
          }
#line 3282 "compile_target_code.m"
        }
#line 402 "compile_target_code.m"
    {
#line 402 "compile_target_code.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__ModuleName_10, backend_libs__compile_target_code__ObjExt_15, (MR_Integer) 0, &backend_libs__compile_target_code__O_File_16);
    }
#line 404 "compile_target_code.m"
    {
#line 404 "compile_target_code.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(backend_libs__compile_target_code__ErrorStream_8, backend_libs__compile_target_code__PIC_9, backend_libs__compile_target_code__C_File_14, backend_libs__compile_target_code__O_File_16, backend_libs__compile_target_code__Globals_11, backend_libs__compile_target_code__Succeeded_12);
#line 404 "compile_target_code.m"
      return;
    }
#line 398 "compile_target_code.m"
  }
#line 46 "compile_target_code.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.compile_target_code. */
