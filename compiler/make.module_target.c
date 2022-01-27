/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
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
#include "libs.op_mode.mih"
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
#include "float.mih"
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
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
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



#line 266 "make.module_target.m"
struct make__module_target__make_dependency_files_10_p_0_env_0_s {
#line 272 "make.module_target.m"
  MR_bool make__module_target__make_dependency_files_10_p_0_env_0__succeeded;
#line 272 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84;
#line 272 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
#line 289 "make.module_target.m"
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_43_43;
#line 289 "make.module_target.m"
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_104_104;
#line 289 "make.module_target.m"
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104;
#line 266 "make.module_target.m"
};


#line 193 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0;

#line 196 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 199 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0;

#line 202 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

#line 205 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 208 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0;

#line 211 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 214 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

#line 217 "make.module_target.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 220 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 223 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 226 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 229 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

#line 232 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 235 "make.module_target.c"
static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

#line 238 "make.module_target.c"
static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

#line 241 "make.module_target.c"
static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

#line 244 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

#line 247 "make.module_target.c"
static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

#line 250 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

#line 253 "make.module_target.c"
static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

#line 256 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
#line 259 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 261 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2);

#line 264 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
#line 267 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 269 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 271 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3);

#line 274 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
#line 277 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 279 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2);

#line 282 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
#line 285 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 287 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 289 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3);

#line 803 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 774 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
#line 774 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 774 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 774 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 774 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

#line 511 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
#line 511 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 511 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 511 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 511 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16);

#line 941 "make.module_target.m"
static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__941__1_1_f_0(
#line 941 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_67);

#line 919 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__919__1_2_p_0(
#line 919 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_54,
#line 919 "make.module_target.m"
  MR_Word * make__module_target__LambdaHeadVar__2_55);

#line 790 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__790__1_3_p_0(
#line 790 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6);

#line 382 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_2(
#line 382 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 382 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 382 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 380 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_1(
#line 380 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 380 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 380 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 377 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0(
#line 377 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 377 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 377 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 377 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_30,
#line 377 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_52,
#line 377 "make.module_target.m"
  MR_Word * make__module_target__LambdaHeadVar__2_53);

#line 202 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__202__1_6_p_0(
#line 202 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 202 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 202 "make.module_target.m"
  MR_Word make__module_target__DepFiles0_34,
#line 202 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_75_75);

#line 182 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__182__1_10_p_0(
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_77,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_303,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_304,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_305,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_306,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_307,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__7_308,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__8_309);

#line 289 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
#line 289 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_T_9,
#line 289 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_E_10,
#line 289 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 289 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 801 "make.module_target.m"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
#line 801 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__1_1,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_3);

#line 801 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2);

#line 1067 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
#line 1067 "make.module_target.m"
  MR_Word make__module_target__TargetType_3);

#line 1054 "make.module_target.m"
static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
#line 1054 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 1054 "make.module_target.m"
  MR_String make__module_target__ObjExt_9,
#line 1054 "make.module_target.m"
  MR_Word make__module_target__ModuleName_10,
#line 1054 "make.module_target.m"
  MR_String make__module_target__FactTableFile_11,
#line 1054 "make.module_target.m"
  MR_Word * make__module_target__FactTableForeignFile_12);

#line 1013 "make.module_target.m"
static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
#line 1013 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1013 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFile_8,
#line 1013 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_TimestampFileNames_0_15,
#line 1013 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_TimestampFileNames_16);

#line 1009 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
#line 1009 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 1009 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 1009 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 941 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
#line 941 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 941 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 938 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
#line 938 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 938 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 938 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 938 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 938 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 918 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
#line 918 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 918 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 918 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 915 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
#line 915 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 892 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
#line 892 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 892 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 892 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 892 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41);

#line 860 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_9_p_0(
#line 860 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 860 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 860 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 860 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_30);

#line 850 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__get_pic_flags_1_f_0(
#line 850 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1);

#line 790 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
#line 790 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 790 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 790 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 785 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
#line 785 "make.module_target.m"
  MR_Word make__module_target__Globals_5,
#line 785 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6,
#line 785 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
#line 785 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10);

#line 774 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
#line 774 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 774 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 774 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_8,
#line 774 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 774 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

#line 767 "make.module_target.m"
static void MR_CALL 
make__module_target__update_target_status_4_p_0(
#line 767 "make.module_target.m"
  MR_Word make__module_target__TargetStatus_5,
#line 767 "make.module_target.m"
  MR_Word make__module_target__TargetFile_6,
#line 767 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
#line 767 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_10);

#line 758 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
#line 758 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 758 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 748 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
#line 748 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 748 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 748 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 748 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 743 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
#line 743 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 741 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
#line 741 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 741 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 741 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 741 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 726 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
#line 726 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 726 "make.module_target.m"
  MR_Word make__module_target__Succeeded_11,
#line 726 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 726 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_13,
#line 726 "make.module_target.m"
  MR_Word make__module_target__OtherTouchedFiles_14,
#line 726 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
#line 726 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_22);

#line 684 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
#line 684 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 684 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 684 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 684 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 664 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
#line 664 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 664 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 637 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
#line 637 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 637 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_9,
#line 637 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_10,
#line 637 "make.module_target.m"
  MR_Word make__module_target__Args_11,
#line 637 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12);

#line 626 "make.module_target.m"
static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
#line 626 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 626 "make.module_target.m"
  MR_Word make__module_target__Args_7,
#line 626 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_8);

#line 594 "make.module_target.m"
static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
#line 594 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 594 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 594 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 594 "make.module_target.m"
  MR_String make__module_target__FactTableName_11,
#line 594 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12);

#line 574 "make.module_target.m"
static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
#line 574 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 574 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 574 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 574 "make.module_target.m"
  MR_Word make__module_target__Lang_11,
#line 574 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12);

#line 560 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
#line 560 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1);

#line 538 "make.module_target.m"
static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
#line 538 "make.module_target.m"
  MR_Word make__module_target__Globals_9,
#line 538 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_10,
#line 538 "make.module_target.m"
  MR_Word make__module_target__PIC_11,
#line 538 "make.module_target.m"
  MR_Word make__module_target__Imports_12,
#line 538 "make.module_target.m"
  MR_Word make__module_target__ForeignCodeFile_13,
#line 538 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_14);

#line 511 "make.module_target.m"
static void MR_CALL 
make__module_target__build_object_code_9_p_0(
#line 511 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 511 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 511 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 511 "make.module_target.m"
  MR_Word make__module_target___Imports_15,
#line 511 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16);

#line 484 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
#line 484 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 484 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 484 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 484 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 457 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
#line 457 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 457 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 457 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 457 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 456 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
#line 456 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 456 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 456 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 456 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 436 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
#line 436 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 436 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 436 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
#line 436 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1);

#line 495 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
#line 495 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 495 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 495 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 495 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 506 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
#line 506 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 506 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 506 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 506 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 419 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0(
#line 419 "make.module_target.m"
  MR_Word make__module_target__ModuleName_13,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Task_14,
#line 419 "make.module_target.m"
  MR_Word make__module_target__ArgFileName_15,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Globals_17,
#line 419 "make.module_target.m"
  MR_Word make__module_target__AllOptionArgs_18,
#line 419 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_19,
#line 419 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 419 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
#line 419 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_37);

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_3(
#line 395 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5);

#line 397 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_2(
#line 397 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_7,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_8);

#line 377 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_1(
#line 377 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 377 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 377 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 377 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 377 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);

#line 354 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0(
#line 354 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 354 "make.module_target.m"
  MR_Word make__module_target__CompilationTask_14,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TargetFile_15,
#line 354 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 354 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_19,
#line 354 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 354 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 354 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41);

#line 331 "make.module_target.m"
static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
#line 331 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 331 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 331 "make.module_target.m"
  MR_Word * make__module_target__ForceReanalysis_9,
#line 331 "make.module_target.m"
  MR_Word make__module_target__Info_10);

#line 319 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
#line 319 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 319 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 319 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2);

#line 317 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
#line 317 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 317 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 317 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2);

#line 315 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
#line 315 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 312 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
#line 312 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 281 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
#line 281 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6);

#line 276 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
#line 276 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7);

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg);

#line 266 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
#line 266 "make.module_target.m"
  MR_Word make__module_target__Globals_11,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 266 "make.module_target.m"
  MR_Word make__module_target__DepFilesToMake_13,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_14,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_15,
#line 266 "make.module_target.m"
  MR_Word * make__module_target__DepsResult_16,
#line 266 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
#line 266 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_32);

#line 249 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
#line 249 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 249 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 249 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 249 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 202 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
#line 202 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 202 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 202 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2);

#line 182 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
#line 182 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_8,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_9);

#line 166 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
#line 166 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 166 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 166 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 166 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3);

#line 130 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
#line 130 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_9,
#line 130 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 130 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 130 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12,
#line 130 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
#line 130 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_45);

#line 1043 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
#line 1043 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1043 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1043 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1043 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1043 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4);


static /* final */ const MR_Box make__module_target_scalar_common_1[30][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[12][1];

static /* final */ const MR_Box make__module_target_scalar_common_5[8][10];

static /* final */ const MR_Box make__module_target_scalar_common_6[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_7[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_8[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_9[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_10[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_12[1][15];

static /* final */ const MR_Box make__module_target_scalar_common_13[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_14[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_15[2][8];


#line 117 "make.module_target.m"
/* sealed */ struct make__module_target__vector_common_type_4_0_s {
#line 117 "make.module_target.m"
  const MR_Word make__module_target__vector_common_type_4_0__vct_4_f_0;
#line 117 "make.module_target.m"
};

static /* final */ const struct make__module_target__vector_common_type_4_0_s make__module_target_vector_common_4[12];



static /* final */ const MR_Box make__module_target_scalar_common_1[30][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__dependencies__module_index__arity0__)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
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
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "--pic-reg")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
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
    ((MR_Box) (&make__module_target_scalar_common_5[1])),
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

static /* final */ const MR_Box make__module_target_scalar_common_5[8][10] = {
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

static /* final */ const MR_Box make__module_target_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box make__module_target_scalar_common_7[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[1][13] = {
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

static /* final */ const MR_Box make__module_target_scalar_common_9[3][9] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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



#line 2050 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 2058 "make.module_target.c"
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

#line 2074 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 2082 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2091 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2099 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
  }
};

#line 2107 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2115 "make.module_target.c"
static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2123 "make.module_target.c"
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

#line 2139 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2148 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2157 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2165 "make.module_target.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0
  }
};

#line 2173 "make.module_target.c"
static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &make__make__type_ctor_info_compilation_task_type_0,
    (MR_TypeInfo) &make__module_target__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2182 "make.module_target.c"
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

#line 2199 "make.module_target.c"
static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2206 "make.module_target.c"
static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3] = {
  (MR_String) "foreign_language",
  (MR_String) "target_file",
  (MR_String) "object_file"
};

#line 2213 "make.module_target.c"
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

#line 2228 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

#line 2233 "make.module_target.c"
static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0
  }
};

#line 2242 "make.module_target.c"
static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

#line 2247 "make.module_target.c"
static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1] = {
  (MR_Integer) 0
};

#line 2252 "make.module_target.c"
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

#line 2269 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
#line 2272 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 2274 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2)
#line 2276 "make.module_target.c"
{
#line 2278 "make.module_target.c"
  {
#line 2280 "make.module_target.c"
    MR_bool make__module_target__succeeded;

#line 2283 "make.module_target.c"
    {
#line 2285 "make.module_target.c"
      make__module_target__succeeded = make__module_target____Unify____compilation_task_result_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 2288 "make.module_target.c"
    return make__module_target__succeeded;
#line 2290 "make.module_target.c"
  }
#line 2292 "make.module_target.c"
}

#line 2295 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
#line 2298 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 2300 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 2302 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3)
#line 2304 "make.module_target.c"
{
#line 2306 "make.module_target.c"
  {
#line 2308 "make.module_target.c"
    MR_Word make__module_target__conv0_HeadVar__1_1;

#line 2311 "make.module_target.c"
    {
#line 2313 "make.module_target.c"
      make__module_target____Compare____compilation_task_result_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
#line 2316 "make.module_target.c"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
#line 2318 "make.module_target.c"
  }
#line 2320 "make.module_target.c"
}

#line 2323 "make.module_target.c"
static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
#line 2326 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_1,
#line 2328 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2)
#line 2330 "make.module_target.c"
{
#line 2332 "make.module_target.c"
  {
#line 2334 "make.module_target.c"
    MR_bool make__module_target__succeeded;

#line 2337 "make.module_target.c"
    {
#line 2339 "make.module_target.c"
      make__module_target__succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 2342 "make.module_target.c"
    return make__module_target__succeeded;
#line 2344 "make.module_target.c"
  }
#line 2346 "make.module_target.c"
}

#line 2349 "make.module_target.c"
static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
#line 2352 "make.module_target.c"
  MR_Box * make__module_target__wrapper_arg_1,
#line 2354 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_2,
#line 2356 "make.module_target.c"
  MR_Box make__module_target__wrapper_arg_3)
#line 2358 "make.module_target.c"
{
#line 2360 "make.module_target.c"
  {
#line 2362 "make.module_target.c"
    MR_Word make__module_target__conv0_HeadVar__1_1;

#line 2365 "make.module_target.c"
    {
#line 2367 "make.module_target.c"
      make__module_target____Compare____foreign_code_file_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
#line 2370 "make.module_target.c"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
#line 2372 "make.module_target.c"
  }
#line 2374 "make.module_target.c"
}

#line 803 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
#line 803 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 803 "make.module_target.m"
{
#line 806 "make.module_target.m"
  while (MR_TRUE)
#line 806 "make.module_target.m"
    {
#line 806 "make.module_target.m"
      /* tailcall optimized into a loop */
#line 806 "make.module_target.m"
      {
#line 806 "make.module_target.m"
        MR_bool make__module_target__succeeded;
#line 806 "make.module_target.m"
        MR_Word make__module_target__HeadVar__3_3;

#line 806 "make.module_target.m"
#line 806 "make.module_target.m"
        switch (MR_tag((MR_Word) make__module_target__HeadVar__2_2)) {
#line 806 "make.module_target.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 806 "make.module_target.m"
          case (MR_Integer) 0:
#line 806 "make.module_target.m"
#line 806 "make.module_target.m"
            switch (MR_unmkbody(make__module_target__HeadVar__2_2)) {
#line 806 "make.module_target.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 806 "make.module_target.m"
              case (MR_Integer) 0:
#line 806 "make.module_target.m"
                {
#line 807 "make.module_target.m"
                  {
#line 807 "make.module_target.m"
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
#line 806 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 1:
#line 810 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[15];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 2:
#line 818 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[23];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 3:
#line 816 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[21];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 4:
#line 814 "make.module_target.m"
                {
#line 815 "make.module_target.m"
                  /* direct tailcall eliminated */
#line 815 "make.module_target.m"
                  {
#line 815 "make.module_target.m"
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 815 "make.module_target.m"
                  }
#line 815 "make.module_target.m"
                  continue;
#line 814 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 5:
#line 812 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[25];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 6:
#line 820 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[17];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 7:
#line 823 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[7];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 8:
#line 808 "make.module_target.m"
                {
#line 809 "make.module_target.m"
                  {
#line 809 "make.module_target.m"
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
#line 808 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 9:
#line 827 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[9];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 10:
#line 829 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[11];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 11:
#line 831 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[19];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 12:
#line 833 "make.module_target.m"
                {
#line 834 "make.module_target.m"
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[29];
#line 833 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 13:
#line 835 "make.module_target.m"
                {
#line 836 "make.module_target.m"
                  /* direct tailcall eliminated */
#line 836 "make.module_target.m"
                  {
#line 836 "make.module_target.m"
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
#line 836 "make.module_target.m"
                  }
#line 836 "make.module_target.m"
                  continue;
#line 835 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 14:
#line 837 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[13];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 15:
#line 839 "make.module_target.m"
                {
#line 840 "make.module_target.m"
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[29];
#line 839 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 16:
#line 847 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[27];
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
            }
#line 806 "make.module_target.m"
            break;
#line 806 "make.module_target.m"
          case (MR_Integer) 1:
#line 825 "make.module_target.m"
            {
#line 826 "make.module_target.m"
              /* direct tailcall eliminated */
#line 826 "make.module_target.m"
              {
#line 826 "make.module_target.m"
                make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 826 "make.module_target.m"
              }
#line 826 "make.module_target.m"
              continue;
#line 825 "make.module_target.m"
            }
#line 806 "make.module_target.m"
            break;
#line 806 "make.module_target.m"
          case (MR_Integer) 2:
#line 841 "make.module_target.m"
            {
#line 841 "make.module_target.m"
              MR_Word make__module_target__PIC_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
#line 841 "make.module_target.m"
              MR_Word make__module_target__V_91_91;
#line 841 "make.module_target.m"
              MR_Word make__module_target__V_92_92;

#line 842 "make.module_target.m"
              {
#line 842 "make.module_target.m"
                make__module_target__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "make.module_target.m"
                MR_hl_field(MR_mktag(1), make__module_target__V_91_91, 0) = ((MR_Box) (make__module_target__PIC_90));
#line 842 "make.module_target.m"
              }
#line 842 "make.module_target.m"
              {
#line 842 "make.module_target.m"
                make__module_target__V_92_92 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_90);
              }
#line 842 "make.module_target.m"
              {
#line 842 "make.module_target.m"
                make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_91_91));
#line 842 "make.module_target.m"
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_92_92));
#line 842 "make.module_target.m"
              }
#line 841 "make.module_target.m"
            }
#line 806 "make.module_target.m"
            break;
#line 806 "make.module_target.m"
          case (MR_Integer) 3:
#line 806 "make.module_target.m"
#line 806 "make.module_target.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 0)))) {
#line 806 "make.module_target.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 806 "make.module_target.m"
              case (MR_Integer) 0:
#line 843 "make.module_target.m"
                {
#line 843 "make.module_target.m"
                  MR_Word make__module_target__PIC_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 843 "make.module_target.m"
                  MR_Word make__module_target__Lang_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
#line 843 "make.module_target.m"
                  MR_Word make__module_target__V_96_96;
#line 843 "make.module_target.m"
                  MR_Word make__module_target__V_97_97;

#line 844 "make.module_target.m"
                  {
#line 844 "make.module_target.m"
                    make__module_target__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_96_96, 0) = ((MR_Box) (make__module_target__PIC_94));
#line 844 "make.module_target.m"
                    MR_hl_field(MR_mktag(2), make__module_target__V_96_96, 1) = ((MR_Box) (make__module_target__Lang_95));
#line 844 "make.module_target.m"
                  }
#line 844 "make.module_target.m"
                  {
#line 844 "make.module_target.m"
                    make__module_target__V_97_97 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_94);
                  }
#line 844 "make.module_target.m"
                  {
#line 844 "make.module_target.m"
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_96_96));
#line 844 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_97_97));
#line 844 "make.module_target.m"
                  }
#line 843 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
              case (MR_Integer) 1:
#line 845 "make.module_target.m"
                {
#line 845 "make.module_target.m"
                  MR_Word make__module_target__PIC_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
#line 845 "make.module_target.m"
                  MR_String make__module_target__FactTable_100 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
#line 845 "make.module_target.m"
                  MR_Word make__module_target__V_101_101;
#line 845 "make.module_target.m"
                  MR_Word make__module_target__V_102_102;

#line 846 "make.module_target.m"
                  {
#line 846 "make.module_target.m"
                    make__module_target__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "make.module_target.m"
                    MR_hl_field(MR_mktag(3), make__module_target__V_101_101, 0) = ((MR_Box) (make__module_target__PIC_99));
#line 846 "make.module_target.m"
                    MR_hl_field(MR_mktag(3), make__module_target__V_101_101, 1) = ((MR_Box) (make__module_target__FactTable_100));
#line 846 "make.module_target.m"
                  }
#line 846 "make.module_target.m"
                  {
#line 846 "make.module_target.m"
                    make__module_target__V_102_102 = make__module_target__get_pic_flags_1_f_0(make__module_target__PIC_99);
                  }
#line 846 "make.module_target.m"
                  {
#line 846 "make.module_target.m"
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_101_101));
#line 846 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (make__module_target__V_102_102));
#line 846 "make.module_target.m"
                  }
#line 845 "make.module_target.m"
                }
#line 806 "make.module_target.m"
                break;
#line 806 "make.module_target.m"
            }
#line 806 "make.module_target.m"
            break;
#line 806 "make.module_target.m"
        }
#line 806 "make.module_target.m"
        return make__module_target__HeadVar__3_3;
#line 806 "make.module_target.m"
      }
#line 806 "make.module_target.m"
      break;
#line 806 "make.module_target.m"
    }
#line 803 "make.module_target.m"
}

#line 774 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
#line 774 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 774 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 774 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 774 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
#line 774 "make.module_target.m"
{
#line 781 "make.module_target.m"
  {
#line 781 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 779 "make.module_target.m"
    {
#line 779 "make.module_target.m"
      make__module_target__succeeded = mercury__string__suffix_2_p_0(make__module_target__FileName_7, (MR_String) ".analysis");
    }
#line 781 "make.module_target.m"
    if (make__module_target__succeeded)
#line 780 "make.module_target.m"
      {
#line 780 "make.module_target.m"
        make__module_target__delete_timestamp_4_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
#line 780 "make.module_target.m"
        return;
      }
#line 781 "make.module_target.m"
    else
#line 781 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Timestamps_11 = make__module_target__STATE_VARIABLE_Timestamps_0_10;
#line 781 "make.module_target.m"
  }
#line 774 "make.module_target.m"
}

#line 511 "make.module_target.m"
static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
#line 511 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 511 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 511 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 511 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16)
#line 511 "make.module_target.m"
{
#line 518 "make.module_target.m"
  {
#line 518 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 518 "make.module_target.m"
#line 518 "make.module_target.m"
    switch (make__module_target__Target_12) {
#line 518 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 518 "make.module_target.m"
      case (MR_Integer) 0:
#line 519 "make.module_target.m"
        {
#line 519 "make.module_target.m"
          backend_libs__compile_target_code__compile_c_file_7_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__PIC_13, make__module_target__ModuleName_11, make__module_target__Succeeded_16);
#line 519 "make.module_target.m"
          return;
        }
#line 518 "make.module_target.m"
        break;
#line 518 "make.module_target.m"
      case (MR_Integer) 1:
#line 526 "make.module_target.m"
        {
#line 526 "make.module_target.m"
          MR_String make__module_target__CsharpFile_19;
#line 526 "make.module_target.m"
          MR_Word make__module_target__V_31_31;

#line 527 "make.module_target.m"
          {
#line 527 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".cs", (MR_Integer) 0, &make__module_target__CsharpFile_19);
          }
#line 530 "make.module_target.m"
          {
#line 530 "make.module_target.m"
            make__module_target__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 0) = ((MR_Box) (make__module_target__CsharpFile_19));
#line 530 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "make.module_target.m"
          }
#line 529 "make.module_target.m"
          {
#line 529 "make.module_target.m"
            backend_libs__compile_target_code__link_8_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, (MR_Integer) 4, make__module_target__ModuleName_11, make__module_target__V_31_31, make__module_target__Succeeded_16);
#line 529 "make.module_target.m"
            return;
          }
#line 526 "make.module_target.m"
        }
#line 518 "make.module_target.m"
        break;
#line 518 "make.module_target.m"
      case (MR_Integer) 3:
#line 532 "make.module_target.m"
        {
#line 532 "make.module_target.m"
          MR_String make__module_target__ErlangFile_20;

#line 533 "make.module_target.m"
          {
#line 533 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".erl", (MR_Integer) 0, &make__module_target__ErlangFile_20);
          }
#line 535 "make.module_target.m"
          {
#line 535 "make.module_target.m"
            backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__ErlangFile_20, make__module_target__Succeeded_16);
#line 535 "make.module_target.m"
            return;
          }
#line 532 "make.module_target.m"
        }
#line 518 "make.module_target.m"
        break;
#line 518 "make.module_target.m"
      case (MR_Integer) 2:
#line 521 "make.module_target.m"
        {
#line 521 "make.module_target.m"
          MR_String make__module_target__JavaFile_18;
#line 521 "make.module_target.m"
          MR_Word make__module_target__V_37_37;

#line 522 "make.module_target.m"
          {
#line 522 "make.module_target.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".java", (MR_Integer) 0, &make__module_target__JavaFile_18);
          }
#line 524 "make.module_target.m"
          {
#line 524 "make.module_target.m"
            make__module_target__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_37_37, 0) = ((MR_Box) (make__module_target__JavaFile_18));
#line 524 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "make.module_target.m"
          }
#line 524 "make.module_target.m"
          {
#line 524 "make.module_target.m"
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__V_37_37, make__module_target__Succeeded_16);
#line 524 "make.module_target.m"
            return;
          }
#line 521 "make.module_target.m"
        }
#line 518 "make.module_target.m"
        break;
#line 518 "make.module_target.m"
    }
#line 518 "make.module_target.m"
  }
#line 511 "make.module_target.m"
}

#line 941 "make.module_target.m"
static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__941__1_1_f_0(
#line 941 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_67)
#line 941 "make.module_target.m"
{
#line 941 "make.module_target.m"
  {
#line 941 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 941 "make.module_target.m"
    MR_String make__module_target__LambdaHeadVar__2_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 1)));
#line 941 "make.module_target.m"
    MR_Word make__module_target__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 0)));
#line 941 "make.module_target.m"
    MR_String make__module_target__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 2)));

#line 941 "make.module_target.m"
    return make__module_target__LambdaHeadVar__2_68;
#line 941 "make.module_target.m"
  }
#line 941 "make.module_target.m"
}

#line 919 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__919__1_2_p_0(
#line 919 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_54,
#line 919 "make.module_target.m"
  MR_Word * make__module_target__LambdaHeadVar__2_55)
#line 919 "make.module_target.m"
{
#line 919 "make.module_target.m"
  {
#line 919 "make.module_target.m"
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__LambdaHeadVar__1_54)) == (MR_mktag((MR_Integer) 1)));

#line 919 "make.module_target.m"
    if (make__module_target__succeeded)
#line 919 "make.module_target.m"
      *make__module_target__LambdaHeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__LambdaHeadVar__1_54, (MR_Integer) 0)));
#line 919 "make.module_target.m"
    return make__module_target__succeeded;
#line 919 "make.module_target.m"
  }
#line 919 "make.module_target.m"
}

#line 790 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__790__1_3_p_0(
#line 790 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6)
#line 790 "make.module_target.m"
{
#line 790 "make.module_target.m"
  {
#line 790 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 792 "make.module_target.m"
    {
#line 792 "make.module_target.m"
      mercury__io__write_string_3_p_0((MR_String) "Deleting timestamp for ");
    }
#line 793 "make.module_target.m"
    {
#line 793 "make.module_target.m"
      mercury__io__write_string_3_p_0(make__module_target__TouchedFile_6);
    }
#line 794 "make.module_target.m"
    {
#line 794 "make.module_target.m"
      mercury__io__nl_2_p_0();
#line 794 "make.module_target.m"
      return;
    }
#line 790 "make.module_target.m"
  }
#line 790 "make.module_target.m"
}

#line 382 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_2(
#line 382 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 382 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 382 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 382 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 382 "make.module_target.m"
{
#line 382 "make.module_target.m"
  {
#line 382 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 382 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__5_5;

#line 382 "make.module_target.m"
    {
#line 382 "make.module_target.m"
      make__util__make_remove_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__5_5);
    }
#line 382 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__5_5));
#line 382 "make.module_target.m"
  }
#line 382 "make.module_target.m"
}

#line 380 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_1(
#line 380 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 380 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 380 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 380 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 380 "make.module_target.m"
{
#line 380 "make.module_target.m"
  {
#line 380 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 380 "make.module_target.m"
    MR_Word make__module_target__conv0_HeadVar__5_5;

#line 380 "make.module_target.m"
    {
#line 380 "make.module_target.m"
      make__util__make_remove_target_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_HeadVar__5_5);
    }
#line 380 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
#line 380 "make.module_target.m"
  }
#line 380 "make.module_target.m"
}

#line 377 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0(
#line 377 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 377 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 377 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 377 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_30,
#line 377 "make.module_target.m"
  MR_Word make__module_target__LambdaHeadVar__1_52,
#line 377 "make.module_target.m"
  MR_Word * make__module_target__LambdaHeadVar__2_53)
#line 377 "make.module_target.m"
{
#line 377 "make.module_target.m"
  {
#line 377 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 377 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_98_98;
#line 377 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_99_99;
#line 377 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 377 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_MakeInfo_57_57;
#line 377 "make.module_target.m"
    MR_Word make__module_target__V_60_60;
#line 380 "make.module_target.m"
    MR_Box make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57;
#line 380 "make.module_target.m"
    MR_Box make__module_target__conv1_STATE_VARIABLE_IO_58_58;
#line 382 "make.module_target.m"
    MR_Box make__module_target__conv5_LambdaHeadVar__2_53;
#line 382 "make.module_target.m"
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_62_62;

#line 380 "make.module_target.m"
    {
#line 380 "make.module_target.m"
      make__module_target__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 380 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 0) = ((MR_Box) (&make__module_target_scalar_common_5[6]));
#line 380 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_1));
#line 380 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 380 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_56_56, 4) = ((MR_Box) ((MR_Integer) 46));
#line 380 "make.module_target.m"
    }
#line 3116 "make.module_target.c"
    make__module_target__TypeCtorInfo_98_98 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 3118 "make.module_target.c"
    make__module_target__TypeCtorInfo_99_99 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 380 "make.module_target.m"
    {
#line 380 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TypeCtorInfo_98_98, make__module_target__TypeCtorInfo_99_99, make__module_target__V_56_56, make__module_target__TouchedTargetFiles_17, ((MR_Box) (make__module_target__LambdaHeadVar__1_52)), &make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_58_58);
    }
#line 380 "make.module_target.m"
    make__module_target__STATE_VARIABLE_MakeInfo_57_57 = ((MR_Word) make__module_target__conv2_STATE_VARIABLE_MakeInfo_57_57);
#line 382 "make.module_target.m"
    {
#line 382 "make.module_target.m"
      make__module_target__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 0) = ((MR_Box) (&make__module_target_scalar_common_5[7]));
#line 382 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0_2));
#line 382 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 382 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_60_60, 4) = ((MR_Box) ((MR_Integer) 46));
#line 382 "make.module_target.m"
    }
#line 382 "make.module_target.m"
    {
#line 382 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_98_98, make__module_target__TypeCtorInfo_99_99, make__module_target__V_60_60, make__module_target__TouchedFiles_18, ((MR_Box) (make__module_target__STATE_VARIABLE_MakeInfo_57_57)), &make__module_target__conv5_LambdaHeadVar__2_53, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_62_62);
    }
#line 382 "make.module_target.m"
    *make__module_target__LambdaHeadVar__2_53 = ((MR_Word) make__module_target__conv5_LambdaHeadVar__2_53);
#line 387 "make.module_target.m"
    if ((make__module_target__MaybeArgFileName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "make.module_target.m"
      {
#line 388 "make.module_target.m"
      }
#line 387 "make.module_target.m"
    else
#line 385 "make.module_target.m"
      {
#line 385 "make.module_target.m"
        MR_String make__module_target__ArgFileName2_33 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_30, (MR_Integer) 0)));
#line 386 "make.module_target.m"
        MR_Word make__module_target__V_34_34;

#line 386 "make.module_target.m"
        {
#line 386 "make.module_target.m"
          mercury__io__remove_file_4_p_0(make__module_target__ArgFileName2_33, &make__module_target__V_34_34);
        }
#line 385 "make.module_target.m"
      }
#line 377 "make.module_target.m"
  }
#line 377 "make.module_target.m"
}

#line 202 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__202__1_6_p_0(
#line 202 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 202 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 202 "make.module_target.m"
  MR_Word make__module_target__DepFiles0_34,
#line 202 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_75_75)
#line 202 "make.module_target.m"
{
#line 202 "make.module_target.m"
  {
#line 202 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 202 "make.module_target.m"
    MR_Word make__module_target__PlainSet_40;
#line 202 "make.module_target.m"
    MR_Word make__module_target__V_89_89;

#line 204 "make.module_target.m"
    {
#line 204 "make.module_target.m"
      make__util__make_write_target_file_4_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11);
    }
#line 205 "make.module_target.m"
    {
#line 205 "make.module_target.m"
      mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
    }
#line 206 "make.module_target.m"
    {
#line 206 "make.module_target.m"
      make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_75_75, make__module_target__DepFiles0_34, &make__module_target__PlainSet_40);
    }
#line 209 "make.module_target.m"
    {
#line 209 "make.module_target.m"
      make__module_target__V_89_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__PlainSet_40);
    }
#line 208 "make.module_target.m"
    {
#line 208 "make.module_target.m"
      make__util__make_write_dependency_file_list_4_p_0(make__module_target__Globals_10, make__module_target__V_89_89);
#line 208 "make.module_target.m"
      return;
    }
#line 202 "make.module_target.m"
  }
#line 202 "make.module_target.m"
}

#line 182 "make.module_target.m"
static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__182__1_10_p_0(
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_77,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_303,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_304,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__4_305,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__5_306,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__6_307,
#line 182 "make.module_target.m"
  MR_Word make__module_target__HeadVar__7_308,
#line 182 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__8_309)
#line 182 "make.module_target.m"
{
#line 182 "make.module_target.m"
  {
#line 182 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 182 "make.module_target.m"
    {
#line 182 "make.module_target.m"
      make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, make__module_target__HeadVar__1_77, make__module_target__HeadVar__2_303, make__module_target__HeadVar__3_304, make__module_target__HeadVar__4_305, make__module_target__HeadVar__5_306, make__module_target__HeadVar__6_307, make__module_target__HeadVar__7_308, make__module_target__HeadVar__8_309);
#line 182 "make.module_target.m"
      return;
    }
#line 182 "make.module_target.m"
  }
#line 182 "make.module_target.m"
}

#line 289 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
#line 289 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_T_9,
#line 289 "make.module_target.m"
  MR_Word make__module_target__TypeInfo_for_E_10,
#line 289 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 289 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 289 "make.module_target.m"
{
#line 289 "make.module_target.m"
  {
#line 289 "make.module_target.m"
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 289 "make.module_target.m"
    MR_Box make__module_target__V_6_6;

#line 289 "make.module_target.m"
    if (make__module_target__succeeded)
#line 289 "make.module_target.m"
      {
#line 289 "make.module_target.m"
        make__module_target__V_6_6 = (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__2_2, (MR_Integer) 0));
#line 289 "make.module_target.m"
        (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__1_1, (MR_Integer) 0)) = make__module_target__V_6_6;
#line 289 "make.module_target.m"
        make__module_target__succeeded = MR_TRUE;
#line 289 "make.module_target.m"
      }
#line 289 "make.module_target.m"
    return make__module_target__succeeded;
#line 289 "make.module_target.m"
  }
#line 289 "make.module_target.m"
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
#line 3332 "make.module_target.c"
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
#line 3362 "make.module_target.c"
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
#line 3382 "make.module_target.c"
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

#line 3449 "make.module_target.c"
        make__module_target__succeeded = (make__module_target__V_3_3 == make__module_target__V_6_6);
#line 59 "make.module_target.m"
        if (make__module_target__succeeded)
#line 59 "make.module_target.m"
          {
#line 3455 "make.module_target.c"
            make__module_target__succeeded = (strcmp(make__module_target__V_4_4, make__module_target__V_7_7) == 0);
#line 59 "make.module_target.m"
            if (make__module_target__succeeded)
#line 3459 "make.module_target.c"
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

#line 801 "make.module_target.m"
static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
#line 801 "make.module_target.m"
  MR_Word * make__module_target__HeadVar__1_1,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_3)
#line 801 "make.module_target.m"
{
#line 801 "make.module_target.m"
  {
#line 801 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 801 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar1_4 = make__module_target__HeadVar__2_2;
#line 801 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar2_5 = make__module_target__HeadVar__3_3;

#line 801 "make.module_target.m"
    {
#line 801 "make.module_target.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make__module_target_scalar_common_2[3], make__module_target__HeadVar__1_1, ((MR_Box) (make__module_target__Cast_HeadVar1_4)), ((MR_Box) (make__module_target__Cast_HeadVar2_5)));
#line 801 "make.module_target.m"
      return;
    }
#line 801 "make.module_target.m"
  }
#line 801 "make.module_target.m"
}

#line 801 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1,
#line 801 "make.module_target.m"
  MR_Word make__module_target__HeadVar__2_2)
#line 801 "make.module_target.m"
{
#line 801 "make.module_target.m"
  {
#line 801 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 801 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar1_3 = make__module_target__HeadVar__1_1;
#line 801 "make.module_target.m"
    MR_Word make__module_target__Cast_HeadVar2_4 = make__module_target__HeadVar__2_2;

#line 801 "make.module_target.m"
    {
#line 801 "make.module_target.m"
      return make__module_target__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__module_target_scalar_common_2[3], ((MR_Box) (make__module_target__Cast_HeadVar1_3)), ((MR_Box) (make__module_target__Cast_HeadVar2_4)));
    }
#line 801 "make.module_target.m"
    return make__module_target__succeeded;
#line 801 "make.module_target.m"
  }
#line 801 "make.module_target.m"
}

#line 1067 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
#line 1067 "make.module_target.m"
  MR_Word make__module_target__TargetType_3)
#line 1067 "make.module_target.m"
{
#line 1071 "make.module_target.m"
  {
#line 1071 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1071 "make.module_target.m"
    MR_Word make__module_target__Result_4;

#line 1071 "make.module_target.m"
#line 1071 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__TargetType_3)) {
#line 1071 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "make.module_target.m"
      case (MR_Integer) 0:
#line 1095 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1071 "make.module_target.m"
        break;
#line 1071 "make.module_target.m"
      case (MR_Integer) 1:
#line 1095 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1071 "make.module_target.m"
        break;
#line 1071 "make.module_target.m"
      case (MR_Integer) 2:
#line 1071 "make.module_target.m"
        make__module_target__Result_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__TargetType_3, (MR_Integer) 0)));
#line 1071 "make.module_target.m"
        break;
#line 1071 "make.module_target.m"
      case (MR_Integer) 3:
#line 1095 "make.module_target.m"
        make__module_target__Result_4 = (MR_Integer) 2;
#line 1071 "make.module_target.m"
        break;
#line 1071 "make.module_target.m"
    }
#line 1071 "make.module_target.m"
    return make__module_target__Result_4;
#line 1071 "make.module_target.m"
  }
#line 1067 "make.module_target.m"
}

#line 1054 "make.module_target.m"
static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
#line 1054 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 1054 "make.module_target.m"
  MR_String make__module_target__ObjExt_9,
#line 1054 "make.module_target.m"
  MR_Word make__module_target__ModuleName_10,
#line 1054 "make.module_target.m"
  MR_String make__module_target__FactTableFile_11,
#line 1054 "make.module_target.m"
  MR_Word * make__module_target__FactTableForeignFile_12)
#line 1054 "make.module_target.m"
{
#line 1059 "make.module_target.m"
  {
#line 1059 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1059 "make.module_target.m"
    MR_String make__module_target__FactTableCFile_14;
#line 1059 "make.module_target.m"
    MR_String make__module_target__FactTableObjFile_15;

#line 1060 "make.module_target.m"
    {
#line 1060 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_10, make__module_target__FactTableFile_11, (MR_String) ".c", (MR_Integer) 1, &make__module_target__FactTableCFile_14);
    }
#line 1062 "make.module_target.m"
    {
#line 1062 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_10, make__module_target__FactTableFile_11, make__module_target__ObjExt_9, (MR_Integer) 1, &make__module_target__FactTableObjFile_15);
    }
#line 1065 "make.module_target.m"
    {
#line 1065 "make.module_target.m"
      MR_Word base;
#line 1065 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "make.module_target.m"
      *make__module_target__FactTableForeignFile_12 = base;
#line 1065 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1065 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__FactTableCFile_14));
#line 1065 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__FactTableObjFile_15));
#line 1065 "make.module_target.m"
    }
#line 1059 "make.module_target.m"
  }
#line 1054 "make.module_target.m"
}

#line 1013 "make.module_target.m"
static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
#line 1013 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 1013 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFile_8,
#line 1013 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_TimestampFileNames_0_15,
#line 1013 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_TimestampFileNames_16)
#line 1013 "make.module_target.m"
{
#line 1017 "make.module_target.m"
  {
#line 1017 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1017 "make.module_target.m"
    MR_Word make__module_target__TargetModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TouchedTargetFile_8, (MR_Integer) 0)));
#line 1017 "make.module_target.m"
    MR_Word make__module_target__TargetFileType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TouchedTargetFile_8, (MR_Integer) 1)));
#line 1023 "make.module_target.m"
    MR_String make__module_target__TimestampExt_13;

#line 1019 "make.module_target.m"
    {
#line 1019 "make.module_target.m"
      make__module_target__succeeded = make__util__timestamp_extension_2_p_0(make__module_target__TargetFileType_12, &make__module_target__TimestampExt_13);
    }
#line 1023 "make.module_target.m"
    if (make__module_target__succeeded)
#line 1021 "make.module_target.m"
      {
#line 1021 "make.module_target.m"
        MR_String make__module_target__TimestampFile_14;

#line 1020 "make.module_target.m"
        {
#line 1020 "make.module_target.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_7, make__module_target__TargetModuleName_11, make__module_target__TimestampExt_13, (MR_Integer) 1, &make__module_target__TimestampFile_14);
        }
#line 1022 "make.module_target.m"
        {
#line 1022 "make.module_target.m"
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_target__TimestampFile_14)), make__module_target__STATE_VARIABLE_TimestampFileNames_0_15, make__module_target__STATE_VARIABLE_TimestampFileNames_16);
#line 1022 "make.module_target.m"
          return;
        }
#line 1021 "make.module_target.m"
      }
#line 1023 "make.module_target.m"
    else
#line 1024 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_TimestampFileNames_16 = make__module_target__STATE_VARIABLE_TimestampFileNames_0_15;
#line 1017 "make.module_target.m"
  }
#line 1013 "make.module_target.m"
}

#line 1009 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
#line 1009 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 1009 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 1009 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 1009 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 1009 "make.module_target.m"
{
#line 1009 "make.module_target.m"
  {
#line 1009 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 1009 "make.module_target.m"
    MR_Word make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16;

#line 1009 "make.module_target.m"
    {
#line 1009 "make.module_target.m"
      make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16);
    }
#line 1009 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16));
#line 1009 "make.module_target.m"
  }
#line 1009 "make.module_target.m"
}

#line 941 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
#line 941 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 941 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 941 "make.module_target.m"
{
#line 941 "make.module_target.m"
  {
#line 941 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 941 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 941 "make.module_target.m"
    MR_String make__module_target__conv7_LambdaHeadVar__2_68;

#line 941 "make.module_target.m"
    {
#line 941 "make.module_target.m"
      make__module_target__conv7_LambdaHeadVar__2_68 = make__module_target__IntroducedFrom__func__touched_files_process_module__941__1_1_f_0(((MR_Word) make__module_target__wrapper_arg_1));
    }
#line 941 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv7_LambdaHeadVar__2_68));
#line 941 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 941 "make.module_target.m"
  }
#line 941 "make.module_target.m"
}

#line 938 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
#line 938 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 938 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 938 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 938 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 938 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 938 "make.module_target.m"
{
#line 938 "make.module_target.m"
  {
#line 938 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 938 "make.module_target.m"
    MR_Word make__module_target__conv5_ForeignFiles_10;

#line 938 "make.module_target.m"
    {
#line 938 "make.module_target.m"
      make__module_target__external_foreign_code_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_ForeignFiles_10);
    }
#line 938 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_ForeignFiles_10));
#line 938 "make.module_target.m"
  }
#line 938 "make.module_target.m"
}

#line 918 "make.module_target.m"
static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
#line 918 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 918 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 918 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 918 "make.module_target.m"
{
#line 918 "make.module_target.m"
  {
#line 918 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 918 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 918 "make.module_target.m"
    MR_Word make__module_target__conv4_LambdaHeadVar__2_55;

#line 918 "make.module_target.m"
    {
#line 918 "make.module_target.m"
      make__module_target__succeeded = make__module_target__IntroducedFrom__pred__touched_files_process_module__919__1_2_p_0(((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv4_LambdaHeadVar__2_55);
    }
#line 918 "make.module_target.m"
    if (make__module_target__succeeded)
#line 918 "make.module_target.m"
      {
#line 918 "make.module_target.m"
        *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv4_LambdaHeadVar__2_55));
#line 918 "make.module_target.m"
        make__module_target__succeeded = MR_TRUE;
#line 918 "make.module_target.m"
      }
#line 918 "make.module_target.m"
    return make__module_target__succeeded;
#line 918 "make.module_target.m"
  }
#line 918 "make.module_target.m"
}

#line 915 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
#line 915 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 915 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 915 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 915 "make.module_target.m"
{
#line 915 "make.module_target.m"
  {
#line 915 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 915 "make.module_target.m"
    MR_Word make__module_target__conv1_HeadVar__3_3;
#line 915 "make.module_target.m"
    MR_Word make__module_target__conv0_HeadVar__5_5;

#line 915 "make.module_target.m"
    {
#line 915 "make.module_target.m"
      make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv1_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv0_HeadVar__5_5);
    }
#line 915 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv1_HeadVar__3_3));
#line 915 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
#line 915 "make.module_target.m"
  }
#line 915 "make.module_target.m"
}

#line 892 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
#line 892 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 892 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 892 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 892 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 892 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41)
#line 892 "make.module_target.m"
{
#line 898 "make.module_target.m"
  {
#line 898 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 898 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_111_111;
#line 898 "make.module_target.m"
    MR_Word make__module_target__TypeInfo_118_118;
#line 898 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_120_120;
#line 898 "make.module_target.m"
    MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 898 "make.module_target.m"
    MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 898 "make.module_target.m"
    MR_Word make__module_target__MaybeImports_19;
#line 898 "make.module_target.m"
    MR_Word make__module_target__Imports_21;
#line 898 "make.module_target.m"
    MR_Word make__module_target__NestedChildren_22;
#line 898 "make.module_target.m"
    MR_Word make__module_target__MaybeNestedImportsList_24;
#line 898 "make.module_target.m"
    MR_Word make__module_target__ModuleImportsList_27;
#line 898 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_28;
#line 898 "make.module_target.m"
    MR_Word make__module_target__TargetModuleNames_29;
#line 898 "make.module_target.m"
    MR_Word make__module_target__ForeignCodeFiles_31;
#line 898 "make.module_target.m"
    MR_Word make__module_target__TimestampFileNames_39;
#line 898 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_44_44;
#line 898 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 898 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 898 "make.module_target.m"
    MR_Word make__module_target__V_77_77;
#line 912 "make.module_target.m"
    MR_String make__module_target__V_83_83;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_84_84;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_85_85;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_86_86;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_87_87;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_88_88;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_89_89;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_90_90;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_91_91;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_92_92;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_93_93;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_94_94;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_95_95;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_96_96;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_97_97;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_98_98;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_99_99;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_100_100;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_101_101;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_102_102;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_103_103;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_104_104;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_105_105;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_106_106;
#line 912 "make.module_target.m"
    MR_Word make__module_target__V_107_107;
#line 912 "make.module_target.m"
    MR_String make__module_target__V_108_108;
#line 915 "make.module_target.m"
    MR_Box make__module_target__conv3_STATE_VARIABLE_Info_41;
#line 915 "make.module_target.m"
    MR_Box make__module_target__conv2_STATE_VARIABLE_IO_52_52;
#line 924 "make.module_target.m"
    MR_Word make__module_target__NestedImportsList_26;
#line 1009 "make.module_target.m"
    MR_Box make__module_target__conv10_TimestampFileNames_39;
#line 1009 "make.module_target.m"
    MR_Box make__module_target__conv9_STATE_VARIABLE_IO_43;

#line 900 "make.module_target.m"
    {
#line 900 "make.module_target.m"
      make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_0_40, &make__module_target__STATE_VARIABLE_Info_44_44);
    }
#line 904 "make.module_target.m"
    if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "make.module_target.m"
      {
#line 909 "make.module_target.m"
        {
#line 909 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no module dependencies");
#line 909 "make.module_target.m"
          return;
        }
#line 905 "make.module_target.m"
      }
#line 904 "make.module_target.m"
    else
#line 902 "make.module_target.m"
      make__module_target__Imports_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
#line 4030 "make.module_target.c"
    make__module_target__TypeCtorInfo_111_111 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 912 "make.module_target.m"
    make__module_target__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 0)));
#line 912 "make.module_target.m"
    make__module_target__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 1)));
#line 912 "make.module_target.m"
    make__module_target__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 2)));
#line 912 "make.module_target.m"
    make__module_target__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 3)));
#line 912 "make.module_target.m"
    make__module_target__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 4)));
#line 912 "make.module_target.m"
    make__module_target__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 5)));
#line 912 "make.module_target.m"
    make__module_target__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 6)));
#line 912 "make.module_target.m"
    make__module_target__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 7)));
#line 912 "make.module_target.m"
    make__module_target__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 8)));
#line 912 "make.module_target.m"
    make__module_target__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 9)));
#line 912 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 10)));
#line 912 "make.module_target.m"
    make__module_target__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 11)));
#line 912 "make.module_target.m"
    make__module_target__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 12)));
#line 912 "make.module_target.m"
    make__module_target__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 13)));
#line 912 "make.module_target.m"
    make__module_target__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 14)));
#line 912 "make.module_target.m"
    make__module_target__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 15)));
#line 912 "make.module_target.m"
    make__module_target__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 16)));
#line 912 "make.module_target.m"
    make__module_target__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 17)));
#line 912 "make.module_target.m"
    make__module_target__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 18)));
#line 912 "make.module_target.m"
    make__module_target__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 19)));
#line 912 "make.module_target.m"
    make__module_target__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 20)));
#line 912 "make.module_target.m"
    make__module_target__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 21)));
#line 912 "make.module_target.m"
    make__module_target__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 22)));
#line 912 "make.module_target.m"
    make__module_target__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 23)));
#line 912 "make.module_target.m"
    make__module_target__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 24)));
#line 912 "make.module_target.m"
    make__module_target__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 25)));
#line 912 "make.module_target.m"
    make__module_target__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 26)));
#line 912 "make.module_target.m"
    {
#line 912 "make.module_target.m"
      make__module_target__NestedChildren_22 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_111_111, make__module_target__V_49_49);
    }
#line 913 "make.module_target.m"
    {
#line 913 "make.module_target.m"
      make__module_target__TargetModuleNames_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "make.module_target.m"
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 913 "make.module_target.m"
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 1) = ((MR_Box) (make__module_target__NestedChildren_22));
#line 913 "make.module_target.m"
    }
#line 915 "make.module_target.m"
    {
#line 915 "make.module_target.m"
      make__module_target__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 915 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[5]));
#line 915 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_1));
#line 915 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 915 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 915 "make.module_target.m"
    }
#line 4115 "make.module_target.c"
    make__module_target__TypeInfo_118_118 = (MR_Word) &make__module_target_scalar_common_1[3];
#line 4117 "make.module_target.c"
    make__module_target__TypeCtorInfo_120_120 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 915 "make.module_target.m"
    {
#line 915 "make.module_target.m"
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_111_111, make__module_target__TypeInfo_118_118, (MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__TypeCtorInfo_120_120, make__module_target__V_50_50, make__module_target__NestedChildren_22, &make__module_target__MaybeNestedImportsList_24, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_44_44)), &make__module_target__conv3_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_52_52);
    }
#line 915 "make.module_target.m"
    *make__module_target__STATE_VARIABLE_Info_41 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_41);
#line 918 "make.module_target.m"
    {
#line 918 "make.module_target.m"
      make__module_target__succeeded = mercury__list__map_3_p_2(make__module_target__TypeInfo_118_118, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_2[11], make__module_target__MaybeNestedImportsList_24, &make__module_target__NestedImportsList_26);
    }
#line 924 "make.module_target.m"
    if (make__module_target__succeeded)
#line 923 "make.module_target.m"
      {
#line 923 "make.module_target.m"
        make__module_target__ModuleImportsList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "make.module_target.m"
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 0) = ((MR_Box) (make__module_target__Imports_21));
#line 923 "make.module_target.m"
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 1) = ((MR_Box) (make__module_target__NestedImportsList_26));
#line 923 "make.module_target.m"
      }
#line 924 "make.module_target.m"
    else
#line 928 "make.module_target.m"
      {
#line 928 "make.module_target.m"
        {
#line 928 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no nested module dependencies");
#line 928 "make.module_target.m"
          return;
        }
#line 928 "make.module_target.m"
      }
#line 931 "make.module_target.m"
    {
#line 931 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_28);
    }
#line 987 "make.module_target.m"
#line 987 "make.module_target.m"
    switch (make__module_target__Task_12) {
#line 987 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 987 "make.module_target.m"
      case (MR_Integer) 6:
#line 936 "make.module_target.m"
        {
#line 936 "make.module_target.m"
          MR_Word make__module_target__TypeCtorInfo_128_128;
#line 936 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFileList_30;
#line 936 "make.module_target.m"
          MR_Word make__module_target__HeaderTargets0_35;
#line 936 "make.module_target.m"
          MR_Word make__module_target__HeaderTargets_37;
#line 936 "make.module_target.m"
          MR_Word make__module_target__TouchedTargetFiles0_38;
#line 936 "make.module_target.m"
          MR_Word make__module_target__V_63_63;
#line 936 "make.module_target.m"
          MR_Word make__module_target__V_65_65;
#line 936 "make.module_target.m"
          MR_Word make__module_target__V_69_69;
#line 937 "make.module_target.m"
          MR_Box make__module_target__conv6_STATE_VARIABLE_IO_64_64;

#line 938 "make.module_target.m"
          {
#line 938 "make.module_target.m"
            make__module_target__V_65_65 = make__module_target__target_type_to_pic_1_f_0(make__module_target__FileType_18);
          }
#line 938 "make.module_target.m"
          {
#line 938 "make.module_target.m"
            make__module_target__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
#line 938 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_3));
#line 938 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 938 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 938 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 4) = ((MR_Box) (make__module_target__V_65_65));
#line 938 "make.module_target.m"
          }
#line 937 "make.module_target.m"
          {
#line 937 "make.module_target.m"
            mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_1[4], make__module_target__TypeCtorInfo_120_120, make__module_target__V_63_63, make__module_target__ModuleImportsList_27, &make__module_target__ForeignCodeFileList_30, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_64_64);
          }
#line 4215 "make.module_target.c"
          make__module_target__TypeCtorInfo_128_128 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
#line 942 "make.module_target.m"
          {
#line 942 "make.module_target.m"
            make__module_target__V_69_69 = mercury__list__condense_1_f_0(make__module_target__TypeCtorInfo_128_128, make__module_target__ForeignCodeFileList_30);
          }
#line 941 "make.module_target.m"
          {
#line 941 "make.module_target.m"
            make__module_target__ForeignCodeFiles_31 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_128_128, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[12], make__module_target__V_69_69);
          }
#line 957 "make.module_target.m"
#line 957 "make.module_target.m"
          switch (make__module_target__CompilationTarget_28) {
#line 957 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 957 "make.module_target.m"
            case (MR_Integer) 0:
#line 944 "make.module_target.m"
              {
#line 944 "make.module_target.m"
                MR_Word make__module_target__HighLevelCode_33;

#line 945 "make.module_target.m"
                {
#line 945 "make.module_target.m"
                  libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 251, &make__module_target__HighLevelCode_33);
                }
#line 953 "make.module_target.m"
#line 953 "make.module_target.m"
                switch (make__module_target__HighLevelCode_33) {
#line 953 "make.module_target.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 953 "make.module_target.m"
                  case (MR_Integer) 0:
#line 955 "make.module_target.m"
                    make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 953 "make.module_target.m"
                    break;
#line 953 "make.module_target.m"
                  case (MR_Integer) 1:
#line 947 "make.module_target.m"
                    {
#line 951 "make.module_target.m"
                      {
#line 951 "make.module_target.m"
                        make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[9]));
                      }
#line 947 "make.module_target.m"
                    }
#line 953 "make.module_target.m"
                    break;
#line 953 "make.module_target.m"
                }
#line 944 "make.module_target.m"
              }
#line 957 "make.module_target.m"
              break;
#line 957 "make.module_target.m"
            case (MR_Integer) 1:
#line 957 "make.module_target.m"
            case (MR_Integer) 2:
#line 961 "make.module_target.m"
              make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "make.module_target.m"
              break;
#line 957 "make.module_target.m"
            case (MR_Integer) 3:
#line 963 "make.module_target.m"
              {
#line 966 "make.module_target.m"
                {
#line 966 "make.module_target.m"
                  make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
                }
#line 963 "make.module_target.m"
              }
#line 957 "make.module_target.m"
              break;
#line 957 "make.module_target.m"
          }
#line 976 "make.module_target.m"
#line 976 "make.module_target.m"
          switch (make__module_target__CompilationTarget_28) {
#line 976 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 976 "make.module_target.m"
            case (MR_Integer) 0:
#line 971 "make.module_target.m"
              {
#line 971 "make.module_target.m"
                MR_Word make__module_target__V_74_74;

#line 974 "make.module_target.m"
                {
#line 974 "make.module_target.m"
                  make__module_target__V_74_74 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[10]));
                }
#line 975 "make.module_target.m"
                {
#line 975 "make.module_target.m"
                  make__module_target__HeaderTargets_37 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_74_74, make__module_target__HeaderTargets0_35);
                }
#line 971 "make.module_target.m"
              }
#line 976 "make.module_target.m"
              break;
#line 976 "make.module_target.m"
            case (MR_Integer) 1:
#line 976 "make.module_target.m"
            case (MR_Integer) 3:
#line 976 "make.module_target.m"
            case (MR_Integer) 2:
#line 981 "make.module_target.m"
              make__module_target__HeaderTargets_37 = make__module_target__HeaderTargets0_35;
#line 976 "make.module_target.m"
              break;
#line 976 "make.module_target.m"
          }
#line 984 "make.module_target.m"
          {
#line 984 "make.module_target.m"
            make__module_target__TouchedTargetFiles0_38 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
#line 986 "make.module_target.m"
          {
#line 986 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TouchedTargetFiles0_38, make__module_target__HeaderTargets_37);
          }
#line 936 "make.module_target.m"
        }
#line 987 "make.module_target.m"
        break;
#line 987 "make.module_target.m"
      case (MR_Integer) 0:
#line 987 "make.module_target.m"
      case (MR_Integer) 5:
#line 987 "make.module_target.m"
      case (MR_Integer) 4:
#line 987 "make.module_target.m"
      case (MR_Integer) 3:
#line 987 "make.module_target.m"
      case (MR_Integer) 1:
#line 987 "make.module_target.m"
      case (MR_Integer) 7:
#line 1005 "make.module_target.m"
        {
#line 1006 "make.module_target.m"
          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "make.module_target.m"
          {
#line 1007 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
#line 1005 "make.module_target.m"
        }
#line 987 "make.module_target.m"
        break;
#line 987 "make.module_target.m"
      case (MR_Integer) 2:
#line 988 "make.module_target.m"
        {
#line 988 "make.module_target.m"
          MR_Word make__module_target__V_59_59;
#line 988 "make.module_target.m"
          MR_Word make__module_target__V_61_61;

#line 991 "make.module_target.m"
          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 993 "make.module_target.m"
          {
#line 993 "make.module_target.m"
            make__module_target__V_59_59 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
          }
#line 996 "make.module_target.m"
          {
#line 996 "make.module_target.m"
            make__module_target__V_61_61 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
#line 995 "make.module_target.m"
          {
#line 995 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_59_59, make__module_target__V_61_61);
          }
#line 988 "make.module_target.m"
        }
#line 987 "make.module_target.m"
        break;
#line 987 "make.module_target.m"
    }
#line 1009 "make.module_target.m"
    {
#line 1009 "make.module_target.m"
      make__module_target__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 0) = ((MR_Box) (&make__module_target_scalar_common_9[2]));
#line 1009 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_5));
#line 1009 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1009 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 1009 "make.module_target.m"
    }
#line 1009 "make.module_target.m"
    {
#line 1009 "make.module_target.m"
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, (MR_Word) &make__module_target_scalar_common_1[5], make__module_target__TypeCtorInfo_120_120, make__module_target__V_77_77, *make__module_target__TouchedTargetFiles_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__module_target__conv10_TimestampFileNames_39, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv9_STATE_VARIABLE_IO_43);
    }
#line 1009 "make.module_target.m"
    make__module_target__TimestampFileNames_39 = ((MR_Word) make__module_target__conv10_TimestampFileNames_39);
#line 1011 "make.module_target.m"
    {
#line 1011 "make.module_target.m"
      *make__module_target__TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ForeignCodeFiles_31, make__module_target__TimestampFileNames_39);
    }
#line 898 "make.module_target.m"
  }
#line 892 "make.module_target.m"
}

#line 860 "make.module_target.m"
static void MR_CALL 
make__module_target__touched_files_9_p_0(
#line 860 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 860 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 860 "make.module_target.m"
  MR_Word make__module_target__Task_12,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__TouchedTargetFiles_13,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__TouchedFileNames_14,
#line 860 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
#line 860 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_30)
#line 860 "make.module_target.m"
{
#line 867 "make.module_target.m"
  {
#line 867 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 867 "make.module_target.m"
#line 867 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__Task_12)) {
#line 867 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "make.module_target.m"
      case (MR_Integer) 0:
#line 867 "make.module_target.m"
        {
#line 867 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_12, (MR_Integer) 0)));

#line 868 "make.module_target.m"
          {
#line 868 "make.module_target.m"
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__ModuleTask_17, make__module_target__TouchedTargetFiles_13, make__module_target__TouchedFileNames_14, make__module_target__STATE_VARIABLE_Info_0_29, make__module_target__STATE_VARIABLE_Info_30);
#line 868 "make.module_target.m"
            return;
          }
#line 867 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 1:
#line 871 "make.module_target.m"
        {
#line 872 "make.module_target.m"
          {
#line 872 "make.module_target.m"
            MR_Word base;
#line 872 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 872 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 872 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "make.module_target.m"
          }
#line 873 "make.module_target.m"
          *make__module_target__TouchedFileNames_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 871 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 2:
#line 875 "make.module_target.m"
        {
#line 875 "make.module_target.m"
          MR_Word make__module_target__PIC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 0)));
#line 875 "make.module_target.m"
          MR_Word make__module_target__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 1)));
#line 875 "make.module_target.m"
          MR_Word make__module_target__ModuleName_21;
#line 875 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_23;
#line 875 "make.module_target.m"
          MR_String make__module_target__ForeignObjectFile_24;
#line 877 "make.module_target.m"
          MR_Word make__module_target__V_22_22;
#line 880 "make.module_target.m"
          MR_Word make__module_target__V_45_45;
#line 880 "make.module_target.m"
          MR_String make__module_target__V_46_46;

#line 876 "make.module_target.m"
          {
#line 876 "make.module_target.m"
            MR_Word base;
#line 876 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 876 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 876 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "make.module_target.m"
          }
#line 877 "make.module_target.m"
          make__module_target__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 877 "make.module_target.m"
          make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 878 "make.module_target.m"
          {
#line 878 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_21, make__module_target__PIC_19, make__module_target__Lang_20, &make__module_target__ForeignCodeFile_23);
          }
#line 880 "make.module_target.m"
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 0)));
#line 880 "make.module_target.m"
          make__module_target__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 1)));
#line 880 "make.module_target.m"
          make__module_target__ForeignObjectFile_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 2)));
#line 881 "make.module_target.m"
          {
#line 881 "make.module_target.m"
            MR_Word base;
#line 881 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make.module_target.m"
            *make__module_target__TouchedFileNames_14 = base;
#line 881 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_24));
#line 881 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "make.module_target.m"
          }
#line 875 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 875 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 3:
#line 883 "make.module_target.m"
        {
#line 883 "make.module_target.m"
          MR_String make__module_target__FactTableName_25 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 1)));
#line 883 "make.module_target.m"
          MR_String make__module_target__ObjExt_27;
#line 883 "make.module_target.m"
          MR_String make__module_target__FactTableObjectFile_28;
#line 883 "make.module_target.m"
          MR_Word make__module_target__PIC_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 0)));
#line 883 "make.module_target.m"
          MR_Word make__module_target__ModuleName_44;
#line 883 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_50;
#line 885 "make.module_target.m"
          MR_Word make__module_target__V_26_26;

#line 884 "make.module_target.m"
          {
#line 884 "make.module_target.m"
            MR_Word base;
#line 884 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "make.module_target.m"
            *make__module_target__TouchedTargetFiles_13 = base;
#line 884 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 884 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "make.module_target.m"
          }
#line 885 "make.module_target.m"
          make__module_target__ModuleName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 885 "make.module_target.m"
          make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 609 "make.module_target.m"
          {
#line 609 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_50);
          }
#line 613 "make.module_target.m"
#line 613 "make.module_target.m"
          switch (make__module_target__CompilationTarget_50) {
#line 613 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 613 "make.module_target.m"
            case (MR_Integer) 0:
#line 612 "make.module_target.m"
              {
#line 612 "make.module_target.m"
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_10, make__module_target__PIC_43, &make__module_target__ObjExt_27);
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 1:
#line 614 "make.module_target.m"
              {
#line 615 "make.module_target.m"
                {
#line 615 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 615 "make.module_target.m"
                  return;
                }
#line 614 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 3:
#line 620 "make.module_target.m"
              {
#line 621 "make.module_target.m"
                {
#line 621 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 621 "make.module_target.m"
                  return;
                }
#line 620 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 2:
#line 617 "make.module_target.m"
              {
#line 618 "make.module_target.m"
                {
#line 618 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 618 "make.module_target.m"
                  return;
                }
#line 617 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
          }
#line 887 "make.module_target.m"
          {
#line 887 "make.module_target.m"
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_10, make__module_target__ModuleName_44, make__module_target__FactTableName_25, make__module_target__ObjExt_27, (MR_Integer) 0, &make__module_target__FactTableObjectFile_28);
          }
#line 889 "make.module_target.m"
          {
#line 889 "make.module_target.m"
            MR_Word base;
#line 889 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "make.module_target.m"
            *make__module_target__TouchedFileNames_14 = base;
#line 889 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_28));
#line 889 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "make.module_target.m"
          }
#line 883 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
#line 883 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
    }
#line 867 "make.module_target.m"
  }
#line 860 "make.module_target.m"
}

#line 850 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__get_pic_flags_1_f_0(
#line 850 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1)
#line 850 "make.module_target.m"
{
#line 854 "make.module_target.m"
  {
#line 854 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 854 "make.module_target.m"
    MR_Word make__module_target__HeadVar__2_2;

#line 854 "make.module_target.m"
#line 854 "make.module_target.m"
    switch (make__module_target__HeadVar__1_1) {
#line 854 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 854 "make.module_target.m"
      case (MR_Integer) 1:
#line 855 "make.module_target.m"
        {
#line 855 "make.module_target.m"
          make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[28]);
#line 855 "make.module_target.m"
        }
#line 854 "make.module_target.m"
        break;
#line 854 "make.module_target.m"
      case (MR_Integer) 2:
#line 856 "make.module_target.m"
        make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "make.module_target.m"
        break;
#line 854 "make.module_target.m"
      case (MR_Integer) 0:
#line 854 "make.module_target.m"
        {
#line 854 "make.module_target.m"
          make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[28]);
#line 854 "make.module_target.m"
        }
#line 854 "make.module_target.m"
        break;
#line 854 "make.module_target.m"
    }
#line 854 "make.module_target.m"
    return make__module_target__HeadVar__2_2;
#line 854 "make.module_target.m"
  }
#line 850 "make.module_target.m"
}

#line 790 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
#line 790 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 790 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 790 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 790 "make.module_target.m"
{
#line 790 "make.module_target.m"
  {
#line 790 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 790 "make.module_target.m"
    {
#line 790 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__delete_timestamp__790__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))));
#line 790 "make.module_target.m"
      return;
    }
#line 790 "make.module_target.m"
  }
#line 790 "make.module_target.m"
}

#line 785 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
#line 785 "make.module_target.m"
  MR_Word make__module_target__Globals_5,
#line 785 "make.module_target.m"
  MR_String make__module_target__TouchedFile_6,
#line 785 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
#line 785 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10)
#line 785 "make.module_target.m"
{
#line 788 "make.module_target.m"
  {
#line 788 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 789 "make.module_target.m"
    MR_Word make__module_target__V_12_12;

#line 790 "make.module_target.m"
    {
#line 790 "make.module_target.m"
      make__module_target__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 790 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
#line 790 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
#line 790 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 790 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 3) = ((MR_Box) (make__module_target__TouchedFile_6));
#line 790 "make.module_target.m"
    }
#line 790 "make.module_target.m"
    {
#line 790 "make.module_target.m"
      make__util__debug_make_msg_4_p_0(make__module_target__Globals_5, make__module_target__V_12_12);
    }
#line 797 "make.module_target.m"
    {
#line 797 "make.module_target.m"
      mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[1], ((MR_Box) (make__module_target__TouchedFile_6)), make__module_target__STATE_VARIABLE_Timestamps_0_9, make__module_target__STATE_VARIABLE_Timestamps_10);
#line 797 "make.module_target.m"
      return;
    }
#line 788 "make.module_target.m"
  }
#line 785 "make.module_target.m"
}

#line 774 "make.module_target.m"
static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
#line 774 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 774 "make.module_target.m"
  MR_String make__module_target__FileName_7,
#line 774 "make.module_target.m"
  MR_Word make__module_target__HeadVar__3_8,
#line 774 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
#line 774 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
#line 774 "make.module_target.m"
{
#line 781 "make.module_target.m"
  {
#line 781 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 781 "make.module_target.m"
    {
#line 781 "make.module_target.m"
      make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
#line 781 "make.module_target.m"
      return;
    }
#line 781 "make.module_target.m"
  }
#line 774 "make.module_target.m"
}

#line 767 "make.module_target.m"
static void MR_CALL 
make__module_target__update_target_status_4_p_0(
#line 767 "make.module_target.m"
  MR_Word make__module_target__TargetStatus_5,
#line 767 "make.module_target.m"
  MR_Word make__module_target__TargetFile_6,
#line 767 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
#line 767 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_10)
#line 767 "make.module_target.m"
{
#line 770 "make.module_target.m"
  {
#line 770 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 770 "make.module_target.m"
    MR_Word make__module_target__Dep_8;
#line 770 "make.module_target.m"
    MR_Word make__module_target__V_12_12;
#line 770 "make.module_target.m"
    MR_Word make__module_target__V_13_13;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_14_14;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_15_15;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_16_16;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_17_17;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_18_18;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_19_19;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_20_20;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_21_21;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_22_22;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_23_23;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_24_24;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_25_25;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_26_26;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_27_27;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_29_29;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_30_30;
#line 772 "make.module_target.m"
    MR_Integer make__module_target__V_31_31;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_32_32;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_33_33;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_34_34;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_35_35;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_36_36;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_37_37;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_38_38;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_39_39;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_40_40;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_42_42;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_43_43;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_44_44;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_47_47;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_48_48;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 772 "make.module_target.m"
    MR_Integer make__module_target__V_51_51;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_52_52;
#line 772 "make.module_target.m"
    MR_Word make__module_target__V_41_41;

#line 771 "make.module_target.m"
    {
#line 771 "make.module_target.m"
      make__module_target__Dep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 771 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Dep_8, 0) = ((MR_Box) (make__module_target__TargetFile_6));
#line 771 "make.module_target.m"
    }
#line 772 "make.module_target.m"
    make__module_target__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 772 "make.module_target.m"
    make__module_target__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 772 "make.module_target.m"
    make__module_target__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 772 "make.module_target.m"
    make__module_target__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 772 "make.module_target.m"
    make__module_target__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 772 "make.module_target.m"
    make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 772 "make.module_target.m"
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 772 "make.module_target.m"
    make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 772 "make.module_target.m"
    make__module_target__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
#line 772 "make.module_target.m"
    make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
#line 772 "make.module_target.m"
    make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
#line 772 "make.module_target.m"
    make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
#line 772 "make.module_target.m"
    make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
#line 772 "make.module_target.m"
    make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
#line 772 "make.module_target.m"
    make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
#line 772 "make.module_target.m"
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
#line 772 "make.module_target.m"
    make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
#line 772 "make.module_target.m"
    make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
#line 772 "make.module_target.m"
    make__module_target__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
#line 772 "make.module_target.m"
    make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
#line 772 "make.module_target.m"
    {
#line 772 "make.module_target.m"
      make__module_target__V_13_13 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_8)), make__module_target__V_12_12, ((MR_Box) (make__module_target__TargetStatus_5)));
    }
#line 772 "make.module_target.m"
    make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 772 "make.module_target.m"
    make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 772 "make.module_target.m"
    make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 772 "make.module_target.m"
    make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 772 "make.module_target.m"
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 772 "make.module_target.m"
    make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 772 "make.module_target.m"
    make__module_target__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 772 "make.module_target.m"
    make__module_target__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 772 "make.module_target.m"
    make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
#line 772 "make.module_target.m"
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
#line 772 "make.module_target.m"
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
#line 772 "make.module_target.m"
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
#line 772 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
#line 772 "make.module_target.m"
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
#line 772 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
#line 772 "make.module_target.m"
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
#line 772 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
#line 772 "make.module_target.m"
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
#line 772 "make.module_target.m"
    make__module_target__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
#line 772 "make.module_target.m"
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
#line 772 "make.module_target.m"
    {
#line 772 "make.module_target.m"
      MR_Word base;
#line 772 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Info_10 = base;
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_33_33));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_34_34));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_35_35));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_36_36));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_37_37));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_38_38));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_39_39));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_40_40));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_13_13));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_42_42));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_43_43));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_44_44));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_45_45));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_46_46));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_47_47));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_48_48));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_49_49));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_50_50));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_51_51));
#line 772 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_52_52));
#line 772 "make.module_target.m"
    }
#line 770 "make.module_target.m"
  }
#line 767 "make.module_target.m"
}

#line 758 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
#line 758 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 758 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 758 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 758 "make.module_target.m"
{
#line 758 "make.module_target.m"
  {
#line 758 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 758 "make.module_target.m"
    MR_Word make__module_target__conv9_STATE_VARIABLE_Timestamps_11;

#line 758 "make.module_target.m"
    {
#line 758 "make.module_target.m"
      make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_STATE_VARIABLE_Timestamps_11);
    }
#line 758 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_STATE_VARIABLE_Timestamps_11));
#line 758 "make.module_target.m"
  }
#line 758 "make.module_target.m"
}

#line 748 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
#line 748 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 748 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 748 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 748 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 748 "make.module_target.m"
{
#line 748 "make.module_target.m"
  {
#line 748 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 748 "make.module_target.m"
    MR_Word make__module_target__conv6_STATE_VARIABLE_Timestamps_10;

#line 748 "make.module_target.m"
    {
#line 748 "make.module_target.m"
      make__module_target__delete_timestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv6_STATE_VARIABLE_Timestamps_10);
    }
#line 748 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv6_STATE_VARIABLE_Timestamps_10));
#line 748 "make.module_target.m"
  }
#line 748 "make.module_target.m"
}

#line 743 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
#line 743 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 743 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 743 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 743 "make.module_target.m"
{
#line 743 "make.module_target.m"
  {
#line 743 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 743 "make.module_target.m"
    MR_String make__module_target__conv3_HeadVar__4_4;
#line 743 "make.module_target.m"
    MR_Word make__module_target__conv2_HeadVar__6_6;

#line 743 "make.module_target.m"
    {
#line 743 "make.module_target.m"
      make__util__get_file_name_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv3_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_HeadVar__6_6);
    }
#line 743 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv3_HeadVar__4_4));
#line 743 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_HeadVar__6_6));
#line 743 "make.module_target.m"
  }
#line 743 "make.module_target.m"
}

#line 741 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
#line 741 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 741 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 741 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 741 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 741 "make.module_target.m"
{
#line 741 "make.module_target.m"
  {
#line 741 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 741 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

#line 741 "make.module_target.m"
    {
#line 741 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
#line 741 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
#line 741 "make.module_target.m"
  }
#line 741 "make.module_target.m"
}

#line 726 "make.module_target.m"
static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
#line 726 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 726 "make.module_target.m"
  MR_Word make__module_target__Succeeded_11,
#line 726 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 726 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_13,
#line 726 "make.module_target.m"
  MR_Word make__module_target__OtherTouchedFiles_14,
#line 726 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
#line 726 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_22)
#line 726 "make.module_target.m"
{
#line 731 "make.module_target.m"
  {
#line 731 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_84_84;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_85_85;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_92_92;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TypeInfo_97_97;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TargetStatus_17;
#line 731 "make.module_target.m"
    MR_Word make__module_target__TouchedTargetFileNames_18;
#line 731 "make.module_target.m"
    MR_Word make__module_target__V_26_26;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_27_27;
#line 731 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_29_29;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_32_32;
#line 731 "make.module_target.m"
    MR_Word make__module_target__V_33_33;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_34_34;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_36_36;
#line 731 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_40_40;
#line 741 "make.module_target.m"
    MR_Box make__module_target__conv1_STATE_VARIABLE_Info_27_27;
#line 743 "make.module_target.m"
    MR_Box make__module_target__conv5_STATE_VARIABLE_Info_29_29;
#line 743 "make.module_target.m"
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_24;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_42_42;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_43_43;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_44_44;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_47_47;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_48_48;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_49_49;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_50_50;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_51_51;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_52_52;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_53_53;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_54_54;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_55_55;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_56_56;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_57_57;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_58_58;
#line 747 "make.module_target.m"
    MR_Integer make__module_target__V_59_59;
#line 747 "make.module_target.m"
    MR_Word make__module_target__V_60_60;
#line 748 "make.module_target.m"
    MR_Box make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34;
#line 750 "make.module_target.m"
    MR_Box make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36;
#line 757 "make.module_target.m"
    MR_Word make__module_target__V_37_37;
#line 757 "make.module_target.m"
    MR_Word make__module_target__V_20_20;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_61_61;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_63_63;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_64_64;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_65_65;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_66_66;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_67_67;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_68_68;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_69_69;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_70_70;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_71_71;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_72_72;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_73_73;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_74_74;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_75_75;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_76_76;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_77_77;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_78_78;
#line 764 "make.module_target.m"
    MR_Integer make__module_target__V_79_79;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_80_80;
#line 764 "make.module_target.m"
    MR_Word make__module_target__V_62_62;

#line 735 "make.module_target.m"
#line 735 "make.module_target.m"
    switch (make__module_target__Succeeded_11) {
#line 735 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 735 "make.module_target.m"
      case (MR_Integer) 0:
#line 736 "make.module_target.m"
        {
#line 737 "make.module_target.m"
          make__module_target__TargetStatus_17 = (MR_Integer) 3;
#line 738 "make.module_target.m"
          {
#line 738 "make.module_target.m"
            make__util__target_file_error_5_p_0(make__module_target__STATE_VARIABLE_Info_0_21, make__module_target__Globals_10, make__module_target__TargetFile_12);
          }
#line 736 "make.module_target.m"
        }
#line 735 "make.module_target.m"
        break;
#line 735 "make.module_target.m"
      case (MR_Integer) 1:
#line 734 "make.module_target.m"
        make__module_target__TargetStatus_17 = (MR_Integer) 2;
#line 735 "make.module_target.m"
        break;
#line 735 "make.module_target.m"
    }
#line 741 "make.module_target.m"
    {
#line 741 "make.module_target.m"
      make__module_target__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
#line 741 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_1));
#line 741 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 3) = ((MR_Box) (make__module_target__TargetStatus_17));
#line 741 "make.module_target.m"
    }
#line 5458 "make.module_target.c"
    make__module_target__TypeCtorInfo_84_84 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 5460 "make.module_target.c"
    make__module_target__TypeCtorInfo_85_85 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 741 "make.module_target.m"
    {
#line 741 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_85_85, make__module_target__V_26_26, make__module_target__TouchedTargetFiles_13, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_21)), &make__module_target__conv1_STATE_VARIABLE_Info_27_27);
    }
#line 741 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_27_27 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_27_27);
#line 743 "make.module_target.m"
    {
#line 743 "make.module_target.m"
      make__module_target__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 743 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 0) = ((MR_Box) (&make__module_target_scalar_common_10[3]));
#line 743 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_2));
#line 743 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 743 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 4) = ((MR_Box) ((MR_Integer) 1));
#line 743 "make.module_target.m"
    }
#line 5485 "make.module_target.c"
    make__module_target__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 743 "make.module_target.m"
    {
#line 743 "make.module_target.m"
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_92_92, make__module_target__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_28_28, make__module_target__TouchedTargetFiles_13, &make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_27_27)), &make__module_target__conv5_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_24);
    }
#line 743 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_29_29);
#line 747 "make.module_target.m"
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 747 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 747 "make.module_target.m"
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 747 "make.module_target.m"
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 747 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 747 "make.module_target.m"
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 747 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 747 "make.module_target.m"
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 747 "make.module_target.m"
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 747 "make.module_target.m"
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 747 "make.module_target.m"
    make__module_target__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 747 "make.module_target.m"
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 747 "make.module_target.m"
    make__module_target__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 747 "make.module_target.m"
    make__module_target__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 747 "make.module_target.m"
    make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 747 "make.module_target.m"
    make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 747 "make.module_target.m"
    make__module_target__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 747 "make.module_target.m"
    make__module_target__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 747 "make.module_target.m"
    make__module_target__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 747 "make.module_target.m"
    make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 748 "make.module_target.m"
    {
#line 748 "make.module_target.m"
      make__module_target__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 748 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
#line 748 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_3));
#line 748 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 748 "make.module_target.m"
    }
#line 5548 "make.module_target.c"
    make__module_target__TypeInfo_97_97 = (MR_Word) &make__module_target_scalar_common_2[2];
#line 748 "make.module_target.m"
    {
#line 748 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_32_32)), &make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
    }
#line 748 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_34_34 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
#line 750 "make.module_target.m"
    {
#line 750 "make.module_target.m"
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__OtherTouchedFiles_14, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_34_34)), &make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
    }
#line 750 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Timestamps_36_36 = ((MR_Word) make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
#line 757 "make.module_target.m"
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
#line 757 "make.module_target.m"
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));
#line 757 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 760 "make.module_target.m"
    if (make__module_target__succeeded)
#line 758 "make.module_target.m"
      {
#line 758 "make.module_target.m"
        MR_Word make__module_target__V_38_38;
#line 758 "make.module_target.m"
        MR_Box make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40;

#line 758 "make.module_target.m"
        {
#line 758 "make.module_target.m"
          make__module_target__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 0) = ((MR_Box) (&make__module_target_scalar_common_15[1]));
#line 758 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_4));
#line 758 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "make.module_target.m"
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 758 "make.module_target.m"
        }
#line 758 "make.module_target.m"
        {
#line 758 "make.module_target.m"
          mercury__map__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, (MR_Word) &make__module_target_scalar_common_2[1], make__module_target__TypeInfo_97_97, make__module_target__V_38_38, make__module_target__STATE_VARIABLE_Timestamps_36_36, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_36_36)), &make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
        }
#line 758 "make.module_target.m"
        make__module_target__STATE_VARIABLE_Timestamps_40_40 = ((MR_Word) make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
#line 758 "make.module_target.m"
      }
#line 760 "make.module_target.m"
    else
#line 760 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Timestamps_40_40 = make__module_target__STATE_VARIABLE_Timestamps_36_36;
#line 764 "make.module_target.m"
    make__module_target__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 764 "make.module_target.m"
    make__module_target__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 764 "make.module_target.m"
    make__module_target__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 764 "make.module_target.m"
    make__module_target__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 764 "make.module_target.m"
    make__module_target__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 764 "make.module_target.m"
    make__module_target__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 764 "make.module_target.m"
    make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 764 "make.module_target.m"
    make__module_target__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 764 "make.module_target.m"
    make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 764 "make.module_target.m"
    make__module_target__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 764 "make.module_target.m"
    make__module_target__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 764 "make.module_target.m"
    make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 764 "make.module_target.m"
    make__module_target__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 764 "make.module_target.m"
    make__module_target__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 764 "make.module_target.m"
    make__module_target__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 764 "make.module_target.m"
    make__module_target__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 764 "make.module_target.m"
    make__module_target__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 764 "make.module_target.m"
    make__module_target__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 764 "make.module_target.m"
    make__module_target__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 764 "make.module_target.m"
    make__module_target__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 764 "make.module_target.m"
    {
#line 764 "make.module_target.m"
      MR_Word base;
#line 764 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 764 "make.module_target.m"
      *make__module_target__STATE_VARIABLE_Info_22 = base;
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_61_61));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_40_40));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_63_63));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_64_64));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_65_65));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_66_66));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_67_67));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_68_68));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_69_69));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_70_70));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_71_71));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_72_72));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_73_73));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_74_74));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_75_75));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_76_76));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_77_77));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_78_78));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_79_79));
#line 764 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_80_80));
#line 764 "make.module_target.m"
    }
#line 731 "make.module_target.m"
  }
#line 726 "make.module_target.m"
}

#line 684 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
#line 684 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 684 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 684 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 684 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 684 "make.module_target.m"
{
#line 684 "make.module_target.m"
  {
#line 684 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 684 "make.module_target.m"
    {
#line 684 "make.module_target.m"
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
#line 684 "make.module_target.m"
      return;
    }
#line 684 "make.module_target.m"
  }
#line 684 "make.module_target.m"
}

#line 664 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
#line 664 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 664 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 664 "make.module_target.m"
{
#line 664 "make.module_target.m"
  {
#line 664 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 664 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 664 "make.module_target.m"
    MR_String make__module_target__conv0_HeadVar__2_2;

#line 664 "make.module_target.m"
    {
#line 664 "make.module_target.m"
      make__module_target__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
#line 664 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_HeadVar__2_2));
#line 664 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 664 "make.module_target.m"
  }
#line 664 "make.module_target.m"
}

#line 637 "make.module_target.m"
static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
#line 637 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 637 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_9,
#line 637 "make.module_target.m"
  MR_Word make__module_target__MaybeArgFileName_10,
#line 637 "make.module_target.m"
  MR_Word make__module_target__Args_11,
#line 637 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12)
#line 637 "make.module_target.m"
{
#line 640 "make.module_target.m"
  {
#line 640 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 640 "make.module_target.m"
    MR_Word make__module_target__TypeCtorInfo_61_61;
#line 640 "make.module_target.m"
    MR_String make__module_target__ProgName_14;
#line 640 "make.module_target.m"
    MR_String make__module_target__MercuryCompiler_16;
#line 640 "make.module_target.m"
    MR_Word make__module_target__QuotedArgs_17;
#line 640 "make.module_target.m"
    MR_String make__module_target__ArgFileName_18;
#line 640 "make.module_target.m"
    MR_Word make__module_target__ArgFileOpenRes_19;
#line 703 "make.module_target.m"
    MR_Word make__module_target__V_25_25;

#line 641 "make.module_target.m"
    {
#line 641 "make.module_target.m"
      mercury__io__progname_4_p_0((MR_String) "", &make__module_target__ProgName_14);
    }
#line 649 "make.module_target.m"
    make__module_target__succeeded = (strcmp(make__module_target__ProgName_14, (MR_String) "") == 0);
#line 650 "make.module_target.m"
    if (!(make__module_target__succeeded))
#line 715 "make.module_target.m"
      {
#line 715 "make.module_target.m"
        make__module_target__succeeded = mercury__builtin__semidet_fail_0_p_0();
      }
#line 660 "make.module_target.m"
    if (make__module_target__succeeded)
#line 653 "make.module_target.m"
      {
#line 653 "make.module_target.m"
        MR_Word make__module_target__MaybeMercuryCompiler_15;

#line 653 "make.module_target.m"
        {
#line 653 "make.module_target.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &make__module_target__MaybeMercuryCompiler_15);
        }
#line 656 "make.module_target.m"
        if ((make__module_target__MaybeMercuryCompiler_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "make.module_target.m"
          make__module_target__MercuryCompiler_16 = (MR_String) "mmc";
#line 656 "make.module_target.m"
        else
#line 655 "make.module_target.m"
          make__module_target__MercuryCompiler_16 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeMercuryCompiler_15, (MR_Integer) 0)));
#line 653 "make.module_target.m"
      }
#line 660 "make.module_target.m"
    else
#line 661 "make.module_target.m"
      make__module_target__MercuryCompiler_16 = make__module_target__ProgName_14;
#line 5837 "make.module_target.c"
    make__module_target__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 664 "make.module_target.m"
    {
#line 664 "make.module_target.m"
      make__module_target__QuotedArgs_17 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_61_61, make__module_target__TypeCtorInfo_61_61, (MR_Word) &make__module_target_scalar_common_2[9], make__module_target__Args_11);
    }
#line 675 "make.module_target.m"
    if ((make__module_target__MaybeArgFileName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "make.module_target.m"
      {
#line 677 "make.module_target.m"
        {
#line 677 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.invoke_mmc\'/7", (MR_String) "argument file not created");
#line 677 "make.module_target.m"
          return;
        }
#line 676 "make.module_target.m"
      }
#line 675 "make.module_target.m"
    else
#line 674 "make.module_target.m"
      make__module_target__ArgFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_10, (MR_Integer) 0)));
#line 680 "make.module_target.m"
    {
#line 680 "make.module_target.m"
      mercury__io__open_output_4_p_0(make__module_target__ArgFileName_18, &make__module_target__ArgFileOpenRes_19);
    }
#line 696 "make.module_target.m"
    if (((MR_tag((MR_Word) make__module_target__ArgFileOpenRes_19)) == (MR_mktag((MR_Integer) 1))))
#line 697 "make.module_target.m"
      {
#line 697 "make.module_target.m"
        MR_Word make__module_target__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
#line 697 "make.module_target.m"
        MR_String make__module_target__ErrorMsg_24;
#line 697 "make.module_target.m"
        MR_String make__module_target__V_70_70;
#line 697 "make.module_target.m"
        MR_Word make__module_target__V_76_76;
#line 697 "make.module_target.m"
        MR_String make__module_target__V_80_80;

#line 698 "make.module_target.m"
        *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 699 "make.module_target.m"
        {
#line 699 "make.module_target.m"
          mercury__io__error_message_2_p_0(make__module_target__Error_23, &make__module_target__ErrorMsg_24);
        }
#line 700 "make.module_target.m"
        {
#line 700 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
        }
#line 5893 "make.module_target.c"
        make__module_target__V_76_76 = (MR_Word) &make__module_target_scalar_common_3[8];
#line 701 "make.module_target.m"
        {
#line 701 "make.module_target.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_target__V_76_76, make__module_target__ArgFileName_18, &make__module_target__V_70_70);
        }
#line 701 "make.module_target.m"
        {
#line 701 "make.module_target.m"
          mercury__io__write_string_3_p_0(make__module_target__V_70_70);
        }
#line 700 "make.module_target.m"
        {
#line 700 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
        }
#line 701 "make.module_target.m"
        {
#line 701 "make.module_target.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_target__V_76_76, make__module_target__ErrorMsg_24, &make__module_target__V_80_80);
        }
#line 701 "make.module_target.m"
        {
#line 701 "make.module_target.m"
          mercury__io__write_string_3_p_0(make__module_target__V_80_80);
        }
#line 700 "make.module_target.m"
        {
#line 700 "make.module_target.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 697 "make.module_target.m"
      }
#line 696 "make.module_target.m"
    else
#line 682 "make.module_target.m"
      {
#line 682 "make.module_target.m"
        MR_Word make__module_target__ArgFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
#line 682 "make.module_target.m"
        MR_String make__module_target__Command_21;
#line 682 "make.module_target.m"
        MR_Word make__module_target__V_52_52;
#line 682 "make.module_target.m"
        MR_String make__module_target__V_53_53;
#line 682 "make.module_target.m"
        MR_Word make__module_target__V_54_54;
#line 682 "make.module_target.m"
        MR_Word make__module_target__V_56_56;
#line 682 "make.module_target.m"
        MR_String make__module_target__V_57_57;

#line 683 "make.module_target.m"
        {
#line 683 "make.module_target.m"
          mercury__io__write_string_4_p_0(make__module_target__ArgFileStream_20, (MR_String) "MCFLAGS = ");
        }
#line 684 "make.module_target.m"
        {
#line 684 "make.module_target.m"
          mercury__io__write_list_6_p_0(make__module_target__TypeCtorInfo_61_61, make__module_target__ArgFileStream_20, make__module_target__QuotedArgs_17, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[10]);
        }
#line 685 "make.module_target.m"
        {
#line 685 "make.module_target.m"
          mercury__io__nl_3_p_0(make__module_target__ArgFileStream_20);
        }
#line 686 "make.module_target.m"
        {
#line 686 "make.module_target.m"
          mercury__io__close_output_3_p_0(make__module_target__ArgFileStream_20);
        }
#line 689 "make.module_target.m"
        {
#line 689 "make.module_target.m"
          make__module_target__V_53_53 = libs__options__quote_arg_1_f_0(make__module_target__MercuryCompiler_16);
        }
#line 690 "make.module_target.m"
        {
#line 690 "make.module_target.m"
          make__module_target__V_57_57 = libs__options__quote_arg_1_f_0(make__module_target__ArgFileName_18);
        }
#line 690 "make.module_target.m"
        {
#line 690 "make.module_target.m"
          make__module_target__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 0) = ((MR_Box) (make__module_target__V_57_57));
#line 690 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "make.module_target.m"
        }
#line 690 "make.module_target.m"
        {
#line 690 "make.module_target.m"
          make__module_target__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 0) = ((MR_Box) ((MR_String) "--arg-file"));
#line 690 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 1) = ((MR_Box) (make__module_target__V_56_56));
#line 690 "make.module_target.m"
        }
#line 689 "make.module_target.m"
        {
#line 689 "make.module_target.m"
          make__module_target__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 0) = ((MR_Box) (make__module_target__V_53_53));
#line 689 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 1) = ((MR_Box) (make__module_target__V_54_54));
#line 689 "make.module_target.m"
        }
#line 688 "make.module_target.m"
        {
#line 688 "make.module_target.m"
          make__module_target__Command_21 = mercury__string__join_list_2_f_0((MR_String) " ", make__module_target__V_52_52);
        }
#line 694 "make.module_target.m"
        {
#line 694 "make.module_target.m"
          parse_tree__module_cmds__invoke_system_command_7_p_0(make__module_target__Globals_8, make__module_target__ErrorStream_9, (MR_Integer) 0, make__module_target__Command_21, make__module_target__Succeeded_12);
        }
#line 682 "make.module_target.m"
      }
#line 703 "make.module_target.m"
    {
#line 703 "make.module_target.m"
      mercury__io__remove_file_4_p_0(make__module_target__ArgFileName_18, &make__module_target__V_25_25);
    }
#line 640 "make.module_target.m"
  }
#line 637 "make.module_target.m"
}

#line 626 "make.module_target.m"
static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
#line 626 "make.module_target.m"
  MR_Word make__module_target__Globals_6,
#line 626 "make.module_target.m"
  MR_Word make__module_target__Args_7,
#line 626 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_8)
#line 626 "make.module_target.m"
{
#line 629 "make.module_target.m"
  {
#line 629 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 629 "make.module_target.m"
    MR_Integer make__module_target__Status0_10;
#line 629 "make.module_target.m"
    MR_Integer make__module_target__Status_11;

#line 630 "make.module_target.m"
    {
#line 630 "make.module_target.m"
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status0_10);
    }
#line 631 "make.module_target.m"
    {
#line 631 "make.module_target.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
    }
#line 632 "make.module_target.m"
    {
#line 632 "make.module_target.m"
      top_level__mercury_compile__main_for_make_4_p_0(make__module_target__Globals_6, make__module_target__Args_7);
    }
#line 633 "make.module_target.m"
    {
#line 633 "make.module_target.m"
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status_11);
    }
#line 634 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__Status_11 == (MR_Integer) 0);
#line 634 "make.module_target.m"
    if (make__module_target__succeeded)
#line 634 "make.module_target.m"
      *make__module_target__Succeeded_8 = (MR_Integer) 1;
#line 634 "make.module_target.m"
    else
#line 634 "make.module_target.m"
      *make__module_target__Succeeded_8 = (MR_Integer) 0;
#line 635 "make.module_target.m"
    {
#line 635 "make.module_target.m"
      mercury__io__set_exit_status_3_p_0(make__module_target__Status0_10);
#line 635 "make.module_target.m"
      return;
    }
#line 629 "make.module_target.m"
  }
#line 626 "make.module_target.m"
}

#line 594 "make.module_target.m"
static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
#line 594 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 594 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 594 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 594 "make.module_target.m"
  MR_String make__module_target__FactTableName_11,
#line 594 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12)
#line 594 "make.module_target.m"
{
#line 598 "make.module_target.m"
  {
#line 598 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 598 "make.module_target.m"
    MR_String make__module_target__ObjExt_14;
#line 598 "make.module_target.m"
    MR_String make__module_target__CFile_15;
#line 598 "make.module_target.m"
    MR_String make__module_target__ObjFile_16;
#line 598 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_28;

#line 609 "make.module_target.m"
    {
#line 609 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_28);
    }
#line 613 "make.module_target.m"
#line 613 "make.module_target.m"
    switch (make__module_target__CompilationTarget_28) {
#line 613 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 613 "make.module_target.m"
      case (MR_Integer) 0:
#line 612 "make.module_target.m"
        {
#line 612 "make.module_target.m"
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_14);
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 1:
#line 614 "make.module_target.m"
        {
#line 615 "make.module_target.m"
          {
#line 615 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 615 "make.module_target.m"
            return;
          }
#line 614 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 3:
#line 620 "make.module_target.m"
        {
#line 621 "make.module_target.m"
          {
#line 621 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 621 "make.module_target.m"
            return;
          }
#line 620 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 2:
#line 617 "make.module_target.m"
        {
#line 618 "make.module_target.m"
          {
#line 618 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 618 "make.module_target.m"
            return;
          }
#line 617 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
    }
#line 600 "make.module_target.m"
    {
#line 600 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, (MR_String) ".c", (MR_Integer) 0, &make__module_target__CFile_15);
    }
#line 602 "make.module_target.m"
    {
#line 602 "make.module_target.m"
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, make__module_target__ObjExt_14, (MR_Integer) 0, &make__module_target__ObjFile_16);
    }
#line 604 "make.module_target.m"
    {
#line 604 "make.module_target.m"
      MR_Word base;
#line 604 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 604 "make.module_target.m"
      *make__module_target__ForeignCodeFile_12 = base;
#line 604 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 604 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__CFile_15));
#line 604 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFile_16));
#line 604 "make.module_target.m"
    }
#line 598 "make.module_target.m"
  }
#line 594 "make.module_target.m"
}

#line 574 "make.module_target.m"
static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
#line 574 "make.module_target.m"
  MR_Word make__module_target__Globals_8,
#line 574 "make.module_target.m"
  MR_Word make__module_target__ModuleName_9,
#line 574 "make.module_target.m"
  MR_Word make__module_target__PIC_10,
#line 574 "make.module_target.m"
  MR_Word make__module_target__Lang_11,
#line 574 "make.module_target.m"
  MR_Word * make__module_target__ForeignCodeFile_12)
#line 574 "make.module_target.m"
{
#line 577 "make.module_target.m"
  {
#line 577 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 577 "make.module_target.m"
    MR_Word make__module_target__ForeignModName_16;
#line 577 "make.module_target.m"
    MR_String make__module_target__SrcExt_17;
#line 577 "make.module_target.m"
    MR_String make__module_target__ObjExt_18;
#line 577 "make.module_target.m"
    MR_String make__module_target__SrcFileName_19;
#line 577 "make.module_target.m"
    MR_String make__module_target__ObjFileName_20;
#line 577 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_33;
#line 584 "make.module_target.m"
    MR_Word make__module_target__ForeignModName0_14;
#line 584 "make.module_target.m"
    MR_String make__module_target__SrcExt0_15;

#line 579 "make.module_target.m"
    {
#line 579 "make.module_target.m"
      make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__module_target__ModuleName_9, make__module_target__Lang_11, &make__module_target__ForeignModName0_14);
    }
#line 579 "make.module_target.m"
    if (make__module_target__succeeded)
#line 580 "make.module_target.m"
      {
#line 580 "make.module_target.m"
        make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(make__module_target__Lang_11, &make__module_target__SrcExt0_15);
      }
#line 584 "make.module_target.m"
    if (make__module_target__succeeded)
#line 582 "make.module_target.m"
      {
#line 582 "make.module_target.m"
        make__module_target__ForeignModName_16 = make__module_target__ForeignModName0_14;
#line 583 "make.module_target.m"
        make__module_target__SrcExt_17 = make__module_target__SrcExt0_15;
#line 582 "make.module_target.m"
      }
#line 584 "make.module_target.m"
    else
#line 585 "make.module_target.m"
      {
#line 585 "make.module_target.m"
        {
#line 585 "make.module_target.m"
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
#line 585 "make.module_target.m"
          return;
        }
#line 585 "make.module_target.m"
      }
#line 609 "make.module_target.m"
    {
#line 609 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_33);
    }
#line 613 "make.module_target.m"
#line 613 "make.module_target.m"
    switch (make__module_target__CompilationTarget_33) {
#line 613 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 613 "make.module_target.m"
      case (MR_Integer) 0:
#line 612 "make.module_target.m"
        {
#line 612 "make.module_target.m"
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_18);
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 1:
#line 614 "make.module_target.m"
        {
#line 615 "make.module_target.m"
          {
#line 615 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 615 "make.module_target.m"
            return;
          }
#line 614 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 3:
#line 620 "make.module_target.m"
        {
#line 621 "make.module_target.m"
          {
#line 621 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 621 "make.module_target.m"
            return;
          }
#line 620 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
      case (MR_Integer) 2:
#line 617 "make.module_target.m"
        {
#line 618 "make.module_target.m"
          {
#line 618 "make.module_target.m"
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 618 "make.module_target.m"
            return;
          }
#line 617 "make.module_target.m"
        }
#line 613 "make.module_target.m"
        break;
#line 613 "make.module_target.m"
    }
#line 588 "make.module_target.m"
    {
#line 588 "make.module_target.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__SrcExt_17, (MR_Integer) 0, &make__module_target__SrcFileName_19);
    }
#line 590 "make.module_target.m"
    {
#line 590 "make.module_target.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__ObjExt_18, (MR_Integer) 0, &make__module_target__ObjFileName_20);
    }
#line 592 "make.module_target.m"
    {
#line 592 "make.module_target.m"
      MR_Word base;
#line 592 "make.module_target.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "make.module_target.m"
      *make__module_target__ForeignCodeFile_12 = base;
#line 592 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__Lang_11));
#line 592 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__SrcFileName_19));
#line 592 "make.module_target.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFileName_20));
#line 592 "make.module_target.m"
    }
#line 577 "make.module_target.m"
  }
#line 574 "make.module_target.m"
}

#line 560 "make.module_target.m"
static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
#line 560 "make.module_target.m"
  MR_Word make__module_target__HeadVar__1_1)
#line 560 "make.module_target.m"
{
#line 563 "make.module_target.m"
  {
#line 563 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 563 "make.module_target.m"
    MR_Word make__module_target__HeadVar__2_2 = ((&make__module_target_vector_common_4[4 + make__module_target__HeadVar__1_1]))->make__module_target__vector_common_type_4_0__vct_4_f_0;

#line 563 "make.module_target.m"
    return make__module_target__HeadVar__2_2;
#line 563 "make.module_target.m"
  }
#line 560 "make.module_target.m"
}

#line 538 "make.module_target.m"
static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
#line 538 "make.module_target.m"
  MR_Word make__module_target__Globals_9,
#line 538 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_10,
#line 538 "make.module_target.m"
  MR_Word make__module_target__PIC_11,
#line 538 "make.module_target.m"
  MR_Word make__module_target__Imports_12,
#line 538 "make.module_target.m"
  MR_Word make__module_target__ForeignCodeFile_13,
#line 538 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_14)
#line 538 "make.module_target.m"
{
#line 545 "make.module_target.m"
  {
#line 545 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 545 "make.module_target.m"
    MR_String make__module_target__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 2)));
#line 545 "make.module_target.m"
    MR_String make__module_target__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 1)));
#line 545 "make.module_target.m"
    MR_Word make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 0)));

#line 545 "make.module_target.m"
#line 545 "make.module_target.m"
    switch (make__module_target__V_38_38) {
#line 545 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 545 "make.module_target.m"
      case (MR_Integer) 0:
#line 546 "make.module_target.m"
        {
#line 546 "make.module_target.m"
          backend_libs__compile_target_code__do_compile_c_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__PIC_11, make__module_target__V_37_37, make__module_target__V_36_36, make__module_target__Succeeded_14);
#line 546 "make.module_target.m"
          return;
        }
#line 545 "make.module_target.m"
        break;
#line 545 "make.module_target.m"
      case (MR_Integer) 1:
#line 553 "make.module_target.m"
        {
#line 553 "make.module_target.m"
          backend_libs__compile_target_code__compile_csharp_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__Imports_12, make__module_target__V_37_37, make__module_target__V_36_36, make__module_target__Succeeded_14);
#line 553 "make.module_target.m"
          return;
        }
#line 545 "make.module_target.m"
        break;
#line 545 "make.module_target.m"
      case (MR_Integer) 3:
#line 557 "make.module_target.m"
        {
#line 557 "make.module_target.m"
          backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_37_37, make__module_target__Succeeded_14);
#line 557 "make.module_target.m"
          return;
        }
#line 545 "make.module_target.m"
        break;
#line 545 "make.module_target.m"
      case (MR_Integer) 2:
#line 549 "make.module_target.m"
        {
#line 549 "make.module_target.m"
          MR_Word make__module_target__V_31_31;

#line 550 "make.module_target.m"
          {
#line 550 "make.module_target.m"
            make__module_target__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 0) = ((MR_Box) (make__module_target__V_37_37));
#line 550 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "make.module_target.m"
          }
#line 550 "make.module_target.m"
          {
#line 550 "make.module_target.m"
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_31_31, make__module_target__Succeeded_14);
#line 550 "make.module_target.m"
            return;
          }
#line 549 "make.module_target.m"
        }
#line 545 "make.module_target.m"
        break;
#line 545 "make.module_target.m"
    }
#line 545 "make.module_target.m"
  }
#line 538 "make.module_target.m"
}

#line 511 "make.module_target.m"
static void MR_CALL 
make__module_target__build_object_code_9_p_0(
#line 511 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ModuleName_11,
#line 511 "make.module_target.m"
  MR_Word make__module_target__Target_12,
#line 511 "make.module_target.m"
  MR_Word make__module_target__PIC_13,
#line 511 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_14,
#line 511 "make.module_target.m"
  MR_Word make__module_target___Imports_15,
#line 511 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_16)
#line 511 "make.module_target.m"
{
#line 518 "make.module_target.m"
  {
#line 518 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 518 "make.module_target.m"
    {
#line 518 "make.module_target.m"
      make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, make__module_target__Target_12, make__module_target__PIC_13, make__module_target__ErrorStream_14, make__module_target__Succeeded_16);
#line 518 "make.module_target.m"
      return;
    }
#line 518 "make.module_target.m"
  }
#line 511 "make.module_target.m"
}

#line 484 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
#line 484 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 484 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 484 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 484 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 484 "make.module_target.m"
{
#line 484 "make.module_target.m"
  {
#line 484 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 484 "make.module_target.m"
    MR_Word make__module_target__conv5_Succeeded_16;

#line 484 "make.module_target.m"
    {
#line 484 "make.module_target.m"
      make__module_target__build_object_code_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 8))), &make__module_target__conv5_Succeeded_16);
    }
#line 484 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv5_Succeeded_16));
#line 484 "make.module_target.m"
  }
#line 484 "make.module_target.m"
}

#line 457 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
#line 457 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 457 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 457 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 457 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 457 "make.module_target.m"
{
#line 457 "make.module_target.m"
  {
#line 457 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 457 "make.module_target.m"
    MR_Word make__module_target__conv4_Succeeded_12;

#line 457 "make.module_target.m"
    {
#line 457 "make.module_target.m"
      make__module_target__invoke_mmc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_Succeeded_12);
    }
#line 457 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_Succeeded_12));
#line 457 "make.module_target.m"
  }
#line 457 "make.module_target.m"
}

#line 456 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
#line 456 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 456 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 456 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 456 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 456 "make.module_target.m"
{
#line 456 "make.module_target.m"
  {
#line 456 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 456 "make.module_target.m"
    MR_Word make__module_target__conv3_Succeeded_8;

#line 456 "make.module_target.m"
    {
#line 456 "make.module_target.m"
      make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), &make__module_target__conv3_Succeeded_8);
    }
#line 456 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv3_Succeeded_8));
#line 456 "make.module_target.m"
  }
#line 456 "make.module_target.m"
}

#line 436 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
#line 436 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 436 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 436 "make.module_target.m"
{
#line 436 "make.module_target.m"
  {
#line 436 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 436 "make.module_target.m"
    {
#line 436 "make.module_target.m"
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
#line 436 "make.module_target.m"
      return;
    }
#line 436 "make.module_target.m"
  }
#line 436 "make.module_target.m"
}

#line 436 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
#line 436 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 436 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1)
#line 436 "make.module_target.m"
{
#line 436 "make.module_target.m"
  {
#line 436 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_2;
#line 436 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 436 "make.module_target.m"
    MR_String make__module_target__conv2_HeadVar__2_2;

#line 436 "make.module_target.m"
    {
#line 436 "make.module_target.m"
      make__module_target__conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
#line 436 "make.module_target.m"
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv2_HeadVar__2_2));
#line 436 "make.module_target.m"
    return make__module_target__wrapper_arg_2;
#line 436 "make.module_target.m"
  }
#line 436 "make.module_target.m"
}

#line 495 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
#line 495 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 495 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 495 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 495 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 495 "make.module_target.m"
{
#line 495 "make.module_target.m"
  {
#line 495 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 495 "make.module_target.m"
    MR_Word make__module_target__conv1_Succeeded_14;

#line 495 "make.module_target.m"
    {
#line 495 "make.module_target.m"
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv1_Succeeded_14);
    }
#line 495 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv1_Succeeded_14));
#line 495 "make.module_target.m"
  }
#line 495 "make.module_target.m"
}

#line 506 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
#line 506 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 506 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 506 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 506 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 506 "make.module_target.m"
{
#line 506 "make.module_target.m"
  {
#line 506 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 506 "make.module_target.m"
    MR_Word make__module_target__conv0_Succeeded_14;

#line 506 "make.module_target.m"
    {
#line 506 "make.module_target.m"
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv0_Succeeded_14);
    }
#line 506 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_Succeeded_14));
#line 506 "make.module_target.m"
  }
#line 506 "make.module_target.m"
}

#line 419 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_2_12_p_0(
#line 419 "make.module_target.m"
  MR_Word make__module_target__ModuleName_13,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Task_14,
#line 419 "make.module_target.m"
  MR_Word make__module_target__ArgFileName_15,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 419 "make.module_target.m"
  MR_Word make__module_target__Globals_17,
#line 419 "make.module_target.m"
  MR_Word make__module_target__AllOptionArgs_18,
#line 419 "make.module_target.m"
  MR_Word make__module_target__ErrorStream_19,
#line 419 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 419 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
#line 419 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_37)
#line 419 "make.module_target.m"
{
#line 425 "make.module_target.m"
  {
#line 425 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 477 "make.module_target.m"
#line 477 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__Task_14)) {
#line 477 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "make.module_target.m"
      case (MR_Integer) 0:
#line 427 "make.module_target.m"
        {
#line 427 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_14, (MR_Integer) 0)));
#line 427 "make.module_target.m"
          MR_String make__module_target__ModuleArg_24;
#line 427 "make.module_target.m"
          MR_Word make__module_target__Verbose_25;
#line 427 "make.module_target.m"
          MR_Word make__module_target__OldOutputStream_27;
#line 427 "make.module_target.m"
          MR_Word make__module_target__IsForkable_28;
#line 464 "make.module_target.m"
          MR_Word make__module_target__V_29_29;

#line 428 "make.module_target.m"
          {
#line 428 "make.module_target.m"
            make__module_target__ModuleArg_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(make__module_target__ModuleName_13);
          }
#line 430 "make.module_target.m"
          {
#line 430 "make.module_target.m"
            libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_17, (MR_Integer) 51, &make__module_target__Verbose_25);
          }
#line 440 "make.module_target.m"
#line 440 "make.module_target.m"
          switch (make__module_target__Verbose_25) {
#line 440 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 440 "make.module_target.m"
            case (MR_Integer) 0:
#line 441 "make.module_target.m"
              {
#line 441 "make.module_target.m"
              }
#line 440 "make.module_target.m"
              break;
#line 440 "make.module_target.m"
            case (MR_Integer) 1:
#line 432 "make.module_target.m"
              {
#line 432 "make.module_target.m"
                MR_Word make__module_target__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 432 "make.module_target.m"
                MR_Word make__module_target__AllArgs_26;
#line 432 "make.module_target.m"
                MR_Word make__module_target__V_49_49;
#line 432 "make.module_target.m"
                MR_Word make__module_target__V_53_53;

#line 433 "make.module_target.m"
                {
#line 433 "make.module_target.m"
                  make__module_target__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 433 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "make.module_target.m"
                }
#line 433 "make.module_target.m"
                {
#line 433 "make.module_target.m"
                  make__module_target__AllArgs_26 = mercury__list__append_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__AllOptionArgs_18, make__module_target__V_49_49);
                }
#line 434 "make.module_target.m"
                {
#line 434 "make.module_target.m"
                  mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
                }
#line 436 "make.module_target.m"
                {
#line 436 "make.module_target.m"
                  make__module_target__V_53_53 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__TypeCtorInfo_78_78, (MR_Word) &make__module_target_scalar_common_2[7], make__module_target__AllArgs_26);
                }
#line 436 "make.module_target.m"
                {
#line 436 "make.module_target.m"
                  mercury__io__write_list_5_p_0(make__module_target__TypeCtorInfo_78_78, make__module_target__V_53_53, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[8]);
                }
#line 438 "make.module_target.m"
                {
#line 438 "make.module_target.m"
                  mercury__io__write_string_3_p_0((MR_String) "\'");
                }
#line 439 "make.module_target.m"
                {
#line 439 "make.module_target.m"
                  mercury__io__nl_2_p_0();
                }
#line 432 "make.module_target.m"
              }
#line 440 "make.module_target.m"
              break;
#line 440 "make.module_target.m"
          }
#line 451 "make.module_target.m"
          {
#line 451 "make.module_target.m"
            mercury__io__set_output_stream_4_p_0(make__module_target__ErrorStream_19, &make__module_target__OldOutputStream_27);
          }
#line 452 "make.module_target.m"
          {
#line 452 "make.module_target.m"
            make__module_target__IsForkable_28 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_23);
          }
#line 460 "make.module_target.m"
#line 460 "make.module_target.m"
          switch (make__module_target__IsForkable_28) {
#line 460 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 460 "make.module_target.m"
            case (MR_Integer) 0:
#line 461 "make.module_target.m"
              {
#line 461 "make.module_target.m"
                MR_Word make__module_target__V_62_62;

#line 462 "make.module_target.m"
                {
#line 462 "make.module_target.m"
                  make__module_target__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 462 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "make.module_target.m"
                }
#line 462 "make.module_target.m"
                {
#line 462 "make.module_target.m"
                  make__module_target__call_mercury_compile_main_5_p_0(make__module_target__Globals_17, make__module_target__V_62_62, make__module_target__Succeeded_20);
                }
#line 461 "make.module_target.m"
              }
#line 460 "make.module_target.m"
              break;
#line 460 "make.module_target.m"
            case (MR_Integer) 1:
#line 454 "make.module_target.m"
              {
#line 454 "make.module_target.m"
                MR_Word make__module_target__V_65_65;
#line 454 "make.module_target.m"
                MR_Word make__module_target__V_66_66;
#line 454 "make.module_target.m"
                MR_Word make__module_target__V_68_68;
#line 454 "make.module_target.m"
                MR_Word make__module_target__V_70_70;

#line 456 "make.module_target.m"
                {
#line 456 "make.module_target.m"
                  make__module_target__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "make.module_target.m"
                }
#line 456 "make.module_target.m"
                {
#line 456 "make.module_target.m"
                  make__module_target__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 456 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 4) = ((MR_Box) (make__module_target__V_68_68));
#line 456 "make.module_target.m"
                }
#line 458 "make.module_target.m"
                {
#line 458 "make.module_target.m"
                  make__module_target__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__AllOptionArgs_18, make__module_target__V_68_68);
                }
#line 457 "make.module_target.m"
                {
#line 457 "make.module_target.m"
                  make__module_target__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 0) = ((MR_Box) (&make__module_target_scalar_common_5[4]));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 5) = ((MR_Box) (make__module_target__ArgFileName_15));
#line 457 "make.module_target.m"
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 6) = ((MR_Box) (make__module_target__V_70_70));
#line 457 "make.module_target.m"
                }
#line 455 "make.module_target.m"
                {
#line 455 "make.module_target.m"
                  libs__process_util__call_in_forked_process_with_backup_5_p_0(make__module_target__V_65_65, make__module_target__V_66_66, make__module_target__Succeeded_20);
                }
#line 454 "make.module_target.m"
              }
#line 460 "make.module_target.m"
              break;
#line 460 "make.module_target.m"
          }
#line 464 "make.module_target.m"
          {
#line 464 "make.module_target.m"
            mercury__io__set_output_stream_4_p_0(make__module_target__OldOutputStream_27, &make__module_target__V_29_29);
          }
#line 468 "make.module_target.m"
#line 468 "make.module_target.m"
          switch (make__module_target__ModuleTask_23) {
#line 468 "make.module_target.m"
            default:
#line 468 "make.module_target.m"
              make__module_target__succeeded = MR_FALSE;
#line 468 "make.module_target.m"
              break;
#line 468 "make.module_target.m"
            case (MR_Integer) 6:
#line 467 "make.module_target.m"
              make__module_target__succeeded = MR_TRUE;
#line 468 "make.module_target.m"
              break;
#line 468 "make.module_target.m"
            case (MR_Integer) 0:
#line 468 "make.module_target.m"
              make__module_target__succeeded = MR_TRUE;
#line 468 "make.module_target.m"
              break;
#line 468 "make.module_target.m"
          }
#line 474 "make.module_target.m"
          if (make__module_target__succeeded)
#line 473 "make.module_target.m"
            {
#line 473 "make.module_target.m"
              {
#line 473 "make.module_target.m"
                parse_tree__module_cmds__touch_interface_datestamp_5_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, (MR_String) ".err_date");
              }
#line 473 "make.module_target.m"
            }
#line 474 "make.module_target.m"
          else
#line 474 "make.module_target.m"
            {
#line 474 "make.module_target.m"
            }
#line 427 "make.module_target.m"
        }
#line 477 "make.module_target.m"
        break;
#line 477 "make.module_target.m"
      case (MR_Integer) 1:
#line 478 "make.module_target.m"
        {
#line 478 "make.module_target.m"
          MR_Word make__module_target__PIC_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__Task_14, (MR_Integer) 0)));
#line 478 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_31;
#line 478 "make.module_target.m"
          MR_Word make__module_target__V_46_46;

#line 479 "make.module_target.m"
          {
#line 479 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_17, &make__module_target__CompilationTarget_31);
          }
#line 484 "make.module_target.m"
          {
#line 484 "make.module_target.m"
            make__module_target__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 0) = ((MR_Box) (&make__module_target_scalar_common_13[1]));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 4) = ((MR_Box) (make__module_target__ModuleName_13));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 5) = ((MR_Box) (make__module_target__CompilationTarget_31));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 6) = ((MR_Box) (make__module_target__PIC_30));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 7) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 484 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 8) = ((MR_Box) (make__module_target__Imports_16));
#line 484 "make.module_target.m"
          }
#line 483 "make.module_target.m"
          {
#line 483 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_46_46, make__module_target__Succeeded_20);
          }
#line 478 "make.module_target.m"
        }
#line 477 "make.module_target.m"
        break;
#line 477 "make.module_target.m"
      case (MR_Integer) 2:
#line 488 "make.module_target.m"
        {
#line 488 "make.module_target.m"
          MR_Word make__module_target__Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 1)));
#line 488 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_33;
#line 488 "make.module_target.m"
          MR_Word make__module_target__V_44_44;
#line 488 "make.module_target.m"
          MR_Word make__module_target__PIC_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 0)));

#line 489 "make.module_target.m"
          {
#line 489 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_76, make__module_target__Lang_32, &make__module_target__ForeignCodeFile_33);
          }
#line 495 "make.module_target.m"
          {
#line 495 "make.module_target.m"
            make__module_target__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 5) = ((MR_Box) (make__module_target__PIC_76));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 495 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 7) = ((MR_Box) (make__module_target__ForeignCodeFile_33));
#line 495 "make.module_target.m"
          }
#line 494 "make.module_target.m"
          {
#line 494 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_44_44, make__module_target__Succeeded_20);
          }
#line 488 "make.module_target.m"
        }
#line 477 "make.module_target.m"
        break;
#line 477 "make.module_target.m"
      case (MR_Integer) 3:
#line 499 "make.module_target.m"
        {
#line 499 "make.module_target.m"
          MR_String make__module_target__FactTableFile_34 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 1)));
#line 499 "make.module_target.m"
          MR_Word make__module_target__FactTableForeignCode_35;
#line 499 "make.module_target.m"
          MR_Word make__module_target__V_41_41;
#line 499 "make.module_target.m"
          MR_Word make__module_target__PIC_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 0)));

#line 500 "make.module_target.m"
          {
#line 500 "make.module_target.m"
            make__module_target__fact_table_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_77, make__module_target__FactTableFile_34, &make__module_target__FactTableForeignCode_35);
          }
#line 506 "make.module_target.m"
          {
#line 506 "make.module_target.m"
            make__module_target__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 3) = ((MR_Box) (make__module_target__Globals_17));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 5) = ((MR_Box) (make__module_target__PIC_77));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 506 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 7) = ((MR_Box) (make__module_target__FactTableForeignCode_35));
#line 506 "make.module_target.m"
          }
#line 505 "make.module_target.m"
          {
#line 505 "make.module_target.m"
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_41_41, make__module_target__Succeeded_20);
          }
#line 499 "make.module_target.m"
        }
#line 477 "make.module_target.m"
        break;
#line 477 "make.module_target.m"
    }
#line 425 "make.module_target.m"
    *make__module_target__STATE_VARIABLE_Info_37 = make__module_target__STATE_VARIABLE_Info_0_36;
#line 425 "make.module_target.m"
  }
#line 419 "make.module_target.m"
}

#line 395 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_3(
#line 395 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_1,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 395 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 395 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5)
#line 395 "make.module_target.m"
{
#line 395 "make.module_target.m"
  {
#line 395 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 395 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__5_5;
#line 395 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__7_7;

#line 395 "make.module_target.m"
    {
#line 395 "make.module_target.m"
      make__util__build_with_module_options_and_output_redirect_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_HeadVar__5_5, ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__7_7);
    }
#line 395 "make.module_target.m"
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_HeadVar__5_5));
#line 395 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__7_7));
#line 395 "make.module_target.m"
  }
#line 395 "make.module_target.m"
}

#line 397 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_2(
#line 397 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6,
#line 397 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_7,
#line 397 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_8)
#line 397 "make.module_target.m"
{
#line 397 "make.module_target.m"
  {
#line 397 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 397 "make.module_target.m"
    MR_Word make__module_target__conv2_Succeeded_20;
#line 397 "make.module_target.m"
    MR_Word make__module_target__conv1_STATE_VARIABLE_Info_37;

#line 397 "make.module_target.m"
    {
#line 397 "make.module_target.m"
      make__module_target__build_target_2_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_Succeeded_20, ((MR_Word) make__module_target__wrapper_arg_5), &make__module_target__conv1_STATE_VARIABLE_Info_37);
    }
#line 397 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_Succeeded_20));
#line 397 "make.module_target.m"
    *make__module_target__wrapper_arg_6 = ((MR_Box) (make__module_target__conv1_STATE_VARIABLE_Info_37));
#line 397 "make.module_target.m"
  }
#line 397 "make.module_target.m"
}

#line 377 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0_1(
#line 377 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 377 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 377 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 377 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 377 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 377 "make.module_target.m"
{
#line 377 "make.module_target.m"
  {
#line 377 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 377 "make.module_target.m"
    MR_Word make__module_target__conv0_LambdaHeadVar__2_53;

#line 377 "make.module_target.m"
    {
#line 377 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__build_target__377__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv0_LambdaHeadVar__2_53);
    }
#line 377 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_LambdaHeadVar__2_53));
#line 377 "make.module_target.m"
  }
#line 377 "make.module_target.m"
}

#line 354 "make.module_target.m"
static void MR_CALL 
make__module_target__build_target_12_p_0(
#line 354 "make.module_target.m"
  MR_Word make__module_target__Globals_13,
#line 354 "make.module_target.m"
  MR_Word make__module_target__CompilationTask_14,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TargetFile_15,
#line 354 "make.module_target.m"
  MR_Word make__module_target__Imports_16,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_17,
#line 354 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_18,
#line 354 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_19,
#line 354 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_20,
#line 354 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
#line 354 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_41)
#line 354 "make.module_target.m"
{
#line 360 "make.module_target.m"
  {
#line 360 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 360 "make.module_target.m"
    MR_Word make__module_target__ModuleName_23;
#line 360 "make.module_target.m"
    MR_Word make__module_target__Task_25;
#line 360 "make.module_target.m"
    MR_Word make__module_target__TaskOptions_26;
#line 360 "make.module_target.m"
    MR_Word make__module_target__MaybeArgFileName_30;
#line 360 "make.module_target.m"
    MR_Word make__module_target__Cleanup_31;
#line 360 "make.module_target.m"
    MR_Integer make__module_target__Time0_35;
#line 360 "make.module_target.m"
    MR_Word make__module_target__VeryVerbose_36;
#line 360 "make.module_target.m"
    MR_Integer make__module_target__Time_37;
#line 360 "make.module_target.m"
    MR_Word make__module_target__ShowMakeTimes_38;
#line 360 "make.module_target.m"
    MR_Word make__module_target__V_67_67;
#line 360 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_68_68;
#line 360 "make.module_target.m"
    MR_Word make__module_target__V_70_70;
#line 360 "make.module_target.m"
    MR_Word make__module_target__V_71_71;
#line 362 "make.module_target.m"
    MR_Word make__module_target___FileType_24;
#line 365 "make.module_target.m"
    MR_Word make__module_target__ModuleTask_27;
#line 365 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 365 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 365 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 394 "make.module_target.m"
    MR_Box make__module_target__conv5_STATE_VARIABLE_Info_68_68;

#line 361 "make.module_target.m"
    {
#line 361 "make.module_target.m"
      make__util__maybe_make_target_message_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
    }
#line 362 "make.module_target.m"
    make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 0)));
#line 362 "make.module_target.m"
    make__module_target___FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 1)));
#line 363 "make.module_target.m"
    make__module_target__Task_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
#line 363 "make.module_target.m"
    make__module_target__TaskOptions_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
#line 365 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
#line 365 "make.module_target.m"
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
#line 365 "make.module_target.m"
    make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 365 "make.module_target.m"
    if (make__module_target__succeeded)
#line 365 "make.module_target.m"
      {
#line 365 "make.module_target.m"
        make__module_target__ModuleTask_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_45_45, (MR_Integer) 0)));
#line 366 "make.module_target.m"
        {
#line 366 "make.module_target.m"
          make__module_target__V_46_46 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_27);
        }
#line 366 "make.module_target.m"
        make__module_target__succeeded = (make__module_target__V_46_46 == (MR_Integer) 1);
#line 365 "make.module_target.m"
        if (make__module_target__succeeded)
#line 365 "make.module_target.m"
          {
#line 367 "make.module_target.m"
            {
#line 367 "make.module_target.m"
              make__module_target__succeeded = libs__process_util__can_fork_0_p_0();
            }
#line 367 "make.module_target.m"
            make__module_target__succeeded = !(make__module_target__succeeded);
#line 365 "make.module_target.m"
          }
#line 365 "make.module_target.m"
      }
#line 374 "make.module_target.m"
    if (make__module_target__succeeded)
#line 372 "make.module_target.m"
      {
#line 372 "make.module_target.m"
        MR_String make__module_target__ArgFileName_29;

#line 372 "make.module_target.m"
        {
#line 372 "make.module_target.m"
          mercury__io__make_temp_3_p_0(&make__module_target__ArgFileName_29);
        }
#line 373 "make.module_target.m"
        {
#line 373 "make.module_target.m"
          make__module_target__MaybeArgFileName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "make.module_target.m"
          MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_30, 0) = ((MR_Box) (make__module_target__ArgFileName_29));
#line 373 "make.module_target.m"
        }
#line 372 "make.module_target.m"
      }
#line 374 "make.module_target.m"
    else
#line 375 "make.module_target.m"
      make__module_target__MaybeArgFileName_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "make.module_target.m"
    {
#line 377 "make.module_target.m"
      make__module_target__Cleanup_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 4) = ((MR_Box) (make__module_target__TouchedTargetFiles_17));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 5) = ((MR_Box) (make__module_target__TouchedFiles_18));
#line 377 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Cleanup_31, 6) = ((MR_Box) (make__module_target__MaybeArgFileName_30));
#line 377 "make.module_target.m"
    }
#line 392 "make.module_target.m"
    {
#line 392 "make.module_target.m"
      make__util__get_real_milliseconds_3_p_0(&make__module_target__Time0_35);
    }
#line 393 "make.module_target.m"
    {
#line 393 "make.module_target.m"
      libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 46, &make__module_target__VeryVerbose_36);
    }
#line 396 "make.module_target.m"
    {
#line 396 "make.module_target.m"
      make__module_target__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ExtraOptions_19, make__module_target__TaskOptions_26);
    }
#line 397 "make.module_target.m"
    {
#line 397 "make.module_target.m"
      make__module_target__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_2));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 3) = ((MR_Box) (make__module_target__ModuleName_23));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 4) = ((MR_Box) (make__module_target__Task_25));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 5) = ((MR_Box) (make__module_target__MaybeArgFileName_30));
#line 397 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 6) = ((MR_Box) (make__module_target__Imports_16));
#line 397 "make.module_target.m"
    }
#line 395 "make.module_target.m"
    {
#line 395 "make.module_target.m"
      make__module_target__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 0) = ((MR_Box) (&make__module_target_scalar_common_13[0]));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_3));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 3) = ((MR_Box) (make__module_target__Globals_13));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 4) = ((MR_Box) (make__module_target__ModuleName_23));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 5) = ((MR_Box) (make__module_target__V_70_70));
#line 395 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 6) = ((MR_Box) (make__module_target__V_71_71));
#line 395 "make.module_target.m"
    }
#line 394 "make.module_target.m"
    {
#line 394 "make.module_target.m"
      libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__VeryVerbose_36, make__module_target__V_67_67, make__module_target__Cleanup_31, make__module_target__Succeeded_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_40)), &make__module_target__conv5_STATE_VARIABLE_Info_68_68);
    }
#line 394 "make.module_target.m"
    make__module_target__STATE_VARIABLE_Info_68_68 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_68_68);
#line 399 "make.module_target.m"
    {
#line 399 "make.module_target.m"
      make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_13, *make__module_target__Succeeded_20, make__module_target__TargetFile_15, make__module_target__TouchedTargetFiles_17, make__module_target__TouchedFiles_18, make__module_target__STATE_VARIABLE_Info_68_68, make__module_target__STATE_VARIABLE_Info_41);
    }
#line 401 "make.module_target.m"
    {
#line 401 "make.module_target.m"
      make__util__get_real_milliseconds_3_p_0(&make__module_target__Time_37);
    }
#line 403 "make.module_target.m"
    {
#line 403 "make.module_target.m"
      libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 639, &make__module_target__ShowMakeTimes_38);
    }
#line 415 "make.module_target.m"
#line 415 "make.module_target.m"
    switch (make__module_target__ShowMakeTimes_38) {
#line 415 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 415 "make.module_target.m"
      case (MR_Integer) 0:
#line 416 "make.module_target.m"
        {
#line 416 "make.module_target.m"
        }
#line 415 "make.module_target.m"
        break;
#line 415 "make.module_target.m"
      case (MR_Integer) 1:
#line 405 "make.module_target.m"
        {
#line 405 "make.module_target.m"
          MR_Float make__module_target__DiffSecs_39;
#line 405 "make.module_target.m"
          MR_Float make__module_target__V_76_76;
#line 405 "make.module_target.m"
          MR_Integer make__module_target__V_77_77 = (make__module_target__Time_37 - make__module_target__Time0_35);

#line 406 "make.module_target.m"
          {
#line 406 "make.module_target.m"
            make__module_target__V_76_76 = mercury__float__float_1_f_0(make__module_target__V_77_77);
          }
#line 406 "make.module_target.m"
          {
#line 406 "make.module_target.m"
            make__module_target__DiffSecs_39 = mercury__float__f_slash_2_f_0(make__module_target__V_76_76, (MR_Float) 1000.0000000000000);
          }
#line 408 "make.module_target.m"
          make__module_target__succeeded = (make__module_target__DiffSecs_39 >= ((MR_Float) 0.40000000000000002));
#line 412 "make.module_target.m"
          if (make__module_target__succeeded)
#line 409 "make.module_target.m"
            {
#line 409 "make.module_target.m"
              MR_String make__module_target__V_124_124;

#line 409 "make.module_target.m"
              {
#line 409 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "Making ");
              }
#line 410 "make.module_target.m"
              {
#line 410 "make.module_target.m"
                make__util__make_write_target_file_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
              }
#line 411 "make.module_target.m"
              {
#line 411 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) " took ");
              }
#line 411 "make.module_target.m"
              {
#line 411 "make.module_target.m"
                mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &make__module_target_scalar_common_3[8], (MR_Integer) 2, (MR_Integer) 2, make__module_target__DiffSecs_39, &make__module_target__V_124_124);
              }
#line 411 "make.module_target.m"
              {
#line 411 "make.module_target.m"
                mercury__io__write_string_3_p_0(make__module_target__V_124_124);
              }
#line 411 "make.module_target.m"
              {
#line 411 "make.module_target.m"
                mercury__io__write_string_3_p_0((MR_String) "s\n");
#line 411 "make.module_target.m"
                return;
              }
#line 409 "make.module_target.m"
            }
#line 412 "make.module_target.m"
          else
#line 412 "make.module_target.m"
            {
#line 412 "make.module_target.m"
            }
#line 405 "make.module_target.m"
        }
#line 415 "make.module_target.m"
        break;
#line 415 "make.module_target.m"
    }
#line 360 "make.module_target.m"
  }
#line 354 "make.module_target.m"
}

#line 331 "make.module_target.m"
static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
#line 331 "make.module_target.m"
  MR_Word make__module_target__Globals_7,
#line 331 "make.module_target.m"
  MR_Word make__module_target__ModuleName_8,
#line 331 "make.module_target.m"
  MR_Word * make__module_target__ForceReanalysis_9,
#line 331 "make.module_target.m"
  MR_Word make__module_target__Info_10)
#line 331 "make.module_target.m"
{
#line 348 "make.module_target.m"
  {
#line 348 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 336 "make.module_target.m"
    MR_Integer make__module_target__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 18)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 0)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 1)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 2)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 3)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 4)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 5)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 6)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 7)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 8)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 9)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 10)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 11)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 12)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 13)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 14)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 15)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 16)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 17)));
#line 336 "make.module_target.m"
    MR_Word make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 19)));

#line 336 "make.module_target.m"
    make__module_target__succeeded = (make__module_target__V_15_15 > (MR_Integer) 0);
#line 348 "make.module_target.m"
    if (make__module_target__succeeded)
#line 338 "make.module_target.m"
      {
#line 338 "make.module_target.m"
        MR_Word make__module_target__AnalysisStatus_12;

#line 337 "make.module_target.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 337 "make.module_target.m"
        {
#line 337 "make.module_target.m"
          analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__module_target_scalar_common_1[2], ((MR_Box) ((MR_Integer) 0)), make__module_target__Globals_7, make__module_target__ModuleName_8, &make__module_target__AnalysisStatus_12);
        }
#line 344 "make.module_target.m"
#line 344 "make.module_target.m"
        switch (make__module_target__AnalysisStatus_12) {
#line 344 "make.module_target.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "make.module_target.m"
          case (MR_Integer) 0:
#line 344 "make.module_target.m"
          case (MR_Integer) 1:
#line 343 "make.module_target.m"
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 1;
#line 344 "make.module_target.m"
            break;
#line 344 "make.module_target.m"
          case (MR_Integer) 2:
#line 346 "make.module_target.m"
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
#line 344 "make.module_target.m"
            break;
#line 344 "make.module_target.m"
        }
#line 338 "make.module_target.m"
      }
#line 348 "make.module_target.m"
    else
#line 349 "make.module_target.m"
      *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
#line 348 "make.module_target.m"
  }
#line 331 "make.module_target.m"
}

#line 319 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
#line 319 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 319 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 319 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2)
#line 319 "make.module_target.m"
{
#line 319 "make.module_target.m"
  {
#line 319 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_3;
#line 319 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 319 "make.module_target.m"
    MR_Word make__module_target__conv19_HeadVar__3_3;

#line 319 "make.module_target.m"
    {
#line 319 "make.module_target.m"
      make__module_target__conv19_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 319 "make.module_target.m"
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv19_HeadVar__3_3));
#line 319 "make.module_target.m"
    return make__module_target__wrapper_arg_3;
#line 319 "make.module_target.m"
  }
#line 319 "make.module_target.m"
}

#line 317 "make.module_target.m"
static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
#line 317 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 317 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 317 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2)
#line 317 "make.module_target.m"
{
#line 317 "make.module_target.m"
  {
#line 317 "make.module_target.m"
    MR_Box make__module_target__wrapper_arg_3;
#line 317 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 317 "make.module_target.m"
    MR_Word make__module_target__conv17_HeadVar__3_3;

#line 317 "make.module_target.m"
    {
#line 317 "make.module_target.m"
      make__module_target__conv17_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
#line 317 "make.module_target.m"
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv17_HeadVar__3_3));
#line 317 "make.module_target.m"
    return make__module_target__wrapper_arg_3;
#line 317 "make.module_target.m"
  }
#line 317 "make.module_target.m"
}

#line 315 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
#line 315 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 315 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 315 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 315 "make.module_target.m"
{
#line 315 "make.module_target.m"
  {
#line 315 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 315 "make.module_target.m"
    MR_Word make__module_target__conv14_HeadVar__3_3;
#line 315 "make.module_target.m"
    MR_Word make__module_target__conv13_HeadVar__5_5;

#line 315 "make.module_target.m"
    {
#line 315 "make.module_target.m"
      make__util__get_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv14_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv13_HeadVar__5_5);
    }
#line 315 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv14_HeadVar__3_3));
#line 315 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv13_HeadVar__5_5));
#line 315 "make.module_target.m"
  }
#line 315 "make.module_target.m"
}

#line 312 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
#line 312 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 312 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 312 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 312 "make.module_target.m"
{
#line 312 "make.module_target.m"
  {
#line 312 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 312 "make.module_target.m"
    MR_Word make__module_target__conv10_HeadVar__3_3;
#line 312 "make.module_target.m"
    MR_Word make__module_target__conv9_HeadVar__5_5;

#line 312 "make.module_target.m"
    {
#line 312 "make.module_target.m"
      make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv10_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_HeadVar__5_5);
    }
#line 312 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv10_HeadVar__3_3));
#line 312 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_HeadVar__5_5));
#line 312 "make.module_target.m"
  }
#line 312 "make.module_target.m"
}

#line 281 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
#line 281 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4,
#line 281 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_5,
#line 281 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_6)
#line 281 "make.module_target.m"
{
#line 281 "make.module_target.m"
  {
#line 281 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 281 "make.module_target.m"
    MR_Word make__module_target__conv5_HeadVar__4_4;
#line 281 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__6_6;

#line 281 "make.module_target.m"
    {
#line 281 "make.module_target.m"
      make__util__get_target_timestamp_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv4_HeadVar__6_6);
    }
#line 281 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_HeadVar__4_4));
#line 281 "make.module_target.m"
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv4_HeadVar__6_6));
#line 281 "make.module_target.m"
  }
#line 281 "make.module_target.m"
}

#line 276 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
#line 276 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 276 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 276 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7)
#line 276 "make.module_target.m"
{
#line 276 "make.module_target.m"
  {
#line 276 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 276 "make.module_target.m"
    MR_Word make__module_target__conv1_Succeeded_10;
#line 276 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_14;

#line 276 "make.module_target.m"
    {
#line 276 "make.module_target.m"
      make__module_target__make_module_target_7_p_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv1_Succeeded_10, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv0_STATE_VARIABLE_Info_14);
    }
#line 276 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv1_Succeeded_10));
#line 276 "make.module_target.m"
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_14));
#line 276 "make.module_target.m"
  }
#line 276 "make.module_target.m"
}

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 289 "make.module_target.m"
{
#line 289 "make.module_target.m"
  {
#line 289 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 289 "make.module_target.m"
    MR_builtin_longjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0, 1);
#line 289 "make.module_target.m"
  }
#line 289 "make.module_target.m"
}

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 289 "make.module_target.m"
{
#line 289 "make.module_target.m"
  {
#line 289 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 289 "make.module_target.m"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104 = ((MR_Word) (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104);
#line 289 "make.module_target.m"
    {
#line 289 "make.module_target.m"
      make__module_target__make_dependency_files_10_p_0_4(make__module_target__env_ptr);
#line 289 "make.module_target.m"
      return;
    }
#line 289 "make.module_target.m"
  }
#line 289 "make.module_target.m"
}

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 289 "make.module_target.m"
{
#line 289 "make.module_target.m"
  {
#line 289 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 8071 "make.module_target.c"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 8073 "make.module_target.c"
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "make.module_target.m"
    {
#line 289 "make.module_target.m"
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = make__module_target____Unify____maybe__maybe_error_2_2((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104);
    }
#line 289 "make.module_target.m"
    if ((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 289 "make.module_target.m"
      {
#line 289 "make.module_target.m"
        make__module_target__make_dependency_files_10_p_0_3(make__module_target__env_ptr);
#line 289 "make.module_target.m"
        return;
      }
#line 289 "make.module_target.m"
  }
#line 289 "make.module_target.m"
}

#line 289 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
#line 289 "make.module_target.m"
  void * make__module_target__env_ptr_arg)
#line 289 "make.module_target.m"
{
#line 289 "make.module_target.m"
  {
#line 289 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

#line 289 "make.module_target.m"
    if (MR_builtin_setjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0) == 0)
#line 289 "make.module_target.m"
      {
#line 289 "make.module_target.m"
        {
#line 289 "make.module_target.m"
          MR_String make__module_target__V_22_22;

#line 289 "make.module_target.m"
          {
#line 289 "make.module_target.m"
            MR_Word base;
#line 289 "make.module_target.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "make.module_target.m"
            (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43 = base;
#line 289 "make.module_target.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 289 "make.module_target.m"
          }
#line 289 "make.module_target.m"
          {
#line 289 "make.module_target.m"
            mercury__list__member_2_p_1((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, &(make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_5, make__module_target__env_ptr);
          }
#line 289 "make.module_target.m"
        }
#line 289 "make.module_target.m"
        (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_FALSE;
#line 289 "make.module_target.m"
      }
#line 289 "make.module_target.m"
    else
#line 289 "make.module_target.m"
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_TRUE;
#line 289 "make.module_target.m"
  }
#line 289 "make.module_target.m"
}

#line 266 "make.module_target.m"
static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
#line 266 "make.module_target.m"
  MR_Word make__module_target__Globals_11,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TargetFile_12,
#line 266 "make.module_target.m"
  MR_Word make__module_target__DepFilesToMake_13,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TouchedTargetFiles_14,
#line 266 "make.module_target.m"
  MR_Word make__module_target__TouchedFiles_15,
#line 266 "make.module_target.m"
  MR_Word * make__module_target__DepsResult_16,
#line 266 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
#line 266 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_32)
#line 266 "make.module_target.m"
{
#line 266 "make.module_target.m"
  {
#line 266 "make.module_target.m"
    struct make__module_target__make_dependency_files_10_p_0_env_0_s make__module_target__env;

#line 272 "make.module_target.m"
    {
#line 272 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_75_75;
#line 272 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_76_76;
#line 272 "make.module_target.m"
      MR_Word make__module_target__TypeCtorInfo_83_83;
#line 272 "make.module_target.m"
      MR_Word make__module_target__KeepGoing_19;
#line 272 "make.module_target.m"
      MR_Word make__module_target__MakeDepsSuccess_20;
#line 272 "make.module_target.m"
      MR_Word make__module_target__STATE_VARIABLE_Info_37_37;
#line 272 "make.module_target.m"
      MR_Word make__module_target__V_39_39;
#line 272 "make.module_target.m"
      MR_Word make__module_target__STATE_VARIABLE_Info_40_40;
#line 276 "make.module_target.m"
      MR_Box make__module_target__conv3_STATE_VARIABLE_Info_37_37;
#line 276 "make.module_target.m"
      MR_Box make__module_target__conv2_STATE_VARIABLE_IO_38_38;
#line 281 "make.module_target.m"
      MR_Box make__module_target__conv7_STATE_VARIABLE_Info_40_40;
#line 281 "make.module_target.m"
      MR_Box make__module_target__conv6_STATE_VARIABLE_IO_41_41;

#line 275 "make.module_target.m"
      {
#line 275 "make.module_target.m"
        libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_11, (MR_Integer) 610, &make__module_target__KeepGoing_19);
      }
#line 8205 "make.module_target.c"
      make__module_target__TypeCtorInfo_75_75 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 8207 "make.module_target.c"
      make__module_target__TypeCtorInfo_76_76 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 276 "make.module_target.m"
      {
#line 276 "make.module_target.m"
        make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__KeepGoing_19, (MR_Word) &make__module_target_scalar_common_2[4], make__module_target__Globals_11, make__module_target__DepFilesToMake_13, &make__module_target__MakeDepsSuccess_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_31)), &make__module_target__conv3_STATE_VARIABLE_Info_37_37, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_38_38);
      }
#line 276 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Info_37_37 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_37_37);
#line 281 "make.module_target.m"
      {
#line 281 "make.module_target.m"
        make__module_target__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 281 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
#line 281 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_2));
#line 281 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 281 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 3) = ((MR_Box) (make__module_target__Globals_11));
#line 281 "make.module_target.m"
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 4) = ((MR_Box) ((MR_Integer) 1));
#line 281 "make.module_target.m"
      }
#line 8232 "make.module_target.c"
      make__module_target__TypeCtorInfo_83_83 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 8234 "make.module_target.c"
      (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84 = (MR_Word) &make__module_target_scalar_common_2[1];
#line 281 "make.module_target.m"
      {
#line 281 "make.module_target.m"
        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_39_39, make__module_target__TouchedTargetFiles_14, &(make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_37_37)), &make__module_target__conv7_STATE_VARIABLE_Info_40_40, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_41_41);
      }
#line 281 "make.module_target.m"
      make__module_target__STATE_VARIABLE_Info_40_40 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Info_40_40);
#line 287 "make.module_target.m"
#line 287 "make.module_target.m"
      switch (make__module_target__MakeDepsSuccess_20) {
#line 287 "make.module_target.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 287 "make.module_target.m"
        case (MR_Integer) 0:
#line 284 "make.module_target.m"
          {
#line 285 "make.module_target.m"
            {
#line 285 "make.module_target.m"
              make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "error making dependencies");
            }
#line 286 "make.module_target.m"
            *make__module_target__DepsResult_16 = (MR_Integer) 2;
#line 284 "make.module_target.m"
            *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 284 "make.module_target.m"
          }
#line 287 "make.module_target.m"
          break;
#line 287 "make.module_target.m"
        case (MR_Integer) 1:
#line 293 "make.module_target.m"
          {
#line 289 "make.module_target.m"
            {
#line 289 "make.module_target.m"
              make__module_target__make_dependency_files_10_p_0_6(&make__module_target__env);
            }
#line 293 "make.module_target.m"
            if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 291 "make.module_target.m"
              {
#line 290 "make.module_target.m"
                {
#line 290 "make.module_target.m"
                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "target file does not exist");
                }
#line 292 "make.module_target.m"
                *make__module_target__DepsResult_16 = (MR_Integer) 1;
#line 291 "make.module_target.m"
                *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 291 "make.module_target.m"
              }
#line 293 "make.module_target.m"
            else
#line 302 "make.module_target.m"
              {
#line 302 "make.module_target.m"
                MR_Word make__module_target__ForceReanalysis_25;
#line 300 "make.module_target.m"
                MR_Word make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
#line 295 "make.module_target.m"
                MR_Word make__module_target__FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));

#line 296 "make.module_target.m"
                (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (make__module_target__FileType_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "make.module_target.m"
                if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
#line 298 "make.module_target.m"
                  {
#line 298 "make.module_target.m"
                    make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(make__module_target__Globals_11, make__module_target__ModuleName_23, &make__module_target__ForceReanalysis_25, make__module_target__STATE_VARIABLE_Info_40_40);
                  }
#line 300 "make.module_target.m"
                else
#line 301 "make.module_target.m"
                  make__module_target__ForceReanalysis_25 = (MR_Integer) 0;
#line 306 "make.module_target.m"
#line 306 "make.module_target.m"
                switch (make__module_target__ForceReanalysis_25) {
#line 306 "make.module_target.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 306 "make.module_target.m"
                  case (MR_Integer) 0:
#line 307 "make.module_target.m"
                    {
#line 307 "make.module_target.m"
                      MR_Word make__module_target__TouchedTargetFileTimestamps_26;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__TouchedFileTimestamps_27;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__MaybeOldestTimestamp0_28;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__MaybeOldestTimestamp_29;
#line 307 "make.module_target.m"
                      MR_String make__module_target__TargetFileName_30;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__V_47_47;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_48_48;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__V_50_50;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_51_51;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__V_53_53;
#line 307 "make.module_target.m"
                      MR_String make__module_target__V_54_54;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__V_57_57;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__V_58_58;
#line 307 "make.module_target.m"
                      MR_Word make__module_target__STATE_VARIABLE_Info_61_61;
#line 312 "make.module_target.m"
                      MR_Box make__module_target__conv12_STATE_VARIABLE_Info_48_48;
#line 312 "make.module_target.m"
                      MR_Box make__module_target__conv11_STATE_VARIABLE_IO_49_49;
#line 315 "make.module_target.m"
                      MR_Box make__module_target__conv16_STATE_VARIABLE_Info_51_51;
#line 315 "make.module_target.m"
                      MR_Box make__module_target__conv15_STATE_VARIABLE_IO_52_52;
#line 317 "make.module_target.m"
                      MR_Box make__module_target__conv18_MaybeOldestTimestamp0_28;
#line 319 "make.module_target.m"
                      MR_Box make__module_target__conv20_MaybeOldestTimestamp_29;

#line 312 "make.module_target.m"
                      {
#line 312 "make.module_target.m"
                        make__module_target__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
#line 312 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
#line 312 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 312 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 3) = ((MR_Box) (make__module_target__Globals_11));
#line 312 "make.module_target.m"
                      }
#line 312 "make.module_target.m"
                      {
#line 312 "make.module_target.m"
                        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_47_47, make__module_target__TouchedTargetFiles_14, &make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_40_40)), &make__module_target__conv12_STATE_VARIABLE_Info_48_48, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv11_STATE_VARIABLE_IO_49_49);
                      }
#line 312 "make.module_target.m"
                      make__module_target__STATE_VARIABLE_Info_48_48 = ((MR_Word) make__module_target__conv12_STATE_VARIABLE_Info_48_48);
#line 315 "make.module_target.m"
                      {
#line 315 "make.module_target.m"
                        make__module_target__V_54_54 = mercury__dir__this_directory_0_f_0();
                      }
#line 315 "make.module_target.m"
                      {
#line 315 "make.module_target.m"
                        make__module_target__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 0) = ((MR_Box) (make__module_target__V_54_54));
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "make.module_target.m"
                      }
#line 315 "make.module_target.m"
                      {
#line 315 "make.module_target.m"
                        make__module_target__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_8));
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 315 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 3) = ((MR_Box) (make__module_target__V_53_53));
#line 315 "make.module_target.m"
                      }
#line 315 "make.module_target.m"
                      {
#line 315 "make.module_target.m"
                        mercury__list__map_foldl2_7_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_50_50, make__module_target__TouchedFiles_15, &make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_48_48)), &make__module_target__conv16_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv15_STATE_VARIABLE_IO_52_52);
                      }
#line 315 "make.module_target.m"
                      make__module_target__STATE_VARIABLE_Info_51_51 = ((MR_Word) make__module_target__conv16_STATE_VARIABLE_Info_51_51);
#line 318 "make.module_target.m"
                      {
#line 318 "make.module_target.m"
                        make__module_target__V_58_58 = libs__timestamp__newest_timestamp_0_f_0();
                      }
#line 318 "make.module_target.m"
                      {
#line 318 "make.module_target.m"
                        make__module_target__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "make.module_target.m"
                        MR_hl_field(MR_mktag(0), make__module_target__V_57_57, 0) = ((MR_Box) (make__module_target__V_58_58));
#line 318 "make.module_target.m"
                      }
#line 317 "make.module_target.m"
                      {
#line 317 "make.module_target.m"
                        make__module_target__conv18_MaybeOldestTimestamp0_28 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[5], make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__V_57_57)));
                      }
#line 317 "make.module_target.m"
                      make__module_target__MaybeOldestTimestamp0_28 = ((MR_Word) make__module_target__conv18_MaybeOldestTimestamp0_28);
#line 319 "make.module_target.m"
                      {
#line 319 "make.module_target.m"
                        make__module_target__conv20_MaybeOldestTimestamp_29 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[6], make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__MaybeOldestTimestamp0_28)));
                      }
#line 319 "make.module_target.m"
                      make__module_target__MaybeOldestTimestamp_29 = ((MR_Word) make__module_target__conv20_MaybeOldestTimestamp_29);
#line 322 "make.module_target.m"
                      {
#line 322 "make.module_target.m"
                        make__util__get_file_name_8_p_0(make__module_target__Globals_11, (MR_Integer) 1, make__module_target__TargetFile_12, &make__module_target__TargetFileName_30, make__module_target__STATE_VARIABLE_Info_51_51, &make__module_target__STATE_VARIABLE_Info_61_61);
                      }
#line 324 "make.module_target.m"
                      {
#line 324 "make.module_target.m"
                        make__dependencies__check_dependencies_10_p_0(make__module_target__Globals_11, make__module_target__TargetFileName_30, make__module_target__MaybeOldestTimestamp_29, make__module_target__MakeDepsSuccess_20, make__module_target__DepFilesToMake_13, make__module_target__DepsResult_16, make__module_target__STATE_VARIABLE_Info_61_61, make__module_target__STATE_VARIABLE_Info_32);
#line 324 "make.module_target.m"
                        return;
                      }
#line 307 "make.module_target.m"
                    }
#line 306 "make.module_target.m"
                    break;
#line 306 "make.module_target.m"
                  case (MR_Integer) 1:
#line 304 "make.module_target.m"
                    {
#line 305 "make.module_target.m"
                      *make__module_target__DepsResult_16 = (MR_Integer) 1;
#line 304 "make.module_target.m"
                      *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
#line 304 "make.module_target.m"
                    }
#line 306 "make.module_target.m"
                    break;
#line 306 "make.module_target.m"
                }
#line 302 "make.module_target.m"
              }
#line 293 "make.module_target.m"
          }
#line 287 "make.module_target.m"
          break;
#line 287 "make.module_target.m"
      }
#line 272 "make.module_target.m"
    }
#line 266 "make.module_target.m"
  }
#line 266 "make.module_target.m"
}

#line 249 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
#line 249 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 249 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 249 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 249 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 249 "make.module_target.m"
{
#line 249 "make.module_target.m"
  {
#line 249 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 249 "make.module_target.m"
    MR_Word make__module_target__conv14_STATE_VARIABLE_Info_10;

#line 249 "make.module_target.m"
    {
#line 249 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv14_STATE_VARIABLE_Info_10);
    }
#line 249 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv14_STATE_VARIABLE_Info_10));
#line 249 "make.module_target.m"
  }
#line 249 "make.module_target.m"
}

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 233 "make.module_target.m"
{
#line 233 "make.module_target.m"
  {
#line 233 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 233 "make.module_target.m"
    MR_Word make__module_target__conv12_STATE_VARIABLE_Info_10;

#line 233 "make.module_target.m"
    {
#line 233 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv12_STATE_VARIABLE_Info_10);
    }
#line 233 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv12_STATE_VARIABLE_Info_10));
#line 233 "make.module_target.m"
  }
#line 233 "make.module_target.m"
}

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 233 "make.module_target.m"
{
#line 233 "make.module_target.m"
  {
#line 233 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 233 "make.module_target.m"
    MR_Word make__module_target__conv10_STATE_VARIABLE_Info_10;

#line 233 "make.module_target.m"
    {
#line 233 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv10_STATE_VARIABLE_Info_10);
    }
#line 233 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv10_STATE_VARIABLE_Info_10));
#line 233 "make.module_target.m"
  }
#line 233 "make.module_target.m"
}

#line 233 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
#line 233 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 233 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 233 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 233 "make.module_target.m"
{
#line 233 "make.module_target.m"
  {
#line 233 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 233 "make.module_target.m"
    MR_Word make__module_target__conv8_STATE_VARIABLE_Info_10;

#line 233 "make.module_target.m"
    {
#line 233 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_STATE_VARIABLE_Info_10);
    }
#line 233 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_STATE_VARIABLE_Info_10));
#line 233 "make.module_target.m"
  }
#line 233 "make.module_target.m"
}

#line 202 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
#line 202 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 202 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 202 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2)
#line 202 "make.module_target.m"
{
#line 202 "make.module_target.m"
  {
#line 202 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;

#line 202 "make.module_target.m"
    {
#line 202 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__202__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))));
#line 202 "make.module_target.m"
      return;
    }
#line 202 "make.module_target.m"
  }
#line 202 "make.module_target.m"
}

#line 182 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
#line 182 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_4,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_5,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_6,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_7,
#line 182 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_8,
#line 182 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_9)
#line 182 "make.module_target.m"
{
#line 182 "make.module_target.m"
  {
#line 182 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 182 "make.module_target.m"
    MR_Word make__module_target__conv4_HeadVar__4_305;
#line 182 "make.module_target.m"
    MR_Word make__module_target__conv3_HeadVar__6_307;
#line 182 "make.module_target.m"
    MR_Word make__module_target__conv2_HeadVar__8_309;

#line 182 "make.module_target.m"
    {
#line 182 "make.module_target.m"
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__182__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv4_HeadVar__4_305, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv3_HeadVar__6_307, ((MR_Word) make__module_target__wrapper_arg_6), &make__module_target__conv2_HeadVar__8_309);
    }
#line 182 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv4_HeadVar__4_305));
#line 182 "make.module_target.m"
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv3_HeadVar__6_307));
#line 182 "make.module_target.m"
    *make__module_target__wrapper_arg_7 = ((MR_Box) (make__module_target__conv2_HeadVar__8_309));
#line 182 "make.module_target.m"
  }
#line 182 "make.module_target.m"
}

#line 166 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
#line 166 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 166 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 166 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_2,
#line 166 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_3)
#line 166 "make.module_target.m"
{
#line 166 "make.module_target.m"
  {
#line 166 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 166 "make.module_target.m"
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

#line 166 "make.module_target.m"
    {
#line 166 "make.module_target.m"
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
#line 166 "make.module_target.m"
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
#line 166 "make.module_target.m"
  }
#line 166 "make.module_target.m"
}

#line 130 "make.module_target.m"
static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
#line 130 "make.module_target.m"
  MR_Word make__module_target__ExtraOptions_9,
#line 130 "make.module_target.m"
  MR_Word make__module_target__Globals_10,
#line 130 "make.module_target.m"
  MR_Word make__module_target__TargetFile_11,
#line 130 "make.module_target.m"
  MR_Word * make__module_target__Succeeded_12,
#line 130 "make.module_target.m"
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
#line 130 "make.module_target.m"
  MR_Word * make__module_target__STATE_VARIABLE_Info_45)
#line 130 "make.module_target.m"
{
#line 135 "make.module_target.m"
  {
#line 135 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 135 "make.module_target.m"
    MR_Word make__module_target__Dep_15;
#line 135 "make.module_target.m"
    MR_Word make__module_target__Status_16;
#line 135 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_48_48;

#line 136 "make.module_target.m"
    {
#line 136 "make.module_target.m"
      make__module_target__Dep_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 136 "make.module_target.m"
      MR_hl_field(MR_mktag(0), make__module_target__Dep_15, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 136 "make.module_target.m"
    }
#line 137 "make.module_target.m"
    {
#line 137 "make.module_target.m"
      make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_15, &make__module_target__Status_16, make__module_target__STATE_VARIABLE_Info_0_44, &make__module_target__STATE_VARIABLE_Info_48_48);
    }
#line 254 "make.module_target.m"
#line 254 "make.module_target.m"
    switch (make__module_target__Status_16) {
#line 254 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 254 "make.module_target.m"
      case (MR_Integer) 1:
#line 258 "make.module_target.m"
        {
#line 259 "make.module_target.m"
          {
#line 259 "make.module_target.m"
            mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
#line 259 "make.module_target.m"
            return;
          }
#line 258 "make.module_target.m"
        }
#line 254 "make.module_target.m"
        break;
#line 254 "make.module_target.m"
      case (MR_Integer) 3:
#line 262 "make.module_target.m"
        {
#line 263 "make.module_target.m"
          *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 262 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_45 = make__module_target__STATE_VARIABLE_Info_48_48;
#line 262 "make.module_target.m"
        }
#line 254 "make.module_target.m"
        break;
#line 254 "make.module_target.m"
      case (MR_Integer) 0:
#line 139 "make.module_target.m"
        {
#line 139 "make.module_target.m"
          MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 139 "make.module_target.m"
          MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 139 "make.module_target.m"
          MR_Word make__module_target__MaybeImports_19;
#line 139 "make.module_target.m"
          MR_Word make__module_target__STATE_VARIABLE_Info_53_53;

#line 141 "make.module_target.m"
          {
#line 141 "make.module_target.m"
            make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_48_48, &make__module_target__STATE_VARIABLE_Info_53_53);
          }
#line 146 "make.module_target.m"
          if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "make.module_target.m"
            {
#line 143 "make.module_target.m"
              MR_Word make__module_target__V_116_116;
#line 143 "make.module_target.m"
              MR_Word make__module_target__V_117_117;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_120_120;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_121_121;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_122_122;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_123_123;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_124_124;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_125_125;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_126_126;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_127_127;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_128_128;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_129_129;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_130_130;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_131_131;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_132_132;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_133_133;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_134_134;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_135_135;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_136_136;
#line 145 "make.module_target.m"
              MR_Integer make__module_target__V_137_137;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_138_138;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_139_139;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_140_140;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_141_141;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_142_142;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_143_143;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_144_144;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_145_145;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_146_146;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_148_148;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_149_149;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_150_150;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_151_151;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_152_152;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_153_153;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_154_154;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_155_155;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_156_156;
#line 145 "make.module_target.m"
              MR_Integer make__module_target__V_157_157;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_158_158;
#line 145 "make.module_target.m"
              MR_Word make__module_target__V_147_147;

#line 144 "make.module_target.m"
              *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 145 "make.module_target.m"
              make__module_target__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 145 "make.module_target.m"
              make__module_target__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 145 "make.module_target.m"
              make__module_target__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 145 "make.module_target.m"
              make__module_target__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 145 "make.module_target.m"
              make__module_target__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 145 "make.module_target.m"
              make__module_target__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 145 "make.module_target.m"
              make__module_target__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 145 "make.module_target.m"
              make__module_target__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 145 "make.module_target.m"
              make__module_target__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 145 "make.module_target.m"
              make__module_target__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 145 "make.module_target.m"
              make__module_target__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 145 "make.module_target.m"
              make__module_target__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
#line 145 "make.module_target.m"
              make__module_target__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
#line 145 "make.module_target.m"
              make__module_target__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
#line 145 "make.module_target.m"
              make__module_target__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
#line 145 "make.module_target.m"
              make__module_target__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
#line 145 "make.module_target.m"
              make__module_target__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
#line 145 "make.module_target.m"
              make__module_target__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
#line 145 "make.module_target.m"
              make__module_target__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
#line 145 "make.module_target.m"
              make__module_target__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
#line 145 "make.module_target.m"
              {
#line 145 "make.module_target.m"
                make__module_target__V_117_117 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_15)), make__module_target__V_116_116, ((MR_Box) ((MR_Integer) 3)));
              }
#line 145 "make.module_target.m"
              make__module_target__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 145 "make.module_target.m"
              make__module_target__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 145 "make.module_target.m"
              make__module_target__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 145 "make.module_target.m"
              make__module_target__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 145 "make.module_target.m"
              make__module_target__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 145 "make.module_target.m"
              make__module_target__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 145 "make.module_target.m"
              make__module_target__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 145 "make.module_target.m"
              make__module_target__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 145 "make.module_target.m"
              make__module_target__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 145 "make.module_target.m"
              make__module_target__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 145 "make.module_target.m"
              make__module_target__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 145 "make.module_target.m"
              make__module_target__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
#line 145 "make.module_target.m"
              make__module_target__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
#line 145 "make.module_target.m"
              make__module_target__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
#line 145 "make.module_target.m"
              make__module_target__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
#line 145 "make.module_target.m"
              make__module_target__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
#line 145 "make.module_target.m"
              make__module_target__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
#line 145 "make.module_target.m"
              make__module_target__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
#line 145 "make.module_target.m"
              make__module_target__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
#line 145 "make.module_target.m"
              make__module_target__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
#line 145 "make.module_target.m"
              {
#line 145 "make.module_target.m"
                MR_Word base;
#line 145 "make.module_target.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 145 "make.module_target.m"
                *make__module_target__STATE_VARIABLE_Info_45 = base;
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_139_139));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_140_140));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_141_141));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_142_142));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_143_143));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_144_144));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_145_145));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_146_146));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_117_117));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_148_148));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_149_149));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_150_150));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_151_151));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_152_152));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_153_153));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_154_154));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_155_155));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_156_156));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_157_157));
#line 145 "make.module_target.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_158_158));
#line 145 "make.module_target.m"
              }
#line 143 "make.module_target.m"
            }
#line 146 "make.module_target.m"
          else
#line 147 "make.module_target.m"
            {
#line 147 "make.module_target.m"
              MR_Word make__module_target__Imports_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
#line 147 "make.module_target.m"
              MR_Word make__module_target__CompilationTask_21;
#line 154 "make.module_target.m"
              MR_Word make__module_target__V_55_55;
#line 154 "make.module_target.m"
              MR_Word make__module_target__V_23_23;
#line 154 "make.module_target.m"
              MR_Word make__module_target__V_22_22;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_327_327;
#line 155 "make.module_target.m"
              MR_String make__module_target__V_159_159;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_160_160;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_161_161;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_162_162;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_163_163;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_164_164;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_165_165;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_166_166;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_167_167;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_168_168;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_169_169;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_170_170;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_171_171;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_172_172;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_173_173;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_174_174;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_175_175;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_176_176;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_177_177;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_178_178;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_179_179;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_180_180;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_181_181;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_182_182;
#line 155 "make.module_target.m"
              MR_Word make__module_target__V_183_183;
#line 155 "make.module_target.m"
              MR_String make__module_target__V_184_184;

#line 148 "make.module_target.m"
              {
#line 148 "make.module_target.m"
                make__module_target__CompilationTask_21 = make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(make__module_target__FileType_18);
              }
#line 154 "make.module_target.m"
              make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 154 "make.module_target.m"
              make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 154 "make.module_target.m"
              make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_55_55)) == (MR_mktag((MR_Integer) 0)));
#line 154 "make.module_target.m"
              if (make__module_target__succeeded)
#line 154 "make.module_target.m"
                {
#line 154 "make.module_target.m"
                  make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_55_55, (MR_Integer) 0)));
#line 155 "make.module_target.m"
                  make__module_target__V_159_159 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 155 "make.module_target.m"
                  make__module_target__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 155 "make.module_target.m"
                  make__module_target__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 155 "make.module_target.m"
                  make__module_target__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 155 "make.module_target.m"
                  make__module_target__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 155 "make.module_target.m"
                  make__module_target__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 155 "make.module_target.m"
                  make__module_target__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 155 "make.module_target.m"
                  make__module_target__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 155 "make.module_target.m"
                  make__module_target__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 155 "make.module_target.m"
                  make__module_target__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 155 "make.module_target.m"
                  make__module_target__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 155 "make.module_target.m"
                  make__module_target__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 155 "make.module_target.m"
                  make__module_target__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 155 "make.module_target.m"
                  make__module_target__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 155 "make.module_target.m"
                  make__module_target__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 155 "make.module_target.m"
                  make__module_target__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 155 "make.module_target.m"
                  make__module_target__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 155 "make.module_target.m"
                  make__module_target__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 155 "make.module_target.m"
                  make__module_target__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 155 "make.module_target.m"
                  make__module_target__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 155 "make.module_target.m"
                  make__module_target__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 155 "make.module_target.m"
                  make__module_target__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 155 "make.module_target.m"
                  make__module_target__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 155 "make.module_target.m"
                  make__module_target__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 155 "make.module_target.m"
                  make__module_target__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 155 "make.module_target.m"
                  make__module_target__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 155 "make.module_target.m"
                  make__module_target__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));
#line 155 "make.module_target.m"
                  {
#line 155 "make.module_target.m"
                    make__module_target__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__module_target__ModuleName_17, make__module_target__V_327_327);
                  }
#line 155 "make.module_target.m"
                  make__module_target__succeeded = !(make__module_target__succeeded);
#line 154 "make.module_target.m"
                }
#line 162 "make.module_target.m"
              if (make__module_target__succeeded)
#line 158 "make.module_target.m"
                {
#line 158 "make.module_target.m"
                  MR_Word make__module_target__NestedTargetFile_24;
#line 158 "make.module_target.m"
                  MR_Word make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 158 "make.module_target.m"
                  MR_Word make__module_target__V_57_57;
#line 157 "make.module_target.m"
                  MR_String make__module_target__V_185_185 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 157 "make.module_target.m"
                  MR_Word make__module_target__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 157 "make.module_target.m"
                  MR_String make__module_target__V_210_210 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

#line 157 "make.module_target.m"
                  {
#line 157 "make.module_target.m"
                    make__module_target__NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 0) = ((MR_Box) (make__module_target__V_56_56));
#line 157 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 1) = ((MR_Box) (make__module_target__FileType_18));
#line 157 "make.module_target.m"
                  }
#line 160 "make.module_target.m"
                  {
#line 160 "make.module_target.m"
                    make__module_target__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_57_57, 0) = ((MR_Box) (make__module_target__NestedTargetFile_24));
#line 160 "make.module_target.m"
                  }
#line 159 "make.module_target.m"
                  {
#line 159 "make.module_target.m"
                    make__module_target__make_module_target_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__V_57_57, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_53_53, make__module_target__STATE_VARIABLE_Info_45);
#line 159 "make.module_target.m"
                    return;
                  }
#line 158 "make.module_target.m"
                }
#line 162 "make.module_target.m"
              else
#line 163 "make.module_target.m"
                {
#line 163 "make.module_target.m"
                  MR_Word make__module_target__TypeCtorInfo_300_300;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__TypeCtorInfo_301_301;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__CompilationTaskType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 163 "make.module_target.m"
                  MR_Word make__module_target__TouchedTargetFiles_27;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__TouchedFiles_28;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__ModulesToCheck_31;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__ModulesToCheckSet_32;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__DepsSuccess_33;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__DepFiles0_34;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__DepFilesSet0_35;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__DepFilesToMake_39;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__KeepGoing_41;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_60_60;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_63_63;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_71_71;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_72_72;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_73_73;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_74_74;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__STATE_VARIABLE_Info_75_75;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_77_77;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_80_80;
#line 163 "make.module_target.m"
                  MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 166 "make.module_target.m"
                  MR_Box make__module_target__conv1_STATE_VARIABLE_Info_63_63;
#line 172 "make.module_target.m"
                  MR_Word make__module_target__V_67_67;
#line 172 "make.module_target.m"
                  MR_Word make__module_target__V_30_30;
#line 172 "make.module_target.m"
                  MR_Word make__module_target__V_29_29;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_237_237;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_238_238;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_239_239;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_240_240;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_241_241;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_242_242;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_243_243;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_244_244;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_245_245;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_246_246;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_247_247;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_248_248;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_249_249;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_250_250;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_251_251;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_252_252;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_253_253;
#line 181 "make.module_target.m"
                  MR_Integer make__module_target__V_254_254;
#line 181 "make.module_target.m"
                  MR_Word make__module_target__V_255_255;
#line 181 "make.module_target.m"
                  MR_Box make__module_target__conv7_DepFiles0_34;
#line 181 "make.module_target.m"
                  MR_Box make__module_target__conv6_STATE_VARIABLE_Info_75_75;
#line 181 "make.module_target.m"
                  MR_Box make__module_target__conv5_STATE_VARIABLE_IO_76_76;
#line 188 "make.module_target.m"
                  MR_Word make__module_target__TargetType_37;
#line 188 "make.module_target.m"
                  MR_Word make__module_target__V_36_36;

#line 164 "make.module_target.m"
                  {
#line 164 "make.module_target.m"
                    make__module_target__touched_files_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__CompilationTaskType_25, &make__module_target__TouchedTargetFiles_27, &make__module_target__TouchedFiles_28, make__module_target__STATE_VARIABLE_Info_53_53, &make__module_target__STATE_VARIABLE_Info_60_60);
                  }
#line 9398 "make.module_target.c"
                  make__module_target__TypeCtorInfo_300_300 = (MR_Word) &make__make__type_ctor_info_target_file_0;
#line 9400 "make.module_target.c"
                  make__module_target__TypeCtorInfo_301_301 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 166 "make.module_target.m"
                  {
#line 166 "make.module_target.m"
                    mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[0], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_60_60)), &make__module_target__conv1_STATE_VARIABLE_Info_63_63);
                  }
#line 166 "make.module_target.m"
                  make__module_target__STATE_VARIABLE_Info_63_63 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_63_63);
#line 169 "make.module_target.m"
                  {
#line 169 "make.module_target.m"
                    make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "checking dependencies");
                  }
#line 172 "make.module_target.m"
                  make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
#line 172 "make.module_target.m"
                  make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
#line 172 "make.module_target.m"
                  make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_67_67)) == (MR_mktag((MR_Integer) 0)));
#line 172 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 172 "make.module_target.m"
                    {
#line 172 "make.module_target.m"
                      make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_67_67, (MR_Integer) 0)));
#line 173 "make.module_target.m"
                      {
#line 173 "make.module_target.m"
                        MR_Word make__module_target__V_68_68;
#line 173 "make.module_target.m"
                        MR_Word make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
#line 174 "make.module_target.m"
                        MR_String make__module_target__V_211_211 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
#line 174 "make.module_target.m"
                        MR_Word make__module_target__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
#line 174 "make.module_target.m"
                        MR_String make__module_target__V_236_236 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

#line 174 "make.module_target.m"
                        {
#line 174 "make.module_target.m"
                          make__module_target__V_68_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__module_target__V_69_69);
                        }
#line 173 "make.module_target.m"
                        {
#line 173 "make.module_target.m"
                          make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "make.module_target.m"
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 173 "make.module_target.m"
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (make__module_target__V_68_68));
#line 173 "make.module_target.m"
                        }
#line 173 "make.module_target.m"
                      }
#line 172 "make.module_target.m"
                    }
#line 172 "make.module_target.m"
                  else
#line 176 "make.module_target.m"
                    {
#line 176 "make.module_target.m"
                      {
#line 176 "make.module_target.m"
                        make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 176 "make.module_target.m"
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "make.module_target.m"
                      }
#line 176 "make.module_target.m"
                    }
#line 178 "make.module_target.m"
                  {
#line 178 "make.module_target.m"
                    make__dependencies__module_names_to_index_set_4_p_0(make__module_target__ModulesToCheck_31, &make__module_target__ModulesToCheckSet_32, make__module_target__STATE_VARIABLE_Info_63_63, &make__module_target__STATE_VARIABLE_Info_71_71);
                  }
#line 181 "make.module_target.m"
                  make__module_target__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 0)));
#line 181 "make.module_target.m"
                  make__module_target__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 1)));
#line 181 "make.module_target.m"
                  make__module_target__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 2)));
#line 181 "make.module_target.m"
                  make__module_target__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 3)));
#line 181 "make.module_target.m"
                  make__module_target__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 4)));
#line 181 "make.module_target.m"
                  make__module_target__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 5)));
#line 181 "make.module_target.m"
                  make__module_target__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 6)));
#line 181 "make.module_target.m"
                  make__module_target__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 7)));
#line 181 "make.module_target.m"
                  make__module_target__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 8)));
#line 181 "make.module_target.m"
                  make__module_target__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 9)));
#line 181 "make.module_target.m"
                  make__module_target__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 10)));
#line 181 "make.module_target.m"
                  make__module_target__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 11)));
#line 181 "make.module_target.m"
                  make__module_target__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 12)));
#line 181 "make.module_target.m"
                  make__module_target__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 13)));
#line 181 "make.module_target.m"
                  make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 14)));
#line 181 "make.module_target.m"
                  make__module_target__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 15)));
#line 181 "make.module_target.m"
                  make__module_target__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 16)));
#line 181 "make.module_target.m"
                  make__module_target__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 17)));
#line 181 "make.module_target.m"
                  make__module_target__V_254_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 18)));
#line 181 "make.module_target.m"
                  make__module_target__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 19)));
#line 182 "make.module_target.m"
                  {
#line 182 "make.module_target.m"
                    make__module_target__V_77_77 = make__dependencies__target_dependencies_2_f_0(make__module_target__Globals_10, make__module_target__FileType_18);
                  }
#line 182 "make.module_target.m"
                  {
#line 182 "make.module_target.m"
                    make__module_target__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 182 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
#line 182 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_2));
#line 182 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 182 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 3) = ((MR_Box) (make__module_target__V_77_77));
#line 182 "make.module_target.m"
                  }
#line 183 "make.module_target.m"
                  {
#line 183 "make.module_target.m"
                    make__module_target__V_74_74 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
                  }
#line 181 "make.module_target.m"
                  {
#line 181 "make.module_target.m"
                    make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__module_target_scalar_common_1[1], make__module_target__TypeCtorInfo_301_301, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make__module_target_scalar_common_1[0], make__module_target__V_72_72, make__module_target__V_73_73, make__module_target__Globals_10, make__module_target__ModulesToCheckSet_32, &make__module_target__DepsSuccess_33, ((MR_Box) (make__module_target__V_74_74)), &make__module_target__conv7_DepFiles0_34, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_71_71)), &make__module_target__conv6_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv5_STATE_VARIABLE_IO_76_76);
                  }
#line 181 "make.module_target.m"
                  make__module_target__DepFiles0_34 = ((MR_Word) make__module_target__conv7_DepFiles0_34);
#line 181 "make.module_target.m"
                  make__module_target__STATE_VARIABLE_Info_75_75 = ((MR_Word) make__module_target__conv6_STATE_VARIABLE_Info_75_75);
#line 185 "make.module_target.m"
                  {
#line 185 "make.module_target.m"
                    make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_75_75, make__module_target__DepFiles0_34, &make__module_target__DepFilesSet0_35);
                  }
#line 188 "make.module_target.m"
                  make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
#line 188 "make.module_target.m"
                  make__module_target__TargetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
#line 189 "make.module_target.m"
                  make__module_target__succeeded = (make__module_target__TargetType_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 198 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 195 "make.module_target.m"
                    {
#line 195 "make.module_target.m"
                      MR_Word make__module_target__TypeCtorInfo_317_317;
#line 195 "make.module_target.m"
                      MR_Word make__module_target__PrivateInts_38;
#line 195 "make.module_target.m"
                      MR_Word make__module_target__V_79_79;

#line 194 "make.module_target.m"
                      {
#line 194 "make.module_target.m"
                        make__module_target__PrivateInts_38 = make__util__make_dependency_list_2_f_0(make__module_target__ModulesToCheck_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                      }
#line 9625 "make.module_target.c"
                      make__module_target__TypeCtorInfo_317_317 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 197 "make.module_target.m"
                      {
#line 197 "make.module_target.m"
                        make__module_target__V_79_79 = mercury__set__delete_list_2_f_0(make__module_target__TypeCtorInfo_317_317, make__module_target__DepFilesSet0_35, make__module_target__PrivateInts_38);
                      }
#line 196 "make.module_target.m"
                      {
#line 196 "make.module_target.m"
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_317_317, make__module_target__V_79_79);
                      }
#line 195 "make.module_target.m"
                    }
#line 198 "make.module_target.m"
                  else
#line 199 "make.module_target.m"
                    {
#line 199 "make.module_target.m"
                      {
#line 199 "make.module_target.m"
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__DepFilesSet0_35);
                      }
#line 199 "make.module_target.m"
                    }
#line 202 "make.module_target.m"
                  {
#line 202 "make.module_target.m"
                    make__module_target__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_3));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 3) = ((MR_Box) (make__module_target__Globals_10));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 4) = ((MR_Box) (make__module_target__TargetFile_11));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 5) = ((MR_Box) (make__module_target__DepFiles0_34));
#line 202 "make.module_target.m"
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 6) = ((MR_Box) (make__module_target__STATE_VARIABLE_Info_75_75));
#line 202 "make.module_target.m"
                  }
#line 202 "make.module_target.m"
                  {
#line 202 "make.module_target.m"
                    make__util__debug_make_msg_4_p_0(make__module_target__Globals_10, make__module_target__V_80_80);
                  }
#line 212 "make.module_target.m"
                  {
#line 212 "make.module_target.m"
                    libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 610, &make__module_target__KeepGoing_41);
                  }
#line 214 "make.module_target.m"
                  make__module_target__succeeded = (make__module_target__DepsSuccess_33 == (MR_Integer) 0);
#line 214 "make.module_target.m"
                  if (make__module_target__succeeded)
#line 215 "make.module_target.m"
                    make__module_target__succeeded = (make__module_target__KeepGoing_41 == (MR_Integer) 0);
#line 9686 "make.module_target.c"
                  if (make__module_target__succeeded)
#line 9688 "make.module_target.c"
                    {
#line 233 "make.module_target.m"
                      MR_Box make__module_target__conv9_STATE_VARIABLE_Info_45;

#line 232 "make.module_target.m"
                      *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 233 "make.module_target.m"
                      {
#line 233 "make.module_target.m"
                        mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[1], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_75_75)), &make__module_target__conv9_STATE_VARIABLE_Info_45);
                      }
#line 233 "make.module_target.m"
                      *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv9_STATE_VARIABLE_Info_45);
#line 9702 "make.module_target.c"
                    }
#line 9704 "make.module_target.c"
                  else
#line 9706 "make.module_target.c"
                    {
#line 9708 "make.module_target.c"
                      MR_Word make__module_target__DepsResult0_43;
#line 9710 "make.module_target.c"
                      MR_Word make__module_target__STATE_VARIABLE_Info_92_334;

#line 219 "make.module_target.m"
                      {
#line 219 "make.module_target.m"
                        make__module_target__make_dependency_files_10_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__DepFilesToMake_39, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, &make__module_target__DepsResult0_43, make__module_target__STATE_VARIABLE_Info_75_75, &make__module_target__STATE_VARIABLE_Info_92_334);
                      }
#line 9718 "make.module_target.c"
#line 9719 "make.module_target.c"
                      switch (make__module_target__DepsSuccess_33) {
#line 9721 "make.module_target.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 9723 "make.module_target.c"
                        case (MR_Integer) 0:
#line 9725 "make.module_target.c"
                          {
#line 233 "make.module_target.m"
                            MR_Box make__module_target__conv11_STATE_VARIABLE_Info_45;

#line 232 "make.module_target.m"
                            *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 233 "make.module_target.m"
                            {
#line 233 "make.module_target.m"
                              mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[2], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_334)), &make__module_target__conv11_STATE_VARIABLE_Info_45);
                            }
#line 233 "make.module_target.m"
                            *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv11_STATE_VARIABLE_Info_45);
#line 9739 "make.module_target.c"
                          }
#line 9741 "make.module_target.c"
                          break;
#line 9743 "make.module_target.c"
                        case (MR_Integer) 1:
#line 235 "make.module_target.m"
#line 235 "make.module_target.m"
                          switch (make__module_target__DepsResult0_43) {
#line 235 "make.module_target.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 235 "make.module_target.m"
                            case (MR_Integer) 2:
#line 231 "make.module_target.m"
                              {
#line 233 "make.module_target.m"
                                MR_Box make__module_target__conv13_STATE_VARIABLE_Info_45;

#line 232 "make.module_target.m"
                                *make__module_target__Succeeded_12 = (MR_Integer) 0;
#line 233 "make.module_target.m"
                                {
#line 233 "make.module_target.m"
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[3], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_334)), &make__module_target__conv13_STATE_VARIABLE_Info_45);
                                }
#line 233 "make.module_target.m"
                                *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv13_STATE_VARIABLE_Info_45);
#line 231 "make.module_target.m"
                              }
#line 235 "make.module_target.m"
                              break;
#line 235 "make.module_target.m"
                            case (MR_Integer) 1:
#line 236 "make.module_target.m"
                              {
#line 236 "make.module_target.m"
                                MR_Word make__module_target__STATE_VARIABLE_Info_104_104;
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_105_105;
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 17)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_107_107;
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_108_108;
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 0)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 1)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 2)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 3)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 4)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 5)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 6)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 7)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 8)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 9)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 10)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 11)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 12)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 13)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 14)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 15)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 16)));
#line 236 "make.module_target.m"
                                MR_Integer make__module_target__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 18)));
#line 236 "make.module_target.m"
                                MR_Word make__module_target__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 19)));

#line 239 "make.module_target.m"
                                {
#line 239 "make.module_target.m"
                                  make__module_target__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_108_108, 0) = ((MR_Box) (make__module_target__FileType_18));
#line 239 "make.module_target.m"
                                }
#line 239 "make.module_target.m"
                                {
#line 239 "make.module_target.m"
                                  make__module_target__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_107_107, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 239 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_107_107, 1) = ((MR_Box) (make__module_target__V_108_108));
#line 239 "make.module_target.m"
                                }
#line 238 "make.module_target.m"
                                {
#line 238 "make.module_target.m"
                                  make__module_target__V_105_105 = mercury__set__delete_2_f_0((MR_Word) &make__module_target_scalar_common_2[0], make__module_target__V_106_106, ((MR_Box) (make__module_target__V_107_107)));
                                }
#line 237 "make.module_target.m"
                                {
#line 237 "make.module_target.m"
                                  make__module_target__STATE_VARIABLE_Info_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 0) = ((MR_Box) (make__module_target__V_256_256));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 1) = ((MR_Box) (make__module_target__V_257_257));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 2) = ((MR_Box) (make__module_target__V_258_258));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 3) = ((MR_Box) (make__module_target__V_259_259));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 4) = ((MR_Box) (make__module_target__V_260_260));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 5) = ((MR_Box) (make__module_target__V_261_261));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 6) = ((MR_Box) (make__module_target__V_262_262));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 7) = ((MR_Box) (make__module_target__V_263_263));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 8) = ((MR_Box) (make__module_target__V_264_264));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 9) = ((MR_Box) (make__module_target__V_265_265));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 10) = ((MR_Box) (make__module_target__V_266_266));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 11) = ((MR_Box) (make__module_target__V_267_267));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 12) = ((MR_Box) (make__module_target__V_268_268));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 13) = ((MR_Box) (make__module_target__V_269_269));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 14) = ((MR_Box) (make__module_target__V_270_270));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 15) = ((MR_Box) (make__module_target__V_271_271));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 16) = ((MR_Box) (make__module_target__V_272_272));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 17) = ((MR_Box) (make__module_target__V_105_105));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 18) = ((MR_Box) (make__module_target__V_273_273));
#line 237 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 19) = ((MR_Box) (make__module_target__V_274_274));
#line 237 "make.module_target.m"
                                }
#line 240 "make.module_target.m"
                                {
#line 240 "make.module_target.m"
                                  make__module_target__build_target_12_p_0(make__module_target__Globals_10, make__module_target__CompilationTask_21, make__module_target__TargetFile_11, make__module_target__Imports_20, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, make__module_target__ExtraOptions_9, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_104_104, make__module_target__STATE_VARIABLE_Info_45);
#line 240 "make.module_target.m"
                                  return;
                                }
#line 236 "make.module_target.m"
                              }
#line 235 "make.module_target.m"
                              break;
#line 235 "make.module_target.m"
                            case (MR_Integer) 0:
#line 244 "make.module_target.m"
                              {
#line 244 "make.module_target.m"
                                MR_Word make__module_target__V_94_94;
#line 244 "make.module_target.m"
                                MR_Word make__module_target__STATE_VARIABLE_Info_95_95;
#line 244 "make.module_target.m"
                                MR_Word make__module_target__V_97_97;
#line 244 "make.module_target.m"
                                MR_Word make__module_target__V_101_101;
#line 249 "make.module_target.m"
                                MR_Box make__module_target__conv15_STATE_VARIABLE_Info_45;

#line 246 "make.module_target.m"
                                {
#line 246 "make.module_target.m"
                                  make__module_target__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 246 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 0) = ((MR_Box) (make__module_target__FileType_18));
#line 246 "make.module_target.m"
                                }
#line 246 "make.module_target.m"
                                {
#line 246 "make.module_target.m"
                                  make__module_target__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_94_94, 0) = ((MR_Box) (make__module_target__ModuleName_17));
#line 246 "make.module_target.m"
                                  MR_hl_field(MR_mktag(0), make__module_target__V_94_94, 1) = ((MR_Box) (make__module_target__V_97_97));
#line 246 "make.module_target.m"
                                }
#line 245 "make.module_target.m"
                                {
#line 245 "make.module_target.m"
                                  make__util__maybe_warn_up_to_date_target_6_p_0(make__module_target__Globals_10, make__module_target__V_94_94, make__module_target__STATE_VARIABLE_Info_92_334, &make__module_target__STATE_VARIABLE_Info_95_95);
                                }
#line 247 "make.module_target.m"
                                {
#line 247 "make.module_target.m"
                                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "up to date");
                                }
#line 248 "make.module_target.m"
                                *make__module_target__Succeeded_12 = (MR_Integer) 1;
#line 250 "make.module_target.m"
                                {
#line 250 "make.module_target.m"
                                  make__module_target__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "make.module_target.m"
                                  MR_hl_field(MR_mktag(1), make__module_target__V_101_101, 0) = ((MR_Box) (make__module_target__TargetFile_11));
#line 250 "make.module_target.m"
                                  MR_hl_field(MR_mktag(1), make__module_target__V_101_101, 1) = ((MR_Box) (make__module_target__TouchedTargetFiles_27));
#line 250 "make.module_target.m"
                                }
#line 249 "make.module_target.m"
                                {
#line 249 "make.module_target.m"
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[4], make__module_target__V_101_101, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_95_95)), &make__module_target__conv15_STATE_VARIABLE_Info_45);
                                }
#line 249 "make.module_target.m"
                                *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv15_STATE_VARIABLE_Info_45);
#line 244 "make.module_target.m"
                              }
#line 235 "make.module_target.m"
                              break;
#line 235 "make.module_target.m"
                          }
#line 9971 "make.module_target.c"
                          break;
#line 9973 "make.module_target.c"
                      }
#line 9975 "make.module_target.c"
                    }
#line 163 "make.module_target.m"
                }
#line 147 "make.module_target.m"
            }
#line 139 "make.module_target.m"
        }
#line 254 "make.module_target.m"
        break;
#line 254 "make.module_target.m"
      case (MR_Integer) 2:
#line 255 "make.module_target.m"
        {
#line 256 "make.module_target.m"
          *make__module_target__Succeeded_12 = (MR_Integer) 1;
#line 255 "make.module_target.m"
          *make__module_target__STATE_VARIABLE_Info_45 = make__module_target__STATE_VARIABLE_Info_48_48;
#line 255 "make.module_target.m"
        }
#line 254 "make.module_target.m"
        break;
#line 254 "make.module_target.m"
    }
#line 135 "make.module_target.m"
  }
#line 130 "make.module_target.m"
}

#line 1043 "make.module_target.m"
static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
#line 1043 "make.module_target.m"
  MR_Box make__module_target__closure_arg,
#line 1043 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_1,
#line 1043 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_2,
#line 1043 "make.module_target.m"
  MR_Box make__module_target__wrapper_arg_3,
#line 1043 "make.module_target.m"
  MR_Box * make__module_target__wrapper_arg_4)
#line 1043 "make.module_target.m"
{
#line 1043 "make.module_target.m"
  {
#line 1043 "make.module_target.m"
    MR_Box make__module_target__closure = make__module_target__closure_arg;
#line 1043 "make.module_target.m"
    MR_Word make__module_target__conv0_FactTableForeignFile_12;

#line 1043 "make.module_target.m"
    {
#line 1043 "make.module_target.m"
      make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv0_FactTableForeignFile_12);
    }
#line 1043 "make.module_target.m"
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_FactTableForeignFile_12));
#line 1043 "make.module_target.m"
  }
#line 1043 "make.module_target.m"
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
#line 1027 "make.module_target.m"
  {
#line 1027 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 1027 "make.module_target.m"
    MR_String make__module_target__ObjExt_12;
#line 1027 "make.module_target.m"
    MR_Word make__module_target__CompilationTarget_13;
#line 1027 "make.module_target.m"
    MR_Word make__module_target__ModuleName_14;
#line 1027 "make.module_target.m"
    MR_Word make__module_target__ForeignFiles0_15;
#line 1027 "make.module_target.m"
    MR_Word make__module_target__V_32_32;
#line 1033 "make.module_target.m"
    MR_String make__module_target__V_22_22;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_23_23;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_24_24;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_25_25;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_26_26;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_27_27;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_28_28;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_29_29;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_30_30;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_31_31;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_33_33;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_34_34;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_35_35;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_36_36;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_37_37;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_38_38;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_39_39;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_40_40;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_41_41;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_42_42;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_43_43;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_44_44;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_45_45;
#line 1033 "make.module_target.m"
    MR_Word make__module_target__V_46_46;
#line 1033 "make.module_target.m"
    MR_String make__module_target__V_47_47;

#line 1031 "make.module_target.m"
    {
#line 1031 "make.module_target.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_7, make__module_target__PIC_8, &make__module_target__ObjExt_12);
    }
#line 1032 "make.module_target.m"
    {
#line 1032 "make.module_target.m"
      libs__globals__get_target_2_p_0(make__module_target__Globals_7, &make__module_target__CompilationTarget_13);
    }
#line 1033 "make.module_target.m"
    make__module_target__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 0)));
#line 1033 "make.module_target.m"
    make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 1)));
#line 1033 "make.module_target.m"
    make__module_target__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 2)));
#line 1033 "make.module_target.m"
    make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 3)));
#line 1033 "make.module_target.m"
    make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 4)));
#line 1033 "make.module_target.m"
    make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 5)));
#line 1033 "make.module_target.m"
    make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 6)));
#line 1033 "make.module_target.m"
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 7)));
#line 1033 "make.module_target.m"
    make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 8)));
#line 1033 "make.module_target.m"
    make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 9)));
#line 1033 "make.module_target.m"
    make__module_target__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 10)));
#line 1033 "make.module_target.m"
    make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 11)));
#line 1033 "make.module_target.m"
    make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 12)));
#line 1033 "make.module_target.m"
    make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 13)));
#line 1033 "make.module_target.m"
    make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 14)));
#line 1033 "make.module_target.m"
    make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 15)));
#line 1033 "make.module_target.m"
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 16)));
#line 1033 "make.module_target.m"
    make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 17)));
#line 1033 "make.module_target.m"
    make__module_target__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 18)));
#line 1033 "make.module_target.m"
    make__module_target__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 19)));
#line 1033 "make.module_target.m"
    make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 20)));
#line 1033 "make.module_target.m"
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 21)));
#line 1033 "make.module_target.m"
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 22)));
#line 1033 "make.module_target.m"
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 23)));
#line 1033 "make.module_target.m"
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 24)));
#line 1033 "make.module_target.m"
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 25)));
#line 1033 "make.module_target.m"
    make__module_target__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 26)));
#line 1037 "make.module_target.m"
    make__module_target__ForeignFiles0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1046 "make.module_target.m"
#line 1046 "make.module_target.m"
    switch (make__module_target__CompilationTarget_13) {
#line 1046 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1046 "make.module_target.m"
      case (MR_Integer) 0:
#line 1041 "make.module_target.m"
        {
#line 1041 "make.module_target.m"
          MR_Word make__module_target__TypeCtorInfo_79_79;
#line 1041 "make.module_target.m"
          MR_Word make__module_target__FactTableForeignFiles_16;
#line 1041 "make.module_target.m"
          MR_Word make__module_target__V_19_19;
#line 1042 "make.module_target.m"
          MR_Box make__module_target__conv1_STATE_VARIABLE_IO_18;

#line 1043 "make.module_target.m"
          {
#line 1043 "make.module_target.m"
            make__module_target__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 3) = ((MR_Box) (make__module_target__Globals_7));
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 4) = ((MR_Box) (make__module_target__ObjExt_12));
#line 1043 "make.module_target.m"
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 5) = ((MR_Box) (make__module_target__ModuleName_14));
#line 1043 "make.module_target.m"
          }
#line 10218 "make.module_target.c"
          make__module_target__TypeCtorInfo_79_79 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
#line 1042 "make.module_target.m"
          {
#line 1042 "make.module_target.m"
            mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_79_79, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_19_19, make__module_target__V_32_32, &make__module_target__FactTableForeignFiles_16, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_18);
          }
#line 1045 "make.module_target.m"
          {
#line 1045 "make.module_target.m"
            *make__module_target__ForeignFiles_10 = mercury__list__f_43_43_2_f_0(make__module_target__TypeCtorInfo_79_79, make__module_target__ForeignFiles0_15, make__module_target__FactTableForeignFiles_16);
          }
#line 1041 "make.module_target.m"
        }
#line 1046 "make.module_target.m"
        break;
#line 1046 "make.module_target.m"
      case (MR_Integer) 1:
#line 1046 "make.module_target.m"
      case (MR_Integer) 3:
#line 1046 "make.module_target.m"
      case (MR_Integer) 2:
#line 1051 "make.module_target.m"
        *make__module_target__ForeignFiles_10 = make__module_target__ForeignFiles0_15;
#line 1046 "make.module_target.m"
        break;
#line 1046 "make.module_target.m"
    }
#line 1027 "make.module_target.m"
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
#line 720 "make.module_target.m"
  {
#line 720 "make.module_target.m"
    MR_bool make__module_target__succeeded;
#line 720 "make.module_target.m"
    MR_Word make__module_target__TouchedTargetFiles_15;
#line 720 "make.module_target.m"
    MR_Word make__module_target__TouchedFiles_16;
#line 720 "make.module_target.m"
    MR_Word make__module_target__STATE_VARIABLE_Info_21_21;

#line 867 "make.module_target.m"
#line 867 "make.module_target.m"
    switch (MR_tag((MR_Word) make__module_target__CompilationTask_11)) {
#line 867 "make.module_target.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "make.module_target.m"
      case (MR_Integer) 0:
#line 867 "make.module_target.m"
        {
#line 867 "make.module_target.m"
          MR_Word make__module_target__ModuleTask_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_11, (MR_Integer) 0)));

#line 868 "make.module_target.m"
          {
#line 868 "make.module_target.m"
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_9, make__module_target__TargetFile_10, make__module_target__ModuleTask_36, &make__module_target__TouchedTargetFiles_15, &make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_0_17, &make__module_target__STATE_VARIABLE_Info_21_21);
          }
#line 867 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 1:
#line 871 "make.module_target.m"
        {
#line 872 "make.module_target.m"
          {
#line 872 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 872 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "make.module_target.m"
          }
#line 873 "make.module_target.m"
          make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 871 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 2:
#line 875 "make.module_target.m"
        {
#line 875 "make.module_target.m"
          MR_Word make__module_target__PIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 0)));
#line 875 "make.module_target.m"
          MR_Word make__module_target__Lang_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 1)));
#line 875 "make.module_target.m"
          MR_Word make__module_target__ModuleName_40;
#line 875 "make.module_target.m"
          MR_Word make__module_target__ForeignCodeFile_42;
#line 875 "make.module_target.m"
          MR_String make__module_target__ForeignObjectFile_43;
#line 877 "make.module_target.m"
          MR_Word make__module_target__V_41_41;
#line 880 "make.module_target.m"
          MR_Word make__module_target__V_60_60;
#line 880 "make.module_target.m"
          MR_String make__module_target__V_61_61;

#line 876 "make.module_target.m"
          {
#line 876 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 876 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "make.module_target.m"
          }
#line 877 "make.module_target.m"
          make__module_target__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
#line 877 "make.module_target.m"
          make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
#line 878 "make.module_target.m"
          {
#line 878 "make.module_target.m"
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_9, make__module_target__ModuleName_40, make__module_target__PIC_38, make__module_target__Lang_39, &make__module_target__ForeignCodeFile_42);
          }
#line 880 "make.module_target.m"
          make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 0)));
#line 880 "make.module_target.m"
          make__module_target__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 1)));
#line 880 "make.module_target.m"
          make__module_target__ForeignObjectFile_43 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 2)));
#line 881 "make.module_target.m"
          {
#line 881 "make.module_target.m"
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_43));
#line 881 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "make.module_target.m"
          }
#line 875 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 875 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
      case (MR_Integer) 3:
#line 883 "make.module_target.m"
        {
#line 883 "make.module_target.m"
          MR_String make__module_target__FactTableName_44 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 1)));
#line 883 "make.module_target.m"
          MR_String make__module_target__ObjExt_46;
#line 883 "make.module_target.m"
          MR_String make__module_target__FactTableObjectFile_47;
#line 883 "make.module_target.m"
          MR_Word make__module_target__PIC_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 0)));
#line 883 "make.module_target.m"
          MR_Word make__module_target__ModuleName_59;
#line 883 "make.module_target.m"
          MR_Word make__module_target__CompilationTarget_65;
#line 885 "make.module_target.m"
          MR_Word make__module_target__V_45_45;

#line 884 "make.module_target.m"
          {
#line 884 "make.module_target.m"
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
#line 884 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "make.module_target.m"
          }
#line 885 "make.module_target.m"
          make__module_target__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
#line 885 "make.module_target.m"
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
#line 609 "make.module_target.m"
          {
#line 609 "make.module_target.m"
            libs__globals__get_target_2_p_0(make__module_target__Globals_9, &make__module_target__CompilationTarget_65);
          }
#line 613 "make.module_target.m"
#line 613 "make.module_target.m"
          switch (make__module_target__CompilationTarget_65) {
#line 613 "make.module_target.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 613 "make.module_target.m"
            case (MR_Integer) 0:
#line 612 "make.module_target.m"
              {
#line 612 "make.module_target.m"
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_9, make__module_target__PIC_58, &make__module_target__ObjExt_46);
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 1:
#line 614 "make.module_target.m"
              {
#line 615 "make.module_target.m"
                {
#line 615 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
#line 615 "make.module_target.m"
                  return;
                }
#line 614 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 3:
#line 620 "make.module_target.m"
              {
#line 621 "make.module_target.m"
                {
#line 621 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
#line 621 "make.module_target.m"
                  return;
                }
#line 620 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
            case (MR_Integer) 2:
#line 617 "make.module_target.m"
              {
#line 618 "make.module_target.m"
                {
#line 618 "make.module_target.m"
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
#line 618 "make.module_target.m"
                  return;
                }
#line 617 "make.module_target.m"
              }
#line 613 "make.module_target.m"
              break;
#line 613 "make.module_target.m"
          }
#line 887 "make.module_target.m"
          {
#line 887 "make.module_target.m"
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_9, make__module_target__ModuleName_59, make__module_target__FactTableName_44, make__module_target__ObjExt_46, (MR_Integer) 0, &make__module_target__FactTableObjectFile_47);
          }
#line 889 "make.module_target.m"
          {
#line 889 "make.module_target.m"
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_47));
#line 889 "make.module_target.m"
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "make.module_target.m"
          }
#line 883 "make.module_target.m"
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
#line 883 "make.module_target.m"
        }
#line 867 "make.module_target.m"
        break;
#line 867 "make.module_target.m"
    }
#line 723 "make.module_target.m"
    {
#line 723 "make.module_target.m"
      make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_9, make__module_target__Succeeded_12, make__module_target__TargetFile_10, make__module_target__TouchedTargetFiles_15, make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_21_21, make__module_target__STATE_VARIABLE_Info_18);
#line 723 "make.module_target.m"
      return;
    }
#line 720 "make.module_target.m"
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
#line 112 "make.module_target.m"
  {
#line 112 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 112 "make.module_target.m"
    if (((MR_tag((MR_Word) make__module_target__Dep_11)) == (MR_mktag((MR_Integer) 1))))
#line 112 "make.module_target.m"
      {
#line 112 "make.module_target.m"
        MR_Word make__module_target__Status_17;

#line 113 "make.module_target.m"
        {
#line 113 "make.module_target.m"
          make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_11, &make__module_target__Status_17, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
        }
#line 117 "make.module_target.m"
        *make__module_target__Succeeded_12 = ((&make__module_target_vector_common_4[0 + make__module_target__Status_17]))->make__module_target__vector_common_type_4_0__vct_4_f_0;
#line 112 "make.module_target.m"
      }
#line 112 "make.module_target.m"
    else
#line 125 "make.module_target.m"
      {
#line 125 "make.module_target.m"
        MR_Word make__module_target__TargetFile_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Dep_11, (MR_Integer) 0)));

#line 126 "make.module_target.m"
        {
#line 126 "make.module_target.m"
          make__module_target__make_module_target_file_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__TargetFile_18, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
#line 126 "make.module_target.m"
          return;
        }
#line 125 "make.module_target.m"
      }
#line 112 "make.module_target.m"
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
#line 105 "make.module_target.m"
  {
#line 105 "make.module_target.m"
    MR_bool make__module_target__succeeded;

#line 106 "make.module_target.m"
    {
#line 106 "make.module_target.m"
      make__module_target__make_module_target_extra_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__module_target__Globals_8, make__module_target__DepFile_9, make__module_target__Succeeded_10, make__module_target__STATE_VARIABLE_Info_0_13, make__module_target__STATE_VARIABLE_Info_14);
#line 106 "make.module_target.m"
      return;
    }
#line 105 "make.module_target.m"
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
