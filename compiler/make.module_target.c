/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module make.module_target. */
/* :- implementation. */

/*
INIT mercury__make__module_target__init
ENDINIT
*/

#include "make.module_target.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "float.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 283 "make.module_target.m"
struct make__module_target__make_dependency_files_10_p_0_env_0_s {
#line 289 "make.module_target.m"
  MR_bool make__module_target__make_dependency_files_10_p_0_env_0__succeeded;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
#line 306 "make.module_target.m"
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
#line 306 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105;
#line 306 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106;
#line 306 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_43_43;
#line 306 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_104_104;
#line 306 "make.module_target.m"
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104;
#line 283 "make.module_target.m"
};


#line 192 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

#line 195 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0;

#line 198 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 201 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0;

#line 204 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

#line 207 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 210 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0;

#line 213 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 216 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

#line 219 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 222 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 225 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 228 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 231 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 234 "make.module_target.c"
static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

#line 237 "make.module_target.c"
static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

#line 240 "make.module_target.c"
static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

#line 243 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

#line 246 "make.module_target.c"
static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

#line 249 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

#line 252 "make.module_target.c"
static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

#line 255 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
#line 258 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 260 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2);

#line 263 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
#line 266 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 268 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 270 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3);

#line 273 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
#line 276 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 278 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2);

#line 281 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
#line 284 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 286 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 288 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3);

#line 832 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
#line 832 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 803 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 803 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 803 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 803 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

#line 1046 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__1046__1_6_p_0(
#line 1046 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 1046 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_90,
#line 1046 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_91,
#line 1046 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_92);

#line 976 "make.module_target.m"
static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__976__1_1_f_0(
#line 976 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_73);

#line 954 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__954__1_2_p_0(
#line 954 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_60,
#line 954 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__2_61);

#line 819 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__819__1_3_p_0(
#line 819 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6);

#line 400 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_2(
#line 400 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 400 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 400 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 398 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_1(
#line 398 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 398 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 398 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0(
#line 395 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 395 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 395 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 395 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_30,
#line 395 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_52,
#line 395 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_53);

#line 204 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__204__1_6_p_0(
#line 204 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 204 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 204 "make.module_target.m"
  MR_Word make__module_target__DepFiles0_34,
#line 204 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_92_92);

#line 184 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__184__1_10_p_0(
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_94,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_323,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_324,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_325,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_326,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_327,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__7_328,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__8_329);

#line 1082 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__external_foreign_code_files__1082__1_7_p_0(
#line 1082 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1082 "make.module_target.m"
  MR_String make__module_target__ObjExt_12,
#line 1082 "make.module_target.m"
  MR_Word make__module_target__ModuleName_14,
#line 1082 "make.module_target.m"
  MR_String make__module_target__HeadVar__4_35,
#line 1082 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__5_36);

#line 306 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
#line 306 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_T_9,
#line 306 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_E_10,
#line 306 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 306 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 830 "make.module_target.m"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
#line 830 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__1_1,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_3);

#line 830 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 1123 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
#line 1123 "make.module_target.m"
  MR_Word make__module_target__TargetType_3);

#line 1102 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_for_il_6_p_0(
#line 1102 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1102 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 1102 "make.module_target.m"
  MR_Word make__module_target__Language_9,
#line 1102 "make.module_target.m"
  MR_Word * make__module_target__ForeignFiles_10);

#line 1046 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
#line 1046 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 1046 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 1046 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 976 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
#line 976 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 976 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 973 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
#line 973 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 973 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 973 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 973 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 973 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 953 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
#line 953 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 953 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 953 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 950 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
#line 950 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 927 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
#line 927 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 927 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 927 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 927 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_46,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_47);

#line 895 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_9_p_0(
#line 895 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 895 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 895 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 895 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_30);

#line 885 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__get_pic_flags_1_f_0(
#line 885 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1);

#line 819 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
#line 819 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 819 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 819 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 814 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
#line 814 "make.module_target.m"
  MR_Word make__module_target__Globals_5,
#line 814 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6,
#line 814 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
#line 814 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10);

#line 803 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 803 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 803 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_8,
#line 803 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 803 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

#line 796 "make.module_target.m"
static void MR_CALL 
make__module_target__update_target_status_4_p_0(
#line 796 "make.module_target.m"
  MR_Word make__module_target__TargetStatus_5,
#line 796 "make.module_target.m"
  MR_Word make__module_target__TargetFile_6,
#line 796 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
#line 796 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_10);

#line 787 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
#line 787 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 787 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 777 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
#line 777 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 777 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 777 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 777 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 772 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
#line 772 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 770 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
#line 770 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 770 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 770 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 770 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 755 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
#line 755 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 755 "make.module_target.m"
  MR_Word make__module_target__Succeeded_11,
#line 755 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 755 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_13,
#line 755 "make.module_target.m"
  MR_Word make__module_target__OtherTouchedFiles_14,
#line 755 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
#line 755 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_22);

#line 713 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
#line 713 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 713 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 713 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 713 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 693 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
#line 693 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 693 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 666 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
#line 666 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 666 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_9,
#line 666 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_10,
#line 666 "make.module_target.m"
  MR_Word make__module_target__Args_11,
#line 666 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12);

#line 655 "make.module_target.m"
static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
#line 655 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 655 "make.module_target.m"
  MR_Word make__module_target__Args_7,
#line 655 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_8);

#line 620 "make.module_target.m"
static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
#line 620 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 620 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 620 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 620 "make.module_target.m"
  MR_String make__module_target__FactTableName_11,
#line 620 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12);

#line 600 "make.module_target.m"
static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
#line 600 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 600 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 600 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 600 "make.module_target.m"
  MR_Word make__module_target__Lang_11,
#line 600 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12);

#line 586 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
#line 586 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1);

#line 560 "make.module_target.m"
static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
#line 560 "make.module_target.m"
  MR_Word make__module_target__Globals_9,
#line 560 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_10,
#line 560 "make.module_target.m"
  MR_Word make__module_target__PIC_11,
#line 560 "make.module_target.m"
  MR_Word make__module_target__Imports_12,
#line 560 "make.module_target.m"
  MR_Word make__module_target__ForeignCodeFile_13,
#line 560 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_14);

#line 529 "make.module_target.m"
static void MR_CALL 
make__module_target__build_object_code_9_p_0(
#line 529 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 529 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 529 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 529 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 529 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 529 "make.module_target.m"
  MR_Word make__module_target__Imports_15,
#line 529 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16);

#line 502 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
#line 502 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 502 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 502 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 502 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 475 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
#line 475 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 475 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 475 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 475 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 474 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
#line 474 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 474 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 474 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 474 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 454 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
#line 454 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 454 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 454 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
#line 454 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 513 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
#line 513 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 513 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 513 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 513 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 524 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
#line 524 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 524 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 524 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 524 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 437 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0(
#line 437 "make.module_target.m"
  MR_Word make__module_target__ModuleName_13,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Task_14,
#line 437 "make.module_target.m"
  MR_Word make__module_target__ArgFileName_15,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Globals_17,
#line 437 "make.module_target.m"
  MR_Word make__module_target__AllOptionArgs_18,
#line 437 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_19,
#line 437 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 437 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
#line 437 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_37);

#line 413 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_3(
#line 413 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 413 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 413 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 415 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_2(
#line 415 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_7,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_8);

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_1(
#line 395 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 371 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0(
#line 371 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 371 "make.module_target.m"
  MR_Word make__module_target__CompilationTask_14,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TargetFile_15,
#line 371 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 371 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_19,
#line 371 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 371 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 371 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41);

#line 348 "make.module_target.m"
static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
#line 348 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 348 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 348 "make.module_target.m"
  MR_Word * make__module_target__ForceReanalysis_9,
#line 348 "make.module_target.m"
  MR_Word make__module_target__Info_10);

#line 336 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
#line 336 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 336 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 336 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2);

#line 334 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
#line 334 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 334 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 334 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2);

#line 332 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
#line 332 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 329 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
#line 329 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 298 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
#line 298 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 293 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
#line 293 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7);

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 283 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
#line 283 "make.module_target.m"
  MR_Word make__module_target__Globals_11,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 283 "make.module_target.m"
  MR_Word make__module_target__DepFilesToMake_13,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_14,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_15,
#line 283 "make.module_target.m"
  MR_Word * make__module_target__DepsResult_16,
#line 283 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
#line 283 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_32);

#line 251 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
#line 251 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 251 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 251 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 251 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 204 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
#line 204 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 204 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 204 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 184 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
#line 184 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_8,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_9);

#line 168 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
#line 168 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 168 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 168 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 168 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 132 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
#line 132 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_9,
#line 132 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 132 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 132 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12,
#line 132 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_46,
#line 132 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_47);

#line 1082 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_2(
#line 1082 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1082 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1082 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1082 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1082 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 1072 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
#line 1072 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1072 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1072 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1072 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1072 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);


static /* final */ const MR_Box make__module_target_scalar_common_1[32][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[12][1];

static /* final */ const MR_Box make__module_target_scalar_common_5[4][9];

static /* final */ const MR_Box make__module_target_scalar_common_6[8][10];

static /* final */ const MR_Box make__module_target_scalar_common_7[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_8[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_10[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_12[1][15];

static /* final */ const MR_Box make__module_target_scalar_common_13[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_14[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_15[2][8];


#line 119 "make.module_target.m"
/* sealed */ struct make__module_target__vector_common_type_4_0_s {
#line 119 "make.module_target.m"
  const MR_Word make__module_target__vector_common_type_4_0__vct_4_f_0;
#line 119 "make.module_target.m"
};

static /* final */ const struct make__module_target__vector_common_type_4_0_s make__module_target_vector_common_4[12];



static /* final */ const MR_Box make__module_target_scalar_common_1[32][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__dependencies__module_index__arity0__)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "--erlang-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "--il-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "--pic-reg")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__make__type_ctor_info_compilation_task_type_0)),
    ((MR_Box) (&make__module_target_scalar_common_1[5]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[1])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[0])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[1])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[0])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[1])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[1])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[2])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_5[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_6[8][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
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
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_10[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
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
};

static /* final */ const MR_Box make__module_target_scalar_common_12[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_compilation_task_type_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_13[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_14[3][5] = {
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
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_15[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct make__module_target__vector_common_type_4_0_s make__module_target_vector_common_4[12] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 1 },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



#line 2081 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0
  }
};

#line 2089 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 2097 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2113 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 2121 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2130 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2138 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
  }
};

#line 2146 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2154 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2162 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__module_target__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2178 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2187 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2196 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2204 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &make__make__type_ctor_info_compilation_task_type_0,
    (MR_TypeInfo) &make__module_target__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2213 "make.module_target.c"
const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__module_target____Unify____compilation_task_result_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_result_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2230 "make.module_target.c"
static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2237 "make.module_target.c"
static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3] = {
  (MR_String) "foreign_language",
  (MR_String) "target_file",
  (MR_String) "object_file"
};

#line 2244 "make.module_target.c"
static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 = {
  (MR_String) "foreign_code_file",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__module_target__make__module_target__field_types_foreign_code_file_0_0,
  make__module_target__make__module_target__field_names_foreign_code_file_0_0,
  NULL,
  NULL
};

#line 2259 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

#line 2264 "make.module_target.c"
static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0
  }
};

#line 2273 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

#line 2278 "make.module_target.c"
static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1] = {
  (MR_Integer) 0
};

#line 2283 "make.module_target.c"
const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_foreign_code_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  {     make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  {     make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0
};

#line 2300 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
#line 2303 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 2305 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2)
#line 2307 "make.module_target.c"
{
#line 2309 "make.module_target.c"
  {
#line 2311 "make.module_target.c"
    MR_bool make__module_target__succeeded;

#line 2314 "make.module_target.c"
    {
#line 2316 "make.module_target.c"
      make__module_target__succeeded = make__module_target____Unify____compilation_task_result_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 2319 "make.module_target.c"
    return make__module_target__succeeded;
#line 2321 "make.module_target.c"
  }
#line 2323 "make.module_target.c"
}

#line 2326 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
#line 2329 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 2331 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 2333 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3)
#line 2335 "make.module_target.c"
{
#line 2337 "make.module_target.c"
  {
#line 2339 "make.module_target.c"
    MR_Word make__module_target__conv0_HeadVar__1_1;

#line 2342 "make.module_target.c"
    {
#line 2344 "make.module_target.c"
      make__module_target____Compare____compilation_task_result_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
#line 2347 "make.module_target.c"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
#line 2349 "make.module_target.c"
  }
#line 2351 "make.module_target.c"
}

#line 2354 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
#line 2357 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 2359 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2)
#line 2361 "make.module_target.c"
{
#line 2363 "make.module_target.c"
  {
#line 2365 "make.module_target.c"
    MR_bool make__module_target__succeeded;

#line 2368 "make.module_target.c"
    {
#line 2370 "make.module_target.c"
      make__module_target__succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 2373 "make.module_target.c"
    return make__module_target__succeeded;
#line 2375 "make.module_target.c"
  }
#line 2377 "make.module_target.c"
}

#line 2380 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
#line 2383 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 2385 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 2387 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3)
#line 2389 "make.module_target.c"
{
#line 2391 "make.module_target.c"
  {
#line 2393 "make.module_target.c"
    MR_Word make__module_target__conv0_HeadVar__1_1;

#line 2396 "make.module_target.c"
    {
#line 2398 "make.module_target.c"
      make__module_target____Compare____foreign_code_file_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
#line 2401 "make.module_target.c"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
#line 2403 "make.module_target.c"
  }
#line 2405 "make.module_target.c"
}

#line 832 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
#line 832 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 832 "make.module_target.m"
{
#line 835 "make.module_target.m"
  while (MR_TRUE)
#line 835 "make.module_target.m"
    {
#line 835 "make.module_target.m"
      /* tailcall optimized into a loop */
#line 835 "make.module_target.m"
      {
#line 835 "make.module_target.m"
        MR_bool make__module_target__succeeded;
#line 835 "make.module_target.m"
        MR_Word make__module_target__HeadVar__3_3;

#line 835 "make.module_target.m"
#line 835 "make.module_target.m"
        switch (MR_tag((MR_Word) make__module_target__HeadVar__2_2)) {
#line 835 "make.module_target.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 835 "make.module_target.m"
          case (MR_Integer) 0:
#line 835 "make.module_target.m"
#line 835 "make.module_target.m"
            switch (MR_unmkbody(make__module_target__HeadVar__2_2)) {
#line 835 "make.module_target.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 835 "make.module_target.m"
              case (MR_Integer) 0:
#line 835 "make.module_target.m"
                {
#line 836 "make.module_target.m"
                  {
#line 836 "make.module_target.m"
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
#line 835 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 1:
#line 839 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[15];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 2:
#line 847 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[25];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 3:
#line 845 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[23];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 4:
#line 843 "make.module_target.m"
                {
#line 844 "make.module_target.m"
                  /* direct tailcall eliminated */
#line 844 "make.module_target.m"
                  {
#line 844 "make.module_target.m"
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 844 "make.module_target.m"
                  }
#line 844 "make.module_target.m"
                  continue;
#line 843 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 5:
#line 841 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[27];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 6:
#line 849 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[19];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 7:
#line 852 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[7];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 8:
#line 837 "make.module_target.m"
                {
#line 838 "make.module_target.m"
                  {
#line 838 "make.module_target.m"
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
#line 837 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 9:
#line 856 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[9];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 10:
#line 858 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[17];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 11:
#line 860 "make.module_target.m"
                {
#line 861 "make.module_target.m"
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[31];
#line 860 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 12:
#line 862 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[11];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 13:
#line 864 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[21];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 14:
#line 866 "make.module_target.m"
                {
#line 867 "make.module_target.m"
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[31];
#line 866 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 15:
#line 868 "make.module_target.m"
                {
#line 869 "make.module_target.m"
                  /* direct tailcall eliminated */
#line 869 "make.module_target.m"
                  {
#line 869 "make.module_target.m"
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 869 "make.module_target.m"
                  }
#line 869 "make.module_target.m"
                  continue;
#line 868 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 16:
#line 870 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[13];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 17:
#line 872 "make.module_target.m"
                {
#line 873 "make.module_target.m"
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[31];
#line 872 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 18:
#line 882 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[29];
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
            }
#line 835 "make.module_target.m"
            break;
#line 835 "make.module_target.m"
          case (MR_Integer) 1:
#line 854 "make.module_target.m"
            {
#line 855 "make.module_target.m"
              /* direct tailcall eliminated */
#line 855 "make.module_target.m"
              {
#line 855 "make.module_target.m"
                make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 855 "make.module_target.m"
              }
#line 855 "make.module_target.m"
              continue;
#line 854 "make.module_target.m"
            }
#line 835 "make.module_target.m"
            break;
#line 835 "make.module_target.m"
          case (MR_Integer) 2:
#line 874 "make.module_target.m"
            {
#line 874 "make.module_target.m"
              MR_Word make__module_target__PIC_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
#line 874 "make.module_target.m"
              MR_Word make__module_target__V_101_101;
#line 874 "make.module_target.m"
              MR_Word make__module_target__V_102_102;

#line 875 "make.module_target.m"
              {
#line 875 "make.module_target.m"
                make__module_target__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "make.module_target.m"
                MR_hl_field(MR_mktag(1), make__module_target__V_101_101, 0) = ((MR_Box) (make__module_target__PIC_100));
#line 875 "make.module_target.m"
              }
#line 875 "make.module_target.m"
              {
#line 875 "make.module_target.m"
                make__module_target__V_102_102 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_100);
              }
#line 875 "make.module_target.m"
              {
#line 875 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_101_101));
#line 875 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_102_102));
#line 875 "make.module_target.m"
              }
#line 874 "make.module_target.m"
            }
#line 835 "make.module_target.m"
            break;
#line 835 "make.module_target.m"
          case (MR_Integer) 3:
#line 835 "make.module_target.m"
#line 835 "make.module_target.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 0)))) {
#line 835 "make.module_target.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 835 "make.module_target.m"
              case (MR_Integer) 0:
#line 876 "make.module_target.m"
                {
#line 876 "make.module_target.m"
                  MR_Word make__module_target__Lang_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 876 "make.module_target.m"
                  MR_Word make__module_target__V_105_105;

#line 877 "make.module_target.m"
                  {
#line 877 "make.module_target.m"
                    make__module_target__V_105_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_105_105, 0) = ((MR_Box) ((MR_Integer) 2));
#line 877 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_105_105, 1) = ((MR_Box) (make__module_target__Lang_104));
#line 877 "make.module_target.m"
                  }
#line 877 "make.module_target.m"
                  {
#line 877 "make.module_target.m"
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_105_105));
#line 877 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "make.module_target.m"
                  }
#line 876 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 1:
#line 878 "make.module_target.m"
                {
#line 878 "make.module_target.m"
                  MR_Word make__module_target__PIC_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 878 "make.module_target.m"
                  MR_Word make__module_target__Lang_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
#line 878 "make.module_target.m"
                  MR_Word make__module_target__V_111_111;
#line 878 "make.module_target.m"
                  MR_Word make__module_target__V_112_112;

#line 879 "make.module_target.m"
                  {
#line 879 "make.module_target.m"
                    make__module_target__V_111_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_111_111, 0) = ((MR_Box) (make__module_target__PIC_109));
#line 879 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_111_111, 1) = ((MR_Box) (make__module_target__Lang_110));
#line 879 "make.module_target.m"
                  }
#line 879 "make.module_target.m"
                  {
#line 879 "make.module_target.m"
                    make__module_target__V_112_112 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_109);
                  }
#line 879 "make.module_target.m"
                  {
#line 879 "make.module_target.m"
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_111_111));
#line 879 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_112_112));
#line 879 "make.module_target.m"
                  }
#line 878 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
              case (MR_Integer) 2:
#line 880 "make.module_target.m"
                {
#line 880 "make.module_target.m"
                  MR_Word make__module_target__PIC_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 880 "make.module_target.m"
                  MR_String make__module_target__FactTable_115 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
#line 880 "make.module_target.m"
                  MR_Word make__module_target__V_116_116;
#line 880 "make.module_target.m"
                  MR_Word make__module_target__V_117_117;

#line 881 "make.module_target.m"
                  {
#line 881 "make.module_target.m"
                    make__module_target__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make.module_target.m"
                    MR_hl_field(MR_mktag(3), make__module_target__V_116_116, 0) = ((MR_Box) (make__module_target__PIC_114));
#line 881 "make.module_target.m"
                    MR_hl_field(MR_mktag(3), make__module_target__V_116_116, 1) = ((MR_Box) (make__module_target__FactTable_115));
#line 881 "make.module_target.m"
                  }
#line 881 "make.module_target.m"
                  {
#line 881 "make.module_target.m"
                    make__module_target__V_117_117 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_114);
                  }
#line 881 "make.module_target.m"
                  {
#line 881 "make.module_target.m"
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 881 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_116_116));
#line 881 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_117_117));
#line 881 "make.module_target.m"
                  }
#line 880 "make.module_target.m"
                }
#line 835 "make.module_target.m"
                break;
#line 835 "make.module_target.m"
            }
#line 835 "make.module_target.m"
            break;
#line 835 "make.module_target.m"
        }
#line 835 "make.module_target.m"
        return make__module_target__HeadVar__3_3;
#line 835 "make.module_target.m"
      }
#line 835 "make.module_target.m"
      break;
#line 835 "make.module_target.m"
    }
#line 832 "make.module_target.m"
}

#line 803 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 803 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 803 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 803 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
#line 803 "make.module_target.m"
{
#line 810 "make.module_target.m"
  {
#line 810 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 808 "make.module_target.m"
    {
#line 808 "make.module_target.m"
      make__module_target__succeeded = mercury__string__suffix_2_p_0(make__module_target__FileName_7, (MR_String) ".analysis");
    }
#line 810 "make.module_target.m"
    if (make__module_target__succeeded)
#line 809 "make.module_target.m"
      {
#line 809 "make.module_target.m"
        make__module_target__delete_timestamp_4_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
#line 809 "make.module_target.m"
        return;
      }
#line 810 "make.module_target.m"
    else
#line 810 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Timestamps_11 = make__module_target__STATE_VARIABLE_Timestamps_0_10;
#line 810 "make.module_target.m"
  }
#line 803 "make.module_target.m"
}

#line 1046 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__1046__1_6_p_0(
#line 1046 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 1046 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_90,
#line 1046 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_91,
#line 1046 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_92)
#line 1046 "make.module_target.m"
{
#line 1046 "make.module_target.m"
  {
#line 1046 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1046 "make.module_target.m"
    MR_Word make__module_target__TargetModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_90, (MR_Integer) 0)));
#line 1046 "make.module_target.m"
    MR_Word make__module_target__TargetFileType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_90, (MR_Integer) 1)));
#line 1055 "make.module_target.m"
    MR_String make__module_target__TimestampExt_43;

#line 1051 "make.module_target.m"
    {
#line 1051 "make.module_target.m"
      make__module_target__succeeded = make__util__timestamp_extension_2_f_0(make__module_target__Globals_10, make__module_target__TargetFileType_42, &make__module_target__TimestampExt_43);
    }
#line 1055 "make.module_target.m"
    if (make__module_target__succeeded)
#line 1053 "make.module_target.m"
      {
#line 1053 "make.module_target.m"
        MR_String make__module_target__TimestampFile_44;

#line 1052 "make.module_target.m"
        {
#line 1052 "make.module_target.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__TargetModuleName_41, make__module_target__TimestampExt_43, (MR_Integer) 1, &make__module_target__TimestampFile_44);
        }
#line 1054 "make.module_target.m"
        {
#line 1054 "make.module_target.m"
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_target__TimestampFile_44)), make__module_target__HeadVar__3_91, make__module_target__HeadVar__4_92);
#line 1054 "make.module_target.m"
          return;
        }
#line 1053 "make.module_target.m"
      }
#line 1055 "make.module_target.m"
    else
#line 1056 "make.module_target.m"
      *make__module_target__HeadVar__4_92 = make__module_target__HeadVar__3_91;
#line 1046 "make.module_target.m"
  }
#line 1046 "make.module_target.m"
}

#line 976 "make.module_target.m"
static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__976__1_1_f_0(
#line 976 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_73)
#line 976 "make.module_target.m"
{
#line 976 "make.module_target.m"
  {
#line 976 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 976 "make.module_target.m"
    MR_String make__module_target__HeadVar__2_74 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_73, (MR_Integer) 1)));
#line 976 "make.module_target.m"
    MR_Word make__module_target__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_73, (MR_Integer) 0)));
#line 976 "make.module_target.m"
    MR_String make__module_target__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_73, (MR_Integer) 2)));

#line 976 "make.module_target.m"
    return make__module_target__HeadVar__2_74;
#line 976 "make.module_target.m"
  }
#line 976 "make.module_target.m"
}

#line 954 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__954__1_2_p_0(
#line 954 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_60,
#line 954 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__2_61)
#line 954 "make.module_target.m"
{
#line 954 "make.module_target.m"
  {
#line 954 "make.module_target.m"
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__HeadVar__1_60)) == (MR_mktag((MR_Integer) 1)));

#line 954 "make.module_target.m"
    if (make__module_target__succeeded)
#line 954 "make.module_target.m"
      *make__module_target__HeadVar__2_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__1_60, (MR_Integer) 0)));
#line 954 "make.module_target.m"
    return make__module_target__succeeded;
#line 954 "make.module_target.m"
  }
#line 954 "make.module_target.m"
}

#line 819 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__819__1_3_p_0(
#line 819 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6)
#line 819 "make.module_target.m"
{
#line 819 "make.module_target.m"
  {
#line 819 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 821 "make.module_target.m"
    {
#line 821 "make.module_target.m"
      mercury__io__write_string_3_p_0((MR_String) "Deleting timestamp for ");
    }
#line 822 "make.module_target.m"
    {
#line 822 "make.module_target.m"
      mercury__io__write_string_3_p_0(make__module_target__TouchedFile_6);
    }
#line 823 "make.module_target.m"
    {
#line 823 "make.module_target.m"
      mercury__io__nl_2_p_0();
#line 823 "make.module_target.m"
      return;
    }
#line 819 "make.module_target.m"
  }
#line 819 "make.module_target.m"
}

#line 400 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_2(
#line 400 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 400 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 400 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 400 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 400 "make.module_target.m"
{
#line 400 "make.module_target.m"
  {
#line 400 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 400 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__5_5;

#line 400 "make.module_target.m"
    {
#line 400 "make.module_target.m"
      make__util__make_remove_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__5_5);
    }
#line 400 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__5_5));
#line 400 "make.module_target.m"
  }
#line 400 "make.module_target.m"
}

#line 398 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_1(
#line 398 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 398 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 398 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 398 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 398 "make.module_target.m"
{
#line 398 "make.module_target.m"
  {
#line 398 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 398 "make.module_target.m"
    MR_Word make__module_target__conv0_HeadVar__5_5;

#line 398 "make.module_target.m"
    {
#line 398 "make.module_target.m"
      make__util__make_remove_target_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_HeadVar__5_5);
    }
#line 398 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
#line 398 "make.module_target.m"
  }
#line 398 "make.module_target.m"
}

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0(
#line 395 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 395 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 395 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 395 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_30,
#line 395 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_52,
#line 395 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_53)
#line 395 "make.module_target.m"
{
#line 395 "make.module_target.m"
  {
#line 395 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 395 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_98_98;
#line 395 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_99_99;
#line 395 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 395 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_MakeInfo_57_57;
#line 395 "make.module_target.m"
    MR_Word make__module_target__V_60_60;
#line 398 "make.module_target.m"
    MR_Box make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57;
#line 398 "make.module_target.m"
    MR_Box make__module_target__conv1_STATE_VARIABLE_IO_58_58;
#line 400 "make.module_target.m"
    MR_Box make__module_target__conv5_HeadVar__6_53;
#line 400 "make.module_target.m"
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_62_62;

#line 398 "make.module_target.m"
    {
#line 398 "make.module_target.m"
      make__module_target__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 398 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 0) = ((MR_Box) (&make__module_target_scalar_common_6[6]));
#line 398 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_1));
#line 398 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 398 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 4) = ((MR_Box) ((MR_Integer) 46));
#line 398 "make.module_target.m"
    }
#line 3117 "make.module_target.c"
    make__module_target__TypeCtorInfo_98_98 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 3119 "make.module_target.c"
    make__module_target__TypeCtorInfo_99_99 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 398 "make.module_target.m"
    {
#line 398 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TypeCtorInfo_98_98, make__module_target__TypeCtorInfo_99_99, make__module_target__V_56_56, make__module_target__TouchedTargetFiles_17, ((MR_Box) (make__module_target__HeadVar__5_52)), &make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_58_58);
    }
#line 398 "make.module_target.m"
    make__module_target__STATE_VARIABLE_MakeInfo_57_57 = ((MR_Word) make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57);
#line 400 "make.module_target.m"
    {
#line 400 "make.module_target.m"
      make__module_target__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 400 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 0) = ((MR_Box) (&make__module_target_scalar_common_6[7]));
#line 400 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0_2));
#line 400 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 400 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 400 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 4) = ((MR_Box) ((MR_Integer) 46));
#line 400 "make.module_target.m"
    }
#line 400 "make.module_target.m"
    {
#line 400 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_98_98, make__module_target__TypeCtorInfo_99_99, make__module_target__V_60_60, make__module_target__TouchedFiles_18, ((MR_Box) (make__module_target__STATE_VARIABLE_MakeInfo_57_57)), &make__module_target__conv5_HeadVar__6_53, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_62_62);
    }
#line 400 "make.module_target.m"
    *make__module_target__HeadVar__6_53 = ((MR_Word) make__module_target__conv5_HeadVar__6_53);
#line 405 "make.module_target.m"
    if ((make__module_target__MaybeArgFileName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "make.module_target.m"
      {
#line 406 "make.module_target.m"
      }
#line 405 "make.module_target.m"
    else
#line 403 "make.module_target.m"
      {
#line 403 "make.module_target.m"
        MR_String make__module_target__ArgFileName2_33 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_30, (MR_Integer) 0)));
#line 404 "make.module_target.m"
        MR_Word make__module_target__V_34_34;

#line 404 "make.module_target.m"
        {
#line 404 "make.module_target.m"
          mercury__io__remove_file_4_p_0(make__module_target__ArgFileName2_33, &make__module_target__V_34_34);
        }
#line 403 "make.module_target.m"
      }
#line 395 "make.module_target.m"
  }
#line 395 "make.module_target.m"
}

#line 204 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__204__1_6_p_0(
#line 204 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 204 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 204 "make.module_target.m"
  MR_Word make__module_target__DepFiles0_34,
#line 204 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_92_92)
#line 204 "make.module_target.m"
{
#line 204 "make.module_target.m"
  {
#line 204 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 204 "make.module_target.m"
    MR_Word make__module_target__PlainSet_40;
#line 204 "make.module_target.m"
    MR_Word make__module_target__V_106_106;

#line 206 "make.module_target.m"
    {
#line 206 "make.module_target.m"
      make__util__make_write_target_file_4_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11);
    }
#line 207 "make.module_target.m"
    {
#line 207 "make.module_target.m"
      mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
    }
#line 208 "make.module_target.m"
    {
#line 208 "make.module_target.m"
      make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_92_92, make__module_target__DepFiles0_34, &make__module_target__PlainSet_40);
    }
#line 211 "make.module_target.m"
    {
#line 211 "make.module_target.m"
      make__module_target__V_106_106 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__PlainSet_40);
    }
#line 210 "make.module_target.m"
    {
#line 210 "make.module_target.m"
      make__util__make_write_dependency_file_list_4_p_0(make__module_target__Globals_10, make__module_target__V_106_106);
#line 210 "make.module_target.m"
      return;
    }
#line 204 "make.module_target.m"
  }
#line 204 "make.module_target.m"
}

#line 184 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__184__1_10_p_0(
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_94,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_323,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_324,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_325,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_326,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_327,
#line 184 "make.module_target.m"
  MR_Word make__module_target__HeadVar__7_328,
#line 184 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__8_329)
#line 184 "make.module_target.m"
{
#line 184 "make.module_target.m"
  {
#line 184 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 184 "make.module_target.m"
    {
#line 184 "make.module_target.m"
      make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, make__module_target__HeadVar__1_94, make__module_target__HeadVar__2_323, make__module_target__HeadVar__3_324, make__module_target__HeadVar__4_325, make__module_target__HeadVar__5_326, make__module_target__HeadVar__6_327, make__module_target__HeadVar__7_328, make__module_target__HeadVar__8_329);
#line 184 "make.module_target.m"
      return;
    }
#line 184 "make.module_target.m"
  }
#line 184 "make.module_target.m"
}

#line 1082 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__external_foreign_code_files__1082__1_7_p_0(
#line 1082 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1082 "make.module_target.m"
  MR_String make__module_target__ObjExt_12,
#line 1082 "make.module_target.m"
  MR_Word make__module_target__ModuleName_14,
#line 1082 "make.module_target.m"
  MR_String make__module_target__HeadVar__4_35,
#line 1082 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__5_36)
#line 1082 "make.module_target.m"
{
#line 1082 "make.module_target.m"
  {
#line 1082 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1082 "make.module_target.m"
    MR_String make__module_target__FactTableCFile_20;
#line 1082 "make.module_target.m"
    MR_String make__module_target__FactTableObjFile_21;

#line 1085 "make.module_target.m"
    {
#line 1085 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_7, make__module_target__ModuleName_14, make__module_target__HeadVar__4_35, (MR_String) ".c", (MR_Integer) 1, &make__module_target__FactTableCFile_20);
    }
#line 1087 "make.module_target.m"
    {
#line 1087 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_7, make__module_target__ModuleName_14, make__module_target__HeadVar__4_35, make__module_target__ObjExt_12, (MR_Integer) 1, &make__module_target__FactTableObjFile_21);
    }
#line 1089 "make.module_target.m"
    {
#line 1089 "make.module_target.m"
      MR_Word base;
#line 1089 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "make.module_target.m"
      *make__module_target__HeadVar__5_36 = base;
#line 1089 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1089 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__FactTableCFile_20));
#line 1089 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__FactTableObjFile_21));
#line 1089 "make.module_target.m"
    }
#line 1082 "make.module_target.m"
  }
#line 1082 "make.module_target.m"
}

#line 306 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
#line 306 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_T_9,
#line 306 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_E_10,
#line 306 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 306 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 306 "make.module_target.m"
{
#line 306 "make.module_target.m"
  {
#line 306 "make.module_target.m"
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 306 "make.module_target.m"
    MR_Box make__module_target__V_6_6;

#line 306 "make.module_target.m"
    if (make__module_target__succeeded)
#line 306 "make.module_target.m"
      {
#line 306 "make.module_target.m"
        make__module_target__V_6_6 = (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__2_2, (MR_Integer) 0));
#line 306 "make.module_target.m"
        (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__1_1, (MR_Integer) 0)) = make__module_target__V_6_6;
#line 306 "make.module_target.m"
        make__module_target__succeeded = MR_TRUE;
#line 306 "make.module_target.m"
      }
#line 306 "make.module_target.m"
    return make__module_target__succeeded;
#line 306 "make.module_target.m"
  }
#line 306 "make.module_target.m"
}

#line 59 "make.module_target.m"
void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0(
#line 59 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__1_1,
#line 59 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2,
#line 59 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_3)
#line 59 "make.module_target.m"
{
#line 59 "make.module_target.m"
  {
#line 59 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 59 "make.module_target.m"
    MR_Integer make__module_target__CastX_12 = (MR_Integer) make__module_target__HeadVar__2_2;
#line 59 "make.module_target.m"
    MR_Integer make__module_target__CastY_13 = (MR_Integer) make__module_target__HeadVar__3_3;

#line 59 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__CastX_12 == make__module_target__CastY_13);
#line 59 "make.module_target.m"
    if (make__module_target__succeeded)
#line 3388 "make.module_target.c"
      *make__module_target__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "make.module_target.m"
    else
#line 59 "make.module_target.m"
      {
#line 59 "make.module_target.m"
        MR_Word make__module_target__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
#line 59 "make.module_target.m"
        MR_Word make__module_target__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 0)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 1)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 2)));
#line 59 "make.module_target.m"
        MR_Word make__module_target__V_10_10;
#line 59 "make.module_target.m"
        MR_Integer make__module_target__V_17_17 = (MR_Integer) make__module_target__V_4_4;
#line 59 "make.module_target.m"
        MR_Integer make__module_target__V_18_18 = (MR_Integer) make__module_target__V_7_7;

#line 59 "make.module_target.m"
        {
#line 59 "make.module_target.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&make__module_target__V_10_10, make__module_target__V_17_17, make__module_target__V_18_18);
        }
#line 3418 "make.module_target.c"
        make__module_target__succeeded = (make__module_target__V_10_10 == (MR_Integer) 0);
#line 59 "make.module_target.m"
        make__module_target__succeeded = !(make__module_target__succeeded);
#line 59 "make.module_target.m"
        if (make__module_target__succeeded)
#line 59 "make.module_target.m"
          *make__module_target__HeadVar__1_1 = make__module_target__V_10_10;
#line 59 "make.module_target.m"
        else
#line 59 "make.module_target.m"
          {
#line 59 "make.module_target.m"
            MR_Word make__module_target__V_11_11;

#line 59 "make.module_target.m"
            {
#line 59 "make.module_target.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&make__module_target__V_11_11, make__module_target__V_5_5, make__module_target__V_8_8);
            }
#line 3438 "make.module_target.c"
            make__module_target__succeeded = (make__module_target__V_11_11 == (MR_Integer) 0);
#line 59 "make.module_target.m"
            make__module_target__succeeded = !(make__module_target__succeeded);
#line 59 "make.module_target.m"
            if (make__module_target__succeeded)
#line 59 "make.module_target.m"
              *make__module_target__HeadVar__1_1 = make__module_target__V_11_11;
#line 59 "make.module_target.m"
            else
#line 59 "make.module_target.m"
              {
#line 59 "make.module_target.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(make__module_target__HeadVar__1_1, make__module_target__V_6_6, make__module_target__V_9_9);
#line 59 "make.module_target.m"
                return;
              }
#line 59 "make.module_target.m"
          }
#line 59 "make.module_target.m"
      }
#line 59 "make.module_target.m"
  }
#line 59 "make.module_target.m"
}

#line 59 "make.module_target.m"
MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0(
#line 59 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 59 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 59 "make.module_target.m"
{
#line 59 "make.module_target.m"
  {
#line 59 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 59 "make.module_target.m"
    MR_Integer make__module_target__CastX_9 = (MR_Integer) make__module_target__HeadVar__1_1;
#line 59 "make.module_target.m"
    MR_Integer make__module_target__CastY_10 = (MR_Integer) make__module_target__HeadVar__2_2;

#line 59 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__CastX_9 == make__module_target__CastY_10);
#line 59 "make.module_target.m"
    if (make__module_target__succeeded)
#line 59 "make.module_target.m"
      make__module_target__succeeded = MR_TRUE;
#line 59 "make.module_target.m"
    else
#line 59 "make.module_target.m"
      {
#line 59 "make.module_target.m"
        MR_Word make__module_target__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 1)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 2)));
#line 59 "make.module_target.m"
        MR_Word make__module_target__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "make.module_target.m"
        MR_String make__module_target__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 2)));

#line 3505 "make.module_target.c"
        make__module_target__succeeded = (make__module_target__V_3_3 == make__module_target__V_6_6);
#line 59 "make.module_target.m"
        if (make__module_target__succeeded)
#line 59 "make.module_target.m"
          {
#line 3511 "make.module_target.c"
            make__module_target__succeeded = (strcmp(make__module_target__V_4_4, make__module_target__V_7_7) == 0);
#line 59 "make.module_target.m"
            if (make__module_target__succeeded)
#line 3515 "make.module_target.c"
              make__module_target__succeeded = (strcmp(make__module_target__V_5_5, make__module_target__V_8_8) == 0);
#line 59 "make.module_target.m"
          }
#line 59 "make.module_target.m"
      }
#line 59 "make.module_target.m"
    return make__module_target__succeeded;
#line 59 "make.module_target.m"
  }
#line 59 "make.module_target.m"
}

#line 830 "make.module_target.m"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
#line 830 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__1_1,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_3)
#line 830 "make.module_target.m"
{
#line 830 "make.module_target.m"
  {
#line 830 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 830 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar1_4 = make__module_target__HeadVar__2_2;
#line 830 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar2_5 = make__module_target__HeadVar__3_3;

#line 830 "make.module_target.m"
    {
#line 830 "make.module_target.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make__module_target_scalar_common_2[3], make__module_target__HeadVar__1_1, ((MR_Box) (make__module_target__Cast_HeadVar1_4)), ((MR_Box) (make__module_target__Cast_HeadVar2_5)));
#line 830 "make.module_target.m"
      return;
    }
#line 830 "make.module_target.m"
  }
#line 830 "make.module_target.m"
}

#line 830 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 830 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 830 "make.module_target.m"
{
#line 830 "make.module_target.m"
  {
#line 830 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 830 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar1_3 = make__module_target__HeadVar__1_1;
#line 830 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar2_4 = make__module_target__HeadVar__2_2;

#line 830 "make.module_target.m"
    {
#line 830 "make.module_target.m"
      return make__module_target__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__module_target_scalar_common_2[3], ((MR_Box) (make__module_target__Cast_HeadVar1_3)), ((MR_Box) (make__module_target__Cast_HeadVar2_4)));
    }
#line 830 "make.module_target.m"
    return make__module_target__succeeded;
#line 830 "make.module_target.m"
  }
#line 830 "make.module_target.m"
}

#line 1123 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
#line 1123 "make.module_target.m"
  MR_Word make__module_target__TargetType_3)
#line 1123 "make.module_target.m"
{
#line 1127 "make.module_target.m"
  {
#line 1127 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1127 "make.module_target.m"
    MR_Word make__module_target__Result_4;

#line 1127 "make.module_target.m"
#line 1127 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__TargetType_3)) {
#line 1127 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1127 "make.module_target.m"
      case (MR_Integer) 0:
#line 1154 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1127 "make.module_target.m"
        break;
#line 1127 "make.module_target.m"
      case (MR_Integer) 1:
#line 1154 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1127 "make.module_target.m"
        break;
#line 1127 "make.module_target.m"
      case (MR_Integer) 2:
#line 1127 "make.module_target.m"
        make__module_target__Result_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__TargetType_3, (MR_Integer) 0)));
#line 1127 "make.module_target.m"
        break;
#line 1127 "make.module_target.m"
      case (MR_Integer) 3:
#line 1154 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1127 "make.module_target.m"
        break;
#line 1127 "make.module_target.m"
    }
#line 1127 "make.module_target.m"
    return make__module_target__Result_4;
#line 1127 "make.module_target.m"
  }
#line 1123 "make.module_target.m"
}

#line 1102 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_for_il_6_p_0(
#line 1102 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1102 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 1102 "make.module_target.m"
  MR_Word make__module_target__Language_9,
#line 1102 "make.module_target.m"
  MR_Word * make__module_target__ForeignFiles_10)
#line 1102 "make.module_target.m"
{
#line 1118 "make.module_target.m"
  {
#line 1118 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1118 "make.module_target.m"
    MR_Word make__module_target__ForeignModuleName_12;
#line 1118 "make.module_target.m"
    MR_String make__module_target__ForeignExt_13;

#line 1109 "make.module_target.m"
    {
#line 1109 "make.module_target.m"
      make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__module_target__ModuleName_8, make__module_target__Language_9, &make__module_target__ForeignModuleName_12);
    }
#line 1109 "make.module_target.m"
    if (make__module_target__succeeded)
#line 1110 "make.module_target.m"
      {
#line 1110 "make.module_target.m"
        make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(make__module_target__Language_9, &make__module_target__ForeignExt_13);
      }
#line 1118 "make.module_target.m"
    if (make__module_target__succeeded)
#line 1113 "make.module_target.m"
      {
#line 1113 "make.module_target.m"
        MR_String make__module_target__ForeignFileName_14;
#line 1113 "make.module_target.m"
        MR_String make__module_target__ForeignDLLFileName_15;
#line 1113 "make.module_target.m"
        MR_Word make__module_target__V_23_23;

#line 1112 "make.module_target.m"
        {
#line 1112 "make.module_target.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_7, make__module_target__ForeignModuleName_12, make__module_target__ForeignExt_13, (MR_Integer) 0, &make__module_target__ForeignFileName_14);
        }
#line 1114 "make.module_target.m"
        {
#line 1114 "make.module_target.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_7, make__module_target__ForeignModuleName_12, (MR_String) ".dll", (MR_Integer) 0, &make__module_target__ForeignDLLFileName_15);
        }
#line 1116 "make.module_target.m"
        {
#line 1116 "make.module_target.m"
          make__module_target__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_23_23, 0) = ((MR_Box) (make__module_target__Language_9));
#line 1116 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_23_23, 1) = ((MR_Box) (make__module_target__ForeignFileName_14));
#line 1116 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_23_23, 2) = ((MR_Box) (make__module_target__ForeignDLLFileName_15));
#line 1116 "make.module_target.m"
        }
#line 1117 "make.module_target.m"
        {
#line 1117 "make.module_target.m"
          MR_Word base;
#line 1117 "make.module_target.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "make.module_target.m"
          *make__module_target__ForeignFiles_10 = base;
#line 1117 "make.module_target.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__V_23_23));
#line 1117 "make.module_target.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "make.module_target.m"
        }
#line 1113 "make.module_target.m"
      }
#line 1118 "make.module_target.m"
    else
#line 1120 "make.module_target.m"
      *make__module_target__ForeignFiles_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1118 "make.module_target.m"
  }
#line 1102 "make.module_target.m"
}

#line 1046 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
#line 1046 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 1046 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 1046 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 1046 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 1046 "make.module_target.m"
{
#line 1046 "make.module_target.m"
  {
#line 1046 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 1046 "make.module_target.m"
    MR_Word make__module_target__conv8_HeadVar__4_92;

#line 1046 "make.module_target.m"
    {
#line 1046 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__touched_files_process_module__1046__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_HeadVar__4_92);
    }
#line 1046 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_HeadVar__4_92));
#line 1046 "make.module_target.m"
  }
#line 1046 "make.module_target.m"
}

#line 976 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
#line 976 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 976 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 976 "make.module_target.m"
{
#line 976 "make.module_target.m"
  {
#line 976 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 976 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 976 "make.module_target.m"
    MR_String make__module_target__conv7_HeadVar__2_74;

#line 976 "make.module_target.m"
    {
#line 976 "make.module_target.m"
      make__module_target__conv7_HeadVar__2_74 = make__module_target__IntroducedFrom__func__touched_files_process_module__976__1_1_f_0(((MR_Word) make__module_target__wrapper_arg_1));
    }
#line 976 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv7_HeadVar__2_74));
#line 976 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 976 "make.module_target.m"
  }
#line 976 "make.module_target.m"
}

#line 973 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
#line 973 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 973 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 973 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 973 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 973 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 973 "make.module_target.m"
{
#line 973 "make.module_target.m"
  {
#line 973 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 973 "make.module_target.m"
    MR_Word make__module_target__conv5_ForeignFiles_10;

#line 973 "make.module_target.m"
    {
#line 973 "make.module_target.m"
      make__module_target__external_foreign_code_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_ForeignFiles_10);
    }
#line 973 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_ForeignFiles_10));
#line 973 "make.module_target.m"
  }
#line 973 "make.module_target.m"
}

#line 953 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
#line 953 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 953 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 953 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 953 "make.module_target.m"
{
#line 953 "make.module_target.m"
  {
#line 953 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 953 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 953 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__2_61;

#line 953 "make.module_target.m"
    {
#line 953 "make.module_target.m"
      make__module_target__succeeded = make__module_target__IntroducedFrom__pred__touched_files_process_module__954__1_2_p_0(((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv4_HeadVar__2_61);
    }
#line 953 "make.module_target.m"
    if (make__module_target__succeeded)
#line 953 "make.module_target.m"
      {
#line 953 "make.module_target.m"
        *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv4_HeadVar__2_61));
#line 953 "make.module_target.m"
        make__module_target__succeeded = MR_TRUE;
#line 953 "make.module_target.m"
      }
#line 953 "make.module_target.m"
    return make__module_target__succeeded;
#line 953 "make.module_target.m"
  }
#line 953 "make.module_target.m"
}

#line 950 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
#line 950 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 950 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 950 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 950 "make.module_target.m"
{
#line 950 "make.module_target.m"
  {
#line 950 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 950 "make.module_target.m"
    MR_Word make__module_target__conv1_HeadVar__3_3;
#line 950 "make.module_target.m"
    MR_Word make__module_target__conv0_HeadVar__5_5;

#line 950 "make.module_target.m"
    {
#line 950 "make.module_target.m"
      make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv1_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv0_HeadVar__5_5);
    }
#line 950 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv1_HeadVar__3_3));
#line 950 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
#line 950 "make.module_target.m"
  }
#line 950 "make.module_target.m"
}

#line 927 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
#line 927 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 927 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 927 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 927 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_46,
#line 927 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_47)
#line 927 "make.module_target.m"
{
#line 933 "make.module_target.m"
  {
#line 933 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 933 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_134_134;
#line 933 "make.module_target.m"
    MR_Word make__module_target__TypeInfo_141_141;
#line 933 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_143_143;
#line 933 "make.module_target.m"
    MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 933 "make.module_target.m"
    MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 933 "make.module_target.m"
    MR_Word make__module_target__MaybeImports_19;
#line 933 "make.module_target.m"
    MR_Word make__module_target__Imports_21;
#line 933 "make.module_target.m"
    MR_Word make__module_target__NestedChildren_22;
#line 933 "make.module_target.m"
    MR_Word make__module_target__MaybeNestedImportsList_24;
#line 933 "make.module_target.m"
    MR_Word make__module_target__ModuleImportsList_27;
#line 933 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_28;
#line 933 "make.module_target.m"
    MR_Word make__module_target__TargetModuleNames_29;
#line 933 "make.module_target.m"
    MR_Word make__module_target__ForeignCodeFiles_31;
#line 933 "make.module_target.m"
    MR_Word make__module_target__TimestampFileNames_45;
#line 933 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_50_50;
#line 933 "make.module_target.m"
    MR_Word make__module_target__V_55_55;
#line 933 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 933 "make.module_target.m"
    MR_Word make__module_target__V_83_83;
#line 947 "make.module_target.m"
    MR_String make__module_target__V_106_106;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_107_107;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_108_108;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_109_109;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_110_110;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_111_111;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_112_112;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_113_113;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_114_114;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_115_115;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_116_116;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_117_117;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_118_118;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_119_119;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_120_120;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_121_121;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_122_122;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_123_123;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_124_124;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_125_125;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_126_126;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_127_127;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_128_128;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_129_129;
#line 947 "make.module_target.m"
    MR_Word make__module_target__V_130_130;
#line 947 "make.module_target.m"
    MR_String make__module_target__V_131_131;
#line 950 "make.module_target.m"
    MR_Box make__module_target__conv3_STATE_VARIABLE_Info_47;
#line 950 "make.module_target.m"
    MR_Box make__module_target__conv2_STATE_VARIABLE_IO_58_58;
#line 959 "make.module_target.m"
    MR_Word make__module_target__NestedImportsList_26;
#line 1046 "make.module_target.m"
    MR_Box make__module_target__conv10_TimestampFileNames_45;
#line 1046 "make.module_target.m"
    MR_Box make__module_target__conv9_STATE_VARIABLE_IO_49;

#line 935 "make.module_target.m"
    {
#line 935 "make.module_target.m"
      make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_0_46, &make__module_target__STATE_VARIABLE_Info_50_50);
    }
#line 939 "make.module_target.m"
    if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "make.module_target.m"
      {
#line 944 "make.module_target.m"
        {
#line 944 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no module dependencies");
#line 944 "make.module_target.m"
          return;
        }
#line 940 "make.module_target.m"
      }
#line 939 "make.module_target.m"
    else
#line 937 "make.module_target.m"
      make__module_target__Imports_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
#line 4064 "make.module_target.c"
    make__module_target__TypeCtorInfo_134_134 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 947 "make.module_target.m"
    make__module_target__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 0)));
#line 947 "make.module_target.m"
    make__module_target__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 1)));
#line 947 "make.module_target.m"
    make__module_target__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 2)));
#line 947 "make.module_target.m"
    make__module_target__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 3)));
#line 947 "make.module_target.m"
    make__module_target__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 4)));
#line 947 "make.module_target.m"
    make__module_target__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 5)));
#line 947 "make.module_target.m"
    make__module_target__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 6)));
#line 947 "make.module_target.m"
    make__module_target__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 7)));
#line 947 "make.module_target.m"
    make__module_target__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 8)));
#line 947 "make.module_target.m"
    make__module_target__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 9)));
#line 947 "make.module_target.m"
    make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 10)));
#line 947 "make.module_target.m"
    make__module_target__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 11)));
#line 947 "make.module_target.m"
    make__module_target__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 12)));
#line 947 "make.module_target.m"
    make__module_target__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 13)));
#line 947 "make.module_target.m"
    make__module_target__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 14)));
#line 947 "make.module_target.m"
    make__module_target__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 15)));
#line 947 "make.module_target.m"
    make__module_target__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 16)));
#line 947 "make.module_target.m"
    make__module_target__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 17)));
#line 947 "make.module_target.m"
    make__module_target__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 18)));
#line 947 "make.module_target.m"
    make__module_target__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 19)));
#line 947 "make.module_target.m"
    make__module_target__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 20)));
#line 947 "make.module_target.m"
    make__module_target__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 21)));
#line 947 "make.module_target.m"
    make__module_target__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 22)));
#line 947 "make.module_target.m"
    make__module_target__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 23)));
#line 947 "make.module_target.m"
    make__module_target__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 24)));
#line 947 "make.module_target.m"
    make__module_target__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 25)));
#line 947 "make.module_target.m"
    make__module_target__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 26)));
#line 947 "make.module_target.m"
    {
#line 947 "make.module_target.m"
      make__module_target__NestedChildren_22 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_134_134, make__module_target__V_55_55);
    }
#line 948 "make.module_target.m"
    {
#line 948 "make.module_target.m"
      make__module_target__TargetModuleNames_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "make.module_target.m"
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 948 "make.module_target.m"
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 1) = ((MR_Box) (make__module_target__NestedChildren_22));
#line 948 "make.module_target.m"
    }
#line 950 "make.module_target.m"
    {
#line 950 "make.module_target.m"
      make__module_target__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 950 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 0) = ((MR_Box) (&make__module_target_scalar_common_6[5]));
#line 950 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_1));
#line 950 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 950 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 950 "make.module_target.m"
    }
#line 4149 "make.module_target.c"
    make__module_target__TypeInfo_141_141 = (MR_Word) &make__module_target_scalar_common_1[4];
#line 4151 "make.module_target.c"
    make__module_target__TypeCtorInfo_143_143 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 950 "make.module_target.m"
    {
#line 950 "make.module_target.m"
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_134_134, make__module_target__TypeInfo_141_141, (MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__TypeCtorInfo_143_143, make__module_target__V_56_56, make__module_target__NestedChildren_22, &make__module_target__MaybeNestedImportsList_24, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_50_50)), &make__module_target__conv3_STATE_VARIABLE_Info_47, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_58_58);
    }
#line 950 "make.module_target.m"
    *make__module_target__STATE_VARIABLE_Info_47 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_47);
#line 953 "make.module_target.m"
    {
#line 953 "make.module_target.m"
      make__module_target__succeeded = mercury__list__map_3_p_2(make__module_target__TypeInfo_141_141, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_2[11], make__module_target__MaybeNestedImportsList_24, &make__module_target__NestedImportsList_26);
    }
#line 959 "make.module_target.m"
    if (make__module_target__succeeded)
#line 958 "make.module_target.m"
      {
#line 958 "make.module_target.m"
        make__module_target__ModuleImportsList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "make.module_target.m"
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 0) = ((MR_Box) (make__module_target__Imports_21));
#line 958 "make.module_target.m"
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 1) = ((MR_Box) (make__module_target__NestedImportsList_26));
#line 958 "make.module_target.m"
      }
#line 959 "make.module_target.m"
    else
#line 963 "make.module_target.m"
      {
#line 963 "make.module_target.m"
        {
#line 963 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no nested module dependencies");
#line 963 "make.module_target.m"
          return;
        }
#line 963 "make.module_target.m"
      }
#line 966 "make.module_target.m"
    {
#line 966 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_28);
    }
#line 1024 "make.module_target.m"
#line 1024 "make.module_target.m"
    switch (make__module_target__Task_12) {
#line 1024 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1024 "make.module_target.m"
      case (MR_Integer) 6:
#line 971 "make.module_target.m"
        {
#line 971 "make.module_target.m"
          MR_Word make__module_target__TypeCtorInfo_151_151;
#line 971 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFileList_30;
#line 971 "make.module_target.m"
          MR_Word make__module_target__HeaderTargets0_35;
#line 971 "make.module_target.m"
          MR_Word make__module_target__HeaderTargets_37;
#line 971 "make.module_target.m"
          MR_Word make__module_target__TouchedTargetFiles0_38;
#line 971 "make.module_target.m"
          MR_Word make__module_target__V_69_69;
#line 971 "make.module_target.m"
          MR_Word make__module_target__V_71_71;
#line 971 "make.module_target.m"
          MR_Word make__module_target__V_75_75;
#line 972 "make.module_target.m"
          MR_Box make__module_target__conv6_STATE_VARIABLE_IO_70_70;

#line 973 "make.module_target.m"
          {
#line 973 "make.module_target.m"
            make__module_target__V_71_71 = make__module_target__target_type_to_pic_1_f_0(make__module_target__FileType_18);
          }
#line 973 "make.module_target.m"
          {
#line 973 "make.module_target.m"
            make__module_target__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 973 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_69_69, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
#line 973 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_69_69, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_3));
#line 973 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 973 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_69_69, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 973 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_69_69, 4) = ((MR_Box) (make__module_target__V_71_71));
#line 973 "make.module_target.m"
          }
#line 972 "make.module_target.m"
          {
#line 972 "make.module_target.m"
            mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_1[0], make__module_target__TypeCtorInfo_143_143, make__module_target__V_69_69, make__module_target__ModuleImportsList_27, &make__module_target__ForeignCodeFileList_30, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_70_70);
          }
#line 4249 "make.module_target.c"
          make__module_target__TypeCtorInfo_151_151 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
#line 977 "make.module_target.m"
          {
#line 977 "make.module_target.m"
            make__module_target__V_75_75 = mercury__list__condense_1_f_0(make__module_target__TypeCtorInfo_151_151, make__module_target__ForeignCodeFileList_30);
          }
#line 976 "make.module_target.m"
          {
#line 976 "make.module_target.m"
            make__module_target__ForeignCodeFiles_31 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_151_151, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[12], make__module_target__V_75_75);
          }
#line 992 "make.module_target.m"
#line 992 "make.module_target.m"
          switch (make__module_target__CompilationTarget_28) {
#line 992 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 992 "make.module_target.m"
            case (MR_Integer) 0:
#line 979 "make.module_target.m"
              {
#line 979 "make.module_target.m"
                MR_Word make__module_target__HighLevelCode_33;

#line 980 "make.module_target.m"
                {
#line 980 "make.module_target.m"
                  libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 256, &make__module_target__HighLevelCode_33);
                }
#line 988 "make.module_target.m"
#line 988 "make.module_target.m"
                switch (make__module_target__HighLevelCode_33) {
#line 988 "make.module_target.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 988 "make.module_target.m"
                  case (MR_Integer) 0:
#line 990 "make.module_target.m"
                    make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "make.module_target.m"
                    break;
#line 988 "make.module_target.m"
                  case (MR_Integer) 1:
#line 982 "make.module_target.m"
                    {
#line 986 "make.module_target.m"
                      {
#line 986 "make.module_target.m"
                        make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[9]));
                      }
#line 982 "make.module_target.m"
                    }
#line 988 "make.module_target.m"
                    break;
#line 988 "make.module_target.m"
                }
#line 979 "make.module_target.m"
              }
#line 992 "make.module_target.m"
              break;
#line 992 "make.module_target.m"
            case (MR_Integer) 2:
#line 992 "make.module_target.m"
            case (MR_Integer) 1:
#line 992 "make.module_target.m"
            case (MR_Integer) 3:
#line 997 "make.module_target.m"
              make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "make.module_target.m"
              break;
#line 992 "make.module_target.m"
            case (MR_Integer) 4:
#line 999 "make.module_target.m"
              {
#line 1002 "make.module_target.m"
                {
#line 1002 "make.module_target.m"
                  make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)));
                }
#line 999 "make.module_target.m"
              }
#line 992 "make.module_target.m"
              break;
#line 992 "make.module_target.m"
          }
#line 1012 "make.module_target.m"
#line 1012 "make.module_target.m"
          switch (make__module_target__CompilationTarget_28) {
#line 1012 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "make.module_target.m"
            case (MR_Integer) 0:
#line 1007 "make.module_target.m"
              {
#line 1007 "make.module_target.m"
                MR_Word make__module_target__V_80_80;

#line 1010 "make.module_target.m"
                {
#line 1010 "make.module_target.m"
                  make__module_target__V_80_80 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[10]));
                }
#line 1011 "make.module_target.m"
                {
#line 1011 "make.module_target.m"
                  make__module_target__HeaderTargets_37 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_80_80, make__module_target__HeaderTargets0_35);
                }
#line 1007 "make.module_target.m"
              }
#line 1012 "make.module_target.m"
              break;
#line 1012 "make.module_target.m"
            case (MR_Integer) 2:
#line 1012 "make.module_target.m"
            case (MR_Integer) 4:
#line 1012 "make.module_target.m"
            case (MR_Integer) 1:
#line 1012 "make.module_target.m"
            case (MR_Integer) 3:
#line 1018 "make.module_target.m"
              make__module_target__HeaderTargets_37 = make__module_target__HeaderTargets0_35;
#line 1012 "make.module_target.m"
              break;
#line 1012 "make.module_target.m"
          }
#line 1021 "make.module_target.m"
          {
#line 1021 "make.module_target.m"
            make__module_target__TouchedTargetFiles0_38 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
#line 1023 "make.module_target.m"
          {
#line 1023 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TouchedTargetFiles0_38, make__module_target__HeaderTargets_37);
          }
#line 971 "make.module_target.m"
        }
#line 1024 "make.module_target.m"
        break;
#line 1024 "make.module_target.m"
      case (MR_Integer) 0:
#line 1024 "make.module_target.m"
      case (MR_Integer) 5:
#line 1024 "make.module_target.m"
      case (MR_Integer) 4:
#line 1024 "make.module_target.m"
      case (MR_Integer) 3:
#line 1024 "make.module_target.m"
      case (MR_Integer) 1:
#line 1024 "make.module_target.m"
      case (MR_Integer) 7:
#line 1042 "make.module_target.m"
        {
#line 1043 "make.module_target.m"
          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "make.module_target.m"
          {
#line 1044 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
#line 1042 "make.module_target.m"
        }
#line 1024 "make.module_target.m"
        break;
#line 1024 "make.module_target.m"
      case (MR_Integer) 2:
#line 1025 "make.module_target.m"
        {
#line 1025 "make.module_target.m"
          MR_Word make__module_target__V_65_65;
#line 1025 "make.module_target.m"
          MR_Word make__module_target__V_67_67;

#line 1028 "make.module_target.m"
          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1030 "make.module_target.m"
          {
#line 1030 "make.module_target.m"
            make__module_target__V_65_65 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
          }
#line 1033 "make.module_target.m"
          {
#line 1033 "make.module_target.m"
            make__module_target__V_67_67 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
#line 1032 "make.module_target.m"
          {
#line 1032 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_65_65, make__module_target__V_67_67);
          }
#line 1025 "make.module_target.m"
        }
#line 1024 "make.module_target.m"
        break;
#line 1024 "make.module_target.m"
    }
#line 1046 "make.module_target.m"
    {
#line 1046 "make.module_target.m"
      make__module_target__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_83_83, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
#line 1046 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_83_83, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_5));
#line 1046 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1046 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_83_83, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 1046 "make.module_target.m"
    }
#line 1046 "make.module_target.m"
    {
#line 1046 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, (MR_Word) &make__module_target_scalar_common_1[5], make__module_target__TypeCtorInfo_143_143, make__module_target__V_83_83, *make__module_target__TouchedTargetFiles_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__module_target__conv10_TimestampFileNames_45, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv9_STATE_VARIABLE_IO_49);
    }
#line 1046 "make.module_target.m"
    make__module_target__TimestampFileNames_45 = ((MR_Word) make__module_target__conv10_TimestampFileNames_45);
#line 1059 "make.module_target.m"
    {
#line 1059 "make.module_target.m"
      *make__module_target__TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ForeignCodeFiles_31, make__module_target__TimestampFileNames_45);
    }
#line 933 "make.module_target.m"
  }
#line 927 "make.module_target.m"
}

#line 895 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_9_p_0(
#line 895 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 895 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 895 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 895 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
#line 895 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_30)
#line 895 "make.module_target.m"
{
#line 902 "make.module_target.m"
  {
#line 902 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 902 "make.module_target.m"
#line 902 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__Task_12)) {
#line 902 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 902 "make.module_target.m"
      case (MR_Integer) 0:
#line 902 "make.module_target.m"
        {
#line 902 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_12, (MR_Integer) 0)));

#line 903 "make.module_target.m"
          {
#line 903 "make.module_target.m"
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__ModuleTask_17, make__module_target__TouchedTargetFiles_13, make__module_target__TouchedFileNames_14, make__module_target__STATE_VARIABLE_Info_0_29, make__module_target__STATE_VARIABLE_Info_30);
#line 903 "make.module_target.m"
            return;
          }
#line 902 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 1:
#line 906 "make.module_target.m"
        {
#line 907 "make.module_target.m"
          {
#line 907 "make.module_target.m"
            MR_Word base;
#line 907 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 907 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 907 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "make.module_target.m"
          }
#line 908 "make.module_target.m"
          *make__module_target__TouchedFileNames_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 906 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 2:
#line 910 "make.module_target.m"
        {
#line 910 "make.module_target.m"
          MR_Word make__module_target__PIC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 0)));
#line 910 "make.module_target.m"
          MR_Word make__module_target__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 1)));
#line 910 "make.module_target.m"
          MR_Word make__module_target__ModuleName_21;
#line 910 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_23;
#line 910 "make.module_target.m"
          MR_String make__module_target__ForeignObjectFile_24;
#line 912 "make.module_target.m"
          MR_Word make__module_target__V_22_22;
#line 915 "make.module_target.m"
          MR_Word make__module_target__V_45_45;
#line 915 "make.module_target.m"
          MR_String make__module_target__V_46_46;

#line 911 "make.module_target.m"
          {
#line 911 "make.module_target.m"
            MR_Word base;
#line 911 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 911 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 911 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "make.module_target.m"
          }
#line 912 "make.module_target.m"
          make__module_target__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 912 "make.module_target.m"
          make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 913 "make.module_target.m"
          {
#line 913 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_21, make__module_target__PIC_19, make__module_target__Lang_20, &make__module_target__ForeignCodeFile_23);
          }
#line 915 "make.module_target.m"
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 0)));
#line 915 "make.module_target.m"
          make__module_target__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 1)));
#line 915 "make.module_target.m"
          make__module_target__ForeignObjectFile_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 2)));
#line 916 "make.module_target.m"
          {
#line 916 "make.module_target.m"
            MR_Word base;
#line 916 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "make.module_target.m"
            *make__module_target__TouchedFileNames_14 = base;
#line 916 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_24));
#line 916 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "make.module_target.m"
          }
#line 910 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 910 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 3:
#line 918 "make.module_target.m"
        {
#line 918 "make.module_target.m"
          MR_String make__module_target__FactTableName_25 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 1)));
#line 918 "make.module_target.m"
          MR_String make__module_target__ObjExt_27;
#line 918 "make.module_target.m"
          MR_String make__module_target__FactTableObjectFile_28;
#line 918 "make.module_target.m"
          MR_Word make__module_target__PIC_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 0)));
#line 918 "make.module_target.m"
          MR_Word make__module_target__ModuleName_44;
#line 918 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_50;
#line 920 "make.module_target.m"
          MR_Word make__module_target__V_26_26;

#line 919 "make.module_target.m"
          {
#line 919 "make.module_target.m"
            MR_Word base;
#line 919 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 919 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 919 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "make.module_target.m"
          }
#line 920 "make.module_target.m"
          make__module_target__ModuleName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 920 "make.module_target.m"
          make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 635 "make.module_target.m"
          {
#line 635 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_50);
          }
#line 639 "make.module_target.m"
#line 639 "make.module_target.m"
          switch (make__module_target__CompilationTarget_50) {
#line 639 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 639 "make.module_target.m"
            case (MR_Integer) 0:
#line 638 "make.module_target.m"
              {
#line 638 "make.module_target.m"
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_10, make__module_target__PIC_43, &make__module_target__ObjExt_27);
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 2:
#line 643 "make.module_target.m"
              {
#line 644 "make.module_target.m"
                {
#line 644 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 644 "make.module_target.m"
                  return;
                }
#line 643 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 4:
#line 649 "make.module_target.m"
              {
#line 650 "make.module_target.m"
                {
#line 650 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 650 "make.module_target.m"
                  return;
                }
#line 649 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 1:
#line 641 "make.module_target.m"
              make__module_target__ObjExt_27 = (MR_String) ".dll";
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 3:
#line 646 "make.module_target.m"
              {
#line 647 "make.module_target.m"
                {
#line 647 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 647 "make.module_target.m"
                  return;
                }
#line 646 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
          }
#line 922 "make.module_target.m"
          {
#line 922 "make.module_target.m"
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_10, make__module_target__ModuleName_44, make__module_target__FactTableName_25, make__module_target__ObjExt_27, (MR_Integer) 0, &make__module_target__FactTableObjectFile_28);
          }
#line 924 "make.module_target.m"
          {
#line 924 "make.module_target.m"
            MR_Word base;
#line 924 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "make.module_target.m"
            *make__module_target__TouchedFileNames_14 = base;
#line 924 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_28));
#line 924 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "make.module_target.m"
          }
#line 918 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 918 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
    }
#line 902 "make.module_target.m"
  }
#line 895 "make.module_target.m"
}

#line 885 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__get_pic_flags_1_f_0(
#line 885 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1)
#line 885 "make.module_target.m"
{
#line 889 "make.module_target.m"
  {
#line 889 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 889 "make.module_target.m"
    MR_Word make__module_target__HeadVar__2_2;

#line 889 "make.module_target.m"
#line 889 "make.module_target.m"
    switch (make__module_target__HeadVar__1_1) {
#line 889 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 889 "make.module_target.m"
      case (MR_Integer) 1:
#line 890 "make.module_target.m"
        {
#line 890 "make.module_target.m"
          make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[30]);
#line 890 "make.module_target.m"
        }
#line 889 "make.module_target.m"
        break;
#line 889 "make.module_target.m"
      case (MR_Integer) 2:
#line 891 "make.module_target.m"
        make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "make.module_target.m"
        break;
#line 889 "make.module_target.m"
      case (MR_Integer) 0:
#line 889 "make.module_target.m"
        {
#line 889 "make.module_target.m"
          make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[30]);
#line 889 "make.module_target.m"
        }
#line 889 "make.module_target.m"
        break;
#line 889 "make.module_target.m"
    }
#line 889 "make.module_target.m"
    return make__module_target__HeadVar__2_2;
#line 889 "make.module_target.m"
  }
#line 885 "make.module_target.m"
}

#line 819 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
#line 819 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 819 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 819 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 819 "make.module_target.m"
{
#line 819 "make.module_target.m"
  {
#line 819 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 819 "make.module_target.m"
    {
#line 819 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__delete_timestamp__819__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))));
#line 819 "make.module_target.m"
      return;
    }
#line 819 "make.module_target.m"
  }
#line 819 "make.module_target.m"
}

#line 814 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
#line 814 "make.module_target.m"
  MR_Word make__module_target__Globals_5,
#line 814 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6,
#line 814 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
#line 814 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10)
#line 814 "make.module_target.m"
{
#line 817 "make.module_target.m"
  {
#line 817 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 818 "make.module_target.m"
    MR_Word make__module_target__V_12_12;

#line 819 "make.module_target.m"
    {
#line 819 "make.module_target.m"
      make__module_target__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 819 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
#line 819 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
#line 819 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 819 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 3) = ((MR_Box) (make__module_target__TouchedFile_6));
#line 819 "make.module_target.m"
    }
#line 819 "make.module_target.m"
    {
#line 819 "make.module_target.m"
      make__util__debug_msg_4_p_0(make__module_target__Globals_5, make__module_target__V_12_12);
    }
#line 826 "make.module_target.m"
    {
#line 826 "make.module_target.m"
      mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[1], ((MR_Box) (make__module_target__TouchedFile_6)), make__module_target__STATE_VARIABLE_Timestamps_0_9, make__module_target__STATE_VARIABLE_Timestamps_10);
#line 826 "make.module_target.m"
      return;
    }
#line 817 "make.module_target.m"
  }
#line 814 "make.module_target.m"
}

#line 803 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 803 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 803 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_8,
#line 803 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 803 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
#line 803 "make.module_target.m"
{
#line 810 "make.module_target.m"
  {
#line 810 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 810 "make.module_target.m"
    {
#line 810 "make.module_target.m"
      make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
#line 810 "make.module_target.m"
      return;
    }
#line 810 "make.module_target.m"
  }
#line 803 "make.module_target.m"
}

#line 796 "make.module_target.m"
static void MR_CALL 
make__module_target__update_target_status_4_p_0(
#line 796 "make.module_target.m"
  MR_Word make__module_target__TargetStatus_5,
#line 796 "make.module_target.m"
  MR_Word make__module_target__TargetFile_6,
#line 796 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
#line 796 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_10)
#line 796 "make.module_target.m"
{
#line 799 "make.module_target.m"
  {
#line 799 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 799 "make.module_target.m"
    MR_Word make__module_target__Dep_8;
#line 799 "make.module_target.m"
    MR_Word make__module_target__V_12_12;
#line 799 "make.module_target.m"
    MR_Word make__module_target__V_13_13;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_14_14;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_15_15;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_16_16;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_17_17;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_18_18;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_19_19;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_20_20;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_21_21;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_22_22;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_23_23;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_24_24;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_25_25;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_26_26;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_27_27;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_29_29;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_30_30;
#line 801 "make.module_target.m"
    MR_Integer make__module_target__V_31_31;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_32_32;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_33_33;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_34_34;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_35_35;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_36_36;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_37_37;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_38_38;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_39_39;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_40_40;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_42_42;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_43_43;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_44_44;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_47_47;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_48_48;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 801 "make.module_target.m"
    MR_Integer make__module_target__V_51_51;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_52_52;
#line 801 "make.module_target.m"
    MR_Word make__module_target__V_41_41;

#line 800 "make.module_target.m"
    {
#line 800 "make.module_target.m"
      make__module_target__Dep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 800 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Dep_8, 0) = ((MR_Box) (make__module_target__TargetFile_6));
#line 800 "make.module_target.m"
    }
#line 801 "make.module_target.m"
    make__module_target__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 801 "make.module_target.m"
    make__module_target__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 801 "make.module_target.m"
    make__module_target__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 801 "make.module_target.m"
    make__module_target__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 801 "make.module_target.m"
    make__module_target__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 801 "make.module_target.m"
    make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 801 "make.module_target.m"
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 801 "make.module_target.m"
    make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 801 "make.module_target.m"
    make__module_target__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
#line 801 "make.module_target.m"
    make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
#line 801 "make.module_target.m"
    make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
#line 801 "make.module_target.m"
    make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
#line 801 "make.module_target.m"
    make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
#line 801 "make.module_target.m"
    make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
#line 801 "make.module_target.m"
    make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
#line 801 "make.module_target.m"
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
#line 801 "make.module_target.m"
    make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
#line 801 "make.module_target.m"
    make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
#line 801 "make.module_target.m"
    make__module_target__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
#line 801 "make.module_target.m"
    make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
#line 801 "make.module_target.m"
    {
#line 801 "make.module_target.m"
      make__module_target__V_13_13 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_8)), make__module_target__V_12_12, ((MR_Box) (make__module_target__TargetStatus_5)));
    }
#line 801 "make.module_target.m"
    make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 801 "make.module_target.m"
    make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 801 "make.module_target.m"
    make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 801 "make.module_target.m"
    make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 801 "make.module_target.m"
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 801 "make.module_target.m"
    make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 801 "make.module_target.m"
    make__module_target__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 801 "make.module_target.m"
    make__module_target__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 801 "make.module_target.m"
    make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
#line 801 "make.module_target.m"
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
#line 801 "make.module_target.m"
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
#line 801 "make.module_target.m"
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
#line 801 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
#line 801 "make.module_target.m"
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
#line 801 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
#line 801 "make.module_target.m"
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
#line 801 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
#line 801 "make.module_target.m"
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
#line 801 "make.module_target.m"
    make__module_target__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
#line 801 "make.module_target.m"
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
#line 801 "make.module_target.m"
    {
#line 801 "make.module_target.m"
      MR_Word base;
#line 801 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 801 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Info_10 = base;
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_33_33));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_34_34));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_35_35));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_36_36));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_37_37));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_38_38));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_39_39));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_40_40));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_13_13));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_42_42));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_43_43));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_44_44));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_45_45));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_46_46));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_47_47));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_48_48));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_49_49));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_50_50));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_51_51));
#line 801 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_52_52));
#line 801 "make.module_target.m"
    }
#line 799 "make.module_target.m"
  }
#line 796 "make.module_target.m"
}

#line 787 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
#line 787 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 787 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 787 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 787 "make.module_target.m"
{
#line 787 "make.module_target.m"
  {
#line 787 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 787 "make.module_target.m"
    MR_Word make__module_target__conv9_STATE_VARIABLE_Timestamps_11;

#line 787 "make.module_target.m"
    {
#line 787 "make.module_target.m"
      make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_STATE_VARIABLE_Timestamps_11);
    }
#line 787 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_STATE_VARIABLE_Timestamps_11));
#line 787 "make.module_target.m"
  }
#line 787 "make.module_target.m"
}

#line 777 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
#line 777 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 777 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 777 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 777 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 777 "make.module_target.m"
{
#line 777 "make.module_target.m"
  {
#line 777 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 777 "make.module_target.m"
    MR_Word make__module_target__conv6_STATE_VARIABLE_Timestamps_10;

#line 777 "make.module_target.m"
    {
#line 777 "make.module_target.m"
      make__module_target__delete_timestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv6_STATE_VARIABLE_Timestamps_10);
    }
#line 777 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv6_STATE_VARIABLE_Timestamps_10));
#line 777 "make.module_target.m"
  }
#line 777 "make.module_target.m"
}

#line 772 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
#line 772 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 772 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 772 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 772 "make.module_target.m"
{
#line 772 "make.module_target.m"
  {
#line 772 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 772 "make.module_target.m"
    MR_String make__module_target__conv3_HeadVar__4_4;
#line 772 "make.module_target.m"
    MR_Word make__module_target__conv2_HeadVar__6_6;

#line 772 "make.module_target.m"
    {
#line 772 "make.module_target.m"
      make__util__get_file_name_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv3_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_HeadVar__6_6);
    }
#line 772 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv3_HeadVar__4_4));
#line 772 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_HeadVar__6_6));
#line 772 "make.module_target.m"
  }
#line 772 "make.module_target.m"
}

#line 770 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
#line 770 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 770 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 770 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 770 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 770 "make.module_target.m"
{
#line 770 "make.module_target.m"
  {
#line 770 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 770 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

#line 770 "make.module_target.m"
    {
#line 770 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
#line 770 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
#line 770 "make.module_target.m"
  }
#line 770 "make.module_target.m"
}

#line 755 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
#line 755 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 755 "make.module_target.m"
  MR_Word make__module_target__Succeeded_11,
#line 755 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 755 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_13,
#line 755 "make.module_target.m"
  MR_Word make__module_target__OtherTouchedFiles_14,
#line 755 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
#line 755 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_22)
#line 755 "make.module_target.m"
{
#line 760 "make.module_target.m"
  {
#line 760 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_84_84;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_85_85;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_92_92;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TypeInfo_97_97;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TargetStatus_17;
#line 760 "make.module_target.m"
    MR_Word make__module_target__TouchedTargetFileNames_18;
#line 760 "make.module_target.m"
    MR_Word make__module_target__V_26_26;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_27_27;
#line 760 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_29_29;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_32_32;
#line 760 "make.module_target.m"
    MR_Word make__module_target__V_33_33;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_34_34;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_36_36;
#line 760 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_40_40;
#line 770 "make.module_target.m"
    MR_Box make__module_target__conv1_STATE_VARIABLE_Info_27_27;
#line 772 "make.module_target.m"
    MR_Box make__module_target__conv5_STATE_VARIABLE_Info_29_29;
#line 772 "make.module_target.m"
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_24;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_42_42;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_43_43;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_44_44;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_47_47;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_48_48;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_51_51;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_52_52;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_53_53;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_54_54;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_55_55;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_57_57;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_58_58;
#line 776 "make.module_target.m"
    MR_Integer make__module_target__V_59_59;
#line 776 "make.module_target.m"
    MR_Word make__module_target__V_60_60;
#line 777 "make.module_target.m"
    MR_Box make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34;
#line 779 "make.module_target.m"
    MR_Box make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36;
#line 786 "make.module_target.m"
    MR_Word make__module_target__V_37_37;
#line 786 "make.module_target.m"
    MR_Word make__module_target__V_20_20;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_61_61;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_63_63;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_64_64;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_65_65;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_66_66;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_67_67;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_68_68;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_69_69;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_70_70;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_71_71;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_72_72;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_73_73;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_74_74;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_75_75;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_76_76;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_77_77;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_78_78;
#line 793 "make.module_target.m"
    MR_Integer make__module_target__V_79_79;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_80_80;
#line 793 "make.module_target.m"
    MR_Word make__module_target__V_62_62;

#line 764 "make.module_target.m"
#line 764 "make.module_target.m"
    switch (make__module_target__Succeeded_11) {
#line 764 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 764 "make.module_target.m"
      case (MR_Integer) 0:
#line 765 "make.module_target.m"
        {
#line 766 "make.module_target.m"
          make__module_target__TargetStatus_17 = (MR_Integer) 3;
#line 767 "make.module_target.m"
          {
#line 767 "make.module_target.m"
            make__util__target_file_error_5_p_0(make__module_target__STATE_VARIABLE_Info_0_21, make__module_target__Globals_10, make__module_target__TargetFile_12);
          }
#line 765 "make.module_target.m"
        }
#line 764 "make.module_target.m"
        break;
#line 764 "make.module_target.m"
      case (MR_Integer) 1:
#line 763 "make.module_target.m"
        make__module_target__TargetStatus_17 = (MR_Integer) 2;
#line 764 "make.module_target.m"
        break;
#line 764 "make.module_target.m"
    }
#line 770 "make.module_target.m"
    {
#line 770 "make.module_target.m"
      make__module_target__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 770 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
#line 770 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_1));
#line 770 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 770 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 3) = ((MR_Box) (make__module_target__TargetStatus_17));
#line 770 "make.module_target.m"
    }
#line 5502 "make.module_target.c"
    make__module_target__TypeCtorInfo_84_84 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 5504 "make.module_target.c"
    make__module_target__TypeCtorInfo_85_85 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 770 "make.module_target.m"
    {
#line 770 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_85_85, make__module_target__V_26_26, make__module_target__TouchedTargetFiles_13, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_21)), &make__module_target__conv1_STATE_VARIABLE_Info_27_27);
    }
#line 770 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_27_27 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_27_27);
#line 772 "make.module_target.m"
    {
#line 772 "make.module_target.m"
      make__module_target__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 0) = ((MR_Box) (&make__module_target_scalar_common_10[3]));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_2));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 4) = ((MR_Box) ((MR_Integer) 1));
#line 772 "make.module_target.m"
    }
#line 5529 "make.module_target.c"
    make__module_target__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 772 "make.module_target.m"
    {
#line 772 "make.module_target.m"
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_92_92, make__module_target__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_28_28, make__module_target__TouchedTargetFiles_13, &make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_27_27)), &make__module_target__conv5_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_24);
    }
#line 772 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_29_29);
#line 776 "make.module_target.m"
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 776 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 776 "make.module_target.m"
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 776 "make.module_target.m"
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 776 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 776 "make.module_target.m"
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 776 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 776 "make.module_target.m"
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 776 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 776 "make.module_target.m"
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 776 "make.module_target.m"
    make__module_target__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 776 "make.module_target.m"
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 776 "make.module_target.m"
    make__module_target__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 776 "make.module_target.m"
    make__module_target__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 776 "make.module_target.m"
    make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 776 "make.module_target.m"
    make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 776 "make.module_target.m"
    make__module_target__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 776 "make.module_target.m"
    make__module_target__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 776 "make.module_target.m"
    make__module_target__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 776 "make.module_target.m"
    make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 777 "make.module_target.m"
    {
#line 777 "make.module_target.m"
      make__module_target__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 777 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 0) = ((MR_Box) (&make__module_target_scalar_common_7[1]));
#line 777 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_3));
#line 777 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 777 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 777 "make.module_target.m"
    }
#line 5592 "make.module_target.c"
    make__module_target__TypeInfo_97_97 = (MR_Word) &make__module_target_scalar_common_2[2];
#line 777 "make.module_target.m"
    {
#line 777 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_32_32)), &make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
    }
#line 777 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_34_34 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
#line 779 "make.module_target.m"
    {
#line 779 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__OtherTouchedFiles_14, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_34_34)), &make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
    }
#line 779 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_36_36 = ((MR_Word) make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
#line 786 "make.module_target.m"
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
#line 786 "make.module_target.m"
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));
#line 786 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 789 "make.module_target.m"
    if (make__module_target__succeeded)
#line 787 "make.module_target.m"
      {
#line 787 "make.module_target.m"
        MR_Word make__module_target__V_38_38;
#line 787 "make.module_target.m"
        MR_Box make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40;

#line 787 "make.module_target.m"
        {
#line 787 "make.module_target.m"
          make__module_target__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 787 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 0) = ((MR_Box) (&make__module_target_scalar_common_15[1]));
#line 787 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_4));
#line 787 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 787 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 787 "make.module_target.m"
        }
#line 787 "make.module_target.m"
        {
#line 787 "make.module_target.m"
          mercury__map__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, (MR_Word) &make__module_target_scalar_common_2[1], make__module_target__TypeInfo_97_97, make__module_target__V_38_38, make__module_target__STATE_VARIABLE_Timestamps_36_36, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_36_36)), &make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
        }
#line 787 "make.module_target.m"
        make__module_target__STATE_VARIABLE_Timestamps_40_40 = ((MR_Word) make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
#line 787 "make.module_target.m"
      }
#line 789 "make.module_target.m"
    else
#line 789 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Timestamps_40_40 = make__module_target__STATE_VARIABLE_Timestamps_36_36;
#line 793 "make.module_target.m"
    make__module_target__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 793 "make.module_target.m"
    make__module_target__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 793 "make.module_target.m"
    make__module_target__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 793 "make.module_target.m"
    make__module_target__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 793 "make.module_target.m"
    make__module_target__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 793 "make.module_target.m"
    make__module_target__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 793 "make.module_target.m"
    make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 793 "make.module_target.m"
    make__module_target__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 793 "make.module_target.m"
    make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 793 "make.module_target.m"
    make__module_target__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 793 "make.module_target.m"
    make__module_target__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 793 "make.module_target.m"
    make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 793 "make.module_target.m"
    make__module_target__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 793 "make.module_target.m"
    make__module_target__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 793 "make.module_target.m"
    make__module_target__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 793 "make.module_target.m"
    make__module_target__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 793 "make.module_target.m"
    make__module_target__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 793 "make.module_target.m"
    make__module_target__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 793 "make.module_target.m"
    make__module_target__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 793 "make.module_target.m"
    make__module_target__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 793 "make.module_target.m"
    {
#line 793 "make.module_target.m"
      MR_Word base;
#line 793 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 793 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Info_22 = base;
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_61_61));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_40_40));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_63_63));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_64_64));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_65_65));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_66_66));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_67_67));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_68_68));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_69_69));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_70_70));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_71_71));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_72_72));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_73_73));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_74_74));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_75_75));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_76_76));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_77_77));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_78_78));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_79_79));
#line 793 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_80_80));
#line 793 "make.module_target.m"
    }
#line 760 "make.module_target.m"
  }
#line 755 "make.module_target.m"
}

#line 713 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
#line 713 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 713 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 713 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 713 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 713 "make.module_target.m"
{
#line 713 "make.module_target.m"
  {
#line 713 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 713 "make.module_target.m"
    {
#line 713 "make.module_target.m"
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
#line 713 "make.module_target.m"
      return;
    }
#line 713 "make.module_target.m"
  }
#line 713 "make.module_target.m"
}

#line 693 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
#line 693 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 693 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 693 "make.module_target.m"
{
#line 693 "make.module_target.m"
  {
#line 693 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 693 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 693 "make.module_target.m"
    MR_String make__module_target__conv0_HeadVar__2_2;

#line 693 "make.module_target.m"
    {
#line 693 "make.module_target.m"
      make__module_target__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
#line 693 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_HeadVar__2_2));
#line 693 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 693 "make.module_target.m"
  }
#line 693 "make.module_target.m"
}

#line 666 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
#line 666 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 666 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_9,
#line 666 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_10,
#line 666 "make.module_target.m"
  MR_Word make__module_target__Args_11,
#line 666 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12)
#line 666 "make.module_target.m"
{
#line 669 "make.module_target.m"
  {
#line 669 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 669 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_61_61;
#line 669 "make.module_target.m"
    MR_String make__module_target__ProgName_14;
#line 669 "make.module_target.m"
    MR_String make__module_target__MercuryCompiler_16;
#line 669 "make.module_target.m"
    MR_Word make__module_target__QuotedArgs_17;
#line 669 "make.module_target.m"
    MR_String make__module_target__ArgFileName_18;
#line 669 "make.module_target.m"
    MR_Word make__module_target__ArgFileOpenRes_19;
#line 732 "make.module_target.m"
    MR_Word make__module_target__V_25_25;

#line 670 "make.module_target.m"
    {
#line 670 "make.module_target.m"
      mercury__io__progname_4_p_0((MR_String) "", &make__module_target__ProgName_14);
    }
#line 678 "make.module_target.m"
    make__module_target__succeeded = (strcmp(make__module_target__ProgName_14, (MR_String) "") == 0);
#line 679 "make.module_target.m"
    if (!(make__module_target__succeeded))
#line 744 "make.module_target.m"
      {
#line 744 "make.module_target.m"
        make__module_target__succeeded = mercury__builtin__semidet_fail_0_p_0();
      }
#line 689 "make.module_target.m"
    if (make__module_target__succeeded)
#line 682 "make.module_target.m"
      {
#line 682 "make.module_target.m"
        MR_Word make__module_target__MaybeMercuryCompiler_15;

#line 682 "make.module_target.m"
        {
#line 682 "make.module_target.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &make__module_target__MaybeMercuryCompiler_15);
        }
#line 685 "make.module_target.m"
        if ((make__module_target__MaybeMercuryCompiler_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "make.module_target.m"
          make__module_target__MercuryCompiler_16 = (MR_String) "mmc";
#line 685 "make.module_target.m"
        else
#line 684 "make.module_target.m"
          make__module_target__MercuryCompiler_16 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeMercuryCompiler_15, (MR_Integer) 0)));
#line 682 "make.module_target.m"
      }
#line 689 "make.module_target.m"
    else
#line 690 "make.module_target.m"
      make__module_target__MercuryCompiler_16 = make__module_target__ProgName_14;
#line 5881 "make.module_target.c"
    make__module_target__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 693 "make.module_target.m"
    {
#line 693 "make.module_target.m"
      make__module_target__QuotedArgs_17 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_61_61, make__module_target__TypeCtorInfo_61_61, (MR_Word) &make__module_target_scalar_common_2[9], make__module_target__Args_11);
    }
#line 704 "make.module_target.m"
    if ((make__module_target__MaybeArgFileName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "make.module_target.m"
      {
#line 706 "make.module_target.m"
        {
#line 706 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.invoke_mmc\'/7", (MR_String) "argument file not created");
#line 706 "make.module_target.m"
          return;
        }
#line 705 "make.module_target.m"
      }
#line 704 "make.module_target.m"
    else
#line 703 "make.module_target.m"
      make__module_target__ArgFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_10, (MR_Integer) 0)));
#line 709 "make.module_target.m"
    {
#line 709 "make.module_target.m"
      mercury__io__open_output_4_p_0(make__module_target__ArgFileName_18, &make__module_target__ArgFileOpenRes_19);
    }
#line 725 "make.module_target.m"
    if (((MR_tag((MR_Word) make__module_target__ArgFileOpenRes_19)) == (MR_mktag((MR_Integer) 1))))
#line 726 "make.module_target.m"
      {
#line 726 "make.module_target.m"
        MR_Word make__module_target__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
#line 726 "make.module_target.m"
        MR_String make__module_target__ErrorMsg_24;
#line 726 "make.module_target.m"
        MR_String make__module_target__V_70_70;
#line 726 "make.module_target.m"
        MR_Word make__module_target__V_76_76;
#line 726 "make.module_target.m"
        MR_String make__module_target__V_80_80;

#line 727 "make.module_target.m"
        *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 728 "make.module_target.m"
        {
#line 728 "make.module_target.m"
          mercury__io__error_message_2_p_0(make__module_target__Error_23, &make__module_target__ErrorMsg_24);
        }
#line 729 "make.module_target.m"
        {
#line 729 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
        }
#line 5937 "make.module_target.c"
        make__module_target__V_76_76 = (MR_Word) &make__module_target_scalar_common_3[8];
#line 730 "make.module_target.m"
        {
#line 730 "make.module_target.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_target__V_76_76, make__module_target__ArgFileName_18, &make__module_target__V_70_70);
        }
#line 730 "make.module_target.m"
        {
#line 730 "make.module_target.m"
          mercury__io__write_string_3_p_0(make__module_target__V_70_70);
        }
#line 729 "make.module_target.m"
        {
#line 729 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
        }
#line 730 "make.module_target.m"
        {
#line 730 "make.module_target.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_target__V_76_76, make__module_target__ErrorMsg_24, &make__module_target__V_80_80);
        }
#line 730 "make.module_target.m"
        {
#line 730 "make.module_target.m"
          mercury__io__write_string_3_p_0(make__module_target__V_80_80);
        }
#line 729 "make.module_target.m"
        {
#line 729 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 726 "make.module_target.m"
      }
#line 725 "make.module_target.m"
    else
#line 711 "make.module_target.m"
      {
#line 711 "make.module_target.m"
        MR_Word make__module_target__ArgFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
#line 711 "make.module_target.m"
        MR_String make__module_target__Command_21;
#line 711 "make.module_target.m"
        MR_Word make__module_target__V_52_52;
#line 711 "make.module_target.m"
        MR_String make__module_target__V_53_53;
#line 711 "make.module_target.m"
        MR_Word make__module_target__V_54_54;
#line 711 "make.module_target.m"
        MR_Word make__module_target__V_56_56;
#line 711 "make.module_target.m"
        MR_String make__module_target__V_57_57;

#line 712 "make.module_target.m"
        {
#line 712 "make.module_target.m"
          mercury__io__write_string_4_p_0(make__module_target__ArgFileStream_20, (MR_String) "MCFLAGS = ");
        }
#line 713 "make.module_target.m"
        {
#line 713 "make.module_target.m"
          mercury__io__write_list_6_p_0(make__module_target__TypeCtorInfo_61_61, make__module_target__ArgFileStream_20, make__module_target__QuotedArgs_17, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[10]);
        }
#line 714 "make.module_target.m"
        {
#line 714 "make.module_target.m"
          mercury__io__nl_3_p_0(make__module_target__ArgFileStream_20);
        }
#line 715 "make.module_target.m"
        {
#line 715 "make.module_target.m"
          mercury__io__close_output_3_p_0(make__module_target__ArgFileStream_20);
        }
#line 718 "make.module_target.m"
        {
#line 718 "make.module_target.m"
          make__module_target__V_53_53 = libs__options__quote_arg_1_f_0(make__module_target__MercuryCompiler_16);
        }
#line 719 "make.module_target.m"
        {
#line 719 "make.module_target.m"
          make__module_target__V_57_57 = libs__options__quote_arg_1_f_0(make__module_target__ArgFileName_18);
        }
#line 719 "make.module_target.m"
        {
#line 719 "make.module_target.m"
          make__module_target__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 0) = ((MR_Box) (make__module_target__V_57_57));
#line 719 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "make.module_target.m"
        }
#line 719 "make.module_target.m"
        {
#line 719 "make.module_target.m"
          make__module_target__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 0) = ((MR_Box) ((MR_String) "--arg-file"));
#line 719 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 1) = ((MR_Box) (make__module_target__V_56_56));
#line 719 "make.module_target.m"
        }
#line 718 "make.module_target.m"
        {
#line 718 "make.module_target.m"
          make__module_target__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 0) = ((MR_Box) (make__module_target__V_53_53));
#line 718 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 1) = ((MR_Box) (make__module_target__V_54_54));
#line 718 "make.module_target.m"
        }
#line 717 "make.module_target.m"
        {
#line 717 "make.module_target.m"
          make__module_target__Command_21 = mercury__string__join_list_2_f_0((MR_String) " ", make__module_target__V_52_52);
        }
#line 723 "make.module_target.m"
        {
#line 723 "make.module_target.m"
          parse_tree__module_cmds__invoke_system_command_7_p_0(make__module_target__Globals_8, make__module_target__ErrorStream_9, (MR_Integer) 0, make__module_target__Command_21, make__module_target__Succeeded_12);
        }
#line 711 "make.module_target.m"
      }
#line 732 "make.module_target.m"
    {
#line 732 "make.module_target.m"
      mercury__io__remove_file_4_p_0(make__module_target__ArgFileName_18, &make__module_target__V_25_25);
    }
#line 669 "make.module_target.m"
  }
#line 666 "make.module_target.m"
}

#line 655 "make.module_target.m"
static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
#line 655 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 655 "make.module_target.m"
  MR_Word make__module_target__Args_7,
#line 655 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_8)
#line 655 "make.module_target.m"
{
#line 658 "make.module_target.m"
  {
#line 658 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 658 "make.module_target.m"
    MR_Integer make__module_target__Status0_10;
#line 658 "make.module_target.m"
    MR_Integer make__module_target__Status_11;

#line 659 "make.module_target.m"
    {
#line 659 "make.module_target.m"
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status0_10);
    }
#line 660 "make.module_target.m"
    {
#line 660 "make.module_target.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
    }
#line 661 "make.module_target.m"
    {
#line 661 "make.module_target.m"
      top_level__mercury_compile__main_for_make_4_p_0(make__module_target__Globals_6, make__module_target__Args_7);
    }
#line 662 "make.module_target.m"
    {
#line 662 "make.module_target.m"
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status_11);
    }
#line 663 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__Status_11 == (MR_Integer) 0);
#line 663 "make.module_target.m"
    if (make__module_target__succeeded)
#line 663 "make.module_target.m"
      *make__module_target__Succeeded_8 = (MR_Integer) 1;
#line 663 "make.module_target.m"
    else
#line 663 "make.module_target.m"
      *make__module_target__Succeeded_8 = (MR_Integer) 0;
#line 664 "make.module_target.m"
    {
#line 664 "make.module_target.m"
      mercury__io__set_exit_status_3_p_0(make__module_target__Status0_10);
#line 664 "make.module_target.m"
      return;
    }
#line 658 "make.module_target.m"
  }
#line 655 "make.module_target.m"
}

#line 620 "make.module_target.m"
static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
#line 620 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 620 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 620 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 620 "make.module_target.m"
  MR_String make__module_target__FactTableName_11,
#line 620 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12)
#line 620 "make.module_target.m"
{
#line 624 "make.module_target.m"
  {
#line 624 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 624 "make.module_target.m"
    MR_String make__module_target__ObjExt_14;
#line 624 "make.module_target.m"
    MR_String make__module_target__CFile_15;
#line 624 "make.module_target.m"
    MR_String make__module_target__ObjFile_16;
#line 624 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_28;

#line 635 "make.module_target.m"
    {
#line 635 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_28);
    }
#line 639 "make.module_target.m"
#line 639 "make.module_target.m"
    switch (make__module_target__CompilationTarget_28) {
#line 639 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "make.module_target.m"
      case (MR_Integer) 0:
#line 638 "make.module_target.m"
        {
#line 638 "make.module_target.m"
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_14);
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 2:
#line 643 "make.module_target.m"
        {
#line 644 "make.module_target.m"
          {
#line 644 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 644 "make.module_target.m"
            return;
          }
#line 643 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 4:
#line 649 "make.module_target.m"
        {
#line 650 "make.module_target.m"
          {
#line 650 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 650 "make.module_target.m"
            return;
          }
#line 649 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 1:
#line 641 "make.module_target.m"
        make__module_target__ObjExt_14 = (MR_String) ".dll";
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 3:
#line 646 "make.module_target.m"
        {
#line 647 "make.module_target.m"
          {
#line 647 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 647 "make.module_target.m"
            return;
          }
#line 646 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
    }
#line 626 "make.module_target.m"
    {
#line 626 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, (MR_String) ".c", (MR_Integer) 0, &make__module_target__CFile_15);
    }
#line 628 "make.module_target.m"
    {
#line 628 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, make__module_target__ObjExt_14, (MR_Integer) 0, &make__module_target__ObjFile_16);
    }
#line 630 "make.module_target.m"
    {
#line 630 "make.module_target.m"
      MR_Word base;
#line 630 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "make.module_target.m"
      *make__module_target__ForeignCodeFile_12 = base;
#line 630 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 630 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__CFile_15));
#line 630 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFile_16));
#line 630 "make.module_target.m"
    }
#line 624 "make.module_target.m"
  }
#line 620 "make.module_target.m"
}

#line 600 "make.module_target.m"
static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
#line 600 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 600 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 600 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 600 "make.module_target.m"
  MR_Word make__module_target__Lang_11,
#line 600 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12)
#line 600 "make.module_target.m"
{
#line 603 "make.module_target.m"
  {
#line 603 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 603 "make.module_target.m"
    MR_Word make__module_target__ForeignModName_16;
#line 603 "make.module_target.m"
    MR_String make__module_target__SrcExt_17;
#line 603 "make.module_target.m"
    MR_String make__module_target__ObjExt_18;
#line 603 "make.module_target.m"
    MR_String make__module_target__SrcFileName_19;
#line 603 "make.module_target.m"
    MR_String make__module_target__ObjFileName_20;
#line 603 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_33;
#line 610 "make.module_target.m"
    MR_Word make__module_target__ForeignModName0_14;
#line 610 "make.module_target.m"
    MR_String make__module_target__SrcExt0_15;

#line 605 "make.module_target.m"
    {
#line 605 "make.module_target.m"
      make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__module_target__ModuleName_9, make__module_target__Lang_11, &make__module_target__ForeignModName0_14);
    }
#line 605 "make.module_target.m"
    if (make__module_target__succeeded)
#line 606 "make.module_target.m"
      {
#line 606 "make.module_target.m"
        make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(make__module_target__Lang_11, &make__module_target__SrcExt0_15);
      }
#line 610 "make.module_target.m"
    if (make__module_target__succeeded)
#line 608 "make.module_target.m"
      {
#line 608 "make.module_target.m"
        make__module_target__ForeignModName_16 = make__module_target__ForeignModName0_14;
#line 609 "make.module_target.m"
        make__module_target__SrcExt_17 = make__module_target__SrcExt0_15;
#line 608 "make.module_target.m"
      }
#line 610 "make.module_target.m"
    else
#line 611 "make.module_target.m"
      {
#line 611 "make.module_target.m"
        {
#line 611 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
#line 611 "make.module_target.m"
          return;
        }
#line 611 "make.module_target.m"
      }
#line 635 "make.module_target.m"
    {
#line 635 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_33);
    }
#line 639 "make.module_target.m"
#line 639 "make.module_target.m"
    switch (make__module_target__CompilationTarget_33) {
#line 639 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "make.module_target.m"
      case (MR_Integer) 0:
#line 638 "make.module_target.m"
        {
#line 638 "make.module_target.m"
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_18);
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 2:
#line 643 "make.module_target.m"
        {
#line 644 "make.module_target.m"
          {
#line 644 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 644 "make.module_target.m"
            return;
          }
#line 643 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 4:
#line 649 "make.module_target.m"
        {
#line 650 "make.module_target.m"
          {
#line 650 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 650 "make.module_target.m"
            return;
          }
#line 649 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 1:
#line 641 "make.module_target.m"
        make__module_target__ObjExt_18 = (MR_String) ".dll";
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
      case (MR_Integer) 3:
#line 646 "make.module_target.m"
        {
#line 647 "make.module_target.m"
          {
#line 647 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 647 "make.module_target.m"
            return;
          }
#line 646 "make.module_target.m"
        }
#line 639 "make.module_target.m"
        break;
#line 639 "make.module_target.m"
    }
#line 614 "make.module_target.m"
    {
#line 614 "make.module_target.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__SrcExt_17, (MR_Integer) 0, &make__module_target__SrcFileName_19);
    }
#line 616 "make.module_target.m"
    {
#line 616 "make.module_target.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__ObjExt_18, (MR_Integer) 0, &make__module_target__ObjFileName_20);
    }
#line 618 "make.module_target.m"
    {
#line 618 "make.module_target.m"
      MR_Word base;
#line 618 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "make.module_target.m"
      *make__module_target__ForeignCodeFile_12 = base;
#line 618 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__Lang_11));
#line 618 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__SrcFileName_19));
#line 618 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFileName_20));
#line 618 "make.module_target.m"
    }
#line 603 "make.module_target.m"
  }
#line 600 "make.module_target.m"
}

#line 586 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
#line 586 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1)
#line 586 "make.module_target.m"
{
#line 589 "make.module_target.m"
  {
#line 589 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 589 "make.module_target.m"
    MR_Word make__module_target__HeadVar__2_2 = ((&make__module_target_vector_common_4[4 + make__module_target__HeadVar__1_1]))->make__module_target__vector_common_type_4_0__vct_4_f_0;

#line 589 "make.module_target.m"
    return make__module_target__HeadVar__2_2;
#line 589 "make.module_target.m"
  }
#line 586 "make.module_target.m"
}

#line 560 "make.module_target.m"
static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
#line 560 "make.module_target.m"
  MR_Word make__module_target__Globals_9,
#line 560 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_10,
#line 560 "make.module_target.m"
  MR_Word make__module_target__PIC_11,
#line 560 "make.module_target.m"
  MR_Word make__module_target__Imports_12,
#line 560 "make.module_target.m"
  MR_Word make__module_target__ForeignCodeFile_13,
#line 560 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_14)
#line 560 "make.module_target.m"
{
#line 567 "make.module_target.m"
  {
#line 567 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 567 "make.module_target.m"
    MR_String make__module_target__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 2)));
#line 567 "make.module_target.m"
    MR_String make__module_target__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 1)));
#line 567 "make.module_target.m"
    MR_Word make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 0)));

#line 567 "make.module_target.m"
#line 567 "make.module_target.m"
    switch (make__module_target__V_43_43) {
#line 567 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 567 "make.module_target.m"
      case (MR_Integer) 0:
#line 568 "make.module_target.m"
        {
#line 568 "make.module_target.m"
          backend_libs__compile_target_code__do_compile_c_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__PIC_11, make__module_target__V_42_42, make__module_target__V_41_41, make__module_target__Succeeded_14);
#line 568 "make.module_target.m"
          return;
        }
#line 567 "make.module_target.m"
        break;
#line 567 "make.module_target.m"
      case (MR_Integer) 1:
#line 579 "make.module_target.m"
        {
#line 579 "make.module_target.m"
          backend_libs__compile_target_code__compile_csharp_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__Imports_12, make__module_target__V_42_42, make__module_target__V_41_41, make__module_target__Succeeded_14);
#line 579 "make.module_target.m"
          return;
        }
#line 567 "make.module_target.m"
        break;
#line 567 "make.module_target.m"
      case (MR_Integer) 4:
#line 583 "make.module_target.m"
        {
#line 583 "make.module_target.m"
          backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_42_42, make__module_target__Succeeded_14);
#line 583 "make.module_target.m"
          return;
        }
#line 567 "make.module_target.m"
        break;
#line 567 "make.module_target.m"
      case (MR_Integer) 3:
#line 571 "make.module_target.m"
        {
#line 572 "make.module_target.m"
          {
#line 572 "make.module_target.m"
            backend_libs__compile_target_code__do_il_assemble_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_42_42, make__module_target__V_41_41, (MR_Integer) 1, make__module_target__Succeeded_14);
#line 572 "make.module_target.m"
            return;
          }
#line 571 "make.module_target.m"
        }
#line 567 "make.module_target.m"
        break;
#line 567 "make.module_target.m"
      case (MR_Integer) 2:
#line 575 "make.module_target.m"
        {
#line 575 "make.module_target.m"
          MR_Word make__module_target__V_32_32;

#line 576 "make.module_target.m"
          {
#line 576 "make.module_target.m"
            make__module_target__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_32_32, 0) = ((MR_Box) (make__module_target__V_42_42));
#line 576 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "make.module_target.m"
          }
#line 576 "make.module_target.m"
          {
#line 576 "make.module_target.m"
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_32_32, make__module_target__Succeeded_14);
#line 576 "make.module_target.m"
            return;
          }
#line 575 "make.module_target.m"
        }
#line 567 "make.module_target.m"
        break;
#line 567 "make.module_target.m"
    }
#line 567 "make.module_target.m"
  }
#line 560 "make.module_target.m"
}

#line 529 "make.module_target.m"
static void MR_CALL 
make__module_target__build_object_code_9_p_0(
#line 529 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 529 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 529 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 529 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 529 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 529 "make.module_target.m"
  MR_Word make__module_target__Imports_15,
#line 529 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16)
#line 529 "make.module_target.m"
{
#line 536 "make.module_target.m"
  {
#line 536 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 536 "make.module_target.m"
#line 536 "make.module_target.m"
    switch (make__module_target__Target_12) {
#line 536 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 536 "make.module_target.m"
      case (MR_Integer) 0:
#line 537 "make.module_target.m"
        {
#line 537 "make.module_target.m"
          backend_libs__compile_target_code__compile_c_file_7_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__PIC_13, make__module_target__ModuleName_11, make__module_target__Succeeded_16);
#line 537 "make.module_target.m"
          return;
        }
#line 536 "make.module_target.m"
        break;
#line 536 "make.module_target.m"
      case (MR_Integer) 2:
#line 544 "make.module_target.m"
        {
#line 544 "make.module_target.m"
          MR_String make__module_target__CsharpFile_19;
#line 544 "make.module_target.m"
          MR_Word make__module_target__V_33_33;

#line 545 "make.module_target.m"
          {
#line 545 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".cs", (MR_Integer) 0, &make__module_target__CsharpFile_19);
          }
#line 548 "make.module_target.m"
          {
#line 548 "make.module_target.m"
            make__module_target__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_33_33, 0) = ((MR_Box) (make__module_target__CsharpFile_19));
#line 548 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "make.module_target.m"
          }
#line 547 "make.module_target.m"
          {
#line 547 "make.module_target.m"
            backend_libs__compile_target_code__link_8_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, (MR_Integer) 4, make__module_target__ModuleName_11, make__module_target__V_33_33, make__module_target__Succeeded_16);
#line 547 "make.module_target.m"
            return;
          }
#line 544 "make.module_target.m"
        }
#line 536 "make.module_target.m"
        break;
#line 536 "make.module_target.m"
      case (MR_Integer) 4:
#line 554 "make.module_target.m"
        {
#line 554 "make.module_target.m"
          MR_String make__module_target__ErlangFile_20;

#line 555 "make.module_target.m"
          {
#line 555 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".erl", (MR_Integer) 0, &make__module_target__ErlangFile_20);
          }
#line 557 "make.module_target.m"
          {
#line 557 "make.module_target.m"
            backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__ErlangFile_20, make__module_target__Succeeded_16);
#line 557 "make.module_target.m"
            return;
          }
#line 554 "make.module_target.m"
        }
#line 536 "make.module_target.m"
        break;
#line 536 "make.module_target.m"
      case (MR_Integer) 1:
#line 550 "make.module_target.m"
        {
#line 550 "make.module_target.m"
          MR_Word make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 25)));
#line 551 "make.module_target.m"
          MR_String make__module_target__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 0)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 1)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 2)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 3)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 4)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 5)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 6)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 7)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 8)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 9)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 10)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 11)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 12)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 13)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 14)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 15)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 16)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 17)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 18)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 19)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 20)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 21)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 22)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 23)));
#line 551 "make.module_target.m"
          MR_Word make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 24)));
#line 551 "make.module_target.m"
          MR_String make__module_target__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_15, (MR_Integer) 26)));

#line 551 "make.module_target.m"
          {
#line 551 "make.module_target.m"
            backend_libs__compile_target_code__il_assemble_7_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__ModuleName_11, make__module_target__V_27_27, make__module_target__Succeeded_16);
#line 551 "make.module_target.m"
            return;
          }
#line 550 "make.module_target.m"
        }
#line 536 "make.module_target.m"
        break;
#line 536 "make.module_target.m"
      case (MR_Integer) 3:
#line 539 "make.module_target.m"
        {
#line 539 "make.module_target.m"
          MR_String make__module_target__JavaFile_18;
#line 539 "make.module_target.m"
          MR_Word make__module_target__V_39_39;

#line 540 "make.module_target.m"
          {
#line 540 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".java", (MR_Integer) 0, &make__module_target__JavaFile_18);
          }
#line 542 "make.module_target.m"
          {
#line 542 "make.module_target.m"
            make__module_target__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_39_39, 0) = ((MR_Box) (make__module_target__JavaFile_18));
#line 542 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "make.module_target.m"
          }
#line 542 "make.module_target.m"
          {
#line 542 "make.module_target.m"
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__V_39_39, make__module_target__Succeeded_16);
#line 542 "make.module_target.m"
            return;
          }
#line 539 "make.module_target.m"
        }
#line 536 "make.module_target.m"
        break;
#line 536 "make.module_target.m"
    }
#line 536 "make.module_target.m"
  }
#line 529 "make.module_target.m"
}

#line 502 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
#line 502 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 502 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 502 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 502 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 502 "make.module_target.m"
{
#line 502 "make.module_target.m"
  {
#line 502 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 502 "make.module_target.m"
    MR_Word make__module_target__conv5_Succeeded_16;

#line 502 "make.module_target.m"
    {
#line 502 "make.module_target.m"
      make__module_target__build_object_code_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 8))), &make__module_target__conv5_Succeeded_16);
    }
#line 502 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv5_Succeeded_16));
#line 502 "make.module_target.m"
  }
#line 502 "make.module_target.m"
}

#line 475 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
#line 475 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 475 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 475 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 475 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 475 "make.module_target.m"
{
#line 475 "make.module_target.m"
  {
#line 475 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 475 "make.module_target.m"
    MR_Word make__module_target__conv4_Succeeded_12;

#line 475 "make.module_target.m"
    {
#line 475 "make.module_target.m"
      make__module_target__invoke_mmc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_Succeeded_12);
    }
#line 475 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_Succeeded_12));
#line 475 "make.module_target.m"
  }
#line 475 "make.module_target.m"
}

#line 474 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
#line 474 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 474 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 474 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 474 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 474 "make.module_target.m"
{
#line 474 "make.module_target.m"
  {
#line 474 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 474 "make.module_target.m"
    MR_Word make__module_target__conv3_Succeeded_8;

#line 474 "make.module_target.m"
    {
#line 474 "make.module_target.m"
      make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), &make__module_target__conv3_Succeeded_8);
    }
#line 474 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv3_Succeeded_8));
#line 474 "make.module_target.m"
  }
#line 474 "make.module_target.m"
}

#line 454 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
#line 454 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 454 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 454 "make.module_target.m"
{
#line 454 "make.module_target.m"
  {
#line 454 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 454 "make.module_target.m"
    {
#line 454 "make.module_target.m"
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
#line 454 "make.module_target.m"
      return;
    }
#line 454 "make.module_target.m"
  }
#line 454 "make.module_target.m"
}

#line 454 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
#line 454 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 454 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 454 "make.module_target.m"
{
#line 454 "make.module_target.m"
  {
#line 454 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 454 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 454 "make.module_target.m"
    MR_String make__module_target__conv2_HeadVar__2_2;

#line 454 "make.module_target.m"
    {
#line 454 "make.module_target.m"
      make__module_target__conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
#line 454 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv2_HeadVar__2_2));
#line 454 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 454 "make.module_target.m"
  }
#line 454 "make.module_target.m"
}

#line 513 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
#line 513 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 513 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 513 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 513 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 513 "make.module_target.m"
{
#line 513 "make.module_target.m"
  {
#line 513 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 513 "make.module_target.m"
    MR_Word make__module_target__conv1_Succeeded_14;

#line 513 "make.module_target.m"
    {
#line 513 "make.module_target.m"
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv1_Succeeded_14);
    }
#line 513 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv1_Succeeded_14));
#line 513 "make.module_target.m"
  }
#line 513 "make.module_target.m"
}

#line 524 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
#line 524 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 524 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 524 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 524 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 524 "make.module_target.m"
{
#line 524 "make.module_target.m"
  {
#line 524 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 524 "make.module_target.m"
    MR_Word make__module_target__conv0_Succeeded_14;

#line 524 "make.module_target.m"
    {
#line 524 "make.module_target.m"
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv0_Succeeded_14);
    }
#line 524 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_Succeeded_14));
#line 524 "make.module_target.m"
  }
#line 524 "make.module_target.m"
}

#line 437 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0(
#line 437 "make.module_target.m"
  MR_Word make__module_target__ModuleName_13,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Task_14,
#line 437 "make.module_target.m"
  MR_Word make__module_target__ArgFileName_15,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 437 "make.module_target.m"
  MR_Word make__module_target__Globals_17,
#line 437 "make.module_target.m"
  MR_Word make__module_target__AllOptionArgs_18,
#line 437 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_19,
#line 437 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 437 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
#line 437 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_37)
#line 437 "make.module_target.m"
{
#line 443 "make.module_target.m"
  {
#line 443 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 495 "make.module_target.m"
#line 495 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__Task_14)) {
#line 495 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 495 "make.module_target.m"
      case (MR_Integer) 0:
#line 445 "make.module_target.m"
        {
#line 445 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_14, (MR_Integer) 0)));
#line 445 "make.module_target.m"
          MR_String make__module_target__ModuleArg_24;
#line 445 "make.module_target.m"
          MR_Word make__module_target__Verbose_25;
#line 445 "make.module_target.m"
          MR_Word make__module_target__OldOutputStream_27;
#line 445 "make.module_target.m"
          MR_Word make__module_target__IsForkable_28;
#line 482 "make.module_target.m"
          MR_Word make__module_target__V_29_29;

#line 446 "make.module_target.m"
          {
#line 446 "make.module_target.m"
            make__module_target__ModuleArg_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(make__module_target__ModuleName_13);
          }
#line 448 "make.module_target.m"
          {
#line 448 "make.module_target.m"
            libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_17, (MR_Integer) 51, &make__module_target__Verbose_25);
          }
#line 458 "make.module_target.m"
#line 458 "make.module_target.m"
          switch (make__module_target__Verbose_25) {
#line 458 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 458 "make.module_target.m"
            case (MR_Integer) 0:
#line 459 "make.module_target.m"
              {
#line 459 "make.module_target.m"
              }
#line 458 "make.module_target.m"
              break;
#line 458 "make.module_target.m"
            case (MR_Integer) 1:
#line 450 "make.module_target.m"
              {
#line 450 "make.module_target.m"
                MR_Word make__module_target__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 450 "make.module_target.m"
                MR_Word make__module_target__AllArgs_26;
#line 450 "make.module_target.m"
                MR_Word make__module_target__V_49_49;
#line 450 "make.module_target.m"
                MR_Word make__module_target__V_53_53;

#line 451 "make.module_target.m"
                {
#line 451 "make.module_target.m"
                  make__module_target__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 451 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "make.module_target.m"
                }
#line 451 "make.module_target.m"
                {
#line 451 "make.module_target.m"
                  make__module_target__AllArgs_26 = mercury__list__append_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__AllOptionArgs_18, make__module_target__V_49_49);
                }
#line 452 "make.module_target.m"
                {
#line 452 "make.module_target.m"
                  mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
                }
#line 454 "make.module_target.m"
                {
#line 454 "make.module_target.m"
                  make__module_target__V_53_53 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__TypeCtorInfo_78_78, (MR_Word) &make__module_target_scalar_common_2[7], make__module_target__AllArgs_26);
                }
#line 454 "make.module_target.m"
                {
#line 454 "make.module_target.m"
                  mercury__io__write_list_5_p_0(make__module_target__TypeCtorInfo_78_78, make__module_target__V_53_53, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[8]);
                }
#line 456 "make.module_target.m"
                {
#line 456 "make.module_target.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'");
                }
#line 457 "make.module_target.m"
                {
#line 457 "make.module_target.m"
                  mercury__io__nl_2_p_0();
                }
#line 450 "make.module_target.m"
              }
#line 458 "make.module_target.m"
              break;
#line 458 "make.module_target.m"
          }
#line 469 "make.module_target.m"
          {
#line 469 "make.module_target.m"
            mercury__io__set_output_stream_4_p_0(make__module_target__ErrorStream_19, &make__module_target__OldOutputStream_27);
          }
#line 470 "make.module_target.m"
          {
#line 470 "make.module_target.m"
            make__module_target__IsForkable_28 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_23);
          }
#line 478 "make.module_target.m"
#line 478 "make.module_target.m"
          switch (make__module_target__IsForkable_28) {
#line 478 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 478 "make.module_target.m"
            case (MR_Integer) 0:
#line 479 "make.module_target.m"
              {
#line 479 "make.module_target.m"
                MR_Word make__module_target__V_62_62;

#line 480 "make.module_target.m"
                {
#line 480 "make.module_target.m"
                  make__module_target__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 480 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "make.module_target.m"
                }
#line 480 "make.module_target.m"
                {
#line 480 "make.module_target.m"
                  make__module_target__call_mercury_compile_main_5_p_0(make__module_target__Globals_17, make__module_target__V_62_62, make__module_target__Succeeded_20);
                }
#line 479 "make.module_target.m"
              }
#line 478 "make.module_target.m"
              break;
#line 478 "make.module_target.m"
            case (MR_Integer) 1:
#line 472 "make.module_target.m"
              {
#line 472 "make.module_target.m"
                MR_Word make__module_target__V_65_65;
#line 472 "make.module_target.m"
                MR_Word make__module_target__V_66_66;
#line 472 "make.module_target.m"
                MR_Word make__module_target__V_68_68;
#line 472 "make.module_target.m"
                MR_Word make__module_target__V_70_70;

#line 474 "make.module_target.m"
                {
#line 474 "make.module_target.m"
                  make__module_target__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "make.module_target.m"
                }
#line 474 "make.module_target.m"
                {
#line 474 "make.module_target.m"
                  make__module_target__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 474 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 4) = ((MR_Box) (make__module_target__V_68_68));
#line 474 "make.module_target.m"
                }
#line 476 "make.module_target.m"
                {
#line 476 "make.module_target.m"
                  make__module_target__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__AllOptionArgs_18, make__module_target__V_68_68);
                }
#line 475 "make.module_target.m"
                {
#line 475 "make.module_target.m"
                  make__module_target__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 0) = ((MR_Box) (&make__module_target_scalar_common_6[4]));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 5) = ((MR_Box) (make__module_target__ArgFileName_15));
#line 475 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 6) = ((MR_Box) (make__module_target__V_70_70));
#line 475 "make.module_target.m"
                }
#line 473 "make.module_target.m"
                {
#line 473 "make.module_target.m"
                  libs__process_util__call_in_forked_process_with_backup_5_p_0(make__module_target__V_65_65, make__module_target__V_66_66, make__module_target__Succeeded_20);
                }
#line 472 "make.module_target.m"
              }
#line 478 "make.module_target.m"
              break;
#line 478 "make.module_target.m"
          }
#line 482 "make.module_target.m"
          {
#line 482 "make.module_target.m"
            mercury__io__set_output_stream_4_p_0(make__module_target__OldOutputStream_27, &make__module_target__V_29_29);
          }
#line 486 "make.module_target.m"
#line 486 "make.module_target.m"
          switch (make__module_target__ModuleTask_23) {
#line 486 "make.module_target.m"
            default:
#line 486 "make.module_target.m"
              make__module_target__succeeded = MR_FALSE;
#line 486 "make.module_target.m"
              break;
#line 486 "make.module_target.m"
            case (MR_Integer) 6:
#line 485 "make.module_target.m"
              make__module_target__succeeded = MR_TRUE;
#line 486 "make.module_target.m"
              break;
#line 486 "make.module_target.m"
            case (MR_Integer) 0:
#line 486 "make.module_target.m"
              make__module_target__succeeded = MR_TRUE;
#line 486 "make.module_target.m"
              break;
#line 486 "make.module_target.m"
          }
#line 492 "make.module_target.m"
          if (make__module_target__succeeded)
#line 491 "make.module_target.m"
            {
#line 491 "make.module_target.m"
              {
#line 491 "make.module_target.m"
                parse_tree__module_cmds__touch_interface_datestamp_5_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, (MR_String) ".err_date");
              }
#line 491 "make.module_target.m"
            }
#line 492 "make.module_target.m"
          else
#line 492 "make.module_target.m"
            {
#line 492 "make.module_target.m"
            }
#line 445 "make.module_target.m"
        }
#line 495 "make.module_target.m"
        break;
#line 495 "make.module_target.m"
      case (MR_Integer) 1:
#line 496 "make.module_target.m"
        {
#line 496 "make.module_target.m"
          MR_Word make__module_target__PIC_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__Task_14, (MR_Integer) 0)));
#line 496 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_31;
#line 496 "make.module_target.m"
          MR_Word make__module_target__V_46_46;

#line 497 "make.module_target.m"
          {
#line 497 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_17, &make__module_target__CompilationTarget_31);
          }
#line 502 "make.module_target.m"
          {
#line 502 "make.module_target.m"
            make__module_target__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 0) = ((MR_Box) (&make__module_target_scalar_common_13[1]));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 4) = ((MR_Box) (make__module_target__ModuleName_13));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 5) = ((MR_Box) (make__module_target__CompilationTarget_31));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 6) = ((MR_Box) (make__module_target__PIC_30));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 7) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 502 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 8) = ((MR_Box) (make__module_target__Imports_16));
#line 502 "make.module_target.m"
          }
#line 501 "make.module_target.m"
          {
#line 501 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_46_46, make__module_target__Succeeded_20);
          }
#line 496 "make.module_target.m"
        }
#line 495 "make.module_target.m"
        break;
#line 495 "make.module_target.m"
      case (MR_Integer) 2:
#line 506 "make.module_target.m"
        {
#line 506 "make.module_target.m"
          MR_Word make__module_target__Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 1)));
#line 506 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_33;
#line 506 "make.module_target.m"
          MR_Word make__module_target__V_44_44;
#line 506 "make.module_target.m"
          MR_Word make__module_target__PIC_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 0)));

#line 507 "make.module_target.m"
          {
#line 507 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_76, make__module_target__Lang_32, &make__module_target__ForeignCodeFile_33);
          }
#line 513 "make.module_target.m"
          {
#line 513 "make.module_target.m"
            make__module_target__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 5) = ((MR_Box) (make__module_target__PIC_76));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 513 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 7) = ((MR_Box) (make__module_target__ForeignCodeFile_33));
#line 513 "make.module_target.m"
          }
#line 512 "make.module_target.m"
          {
#line 512 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_44_44, make__module_target__Succeeded_20);
          }
#line 506 "make.module_target.m"
        }
#line 495 "make.module_target.m"
        break;
#line 495 "make.module_target.m"
      case (MR_Integer) 3:
#line 517 "make.module_target.m"
        {
#line 517 "make.module_target.m"
          MR_String make__module_target__FactTableFile_34 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 1)));
#line 517 "make.module_target.m"
          MR_Word make__module_target__FactTableForeignCode_35;
#line 517 "make.module_target.m"
          MR_Word make__module_target__V_41_41;
#line 517 "make.module_target.m"
          MR_Word make__module_target__PIC_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 0)));

#line 518 "make.module_target.m"
          {
#line 518 "make.module_target.m"
            make__module_target__fact_table_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_77, make__module_target__FactTableFile_34, &make__module_target__FactTableForeignCode_35);
          }
#line 524 "make.module_target.m"
          {
#line 524 "make.module_target.m"
            make__module_target__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 5) = ((MR_Box) (make__module_target__PIC_77));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 7) = ((MR_Box) (make__module_target__FactTableForeignCode_35));
#line 524 "make.module_target.m"
          }
#line 523 "make.module_target.m"
          {
#line 523 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_41_41, make__module_target__Succeeded_20);
          }
#line 517 "make.module_target.m"
        }
#line 495 "make.module_target.m"
        break;
#line 495 "make.module_target.m"
    }
#line 443 "make.module_target.m"
    *make__module_target__STATE_VARIABLE_Info_37 = make__module_target__STATE_VARIABLE_Info_0_36;
#line 443 "make.module_target.m"
  }
#line 437 "make.module_target.m"
}

#line 413 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_3(
#line 413 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 413 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 413 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 413 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 413 "make.module_target.m"
{
#line 413 "make.module_target.m"
  {
#line 413 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 413 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__5_5;
#line 413 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__7_7;

#line 413 "make.module_target.m"
    {
#line 413 "make.module_target.m"
      make__util__build_with_module_options_and_output_redirect_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_HeadVar__5_5, ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__7_7);
    }
#line 413 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_HeadVar__5_5));
#line 413 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__7_7));
#line 413 "make.module_target.m"
  }
#line 413 "make.module_target.m"
}

#line 415 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_2(
#line 415 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6,
#line 415 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_7,
#line 415 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_8)
#line 415 "make.module_target.m"
{
#line 415 "make.module_target.m"
  {
#line 415 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 415 "make.module_target.m"
    MR_Word make__module_target__conv2_Succeeded_20;
#line 415 "make.module_target.m"
    MR_Word make__module_target__conv1_STATE_VARIABLE_Info_37;

#line 415 "make.module_target.m"
    {
#line 415 "make.module_target.m"
      make__module_target__build_target_2_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_Succeeded_20, ((MR_Word) make__module_target__wrapper_arg_5), &make__module_target__conv1_STATE_VARIABLE_Info_37);
    }
#line 415 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_Succeeded_20));
#line 415 "make.module_target.m"
    *make__module_target__wrapper_arg_6 = ((MR_Box) (make__module_target__conv1_STATE_VARIABLE_Info_37));
#line 415 "make.module_target.m"
  }
#line 415 "make.module_target.m"
}

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_1(
#line 395 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 395 "make.module_target.m"
{
#line 395 "make.module_target.m"
  {
#line 395 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 395 "make.module_target.m"
    MR_Word make__module_target__conv0_HeadVar__6_53;

#line 395 "make.module_target.m"
    {
#line 395 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__build_target__395__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv0_HeadVar__6_53);
    }
#line 395 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_HeadVar__6_53));
#line 395 "make.module_target.m"
  }
#line 395 "make.module_target.m"
}

#line 371 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0(
#line 371 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 371 "make.module_target.m"
  MR_Word make__module_target__CompilationTask_14,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TargetFile_15,
#line 371 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 371 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 371 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_19,
#line 371 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 371 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 371 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41)
#line 371 "make.module_target.m"
{
#line 377 "make.module_target.m"
  {
#line 377 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 377 "make.module_target.m"
    MR_Word make__module_target__ModuleName_23;
#line 377 "make.module_target.m"
    MR_Word make__module_target__Task_25;
#line 377 "make.module_target.m"
    MR_Word make__module_target__TaskOptions_26;
#line 377 "make.module_target.m"
    MR_Word make__module_target__MaybeArgFileName_30;
#line 377 "make.module_target.m"
    MR_Word make__module_target__Cleanup_31;
#line 377 "make.module_target.m"
    MR_Integer make__module_target__Time0_35;
#line 377 "make.module_target.m"
    MR_Word make__module_target__VeryVerbose_36;
#line 377 "make.module_target.m"
    MR_Integer make__module_target__Time_37;
#line 377 "make.module_target.m"
    MR_Word make__module_target__ShowMakeTimes_38;
#line 377 "make.module_target.m"
    MR_Word make__module_target__V_67_67;
#line 377 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_68_68;
#line 377 "make.module_target.m"
    MR_Word make__module_target__V_70_70;
#line 377 "make.module_target.m"
    MR_Word make__module_target__V_71_71;
#line 379 "make.module_target.m"
    MR_Word make__module_target___FileType_24;
#line 382 "make.module_target.m"
    MR_Word make__module_target__ModuleTask_27;
#line 382 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 382 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 382 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 412 "make.module_target.m"
    MR_Box make__module_target__conv5_STATE_VARIABLE_Info_68_68;

#line 378 "make.module_target.m"
    {
#line 378 "make.module_target.m"
      make__util__maybe_make_target_message_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
    }
#line 379 "make.module_target.m"
    make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 0)));
#line 379 "make.module_target.m"
    make__module_target___FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 1)));
#line 380 "make.module_target.m"
    make__module_target__Task_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
#line 380 "make.module_target.m"
    make__module_target__TaskOptions_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
#line 382 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
#line 382 "make.module_target.m"
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
#line 382 "make.module_target.m"
    make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 382 "make.module_target.m"
    if (make__module_target__succeeded)
#line 382 "make.module_target.m"
      {
#line 382 "make.module_target.m"
        make__module_target__ModuleTask_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_45_45, (MR_Integer) 0)));
#line 383 "make.module_target.m"
        {
#line 383 "make.module_target.m"
          make__module_target__V_46_46 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_27);
        }
#line 383 "make.module_target.m"
        make__module_target__succeeded = (make__module_target__V_46_46 == (MR_Integer) 1);
#line 382 "make.module_target.m"
        if (make__module_target__succeeded)
#line 382 "make.module_target.m"
          {
#line 384 "make.module_target.m"
            {
#line 384 "make.module_target.m"
              make__module_target__succeeded = libs__process_util__can_fork_0_p_0();
            }
#line 384 "make.module_target.m"
            make__module_target__succeeded = !(make__module_target__succeeded);
#line 382 "make.module_target.m"
          }
#line 382 "make.module_target.m"
      }
#line 392 "make.module_target.m"
    if (make__module_target__succeeded)
#line 390 "make.module_target.m"
      {
#line 390 "make.module_target.m"
        MR_String make__module_target__ArgFileName_29;

#line 390 "make.module_target.m"
        {
#line 390 "make.module_target.m"
          mercury__io__make_temp_3_p_0(&make__module_target__ArgFileName_29);
        }
#line 391 "make.module_target.m"
        {
#line 391 "make.module_target.m"
          make__module_target__MaybeArgFileName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_30, 0) = ((MR_Box) (make__module_target__ArgFileName_29));
#line 391 "make.module_target.m"
        }
#line 390 "make.module_target.m"
      }
#line 392 "make.module_target.m"
    else
#line 393 "make.module_target.m"
      make__module_target__MaybeArgFileName_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "make.module_target.m"
    {
#line 395 "make.module_target.m"
      make__module_target__Cleanup_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 4) = ((MR_Box) (make__module_target__TouchedTargetFiles_17));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 5) = ((MR_Box) (make__module_target__TouchedFiles_18));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 6) = ((MR_Box) (make__module_target__MaybeArgFileName_30));
#line 395 "make.module_target.m"
    }
#line 410 "make.module_target.m"
    {
#line 410 "make.module_target.m"
      make__util__get_real_milliseconds_3_p_0(&make__module_target__Time0_35);
    }
#line 411 "make.module_target.m"
    {
#line 411 "make.module_target.m"
      libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 46, &make__module_target__VeryVerbose_36);
    }
#line 414 "make.module_target.m"
    {
#line 414 "make.module_target.m"
      make__module_target__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ExtraOptions_19, make__module_target__TaskOptions_26);
    }
#line 415 "make.module_target.m"
    {
#line 415 "make.module_target.m"
      make__module_target__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_2));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 3) = ((MR_Box) (make__module_target__ModuleName_23));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 4) = ((MR_Box) (make__module_target__Task_25));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 5) = ((MR_Box) (make__module_target__MaybeArgFileName_30));
#line 415 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 415 "make.module_target.m"
    }
#line 413 "make.module_target.m"
    {
#line 413 "make.module_target.m"
      make__module_target__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 0) = ((MR_Box) (&make__module_target_scalar_common_13[0]));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_3));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 4) = ((MR_Box) (make__module_target__ModuleName_23));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 5) = ((MR_Box) (make__module_target__V_70_70));
#line 413 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 6) = ((MR_Box) (make__module_target__V_71_71));
#line 413 "make.module_target.m"
    }
#line 412 "make.module_target.m"
    {
#line 412 "make.module_target.m"
      libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__VeryVerbose_36, make__module_target__V_67_67, make__module_target__Cleanup_31, make__module_target__Succeeded_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_40)), &make__module_target__conv5_STATE_VARIABLE_Info_68_68);
    }
#line 412 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_68_68 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_68_68);
#line 417 "make.module_target.m"
    {
#line 417 "make.module_target.m"
      make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_13, *make__module_target__Succeeded_20, make__module_target__TargetFile_15, make__module_target__TouchedTargetFiles_17, make__module_target__TouchedFiles_18, make__module_target__STATE_VARIABLE_Info_68_68, make__module_target__STATE_VARIABLE_Info_41);
    }
#line 419 "make.module_target.m"
    {
#line 419 "make.module_target.m"
      make__util__get_real_milliseconds_3_p_0(&make__module_target__Time_37);
    }
#line 421 "make.module_target.m"
    {
#line 421 "make.module_target.m"
      libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 655, &make__module_target__ShowMakeTimes_38);
    }
#line 433 "make.module_target.m"
#line 433 "make.module_target.m"
    switch (make__module_target__ShowMakeTimes_38) {
#line 433 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.module_target.m"
      case (MR_Integer) 0:
#line 434 "make.module_target.m"
        {
#line 434 "make.module_target.m"
        }
#line 433 "make.module_target.m"
        break;
#line 433 "make.module_target.m"
      case (MR_Integer) 1:
#line 423 "make.module_target.m"
        {
#line 423 "make.module_target.m"
          MR_Float make__module_target__DiffSecs_39;
#line 423 "make.module_target.m"
          MR_Float make__module_target__V_76_76;
#line 423 "make.module_target.m"
          MR_Integer make__module_target__V_77_77 = (make__module_target__Time_37 - make__module_target__Time0_35);

#line 424 "make.module_target.m"
          {
#line 424 "make.module_target.m"
            make__module_target__V_76_76 = mercury__float__float_1_f_0(make__module_target__V_77_77);
          }
#line 424 "make.module_target.m"
          {
#line 424 "make.module_target.m"
            make__module_target__DiffSecs_39 = mercury__float__f_slash_2_f_0(make__module_target__V_76_76, (MR_Float) 1000.0000000000000);
          }
#line 426 "make.module_target.m"
          make__module_target__succeeded = (make__module_target__DiffSecs_39 >= ((MR_Float) 0.40000000000000002));
#line 430 "make.module_target.m"
          if (make__module_target__succeeded)
#line 427 "make.module_target.m"
            {
#line 427 "make.module_target.m"
              MR_String make__module_target__V_124_124;

#line 427 "make.module_target.m"
              {
#line 427 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "Making ");
              }
#line 428 "make.module_target.m"
              {
#line 428 "make.module_target.m"
                make__util__make_write_target_file_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
              }
#line 429 "make.module_target.m"
              {
#line 429 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) " took ");
              }
#line 429 "make.module_target.m"
              {
#line 429 "make.module_target.m"
                mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &make__module_target_scalar_common_3[8], (MR_Integer) 2, (MR_Integer) 2, make__module_target__DiffSecs_39, &make__module_target__V_124_124);
              }
#line 429 "make.module_target.m"
              {
#line 429 "make.module_target.m"
                mercury__io__write_string_3_p_0(make__module_target__V_124_124);
              }
#line 429 "make.module_target.m"
              {
#line 429 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "s\n");
#line 429 "make.module_target.m"
                return;
              }
#line 427 "make.module_target.m"
            }
#line 430 "make.module_target.m"
          else
#line 430 "make.module_target.m"
            {
#line 430 "make.module_target.m"
            }
#line 423 "make.module_target.m"
        }
#line 433 "make.module_target.m"
        break;
#line 433 "make.module_target.m"
    }
#line 377 "make.module_target.m"
  }
#line 371 "make.module_target.m"
}

#line 348 "make.module_target.m"
static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
#line 348 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 348 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 348 "make.module_target.m"
  MR_Word * make__module_target__ForceReanalysis_9,
#line 348 "make.module_target.m"
  MR_Word make__module_target__Info_10)
#line 348 "make.module_target.m"
{
#line 365 "make.module_target.m"
  {
#line 365 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 353 "make.module_target.m"
    MR_Integer make__module_target__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 18)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 0)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 1)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 2)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 3)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 4)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 5)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 6)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 7)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 8)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 9)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 10)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 11)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 12)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 13)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 14)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 15)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 16)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 17)));
#line 353 "make.module_target.m"
    MR_Word make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 19)));

#line 353 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__V_15_15 > (MR_Integer) 0);
#line 365 "make.module_target.m"
    if (make__module_target__succeeded)
#line 355 "make.module_target.m"
      {
#line 355 "make.module_target.m"
        MR_Word make__module_target__AnalysisStatus_12;

#line 354 "make.module_target.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 354 "make.module_target.m"
        {
#line 354 "make.module_target.m"
          analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__module_target_scalar_common_1[3], ((MR_Box) ((MR_Integer) 0)), make__module_target__Globals_7, make__module_target__ModuleName_8, &make__module_target__AnalysisStatus_12);
        }
#line 361 "make.module_target.m"
#line 361 "make.module_target.m"
        switch (make__module_target__AnalysisStatus_12) {
#line 361 "make.module_target.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 361 "make.module_target.m"
          case (MR_Integer) 0:
#line 361 "make.module_target.m"
          case (MR_Integer) 1:
#line 360 "make.module_target.m"
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 1;
#line 361 "make.module_target.m"
            break;
#line 361 "make.module_target.m"
          case (MR_Integer) 2:
#line 363 "make.module_target.m"
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
#line 361 "make.module_target.m"
            break;
#line 361 "make.module_target.m"
        }
#line 355 "make.module_target.m"
      }
#line 365 "make.module_target.m"
    else
#line 366 "make.module_target.m"
      *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
#line 365 "make.module_target.m"
  }
#line 348 "make.module_target.m"
}

#line 336 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
#line 336 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 336 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 336 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2)
#line 336 "make.module_target.m"
{
#line 336 "make.module_target.m"
  {
#line 336 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_3;
#line 336 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 336 "make.module_target.m"
    MR_Word make__module_target__conv19_HeadVar__3_3;

#line 336 "make.module_target.m"
    {
#line 336 "make.module_target.m"
      make__module_target__conv19_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 336 "make.module_target.m"
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv19_HeadVar__3_3));
#line 336 "make.module_target.m"
    return make__module_target__wrapper_arg_3;
#line 336 "make.module_target.m"
  }
#line 336 "make.module_target.m"
}

#line 334 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
#line 334 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 334 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 334 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2)
#line 334 "make.module_target.m"
{
#line 334 "make.module_target.m"
  {
#line 334 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_3;
#line 334 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 334 "make.module_target.m"
    MR_Word make__module_target__conv17_HeadVar__3_3;

#line 334 "make.module_target.m"
    {
#line 334 "make.module_target.m"
      make__module_target__conv17_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 334 "make.module_target.m"
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv17_HeadVar__3_3));
#line 334 "make.module_target.m"
    return make__module_target__wrapper_arg_3;
#line 334 "make.module_target.m"
  }
#line 334 "make.module_target.m"
}

#line 332 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
#line 332 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 332 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 332 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 332 "make.module_target.m"
{
#line 332 "make.module_target.m"
  {
#line 332 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 332 "make.module_target.m"
    MR_Word make__module_target__conv14_HeadVar__3_3;
#line 332 "make.module_target.m"
    MR_Word make__module_target__conv13_HeadVar__5_5;

#line 332 "make.module_target.m"
    {
#line 332 "make.module_target.m"
      make__util__get_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv14_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv13_HeadVar__5_5);
    }
#line 332 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv14_HeadVar__3_3));
#line 332 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv13_HeadVar__5_5));
#line 332 "make.module_target.m"
  }
#line 332 "make.module_target.m"
}

#line 329 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
#line 329 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 329 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 329 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 329 "make.module_target.m"
{
#line 329 "make.module_target.m"
  {
#line 329 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 329 "make.module_target.m"
    MR_Word make__module_target__conv10_HeadVar__3_3;
#line 329 "make.module_target.m"
    MR_Word make__module_target__conv9_HeadVar__5_5;

#line 329 "make.module_target.m"
    {
#line 329 "make.module_target.m"
      make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv10_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_HeadVar__5_5);
    }
#line 329 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv10_HeadVar__3_3));
#line 329 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_HeadVar__5_5));
#line 329 "make.module_target.m"
  }
#line 329 "make.module_target.m"
}

#line 298 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
#line 298 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 298 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 298 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 298 "make.module_target.m"
{
#line 298 "make.module_target.m"
  {
#line 298 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 298 "make.module_target.m"
    MR_Word make__module_target__conv5_HeadVar__4_4;
#line 298 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__6_6;

#line 298 "make.module_target.m"
    {
#line 298 "make.module_target.m"
      make__util__get_target_timestamp_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv4_HeadVar__6_6);
    }
#line 298 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_HeadVar__4_4));
#line 298 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv4_HeadVar__6_6));
#line 298 "make.module_target.m"
  }
#line 298 "make.module_target.m"
}

#line 293 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
#line 293 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 293 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 293 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7)
#line 293 "make.module_target.m"
{
#line 293 "make.module_target.m"
  {
#line 293 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 293 "make.module_target.m"
    MR_Word make__module_target__conv1_Succeeded_10;
#line 293 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_14;

#line 293 "make.module_target.m"
    {
#line 293 "make.module_target.m"
      make__module_target__make_module_target_7_p_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv1_Succeeded_10, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv0_STATE_VARIABLE_Info_14);
    }
#line 293 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv1_Succeeded_10));
#line 293 "make.module_target.m"
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_14));
#line 293 "make.module_target.m"
  }
#line 293 "make.module_target.m"
}

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 306 "make.module_target.m"
{
#line 306 "make.module_target.m"
  {
#line 306 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 306 "make.module_target.m"
    MR_builtin_longjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0, 1);
#line 306 "make.module_target.m"
  }
#line 306 "make.module_target.m"
}

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 306 "make.module_target.m"
{
#line 306 "make.module_target.m"
  {
#line 306 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 306 "make.module_target.m"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104 = ((MR_Word) (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104);
#line 306 "make.module_target.m"
    {
#line 306 "make.module_target.m"
      make__module_target__make_dependency_files_10_p_0_4(make__module_target__env_ptr);
#line 306 "make.module_target.m"
      return;
    }
#line 306 "make.module_target.m"
  }
#line 306 "make.module_target.m"
}

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 306 "make.module_target.m"
{
#line 306 "make.module_target.m"
  {
#line 306 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 8316 "make.module_target.c"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 8318 "make.module_target.c"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 306 "make.module_target.m"
    {
#line 306 "make.module_target.m"
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = make__module_target____Unify____maybe__maybe_error_2_2((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104);
    }
#line 306 "make.module_target.m"
    if ((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 306 "make.module_target.m"
      {
#line 306 "make.module_target.m"
        make__module_target__make_dependency_files_10_p_0_3(make__module_target__env_ptr);
#line 306 "make.module_target.m"
        return;
      }
#line 306 "make.module_target.m"
  }
#line 306 "make.module_target.m"
}

#line 306 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
#line 306 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 306 "make.module_target.m"
{
#line 306 "make.module_target.m"
  {
#line 306 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 306 "make.module_target.m"
    if (MR_builtin_setjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0) == 0)
#line 306 "make.module_target.m"
      {
#line 306 "make.module_target.m"
        {
#line 306 "make.module_target.m"
          MR_String make__module_target__V_22_22;

#line 306 "make.module_target.m"
          {
#line 306 "make.module_target.m"
            MR_Word base;
#line 306 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "make.module_target.m"
            (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43 = base;
#line 306 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 306 "make.module_target.m"
          }
#line 306 "make.module_target.m"
          {
#line 306 "make.module_target.m"
            mercury__list__member_2_p_1((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, &(make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_5, make__module_target__env_ptr);
          }
#line 306 "make.module_target.m"
        }
#line 306 "make.module_target.m"
        (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_FALSE;
#line 306 "make.module_target.m"
      }
#line 306 "make.module_target.m"
    else
#line 306 "make.module_target.m"
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_TRUE;
#line 306 "make.module_target.m"
  }
#line 306 "make.module_target.m"
}

#line 283 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
#line 283 "make.module_target.m"
  MR_Word make__module_target__Globals_11,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 283 "make.module_target.m"
  MR_Word make__module_target__DepFilesToMake_13,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_14,
#line 283 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_15,
#line 283 "make.module_target.m"
  MR_Word * make__module_target__DepsResult_16,
#line 283 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
#line 283 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_32)
#line 283 "make.module_target.m"
{
#line 283 "make.module_target.m"
  {
#line 283 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s make__module_target__env;

#line 289 "make.module_target.m"
    {
#line 289 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_75_75;
#line 289 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_76_76;
#line 289 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_83_83;
#line 289 "make.module_target.m"
      MR_Word make__module_target__KeepGoing_19;
#line 289 "make.module_target.m"
      MR_Word make__module_target__MakeDepsSuccess_20;
#line 289 "make.module_target.m"
      MR_Word make__module_target__STATE_VARIABLE_Info_37_37;
#line 289 "make.module_target.m"
      MR_Word make__module_target__V_39_39;
#line 289 "make.module_target.m"
      MR_Word make__module_target__STATE_VARIABLE_Info_40_40;
#line 293 "make.module_target.m"
      MR_Box make__module_target__conv3_STATE_VARIABLE_Info_37_37;
#line 293 "make.module_target.m"
      MR_Box make__module_target__conv2_STATE_VARIABLE_IO_38_38;
#line 298 "make.module_target.m"
      MR_Box make__module_target__conv7_STATE_VARIABLE_Info_40_40;
#line 298 "make.module_target.m"
      MR_Box make__module_target__conv6_STATE_VARIABLE_IO_41_41;

#line 292 "make.module_target.m"
      {
#line 292 "make.module_target.m"
        libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_11, (MR_Integer) 626, &make__module_target__KeepGoing_19);
      }
#line 8450 "make.module_target.c"
      make__module_target__TypeCtorInfo_75_75 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 8452 "make.module_target.c"
      make__module_target__TypeCtorInfo_76_76 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 293 "make.module_target.m"
      {
#line 293 "make.module_target.m"
        make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__KeepGoing_19, (MR_Word) &make__module_target_scalar_common_2[4], make__module_target__Globals_11, make__module_target__DepFilesToMake_13, &make__module_target__MakeDepsSuccess_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_31)), &make__module_target__conv3_STATE_VARIABLE_Info_37_37, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_38_38);
      }
#line 293 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Info_37_37 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_37_37);
#line 298 "make.module_target.m"
      {
#line 298 "make.module_target.m"
        make__module_target__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 298 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
#line 298 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_2));
#line 298 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 298 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 3) = ((MR_Box) (make__module_target__Globals_11));
#line 298 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 4) = ((MR_Box) ((MR_Integer) 1));
#line 298 "make.module_target.m"
      }
#line 8477 "make.module_target.c"
      make__module_target__TypeCtorInfo_83_83 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 8479 "make.module_target.c"
      (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84 = (MR_Word) &make__module_target_scalar_common_2[1];
#line 298 "make.module_target.m"
      {
#line 298 "make.module_target.m"
        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_39_39, make__module_target__TouchedTargetFiles_14, &(make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_37_37)), &make__module_target__conv7_STATE_VARIABLE_Info_40_40, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_41_41);
      }
#line 298 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Info_40_40 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Info_40_40);
#line 304 "make.module_target.m"
#line 304 "make.module_target.m"
      switch (make__module_target__MakeDepsSuccess_20) {
#line 304 "make.module_target.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 304 "make.module_target.m"
        case (MR_Integer) 0:
#line 301 "make.module_target.m"
          {
#line 302 "make.module_target.m"
            {
#line 302 "make.module_target.m"
              make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "error making dependencies");
            }
#line 303 "make.module_target.m"
            *make__module_target__DepsResult_16 = (MR_Integer) 2;
#line 301 "make.module_target.m"
            *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 301 "make.module_target.m"
          }
#line 304 "make.module_target.m"
          break;
#line 304 "make.module_target.m"
        case (MR_Integer) 1:
#line 310 "make.module_target.m"
          {
#line 306 "make.module_target.m"
            {
#line 306 "make.module_target.m"
              make__module_target__make_dependency_files_10_p_0_6(&make__module_target__env);
            }
#line 310 "make.module_target.m"
            if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 308 "make.module_target.m"
              {
#line 307 "make.module_target.m"
                {
#line 307 "make.module_target.m"
                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "target file does not exist");
                }
#line 309 "make.module_target.m"
                *make__module_target__DepsResult_16 = (MR_Integer) 1;
#line 308 "make.module_target.m"
                *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 308 "make.module_target.m"
              }
#line 310 "make.module_target.m"
            else
#line 319 "make.module_target.m"
              {
#line 319 "make.module_target.m"
                MR_Word make__module_target__ForceReanalysis_25;
#line 317 "make.module_target.m"
                MR_Word make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
#line 312 "make.module_target.m"
                MR_Word make__module_target__FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));

#line 313 "make.module_target.m"
                (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (make__module_target__FileType_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 317 "make.module_target.m"
                if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 315 "make.module_target.m"
                  {
#line 315 "make.module_target.m"
                    make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(make__module_target__Globals_11, make__module_target__ModuleName_23, &make__module_target__ForceReanalysis_25, make__module_target__STATE_VARIABLE_Info_40_40);
                  }
#line 317 "make.module_target.m"
                else
#line 318 "make.module_target.m"
                  make__module_target__ForceReanalysis_25 = (MR_Integer) 0;
#line 323 "make.module_target.m"
#line 323 "make.module_target.m"
                switch (make__module_target__ForceReanalysis_25) {
#line 323 "make.module_target.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 323 "make.module_target.m"
                  case (MR_Integer) 0:
#line 324 "make.module_target.m"
                    {
#line 324 "make.module_target.m"
                      MR_Word make__module_target__TouchedTargetFileTimestamps_26;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__TouchedFileTimestamps_27;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__MaybeOldestTimestamp0_28;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__MaybeOldestTimestamp_29;
#line 324 "make.module_target.m"
                      MR_String make__module_target__TargetFileName_30;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__V_47_47;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_48_48;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__V_50_50;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_51_51;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__V_53_53;
#line 324 "make.module_target.m"
                      MR_String make__module_target__V_54_54;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__V_57_57;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__V_58_58;
#line 324 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_61_61;
#line 329 "make.module_target.m"
                      MR_Box make__module_target__conv12_STATE_VARIABLE_Info_48_48;
#line 329 "make.module_target.m"
                      MR_Box make__module_target__conv11_STATE_VARIABLE_IO_49_49;
#line 332 "make.module_target.m"
                      MR_Box make__module_target__conv16_STATE_VARIABLE_Info_51_51;
#line 332 "make.module_target.m"
                      MR_Box make__module_target__conv15_STATE_VARIABLE_IO_52_52;
#line 334 "make.module_target.m"
                      MR_Box make__module_target__conv18_MaybeOldestTimestamp0_28;
#line 336 "make.module_target.m"
                      MR_Box make__module_target__conv20_MaybeOldestTimestamp_29;

#line 329 "make.module_target.m"
                      {
#line 329 "make.module_target.m"
                        make__module_target__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
#line 329 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
#line 329 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 329 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 3) = ((MR_Box) (make__module_target__Globals_11));
#line 329 "make.module_target.m"
                      }
#line 329 "make.module_target.m"
                      {
#line 329 "make.module_target.m"
                        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_47_47, make__module_target__TouchedTargetFiles_14, &make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_40_40)), &make__module_target__conv12_STATE_VARIABLE_Info_48_48, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv11_STATE_VARIABLE_IO_49_49);
                      }
#line 329 "make.module_target.m"
                      make__module_target__STATE_VARIABLE_Info_48_48 = ((MR_Word) make__module_target__conv12_STATE_VARIABLE_Info_48_48);
#line 332 "make.module_target.m"
                      {
#line 332 "make.module_target.m"
                        make__module_target__V_54_54 = mercury__dir__this_directory_0_f_0();
                      }
#line 332 "make.module_target.m"
                      {
#line 332 "make.module_target.m"
                        make__module_target__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 0) = ((MR_Box) (make__module_target__V_54_54));
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "make.module_target.m"
                      }
#line 332 "make.module_target.m"
                      {
#line 332 "make.module_target.m"
                        make__module_target__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 0) = ((MR_Box) (&make__module_target_scalar_common_6[3]));
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_8));
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 332 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 3) = ((MR_Box) (make__module_target__V_53_53));
#line 332 "make.module_target.m"
                      }
#line 332 "make.module_target.m"
                      {
#line 332 "make.module_target.m"
                        mercury__list__map_foldl2_7_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_50_50, make__module_target__TouchedFiles_15, &make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_48_48)), &make__module_target__conv16_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv15_STATE_VARIABLE_IO_52_52);
                      }
#line 332 "make.module_target.m"
                      make__module_target__STATE_VARIABLE_Info_51_51 = ((MR_Word) make__module_target__conv16_STATE_VARIABLE_Info_51_51);
#line 335 "make.module_target.m"
                      {
#line 335 "make.module_target.m"
                        make__module_target__V_58_58 = libs__timestamp__newest_timestamp_0_f_0();
                      }
#line 335 "make.module_target.m"
                      {
#line 335 "make.module_target.m"
                        make__module_target__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 335 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_57_57, 0) = ((MR_Box) (make__module_target__V_58_58));
#line 335 "make.module_target.m"
                      }
#line 334 "make.module_target.m"
                      {
#line 334 "make.module_target.m"
                        make__module_target__conv18_MaybeOldestTimestamp0_28 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[5], make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__V_57_57)));
                      }
#line 334 "make.module_target.m"
                      make__module_target__MaybeOldestTimestamp0_28 = ((MR_Word) make__module_target__conv18_MaybeOldestTimestamp0_28);
#line 336 "make.module_target.m"
                      {
#line 336 "make.module_target.m"
                        make__module_target__conv20_MaybeOldestTimestamp_29 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[6], make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__MaybeOldestTimestamp0_28)));
                      }
#line 336 "make.module_target.m"
                      make__module_target__MaybeOldestTimestamp_29 = ((MR_Word) make__module_target__conv20_MaybeOldestTimestamp_29);
#line 339 "make.module_target.m"
                      {
#line 339 "make.module_target.m"
                        make__util__get_file_name_8_p_0(make__module_target__Globals_11, (MR_Integer) 1, make__module_target__TargetFile_12, &make__module_target__TargetFileName_30, make__module_target__STATE_VARIABLE_Info_51_51, &make__module_target__STATE_VARIABLE_Info_61_61);
                      }
#line 341 "make.module_target.m"
                      {
#line 341 "make.module_target.m"
                        make__dependencies__check_dependencies_10_p_0(make__module_target__Globals_11, make__module_target__TargetFileName_30, make__module_target__MaybeOldestTimestamp_29, make__module_target__MakeDepsSuccess_20, make__module_target__DepFilesToMake_13, make__module_target__DepsResult_16, make__module_target__STATE_VARIABLE_Info_61_61, make__module_target__STATE_VARIABLE_Info_32);
#line 341 "make.module_target.m"
                        return;
                      }
#line 324 "make.module_target.m"
                    }
#line 323 "make.module_target.m"
                    break;
#line 323 "make.module_target.m"
                  case (MR_Integer) 1:
#line 321 "make.module_target.m"
                    {
#line 322 "make.module_target.m"
                      *make__module_target__DepsResult_16 = (MR_Integer) 1;
#line 321 "make.module_target.m"
                      *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 321 "make.module_target.m"
                    }
#line 323 "make.module_target.m"
                    break;
#line 323 "make.module_target.m"
                }
#line 319 "make.module_target.m"
              }
#line 310 "make.module_target.m"
          }
#line 304 "make.module_target.m"
          break;
#line 304 "make.module_target.m"
      }
#line 289 "make.module_target.m"
    }
#line 283 "make.module_target.m"
  }
#line 283 "make.module_target.m"
}

#line 251 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
#line 251 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 251 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 251 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 251 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 251 "make.module_target.m"
{
#line 251 "make.module_target.m"
  {
#line 251 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 251 "make.module_target.m"
    MR_Word make__module_target__conv14_STATE_VARIABLE_Info_10;

#line 251 "make.module_target.m"
    {
#line 251 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv14_STATE_VARIABLE_Info_10);
    }
#line 251 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv14_STATE_VARIABLE_Info_10));
#line 251 "make.module_target.m"
  }
#line 251 "make.module_target.m"
}

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 235 "make.module_target.m"
{
#line 235 "make.module_target.m"
  {
#line 235 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 235 "make.module_target.m"
    MR_Word make__module_target__conv12_STATE_VARIABLE_Info_10;

#line 235 "make.module_target.m"
    {
#line 235 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv12_STATE_VARIABLE_Info_10);
    }
#line 235 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv12_STATE_VARIABLE_Info_10));
#line 235 "make.module_target.m"
  }
#line 235 "make.module_target.m"
}

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 235 "make.module_target.m"
{
#line 235 "make.module_target.m"
  {
#line 235 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 235 "make.module_target.m"
    MR_Word make__module_target__conv10_STATE_VARIABLE_Info_10;

#line 235 "make.module_target.m"
    {
#line 235 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv10_STATE_VARIABLE_Info_10);
    }
#line 235 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv10_STATE_VARIABLE_Info_10));
#line 235 "make.module_target.m"
  }
#line 235 "make.module_target.m"
}

#line 235 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
#line 235 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 235 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 235 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 235 "make.module_target.m"
{
#line 235 "make.module_target.m"
  {
#line 235 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 235 "make.module_target.m"
    MR_Word make__module_target__conv8_STATE_VARIABLE_Info_10;

#line 235 "make.module_target.m"
    {
#line 235 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_STATE_VARIABLE_Info_10);
    }
#line 235 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_STATE_VARIABLE_Info_10));
#line 235 "make.module_target.m"
  }
#line 235 "make.module_target.m"
}

#line 204 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
#line 204 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 204 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 204 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 204 "make.module_target.m"
{
#line 204 "make.module_target.m"
  {
#line 204 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 204 "make.module_target.m"
    {
#line 204 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__204__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))));
#line 204 "make.module_target.m"
      return;
    }
#line 204 "make.module_target.m"
  }
#line 204 "make.module_target.m"
}

#line 184 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
#line 184 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7,
#line 184 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_8,
#line 184 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_9)
#line 184 "make.module_target.m"
{
#line 184 "make.module_target.m"
  {
#line 184 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 184 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__4_325;
#line 184 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__6_327;
#line 184 "make.module_target.m"
    MR_Word make__module_target__conv2_HeadVar__8_329;

#line 184 "make.module_target.m"
    {
#line 184 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__184__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv4_HeadVar__4_325, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv3_HeadVar__6_327, ((MR_Word) make__module_target__wrapper_arg_6), &make__module_target__conv2_HeadVar__8_329);
    }
#line 184 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv4_HeadVar__4_325));
#line 184 "make.module_target.m"
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv3_HeadVar__6_327));
#line 184 "make.module_target.m"
    *make__module_target__wrapper_arg_7 = ((MR_Box) (make__module_target__conv2_HeadVar__8_329));
#line 184 "make.module_target.m"
  }
#line 184 "make.module_target.m"
}

#line 168 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
#line 168 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 168 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 168 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 168 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 168 "make.module_target.m"
{
#line 168 "make.module_target.m"
  {
#line 168 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 168 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

#line 168 "make.module_target.m"
    {
#line 168 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
#line 168 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
#line 168 "make.module_target.m"
  }
#line 168 "make.module_target.m"
}

#line 132 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
#line 132 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_9,
#line 132 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 132 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 132 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12,
#line 132 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_46,
#line 132 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_47)
#line 132 "make.module_target.m"
{
#line 137 "make.module_target.m"
  {
#line 137 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 137 "make.module_target.m"
    MR_Word make__module_target__Dep_15;
#line 137 "make.module_target.m"
    MR_Word make__module_target__Status_16;
#line 137 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_50_50;

#line 138 "make.module_target.m"
    {
#line 138 "make.module_target.m"
      make__module_target__Dep_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 138 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Dep_15, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 138 "make.module_target.m"
    }
#line 139 "make.module_target.m"
    {
#line 139 "make.module_target.m"
      make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_15, &make__module_target__Status_16, make__module_target__STATE_VARIABLE_Info_0_46, &make__module_target__STATE_VARIABLE_Info_50_50);
    }
#line 256 "make.module_target.m"
#line 256 "make.module_target.m"
    switch (make__module_target__Status_16) {
#line 256 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 256 "make.module_target.m"
      case (MR_Integer) 1:
#line 260 "make.module_target.m"
        {
#line 262 "make.module_target.m"
          MR_Word make__module_target__FileType_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 262 "make.module_target.m"
          MR_Word make__module_target___FileName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 263 "make.module_target.m"
          MR_Word make__module_target___Lang_45;

#line 263 "make.module_target.m"
          make__module_target__succeeded = ((((MR_tag((MR_Word) make__module_target__FileType_137)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__FileType_137, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 263 "make.module_target.m"
          if (make__module_target__succeeded)
#line 263 "make.module_target.m"
            {
#line 263 "make.module_target.m"
              make__module_target___Lang_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__FileType_137, (MR_Integer) 1)));
#line 265 "make.module_target.m"
              {
#line 265 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "Error: circular dependency detected while building\n");
              }
#line 267 "make.module_target.m"
              {
#line 267 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "  \140");
              }
#line 268 "make.module_target.m"
              {
#line 268 "make.module_target.m"
                make__util__make_write_dependency_file_4_p_0(make__module_target__Globals_10, make__module_target__Dep_15);
              }
#line 269 "make.module_target.m"
              {
#line 269 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "\'.\n");
              }
#line 270 "make.module_target.m"
              {
#line 270 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "  This is due to a forbidden foreign_import_module cycle.\n");
              }
#line 272 "make.module_target.m"
              {
#line 272 "make.module_target.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 263 "make.module_target.m"
            }
#line 263 "make.module_target.m"
          else
#line 274 "make.module_target.m"
            {
#line 274 "make.module_target.m"
              {
#line 274 "make.module_target.m"
                mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
#line 274 "make.module_target.m"
                return;
              }
#line 274 "make.module_target.m"
            }
#line 277 "make.module_target.m"
          *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 260 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_47 = make__module_target__STATE_VARIABLE_Info_50_50;
#line 260 "make.module_target.m"
        }
#line 256 "make.module_target.m"
        break;
#line 256 "make.module_target.m"
      case (MR_Integer) 3:
#line 279 "make.module_target.m"
        {
#line 280 "make.module_target.m"
          *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 279 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_47 = make__module_target__STATE_VARIABLE_Info_50_50;
#line 279 "make.module_target.m"
        }
#line 256 "make.module_target.m"
        break;
#line 256 "make.module_target.m"
      case (MR_Integer) 0:
#line 141 "make.module_target.m"
        {
#line 141 "make.module_target.m"
          MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 141 "make.module_target.m"
          MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 141 "make.module_target.m"
          MR_Word make__module_target__MaybeImports_19;
#line 141 "make.module_target.m"
          MR_Word make__module_target__STATE_VARIABLE_Info_70_70;

#line 143 "make.module_target.m"
          {
#line 143 "make.module_target.m"
            make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_50_50, &make__module_target__STATE_VARIABLE_Info_70_70);
          }
#line 148 "make.module_target.m"
          if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "make.module_target.m"
            {
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_133_133;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_134_134;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_140_140;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_141_141;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_142_142;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_143_143;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_144_144;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_145_145;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_146_146;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_147_147;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_148_148;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_149_149;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_150_150;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_151_151;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_152_152;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_153_153;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_154_154;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_155_155;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_156_156;
#line 147 "make.module_target.m"
              MR_Integer make__module_target__V_157_157;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_158_158;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_159_159;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_160_160;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_161_161;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_162_162;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_163_163;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_164_164;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_165_165;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_166_166;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_168_168;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_169_169;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_170_170;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_171_171;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_172_172;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_173_173;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_174_174;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_175_175;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_176_176;
#line 147 "make.module_target.m"
              MR_Integer make__module_target__V_177_177;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_178_178;
#line 147 "make.module_target.m"
              MR_Word make__module_target__V_167_167;

#line 146 "make.module_target.m"
              *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 147 "make.module_target.m"
              make__module_target__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 0)));
#line 147 "make.module_target.m"
              make__module_target__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 1)));
#line 147 "make.module_target.m"
              make__module_target__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 2)));
#line 147 "make.module_target.m"
              make__module_target__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 3)));
#line 147 "make.module_target.m"
              make__module_target__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 4)));
#line 147 "make.module_target.m"
              make__module_target__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 5)));
#line 147 "make.module_target.m"
              make__module_target__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 6)));
#line 147 "make.module_target.m"
              make__module_target__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 7)));
#line 147 "make.module_target.m"
              make__module_target__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 8)));
#line 147 "make.module_target.m"
              make__module_target__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 9)));
#line 147 "make.module_target.m"
              make__module_target__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 10)));
#line 147 "make.module_target.m"
              make__module_target__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 11)));
#line 147 "make.module_target.m"
              make__module_target__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 12)));
#line 147 "make.module_target.m"
              make__module_target__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 13)));
#line 147 "make.module_target.m"
              make__module_target__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 14)));
#line 147 "make.module_target.m"
              make__module_target__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 15)));
#line 147 "make.module_target.m"
              make__module_target__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 16)));
#line 147 "make.module_target.m"
              make__module_target__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 17)));
#line 147 "make.module_target.m"
              make__module_target__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 18)));
#line 147 "make.module_target.m"
              make__module_target__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 19)));
#line 147 "make.module_target.m"
              {
#line 147 "make.module_target.m"
                make__module_target__V_134_134 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_15)), make__module_target__V_133_133, ((MR_Box) ((MR_Integer) 3)));
              }
#line 147 "make.module_target.m"
              make__module_target__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 0)));
#line 147 "make.module_target.m"
              make__module_target__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 1)));
#line 147 "make.module_target.m"
              make__module_target__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 2)));
#line 147 "make.module_target.m"
              make__module_target__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 3)));
#line 147 "make.module_target.m"
              make__module_target__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 4)));
#line 147 "make.module_target.m"
              make__module_target__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 5)));
#line 147 "make.module_target.m"
              make__module_target__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 6)));
#line 147 "make.module_target.m"
              make__module_target__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 7)));
#line 147 "make.module_target.m"
              make__module_target__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 8)));
#line 147 "make.module_target.m"
              make__module_target__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 9)));
#line 147 "make.module_target.m"
              make__module_target__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 10)));
#line 147 "make.module_target.m"
              make__module_target__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 11)));
#line 147 "make.module_target.m"
              make__module_target__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 12)));
#line 147 "make.module_target.m"
              make__module_target__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 13)));
#line 147 "make.module_target.m"
              make__module_target__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 14)));
#line 147 "make.module_target.m"
              make__module_target__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 15)));
#line 147 "make.module_target.m"
              make__module_target__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 16)));
#line 147 "make.module_target.m"
              make__module_target__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 17)));
#line 147 "make.module_target.m"
              make__module_target__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 18)));
#line 147 "make.module_target.m"
              make__module_target__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_70_70, (MR_Integer) 19)));
#line 147 "make.module_target.m"
              {
#line 147 "make.module_target.m"
                MR_Word base;
#line 147 "make.module_target.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 147 "make.module_target.m"
                *make__module_target__STATE_VARIABLE_Info_47 = base;
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_159_159));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_160_160));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_161_161));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_162_162));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_163_163));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_164_164));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_165_165));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_166_166));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_134_134));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_168_168));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_169_169));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_170_170));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_171_171));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_172_172));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_173_173));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_174_174));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_175_175));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_176_176));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_177_177));
#line 147 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_178_178));
#line 147 "make.module_target.m"
              }
#line 145 "make.module_target.m"
            }
#line 148 "make.module_target.m"
          else
#line 149 "make.module_target.m"
            {
#line 149 "make.module_target.m"
              MR_Word make__module_target__Imports_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
#line 149 "make.module_target.m"
              MR_Word make__module_target__CompilationTask_21;
#line 156 "make.module_target.m"
              MR_Word make__module_target__V_72_72;
#line 156 "make.module_target.m"
              MR_Word make__module_target__V_23_23;
#line 156 "make.module_target.m"
              MR_Word make__module_target__V_22_22;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_347_347;
#line 157 "make.module_target.m"
              MR_String make__module_target__V_179_179;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_180_180;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_181_181;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_182_182;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_183_183;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_184_184;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_185_185;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_186_186;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_187_187;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_188_188;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_189_189;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_190_190;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_191_191;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_192_192;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_193_193;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_194_194;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_195_195;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_196_196;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_197_197;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_198_198;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_199_199;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_200_200;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_201_201;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_202_202;
#line 157 "make.module_target.m"
              MR_Word make__module_target__V_203_203;
#line 157 "make.module_target.m"
              MR_String make__module_target__V_204_204;

#line 150 "make.module_target.m"
              {
#line 150 "make.module_target.m"
                make__module_target__CompilationTask_21 = make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(make__module_target__FileType_18);
              }
#line 156 "make.module_target.m"
              make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 156 "make.module_target.m"
              make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 156 "make.module_target.m"
              make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 156 "make.module_target.m"
              if (make__module_target__succeeded)
#line 156 "make.module_target.m"
                {
#line 156 "make.module_target.m"
                  make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_72_72, (MR_Integer) 0)));
#line 157 "make.module_target.m"
                  make__module_target__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 157 "make.module_target.m"
                  make__module_target__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 157 "make.module_target.m"
                  make__module_target__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 157 "make.module_target.m"
                  make__module_target__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 157 "make.module_target.m"
                  make__module_target__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 157 "make.module_target.m"
                  make__module_target__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 157 "make.module_target.m"
                  make__module_target__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 157 "make.module_target.m"
                  make__module_target__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 157 "make.module_target.m"
                  make__module_target__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 157 "make.module_target.m"
                  make__module_target__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 157 "make.module_target.m"
                  make__module_target__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 157 "make.module_target.m"
                  make__module_target__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 157 "make.module_target.m"
                  make__module_target__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 157 "make.module_target.m"
                  make__module_target__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 157 "make.module_target.m"
                  make__module_target__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 157 "make.module_target.m"
                  make__module_target__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 157 "make.module_target.m"
                  make__module_target__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 157 "make.module_target.m"
                  make__module_target__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 157 "make.module_target.m"
                  make__module_target__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 157 "make.module_target.m"
                  make__module_target__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 157 "make.module_target.m"
                  make__module_target__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 157 "make.module_target.m"
                  make__module_target__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 157 "make.module_target.m"
                  make__module_target__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 157 "make.module_target.m"
                  make__module_target__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 157 "make.module_target.m"
                  make__module_target__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 157 "make.module_target.m"
                  make__module_target__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 157 "make.module_target.m"
                  make__module_target__V_204_204 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));
#line 157 "make.module_target.m"
                  {
#line 157 "make.module_target.m"
                    make__module_target__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__module_target__ModuleName_17, make__module_target__V_347_347);
                  }
#line 157 "make.module_target.m"
                  make__module_target__succeeded = !(make__module_target__succeeded);
#line 156 "make.module_target.m"
                }
#line 164 "make.module_target.m"
              if (make__module_target__succeeded)
#line 160 "make.module_target.m"
                {
#line 160 "make.module_target.m"
                  MR_Word make__module_target__NestedTargetFile_24;
#line 160 "make.module_target.m"
                  MR_Word make__module_target__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 160 "make.module_target.m"
                  MR_Word make__module_target__V_74_74;
#line 159 "make.module_target.m"
                  MR_String make__module_target__V_205_205 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 159 "make.module_target.m"
                  MR_Word make__module_target__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 159 "make.module_target.m"
                  MR_String make__module_target__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

#line 159 "make.module_target.m"
                  {
#line 159 "make.module_target.m"
                    make__module_target__NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 0) = ((MR_Box) (make__module_target__V_73_73));
#line 159 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 1) = ((MR_Box) (make__module_target__FileType_18));
#line 159 "make.module_target.m"
                  }
#line 162 "make.module_target.m"
                  {
#line 162 "make.module_target.m"
                    make__module_target__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 162 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_74_74, 0) = ((MR_Box) (make__module_target__NestedTargetFile_24));
#line 162 "make.module_target.m"
                  }
#line 161 "make.module_target.m"
                  {
#line 161 "make.module_target.m"
                    make__module_target__make_module_target_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__V_74_74, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_70_70, make__module_target__STATE_VARIABLE_Info_47);
#line 161 "make.module_target.m"
                    return;
                  }
#line 160 "make.module_target.m"
                }
#line 164 "make.module_target.m"
              else
#line 165 "make.module_target.m"
                {
#line 165 "make.module_target.m"
                  MR_Word make__module_target__TypeCtorInfo_320_320;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__TypeCtorInfo_321_321;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__CompilationTaskType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 165 "make.module_target.m"
                  MR_Word make__module_target__TouchedTargetFiles_27;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__TouchedFiles_28;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__ModulesToCheck_31;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__ModulesToCheckSet_32;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__DepsSuccess_33;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__DepFiles0_34;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__DepFilesSet0_35;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__DepFilesToMake_39;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__KeepGoing_41;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_77_77;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_80_80;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_88_88;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_89_89;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_90_90;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_91_91;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_92_92;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_94_94;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_97_97;
#line 165 "make.module_target.m"
                  MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 168 "make.module_target.m"
                  MR_Box make__module_target__conv1_STATE_VARIABLE_Info_80_80;
#line 174 "make.module_target.m"
                  MR_Word make__module_target__V_84_84;
#line 174 "make.module_target.m"
                  MR_Word make__module_target__V_30_30;
#line 174 "make.module_target.m"
                  MR_Word make__module_target__V_29_29;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_257_257;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_258_258;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_259_259;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_260_260;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_261_261;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_262_262;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_263_263;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_264_264;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_265_265;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_266_266;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_267_267;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_268_268;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_269_269;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_270_270;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_271_271;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_272_272;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_273_273;
#line 183 "make.module_target.m"
                  MR_Integer make__module_target__V_274_274;
#line 183 "make.module_target.m"
                  MR_Word make__module_target__V_275_275;
#line 183 "make.module_target.m"
                  MR_Box make__module_target__conv7_DepFiles0_34;
#line 183 "make.module_target.m"
                  MR_Box make__module_target__conv6_STATE_VARIABLE_Info_92_92;
#line 183 "make.module_target.m"
                  MR_Box make__module_target__conv5_STATE_VARIABLE_IO_93_93;
#line 190 "make.module_target.m"
                  MR_Word make__module_target__TargetType_37;
#line 190 "make.module_target.m"
                  MR_Word make__module_target__V_36_36;

#line 166 "make.module_target.m"
                  {
#line 166 "make.module_target.m"
                    make__module_target__touched_files_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__CompilationTaskType_25, &make__module_target__TouchedTargetFiles_27, &make__module_target__TouchedFiles_28, make__module_target__STATE_VARIABLE_Info_70_70, &make__module_target__STATE_VARIABLE_Info_77_77);
                  }
#line 9700 "make.module_target.c"
                  make__module_target__TypeCtorInfo_320_320 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 9702 "make.module_target.c"
                  make__module_target__TypeCtorInfo_321_321 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 168 "make.module_target.m"
                  {
#line 168 "make.module_target.m"
                    mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_320_320, make__module_target__TypeCtorInfo_321_321, (MR_Word) &make__module_target_scalar_common_8[0], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_77_77)), &make__module_target__conv1_STATE_VARIABLE_Info_80_80);
                  }
#line 168 "make.module_target.m"
                  make__module_target__STATE_VARIABLE_Info_80_80 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_80_80);
#line 171 "make.module_target.m"
                  {
#line 171 "make.module_target.m"
                    make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "checking dependencies");
                  }
#line 174 "make.module_target.m"
                  make__module_target__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 174 "make.module_target.m"
                  make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 174 "make.module_target.m"
                  make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_84_84)) == (MR_mktag((MR_Integer) 0)));
#line 174 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 174 "make.module_target.m"
                    {
#line 174 "make.module_target.m"
                      make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_84_84, (MR_Integer) 0)));
#line 175 "make.module_target.m"
                      {
#line 175 "make.module_target.m"
                        MR_Word make__module_target__V_85_85;
#line 175 "make.module_target.m"
                        MR_Word make__module_target__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 176 "make.module_target.m"
                        MR_String make__module_target__V_231_231 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 176 "make.module_target.m"
                        MR_Word make__module_target__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 176 "make.module_target.m"
                        MR_String make__module_target__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

#line 176 "make.module_target.m"
                        {
#line 176 "make.module_target.m"
                          make__module_target__V_85_85 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__module_target__V_86_86);
                        }
#line 175 "make.module_target.m"
                        {
#line 175 "make.module_target.m"
                          make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "make.module_target.m"
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 175 "make.module_target.m"
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (make__module_target__V_85_85));
#line 175 "make.module_target.m"
                        }
#line 175 "make.module_target.m"
                      }
#line 174 "make.module_target.m"
                    }
#line 174 "make.module_target.m"
                  else
#line 178 "make.module_target.m"
                    {
#line 178 "make.module_target.m"
                      {
#line 178 "make.module_target.m"
                        make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 178 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "make.module_target.m"
                      }
#line 178 "make.module_target.m"
                    }
#line 180 "make.module_target.m"
                  {
#line 180 "make.module_target.m"
                    make__dependencies__module_names_to_index_set_4_p_0(make__module_target__ModulesToCheck_31, &make__module_target__ModulesToCheckSet_32, make__module_target__STATE_VARIABLE_Info_80_80, &make__module_target__STATE_VARIABLE_Info_88_88);
                  }
#line 183 "make.module_target.m"
                  make__module_target__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 0)));
#line 183 "make.module_target.m"
                  make__module_target__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 1)));
#line 183 "make.module_target.m"
                  make__module_target__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 2)));
#line 183 "make.module_target.m"
                  make__module_target__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 3)));
#line 183 "make.module_target.m"
                  make__module_target__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 4)));
#line 183 "make.module_target.m"
                  make__module_target__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 5)));
#line 183 "make.module_target.m"
                  make__module_target__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 6)));
#line 183 "make.module_target.m"
                  make__module_target__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 7)));
#line 183 "make.module_target.m"
                  make__module_target__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 8)));
#line 183 "make.module_target.m"
                  make__module_target__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 9)));
#line 183 "make.module_target.m"
                  make__module_target__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 10)));
#line 183 "make.module_target.m"
                  make__module_target__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 11)));
#line 183 "make.module_target.m"
                  make__module_target__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 12)));
#line 183 "make.module_target.m"
                  make__module_target__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 13)));
#line 183 "make.module_target.m"
                  make__module_target__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 14)));
#line 183 "make.module_target.m"
                  make__module_target__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 15)));
#line 183 "make.module_target.m"
                  make__module_target__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 16)));
#line 183 "make.module_target.m"
                  make__module_target__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 17)));
#line 183 "make.module_target.m"
                  make__module_target__V_274_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 18)));
#line 183 "make.module_target.m"
                  make__module_target__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_88_88, (MR_Integer) 19)));
#line 184 "make.module_target.m"
                  {
#line 184 "make.module_target.m"
                    make__module_target__V_94_94 = make__dependencies__target_dependencies_2_f_0(make__module_target__Globals_10, make__module_target__FileType_18);
                  }
#line 184 "make.module_target.m"
                  {
#line 184 "make.module_target.m"
                    make__module_target__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_90_90, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
#line 184 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_90_90, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_2));
#line 184 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_90_90, 3) = ((MR_Box) (make__module_target__V_94_94));
#line 184 "make.module_target.m"
                  }
#line 185 "make.module_target.m"
                  {
#line 185 "make.module_target.m"
                    make__module_target__V_91_91 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
                  }
#line 183 "make.module_target.m"
                  {
#line 183 "make.module_target.m"
                    make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__module_target_scalar_common_1[2], make__module_target__TypeCtorInfo_321_321, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make__module_target_scalar_common_1[1], make__module_target__V_89_89, make__module_target__V_90_90, make__module_target__Globals_10, make__module_target__ModulesToCheckSet_32, &make__module_target__DepsSuccess_33, ((MR_Box) (make__module_target__V_91_91)), &make__module_target__conv7_DepFiles0_34, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_88_88)), &make__module_target__conv6_STATE_VARIABLE_Info_92_92, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv5_STATE_VARIABLE_IO_93_93);
                  }
#line 183 "make.module_target.m"
                  make__module_target__DepFiles0_34 = ((MR_Word) make__module_target__conv7_DepFiles0_34);
#line 183 "make.module_target.m"
                  make__module_target__STATE_VARIABLE_Info_92_92 = ((MR_Word) make__module_target__conv6_STATE_VARIABLE_Info_92_92);
#line 187 "make.module_target.m"
                  {
#line 187 "make.module_target.m"
                    make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_92_92, make__module_target__DepFiles0_34, &make__module_target__DepFilesSet0_35);
                  }
#line 190 "make.module_target.m"
                  make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 190 "make.module_target.m"
                  make__module_target__TargetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 191 "make.module_target.m"
                  make__module_target__succeeded = (make__module_target__TargetType_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 200 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 197 "make.module_target.m"
                    {
#line 197 "make.module_target.m"
                      MR_Word make__module_target__TypeCtorInfo_337_337;
#line 197 "make.module_target.m"
                      MR_Word make__module_target__PrivateInts_38;
#line 197 "make.module_target.m"
                      MR_Word make__module_target__V_96_96;

#line 196 "make.module_target.m"
                      {
#line 196 "make.module_target.m"
                        make__module_target__PrivateInts_38 = make__util__make_dependency_list_2_f_0(make__module_target__ModulesToCheck_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                      }
#line 9927 "make.module_target.c"
                      make__module_target__TypeCtorInfo_337_337 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 199 "make.module_target.m"
                      {
#line 199 "make.module_target.m"
                        make__module_target__V_96_96 = mercury__set__delete_list_2_f_0(make__module_target__TypeCtorInfo_337_337, make__module_target__DepFilesSet0_35, make__module_target__PrivateInts_38);
                      }
#line 198 "make.module_target.m"
                      {
#line 198 "make.module_target.m"
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_337_337, make__module_target__V_96_96);
                      }
#line 197 "make.module_target.m"
                    }
#line 200 "make.module_target.m"
                  else
#line 201 "make.module_target.m"
                    {
#line 201 "make.module_target.m"
                      {
#line 201 "make.module_target.m"
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__DepFilesSet0_35);
                      }
#line 201 "make.module_target.m"
                    }
#line 204 "make.module_target.m"
                  {
#line 204 "make.module_target.m"
                    make__module_target__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 0) = ((MR_Box) (&make__module_target_scalar_common_5[1]));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_3));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 4) = ((MR_Box) (make__module_target__TargetFile_11));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 5) = ((MR_Box) (make__module_target__DepFiles0_34));
#line 204 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 6) = ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_92));
#line 204 "make.module_target.m"
                  }
#line 204 "make.module_target.m"
                  {
#line 204 "make.module_target.m"
                    make__util__debug_msg_4_p_0(make__module_target__Globals_10, make__module_target__V_97_97);
                  }
#line 214 "make.module_target.m"
                  {
#line 214 "make.module_target.m"
                    libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 626, &make__module_target__KeepGoing_41);
                  }
#line 216 "make.module_target.m"
                  make__module_target__succeeded = (make__module_target__DepsSuccess_33 == (MR_Integer) 0);
#line 216 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 217 "make.module_target.m"
                    make__module_target__succeeded = (make__module_target__KeepGoing_41 == (MR_Integer) 0);
#line 9988 "make.module_target.c"
                  if (make__module_target__succeeded)
#line 9990 "make.module_target.c"
                    {
#line 235 "make.module_target.m"
                      MR_Box make__module_target__conv9_STATE_VARIABLE_Info_47;

#line 234 "make.module_target.m"
                      *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 235 "make.module_target.m"
                      {
#line 235 "make.module_target.m"
                        mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_320_320, make__module_target__TypeCtorInfo_321_321, (MR_Word) &make__module_target_scalar_common_8[1], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_92)), &make__module_target__conv9_STATE_VARIABLE_Info_47);
                      }
#line 235 "make.module_target.m"
                      *make__module_target__STATE_VARIABLE_Info_47 = ((MR_Word) make__module_target__conv9_STATE_VARIABLE_Info_47);
#line 10004 "make.module_target.c"
                    }
#line 10006 "make.module_target.c"
                  else
#line 10008 "make.module_target.c"
                    {
#line 10010 "make.module_target.c"
                      MR_Word make__module_target__DepsResult0_43;
#line 10012 "make.module_target.c"
                      MR_Word make__module_target__STATE_VARIABLE_Info_109_354;

#line 221 "make.module_target.m"
                      {
#line 221 "make.module_target.m"
                        make__module_target__make_dependency_files_10_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__DepFilesToMake_39, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, &make__module_target__DepsResult0_43, make__module_target__STATE_VARIABLE_Info_92_92, &make__module_target__STATE_VARIABLE_Info_109_354);
                      }
#line 10020 "make.module_target.c"
#line 10021 "make.module_target.c"
                      switch (make__module_target__DepsSuccess_33) {
#line 10023 "make.module_target.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 10025 "make.module_target.c"
                        case (MR_Integer) 0:
#line 10027 "make.module_target.c"
                          {
#line 235 "make.module_target.m"
                            MR_Box make__module_target__conv11_STATE_VARIABLE_Info_47;

#line 234 "make.module_target.m"
                            *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 235 "make.module_target.m"
                            {
#line 235 "make.module_target.m"
                              mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_320_320, make__module_target__TypeCtorInfo_321_321, (MR_Word) &make__module_target_scalar_common_8[2], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_109_354)), &make__module_target__conv11_STATE_VARIABLE_Info_47);
                            }
#line 235 "make.module_target.m"
                            *make__module_target__STATE_VARIABLE_Info_47 = ((MR_Word) make__module_target__conv11_STATE_VARIABLE_Info_47);
#line 10041 "make.module_target.c"
                          }
#line 10043 "make.module_target.c"
                          break;
#line 10045 "make.module_target.c"
                        case (MR_Integer) 1:
#line 237 "make.module_target.m"
#line 237 "make.module_target.m"
                          switch (make__module_target__DepsResult0_43) {
#line 237 "make.module_target.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 237 "make.module_target.m"
                            case (MR_Integer) 2:
#line 233 "make.module_target.m"
                              {
#line 235 "make.module_target.m"
                                MR_Box make__module_target__conv13_STATE_VARIABLE_Info_47;

#line 234 "make.module_target.m"
                                *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 235 "make.module_target.m"
                                {
#line 235 "make.module_target.m"
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_320_320, make__module_target__TypeCtorInfo_321_321, (MR_Word) &make__module_target_scalar_common_8[3], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_109_354)), &make__module_target__conv13_STATE_VARIABLE_Info_47);
                                }
#line 235 "make.module_target.m"
                                *make__module_target__STATE_VARIABLE_Info_47 = ((MR_Word) make__module_target__conv13_STATE_VARIABLE_Info_47);
#line 233 "make.module_target.m"
                              }
#line 237 "make.module_target.m"
                              break;
#line 237 "make.module_target.m"
                            case (MR_Integer) 1:
#line 238 "make.module_target.m"
                              {
#line 238 "make.module_target.m"
                                MR_Word make__module_target__STATE_VARIABLE_Info_121_121;
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_122_122;
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 17)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_124_124;
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_125_125;
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 0)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 1)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 2)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 3)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 4)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 5)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 6)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 7)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 8)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 9)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 10)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 11)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 12)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 13)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 14)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 15)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 16)));
#line 238 "make.module_target.m"
                                MR_Integer make__module_target__V_293_293 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 18)));
#line 238 "make.module_target.m"
                                MR_Word make__module_target__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_109_354, (MR_Integer) 19)));

#line 241 "make.module_target.m"
                                {
#line 241 "make.module_target.m"
                                  make__module_target__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_125_125, 0) = ((MR_Box) (make__module_target__FileType_18));
#line 241 "make.module_target.m"
                                }
#line 241 "make.module_target.m"
                                {
#line 241 "make.module_target.m"
                                  make__module_target__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_124_124, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 241 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_124_124, 1) = ((MR_Box) (make__module_target__V_125_125));
#line 241 "make.module_target.m"
                                }
#line 240 "make.module_target.m"
                                {
#line 240 "make.module_target.m"
                                  make__module_target__V_122_122 = mercury__set__delete_2_f_0((MR_Word) &make__module_target_scalar_common_2[0], make__module_target__V_123_123, ((MR_Box) (make__module_target__V_124_124)));
                                }
#line 239 "make.module_target.m"
                                {
#line 239 "make.module_target.m"
                                  make__module_target__STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (make__module_target__V_276_276));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (make__module_target__V_277_277));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (make__module_target__V_278_278));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (make__module_target__V_279_279));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (make__module_target__V_280_280));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (make__module_target__V_281_281));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (make__module_target__V_282_282));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (make__module_target__V_283_283));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 8) = ((MR_Box) (make__module_target__V_284_284));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (make__module_target__V_285_285));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 10) = ((MR_Box) (make__module_target__V_286_286));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 11) = ((MR_Box) (make__module_target__V_287_287));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 12) = ((MR_Box) (make__module_target__V_288_288));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 13) = ((MR_Box) (make__module_target__V_289_289));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 14) = ((MR_Box) (make__module_target__V_290_290));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 15) = ((MR_Box) (make__module_target__V_291_291));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 16) = ((MR_Box) (make__module_target__V_292_292));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 17) = ((MR_Box) (make__module_target__V_122_122));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 18) = ((MR_Box) (make__module_target__V_293_293));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_121_121, 19) = ((MR_Box) (make__module_target__V_294_294));
#line 239 "make.module_target.m"
                                }
#line 242 "make.module_target.m"
                                {
#line 242 "make.module_target.m"
                                  make__module_target__build_target_12_p_0(make__module_target__Globals_10, make__module_target__CompilationTask_21, make__module_target__TargetFile_11, make__module_target__Imports_20, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, make__module_target__ExtraOptions_9, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_121_121, make__module_target__STATE_VARIABLE_Info_47);
#line 242 "make.module_target.m"
                                  return;
                                }
#line 238 "make.module_target.m"
                              }
#line 237 "make.module_target.m"
                              break;
#line 237 "make.module_target.m"
                            case (MR_Integer) 0:
#line 246 "make.module_target.m"
                              {
#line 246 "make.module_target.m"
                                MR_Word make__module_target__V_111_111;
#line 246 "make.module_target.m"
                                MR_Word make__module_target__STATE_VARIABLE_Info_112_112;
#line 246 "make.module_target.m"
                                MR_Word make__module_target__V_114_114;
#line 246 "make.module_target.m"
                                MR_Word make__module_target__V_118_118;
#line 251 "make.module_target.m"
                                MR_Box make__module_target__conv15_STATE_VARIABLE_Info_47;

#line 248 "make.module_target.m"
                                {
#line 248 "make.module_target.m"
                                  make__module_target__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 248 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_114_114, 0) = ((MR_Box) (make__module_target__FileType_18));
#line 248 "make.module_target.m"
                                }
#line 248 "make.module_target.m"
                                {
#line 248 "make.module_target.m"
                                  make__module_target__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_111_111, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 248 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_111_111, 1) = ((MR_Box) (make__module_target__V_114_114));
#line 248 "make.module_target.m"
                                }
#line 247 "make.module_target.m"
                                {
#line 247 "make.module_target.m"
                                  make__util__maybe_warn_up_to_date_target_6_p_0(make__module_target__Globals_10, make__module_target__V_111_111, make__module_target__STATE_VARIABLE_Info_109_354, &make__module_target__STATE_VARIABLE_Info_112_112);
                                }
#line 249 "make.module_target.m"
                                {
#line 249 "make.module_target.m"
                                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "up to date");
                                }
#line 250 "make.module_target.m"
                                *make__module_target__Succeeded_12 = (MR_Integer) 1;
#line 252 "make.module_target.m"
                                {
#line 252 "make.module_target.m"
                                  make__module_target__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "make.module_target.m"
                                  MR_hl_field(MR_mktag(1), make__module_target__V_118_118, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 252 "make.module_target.m"
                                  MR_hl_field(MR_mktag(1), make__module_target__V_118_118, 1) = ((MR_Box) (make__module_target__TouchedTargetFiles_27));
#line 252 "make.module_target.m"
                                }
#line 251 "make.module_target.m"
                                {
#line 251 "make.module_target.m"
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_320_320, make__module_target__TypeCtorInfo_321_321, (MR_Word) &make__module_target_scalar_common_8[4], make__module_target__V_118_118, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_112_112)), &make__module_target__conv15_STATE_VARIABLE_Info_47);
                                }
#line 251 "make.module_target.m"
                                *make__module_target__STATE_VARIABLE_Info_47 = ((MR_Word) make__module_target__conv15_STATE_VARIABLE_Info_47);
#line 246 "make.module_target.m"
                              }
#line 237 "make.module_target.m"
                              break;
#line 237 "make.module_target.m"
                          }
#line 10273 "make.module_target.c"
                          break;
#line 10275 "make.module_target.c"
                      }
#line 10277 "make.module_target.c"
                    }
#line 165 "make.module_target.m"
                }
#line 149 "make.module_target.m"
            }
#line 141 "make.module_target.m"
        }
#line 256 "make.module_target.m"
        break;
#line 256 "make.module_target.m"
      case (MR_Integer) 2:
#line 257 "make.module_target.m"
        {
#line 258 "make.module_target.m"
          *make__module_target__Succeeded_12 = (MR_Integer) 1;
#line 257 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_47 = make__module_target__STATE_VARIABLE_Info_50_50;
#line 257 "make.module_target.m"
        }
#line 256 "make.module_target.m"
        break;
#line 256 "make.module_target.m"
    }
#line 137 "make.module_target.m"
  }
#line 132 "make.module_target.m"
}

#line 1082 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_2(
#line 1082 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1082 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1082 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1082 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1082 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 1082 "make.module_target.m"
{
#line 1082 "make.module_target.m"
  {
#line 1082 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 1082 "make.module_target.m"
    MR_Word make__module_target__conv2_HeadVar__5_36;

#line 1082 "make.module_target.m"
    {
#line 1082 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__external_foreign_code_files__1082__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv2_HeadVar__5_36);
    }
#line 1082 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv2_HeadVar__5_36));
#line 1082 "make.module_target.m"
  }
#line 1082 "make.module_target.m"
}

#line 1072 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
#line 1072 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1072 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1072 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1072 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1072 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 1072 "make.module_target.m"
{
#line 1072 "make.module_target.m"
  {
#line 1072 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 1072 "make.module_target.m"
    MR_Word make__module_target__conv0_ForeignFiles_10;

#line 1072 "make.module_target.m"
    {
#line 1072 "make.module_target.m"
      make__module_target__external_foreign_code_files_for_il_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv0_ForeignFiles_10);
    }
#line 1072 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_ForeignFiles_10));
#line 1072 "make.module_target.m"
  }
#line 1072 "make.module_target.m"
}

#line 75 "make.module_target.m"
void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
#line 75 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 75 "make.module_target.m"
  MR_Word make__module_target__PIC_8,
#line 75 "make.module_target.m"
  MR_Word make__module_target__Imports_9,
#line 75 "make.module_target.m"
  MR_Word * make__module_target__ForeignFiles_10)
#line 75 "make.module_target.m"
{
#line 1061 "make.module_target.m"
  {
#line 1061 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1061 "make.module_target.m"
    MR_String make__module_target__ObjExt_12;
#line 1061 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_13;
#line 1061 "make.module_target.m"
    MR_Word make__module_target__ModuleName_14;
#line 1067 "make.module_target.m"
    MR_String make__module_target__V_47_47;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_48_48;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_51_51;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_52_52;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_53_53;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_54_54;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_55_55;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_57_57;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_58_58;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_59_59;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_60_60;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_61_61;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_62_62;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_63_63;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_64_64;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_65_65;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_66_66;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_67_67;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_68_68;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_69_69;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_70_70;
#line 1067 "make.module_target.m"
    MR_Word make__module_target__V_71_71;
#line 1067 "make.module_target.m"
    MR_String make__module_target__V_72_72;
#line 10449 "make.module_target.c"
    MR_Word make__module_target__Langs_15;
#line 1069 "make.module_target.m"
    MR_Word make__module_target__V_25_25;
#line 1070 "make.module_target.m"
    MR_String make__module_target__V_73_73;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_74_74;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_75_75;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_76_76;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_77_77;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_78_78;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_79_79;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_80_80;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_81_81;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_82_82;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_83_83;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_84_84;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_85_85;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_86_86;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_87_87;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_88_88;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_89_89;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_90_90;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_91_91;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_92_92;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_93_93;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_94_94;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_95_95;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_96_96;
#line 1070 "make.module_target.m"
    MR_Word make__module_target__V_97_97;
#line 1070 "make.module_target.m"
    MR_String make__module_target__V_98_98;

#line 1065 "make.module_target.m"
    {
#line 1065 "make.module_target.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_7, make__module_target__PIC_8, &make__module_target__ObjExt_12);
    }
#line 1066 "make.module_target.m"
    {
#line 1066 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_7, &make__module_target__CompilationTarget_13);
    }
#line 1067 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 0)));
#line 1067 "make.module_target.m"
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 1)));
#line 1067 "make.module_target.m"
    make__module_target__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 2)));
#line 1067 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 3)));
#line 1067 "make.module_target.m"
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 4)));
#line 1067 "make.module_target.m"
    make__module_target__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 5)));
#line 1067 "make.module_target.m"
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 6)));
#line 1067 "make.module_target.m"
    make__module_target__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 7)));
#line 1067 "make.module_target.m"
    make__module_target__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 8)));
#line 1067 "make.module_target.m"
    make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 9)));
#line 1067 "make.module_target.m"
    make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 10)));
#line 1067 "make.module_target.m"
    make__module_target__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 11)));
#line 1067 "make.module_target.m"
    make__module_target__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 12)));
#line 1067 "make.module_target.m"
    make__module_target__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 13)));
#line 1067 "make.module_target.m"
    make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 14)));
#line 1067 "make.module_target.m"
    make__module_target__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 15)));
#line 1067 "make.module_target.m"
    make__module_target__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 16)));
#line 1067 "make.module_target.m"
    make__module_target__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 17)));
#line 1067 "make.module_target.m"
    make__module_target__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 18)));
#line 1067 "make.module_target.m"
    make__module_target__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 19)));
#line 1067 "make.module_target.m"
    make__module_target__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 20)));
#line 1067 "make.module_target.m"
    make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 21)));
#line 1067 "make.module_target.m"
    make__module_target__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 22)));
#line 1067 "make.module_target.m"
    make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 23)));
#line 1067 "make.module_target.m"
    make__module_target__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 24)));
#line 1067 "make.module_target.m"
    make__module_target__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 25)));
#line 1067 "make.module_target.m"
    make__module_target__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 26)));
#line 1069 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__CompilationTarget_13 == (MR_Integer) 1);
#line 1069 "make.module_target.m"
    if (make__module_target__succeeded)
#line 1069 "make.module_target.m"
      {
#line 1070 "make.module_target.m"
        make__module_target__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 0)));
#line 1070 "make.module_target.m"
        make__module_target__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 1)));
#line 1070 "make.module_target.m"
        make__module_target__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 2)));
#line 1070 "make.module_target.m"
        make__module_target__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 3)));
#line 1070 "make.module_target.m"
        make__module_target__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 4)));
#line 1070 "make.module_target.m"
        make__module_target__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 5)));
#line 1070 "make.module_target.m"
        make__module_target__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 6)));
#line 1070 "make.module_target.m"
        make__module_target__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 7)));
#line 1070 "make.module_target.m"
        make__module_target__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 8)));
#line 1070 "make.module_target.m"
        make__module_target__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 9)));
#line 1070 "make.module_target.m"
        make__module_target__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 10)));
#line 1070 "make.module_target.m"
        make__module_target__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 11)));
#line 1070 "make.module_target.m"
        make__module_target__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 12)));
#line 1070 "make.module_target.m"
        make__module_target__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 13)));
#line 1070 "make.module_target.m"
        make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 14)));
#line 1070 "make.module_target.m"
        make__module_target__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 15)));
#line 1070 "make.module_target.m"
        make__module_target__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 16)));
#line 1070 "make.module_target.m"
        make__module_target__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 17)));
#line 1070 "make.module_target.m"
        make__module_target__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 18)));
#line 1070 "make.module_target.m"
        make__module_target__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 19)));
#line 1070 "make.module_target.m"
        make__module_target__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 20)));
#line 1070 "make.module_target.m"
        make__module_target__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 21)));
#line 1070 "make.module_target.m"
        make__module_target__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 22)));
#line 1070 "make.module_target.m"
        make__module_target__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 23)));
#line 1070 "make.module_target.m"
        make__module_target__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 24)));
#line 1070 "make.module_target.m"
        make__module_target__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 25)));
#line 1070 "make.module_target.m"
        make__module_target__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 26)));
#line 1070 "make.module_target.m"
        make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1070 "make.module_target.m"
        if (make__module_target__succeeded)
#line 1070 "make.module_target.m"
          make__module_target__Langs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__V_25_25, (MR_Integer) 0)));
#line 1069 "make.module_target.m"
      }
#line 10638 "make.module_target.c"
    if (make__module_target__succeeded)
#line 10640 "make.module_target.c"
      {
#line 10642 "make.module_target.c"
        MR_Word make__module_target__TypeCtorInfo_129_129;
#line 10644 "make.module_target.c"
        MR_Word make__module_target__ForeignFilesList_16;
#line 10646 "make.module_target.c"
        MR_Word make__module_target__V_26_26;
#line 10648 "make.module_target.c"
        MR_Word make__module_target__V_27_27;
#line 1072 "make.module_target.m"
        MR_Box make__module_target__conv1_STATE_VARIABLE_IO_24;

#line 1072 "make.module_target.m"
        {
#line 1072 "make.module_target.m"
          make__module_target__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
#line 1072 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
#line 1072 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1072 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 3) = ((MR_Box) (make__module_target__Globals_7));
#line 1072 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 4) = ((MR_Box) (make__module_target__ModuleName_14));
#line 1072 "make.module_target.m"
        }
#line 10669 "make.module_target.c"
        make__module_target__TypeCtorInfo_129_129 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1073 "make.module_target.m"
        {
#line 1073 "make.module_target.m"
          make__module_target__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_129_129, make__module_target__Langs_15);
        }
#line 1072 "make.module_target.m"
        {
#line 1072 "make.module_target.m"
          mercury__list__map_foldl_5_p_2(make__module_target__TypeCtorInfo_129_129, (MR_Word) &make__module_target_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_26_26, make__module_target__V_27_27, &make__module_target__ForeignFilesList_16, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_24);
        }
#line 1074 "make.module_target.m"
        {
#line 1074 "make.module_target.m"
          mercury__list__condense_2_p_0((MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0, make__module_target__ForeignFilesList_16, make__module_target__ForeignFiles_10);
#line 1074 "make.module_target.m"
          return;
        }
#line 10688 "make.module_target.c"
      }
#line 10690 "make.module_target.c"
    else
#line 10692 "make.module_target.c"
      {
#line 10694 "make.module_target.c"
        MR_Word make__module_target__ForeignFiles0_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1093 "make.module_target.m"
#line 1093 "make.module_target.m"
        switch (make__module_target__CompilationTarget_13) {
#line 1093 "make.module_target.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1093 "make.module_target.m"
          case (MR_Integer) 0:
#line 1081 "make.module_target.m"
            {
#line 1081 "make.module_target.m"
              MR_Word make__module_target__TypeCtorInfo_134_134;
#line 1081 "make.module_target.m"
              MR_Word make__module_target__FactTableForeignFiles_22;
#line 1081 "make.module_target.m"
              MR_Word make__module_target__V_29_29;
#line 1081 "make.module_target.m"
              MR_Word make__module_target__V_30_30;
#line 1082 "make.module_target.m"
              MR_String make__module_target__V_99_99;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_100_100;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_101_101;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_102_102;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_103_103;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_104_104;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_105_105;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_106_106;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_107_107;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_108_108;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_109_109;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_110_110;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_111_111;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_112_112;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_113_113;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_114_114;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_115_115;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_116_116;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_117_117;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_118_118;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_119_119;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_120_120;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_121_121;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_122_122;
#line 1082 "make.module_target.m"
              MR_Word make__module_target__V_123_123;
#line 1082 "make.module_target.m"
              MR_String make__module_target__V_124_124;
#line 1082 "make.module_target.m"
              MR_Box make__module_target__conv3_STATE_VARIABLE_IO_24;

#line 1082 "make.module_target.m"
              {
#line 1082 "make.module_target.m"
                make__module_target__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_2));
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 3) = ((MR_Box) (make__module_target__Globals_7));
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 4) = ((MR_Box) (make__module_target__ObjExt_12));
#line 1082 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__V_29_29, 5) = ((MR_Box) (make__module_target__ModuleName_14));
#line 1082 "make.module_target.m"
              }
#line 1082 "make.module_target.m"
              make__module_target__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 0)));
#line 1082 "make.module_target.m"
              make__module_target__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 1)));
#line 1082 "make.module_target.m"
              make__module_target__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 2)));
#line 1082 "make.module_target.m"
              make__module_target__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 3)));
#line 1082 "make.module_target.m"
              make__module_target__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 4)));
#line 1082 "make.module_target.m"
              make__module_target__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 5)));
#line 1082 "make.module_target.m"
              make__module_target__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 6)));
#line 1082 "make.module_target.m"
              make__module_target__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 7)));
#line 1082 "make.module_target.m"
              make__module_target__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 8)));
#line 1082 "make.module_target.m"
              make__module_target__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 9)));
#line 1082 "make.module_target.m"
              make__module_target__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 10)));
#line 1082 "make.module_target.m"
              make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 11)));
#line 1082 "make.module_target.m"
              make__module_target__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 12)));
#line 1082 "make.module_target.m"
              make__module_target__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 13)));
#line 1082 "make.module_target.m"
              make__module_target__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 14)));
#line 1082 "make.module_target.m"
              make__module_target__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 15)));
#line 1082 "make.module_target.m"
              make__module_target__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 16)));
#line 1082 "make.module_target.m"
              make__module_target__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 17)));
#line 1082 "make.module_target.m"
              make__module_target__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 18)));
#line 1082 "make.module_target.m"
              make__module_target__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 19)));
#line 1082 "make.module_target.m"
              make__module_target__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 20)));
#line 1082 "make.module_target.m"
              make__module_target__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 21)));
#line 1082 "make.module_target.m"
              make__module_target__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 22)));
#line 1082 "make.module_target.m"
              make__module_target__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 23)));
#line 1082 "make.module_target.m"
              make__module_target__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 24)));
#line 1082 "make.module_target.m"
              make__module_target__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 25)));
#line 1082 "make.module_target.m"
              make__module_target__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 26)));
#line 10841 "make.module_target.c"
              make__module_target__TypeCtorInfo_134_134 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
#line 1082 "make.module_target.m"
              {
#line 1082 "make.module_target.m"
                mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_134_134, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_29_29, make__module_target__V_30_30, &make__module_target__FactTableForeignFiles_22, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv3_STATE_VARIABLE_IO_24);
              }
#line 1092 "make.module_target.m"
              {
#line 1092 "make.module_target.m"
                *make__module_target__ForeignFiles_10 = mercury__list__f_43_43_2_f_0(make__module_target__TypeCtorInfo_134_134, make__module_target__ForeignFiles0_136, make__module_target__FactTableForeignFiles_22);
              }
#line 1081 "make.module_target.m"
            }
#line 1093 "make.module_target.m"
            break;
#line 1093 "make.module_target.m"
          case (MR_Integer) 2:
#line 1093 "make.module_target.m"
          case (MR_Integer) 4:
#line 1093 "make.module_target.m"
          case (MR_Integer) 1:
#line 1093 "make.module_target.m"
          case (MR_Integer) 3:
#line 1099 "make.module_target.m"
            *make__module_target__ForeignFiles_10 = make__module_target__ForeignFiles0_136;
#line 1093 "make.module_target.m"
            break;
#line 1093 "make.module_target.m"
        }
#line 10871 "make.module_target.c"
      }
#line 1061 "make.module_target.m"
  }
#line 75 "make.module_target.m"
}

#line 55 "make.module_target.m"
void MR_CALL 
make__module_target__record_made_target_8_p_0(
#line 55 "make.module_target.m"
  MR_Word make__module_target__Globals_9,
#line 55 "make.module_target.m"
  MR_Word make__module_target__TargetFile_10,
#line 55 "make.module_target.m"
  MR_Word make__module_target__CompilationTask_11,
#line 55 "make.module_target.m"
  MR_Word make__module_target__Succeeded_12,
#line 55 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_17,
#line 55 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_18)
#line 55 "make.module_target.m"
{
#line 749 "make.module_target.m"
  {
#line 749 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 749 "make.module_target.m"
    MR_Word make__module_target__TouchedTargetFiles_15;
#line 749 "make.module_target.m"
    MR_Word make__module_target__TouchedFiles_16;
#line 749 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_21_21;

#line 902 "make.module_target.m"
#line 902 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__CompilationTask_11)) {
#line 902 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 902 "make.module_target.m"
      case (MR_Integer) 0:
#line 902 "make.module_target.m"
        {
#line 902 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_11, (MR_Integer) 0)));

#line 903 "make.module_target.m"
          {
#line 903 "make.module_target.m"
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_9, make__module_target__TargetFile_10, make__module_target__ModuleTask_36, &make__module_target__TouchedTargetFiles_15, &make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_0_17, &make__module_target__STATE_VARIABLE_Info_21_21);
          }
#line 902 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 1:
#line 906 "make.module_target.m"
        {
#line 907 "make.module_target.m"
          {
#line 907 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 907 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "make.module_target.m"
          }
#line 908 "make.module_target.m"
          make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 906 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 2:
#line 910 "make.module_target.m"
        {
#line 910 "make.module_target.m"
          MR_Word make__module_target__PIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 0)));
#line 910 "make.module_target.m"
          MR_Word make__module_target__Lang_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 1)));
#line 910 "make.module_target.m"
          MR_Word make__module_target__ModuleName_40;
#line 910 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_42;
#line 910 "make.module_target.m"
          MR_String make__module_target__ForeignObjectFile_43;
#line 912 "make.module_target.m"
          MR_Word make__module_target__V_41_41;
#line 915 "make.module_target.m"
          MR_Word make__module_target__V_60_60;
#line 915 "make.module_target.m"
          MR_String make__module_target__V_61_61;

#line 911 "make.module_target.m"
          {
#line 911 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 911 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "make.module_target.m"
          }
#line 912 "make.module_target.m"
          make__module_target__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
#line 912 "make.module_target.m"
          make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
#line 913 "make.module_target.m"
          {
#line 913 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_9, make__module_target__ModuleName_40, make__module_target__PIC_38, make__module_target__Lang_39, &make__module_target__ForeignCodeFile_42);
          }
#line 915 "make.module_target.m"
          make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 0)));
#line 915 "make.module_target.m"
          make__module_target__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 1)));
#line 915 "make.module_target.m"
          make__module_target__ForeignObjectFile_43 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 2)));
#line 916 "make.module_target.m"
          {
#line 916 "make.module_target.m"
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_43));
#line 916 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "make.module_target.m"
          }
#line 910 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 910 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
      case (MR_Integer) 3:
#line 918 "make.module_target.m"
        {
#line 918 "make.module_target.m"
          MR_String make__module_target__FactTableName_44 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 1)));
#line 918 "make.module_target.m"
          MR_String make__module_target__ObjExt_46;
#line 918 "make.module_target.m"
          MR_String make__module_target__FactTableObjectFile_47;
#line 918 "make.module_target.m"
          MR_Word make__module_target__PIC_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 0)));
#line 918 "make.module_target.m"
          MR_Word make__module_target__ModuleName_59;
#line 918 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_65;
#line 920 "make.module_target.m"
          MR_Word make__module_target__V_45_45;

#line 919 "make.module_target.m"
          {
#line 919 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 919 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "make.module_target.m"
          }
#line 920 "make.module_target.m"
          make__module_target__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
#line 920 "make.module_target.m"
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
#line 635 "make.module_target.m"
          {
#line 635 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_9, &make__module_target__CompilationTarget_65);
          }
#line 639 "make.module_target.m"
#line 639 "make.module_target.m"
          switch (make__module_target__CompilationTarget_65) {
#line 639 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 639 "make.module_target.m"
            case (MR_Integer) 0:
#line 638 "make.module_target.m"
              {
#line 638 "make.module_target.m"
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_9, make__module_target__PIC_58, &make__module_target__ObjExt_46);
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 2:
#line 643 "make.module_target.m"
              {
#line 644 "make.module_target.m"
                {
#line 644 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 644 "make.module_target.m"
                  return;
                }
#line 643 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 4:
#line 649 "make.module_target.m"
              {
#line 650 "make.module_target.m"
                {
#line 650 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 650 "make.module_target.m"
                  return;
                }
#line 649 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 1:
#line 641 "make.module_target.m"
              make__module_target__ObjExt_46 = (MR_String) ".dll";
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
            case (MR_Integer) 3:
#line 646 "make.module_target.m"
              {
#line 647 "make.module_target.m"
                {
#line 647 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 647 "make.module_target.m"
                  return;
                }
#line 646 "make.module_target.m"
              }
#line 639 "make.module_target.m"
              break;
#line 639 "make.module_target.m"
          }
#line 922 "make.module_target.m"
          {
#line 922 "make.module_target.m"
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_9, make__module_target__ModuleName_59, make__module_target__FactTableName_44, make__module_target__ObjExt_46, (MR_Integer) 0, &make__module_target__FactTableObjectFile_47);
          }
#line 924 "make.module_target.m"
          {
#line 924 "make.module_target.m"
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_47));
#line 924 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "make.module_target.m"
          }
#line 918 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 918 "make.module_target.m"
        }
#line 902 "make.module_target.m"
        break;
#line 902 "make.module_target.m"
    }
#line 752 "make.module_target.m"
    {
#line 752 "make.module_target.m"
      make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_9, make__module_target__Succeeded_12, make__module_target__TargetFile_10, make__module_target__TouchedTargetFiles_15, make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_21_21, make__module_target__STATE_VARIABLE_Info_18);
#line 752 "make.module_target.m"
      return;
    }
#line 749 "make.module_target.m"
  }
#line 55 "make.module_target.m"
}

#line 44 "make.module_target.m"
void MR_CALL 
make__module_target__make_module_target_extra_options_8_p_0(
#line 44 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_9,
#line 44 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 44 "make.module_target.m"
  MR_Word make__module_target__Dep_11,
#line 44 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12,
#line 44 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_19,
#line 44 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_20)
#line 44 "make.module_target.m"
{
#line 114 "make.module_target.m"
  {
#line 114 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 114 "make.module_target.m"
    if (((MR_tag((MR_Word) make__module_target__Dep_11)) == (MR_mktag((MR_Integer) 1))))
#line 114 "make.module_target.m"
      {
#line 114 "make.module_target.m"
        MR_Word make__module_target__Status_17;

#line 115 "make.module_target.m"
        {
#line 115 "make.module_target.m"
          make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_11, &make__module_target__Status_17, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
        }
#line 119 "make.module_target.m"
        *make__module_target__Succeeded_12 = ((&make__module_target_vector_common_4[0 + make__module_target__Status_17]))->make__module_target__vector_common_type_4_0__vct_4_f_0;
#line 114 "make.module_target.m"
      }
#line 114 "make.module_target.m"
    else
#line 127 "make.module_target.m"
      {
#line 127 "make.module_target.m"
        MR_Word make__module_target__TargetFile_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Dep_11, (MR_Integer) 0)));

#line 128 "make.module_target.m"
        {
#line 128 "make.module_target.m"
          make__module_target__make_module_target_file_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__TargetFile_18, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
#line 128 "make.module_target.m"
          return;
        }
#line 127 "make.module_target.m"
      }
#line 114 "make.module_target.m"
  }
#line 44 "make.module_target.m"
}

#line 36 "make.module_target.m"
void MR_CALL 
make__module_target__make_module_target_7_p_0(
#line 36 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 36 "make.module_target.m"
  MR_Word make__module_target__DepFile_9,
#line 36 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_10,
#line 36 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_13,
#line 36 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_14)
#line 36 "make.module_target.m"
{
#line 107 "make.module_target.m"
  {
#line 107 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 108 "make.module_target.m"
    {
#line 108 "make.module_target.m"
      make__module_target__make_module_target_extra_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__module_target__Globals_8, make__module_target__DepFile_9, make__module_target__Succeeded_10, make__module_target__STATE_VARIABLE_Info_0_13, make__module_target__STATE_VARIABLE_Info_14);
#line 108 "make.module_target.m"
      return;
    }
#line 107 "make.module_target.m"
  }
#line 36 "make.module_target.m"
}

void mercury__make__module_target__init(void)
{
}

void mercury__make__module_target__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_compilation_task_result_0);
	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0);
}

void mercury__make__module_target__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.module_target. */
