/*
** Automatically generated from `mercury_compile.m'
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


/* :- module top_level.mercury_compile. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile__init
ENDINIT
*/

#include "top_level.mercury_compile.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "gc.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.xml_documentation.mih"
#include "erl_backend.elds.mih"
#include "hlds.code_model.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.write_deps_file.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "top_level.mercury_compile_erl_back_end.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.trans_opt.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 189 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 192 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 195 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 198 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 201 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 204 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 207 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 210 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 213 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 216 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 219 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 222 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0;

#line 225 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 228 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 231 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 234 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 237 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1];

#line 240 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0;

#line 243 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1];

#line 246 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1;

#line 249 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1];

#line 252 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1];

#line 255 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2];

#line 258 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2];

#line 261 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2];

#line 264 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 267 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 269 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 272 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 275 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 277 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 279 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 282 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 285 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 287 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 290 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 293 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 295 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 297 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_55_52_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1274 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 2111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 1231 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1231 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 756 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 756 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 756 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 1261 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1261 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16);

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1274__1_8_p_0(
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1274 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 1151 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1151__1_2_p_0(
#line 1151 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1151 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75);

#line 806 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 806 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 806 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1258 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1258 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2175 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 2111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2058 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2058 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2058 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2058 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8);

#line 2013 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2013 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 1977 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 1977 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 1940 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42);

#line 1917 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35);

#line 1827 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1827 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1827 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1803 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1803 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1688 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70);

#line 1651 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1651 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1522 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1522 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1522 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);

#line 1509 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1498 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1498 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 1509 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1485 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1485 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 1398 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48);

#line 1366 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1366 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1366 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 1366 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33);

#line 1341 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1341 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1341 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1339 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1339 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1339 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1318 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1318 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1318 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1307 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1305 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1305 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1305 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1294 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1294 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 1253 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1253 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1253 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5);

#line 1248 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_1,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1239 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1239 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1231 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1231 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1222 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1222 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1219 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1219 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1219 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1219 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1214 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1203 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1203 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1203 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1203 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24);

#line 1151 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1151 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1151 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1107 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1107 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1107 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 1085 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1085 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12);

#line 1012 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1012 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 993 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 993 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 990 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 990 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 986 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 986 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 969 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 969 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 969 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12);

#line 964 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 964 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 831 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 831 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_24,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);

#line 756 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 756 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 756 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 739 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 726 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 726 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 726 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 726 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 698 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 698 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 698 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9);

#line 665 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 665 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 665 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28);

#line 558 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 558 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 558 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 542 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8);

#line 505 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 505 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 505 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 422 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_1(
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 422 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 348 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14);

#line 200 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 200 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4);

#line 172 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 172 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 172 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6);

#line 132 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 132 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 132 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[29][2];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[1][4];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[6][3];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[2][6];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[4][1];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[2][12];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[2][10];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[3][5];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[1][7];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][11];




static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[29][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[3])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_scalar_common_1[0])),
    ((MR_Box) (&top_level__mercury_compile_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_4[1])),
    ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[1])),
    ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[2])),
    ((MR_Box) (top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[2])),
    ((MR_Box) (top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[2][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_file_or_module_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "top_level.mercury_compile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "make.util.mh"
#include "make.util.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1801 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1809 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1817 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1827 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1835 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1843 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1852 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1860 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1869 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1883 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1891 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1900 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0
  }
};

#line 1909 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1921 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1929 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1941 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1953 "top_level.mercury_compile.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_compile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile____Unify____compile_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile____Compare____compile_0_0_10001)),
  (MR_String) "top_level.mercury_compile",
  (MR_String) "compile",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1974 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1979 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL
};

#line 1994 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 1999 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL
};

#line 2014 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 2019 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2024 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1
  }
};

#line 2038 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2044 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2050 "top_level.mercury_compile.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile",
  (MR_String) "file_or_module",
  {
    top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0
  },
  {
    top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0
};

#line 2071 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 2074 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2076 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2078 "top_level.mercury_compile.c"
{
#line 2080 "top_level.mercury_compile.c"
  {
#line 2082 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2085 "top_level.mercury_compile.c"
    {
#line 2087 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2090 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2092 "top_level.mercury_compile.c"
  }
#line 2094 "top_level.mercury_compile.c"
}

#line 2097 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 2100 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2102 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2104 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2106 "top_level.mercury_compile.c"
{
#line 2108 "top_level.mercury_compile.c"
  {
#line 2110 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2113 "top_level.mercury_compile.c"
    {
#line 2115 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2118 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2120 "top_level.mercury_compile.c"
  }
#line 2122 "top_level.mercury_compile.c"
}

#line 2125 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 2128 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2130 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2132 "top_level.mercury_compile.c"
{
#line 2134 "top_level.mercury_compile.c"
  {
#line 2136 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2139 "top_level.mercury_compile.c"
    {
#line 2141 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2144 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2146 "top_level.mercury_compile.c"
  }
#line 2148 "top_level.mercury_compile.c"
}

#line 2151 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2154 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2156 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2158 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2160 "top_level.mercury_compile.c"
{
#line 2162 "top_level.mercury_compile.c"
  {
#line 2164 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2167 "top_level.mercury_compile.c"
    {
#line 2169 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2172 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2174 "top_level.mercury_compile.c"
  }
#line 2176 "top_level.mercury_compile.c"
}

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_55_52_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1274 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1274 "mercury_compile.m"
{
#line 1274 "mercury_compile.m"
  {
#line 1274 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1277 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_15, (MR_Integer) 1)));
#line 1277 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_HeadVar__4_31;
#line 1277 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_HeadVar__8_35;

#line 1277 "mercury_compile.m"
    {
#line 1277 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_15), ((MR_Box) (top_level__mercury_compile__HeadVar__2_29)), &top_level__mercury_compile__conv2_HeadVar__4_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_HeadVar__8_35);
    }
#line 1277 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__4_31 = ((MR_Word) top_level__mercury_compile__conv2_HeadVar__4_31);
#line 1274 "mercury_compile.m"
  }
#line 1274 "mercury_compile.m"
}

#line 2111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2111 "mercury_compile.m"
{
#line 2117 "mercury_compile.m"
  {
#line 2117 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2117 "mercury_compile.m"
    if ((top_level__mercury_compile__FileType_13 == (MR_Integer) 1))
#line 2117 "mercury_compile.m"
      {
#line 2123 "mercury_compile.m"
        {
#line 2123 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "csharp");
        }
#line 2124 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2124 "mercury_compile.m"
          {
#line 2124 "mercury_compile.m"
            {
#line 2124 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "erlang");
            }
#line 2124 "mercury_compile.m"
            if (!(top_level__mercury_compile__succeeded))
#line 2125 "mercury_compile.m"
              {
#line 2125 "mercury_compile.m"
                {
#line 2125 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "java");
                }
#line 2125 "mercury_compile.m"
              }
#line 2124 "mercury_compile.m"
          }
#line 2130 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2128 "mercury_compile.m"
          {
#line 2128 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_30_30;

#line 2129 "mercury_compile.m"
            {
#line 2129 "mercury_compile.m"
              top_level__mercury_compile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2129 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2129 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2129 "mercury_compile.m"
            }
#line 2129 "mercury_compile.m"
            {
#line 2129 "mercury_compile.m"
              MR_Word base;
#line 2129 "mercury_compile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2129 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2129 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2129 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 2129 "mercury_compile.m"
            }
#line 2128 "mercury_compile.m"
          }
#line 2130 "mercury_compile.m"
        else
#line 2134 "mercury_compile.m"
          {
#line 2134 "mercury_compile.m"
            MR_String top_level__mercury_compile__InitFile_17;
#line 2134 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Result_18;
#line 2134 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_31_31;

#line 2134 "mercury_compile.m"
            {
#line 2134 "mercury_compile.m"
              top_level__mercury_compile__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12);
            }
#line 2134 "mercury_compile.m"
            {
#line 2134 "mercury_compile.m"
              top_level__mercury_compile__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__V_31_31, (MR_String) "mer_std.init");
            }
#line 2135 "mercury_compile.m"
            {
#line 2135 "mercury_compile.m"
              mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[28]), &top_level__mercury_compile__Result_18);
            }
#line 2140 "mercury_compile.m"
            if ((top_level__mercury_compile__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2137 "mercury_compile.m"
              {
#line 2137 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_40_40;

#line 2139 "mercury_compile.m"
                {
#line 2139 "mercury_compile.m"
                  top_level__mercury_compile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2139 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2139 "mercury_compile.m"
                }
#line 2139 "mercury_compile.m"
                {
#line 2139 "mercury_compile.m"
                  MR_Word base;
#line 2139 "mercury_compile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2139 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2139 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_40_40));
#line 2139 "mercury_compile.m"
                }
#line 2137 "mercury_compile.m"
              }
#line 2140 "mercury_compile.m"
            else
#line 2141 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2134 "mercury_compile.m"
          }
#line 2144 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2117 "mercury_compile.m"
      }
#line 2117 "mercury_compile.m"
    else
#line 2156 "mercury_compile.m"
      {
#line 2157 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2157 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2156 "mercury_compile.m"
      }
#line 2117 "mercury_compile.m"
  }
#line 2111 "mercury_compile.m"
}

#line 1231 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1231 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1231 "mercury_compile.m"
{
#line 1236 "mercury_compile.m"
  {
#line 1236 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1236 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1236 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1237 "mercury_compile.m"
    {
#line 1237 "mercury_compile.m"
      parse_tree__modules__make_short_interface_6_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__Items_13);
#line 1237 "mercury_compile.m"
      return;
    }
#line 1236 "mercury_compile.m"
  }
#line 1231 "mercury_compile.m"
}

#line 756 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 756 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 756 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 756 "mercury_compile.m"
{
#line 762 "mercury_compile.m"
  {
#line 762 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 762 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_15;
#line 762 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_16;
#line 762 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateDeps_29;

#line 761 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__5_5 = (MR_Integer) 1;
#line 772 "mercury_compile.m"
    {
#line 772 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 91, &top_level__mercury_compile__GenerateDeps_29);
    }
#line 784 "mercury_compile.m"
    if ((top_level__mercury_compile__GenerateDeps_29 == (MR_Integer) 0))
#line 785 "mercury_compile.m"
      {
#line 785 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDepFile_32;

#line 786 "mercury_compile.m"
        {
#line 786 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 90, &top_level__mercury_compile__GenerateDepFile_32);
        }
#line 799 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDepFile_32 == (MR_Integer) 0))
#line 801 "mercury_compile.m"
          {
#line 801 "mercury_compile.m"
            top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__Modules_15, &top_level__mercury_compile__ExtraObjFiles_16);
          }
#line 799 "mercury_compile.m"
        else
#line 789 "mercury_compile.m"
          {
#line 790 "mercury_compile.m"
            top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "mercury_compile.m"
            top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 793 "mercury_compile.m"
              {
#line 793 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 794 "mercury_compile.m"
                {
#line 794 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_40);
                }
#line 793 "mercury_compile.m"
              }
#line 795 "mercury_compile.m"
            else
#line 796 "mercury_compile.m"
              {
#line 796 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 797 "mercury_compile.m"
                {
#line 797 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_41);
                }
#line 796 "mercury_compile.m"
              }
#line 789 "mercury_compile.m"
          }
#line 785 "mercury_compile.m"
      }
#line 784 "mercury_compile.m"
    else
#line 774 "mercury_compile.m"
      {
#line 775 "mercury_compile.m"
        top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "mercury_compile.m"
        top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 778 "mercury_compile.m"
          {
#line 778 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 779 "mercury_compile.m"
            {
#line 779 "mercury_compile.m"
              parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_30);
            }
#line 778 "mercury_compile.m"
          }
#line 780 "mercury_compile.m"
        else
#line 781 "mercury_compile.m"
          {
#line 781 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 782 "mercury_compile.m"
            {
#line 782 "mercury_compile.m"
              parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_31);
            }
#line 781 "mercury_compile.m"
          }
#line 774 "mercury_compile.m"
      }
#line 762 "mercury_compile.m"
    {
#line 762 "mercury_compile.m"
      MR_Tuple base;
#line 762 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__7_7 = base;
#line 762 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_15));
#line 762 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_16));
#line 762 "mercury_compile.m"
    }
#line 762 "mercury_compile.m"
  }
#line 756 "mercury_compile.m"
}

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 1274 "mercury_compile.m"
{
#line 1274 "mercury_compile.m"
  {
#line 1274 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1274 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_31;

#line 1274 "mercury_compile.m"
    {
#line 1274 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1274__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_HeadVar__4_31);
    }
#line 1274 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_31));
#line 1274 "mercury_compile.m"
  }
#line 1274 "mercury_compile.m"
}

#line 1261 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1261 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1261 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16)
#line 1261 "mercury_compile.m"
{
#line 1266 "mercury_compile.m"
  {
#line 1266 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1266 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_18;

#line 1267 "mercury_compile.m"
    {
#line 1267 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 622, &top_level__mercury_compile__InvokedByMake_18);
    }
#line 1272 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_18 == (MR_Integer) 0))
#line 1273 "mercury_compile.m"
      {
#line 1273 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 1273 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Builder_19;
#line 1279 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_25_25;

#line 1274 "mercury_compile.m"
        {
#line 1274 "mercury_compile.m"
          top_level__mercury_compile__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1274 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1));
#line 1274 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1274 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile__Compile_15));
#line 1274 "mercury_compile.m"
        }
#line 1280 "mercury_compile.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2666 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_19, top_level__mercury_compile__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_25_25);
        }
#line 1273 "mercury_compile.m"
      }
#line 1272 "mercury_compile.m"
    else
#line 1271 "mercury_compile.m"
      {
#line 1271 "mercury_compile.m"
        backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_48_48, top_level__mercury_compile__V_49_49, top_level__mercury_compile__Globals_10, top_level__mercury_compile__Succeeded_16);
#line 1271 "mercury_compile.m"
        return;
      }
#line 1266 "mercury_compile.m"
  }
#line 1261 "mercury_compile.m"
}

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1274__1_8_p_0(
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1274 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1274 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1274 "mercury_compile.m"
{
#line 1274 "mercury_compile.m"
  {
#line 1274 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1274 "mercury_compile.m"
    {
#line 1274 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_55_52_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_15, top_level__mercury_compile__HeadVar__2_29, top_level__mercury_compile__HeadVar__4_31);
#line 1274 "mercury_compile.m"
      return;
    }
#line 1274 "mercury_compile.m"
  }
#line 1274 "mercury_compile.m"
}

#line 1151 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1151__1_2_p_0(
#line 1151 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1151 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75)
#line 1151 "mercury_compile.m"
{
#line 1151 "mercury_compile.m"
  {
#line 1151 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1151 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SubModule_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 0)));
#line 1151 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 1)));

#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__SubModule_82)), top_level__mercury_compile__ModulesToRecompile_39);
    }
#line 1151 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1151 "mercury_compile.m"
  }
#line 1151 "mercury_compile.m"
}

#line 806 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 806 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 806 "mercury_compile.m"
{
#line 806 "mercury_compile.m"
  {
#line 806 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 806 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 806 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 806 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 806 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2773 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 806 "mercury_compile.m"
    else
#line 806 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 806 "mercury_compile.m"
        {
#line 806 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 806 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 806 "mercury_compile.m"
            {
#line 806 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 806 "mercury_compile.m"
              {
#line 806 "mercury_compile.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
#line 806 "mercury_compile.m"
                return;
              }
#line 806 "mercury_compile.m"
            }
#line 806 "mercury_compile.m"
          else
#line 2802 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 806 "mercury_compile.m"
        }
#line 806 "mercury_compile.m"
      else
#line 806 "mercury_compile.m"
        {
#line 806 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 806 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2815 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 806 "mercury_compile.m"
          else
#line 806 "mercury_compile.m"
            {
#line 806 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 806 "mercury_compile.m"
              {
#line 806 "mercury_compile.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
#line 806 "mercury_compile.m"
                return;
              }
#line 806 "mercury_compile.m"
            }
#line 806 "mercury_compile.m"
        }
#line 806 "mercury_compile.m"
  }
#line 806 "mercury_compile.m"
}

#line 806 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 806 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 806 "mercury_compile.m"
{
#line 806 "mercury_compile.m"
  {
#line 806 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 806 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 806 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 806 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 806 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 806 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 806 "mercury_compile.m"
    else
#line 806 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 806 "mercury_compile.m"
        {
#line 806 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 806 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_4_4;

#line 806 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 806 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 806 "mercury_compile.m"
            {
#line 806 "mercury_compile.m"
              top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 2883 "top_level.mercury_compile.c"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 806 "mercury_compile.m"
            }
#line 806 "mercury_compile.m"
        }
#line 806 "mercury_compile.m"
      else
#line 806 "mercury_compile.m"
        {
#line 806 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 806 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_6_6;

#line 806 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 806 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 806 "mercury_compile.m"
            {
#line 806 "mercury_compile.m"
              top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 2906 "top_level.mercury_compile.c"
              {
#line 2908 "top_level.mercury_compile.c"
                return top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
              }
#line 806 "mercury_compile.m"
            }
#line 806 "mercury_compile.m"
        }
#line 806 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 806 "mercury_compile.m"
  }
#line 806 "mercury_compile.m"
}

#line 1258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1258 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1258 "mercury_compile.m"
{
#line 1258 "mercury_compile.m"
  {
#line 1258 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 1258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 1258 "mercury_compile.m"
    {
#line 1258 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
#line 1258 "mercury_compile.m"
      return;
    }
#line 1258 "mercury_compile.m"
  }
#line 1258 "mercury_compile.m"
}

#line 1258 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1258 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1258 "mercury_compile.m"
{
#line 1258 "mercury_compile.m"
  {
#line 1258 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 1258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 1258 "mercury_compile.m"
    {
#line 1258 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 1258 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1258 "mercury_compile.m"
  }
#line 1258 "mercury_compile.m"
}

#line 2175 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2175 "mercury_compile.m"
{
#line 2180 "mercury_compile.m"
  {
#line 2180 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2183 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2183 "mercury_compile.m"

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif

#line 3017 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2183 "mercury_compile.m"
}
#line 2180 "mercury_compile.m"
  }
#line 2175 "mercury_compile.m"
}

#line 2111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2111 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2111 "mercury_compile.m"
{
#line 2117 "mercury_compile.m"
  {
#line 2117 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2117 "mercury_compile.m"
    {
#line 2117 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12, top_level__mercury_compile__FileType_13, top_level__mercury_compile__Continue_14, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);
#line 2117 "mercury_compile.m"
      return;
    }
#line 2117 "mercury_compile.m"
  }
#line 2111 "mercury_compile.m"
}

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2102 "mercury_compile.m"
{
#line 2102 "mercury_compile.m"
  {
#line 2102 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2102 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv3_Continue_14;
#line 2102 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21;

#line 2102 "mercury_compile.m"
    {
#line 2102 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv3_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21);
    }
#line 2102 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv3_Continue_14));
#line 2102 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21));
#line 2102 "mercury_compile.m"
  }
#line 2102 "mercury_compile.m"
}

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2102 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2102 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2102 "mercury_compile.m"
{
#line 2102 "mercury_compile.m"
  {
#line 2102 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2102 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_Continue_14;
#line 2102 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21;

#line 2102 "mercury_compile.m"
    {
#line 2102 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv1_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21);
    }
#line 2102 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv1_Continue_14));
#line 2102 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21));
#line 2102 "mercury_compile.m"
  }
#line 2102 "mercury_compile.m"
}

#line 2058 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2058 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2058 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2058 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8)
#line 2058 "mercury_compile.m"
{
#line 2061 "mercury_compile.m"
  {
#line 2061 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2061 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Detect_10;

#line 2062 "mercury_compile.m"
    {
#line 2062 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 631, &top_level__mercury_compile__Detect_10);
    }
#line 2092 "mercury_compile.m"
    if ((top_level__mercury_compile__Detect_10 == (MR_Integer) 0))
#line 2094 "mercury_compile.m"
      *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2092 "mercury_compile.m"
    else
#line 2064 "mercury_compile.m"
      {
#line 2064 "mercury_compile.m"
        MR_Word top_level__mercury_compile__VeryVerbose_13;
#line 2065 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_11;
#line 2080 "mercury_compile.m"
        MR_String top_level__mercury_compile__MerStdLibDir_15;
#line 2076 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeStdLibDir_14;

#line 2065 "mercury_compile.m"
        {
#line 2065 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 44, &top_level__mercury_compile__Verbose_11);
        }
#line 2069 "mercury_compile.m"
        {
#line 2069 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__VeryVerbose_13);
        }
#line 2075 "mercury_compile.m"
        {
#line 2075 "mercury_compile.m"
          libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 548, &top_level__mercury_compile__MaybeStdLibDir_14);
        }
#line 2077 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
#line 2077 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2077 "mercury_compile.m"
          {
#line 2077 "mercury_compile.m"
            top_level__mercury_compile__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeStdLibDir_14, (MR_Integer) 0)));
#line 2100 "mercury_compile.m"
            {
#line 2100 "mercury_compile.m"
              MR_String top_level__mercury_compile__ModulesDir_39;
#line 2100 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeGradeOpts_40;
#line 2100 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;

#line 2101 "mercury_compile.m"
              {
#line 2101 "mercury_compile.m"
                top_level__mercury_compile__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_15, (MR_String) "modules");
              }
#line 2102 "mercury_compile.m"
              {
#line 2102 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2102 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2102 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_1));
#line 2102 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2102 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2102 "mercury_compile.m"
              }
#line 2102 "mercury_compile.m"
              {
#line 2102 "mercury_compile.m"
                mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_44_44, top_level__mercury_compile__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_40);
              }
#line 2106 "mercury_compile.m"
              if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
#line 2108 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2106 "mercury_compile.m"
              else
#line 2105 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_40, (MR_Integer) 0)));
#line 2100 "mercury_compile.m"
            }
#line 2077 "mercury_compile.m"
          }
#line 2077 "mercury_compile.m"
        else
#line 2086 "mercury_compile.m"
          {
#line 2086 "mercury_compile.m"
            MR_String top_level__mercury_compile__MerStdLibDir_32;
#line 2083 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_26_26;
#line 2083 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_27_27;

#line 2083 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
#line 2083 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2083 "mercury_compile.m"
              {
#line 2083 "mercury_compile.m"
                top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
#line 2083 "mercury_compile.m"
                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 2083 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 2083 "mercury_compile.m"
                  {
#line 2083 "mercury_compile.m"
                    top_level__mercury_compile__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 0)));
#line 2083 "mercury_compile.m"
                    top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 1)));
#line 2083 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2083 "mercury_compile.m"
                  }
#line 2083 "mercury_compile.m"
              }
#line 2086 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2100 "mercury_compile.m"
              {
#line 2100 "mercury_compile.m"
                MR_String top_level__mercury_compile__ModulesDir_62;
#line 2100 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MaybeGradeOpts_63;
#line 2100 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_67_67;

#line 2101 "mercury_compile.m"
                {
#line 2101 "mercury_compile.m"
                  top_level__mercury_compile__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_32, (MR_String) "modules");
                }
#line 2102 "mercury_compile.m"
                {
#line 2102 "mercury_compile.m"
                  top_level__mercury_compile__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2102 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2102 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_2));
#line 2102 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2102 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2102 "mercury_compile.m"
                }
#line 2102 "mercury_compile.m"
                {
#line 2102 "mercury_compile.m"
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_67_67, top_level__mercury_compile__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_63);
                }
#line 2106 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
#line 2108 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2106 "mercury_compile.m"
                else
#line 2105 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_63, (MR_Integer) 0)));
#line 2100 "mercury_compile.m"
              }
#line 2086 "mercury_compile.m"
            else
#line 2087 "mercury_compile.m"
              *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2086 "mercury_compile.m"
          }
#line 2064 "mercury_compile.m"
      }
#line 2061 "mercury_compile.m"
  }
#line 2058 "mercury_compile.m"
}

#line 2013 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2013 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2013 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 2013 "mercury_compile.m"
{
#line 2016 "mercury_compile.m"
  {
#line 2016 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2016 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2016 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 2016 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 2017 "mercury_compile.m"
    {
#line 2017 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 2018 "mercury_compile.m"
    {
#line 2018 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 186, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 2019 "mercury_compile.m"
    {
#line 2019 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 187, &top_level__mercury_compile__ProfileTime_13);
    }
#line 2021 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 2022 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2022 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2046 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2026 "mercury_compile.m"
      {
#line 2026 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2026 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2026 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2025 "mercury_compile.m"
        {
#line 2025 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputing profiling call graph...");
        }
#line 2027 "mercury_compile.m"
        {
#line 2027 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2028 "mercury_compile.m"
        {
#line 2028 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2029 "mercury_compile.m"
        {
#line 2029 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2031 "mercury_compile.m"
        {
#line 2031 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2038 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2039 "mercury_compile.m"
          {
#line 2039 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2039 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2039 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2041 "mercury_compile.m"
            {
#line 2041 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2040 "mercury_compile.m"
            {
#line 2040 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2042 "mercury_compile.m"
            {
#line 2042 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2042 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2039 "mercury_compile.m"
          }
#line 2038 "mercury_compile.m"
        else
#line 2033 "mercury_compile.m"
          {
#line 2033 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2033 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2034 "mercury_compile.m"
            {
#line 2034 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2035 "mercury_compile.m"
            {
#line 2035 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2036 "mercury_compile.m"
            {
#line 2036 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2037 "mercury_compile.m"
            {
#line 2037 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2033 "mercury_compile.m"
          }
#line 2044 "mercury_compile.m"
        {
#line 2044 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2045 "mercury_compile.m"
        {
#line 2045 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2045 "mercury_compile.m"
          return;
        }
#line 2026 "mercury_compile.m"
      }
#line 2046 "mercury_compile.m"
    else
#line 2047 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2016 "mercury_compile.m"
  }
#line 2013 "mercury_compile.m"
}

#line 1977 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1977 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 1977 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 1977 "mercury_compile.m"
{
#line 1980 "mercury_compile.m"
  {
#line 1980 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1980 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 1980 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 1981 "mercury_compile.m"
    {
#line 1981 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 1982 "mercury_compile.m"
    {
#line 1982 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 137, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 2004 "mercury_compile.m"
    if ((top_level__mercury_compile__ShowDepGraph_12 == (MR_Integer) 0))
#line 2005 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2004 "mercury_compile.m"
    else
#line 1984 "mercury_compile.m"
      {
#line 1984 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_13;
#line 1984 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_14;
#line 1984 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_15;

#line 1985 "mercury_compile.m"
        {
#line 1985 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
        }
#line 1986 "mercury_compile.m"
        {
#line 1986 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
        }
#line 1987 "mercury_compile.m"
        {
#line 1987 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
        }
#line 1989 "mercury_compile.m"
        {
#line 1989 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
        }
#line 1997 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 1998 "mercury_compile.m"
          {
#line 1998 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 1998 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_20;
#line 1998 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_33_33;

#line 2000 "mercury_compile.m"
            {
#line 2000 "mercury_compile.m"
              top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
            }
#line 1999 "mercury_compile.m"
            {
#line 1999 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
            }
#line 2001 "mercury_compile.m"
            {
#line 2001 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
            }
#line 2001 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 1998 "mercury_compile.m"
          }
#line 1997 "mercury_compile.m"
        else
#line 1991 "mercury_compile.m"
          {
#line 1991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 1991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_17;
#line 1994 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_18_18;

#line 1992 "mercury_compile.m"
            {
#line 1992 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
            }
#line 1993 "mercury_compile.m"
            {
#line 1993 "mercury_compile.m"
              transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
            }
#line 1994 "mercury_compile.m"
            {
#line 1994 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
            }
#line 1995 "mercury_compile.m"
            {
#line 1995 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
            }
#line 1996 "mercury_compile.m"
            {
#line 1996 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
            }
#line 1991 "mercury_compile.m"
          }
#line 2003 "mercury_compile.m"
        {
#line 2003 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2003 "mercury_compile.m"
          return;
        }
#line 1984 "mercury_compile.m"
      }
#line 1980 "mercury_compile.m"
  }
#line 1977 "mercury_compile.m"
}

#line 1940 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 1940 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 1940 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42)
#line 1940 "mercury_compile.m"
{
#line 1948 "mercury_compile.m"
  {
#line 1948 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1948 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_35;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTree_36;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_37;
#line 1948 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_38;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_39;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_45_45;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52;
#line 1948 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_53_53;

#line 1949 "mercury_compile.m"
    {
#line 1949 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_0_41, &top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 1950 "mercury_compile.m"
    {
#line 1950 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 1951 "mercury_compile.m"
    {
#line 1951 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__ModuleName_20, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_35);
    }
#line 1953 "mercury_compile.m"
    {
#line 1953 "mercury_compile.m"
      top_level__mercury_compile__ParseTree_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1953 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_20));
#line 1953 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 1) = ((MR_Box) (top_level__mercury_compile__Items_21));
#line 1953 "mercury_compile.m"
    }
#line 1954 "mercury_compile.m"
    {
#line 1954 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__DumpBaseFileName_35, top_level__mercury_compile__ParseTree_36, top_level__mercury_compile__MQInfo_23, top_level__mercury_compile__EqvMap_24, top_level__mercury_compile__UsedModules_25, top_level__mercury_compile__QualInfo_29, top_level__mercury_compile__UndefTypes_30, top_level__mercury_compile__UndefModes_31, &top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile__MakeSpecs_37);
    }
#line 1956 "mercury_compile.m"
    {
#line 1956 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_37, top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 1957 "mercury_compile.m"
    {
#line 1957 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile__STATE_VARIABLE_HLDS_40);
    }
#line 1958 "mercury_compile.m"
    {
#line 1958 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_38);
    }
#line 1959 "mercury_compile.m"
    {
#line 1959 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53);
    }
#line 1961 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_38 == (MR_Integer) 0);
#line 1961 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1962 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1962 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_39 == (MR_Integer) 1);
#line 1967 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1965 "mercury_compile.m"
      {
#line 1965 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 1;
#line 1966 "mercury_compile.m"
        {
#line 1966 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 1965 "mercury_compile.m"
      }
#line 1967 "mercury_compile.m"
    else
#line 1968 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 0;
#line 1970 "mercury_compile.m"
    {
#line 1970 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_42);
    }
#line 1971 "mercury_compile.m"
    {
#line 1971 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% done.\n");
    }
#line 1972 "mercury_compile.m"
    {
#line 1972 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_27);
#line 1972 "mercury_compile.m"
      return;
    }
#line 1948 "mercury_compile.m"
  }
#line 1940 "mercury_compile.m"
}

#line 1917 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 1917 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 1917 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35)
#line 1917 "mercury_compile.m"
{
#line 1925 "mercury_compile.m"
  {
#line 1925 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1925 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_33;
#line 1925 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_38_38;
#line 1925 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;

#line 1926 "mercury_compile.m"
    {
#line 1926 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_34, &top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 1927 "mercury_compile.m"
    {
#line 1927 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% Expanding equivalence types...\n");
    }
#line 1928 "mercury_compile.m"
    {
#line 1928 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_20);
    }
#line 1929 "mercury_compile.m"
    {
#line 1929 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_10_p_0(top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__Items0_22, top_level__mercury_compile__Items_23, top_level__mercury_compile__EventSpecMap0_24, top_level__mercury_compile__EventSpecMap_25, top_level__mercury_compile__EqvMap_26, top_level__mercury_compile__UsedModules_27, top_level__mercury_compile__RecompInfo0_28, top_level__mercury_compile__RecompInfo_29, &top_level__mercury_compile__ExpandSpecs_33);
    }
#line 1932 "mercury_compile.m"
    {
#line 1932 "mercury_compile.m"
      *top_level__mercury_compile__FoundError_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ExpandSpecs_33);
    }
#line 1933 "mercury_compile.m"
    {
#line 1933 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ExpandSpecs_33, top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 1934 "mercury_compile.m"
    {
#line 1934 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43, top_level__mercury_compile__STATE_VARIABLE_Specs_35);
    }
#line 1935 "mercury_compile.m"
    {
#line 1935 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% done.\n");
    }
#line 1936 "mercury_compile.m"
    {
#line 1936 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_21);
#line 1936 "mercury_compile.m"
      return;
    }
#line 1925 "mercury_compile.m"
  }
#line 1917 "mercury_compile.m"
}

#line 1827 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1827 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1827 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1827 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 1827 "mercury_compile.m"
{
#line 1832 "mercury_compile.m"
  {
#line 1832 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 1832 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 1833 "mercury_compile.m"
    {
#line 1833 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 323, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 1835 "mercury_compile.m"
    {
#line 1835 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 325, &top_level__mercury_compile__UseOptInt_17);
    }
#line 1836 "mercury_compile.m"
    {
#line 1836 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 1838 "mercury_compile.m"
    {
#line 1838 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 327, &top_level__mercury_compile__TransOpt_19);
    }
#line 1839 "mercury_compile.m"
    {
#line 1839 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 1841 "mercury_compile.m"
    {
#line 1841 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 328, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 1844 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 1845 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1845 "mercury_compile.m"
      {
#line 1845 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 1845 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1846 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 1845 "mercury_compile.m"
      }
#line 1847 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1848 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 1854 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1850 "mercury_compile.m"
      {
#line 1850 "mercury_compile.m"
        {
#line 1850 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 1851 "mercury_compile.m"
        {
#line 1851 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1852 "mercury_compile.m"
        {
#line 1852 "mercury_compile.m"
          transform_hlds__intermod__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 1853 "mercury_compile.m"
        {
#line 1853 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 1850 "mercury_compile.m"
      }
#line 1854 "mercury_compile.m"
    else
#line 1855 "mercury_compile.m"
      {
#line 1855 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 1856 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 1855 "mercury_compile.m"
      }
#line 1858 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 1887 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1865 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1866 "mercury_compile.m"
        {
#line 1866 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 1866 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 1867 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1868 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1869 "mercury_compile.m"
          {
#line 1869 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 1870 "mercury_compile.m"
          {
#line 1870 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 14, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 1883 "mercury_compile.m"
          if ((top_level__mercury_compile__WarnNoTransOptDeps_27 == (MR_Integer) 0))
#line 1884 "mercury_compile.m"
            {
#line 1884 "mercury_compile.m"
            }
#line 1883 "mercury_compile.m"
          else
#line 1873 "mercury_compile.m"
            {
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Pieces_28;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Msg_29;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Spec_30;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_52_52;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_55_55;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_56_56;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_71_71;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_72_72;
#line 1873 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_76_76;
#line 1881 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 1881 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumErrors_32;

#line 1875 "mercury_compile.m"
              {
#line 1875 "mercury_compile.m"
                top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 1875 "mercury_compile.m"
              }
#line 1875 "mercury_compile.m"
              {
#line 1875 "mercury_compile.m"
                top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[18])));
#line 1875 "mercury_compile.m"
              }
#line 1875 "mercury_compile.m"
              {
#line 1875 "mercury_compile.m"
                top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[27])));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 1875 "mercury_compile.m"
              }
#line 1874 "mercury_compile.m"
              {
#line 1874 "mercury_compile.m"
                top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[26])));
#line 1874 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 1874 "mercury_compile.m"
              }
#line 1878 "mercury_compile.m"
              {
#line 1878 "mercury_compile.m"
                top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1878 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 1878 "mercury_compile.m"
              }
#line 1878 "mercury_compile.m"
              {
#line 1878 "mercury_compile.m"
                top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 1878 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1878 "mercury_compile.m"
              }
#line 1877 "mercury_compile.m"
              {
#line 1877 "mercury_compile.m"
                top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 1877 "mercury_compile.m"
              }
#line 1879 "mercury_compile.m"
              {
#line 1879 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 1879 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "mercury_compile.m"
              }
#line 1879 "mercury_compile.m"
              {
#line 1879 "mercury_compile.m"
                top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1879 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1879 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 1879 "mercury_compile.m"
              }
#line 1881 "mercury_compile.m"
              {
#line 1881 "mercury_compile.m"
                parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
              }
#line 1873 "mercury_compile.m"
            }
#line 1866 "mercury_compile.m"
        }
#line 1865 "mercury_compile.m"
      else
#line 1860 "mercury_compile.m"
        {
#line 1860 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 1863 "mercury_compile.m"
          {
#line 1863 "mercury_compile.m"
            transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 1860 "mercury_compile.m"
        }
#line 1887 "mercury_compile.m"
    else
#line 1893 "mercury_compile.m"
      {
#line 1887 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 1893 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1891 "mercury_compile.m"
          {
#line 1891 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1892 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1891 "mercury_compile.m"
          }
#line 1893 "mercury_compile.m"
        else
#line 1907 "mercury_compile.m"
          if ((top_level__mercury_compile__TransOpt_19 == (MR_Integer) 0))
#line 1908 "mercury_compile.m"
            {
#line 1909 "mercury_compile.m"
              *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1910 "mercury_compile.m"
              top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1908 "mercury_compile.m"
            }
#line 1907 "mercury_compile.m"
          else
#line 1895 "mercury_compile.m"
            {
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFilesList_33;
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFiles_34;
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_83_83;
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_85_85;
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 1895 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 1901 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 1901 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));
#line 1901 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 20)));

#line 1903 "mercury_compile.m"
              {
#line 1903 "mercury_compile.m"
                top_level__mercury_compile__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 0) = ((MR_Box) (top_level__mercury_compile__V_93_93));
#line 1903 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1903 "mercury_compile.m"
              }
#line 1902 "mercury_compile.m"
              {
#line 1902 "mercury_compile.m"
                top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 1902 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (top_level__mercury_compile__V_85_85));
#line 1902 "mercury_compile.m"
              }
#line 1901 "mercury_compile.m"
              {
#line 1901 "mercury_compile.m"
                top_level__mercury_compile__TransOptFilesList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 0) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 1901 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 1) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 1901 "mercury_compile.m"
              }
#line 1904 "mercury_compile.m"
              {
#line 1904 "mercury_compile.m"
                mercury__list__condense_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, top_level__mercury_compile__TransOptFilesList_33, &top_level__mercury_compile__TransOptFiles_34);
              }
#line 1905 "mercury_compile.m"
              {
#line 1905 "mercury_compile.m"
                transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFiles_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
              }
#line 1895 "mercury_compile.m"
            }
#line 1893 "mercury_compile.m"
      }
#line 1913 "mercury_compile.m"
    {
#line 1913 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
#line 1913 "mercury_compile.m"
      return;
    }
#line 1832 "mercury_compile.m"
  }
#line 1827 "mercury_compile.m"
}

#line 1803 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1803 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1803 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1803 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1803 "mercury_compile.m"
{
#line 1811 "mercury_compile.m"
  {
#line 1811 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1811 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_31;
#line 1811 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_32;
#line 1811 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1811 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;
#line 1811 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_47_47;

#line 1812 "mercury_compile.m"
    {
#line 1812 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1813 "mercury_compile.m"
    {
#line 1813 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Module qualifying items...\n");
    }
#line 1814 "mercury_compile.m"
    {
#line 1814 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_24);
    }
#line 1815 "mercury_compile.m"
    {
#line 1815 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, (MR_String) ".m", (MR_Integer) 1, &top_level__mercury_compile__FileName_31);
    }
#line 1818 "mercury_compile.m"
    {
#line 1818 "mercury_compile.m"
      top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) (top_level__mercury_compile__FileName_31));
#line 1818 "mercury_compile.m"
    }
#line 1817 "mercury_compile.m"
    {
#line 1817 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(top_level__mercury_compile__Items0_18, top_level__mercury_compile__Items_19, top_level__mercury_compile__EventSpecMap0_20, top_level__mercury_compile__EventSpecMap_21, top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, top_level__mercury_compile__V_45_45, top_level__mercury_compile__EventSpecFileName_23, top_level__mercury_compile__MQInfo_26, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_32);
    }
#line 1820 "mercury_compile.m"
    {
#line 1820 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__QualifySpecs_32, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1821 "mercury_compile.m"
    {
#line 1821 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_47_47, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
    }
#line 1822 "mercury_compile.m"
    {
#line 1822 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 1823 "mercury_compile.m"
    {
#line 1823 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
#line 1823 "mercury_compile.m"
      return;
    }
#line 1811 "mercury_compile.m"
  }
#line 1803 "mercury_compile.m"
}

#line 1688 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1688 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1688 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70)
#line 1688 "mercury_compile.m"
{
#line 1695 "mercury_compile.m"
  {
#line 1695 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_121_121;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_28;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_29;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_30;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile1_31;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_32;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_33;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_35;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_36;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_37;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items1_38;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_39;
#line 1695 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_41;
#line 1695 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_42;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_43;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_44;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items2_48;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_49;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_50;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_51;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_52;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_53;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_54;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_55;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EqvMap_56;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_57;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_58;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_59;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_60;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_61;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_62;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefTypes_63;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefModes_64;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_82_82;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_85_85;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_89_89;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_90_90;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_91_91;
#line 1695 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_92_92;
#line 1725 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_40;
#line 1728 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_101_101;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_102_102;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_103_103;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_104_104;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_105_105;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_106_106;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_107_107;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_108_108;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_109_109;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_110_110;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_111_111;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_112_112;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_113_113;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_114_114;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_115_115;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_116_116;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_117_117;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_118_118;
#line 1728 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_119_119;
#line 1728 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_120_120;

#line 1696 "mercury_compile.m"
    {
#line 1696 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 54, &top_level__mercury_compile__Stats_28);
    }
#line 1697 "mercury_compile.m"
    {
#line 1697 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 44, &top_level__mercury_compile__Verbose_29);
    }
#line 1698 "mercury_compile.m"
    {
#line 1698 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 622, &top_level__mercury_compile__MMCMake_30);
    }
#line 1699 "mercury_compile.m"
    {
#line 1699 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile1_31 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile0_18, top_level__mercury_compile__MMCMake_30);
    }
#line 1703 "mercury_compile.m"
    {
#line 1703 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_32);
    }
#line 1705 "mercury_compile.m"
    {
#line 1705 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile_33 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile1_31, top_level__mercury_compile__MakeOptInt_32);
    }
#line 1707 "mercury_compile.m"
    {
#line 1707 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_17, &top_level__mercury_compile__ModuleName_34);
    }
#line 1715 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1717 "mercury_compile.m"
      {
#line 1717 "mercury_compile.m"
        parse_tree__modules__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_35);
      }
#line 1715 "mercury_compile.m"
    else
#line 1714 "mercury_compile.m"
      top_level__mercury_compile__MaybeTransOptDeps_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1721 "mercury_compile.m"
    {
#line 1721 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__MaybeTransOptDeps_35, &top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__IntermodError_37);
    }
#line 1725 "mercury_compile.m"
    {
#line 1725 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__Items1_38, &top_level__mercury_compile__ItemSpecs_39, &top_level__mercury_compile___Error_40);
    }
#line 4692 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1727 "mercury_compile.m"
    {
#line 1727 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_121_121, top_level__mercury_compile__ItemSpecs_39, top_level__mercury_compile__STATE_VARIABLE_Specs_0_69);
    }
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 0)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 1)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 2)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 3)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 4)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 5)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 6)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 7)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 8)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 9)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 10)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 11)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 12)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 13)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 14)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 15)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 16)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 17)));
#line 1728 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestamps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 18)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 19)));
#line 1728 "mercury_compile.m"
    top_level__mercury_compile__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 20)));
#line 1730 "mercury_compile.m"
    {
#line 1730 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 168, &top_level__mercury_compile__EventSetFileName_41);
    }
#line 1732 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_41, (MR_String) "") == 0);
#line 1736 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1733 "mercury_compile.m"
      {
#line 1733 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1734 "mercury_compile.m"
        {
#line 1734 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1735 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_44 = (MR_Integer) 0;
#line 1735 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1733 "mercury_compile.m"
      }
#line 1736 "mercury_compile.m"
    else
#line 1738 "mercury_compile.m"
      {
#line 1738 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_45;
#line 1738 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_46;
#line 1738 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_47;

#line 1737 "mercury_compile.m"
        {
#line 1737 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__EventSetName0_45, &top_level__mercury_compile__EventSpecMap0_46, &top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1739 "mercury_compile.m"
        {
#line 1739 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_121_121, top_level__mercury_compile__EventSetSpecs_47, top_level__mercury_compile__STATE_VARIABLE_Specs_79_79);
        }
#line 1740 "mercury_compile.m"
        {
#line 1740 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1745 "mercury_compile.m"
        if ((top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0))
#line 1742 "mercury_compile.m"
          {
#line 1743 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = top_level__mercury_compile__EventSetName0_45;
#line 1744 "mercury_compile.m"
            top_level__mercury_compile__EventSpecMap1_43 = top_level__mercury_compile__EventSpecMap0_46;
#line 1742 "mercury_compile.m"
          }
#line 1745 "mercury_compile.m"
        else
#line 1746 "mercury_compile.m"
          {
#line 1747 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1748 "mercury_compile.m"
            {
#line 1748 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
#line 1746 "mercury_compile.m"
          }
#line 1738 "mercury_compile.m"
      }
#line 1752 "mercury_compile.m"
    {
#line 1752 "mercury_compile.m"
      top_level__mercury_compile__invoke_module_qualify_items_16_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Items1_38, &top_level__mercury_compile__Items2_48, top_level__mercury_compile__EventSpecMap1_43, &top_level__mercury_compile__EventSpecMap2_49, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__EventSetFileName_41, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQUndefTypes_51, &top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__STATE_VARIABLE_Specs_82_82, &top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
    }
#line 1756 "mercury_compile.m"
    {
#line 1756 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__RecompInfo0_53);
    }
#line 1757 "mercury_compile.m"
    {
#line 1757 "mercury_compile.m"
      top_level__mercury_compile__expand_equiv_types_17_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__Items2_48, &top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSpecMap2_49, &top_level__mercury_compile__EventSpecMap_55, &top_level__mercury_compile__EqvMap_56, &top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__RecompInfo0_53, &top_level__mercury_compile__RecompInfo_58, &top_level__mercury_compile__ExpandErrors_59, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile__STATE_VARIABLE_Specs_85_85);
    }
#line 1760 "mercury_compile.m"
    {
#line 1760 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_58, top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQInfo_60);
    }
#line 1762 "mercury_compile.m"
    {
#line 1762 "mercury_compile.m"
      top_level__mercury_compile__EventSet_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1762 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_42));
#line 1762 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_55));
#line 1762 "mercury_compile.m"
    }
#line 1763 "mercury_compile.m"
    {
#line 1763 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_18_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSet_61, top_level__mercury_compile__MQInfo_60, top_level__mercury_compile__EqvMap_56, top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__QualInfo_20, &top_level__mercury_compile__MakeHLDSUndefTypes_63, &top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__FoundError_24, top_level__mercury_compile__STATE_VARIABLE_Specs_85_85, top_level__mercury_compile__STATE_VARIABLE_Specs_70);
    }
#line 1768 "mercury_compile.m"
    {
#line 1768 "mercury_compile.m"
      top_level__mercury_compile__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 0) = ((MR_Box) (top_level__mercury_compile__MakeHLDSUndefTypes_63));
#line 1768 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "mercury_compile.m"
    }
#line 1767 "mercury_compile.m"
    {
#line 1767 "mercury_compile.m"
      top_level__mercury_compile__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 0) = ((MR_Box) (top_level__mercury_compile__ExpandErrors_59));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 1) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 1767 "mercury_compile.m"
    }
#line 1767 "mercury_compile.m"
    {
#line 1767 "mercury_compile.m"
      top_level__mercury_compile__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 0) = ((MR_Box) (top_level__mercury_compile__EventSetErrors_44));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 1) = ((MR_Box) (top_level__mercury_compile__V_91_91));
#line 1767 "mercury_compile.m"
    }
#line 1767 "mercury_compile.m"
    {
#line 1767 "mercury_compile.m"
      top_level__mercury_compile__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 0) = ((MR_Box) (top_level__mercury_compile__MQUndefTypes_51));
#line 1767 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 1) = ((MR_Box) (top_level__mercury_compile__V_90_90));
#line 1767 "mercury_compile.m"
    }
#line 1767 "mercury_compile.m"
    {
#line 1767 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_89_89, top_level__mercury_compile__UndefTypes_22);
    }
#line 1769 "mercury_compile.m"
    {
#line 1769 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__UndefModes_23);
    }
#line 1771 "mercury_compile.m"
    {
#line 1771 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_62, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68);
    }
#line 1775 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1776 "mercury_compile.m"
      {
#line 1776 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AllDeps_65;
#line 1776 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OutputMMCMakeDeps_66;

#line 1777 "mercury_compile.m"
        {
#line 1777 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_62, &top_level__mercury_compile__AllDeps_65);
        }
#line 1778 "mercury_compile.m"
        {
#line 1778 "mercury_compile.m"
          parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__AllDeps_65, top_level__mercury_compile__MaybeTransOptDeps_35);
        }
#line 1780 "mercury_compile.m"
        {
#line 1780 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 113, &top_level__mercury_compile__OutputMMCMakeDeps_66);
        }
#line 1785 "mercury_compile.m"
        if ((top_level__mercury_compile__OutputMMCMakeDeps_66 == (MR_Integer) 0))
#line 1786 "mercury_compile.m"
          {
#line 1786 "mercury_compile.m"
          }
#line 1785 "mercury_compile.m"
        else
#line 1784 "mercury_compile.m"
          {
#line 1784 "mercury_compile.m"
            make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17);
          }
#line 1776 "mercury_compile.m"
      }
#line 1775 "mercury_compile.m"
    else
#line 1774 "mercury_compile.m"
      {
#line 1774 "mercury_compile.m"
      }
#line 1792 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundError_24 == (MR_Integer) 1);
#line 1793 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1793 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_37 == (MR_Integer) 1);
#line 1797 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1796 "mercury_compile.m"
      {
#line 1796 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__HLDS1_19);
#line 1796 "mercury_compile.m"
        return;
      }
#line 1797 "mercury_compile.m"
    else
#line 1798 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_19 = top_level__mercury_compile__HLDS0_62;
#line 1695 "mercury_compile.m"
  }
#line 1688 "mercury_compile.m"
}

#line 1651 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1651 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1651 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1651 "mercury_compile.m"
{
#line 1651 "mercury_compile.m"
  {
#line 1651 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1651 "mercury_compile.m"
    {
#line 1651 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 1651 "mercury_compile.m"
      return;
    }
#line 1651 "mercury_compile.m"
  }
#line 1651 "mercury_compile.m"
}

#line 1522 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1522 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1522 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1522 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54)
#line 1522 "mercury_compile.m"
{
#line 1530 "mercury_compile.m"
  {
#line 1530 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_21;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_22;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_23;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_24;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_25;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TargetCodeOnly_26;
#line 1530 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_27;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_29;
#line 1530 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_30;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1530 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1547 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1531 "mercury_compile.m"
    {
#line 1531 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__Globals_21);
    }
#line 1532 "mercury_compile.m"
    {
#line 1532 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 44, &top_level__mercury_compile__Verbose_22);
    }
#line 1533 "mercury_compile.m"
    {
#line 1533 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 54, &top_level__mercury_compile__Stats_23);
    }
#line 1534 "mercury_compile.m"
    {
#line 1534 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_22, top_level__mercury_compile__Stats_23, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59);
    }
#line 1535 "mercury_compile.m"
    {
#line 1535 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_7_p_0(top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 1536 "mercury_compile.m"
    {
#line 1536 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 248, &top_level__mercury_compile__HighLevelCode_24);
    }
#line 1537 "mercury_compile.m"
    {
#line 1537 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Target_25);
    }
#line 1538 "mercury_compile.m"
    {
#line 1538 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 97, &top_level__mercury_compile__TargetCodeOnly_26);
    }
#line 1545 "mercury_compile.m"
    {
#line 1545 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_27);
    }
#line 1547 "mercury_compile.m"
    {
#line 1547 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_27, &top_level__mercury_compile__V_28_28);
    }
#line 1549 "mercury_compile.m"
    {
#line 1549 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__Specs_17);
    }
#line 1550 "mercury_compile.m"
    {
#line 1550 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__NumErrors_30);
    }
#line 1552 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_29 == (MR_Integer) 0);
#line 1552 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1553 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_30 == (MR_Integer) 0);
#line 1656 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1568 "mercury_compile.m"
      {
#line 1568 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Succeeded_37;
#line 1568 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74;

#line 5134 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 0))
#line 5136 "top_level.mercury_compile.c"
          {
#line 5138 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ExportDecls_31;

#line 1560 "mercury_compile.m"
            {
#line 1560 "mercury_compile.m"
              backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ExportDecls_31);
            }
#line 1561 "mercury_compile.m"
            {
#line 1561 "mercury_compile.m"
              backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ExportDecls_31, top_level__mercury_compile__ModuleName_15);
            }
#line 1634 "mercury_compile.m"
            if ((top_level__mercury_compile__HighLevelCode_24 == (MR_Integer) 0))
#line 1635 "mercury_compile.m"
              {
#line 1635 "mercury_compile.m"
                MR_Word top_level__mercury_compile__GlobalData_47;
#line 1635 "mercury_compile.m"
                MR_Word top_level__mercury_compile__LLDS_48;

#line 1636 "mercury_compile.m"
                {
#line 1636 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile__GlobalData_47, &top_level__mercury_compile__LLDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1637 "mercury_compile.m"
                {
#line 1637 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__GlobalData_47, top_level__mercury_compile__LLDS_48, top_level__mercury_compile__ModuleName_15, &top_level__mercury_compile__Succeeded_37, top_level__mercury_compile__ExtraObjFiles_18);
                }
#line 1635 "mercury_compile.m"
              }
#line 1634 "mercury_compile.m"
            else
#line 1612 "mercury_compile.m"
              {
#line 1612 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MLDS_124;
#line 1612 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1613 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_41_41;

#line 1613 "mercury_compile.m"
                {
#line 1613 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_41_41, &top_level__mercury_compile__MLDS_124, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1614 "mercury_compile.m"
                {
#line 1614 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_124, &top_level__mercury_compile__TargetCodeSucceeded_125);
                }
#line 1616 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_125 == (MR_Integer) 1);
#line 1616 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1617 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1630 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1620 "mercury_compile.m"
                  {
#line 1620 "mercury_compile.m"
                    MR_String top_level__mercury_compile__C_File_42;
#line 1620 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TargetType_43;
#line 1620 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__PIC_44;
#line 1620 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Obj_45;
#line 1620 "mercury_compile.m"
                    MR_String top_level__mercury_compile__O_File_46;
#line 1620 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__OutputStream_122;

#line 1619 "mercury_compile.m"
                    {
#line 1619 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_42);
                    }
#line 1621 "mercury_compile.m"
                    {
#line 1621 "mercury_compile.m"
                      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__TargetType_43);
                    }
#line 1622 "mercury_compile.m"
                    {
#line 1622 "mercury_compile.m"
                      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__TargetType_43, &top_level__mercury_compile__PIC_44);
                    }
#line 1623 "mercury_compile.m"
                    {
#line 1623 "mercury_compile.m"
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__PIC_44, &top_level__mercury_compile__Obj_45);
                    }
#line 1624 "mercury_compile.m"
                    {
#line 1624 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__Obj_45, (MR_Integer) 0, &top_level__mercury_compile__O_File_46);
                    }
#line 1626 "mercury_compile.m"
                    {
#line 1626 "mercury_compile.m"
                      mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_122);
                    }
#line 1627 "mercury_compile.m"
                    {
#line 1627 "mercury_compile.m"
                      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__OutputStream_122, top_level__mercury_compile__PIC_44, top_level__mercury_compile__C_File_42, top_level__mercury_compile__O_File_46, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                    }
#line 1629 "mercury_compile.m"
                    {
#line 1629 "mercury_compile.m"
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                    }
#line 1620 "mercury_compile.m"
                  }
#line 1630 "mercury_compile.m"
                else
#line 1631 "mercury_compile.m"
                  top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1633 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1633 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1612 "mercury_compile.m"
              }
#line 5268 "top_level.mercury_compile.c"
          }
#line 5270 "top_level.mercury_compile.c"
        else
#line 5272 "top_level.mercury_compile.c"
          if ((top_level__mercury_compile__Target_25 == (MR_Integer) 2))
#line 5274 "top_level.mercury_compile.c"
            {
#line 5276 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__MLDS_116;
#line 1588 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_38_38;

#line 1588 "mercury_compile.m"
              {
#line 1588 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MLDS_116, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1589 "mercury_compile.m"
              {
#line 1589 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_116, &top_level__mercury_compile__Succeeded_37);
              }
#line 1590 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1590 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5295 "top_level.mercury_compile.c"
            }
#line 5297 "top_level.mercury_compile.c"
          else
#line 5299 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__Target_25 == (MR_Integer) 4))
#line 5301 "top_level.mercury_compile.c"
              {
#line 5303 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__ELDS_49;

#line 1642 "mercury_compile.m"
                {
#line 1642 "mercury_compile.m"
                  top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ELDS_49, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1643 "mercury_compile.m"
                {
#line 1643 "mercury_compile.m"
                  top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ELDS_49, &top_level__mercury_compile__Succeeded_37);
                }
#line 1644 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1644 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5320 "top_level.mercury_compile.c"
              }
#line 5322 "top_level.mercury_compile.c"
            else
#line 5324 "top_level.mercury_compile.c"
              if ((top_level__mercury_compile__Target_25 == (MR_Integer) 1))
#line 5326 "top_level.mercury_compile.c"
                {
#line 5328 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__MLDS_33;
#line 5330 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1571 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_32_32;

#line 1571 "mercury_compile.m"
                  {
#line 1571 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                  }
#line 1572 "mercury_compile.m"
                  {
#line 1572 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33, &top_level__mercury_compile__TargetCodeSucceeded_34);
                  }
#line 1574 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_34 == (MR_Integer) 1);
#line 1574 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1575 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1582 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1577 "mercury_compile.m"
                    {
#line 1577 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__HasMain_35;
#line 1577 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__OutputStream_36;

#line 1577 "mercury_compile.m"
                      {
#line 1577 "mercury_compile.m"
                        top_level__mercury_compile__HasMain_35 = top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(top_level__mercury_compile__MLDS_33);
                      }
#line 1578 "mercury_compile.m"
                      {
#line 1578 "mercury_compile.m"
                        mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_36);
                      }
#line 1579 "mercury_compile.m"
                      {
#line 1579 "mercury_compile.m"
                        backend_libs__compile_target_code__il_assemble_7_p_0(top_level__mercury_compile__OutputStream_36, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__HasMain_35, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                      }
#line 1581 "mercury_compile.m"
                      {
#line 1581 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                      }
#line 1577 "mercury_compile.m"
                    }
#line 1582 "mercury_compile.m"
                  else
#line 1583 "mercury_compile.m"
                    top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1585 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1585 "mercury_compile.m"
                  top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5390 "top_level.mercury_compile.c"
                }
#line 5392 "top_level.mercury_compile.c"
              else
#line 5394 "top_level.mercury_compile.c"
                {
#line 5396 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__MLDS_119;
#line 5398 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1593 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_39_39;

#line 1593 "mercury_compile.m"
                  {
#line 1593 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__MLDS_119, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                  }
#line 1594 "mercury_compile.m"
                  {
#line 1594 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_119, &top_level__mercury_compile__TargetCodeSucceeded_120);
                  }
#line 1596 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_120 == (MR_Integer) 1);
#line 1596 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1597 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1605 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1599 "mercury_compile.m"
                    {
#line 1599 "mercury_compile.m"
                      MR_String top_level__mercury_compile__JavaFile_40;
#line 1599 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_96_96;
#line 1599 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__OutputStream_117;

#line 1599 "mercury_compile.m"
                      {
#line 1599 "mercury_compile.m"
                        mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_117);
                      }
#line 1600 "mercury_compile.m"
                      {
#line 1600 "mercury_compile.m"
                        parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_40);
                      }
#line 1602 "mercury_compile.m"
                      {
#line 1602 "mercury_compile.m"
                        top_level__mercury_compile__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_40));
#line 1602 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1602 "mercury_compile.m"
                      }
#line 1602 "mercury_compile.m"
                      {
#line 1602 "mercury_compile.m"
                        backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__OutputStream_117, top_level__mercury_compile__V_96_96, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                      }
#line 1604 "mercury_compile.m"
                      {
#line 1604 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                      }
#line 1599 "mercury_compile.m"
                    }
#line 1605 "mercury_compile.m"
                  else
#line 1606 "mercury_compile.m"
                    top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1608 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1608 "mercury_compile.m"
                  top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5470 "top_level.mercury_compile.c"
                }
#line 1652 "mercury_compile.m"
        if ((top_level__mercury_compile__Succeeded_37 == (MR_Integer) 0))
#line 1653 "mercury_compile.m"
          {
#line 1653 "mercury_compile.m"
          }
#line 1652 "mercury_compile.m"
        else
#line 1647 "mercury_compile.m"
          {
#line 1647 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TimestampFiles_50;
#line 1647 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_111_111;
#line 1650 "mercury_compile.m"
            void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1650 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv2_TimestampFiles_50;
#line 1650 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110;
#line 1651 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56;

#line 1648 "mercury_compile.m"
            {
#line 1648 "mercury_compile.m"
              recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__NestedSubModules_12, top_level__mercury_compile__MaybeTimestamps_14);
            }
#line 1650 "mercury_compile.m"
            top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_13, (MR_Integer) 1)));
#line 1650 "mercury_compile.m"
            {
#line 1650 "mercury_compile.m"
              top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_13), ((MR_Box) (top_level__mercury_compile__ModuleName_15)), &top_level__mercury_compile__conv2_TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110);
            }
#line 1650 "mercury_compile.m"
            top_level__mercury_compile__TimestampFiles_50 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_50);
#line 1651 "mercury_compile.m"
            {
#line 1651 "mercury_compile.m"
              top_level__mercury_compile__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1651 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_11[0]));
#line 1651 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 1) = ((MR_Box) (top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1));
#line 1651 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1651 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 3) = ((MR_Box) (top_level__mercury_compile__Globals_21));
#line 1651 "mercury_compile.m"
            }
#line 1651 "mercury_compile.m"
            {
#line 1651 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_111_111, top_level__mercury_compile__TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56);
            }
#line 1647 "mercury_compile.m"
          }
#line 1568 "mercury_compile.m"
      }
#line 1656 "mercury_compile.m"
    else
#line 1659 "mercury_compile.m"
      {
#line 1659 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_51;

#line 1659 "mercury_compile.m"
        {
#line 1659 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_51);
        }
#line 1660 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_51 == (MR_Integer) 0);
#line 1662 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1661 "mercury_compile.m"
          {
#line 1661 "mercury_compile.m"
            {
#line 1661 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1661 "mercury_compile.m"
          }
#line 1662 "mercury_compile.m"
        else
#line 1661 "mercury_compile.m"
          {
#line 1661 "mercury_compile.m"
          }
#line 1665 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1665 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1659 "mercury_compile.m"
      }
#line 1530 "mercury_compile.m"
  }
#line 1522 "mercury_compile.m"
}

#line 1509 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1509 "mercury_compile.m"
{
#line 1509 "mercury_compile.m"
  {
#line 1509 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1509 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1509 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1509 "mercury_compile.m"
    {
#line 1509 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__prim_data__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1509 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1509 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1509 "mercury_compile.m"
  }
#line 1509 "mercury_compile.m"
}

#line 1498 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1498 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1498 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 1498 "mercury_compile.m"
{
#line 1501 "mercury_compile.m"
  {
#line 1501 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 1502 "mercury_compile.m"
    {
#line 1502 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 1505 "mercury_compile.m"
    {
#line 1505 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 1507 "mercury_compile.m"
    {
#line 1507 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 661, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 5655 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1509 "mercury_compile.m"
    {
#line 1509 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_3[5], top_level__mercury_compile__LocalModulesList_14);
    }
#line 1510 "mercury_compile.m"
    {
#line 1510 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 1512 "mercury_compile.m"
    {
#line 1512 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 1513 "mercury_compile.m"
    {
#line 1513 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 1515 "mercury_compile.m"
    {
#line 1515 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 1517 "mercury_compile.m"
    {
#line 1517 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 1518 "mercury_compile.m"
    {
#line 1518 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1518 "mercury_compile.m"
      return;
    }
#line 1501 "mercury_compile.m"
  }
#line 1498 "mercury_compile.m"
}

#line 1509 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1509 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1509 "mercury_compile.m"
{
#line 1509 "mercury_compile.m"
  {
#line 1509 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1509 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1509 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1509 "mercury_compile.m"
    {
#line 1509 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__prim_data__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1509 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1509 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1509 "mercury_compile.m"
  }
#line 1509 "mercury_compile.m"
}

#line 1485 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1485 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1485 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 1485 "mercury_compile.m"
{
#line 1488 "mercury_compile.m"
  {
#line 1488 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1488 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 1489 "mercury_compile.m"
    {
#line 1489 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 328, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 1494 "mercury_compile.m"
    if ((top_level__mercury_compile__IntermodAnalysis_13 == (MR_Integer) 0))
#line 1495 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 1494 "mercury_compile.m"
    else
#line 1501 "mercury_compile.m"
      {
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleNames_30;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SymNames_32;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 1501 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 1502 "mercury_compile.m"
        {
#line 1502 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
        }
#line 1505 "mercury_compile.m"
        {
#line 1505 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
        }
#line 1507 "mercury_compile.m"
        {
#line 1507 "mercury_compile.m"
          libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 661, &top_level__mercury_compile__LocalModulesList_31);
        }
#line 5796 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1509 "mercury_compile.m"
        {
#line 1509 "mercury_compile.m"
          top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_3[4], top_level__mercury_compile__LocalModulesList_31);
        }
#line 1510 "mercury_compile.m"
        {
#line 1510 "mercury_compile.m"
          top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
        }
#line 1512 "mercury_compile.m"
        {
#line 1512 "mercury_compile.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
        }
#line 1513 "mercury_compile.m"
        {
#line 1513 "mercury_compile.m"
          analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
        }
#line 1515 "mercury_compile.m"
        {
#line 1515 "mercury_compile.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
        }
#line 1517 "mercury_compile.m"
        {
#line 1517 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
        }
#line 1518 "mercury_compile.m"
        {
#line 1518 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1518 "mercury_compile.m"
          return;
        }
#line 1501 "mercury_compile.m"
      }
#line 1488 "mercury_compile.m"
  }
#line 1485 "mercury_compile.m"
}

#line 1398 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1398 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1398 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48)
#line 1398 "mercury_compile.m"
{
#line 1405 "mercury_compile.m"
  {
#line 1405 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_20;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCheckOnly_21;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ErrorCheckOnly_22;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_23;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamps_26;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_54_54;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1418 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;

#line 1406 "mercury_compile.m"
    {
#line 1406 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports_13, &top_level__mercury_compile__ModuleName_20);
    }
#line 1409 "mercury_compile.m"
    {
#line 1409 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 95, &top_level__mercury_compile__TypeCheckOnly_21);
    }
#line 1410 "mercury_compile.m"
    {
#line 1410 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 96, &top_level__mercury_compile__ErrorCheckOnly_22);
    }
#line 1411 "mercury_compile.m"
    {
#line 1411 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__TypeCheckOnly_21, top_level__mercury_compile__ErrorCheckOnly_22, &top_level__mercury_compile__DontWriteDFile_23);
    }
#line 1412 "mercury_compile.m"
    {
#line 1412 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_15_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleAndImports_13, top_level__mercury_compile__DontWriteDFile_23, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestamps_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_0_47, &top_level__mercury_compile__STATE_VARIABLE_Specs_54_54);
    }
#line 1415 "mercury_compile.m"
    {
#line 1415 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Specs_54_54, top_level__mercury_compile__STATE_VARIABLE_Specs_48);
    }
#line 1418 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1418 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1418 "mercury_compile.m"
      {
#line 1419 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1418 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1418 "mercury_compile.m"
          {
#line 1420 "mercury_compile.m"
            {
#line 1420 "mercury_compile.m"
              top_level__mercury_compile__V_59_59 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_12, *top_level__mercury_compile__STATE_VARIABLE_Specs_48);
            }
#line 1420 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_59_59 == (MR_Integer) 0);
#line 1418 "mercury_compile.m"
          }
#line 1418 "mercury_compile.m"
      }
#line 1471 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1422 "mercury_compile.m"
      {
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeOptInt_35;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeTransOptInt_36;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeAnalysisRegistry_37;
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeXmlDocumentation_38;

#line 1422 "mercury_compile.m"
        {
#line 1422 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 44, &top_level__mercury_compile__Verbose_32);
        }
#line 1423 "mercury_compile.m"
        {
#line 1423 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 54, &top_level__mercury_compile__Stats_33);
        }
#line 1424 "mercury_compile.m"
        {
#line 1424 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1425 "mercury_compile.m"
        {
#line 1425 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_35);
        }
#line 1427 "mercury_compile.m"
        {
#line 1427 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_36);
        }
#line 1429 "mercury_compile.m"
        {
#line 1429 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 87, &top_level__mercury_compile__MakeAnalysisRegistry_37);
        }
#line 1431 "mercury_compile.m"
        {
#line 1431 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 88, &top_level__mercury_compile__MakeXmlDocumentation_38);
        }
#line 1433 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__TypeCheckOnly_21 == (MR_Integer) 1);
#line 1435 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1434 "mercury_compile.m"
          {
#line 1434 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1434 "mercury_compile.m"
          }
#line 1435 "mercury_compile.m"
        else
#line 1450 "mercury_compile.m"
          {
#line 1435 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ErrorCheckOnly_22 == (MR_Integer) 1);
#line 1450 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1438 "mercury_compile.m"
              {
#line 1438 "mercury_compile.m"
                MR_Word top_level__mercury_compile__UnusedArgs_39;

#line 1438 "mercury_compile.m"
                {
#line 1438 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_39);
                }
#line 1446 "mercury_compile.m"
                if ((top_level__mercury_compile__UnusedArgs_39 == (MR_Integer) 0))
#line 1447 "mercury_compile.m"
                  {
#line 1447 "mercury_compile.m"
                  }
#line 1446 "mercury_compile.m"
                else
#line 1440 "mercury_compile.m"
                  {
#line 1440 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_40;
#line 1440 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__HLDS21a_41;
#line 1445 "mercury_compile.m"
                    MR_Word top_level__mercury_compile___HLDS22_42;

#line 1441 "mercury_compile.m"
                    {
#line 1441 "mercury_compile.m"
                      libs__globals__set_option_4_p_0((MR_Integer) 347, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[3]), top_level__mercury_compile__Globals_12, &top_level__mercury_compile__NoOptUnusedArgsGlobals_40);
                    }
#line 1443 "mercury_compile.m"
                    {
#line 1443 "mercury_compile.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_40, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_41);
                    }
#line 1445 "mercury_compile.m"
                    {
#line 1445 "mercury_compile.m"
                      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21a_41, &top_level__mercury_compile___HLDS22_42);
                    }
#line 1440 "mercury_compile.m"
                  }
#line 1449 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1449 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1438 "mercury_compile.m"
              }
#line 1450 "mercury_compile.m"
            else
#line 1453 "mercury_compile.m"
              {
#line 1450 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_35 == (MR_Integer) 1);
#line 1453 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1452 "mercury_compile.m"
                  {
#line 1452 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1452 "mercury_compile.m"
                  }
#line 1453 "mercury_compile.m"
                else
#line 1456 "mercury_compile.m"
                  {
#line 1453 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_36 == (MR_Integer) 1);
#line 1456 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1454 "mercury_compile.m"
                      {
#line 1454 "mercury_compile.m"
                        {
#line 1454 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                        }
#line 1455 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1454 "mercury_compile.m"
                      }
#line 1456 "mercury_compile.m"
                    else
#line 1461 "mercury_compile.m"
                      {
#line 1456 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeAnalysisRegistry_37 == (MR_Integer) 1);
#line 1461 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 1458 "mercury_compile.m"
                          {
#line 1458 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__HLDS22_43;

#line 1457 "mercury_compile.m"
                            {
#line 1457 "mercury_compile.m"
                              top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_43);
                            }
#line 1459 "mercury_compile.m"
                            {
#line 1459 "mercury_compile.m"
                              top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_43, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                            }
#line 1460 "mercury_compile.m"
                            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1458 "mercury_compile.m"
                          }
#line 1461 "mercury_compile.m"
                        else
#line 1464 "mercury_compile.m"
                          {
#line 1461 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeXmlDocumentation_38 == (MR_Integer) 1);
#line 1464 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 1462 "mercury_compile.m"
                              {
#line 1462 "mercury_compile.m"
                                {
#line 1462 "mercury_compile.m"
                                  check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                                }
#line 1463 "mercury_compile.m"
                                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1463 "mercury_compile.m"
                                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1462 "mercury_compile.m"
                              }
#line 1464 "mercury_compile.m"
                            else
#line 1466 "mercury_compile.m"
                              {
#line 1466 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__HLDS22_84;

#line 1465 "mercury_compile.m"
                                {
#line 1465 "mercury_compile.m"
                                  top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_84);
                                }
#line 1467 "mercury_compile.m"
                                {
#line 1467 "mercury_compile.m"
                                  top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(top_level__mercury_compile__NestedSubModules_14, top_level__mercury_compile__FindTimestampFiles_15, top_level__mercury_compile__MaybeTimestamps_26, top_level__mercury_compile__ModuleName_20, top_level__mercury_compile__HLDS22_84, *top_level__mercury_compile__STATE_VARIABLE_Specs_48, top_level__mercury_compile__ExtraObjFiles_16, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
#line 1467 "mercury_compile.m"
                                  return;
                                }
#line 1466 "mercury_compile.m"
                              }
#line 1464 "mercury_compile.m"
                          }
#line 1461 "mercury_compile.m"
                      }
#line 1456 "mercury_compile.m"
                  }
#line 1453 "mercury_compile.m"
              }
#line 1450 "mercury_compile.m"
          }
#line 1422 "mercury_compile.m"
      }
#line 1471 "mercury_compile.m"
    else
#line 1474 "mercury_compile.m"
      {
#line 1474 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_44;

#line 1474 "mercury_compile.m"
        {
#line 1474 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_44);
        }
#line 1475 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_44 == (MR_Integer) 0);
#line 1477 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1476 "mercury_compile.m"
          {
#line 1476 "mercury_compile.m"
            {
#line 1476 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1476 "mercury_compile.m"
          }
#line 1477 "mercury_compile.m"
        else
#line 1476 "mercury_compile.m"
          {
#line 1476 "mercury_compile.m"
          }
#line 1480 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1480 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1474 "mercury_compile.m"
      }
#line 1405 "mercury_compile.m"
  }
#line 1398 "mercury_compile.m"
}

#line 1366 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1366 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1366 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1366 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 1366 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33)
#line 1366 "mercury_compile.m"
{
#line 1375 "mercury_compile.m"
  {
#line 1375 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 0)));
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 1)));
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_26;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Module_27;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_29;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error_30;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_36_36;
#line 1375 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_39_39;
#line 1385 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1376 "mercury_compile.m"
    {
#line 1376 "mercury_compile.m"
      parse_tree__modules__check_for_no_exports_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Items_22, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__STATE_VARIABLE_Specs_0_32, &top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 1377 "mercury_compile.m"
    {
#line 1377 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__SourceFileModuleName_16);
    }
#line 1379 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1378 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = top_level__mercury_compile__NestedSubModules0_17;
#line 1379 "mercury_compile.m"
    else
#line 1380 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "mercury_compile.m"
    {
#line 1382 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__SourceFileName_15, top_level__mercury_compile__SourceFileModuleName_16, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__HaveReadModuleMap_19, top_level__mercury_compile__MaybeTimestamp_18, top_level__mercury_compile__Items_22, &top_level__mercury_compile__Module_27);
    }
#line 1385 "mercury_compile.m"
    {
#line 1385 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__Module_27, &top_level__mercury_compile__V_28_28, &top_level__mercury_compile__ImportedSpecs_29, &top_level__mercury_compile__Error_30);
    }
#line 1386 "mercury_compile.m"
    {
#line 1386 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_29, top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 1393 "mercury_compile.m"
    if ((top_level__mercury_compile__Error_30 == (MR_Integer) 2))
#line 1394 "mercury_compile.m"
      {
#line 1395 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_33 = top_level__mercury_compile__STATE_VARIABLE_Specs_39_39;
#line 1394 "mercury_compile.m"
      }
#line 1393 "mercury_compile.m"
    else
#line 1390 "mercury_compile.m"
      {
#line 1391 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_31_31;

#line 1391 "mercury_compile.m"
        {
#line 1391 "mercury_compile.m"
          top_level__mercury_compile__mercury_compile_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Module_27, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__FindTimestampFiles_20, top_level__mercury_compile__ExtraObjFiles_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_31_31, top_level__mercury_compile__STATE_VARIABLE_Specs_39_39, top_level__mercury_compile__STATE_VARIABLE_Specs_33);
        }
#line 1390 "mercury_compile.m"
      }
#line 1375 "mercury_compile.m"
  }
#line 1366 "mercury_compile.m"
}

#line 1341 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1341 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1341 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1341 "mercury_compile.m"
{
#line 1345 "mercury_compile.m"
  {
#line 1345 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1345 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1346 "mercury_compile.m"
    {
#line 1346 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1348 "mercury_compile.m"
    {
#line 1348 "mercury_compile.m"
      MR_Word base;
#line 1348 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1348 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1348 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1348 "mercury_compile.m"
    }
#line 1345 "mercury_compile.m"
  }
#line 1341 "mercury_compile.m"
}

#line 1339 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1339 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1339 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1339 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1339 "mercury_compile.m"
{
#line 1339 "mercury_compile.m"
  {
#line 1339 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1339 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1339 "mercury_compile.m"
    {
#line 1339 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1339 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1339 "mercury_compile.m"
  }
#line 1339 "mercury_compile.m"
}

#line 1318 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1318 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1318 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1318 "mercury_compile.m"
{
#line 1321 "mercury_compile.m"
  {
#line 1321 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1321 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1321 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1322 "mercury_compile.m"
    {
#line 1322 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1326 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1325 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".c_date";
#line 1326 "mercury_compile.m"
    else
#line 1326 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1331 "mercury_compile.m"
        top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".cs_date";
#line 1326 "mercury_compile.m"
      else
#line 1326 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1337 "mercury_compile.m"
          top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".erl_date";
#line 1326 "mercury_compile.m"
        else
#line 1326 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1328 "mercury_compile.m"
            top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".il_date";
#line 1326 "mercury_compile.m"
          else
#line 1334 "mercury_compile.m"
            top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".java_date";
#line 1339 "mercury_compile.m"
    {
#line 1339 "mercury_compile.m"
      MR_Word base;
#line 1339 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1339 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1339 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1339 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1339 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1339 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1339 "mercury_compile.m"
    }
#line 1321 "mercury_compile.m"
  }
#line 1318 "mercury_compile.m"
}

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1307 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1307 "mercury_compile.m"
{
#line 1312 "mercury_compile.m"
  {
#line 1312 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1312 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1314 "mercury_compile.m"
    {
#line 1314 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1316 "mercury_compile.m"
    {
#line 1316 "mercury_compile.m"
      MR_Word base;
#line 1316 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1316 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1316 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "mercury_compile.m"
    }
#line 1312 "mercury_compile.m"
  }
#line 1307 "mercury_compile.m"
}

#line 1305 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1305 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1305 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1305 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1305 "mercury_compile.m"
{
#line 1305 "mercury_compile.m"
  {
#line 1305 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1305 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1305 "mercury_compile.m"
    {
#line 1305 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1305 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1305 "mercury_compile.m"
  }
#line 1305 "mercury_compile.m"
}

#line 1294 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1294 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1294 "mercury_compile.m"
{
#line 1297 "mercury_compile.m"
  {
#line 1297 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1297 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1297 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1298 "mercury_compile.m"
    {
#line 1298 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1300 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1299 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".c";
#line 1300 "mercury_compile.m"
    else
#line 1300 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1301 "mercury_compile.m"
        top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".cs";
#line 1300 "mercury_compile.m"
      else
#line 1300 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1303 "mercury_compile.m"
          top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".erl";
#line 1300 "mercury_compile.m"
        else
#line 1300 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1300 "mercury_compile.m"
            top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".il";
#line 1300 "mercury_compile.m"
          else
#line 1302 "mercury_compile.m"
            top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".java";
#line 1305 "mercury_compile.m"
    {
#line 1305 "mercury_compile.m"
      MR_Word base;
#line 1305 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1305 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1305 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1305 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1305 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1305 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1305 "mercury_compile.m"
    }
#line 1297 "mercury_compile.m"
  }
#line 1294 "mercury_compile.m"
}

#line 1253 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1253 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1253 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5)
#line 1253 "mercury_compile.m"
{
#line 1255 "mercury_compile.m"
  {
#line 1255 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1255 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1255 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));

#line 1256 "mercury_compile.m"
    {
#line 1256 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_5);
#line 1256 "mercury_compile.m"
      return;
    }
#line 1255 "mercury_compile.m"
  }
#line 1253 "mercury_compile.m"
}

#line 1248 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_1,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1248 "mercury_compile.m"
{
#line 1250 "mercury_compile.m"
  {
#line 1250 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1250 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__2_2 == (MR_Integer) 2))
#line 1250 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 1250 "mercury_compile.m"
    else
#line 1250 "mercury_compile.m"
      if ((top_level__mercury_compile__HeadVar__2_2 == (MR_Integer) 1))
#line 1251 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_1 == (MR_Integer) 1);
#line 1250 "mercury_compile.m"
      else
#line 1250 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_FALSE;
#line 1250 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1250 "mercury_compile.m"
  }
#line 1248 "mercury_compile.m"
}

#line 1239 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1239 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1239 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1239 "mercury_compile.m"
{
#line 1244 "mercury_compile.m"
  {
#line 1244 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1244 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1244 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1245 "mercury_compile.m"
    {
#line 1245 "mercury_compile.m"
      parse_tree__modules__make_private_interface_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1245 "mercury_compile.m"
      return;
    }
#line 1244 "mercury_compile.m"
  }
#line 1239 "mercury_compile.m"
}

#line 1231 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1231 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1231 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1231 "mercury_compile.m"
{
#line 1236 "mercury_compile.m"
  {
#line 1236 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1236 "mercury_compile.m"
    {
#line 1236 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__HeadVar__5_5);
#line 1236 "mercury_compile.m"
      return;
    }
#line 1236 "mercury_compile.m"
  }
#line 1231 "mercury_compile.m"
}

#line 1222 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1222 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1222 "mercury_compile.m"
{
#line 1227 "mercury_compile.m"
  {
#line 1227 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1227 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1227 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1228 "mercury_compile.m"
    {
#line 1228 "mercury_compile.m"
      parse_tree__modules__make_interface_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1228 "mercury_compile.m"
      return;
    }
#line 1227 "mercury_compile.m"
  }
#line 1222 "mercury_compile.m"
}

#line 1219 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1219 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1219 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1219 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1219 "mercury_compile.m"
{
#line 1219 "mercury_compile.m"
  {
#line 1219 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1219 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_5;

#line 1219 "mercury_compile.m"
    {
#line 1219 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_5);
    }
#line 1219 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_5));
#line 1219 "mercury_compile.m"
  }
#line 1219 "mercury_compile.m"
}

#line 1214 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1214 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1214 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1214 "mercury_compile.m"
{
#line 1214 "mercury_compile.m"
  {
#line 1214 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1214 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_23;
#line 1214 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33;

#line 1214 "mercury_compile.m"
    {
#line 1214 "mercury_compile.m"
      top_level__mercury_compile__compile_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_23, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33);
    }
#line 1214 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_23));
#line 1214 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33));
#line 1214 "mercury_compile.m"
  }
#line 1214 "mercury_compile.m"
}

#line 1203 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1203 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1203 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1203 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24)
#line 1203 "mercury_compile.m"
{
#line 1212 "mercury_compile.m"
  {
#line 1212 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeInfo_45_45;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_26;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_32_32;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_33_33;
#line 1213 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33;
#line 1213 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34;
#line 1218 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_27;
#line 1218 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_28;

#line 1214 "mercury_compile.m"
    {
#line 1214 "mercury_compile.m"
      top_level__mercury_compile__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_10[0]));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_1));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile__Globals_14));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile__FileName_15));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_16));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 6) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_17));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 7) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_18));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 8) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMap_19));
#line 1214 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 9) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_20));
#line 1214 "mercury_compile.m"
    }
#line 6970 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeInfo_45_45 = (MR_Word) &top_level__mercury_compile_scalar_common_3[1];
#line 1213 "mercury_compile.m"
    {
#line 1213 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeInfo_45_45, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_32_32, top_level__mercury_compile__SubModuleList_21, &top_level__mercury_compile__ExtraObjFileLists_26, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_29)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34);
    }
#line 1213 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_33_33 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33);
#line 1218 "mercury_compile.m"
    {
#line 1218 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile__Globals_14, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_27, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_28);
    }
#line 6984 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1219 "mercury_compile.m"
    {
#line 1219 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeInfo_45_45, top_level__mercury_compile__TypeCtorInfo_51_51, (MR_Word) &top_level__mercury_compile_scalar_common_3[3], top_level__mercury_compile__SubModuleList_21, top_level__mercury_compile__ModulesToLink_23);
    }
#line 1220 "mercury_compile.m"
    {
#line 1220 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__ExtraObjFileLists_26, top_level__mercury_compile__ExtraObjFiles_24);
#line 1220 "mercury_compile.m"
      return;
    }
#line 1212 "mercury_compile.m"
  }
#line 1203 "mercury_compile.m"
}

#line 1151 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1151 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1151 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1151 "mercury_compile.m"
{
#line 1151 "mercury_compile.m"
  {
#line 1151 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1151 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1151__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1151 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1151 "mercury_compile.m"
  }
#line 1151 "mercury_compile.m"
}

#line 1107 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1107 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1107 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1107 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 1107 "mercury_compile.m"
{
#line 1112 "mercury_compile.m"
  {
#line 1112 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInt_18;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInt_19;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1112 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_30;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error_32;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMap_33;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_34;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_60_60;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_62_62;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_63_63;
#line 1112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_64_64;

#line 1113 "mercury_compile.m"
    {
#line 1113 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 82, &top_level__mercury_compile__MakeShortInt_18);
    }
#line 1115 "mercury_compile.m"
    {
#line 1115 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 83, &top_level__mercury_compile__MakeInt_19);
    }
#line 1117 "mercury_compile.m"
    {
#line 1117 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1119 "mercury_compile.m"
    {
#line 1119 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1121 "mercury_compile.m"
    {
#line 1121 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 87, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1123 "mercury_compile.m"
    {
#line 1123 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 88, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1126 "mercury_compile.m"
    {
#line 1126 "mercury_compile.m"
      top_level__mercury_compile__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1126 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "mercury_compile.m"
    }
#line 1126 "mercury_compile.m"
    {
#line 1126 "mercury_compile.m"
      top_level__mercury_compile__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1126 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1126 "mercury_compile.m"
    }
#line 1125 "mercury_compile.m"
    {
#line 1125 "mercury_compile.m"
      top_level__mercury_compile__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1125 "mercury_compile.m"
    }
#line 1125 "mercury_compile.m"
    {
#line 1125 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1125 "mercury_compile.m"
    }
#line 1125 "mercury_compile.m"
    {
#line 1125 "mercury_compile.m"
      top_level__mercury_compile__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (top_level__mercury_compile__MakeInt_19));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__V_61_61));
#line 1125 "mercury_compile.m"
    }
#line 1125 "mercury_compile.m"
    {
#line 1125 "mercury_compile.m"
      top_level__mercury_compile__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 0) = ((MR_Box) (top_level__mercury_compile__MakeShortInt_18));
#line 1125 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 1125 "mercury_compile.m"
    }
#line 1125 "mercury_compile.m"
    {
#line 1125 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_59_59, &top_level__mercury_compile__DirectReport_24);
    }
#line 1129 "mercury_compile.m"
    if ((top_level__mercury_compile__DirectReport_24 == (MR_Integer) 0))
#line 1130 "mercury_compile.m"
      {
#line 1130 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1131 "mercury_compile.m"
        {
#line 1131 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 53, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
        }
#line 1133 "mercury_compile.m"
        {
#line 1133 "mercury_compile.m"
          top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1130 "mercury_compile.m"
      }
#line 1129 "mercury_compile.m"
    else
#line 1128 "mercury_compile.m"
      {
#line 1128 "mercury_compile.m"
      }
#line 1136 "mercury_compile.m"
    {
#line 1136 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_10, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__Items_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Error_32, top_level__mercury_compile__HaveReadModuleMap0_14, &top_level__mercury_compile__HaveReadModuleMap_33);
    }
#line 1139 "mercury_compile.m"
    {
#line 1139 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_34);
    }
#line 1250 "mercury_compile.m"
    if ((top_level__mercury_compile__Error_32 == (MR_Integer) 2))
#line 1250 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 1250 "mercury_compile.m"
    else
#line 1250 "mercury_compile.m"
      if ((top_level__mercury_compile__Error_32 == (MR_Integer) 1))
#line 1251 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_34 == (MR_Integer) 1);
#line 1250 "mercury_compile.m"
      else
#line 1250 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_FALSE;
#line 1146 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1143 "mercury_compile.m"
      {
#line 1142 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_35;
#line 1142 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_36;

#line 1142 "mercury_compile.m"
        {
#line 1142 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_35, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_36);
        }
#line 1144 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1143 "mercury_compile.m"
      }
#line 1146 "mercury_compile.m"
    else
#line 1148 "mercury_compile.m"
      {
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_86_86;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleList0_37;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_38;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleListToCompile_43;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules0_44;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules_45;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_46;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_47;
#line 1148 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_50;
#line 1169 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_88_88;

#line 1147 "mercury_compile.m"
        {
#line 1147 "mercury_compile.m"
          parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__Items_30, &top_level__mercury_compile__SubModuleList0_37, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_38);
        }
#line 1155 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "mercury_compile.m"
          top_level__mercury_compile__SubModuleListToCompile_43 = top_level__mercury_compile__SubModuleList0_37;
#line 1155 "mercury_compile.m"
        else
#line 1150 "mercury_compile.m"
          {
#line 1150 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_13, (MR_Integer) 0)));
#line 1150 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_40;

#line 1151 "mercury_compile.m"
            {
#line 1151 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 1151 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 1) = ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_1));
#line 1151 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1151 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_39));
#line 1151 "mercury_compile.m"
            }
#line 1154 "mercury_compile.m"
            {
#line 1154 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[1], top_level__mercury_compile__ToRecompile_40, top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__SubModuleListToCompile_43);
            }
#line 1150 "mercury_compile.m"
          }
#line 7327 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1159 "mercury_compile.m"
        {
#line 1159 "mercury_compile.m"
          mercury__assoc_list__keys_2_p_0(top_level__mercury_compile__TypeCtorInfo_86_86, (MR_Word) &top_level__mercury_compile_scalar_common_1[1], top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__NestedSubModules0_44);
        }
#line 1160 "mercury_compile.m"
        {
#line 1160 "mercury_compile.m"
          mercury__list__delete_all_3_p_1(top_level__mercury_compile__TypeCtorInfo_86_86, top_level__mercury_compile__NestedSubModules0_44, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), &top_level__mercury_compile__NestedSubModules_45);
        }
#line 1162 "mercury_compile.m"
        {
#line 1162 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_46);
        }
#line 1164 "mercury_compile.m"
        {
#line 1164 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 117, &top_level__mercury_compile__TraceProf_47);
        }
#line 1167 "mercury_compile.m"
        {
#line 1167 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__prim_data__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1167 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1167 "mercury_compile.m"
          {
#line 1169 "mercury_compile.m"
            {
#line 1169 "mercury_compile.m"
              top_level__mercury_compile__V_88_88 = mdbcomp__prim_data__mercury_profiling_builtin_module_0_f_0();
            }
#line 1169 "mercury_compile.m"
            {
#line 1169 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_88_88);
            }
#line 1169 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1170 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_47 == (MR_Integer) 1);
#line 1168 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1167 "mercury_compile.m"
          }
#line 1183 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1179 "mercury_compile.m"
          {
#line 1179 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_48;

#line 1178 "mercury_compile.m"
            {
#line 1178 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[3]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_48);
            }
#line 1180 "mercury_compile.m"
            {
#line 1180 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_48, &top_level__mercury_compile__GlobalsToUse_50);
            }
#line 1179 "mercury_compile.m"
          }
#line 1183 "mercury_compile.m"
        else
#line 1184 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_50 = top_level__mercury_compile__Globals_26;
#line 1186 "mercury_compile.m"
        {
#line 1186 "mercury_compile.m"
          top_level__mercury_compile__compile_all_submodules_13_p_0(top_level__mercury_compile__GlobalsToUse_50, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__NestedSubModules_45, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__HaveReadModuleMap_33, top_level__mercury_compile__FindTimestampFiles_46, top_level__mercury_compile__SubModuleListToCompile_43, top_level__mercury_compile__Specs1_38, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 1186 "mercury_compile.m"
          return;
        }
#line 1148 "mercury_compile.m"
      }
#line 1112 "mercury_compile.m"
  }
#line 1107 "mercury_compile.m"
}

#line 1085 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1085 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1085 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12)
#line 1085 "mercury_compile.m"
{
#line 1094 "mercury_compile.m"
  {
#line 1094 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1094 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1094 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1094 "mercury_compile.m"
    {
#line 1094 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__SubModule_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1094 "mercury_compile.m"
  }
#line 1085 "mercury_compile.m"
}

#line 1012 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1012 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1012 "mercury_compile.m"
{
#line 1012 "mercury_compile.m"
  {
#line 1012 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1012 "mercury_compile.m"
    {
#line 1012 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
#line 1012 "mercury_compile.m"
      return;
    }
#line 1012 "mercury_compile.m"
  }
#line 1012 "mercury_compile.m"
}

#line 993 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 993 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 993 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 993 "mercury_compile.m"
{
#line 993 "mercury_compile.m"
  {
#line 993 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 993 "mercury_compile.m"
    {
#line 993 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 993 "mercury_compile.m"
      return;
    }
#line 993 "mercury_compile.m"
  }
#line 993 "mercury_compile.m"
}

#line 990 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 990 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 990 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 990 "mercury_compile.m"
{
#line 990 "mercury_compile.m"
  {
#line 990 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 990 "mercury_compile.m"
    {
#line 990 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 990 "mercury_compile.m"
      return;
    }
#line 990 "mercury_compile.m"
  }
#line 990 "mercury_compile.m"
}

#line 986 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 986 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 986 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 986 "mercury_compile.m"
{
#line 986 "mercury_compile.m"
  {
#line 986 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 986 "mercury_compile.m"
    {
#line 986 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 986 "mercury_compile.m"
      return;
    }
#line 986 "mercury_compile.m"
  }
#line 986 "mercury_compile.m"
}

#line 969 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 969 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 969 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 969 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12)
#line 969 "mercury_compile.m"
{
#line 973 "mercury_compile.m"
  {
#line 973 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_14;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInterface_15;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInterface_16;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakePrivateInterface_17;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ConvertToMercury_18;
#line 973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateVersionNumbers_19;
#line 1018 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProcessModule_20;
#line 1018 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReturnTimestamp_21;

#line 974 "mercury_compile.m"
    {
#line 974 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_14);
    }
#line 975 "mercury_compile.m"
    {
#line 975 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 83, &top_level__mercury_compile__MakeInterface_15);
    }
#line 976 "mercury_compile.m"
    {
#line 976 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 82, &top_level__mercury_compile__MakeShortInterface_16);
    }
#line 978 "mercury_compile.m"
    {
#line 978 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 84, &top_level__mercury_compile__MakePrivateInterface_17);
    }
#line 980 "mercury_compile.m"
    {
#line 980 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 94, &top_level__mercury_compile__ConvertToMercury_18);
    }
#line 982 "mercury_compile.m"
    {
#line 982 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 112, &top_level__mercury_compile__GenerateVersionNumbers_19);
    }
#line 985 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeInterface_15 == (MR_Integer) 1);
#line 989 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 986 "mercury_compile.m"
      {
#line 986 "mercury_compile.m"
        {
#line 986 "mercury_compile.m"
          top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 986 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 986 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_1));
#line 986 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 986 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 986 "mercury_compile.m"
        }
#line 987 "mercury_compile.m"
        {
#line 987 "mercury_compile.m"
          top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
        }
#line 986 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_TRUE;
#line 986 "mercury_compile.m"
      }
#line 989 "mercury_compile.m"
    else
#line 992 "mercury_compile.m"
      {
#line 989 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeShortInterface_16 == (MR_Integer) 1);
#line 992 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 990 "mercury_compile.m"
          {
#line 990 "mercury_compile.m"
            {
#line 990 "mercury_compile.m"
              top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 990 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 990 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_2));
#line 990 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 990 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 990 "mercury_compile.m"
            }
#line 991 "mercury_compile.m"
            top_level__mercury_compile__ReturnTimestamp_21 = (MR_Integer) 1;
#line 990 "mercury_compile.m"
            top_level__mercury_compile__succeeded = MR_TRUE;
#line 990 "mercury_compile.m"
          }
#line 992 "mercury_compile.m"
        else
#line 996 "mercury_compile.m"
          {
#line 992 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakePrivateInterface_17 == (MR_Integer) 1);
#line 996 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 996 "mercury_compile.m"
              {
#line 993 "mercury_compile.m"
                {
#line 993 "mercury_compile.m"
                  top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 993 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 993 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_3));
#line 993 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 993 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 993 "mercury_compile.m"
                }
#line 994 "mercury_compile.m"
                {
#line 994 "mercury_compile.m"
                  top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
                }
#line 994 "mercury_compile.m"
                top_level__mercury_compile__succeeded = MR_TRUE;
#line 996 "mercury_compile.m"
              }
#line 996 "mercury_compile.m"
          }
#line 992 "mercury_compile.m"
      }
#line 1018 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1002 "mercury_compile.m"
      {
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Globals_22;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_23;
#line 1002 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_24;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestamp_25;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Items_26;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs0_27;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Error_28;
#line 1002 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_53_53;
#line 1000 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;

#line 1002 "mercury_compile.m"
        {
#line 1002 "mercury_compile.m"
          top_level__mercury_compile__V_53_53 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
        }
#line 1000 "mercury_compile.m"
        {
#line 1000 "mercury_compile.m"
          top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_22, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ReturnTimestamp_21, &top_level__mercury_compile__ModuleName_23, &top_level__mercury_compile__FileName_24, &top_level__mercury_compile__MaybeTimestamp_25, &top_level__mercury_compile__Items_26, &top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Error_28, top_level__mercury_compile__V_53_53, &top_level__mercury_compile__V_29_29);
        }
#line 1003 "mercury_compile.m"
        {
#line 1003 "mercury_compile.m"
          top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Error_28);
        }
#line 1005 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1003 "mercury_compile.m"
          {
#line 1003 "mercury_compile.m"
          }
#line 1005 "mercury_compile.m"
        else
#line 1007 "mercury_compile.m"
          {
#line 1007 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SubModuleList_30;
#line 1007 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_31;
#line 1007 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_58_58;
#line 1009 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_32;
#line 1009 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_33;
#line 1011 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46;

#line 1006 "mercury_compile.m"
            {
#line 1006 "mercury_compile.m"
              parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_23, top_level__mercury_compile__Items_26, &top_level__mercury_compile__SubModuleList_30, top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Specs_31);
            }
#line 1009 "mercury_compile.m"
            {
#line 1009 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_31, top_level__mercury_compile__Globals_22, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_32, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_33);
            }
#line 1012 "mercury_compile.m"
            {
#line 1012 "mercury_compile.m"
              top_level__mercury_compile__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[1]));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_4));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_20));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 4) = ((MR_Box) (top_level__mercury_compile__FileName_24));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_23));
#line 1012 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_25));
#line 1012 "mercury_compile.m"
            }
#line 1011 "mercury_compile.m"
            {
#line 1011 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &top_level__mercury_compile_scalar_common_3[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_58_58, top_level__mercury_compile__SubModuleList_30, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46);
            }
#line 1007 "mercury_compile.m"
          }
#line 1016 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "mercury_compile.m"
      }
#line 1018 "mercury_compile.m"
    else
#line 1035 "mercury_compile.m"
      {
#line 1019 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ConvertToMercury_18 == (MR_Integer) 1);
#line 1035 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1023 "mercury_compile.m"
          {
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_61_61;
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_80;
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_81;
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Items_82;
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Error_83;
#line 1023 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_84;
#line 1021 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_34_34;
#line 1021 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_35_35;
#line 1021 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_36_36;
#line 1025 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_78;
#line 1025 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_79;

#line 1023 "mercury_compile.m"
            {
#line 1023 "mercury_compile.m"
              top_level__mercury_compile__V_61_61 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
            }
#line 1021 "mercury_compile.m"
            {
#line 1021 "mercury_compile.m"
              top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_80, top_level__mercury_compile__FileOrModule_10, (MR_Integer) 1, &top_level__mercury_compile__ModuleName_81, &top_level__mercury_compile__V_34_34, &top_level__mercury_compile__V_35_35, &top_level__mercury_compile__Items_82, &top_level__mercury_compile__Specs_84, &top_level__mercury_compile__Error_83, top_level__mercury_compile__V_61_61, &top_level__mercury_compile__V_36_36);
            }
#line 1025 "mercury_compile.m"
            {
#line 1025 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_84, top_level__mercury_compile__Globals_80, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_78, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_79);
            }
#line 1026 "mercury_compile.m"
            {
#line 1026 "mercury_compile.m"
              top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Error_83);
            }
#line 1028 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1026 "mercury_compile.m"
              {
#line 1026 "mercury_compile.m"
              }
#line 1028 "mercury_compile.m"
            else
#line 1030 "mercury_compile.m"
              {
#line 1030 "mercury_compile.m"
                MR_String top_level__mercury_compile__OutputFileName_37;

#line 1029 "mercury_compile.m"
                {
#line 1029 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_37);
                }
#line 1031 "mercury_compile.m"
                {
#line 1031 "mercury_compile.m"
                  parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, top_level__mercury_compile__OutputFileName_37, top_level__mercury_compile__Items_82);
                }
#line 1030 "mercury_compile.m"
              }
#line 1033 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "mercury_compile.m"
          }
#line 1035 "mercury_compile.m"
        else
#line 1036 "mercury_compile.m"
          {
#line 1036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart0_38;
#line 1036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_39;
#line 1036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_43;
#line 1036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMap_44;
#line 1036 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_93;
#line 1072 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_76_76;

#line 1036 "mercury_compile.m"
            {
#line 1036 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 111, &top_level__mercury_compile__Smart0_38);
            }
#line 1037 "mercury_compile.m"
            {
#line 1037 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_39);
            }
#line 7962 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__DisableSmart_39 == (MR_Integer) 0))
#line 7964 "top_level.mercury_compile.c"
              {
#line 1045 "mercury_compile.m"
                top_level__mercury_compile__Globals_93 = top_level__mercury_compile__Globals0_8;
#line 1067 "mercury_compile.m"
                if ((top_level__mercury_compile__Smart0_38 == (MR_Integer) 0))
#line 1068 "mercury_compile.m"
                  {
#line 1069 "mercury_compile.m"
                    {
#line 1069 "mercury_compile.m"
                      mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1070 "mercury_compile.m"
                    top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "mercury_compile.m"
                  }
#line 1067 "mercury_compile.m"
                else
#line 1049 "mercury_compile.m"
                  {
#line 1049 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTargetFiles_41;
#line 1049 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTimestampFiles_42;
#line 1049 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_89;

#line 1052 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 1053 "mercury_compile.m"
                      {
#line 1053 "mercury_compile.m"
                        MR_String top_level__mercury_compile__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 1060 "mercury_compile.m"
                        {
#line 1060 "mercury_compile.m"
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_87, &top_level__mercury_compile__ModuleName_89);
                        }
#line 1053 "mercury_compile.m"
                      }
#line 1052 "mercury_compile.m"
                    else
#line 1051 "mercury_compile.m"
                      top_level__mercury_compile__ModuleName_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));
#line 1062 "mercury_compile.m"
                    {
#line 1062 "mercury_compile.m"
                      top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTargetFiles_41);
                    }
#line 1063 "mercury_compile.m"
                    {
#line 1063 "mercury_compile.m"
                      top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTimestampFiles_42);
                    }
#line 1064 "mercury_compile.m"
                    {
#line 1064 "mercury_compile.m"
                      recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__ModuleName_89, top_level__mercury_compile__FindTargetFiles_41, top_level__mercury_compile__FindTimestampFiles_42, &top_level__mercury_compile__ModulesToRecompile_43, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1049 "mercury_compile.m"
                  }
#line 8027 "top_level.mercury_compile.c"
              }
#line 8029 "top_level.mercury_compile.c"
            else
#line 8031 "top_level.mercury_compile.c"
              {
#line 1040 "mercury_compile.m"
                {
#line 1040 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[3]), top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_93);
                }
#line 1069 "mercury_compile.m"
                {
#line 1069 "mercury_compile.m"
                  mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                }
#line 1070 "mercury_compile.m"
                top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8045 "top_level.mercury_compile.c"
              }
#line 1072 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_43)) == (MR_mktag((MR_Integer) 1)));
#line 1072 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1072 "mercury_compile.m"
              {
#line 1072 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_43, (MR_Integer) 0)));
#line 1072 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "mercury_compile.m"
              }
#line 1078 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1076 "mercury_compile.m"
              {
#line 1076 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1077 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1076 "mercury_compile.m"
              }
#line 1078 "mercury_compile.m"
            else
#line 1079 "mercury_compile.m"
              {
#line 1079 "mercury_compile.m"
                top_level__mercury_compile__process_module_2_9_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ModulesToRecompile_43, top_level__mercury_compile__HaveReadModuleMap_44, top_level__mercury_compile__ModulesToLink_11, top_level__mercury_compile__ExtraObjFiles_12);
#line 1079 "mercury_compile.m"
                return;
              }
#line 1036 "mercury_compile.m"
          }
#line 1035 "mercury_compile.m"
      }
#line 973 "mercury_compile.m"
  }
#line 969 "mercury_compile.m"
}

#line 964 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 964 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 964 "mercury_compile.m"
{
#line 966 "mercury_compile.m"
  {
#line 966 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 966 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 966 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__1_1 == (MR_Integer) 0))
#line 966 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 966 "mercury_compile.m"
    else
#line 967 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 966 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 966 "mercury_compile.m"
  }
#line 964 "mercury_compile.m"
}

#line 831 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 831 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_24,
#line 831 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 831 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43)
#line 831 "mercury_compile.m"
{
#line 842 "mercury_compile.m"
  {
#line 842 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 842 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 884 "mercury_compile.m"
      {
#line 884 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 884 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_37;
#line 884 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_136;
#line 884 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_142;
#line 907 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_131;
#line 907 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_132;
#line 907 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorPrime_133;
#line 907 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_134;
#line 894 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_38_38;

#line 885 "mercury_compile.m"
        {
#line 885 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 44, &top_level__mercury_compile__Verbose_136);
        }
#line 886 "mercury_compile.m"
        {
#line 886 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "% Parsing file \140");
        }
#line 887 "mercury_compile.m"
        {
#line 887 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, top_level__mercury_compile__FileName_36);
        }
#line 888 "mercury_compile.m"
        {
#line 888 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "\' and imported interfaces...\n");
        }
#line 890 "mercury_compile.m"
        {
#line 890 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_36, &top_level__mercury_compile__DefaultModuleName_37);
        }
#line 894 "mercury_compile.m"
        {
#line 894 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__DefaultModuleName_37, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_131, &top_level__mercury_compile__SpecsPrime_132, &top_level__mercury_compile__ErrorPrime_133, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MaybeTimestampPrime_134);
        }
#line 907 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 900 "mercury_compile.m"
          {
#line 900 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_53_53;

#line 900 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 902 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_19 = top_level__mercury_compile__DefaultModuleName_37;
#line 901 "mercury_compile.m"
            {
#line 901 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 901 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 1) = ((MR_Box) ((MR_String) ".m"));
#line 901 "mercury_compile.m"
            }
#line 901 "mercury_compile.m"
            {
#line 901 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_53_53)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 903 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_131;
#line 904 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_132;
#line 905 "mercury_compile.m"
            *top_level__mercury_compile__Error_24 = top_level__mercury_compile__ErrorPrime_133;
#line 906 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_134;
#line 900 "mercury_compile.m"
          }
#line 907 "mercury_compile.m"
        else
#line 913 "mercury_compile.m"
          {
#line 913 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_39;
#line 913 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_130;

#line 911 "mercury_compile.m"
            {
#line 911 "mercury_compile.m"
              parse_tree__read_modules__read_module_from_file_13_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_36, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Error_24, top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 914 "mercury_compile.m"
            {
#line 914 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_130);
            }
#line 919 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_130 == (MR_Integer) 0))
#line 921 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 919 "mercury_compile.m"
            else
#line 916 "mercury_compile.m"
              {
#line 917 "mercury_compile.m"
                {
#line 917 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[3]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 916 "mercury_compile.m"
              }
#line 930 "mercury_compile.m"
            {
#line 930 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 111, &top_level__mercury_compile__Smart_39);
            }
#line 932 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_39 == (MR_Integer) 1);
#line 932 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 932 "mercury_compile.m"
              {
#line 933 "mercury_compile.m"
                {
#line 933 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__DefaultModuleName_37);
                }
#line 933 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 932 "mercury_compile.m"
              }
#line 955 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 938 "mercury_compile.m"
              {
#line 938 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_40;

#line 937 "mercury_compile.m"
                {
#line 937 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 23, &top_level__mercury_compile__Warn_40);
                }
#line 951 "mercury_compile.m"
                if ((top_level__mercury_compile__Warn_40 == (MR_Integer) 0))
#line 952 "mercury_compile.m"
                  {
#line 952 "mercury_compile.m"
                  }
#line 951 "mercury_compile.m"
                else
#line 940 "mercury_compile.m"
                  {
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Pieces_41;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_68_68;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_71_71;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_73_73;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_74_74;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_75_75;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_78_78;
#line 940 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_79_79;

#line 944 "mercury_compile.m"
                    {
#line 944 "mercury_compile.m"
                      top_level__mercury_compile__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_74_74, 0) = ((MR_Box) (top_level__mercury_compile__FileName_36));
#line 944 "mercury_compile.m"
                    }
#line 945 "mercury_compile.m"
                    {
#line 945 "mercury_compile.m"
                      top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 945 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 945 "mercury_compile.m"
                    }
#line 945 "mercury_compile.m"
                    {
#line 945 "mercury_compile.m"
                      top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 945 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[14])));
#line 945 "mercury_compile.m"
                    }
#line 944 "mercury_compile.m"
                    {
#line 944 "mercury_compile.m"
                      top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[25])));
#line 944 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 944 "mercury_compile.m"
                    }
#line 944 "mercury_compile.m"
                    {
#line 944 "mercury_compile.m"
                      top_level__mercury_compile__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 0) = ((MR_Box) (top_level__mercury_compile__V_74_74));
#line 944 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 944 "mercury_compile.m"
                    }
#line 943 "mercury_compile.m"
                    {
#line 943 "mercury_compile.m"
                      top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 943 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (top_level__mercury_compile__V_73_73));
#line 943 "mercury_compile.m"
                    }
#line 943 "mercury_compile.m"
                    {
#line 943 "mercury_compile.m"
                      top_level__mercury_compile__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[24])));
#line 943 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 1) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 943 "mercury_compile.m"
                    }
#line 942 "mercury_compile.m"
                    {
#line 942 "mercury_compile.m"
                      top_level__mercury_compile__Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[23])));
#line 942 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 1) = ((MR_Box) (top_level__mercury_compile__V_68_68));
#line 942 "mercury_compile.m"
                    }
#line 949 "mercury_compile.m"
                    {
#line 949 "mercury_compile.m"
                      parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_41);
                    }
#line 950 "mercury_compile.m"
                    {
#line 950 "mercury_compile.m"
                      libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                    }
#line 940 "mercury_compile.m"
                  }
#line 954 "mercury_compile.m"
                {
#line 954 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 938 "mercury_compile.m"
              }
#line 955 "mercury_compile.m"
            else
#line 954 "mercury_compile.m"
              {
#line 954 "mercury_compile.m"
              }
#line 954 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 913 "mercury_compile.m"
          }
#line 959 "mercury_compile.m"
        {
#line 959 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_142);
        }
#line 960 "mercury_compile.m"
        {
#line 960 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_142);
        }
#line 961 "mercury_compile.m"
        {
#line 961 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_36, (MR_String) ".m");
        }
#line 884 "mercury_compile.m"
      }
#line 842 "mercury_compile.m"
    else
#line 842 "mercury_compile.m"
      {
#line 842 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 842 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 842 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_35;
#line 864 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_29;
#line 864 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_30;
#line 864 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorPrime_31;
#line 864 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_32;
#line 864 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_33;

#line 842 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 843 "mercury_compile.m"
        {
#line 843 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 44, &top_level__mercury_compile__Verbose_27);
        }
#line 844 "mercury_compile.m"
        {
#line 844 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 845 "mercury_compile.m"
        {
#line 845 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__prim_data__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_19);
        }
#line 846 "mercury_compile.m"
        {
#line 846 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 847 "mercury_compile.m"
        {
#line 847 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 851 "mercury_compile.m"
        {
#line 851 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_29, &top_level__mercury_compile__SpecsPrime_30, &top_level__mercury_compile__ErrorPrime_31, &top_level__mercury_compile__SourceFileNamePrime_32, &top_level__mercury_compile__MaybeTimestampPrime_33);
        }
#line 864 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 857 "mercury_compile.m"
          {
#line 857 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_117_117;

#line 857 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 858 "mercury_compile.m"
            {
#line 858 "mercury_compile.m"
              top_level__mercury_compile__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 858 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 1) = ((MR_Box) ((MR_String) ".m"));
#line 858 "mercury_compile.m"
            }
#line 858 "mercury_compile.m"
            {
#line 858 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_117_117)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 859 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_29;
#line 860 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_30;
#line 861 "mercury_compile.m"
            *top_level__mercury_compile__Error_24 = top_level__mercury_compile__ErrorPrime_31;
#line 862 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_20 = top_level__mercury_compile__SourceFileNamePrime_32;
#line 863 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_33;
#line 857 "mercury_compile.m"
          }
#line 864 "mercury_compile.m"
        else
#line 870 "mercury_compile.m"
          {
#line 870 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_34;

#line 868 "mercury_compile.m"
            {
#line 868 "mercury_compile.m"
              parse_tree__read_modules__read_module_13_p_0(top_level__mercury_compile__Globals0_15, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", (MR_String) "Reading module", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Error_24, top_level__mercury_compile__SourceFileName_20, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 871 "mercury_compile.m"
            {
#line 871 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_34);
            }
#line 876 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_34 == (MR_Integer) 0))
#line 878 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 876 "mercury_compile.m"
            else
#line 873 "mercury_compile.m"
              {
#line 874 "mercury_compile.m"
                {
#line 874 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[3]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 873 "mercury_compile.m"
              }
#line 878 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 870 "mercury_compile.m"
          }
#line 881 "mercury_compile.m"
        {
#line 881 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 54, &top_level__mercury_compile__Stats_35);
        }
#line 882 "mercury_compile.m"
        {
#line 882 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_35);
#line 882 "mercury_compile.m"
          return;
        }
#line 842 "mercury_compile.m"
      }
#line 842 "mercury_compile.m"
  }
#line 831 "mercury_compile.m"
}

#line 756 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 756 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 756 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 756 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 756 "mercury_compile.m"
{
#line 762 "mercury_compile.m"
  {
#line 762 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 762 "mercury_compile.m"
    {
#line 762 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Globals_12, top_level__mercury_compile__HeadVar__5_5, top_level__mercury_compile__HeadVar__7_7);
#line 762 "mercury_compile.m"
      return;
    }
#line 762 "mercury_compile.m"
  }
#line 756 "mercury_compile.m"
}

#line 739 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 739 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 739 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 739 "mercury_compile.m"
{
#line 739 "mercury_compile.m"
  {
#line 739 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 739 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__5_5;
#line 739 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__7_7;

#line 739 "mercury_compile.m"
    {
#line 739 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__7_7);
    }
#line 739 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__5_5));
#line 739 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__7_7));
#line 739 "mercury_compile.m"
  }
#line 739 "mercury_compile.m"
}

#line 726 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 726 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 726 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 726 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 726 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 726 "mercury_compile.m"
{
#line 731 "mercury_compile.m"
  {
#line 731 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 731 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_18;
#line 731 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_19;
#line 816 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_43;

#line 813 "mercury_compile.m"
    {
#line 813 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_14, (MR_String) ".m", &top_level__mercury_compile__FileName_43);
    }
#line 816 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 815 "mercury_compile.m"
      {
#line 815 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 815 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__FileName_43));
#line 815 "mercury_compile.m"
      }
#line 816 "mercury_compile.m"
    else
#line 820 "mercury_compile.m"
      {
#line 820 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_44;

#line 820 "mercury_compile.m"
        {
#line 820 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_14, &top_level__mercury_compile__ModuleName_44);
        }
#line 821 "mercury_compile.m"
        {
#line 821 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 821 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_44));
#line 821 "mercury_compile.m"
        }
#line 820 "mercury_compile.m"
      }
#line 733 "mercury_compile.m"
    {
#line 733 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 622, &top_level__mercury_compile__InvokedByMake_19);
    }
#line 749 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_19 == (MR_Integer) 0))
#line 735 "mercury_compile.m"
      {
#line 735 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTuple_21;
#line 735 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_27_27;
#line 735 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;
#line 736 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_20_20;

#line 826 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 826 "mercury_compile.m"
          {
#line 826 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 828 "mercury_compile.m"
            {
#line 828 "mercury_compile.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_46, &top_level__mercury_compile__V_27_27);
            }
#line 826 "mercury_compile.m"
          }
#line 826 "mercury_compile.m"
        else
#line 829 "mercury_compile.m"
          top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));
#line 739 "mercury_compile.m"
        {
#line 739 "mercury_compile.m"
          top_level__mercury_compile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 739 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[0]));
#line 739 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_9_p_0_1));
#line 739 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 3) = ((MR_Box) (top_level__mercury_compile__FileOrModule_18));
#line 739 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 4) = ((MR_Box) (top_level__mercury_compile__OptionArgs_13));
#line 739 "mercury_compile.m"
        }
#line 736 "mercury_compile.m"
        {
#line 736 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_10, top_level__mercury_compile__V_27_27, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_29_29, &top_level__mercury_compile__V_20_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_21);
        }
#line 744 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeTuple_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "mercury_compile.m"
          {
#line 746 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 747 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 745 "mercury_compile.m"
          }
#line 744 "mercury_compile.m"
        else
#line 742 "mercury_compile.m"
          {
#line 742 "mercury_compile.m"
            MR_Tuple top_level__mercury_compile__Tuple_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_21, (MR_Integer) 0)));

#line 743 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 0)));
#line 743 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 1)));
#line 742 "mercury_compile.m"
          }
#line 735 "mercury_compile.m"
      }
#line 749 "mercury_compile.m"
    else
#line 771 "mercury_compile.m"
      {
#line 771 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDeps_57;

#line 772 "mercury_compile.m"
        {
#line 772 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 91, &top_level__mercury_compile__GenerateDeps_57);
        }
#line 784 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDeps_57 == (MR_Integer) 0))
#line 785 "mercury_compile.m"
          {
#line 785 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GenerateDepFile_60;

#line 786 "mercury_compile.m"
            {
#line 786 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 90, &top_level__mercury_compile__GenerateDepFile_60);
            }
#line 799 "mercury_compile.m"
            if ((top_level__mercury_compile__GenerateDepFile_60 == (MR_Integer) 0))
#line 801 "mercury_compile.m"
              {
#line 801 "mercury_compile.m"
                top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__FileOrModule_18, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 801 "mercury_compile.m"
                return;
              }
#line 799 "mercury_compile.m"
            else
#line 789 "mercury_compile.m"
              {
#line 790 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 793 "mercury_compile.m"
                  {
#line 793 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 794 "mercury_compile.m"
                    {
#line 794 "mercury_compile.m"
                      parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_68);
#line 794 "mercury_compile.m"
                      return;
                    }
#line 793 "mercury_compile.m"
                  }
#line 795 "mercury_compile.m"
                else
#line 796 "mercury_compile.m"
                  {
#line 796 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 797 "mercury_compile.m"
                    {
#line 797 "mercury_compile.m"
                      parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_69);
#line 797 "mercury_compile.m"
                      return;
                    }
#line 796 "mercury_compile.m"
                  }
#line 789 "mercury_compile.m"
              }
#line 785 "mercury_compile.m"
          }
#line 784 "mercury_compile.m"
        else
#line 774 "mercury_compile.m"
          {
#line 775 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 778 "mercury_compile.m"
              {
#line 778 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 779 "mercury_compile.m"
                {
#line 779 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_58);
#line 779 "mercury_compile.m"
                  return;
                }
#line 778 "mercury_compile.m"
              }
#line 780 "mercury_compile.m"
            else
#line 781 "mercury_compile.m"
              {
#line 781 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 782 "mercury_compile.m"
                {
#line 782 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_59);
#line 782 "mercury_compile.m"
                  return;
                }
#line 781 "mercury_compile.m"
              }
#line 774 "mercury_compile.m"
          }
#line 771 "mercury_compile.m"
      }
#line 731 "mercury_compile.m"
  }
#line 726 "mercury_compile.m"
}

#line 698 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 698 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 698 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 698 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9)
#line 698 "mercury_compile.m"
{
#line 703 "mercury_compile.m"
  while (MR_TRUE)
#line 703 "mercury_compile.m"
    {
#line 703 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 703 "mercury_compile.m"
      {
#line 703 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 703 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "mercury_compile.m"
          {
#line 704 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8;
#line 704 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_6;
#line 703 "mercury_compile.m"
          }
#line 703 "mercury_compile.m"
        else
#line 706 "mercury_compile.m"
          {
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_53_53;
#line 706 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_34;
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_35;
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;
#line 706 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_49_49;

#line 707 "mercury_compile.m"
            {
#line 707 "mercury_compile.m"
              top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__DetectedGradeFlags_2, top_level__mercury_compile__OptionVariables_3, top_level__mercury_compile__OptionArgs_4, top_level__mercury_compile__Arg_29, &top_level__mercury_compile__ArgModules_34, &top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 712 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "mercury_compile.m"
              {
#line 713 "mercury_compile.m"
              }
#line 712 "mercury_compile.m"
            else
#line 711 "mercury_compile.m"
              {
#line 711 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 9040 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 715 "mercury_compile.m"
            {
#line 715 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgModules_34);
            }
#line 715 "mercury_compile.m"
            {
#line 715 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_46_46 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Modules_0_6, top_level__mercury_compile__V_47_47);
            }
#line 716 "mercury_compile.m"
            {
#line 716 "mercury_compile.m"
              top_level__mercury_compile__V_49_49 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 716 "mercury_compile.m"
            {
#line 716 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8, top_level__mercury_compile__V_49_49);
            }
#line 717 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 717 "mercury_compile.m"
            {
#line 717 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__5__tmp_copy_5 = top_level__mercury_compile__Args_30;
#line 717 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 717 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;

#line 717 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8;
#line 717 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6;
#line 717 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__5_5 = top_level__mercury_compile__HeadVar__5__tmp_copy_5;
#line 717 "mercury_compile.m"
            }
#line 717 "mercury_compile.m"
            continue;
#line 706 "mercury_compile.m"
          }
#line 703 "mercury_compile.m"
      }
#line 703 "mercury_compile.m"
      break;
#line 703 "mercury_compile.m"
    }
#line 698 "mercury_compile.m"
}

#line 665 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 665 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 665 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 665 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28)
#line 665 "mercury_compile.m"
{
#line 672 "mercury_compile.m"
  while (MR_TRUE)
#line 672 "mercury_compile.m"
    {
#line 672 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 672 "mercury_compile.m"
      {
#line 672 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 672 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_18;

#line 673 "mercury_compile.m"
        {
#line 673 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25);
        }
#line 675 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 673 "mercury_compile.m"
          {
#line 673 "mercury_compile.m"
          }
#line 675 "mercury_compile.m"
        else
#line 676 "mercury_compile.m"
          {
#line 676 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 678 "mercury_compile.m"
        {
#line 678 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_18);
        }
#line 688 "mercury_compile.m"
        if ((top_level__mercury_compile__FileResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "mercury_compile.m"
          {
#line 689 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 689 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 689 "mercury_compile.m"
          }
#line 688 "mercury_compile.m"
        else
#line 688 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileResult_18)) == (MR_mktag((MR_Integer) 2))))
#line 691 "mercury_compile.m"
            {
#line 691 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 691 "mercury_compile.m"
              MR_String top_level__mercury_compile__Msg_24;

#line 692 "mercury_compile.m"
              {
#line 692 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_23, &top_level__mercury_compile__Msg_24);
              }
#line 693 "mercury_compile.m"
              {
#line 693 "mercury_compile.m"
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
#line 694 "mercury_compile.m"
              {
#line 694 "mercury_compile.m"
                mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_24);
              }
#line 695 "mercury_compile.m"
              {
#line 695 "mercury_compile.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 695 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 695 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 691 "mercury_compile.m"
            }
#line 688 "mercury_compile.m"
          else
#line 680 "mercury_compile.m"
            {
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 680 "mercury_compile.m"
              MR_String top_level__mercury_compile__Line_19 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 680 "mercury_compile.m"
              MR_String top_level__mercury_compile__Arg_20;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgModules_21;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgExtraObjFiles_22;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_40_40;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;
#line 680 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;

#line 681 "mercury_compile.m"
              {
#line 681 "mercury_compile.m"
                top_level__mercury_compile__Arg_20 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_19);
              }
#line 682 "mercury_compile.m"
              {
#line 682 "mercury_compile.m"
                top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__Arg_20, &top_level__mercury_compile__ArgModules_21, &top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 9231 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 684 "mercury_compile.m"
              {
#line 684 "mercury_compile.m"
                top_level__mercury_compile__V_40_40 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgModules_21);
              }
#line 684 "mercury_compile.m"
              {
#line 684 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_39_39 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25, top_level__mercury_compile__V_40_40);
              }
#line 685 "mercury_compile.m"
              {
#line 685 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 685 "mercury_compile.m"
              {
#line 685 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27, top_level__mercury_compile__V_42_42);
              }
#line 686 "mercury_compile.m"
              /* direct tailcall eliminated */
#line 686 "mercury_compile.m"
              {
#line 686 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 686 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;

#line 686 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27;
#line 686 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_0_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25;
#line 686 "mercury_compile.m"
              }
#line 686 "mercury_compile.m"
              continue;
#line 680 "mercury_compile.m"
            }
#line 672 "mercury_compile.m"
      }
#line 672 "mercury_compile.m"
      break;
#line 672 "mercury_compile.m"
    }
#line 665 "mercury_compile.m"
}

#line 558 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 558 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 558 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 558 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 558 "mercury_compile.m"
{
#line 648 "mercury_compile.m"
  {
#line 648 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 648 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_32_43;
#line 648 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_31;
#line 648 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModulesToLinkCord_32;
#line 648 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFilesCord_33;

#line 649 "mercury_compile.m"
    {
#line 649 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 654, &top_level__mercury_compile__FileNamesFromStdin_31);
    }
#line 656 "mercury_compile.m"
    if ((top_level__mercury_compile__FileNamesFromStdin_31 == (MR_Integer) 0))
#line 657 "mercury_compile.m"
      {
#line 657 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_31_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 657 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_35_35;
#line 657 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 659 "mercury_compile.m"
        {
#line 659 "mercury_compile.m"
          top_level__mercury_compile__V_35_35 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 660 "mercury_compile.m"
        {
#line 660 "mercury_compile.m"
          top_level__mercury_compile__V_36_36 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 658 "mercury_compile.m"
        {
#line 658 "mercury_compile.m"
          top_level__mercury_compile__process_arg_list_11_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14, top_level__mercury_compile__V_35_35, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 657 "mercury_compile.m"
      }
#line 656 "mercury_compile.m"
    else
#line 652 "mercury_compile.m"
      {
#line 652 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_30_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 652 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 652 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;

#line 654 "mercury_compile.m"
        {
#line 654 "mercury_compile.m"
          top_level__mercury_compile__V_38_38 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 655 "mercury_compile.m"
        {
#line 655 "mercury_compile.m"
          top_level__mercury_compile__V_39_39 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 653 "mercury_compile.m"
        {
#line 653 "mercury_compile.m"
          top_level__mercury_compile__process_stdin_arg_list_10_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_38_38, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_39_39, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 652 "mercury_compile.m"
      }
#line 9374 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_32_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 662 "mercury_compile.m"
    {
#line 662 "mercury_compile.m"
      *top_level__mercury_compile__ModulesToLink_15 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ModulesToLinkCord_32);
    }
#line 663 "mercury_compile.m"
    {
#line 663 "mercury_compile.m"
      *top_level__mercury_compile__ExtraObjFiles_16 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ExtraObjFilesCord_33);
    }
#line 648 "mercury_compile.m"
  }
#line 558 "mercury_compile.m"
}

#line 542 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 542 "mercury_compile.m"
{
#line 547 "mercury_compile.m"
  {
#line 547 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 547 "mercury_compile.m"
    if ((top_level__mercury_compile__Report_6 == (MR_Integer) 0))
#line 547 "mercury_compile.m"
      {
#line 547 "mercury_compile.m"
      }
#line 547 "mercury_compile.m"
    else
#line 549 "mercury_compile.m"
      {
#line 549 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_19_19;
#line 549 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_21_21;
#line 549 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_29_29;
#line 549 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_31_31;

#line 9426 "top_level.mercury_compile.c"
        {
#line 9428 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
        }
#line 551 "mercury_compile.m"
        {
#line 551 "mercury_compile.m"
          top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
        }
#line 551 "mercury_compile.m"
        {
#line 551 "mercury_compile.m"
          top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
        }
#line 9441 "top_level.mercury_compile.c"
        {
#line 9443 "top_level.mercury_compile.c"
          top_level__mercury_compile__V_29_29 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__V_19_19, (MR_String) "\n");
        }
#line 9446 "top_level.mercury_compile.c"
        {
#line 9448 "top_level.mercury_compile.c"
          top_level__mercury_compile__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "% ", top_level__mercury_compile__V_29_29);
        }
#line 9451 "top_level.mercury_compile.c"
        {
#line 9453 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
        }
#line 9456 "top_level.mercury_compile.c"
        {
#line 9458 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
#line 9460 "top_level.mercury_compile.c"
          return;
        }
#line 549 "mercury_compile.m"
      }
#line 547 "mercury_compile.m"
  }
#line 542 "mercury_compile.m"
}

#line 505 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 505 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 505 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 505 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 505 "mercury_compile.m"
{
#line 505 "mercury_compile.m"
  {
#line 505 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 505 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_4;

#line 505 "mercury_compile.m"
    {
#line 505 "mercury_compile.m"
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_HeadVar__4_4);
    }
#line 505 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_4));
#line 505 "mercury_compile.m"
  }
#line 505 "mercury_compile.m"
}

#line 422 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_1(
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 422 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 422 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 422 "mercury_compile.m"
{
#line 422 "mercury_compile.m"
  {
#line 422 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 422 "mercury_compile.m"
    {
#line 422 "mercury_compile.m"
      mercury__io__write_string_3_p_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 422 "mercury_compile.m"
      return;
    }
#line 422 "mercury_compile.m"
  }
#line 422 "mercury_compile.m"
}

#line 348 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 348 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14)
#line 348 "mercury_compile.m"
{
#line 353 "mercury_compile.m"
  {
#line 353 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_16;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_17;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateMapping_18;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGrade_19;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLinkCommand_20;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputShLibLinkCommand_21;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_22;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibGrades_23;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCC_24;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCCType_25;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCFlags_26;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCSCType_27;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibraryLinkFlags_28;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGradeDefines_29;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCInclDirFlags_30;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Make_31;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateStandaloneInt_32;
#line 353 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReportCmdLineArgs_33;

#line 354 "mercury_compile.m"
    {
#line 354 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 658, &top_level__mercury_compile__Version_16);
    }
#line 355 "mercury_compile.m"
    {
#line 355 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 657, &top_level__mercury_compile__Help_17);
    }
#line 356 "mercury_compile.m"
    {
#line 356 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 89, &top_level__mercury_compile__GenerateMapping_18);
    }
#line 358 "mercury_compile.m"
    {
#line 358 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 100, &top_level__mercury_compile__OutputGrade_19);
    }
#line 360 "mercury_compile.m"
    {
#line 360 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 101, &top_level__mercury_compile__OutputLinkCommand_20);
    }
#line 362 "mercury_compile.m"
    {
#line 362 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 102, &top_level__mercury_compile__OutputShLibLinkCommand_21);
    }
#line 364 "mercury_compile.m"
    {
#line 364 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 654, &top_level__mercury_compile__FileNamesFromStdin_22);
    }
#line 366 "mercury_compile.m"
    {
#line 366 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 103, &top_level__mercury_compile__OutputLibGrades_23);
    }
#line 368 "mercury_compile.m"
    {
#line 368 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 104, &top_level__mercury_compile__OutputCC_24);
    }
#line 369 "mercury_compile.m"
    {
#line 369 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 105, &top_level__mercury_compile__OutputCCType_25);
    }
#line 370 "mercury_compile.m"
    {
#line 370 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 107, &top_level__mercury_compile__OutputCFlags_26);
    }
#line 371 "mercury_compile.m"
    {
#line 371 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 106, &top_level__mercury_compile__OutputCSCType_27);
    }
#line 373 "mercury_compile.m"
    {
#line 373 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 108, &top_level__mercury_compile__OutputLibraryLinkFlags_28);
    }
#line 375 "mercury_compile.m"
    {
#line 375 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 109, &top_level__mercury_compile__OutputGradeDefines_29);
    }
#line 377 "mercury_compile.m"
    {
#line 377 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 110, &top_level__mercury_compile__OutputCInclDirFlags_30);
    }
#line 379 "mercury_compile.m"
    {
#line 379 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 617, &top_level__mercury_compile__Make_31);
    }
#line 380 "mercury_compile.m"
    {
#line 380 "mercury_compile.m"
      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 93, &top_level__mercury_compile__GenerateStandaloneInt_32);
    }
#line 382 "mercury_compile.m"
    {
#line 382 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 52, &top_level__mercury_compile__ReportCmdLineArgs_33);
    }
#line 384 "mercury_compile.m"
    {
#line 384 "mercury_compile.m"
      top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgs_33, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
    }
#line 385 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_16 == (MR_Integer) 1);
#line 390 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 386 "mercury_compile.m"
      {
#line 386 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_34;
#line 386 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_35;
#line 389 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 386 "mercury_compile.m"
        {
#line 386 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_34);
        }
#line 387 "mercury_compile.m"
        {
#line 387 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_34, &top_level__mercury_compile__OldOutputStream_35);
        }
#line 388 "mercury_compile.m"
        {
#line 388 "mercury_compile.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 389 "mercury_compile.m"
        {
#line 389 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_35, &top_level__mercury_compile__V_36_36);
        }
#line 386 "mercury_compile.m"
      }
#line 390 "mercury_compile.m"
    else
#line 395 "mercury_compile.m"
      {
#line 390 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Help_17 == (MR_Integer) 1);
#line 395 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 391 "mercury_compile.m"
          {
#line 391 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stdout_170;
#line 391 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_171;
#line 394 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_37_37;

#line 391 "mercury_compile.m"
            {
#line 391 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_170);
            }
#line 392 "mercury_compile.m"
            {
#line 392 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_170, &top_level__mercury_compile__OldOutputStream_171);
            }
#line 393 "mercury_compile.m"
            {
#line 393 "mercury_compile.m"
              libs__handle_options__long_usage_2_p_0();
            }
#line 394 "mercury_compile.m"
            {
#line 394 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_171, &top_level__mercury_compile__V_37_37);
            }
#line 391 "mercury_compile.m"
          }
#line 395 "mercury_compile.m"
        else
#line 403 "mercury_compile.m"
          {
#line 395 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGrade_19 == (MR_Integer) 1);
#line 403 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 399 "mercury_compile.m"
              {
#line 399 "mercury_compile.m"
                MR_String top_level__mercury_compile__Grade_38;
#line 399 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Stdout_172;

#line 399 "mercury_compile.m"
                {
#line 399 "mercury_compile.m"
                  libs__handle_options__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Grade_38);
                }
#line 400 "mercury_compile.m"
                {
#line 400 "mercury_compile.m"
                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_172);
                }
#line 401 "mercury_compile.m"
                {
#line 401 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_172, top_level__mercury_compile__Grade_38);
                }
#line 402 "mercury_compile.m"
                {
#line 402 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_172, (MR_String) "\n");
#line 402 "mercury_compile.m"
                  return;
                }
#line 399 "mercury_compile.m"
              }
#line 403 "mercury_compile.m"
            else
#line 409 "mercury_compile.m"
              {
#line 403 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLinkCommand_20 == (MR_Integer) 1);
#line 409 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 405 "mercury_compile.m"
                  {
#line 405 "mercury_compile.m"
                    MR_String top_level__mercury_compile__LinkCommand_39;
#line 405 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Stdout_173;

#line 404 "mercury_compile.m"
                    {
#line 404 "mercury_compile.m"
                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 571, &top_level__mercury_compile__LinkCommand_39);
                    }
#line 406 "mercury_compile.m"
                    {
#line 406 "mercury_compile.m"
                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_173);
                    }
#line 407 "mercury_compile.m"
                    {
#line 407 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_173, top_level__mercury_compile__LinkCommand_39);
                    }
#line 408 "mercury_compile.m"
                    {
#line 408 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_173, (MR_String) "\n");
#line 408 "mercury_compile.m"
                      return;
                    }
#line 405 "mercury_compile.m"
                  }
#line 409 "mercury_compile.m"
                else
#line 415 "mercury_compile.m"
                  {
#line 409 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputShLibLinkCommand_21 == (MR_Integer) 1);
#line 415 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 411 "mercury_compile.m"
                      {
#line 411 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__Stdout_174;
#line 411 "mercury_compile.m"
                        MR_String top_level__mercury_compile__LinkCommand_175;

#line 410 "mercury_compile.m"
                        {
#line 410 "mercury_compile.m"
                          libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 572, &top_level__mercury_compile__LinkCommand_175);
                        }
#line 412 "mercury_compile.m"
                        {
#line 412 "mercury_compile.m"
                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_174);
                        }
#line 413 "mercury_compile.m"
                        {
#line 413 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_174, top_level__mercury_compile__LinkCommand_175);
                        }
#line 414 "mercury_compile.m"
                        {
#line 414 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_174, (MR_String) "\n");
#line 414 "mercury_compile.m"
                          return;
                        }
#line 411 "mercury_compile.m"
                      }
#line 415 "mercury_compile.m"
                    else
#line 425 "mercury_compile.m"
                      {
#line 415 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibGrades_23 == (MR_Integer) 1);
#line 425 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 416 "mercury_compile.m"
                          {
#line 416 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__LibGrades_40;

#line 416 "mercury_compile.m"
                            {
#line 416 "mercury_compile.m"
                              libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 632, &top_level__mercury_compile__LibGrades_40);
                            }
#line 419 "mercury_compile.m"
                            if ((top_level__mercury_compile__LibGrades_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "mercury_compile.m"
                              {
#line 418 "mercury_compile.m"
                              }
#line 419 "mercury_compile.m"
                            else
#line 420 "mercury_compile.m"
                              {
#line 420 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__Stdout_176;

#line 421 "mercury_compile.m"
                                {
#line 421 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_176);
                                }
#line 422 "mercury_compile.m"
                                {
#line 422 "mercury_compile.m"
                                  mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_176, top_level__mercury_compile__LibGrades_40, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_3[2]);
                                }
#line 423 "mercury_compile.m"
                                {
#line 423 "mercury_compile.m"
                                  mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_176);
#line 423 "mercury_compile.m"
                                  return;
                                }
#line 420 "mercury_compile.m"
                              }
#line 416 "mercury_compile.m"
                          }
#line 425 "mercury_compile.m"
                        else
#line 429 "mercury_compile.m"
                          {
#line 425 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCC_24 == (MR_Integer) 1);
#line 429 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 426 "mercury_compile.m"
                              {
#line 426 "mercury_compile.m"
                                MR_String top_level__mercury_compile__CC_43;
#line 426 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__StdOut_44;
#line 426 "mercury_compile.m"
                                MR_String top_level__mercury_compile__V_111_111;

#line 426 "mercury_compile.m"
                                {
#line 426 "mercury_compile.m"
                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 482, &top_level__mercury_compile__CC_43);
                                }
#line 427 "mercury_compile.m"
                                {
#line 427 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_44);
                                }
#line 428 "mercury_compile.m"
                                {
#line 428 "mercury_compile.m"
                                  top_level__mercury_compile__V_111_111 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_43, (MR_String) "\n");
                                }
#line 428 "mercury_compile.m"
                                {
#line 428 "mercury_compile.m"
                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_44, top_level__mercury_compile__V_111_111);
#line 428 "mercury_compile.m"
                                  return;
                                }
#line 426 "mercury_compile.m"
                              }
#line 429 "mercury_compile.m"
                            else
#line 433 "mercury_compile.m"
                              {
#line 429 "mercury_compile.m"
                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCCType_25 == (MR_Integer) 1);
#line 433 "mercury_compile.m"
                                if (top_level__mercury_compile__succeeded)
#line 430 "mercury_compile.m"
                                  {
#line 430 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__CC_Type_45;
#line 430 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__V_116_116;
#line 430 "mercury_compile.m"
                                    MR_Word top_level__mercury_compile__StdOut_179;

#line 430 "mercury_compile.m"
                                    {
#line 430 "mercury_compile.m"
                                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 507, &top_level__mercury_compile__CC_Type_45);
                                    }
#line 431 "mercury_compile.m"
                                    {
#line 431 "mercury_compile.m"
                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_179);
                                    }
#line 432 "mercury_compile.m"
                                    {
#line 432 "mercury_compile.m"
                                      top_level__mercury_compile__V_116_116 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_45, (MR_String) "\n");
                                    }
#line 432 "mercury_compile.m"
                                    {
#line 432 "mercury_compile.m"
                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_179, top_level__mercury_compile__V_116_116);
#line 432 "mercury_compile.m"
                                      return;
                                    }
#line 430 "mercury_compile.m"
                                  }
#line 433 "mercury_compile.m"
                                else
#line 437 "mercury_compile.m"
                                  {
#line 433 "mercury_compile.m"
                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCFlags_26 == (MR_Integer) 1);
#line 437 "mercury_compile.m"
                                    if (top_level__mercury_compile__succeeded)
#line 434 "mercury_compile.m"
                                      {
#line 434 "mercury_compile.m"
                                        MR_Word top_level__mercury_compile__StdOut_180;

#line 434 "mercury_compile.m"
                                        {
#line 434 "mercury_compile.m"
                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_180);
                                        }
#line 435 "mercury_compile.m"
                                        {
#line 435 "mercury_compile.m"
                                          backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_180);
                                        }
#line 436 "mercury_compile.m"
                                        {
#line 436 "mercury_compile.m"
                                          mercury__io__nl_3_p_0(top_level__mercury_compile__StdOut_180);
#line 436 "mercury_compile.m"
                                          return;
                                        }
#line 434 "mercury_compile.m"
                                      }
#line 437 "mercury_compile.m"
                                    else
#line 441 "mercury_compile.m"
                                      {
#line 437 "mercury_compile.m"
                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCSCType_27 == (MR_Integer) 1);
#line 441 "mercury_compile.m"
                                        if (top_level__mercury_compile__succeeded)
#line 438 "mercury_compile.m"
                                          {
#line 438 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__CSC_Type_46;
#line 438 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__V_124_124;
#line 438 "mercury_compile.m"
                                            MR_Word top_level__mercury_compile__StdOut_181;

#line 438 "mercury_compile.m"
                                            {
#line 438 "mercury_compile.m"
                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 508, &top_level__mercury_compile__CSC_Type_46);
                                            }
#line 439 "mercury_compile.m"
                                            {
#line 439 "mercury_compile.m"
                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_181);
                                            }
#line 440 "mercury_compile.m"
                                            {
#line 440 "mercury_compile.m"
                                              top_level__mercury_compile__V_124_124 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_46, (MR_String) "\n");
                                            }
#line 440 "mercury_compile.m"
                                            {
#line 440 "mercury_compile.m"
                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_181, top_level__mercury_compile__V_124_124);
#line 440 "mercury_compile.m"
                                              return;
                                            }
#line 438 "mercury_compile.m"
                                          }
#line 441 "mercury_compile.m"
                                        else
#line 444 "mercury_compile.m"
                                          {
#line 441 "mercury_compile.m"
                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibraryLinkFlags_28 == (MR_Integer) 1);
#line 444 "mercury_compile.m"
                                            if (top_level__mercury_compile__succeeded)
#line 442 "mercury_compile.m"
                                              {
#line 442 "mercury_compile.m"
                                                MR_Word top_level__mercury_compile__StdOut_182;

#line 442 "mercury_compile.m"
                                                {
#line 442 "mercury_compile.m"
                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_182);
                                                }
#line 443 "mercury_compile.m"
                                                {
#line 443 "mercury_compile.m"
                                                  backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_182);
#line 443 "mercury_compile.m"
                                                  return;
                                                }
#line 442 "mercury_compile.m"
                                              }
#line 444 "mercury_compile.m"
                                            else
#line 447 "mercury_compile.m"
                                              {
#line 444 "mercury_compile.m"
                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGradeDefines_29 == (MR_Integer) 1);
#line 447 "mercury_compile.m"
                                                if (top_level__mercury_compile__succeeded)
#line 445 "mercury_compile.m"
                                                  {
#line 445 "mercury_compile.m"
                                                    MR_Word top_level__mercury_compile__StdOut_183;

#line 445 "mercury_compile.m"
                                                    {
#line 445 "mercury_compile.m"
                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_183);
                                                    }
#line 446 "mercury_compile.m"
                                                    {
#line 446 "mercury_compile.m"
                                                      backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_183);
#line 446 "mercury_compile.m"
                                                      return;
                                                    }
#line 445 "mercury_compile.m"
                                                  }
#line 447 "mercury_compile.m"
                                                else
#line 450 "mercury_compile.m"
                                                  {
#line 447 "mercury_compile.m"
                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCInclDirFlags_30 == (MR_Integer) 1);
#line 450 "mercury_compile.m"
                                                    if (top_level__mercury_compile__succeeded)
#line 448 "mercury_compile.m"
                                                      {
#line 448 "mercury_compile.m"
                                                        MR_Word top_level__mercury_compile__StdOut_184;

#line 448 "mercury_compile.m"
                                                        {
#line 448 "mercury_compile.m"
                                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_184);
                                                        }
#line 449 "mercury_compile.m"
                                                        {
#line 449 "mercury_compile.m"
                                                          backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_184);
#line 449 "mercury_compile.m"
                                                          return;
                                                        }
#line 448 "mercury_compile.m"
                                                      }
#line 450 "mercury_compile.m"
                                                    else
#line 452 "mercury_compile.m"
                                                      {
#line 450 "mercury_compile.m"
                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__GenerateMapping_18 == (MR_Integer) 1);
#line 452 "mercury_compile.m"
                                                        if (top_level__mercury_compile__succeeded)
#line 451 "mercury_compile.m"
                                                          {
#line 451 "mercury_compile.m"
                                                            parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Args_12);
#line 451 "mercury_compile.m"
                                                            return;
                                                          }
#line 452 "mercury_compile.m"
                                                        else
#line 473 "mercury_compile.m"
                                                          {
#line 473 "mercury_compile.m"
                                                            MR_String top_level__mercury_compile__StandaloneIntBasename_47;

#line 452 "mercury_compile.m"
                                                            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__GenerateStandaloneInt_32)) == (MR_mktag((MR_Integer) 1)));
#line 452 "mercury_compile.m"
                                                            if (top_level__mercury_compile__succeeded)
#line 452 "mercury_compile.m"
                                                              {
#line 452 "mercury_compile.m"
                                                                top_level__mercury_compile__StandaloneIntBasename_47 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__GenerateStandaloneInt_32, (MR_Integer) 0)));
#line 453 "mercury_compile.m"
                                                                {
#line 453 "mercury_compile.m"
                                                                  MR_Word top_level__mercury_compile__Target_48;

#line 453 "mercury_compile.m"
                                                                  {
#line 453 "mercury_compile.m"
                                                                    libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_48);
                                                                  }
#line 469 "mercury_compile.m"
                                                                  if ((top_level__mercury_compile__Target_48 == (MR_Integer) 0))
#line 471 "mercury_compile.m"
                                                                    {
#line 471 "mercury_compile.m"
                                                                      backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StandaloneIntBasename_47);
#line 471 "mercury_compile.m"
                                                                      return;
                                                                    }
#line 469 "mercury_compile.m"
                                                                  else
#line 459 "mercury_compile.m"
                                                                    {
#line 459 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__NYIMsg_49;
#line 459 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_137_137;
#line 459 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_140_140;
#line 459 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_143_143;
#line 459 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_144_144;
#line 459 "mercury_compile.m"
                                                                      MR_String top_level__mercury_compile__V_145_145;

#line 464 "mercury_compile.m"
                                                                      {
#line 464 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_145_145 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_48);
                                                                      }
#line 464 "mercury_compile.m"
                                                                      {
#line 464 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 464 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_144_144, 1) = ((MR_Box) (top_level__mercury_compile__V_145_145));
#line 464 "mercury_compile.m"
                                                                      }
#line 464 "mercury_compile.m"
                                                                      {
#line 464 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_143_143, 0) = ((MR_Box) (top_level__mercury_compile__V_144_144));
#line 464 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[22])));
#line 464 "mercury_compile.m"
                                                                      }
#line 463 "mercury_compile.m"
                                                                      {
#line 463 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[20])));
#line 463 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_140_140, 1) = ((MR_Box) (top_level__mercury_compile__V_143_143));
#line 463 "mercury_compile.m"
                                                                      }
#line 462 "mercury_compile.m"
                                                                      {
#line 462 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[2])));
#line 462 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_137_137, 1) = ((MR_Box) (top_level__mercury_compile__V_140_140));
#line 462 "mercury_compile.m"
                                                                      }
#line 461 "mercury_compile.m"
                                                                      {
#line 461 "mercury_compile.m"
                                                                        top_level__mercury_compile__NYIMsg_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[19])));
#line 461 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_49, 1) = ((MR_Box) (top_level__mercury_compile__V_137_137));
#line 461 "mercury_compile.m"
                                                                      }
#line 467 "mercury_compile.m"
                                                                      {
#line 467 "mercury_compile.m"
                                                                        parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__NYIMsg_49);
                                                                      }
#line 468 "mercury_compile.m"
                                                                      {
#line 468 "mercury_compile.m"
                                                                        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 468 "mercury_compile.m"
                                                                        return;
                                                                      }
#line 459 "mercury_compile.m"
                                                                    }
#line 453 "mercury_compile.m"
                                                                }
#line 452 "mercury_compile.m"
                                                              }
#line 452 "mercury_compile.m"
                                                            else
#line 476 "mercury_compile.m"
                                                              {
#line 473 "mercury_compile.m"
                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__Make_31 == (MR_Integer) 1);
#line 476 "mercury_compile.m"
                                                                if (top_level__mercury_compile__succeeded)
#line 474 "mercury_compile.m"
                                                                  {
#line 474 "mercury_compile.m"
                                                                    make__make_process_args_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
#line 474 "mercury_compile.m"
                                                                    return;
                                                                  }
#line 476 "mercury_compile.m"
                                                                else
#line 478 "mercury_compile.m"
                                                                  {
#line 476 "mercury_compile.m"
                                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 476 "mercury_compile.m"
                                                                      top_level__mercury_compile__succeeded = (top_level__mercury_compile__FileNamesFromStdin_22 == (MR_Integer) 0);
#line 478 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 477 "mercury_compile.m"
                                                                      {
#line 477 "mercury_compile.m"
                                                                        libs__handle_options__usage_2_p_0();
#line 477 "mercury_compile.m"
                                                                        return;
                                                                      }
#line 478 "mercury_compile.m"
                                                                    else
#line 480 "mercury_compile.m"
                                                                      {
#line 480 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__ModulesToLink_50;
#line 480 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__ExtraObjFiles_51;
#line 480 "mercury_compile.m"
                                                                        MR_Integer top_level__mercury_compile__ExitStatus_52;
#line 480 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__Statistics_59;

#line 479 "mercury_compile.m"
                                                                        {
#line 479 "mercury_compile.m"
                                                                          top_level__mercury_compile__process_all_args_9_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12, &top_level__mercury_compile__ModulesToLink_50, &top_level__mercury_compile__ExtraObjFiles_51);
                                                                        }
#line 481 "mercury_compile.m"
                                                                        {
#line 481 "mercury_compile.m"
                                                                          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_52);
                                                                        }
#line 482 "mercury_compile.m"
                                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_52 == (MR_Integer) 0);
#line 512 "mercury_compile.m"
                                                                        if (top_level__mercury_compile__succeeded)
#line 509 "mercury_compile.m"
                                                                          {
#line 509 "mercury_compile.m"
                                                                            MR_String top_level__mercury_compile__FirstModule_53;
#line 485 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__V_54_54;

#line 484 "mercury_compile.m"
                                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Link_13 == (MR_Integer) 1);
#line 484 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 484 "mercury_compile.m"
                                                                              {
#line 485 "mercury_compile.m"
                                                                                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToLink_50)) == (MR_mktag((MR_Integer) 1)));
#line 485 "mercury_compile.m"
                                                                                if (top_level__mercury_compile__succeeded)
#line 485 "mercury_compile.m"
                                                                                  {
#line 485 "mercury_compile.m"
                                                                                    top_level__mercury_compile__FirstModule_53 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_50, (MR_Integer) 0)));
#line 485 "mercury_compile.m"
                                                                                    top_level__mercury_compile__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_50, (MR_Integer) 1)));
#line 485 "mercury_compile.m"
                                                                                  }
#line 484 "mercury_compile.m"
                                                                              }
#line 509 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 488 "mercury_compile.m"
                                                                              {
#line 488 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__MainModuleName_55;
#line 488 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__Succeeded_56;
#line 488 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__Target_185;

#line 487 "mercury_compile.m"
                                                                                {
#line 487 "mercury_compile.m"
                                                                                  parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_53, &top_level__mercury_compile__MainModuleName_55);
                                                                                }
#line 489 "mercury_compile.m"
                                                                                {
#line 489 "mercury_compile.m"
                                                                                  libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_185);
                                                                                }
#line 497 "mercury_compile.m"
                                                                                if ((top_level__mercury_compile__Target_185 == (MR_Integer) 3))
#line 495 "mercury_compile.m"
                                                                                  {
#line 495 "mercury_compile.m"
                                                                                    parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_55, &top_level__mercury_compile__Succeeded_56);
                                                                                  }
#line 497 "mercury_compile.m"
                                                                                else
#line 502 "mercury_compile.m"
                                                                                  {
#line 502 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_157_157;

#line 505 "mercury_compile.m"
                                                                                    {
#line 505 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_157_157, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 505 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_157_157, 1) = ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_2));
#line 505 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_157_157, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 505 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_157_157, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_50));
#line 505 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_157_157, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_51));
#line 505 "mercury_compile.m"
                                                                                    }
#line 503 "mercury_compile.m"
                                                                                    {
#line 503 "mercury_compile.m"
                                                                                      top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile__ModulesToLink_50, top_level__mercury_compile__ExtraObjFiles_51, top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_55, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__V_157_157, &top_level__mercury_compile__Succeeded_56);
                                                                                    }
#line 502 "mercury_compile.m"
                                                                                  }
#line 508 "mercury_compile.m"
                                                                                {
#line 508 "mercury_compile.m"
                                                                                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_56);
                                                                                }
#line 488 "mercury_compile.m"
                                                                              }
#line 509 "mercury_compile.m"
                                                                            else
#line 508 "mercury_compile.m"
                                                                              {
#line 508 "mercury_compile.m"
                                                                              }
#line 509 "mercury_compile.m"
                                                                          }
#line 512 "mercury_compile.m"
                                                                        else
#line 518 "mercury_compile.m"
                                                                          {
#line 518 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__VerboseErrors_57;
#line 518 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__ExtraErrorInfo_58;

#line 517 "mercury_compile.m"
                                                                            {
#line 517 "mercury_compile.m"
                                                                              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 46, &top_level__mercury_compile__VerboseErrors_57);
                                                                            }
#line 519 "mercury_compile.m"
                                                                            {
#line 519 "mercury_compile.m"
                                                                              libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_58);
                                                                            }
#line 529 "mercury_compile.m"
                                                                            if ((top_level__mercury_compile__VerboseErrors_57 == (MR_Integer) 0))
#line 526 "mercury_compile.m"
                                                                              if ((top_level__mercury_compile__ExtraErrorInfo_58 == (MR_Integer) 0))
#line 527 "mercury_compile.m"
                                                                                {
#line 527 "mercury_compile.m"
                                                                                }
#line 526 "mercury_compile.m"
                                                                              else
#line 523 "mercury_compile.m"
                                                                                {
#line 524 "mercury_compile.m"
                                                                                  {
#line 524 "mercury_compile.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                                                                  }
#line 523 "mercury_compile.m"
                                                                                }
#line 529 "mercury_compile.m"
                                                                            else
#line 530 "mercury_compile.m"
                                                                              {
#line 530 "mercury_compile.m"
                                                                              }
#line 518 "mercury_compile.m"
                                                                          }
#line 533 "mercury_compile.m"
                                                                        {
#line 533 "mercury_compile.m"
                                                                          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 54, &top_level__mercury_compile__Statistics_59);
                                                                        }
#line 537 "mercury_compile.m"
                                                                        if ((top_level__mercury_compile__Statistics_59 == (MR_Integer) 0))
#line 538 "mercury_compile.m"
                                                                          {
#line 538 "mercury_compile.m"
                                                                          }
#line 537 "mercury_compile.m"
                                                                        else
#line 535 "mercury_compile.m"
                                                                          {
#line 536 "mercury_compile.m"
                                                                            {
#line 536 "mercury_compile.m"
                                                                              mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
#line 536 "mercury_compile.m"
                                                                              return;
                                                                            }
#line 535 "mercury_compile.m"
                                                                          }
#line 480 "mercury_compile.m"
                                                                      }
#line 478 "mercury_compile.m"
                                                                  }
#line 476 "mercury_compile.m"
                                                              }
#line 473 "mercury_compile.m"
                                                          }
#line 452 "mercury_compile.m"
                                                      }
#line 450 "mercury_compile.m"
                                                  }
#line 447 "mercury_compile.m"
                                              }
#line 444 "mercury_compile.m"
                                          }
#line 441 "mercury_compile.m"
                                      }
#line 437 "mercury_compile.m"
                                  }
#line 433 "mercury_compile.m"
                              }
#line 429 "mercury_compile.m"
                          }
#line 425 "mercury_compile.m"
                      }
#line 415 "mercury_compile.m"
                  }
#line 409 "mercury_compile.m"
              }
#line 403 "mercury_compile.m"
          }
#line 395 "mercury_compile.m"
      }
#line 353 "mercury_compile.m"
  }
#line 348 "mercury_compile.m"
}

#line 200 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 200 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4)
#line 200 "mercury_compile.m"
{
#line 10582 "top_level.mercury_compile.c"
  {
#line 10584 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 10586 "top_level.mercury_compile.c"
    MR_String top_level__mercury_compile__ArgFile_6;
#line 10588 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__ExtraArgs_7;
#line 205 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_47_47;
#line 205 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_48_48;

#line 205 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 205 "mercury_compile.m"
      {
#line 205 "mercury_compile.m"
        top_level__mercury_compile__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 0)));
#line 205 "mercury_compile.m"
        top_level__mercury_compile__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 1)));
#line 205 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_47_47, (MR_String) "--arg-file") == 0);
#line 205 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 205 "mercury_compile.m"
          {
#line 205 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 205 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 205 "mercury_compile.m"
              {
#line 205 "mercury_compile.m"
                top_level__mercury_compile__ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 0)));
#line 205 "mercury_compile.m"
                top_level__mercury_compile__ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 1)));
#line 205 "mercury_compile.m"
              }
#line 205 "mercury_compile.m"
          }
#line 205 "mercury_compile.m"
      }
#line 10625 "top_level.mercury_compile.c"
    if (top_level__mercury_compile__succeeded)
#line 10627 "top_level.mercury_compile.c"
      {
#line 10629 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__TypeCtorInfo_79_79;
#line 10631 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DummyGlobals_11;
#line 10633 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeArgs1_12;
#line 10635 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_14;
#line 10637 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_15;
#line 10639 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DetectedGradeFlags_16;
#line 10641 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Variables_17;
#line 10643 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__AllFlags_37;
#line 10645 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Errors_41;
#line 10647 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ActualGlobals_42;
#line 10649 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_73_73;
#line 324 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 324 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;
#line 324 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_40_40;

#line 216 "mercury_compile.m"
        if ((top_level__mercury_compile__ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "mercury_compile.m"
          {
#line 215 "mercury_compile.m"
          }
#line 216 "mercury_compile.m"
        else
#line 217 "mercury_compile.m"
          {
#line 217 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_51_51;
#line 217 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_53_53;

#line 219 "mercury_compile.m"
            {
#line 219 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile__ExtraArgs_7)));
            }
#line 219 "mercury_compile.m"
            {
#line 219 "mercury_compile.m"
              top_level__mercury_compile__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile__V_53_53);
            }
#line 218 "mercury_compile.m"
            {
#line 218 "mercury_compile.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile", (MR_String) "predicate \140top_level.mercury_compile.real_main_after_expansion\'/3", top_level__mercury_compile__V_51_51);
#line 218 "mercury_compile.m"
              return;
            }
#line 217 "mercury_compile.m"
          }
#line 227 "mercury_compile.m"
        {
#line 227 "mercury_compile.m"
          libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile__DummyGlobals_11);
        }
#line 228 "mercury_compile.m"
        {
#line 228 "mercury_compile.m"
          make__options_file__read_args_file_5_p_0(top_level__mercury_compile__DummyGlobals_11, top_level__mercury_compile__ArgFile_6, &top_level__mercury_compile__MaybeArgs1_12);
        }
#line 232 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeArgs1_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "mercury_compile.m"
          {
#line 234 "mercury_compile.m"
            top_level__mercury_compile__OptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 235 "mercury_compile.m"
            top_level__mercury_compile__NonOptionArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 233 "mercury_compile.m"
          }
#line 232 "mercury_compile.m"
        else
#line 230 "mercury_compile.m"
          {
#line 230 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeArgs1_12, (MR_Integer) 0)));

#line 231 "mercury_compile.m"
            {
#line 231 "mercury_compile.m"
              libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile__Args1_13, &top_level__mercury_compile__OptionArgs_14, &top_level__mercury_compile__NonOptionArgs_15);
            }
#line 230 "mercury_compile.m"
          }
#line 237 "mercury_compile.m"
        top_level__mercury_compile__DetectedGradeFlags_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "mercury_compile.m"
        {
#line 238 "mercury_compile.m"
          top_level__mercury_compile__Variables_17 = make__options_file__options_variables_init_0_f_0();
        }
#line 10733 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 323 "mercury_compile.m"
        {
#line 323 "mercury_compile.m"
          top_level__mercury_compile__V_73_73 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__OptionArgs_14);
        }
#line 323 "mercury_compile.m"
        {
#line 323 "mercury_compile.m"
          top_level__mercury_compile__AllFlags_37 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__V_73_73);
        }
#line 324 "mercury_compile.m"
        {
#line 324 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_37, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__Errors_41, &top_level__mercury_compile__ActualGlobals_42);
        }
#line 331 "mercury_compile.m"
        if ((top_level__mercury_compile__Errors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "mercury_compile.m"
          {
#line 333 "mercury_compile.m"
            top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__Variables_17, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__NonOptionArgs_15, (MR_Integer) 0, top_level__mercury_compile__ActualGlobals_42);
#line 333 "mercury_compile.m"
            return;
          }
#line 331 "mercury_compile.m"
        else
#line 330 "mercury_compile.m"
          {
#line 330 "mercury_compile.m"
            libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_41);
#line 330 "mercury_compile.m"
            return;
          }
#line 10768 "top_level.mercury_compile.c"
      }
#line 10770 "top_level.mercury_compile.c"
    else
#line 10772 "top_level.mercury_compile.c"
      {
#line 10774 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ArgsGlobals_20;
#line 10776 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeVariables0_21;
#line 10778 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_59_59;
#line 10780 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Link_103;
#line 10782 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_104;
#line 10784 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_105;
#line 244 "mercury_compile.m"
        MR_Word top_level__mercury_compile___Errors0_19;

#line 244 "mercury_compile.m"
        {
#line 244 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__CmdLineArgs_4, &top_level__mercury_compile__OptionArgs_104, &top_level__mercury_compile__NonOptionArgs_105, &top_level__mercury_compile__Link_103, &top_level__mercury_compile___Errors0_19, &top_level__mercury_compile__ArgsGlobals_20);
        }
#line 246 "mercury_compile.m"
        {
#line 246 "mercury_compile.m"
          top_level__mercury_compile__V_59_59 = make__options_file__options_variables_init_0_f_0();
        }
#line 246 "mercury_compile.m"
        {
#line 246 "mercury_compile.m"
          make__options_file__read_options_files_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__V_59_59, &top_level__mercury_compile__MaybeVariables0_21);
        }
#line 10804 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__MaybeVariables0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10806 "top_level.mercury_compile.c"
          {
#line 302 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Variables_107;

#line 302 "mercury_compile.m"
            {
#line 302 "mercury_compile.m"
              top_level__mercury_compile__Variables_107 = make__options_file__options_variables_init_0_f_0();
            }
#line 338 "mercury_compile.m"
            {
#line 338 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 338 "mercury_compile.m"
              return;
            }
#line 10823 "top_level.mercury_compile.c"
          }
#line 10825 "top_level.mercury_compile.c"
        else
#line 10827 "top_level.mercury_compile.c"
          {
#line 10829 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_21, (MR_Integer) 0)));
#line 10831 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeMCFlags0_23;

#line 250 "mercury_compile.m"
            {
#line 250 "mercury_compile.m"
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeMCFlags0_23);
            }
#line 10839 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeMCFlags0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10841 "top_level.mercury_compile.c"
              {
#line 296 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Variables_124;

#line 296 "mercury_compile.m"
                {
#line 296 "mercury_compile.m"
                  top_level__mercury_compile__Variables_124 = make__options_file__options_variables_init_0_f_0();
                }
#line 338 "mercury_compile.m"
                {
#line 338 "mercury_compile.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 338 "mercury_compile.m"
                  return;
                }
#line 10858 "top_level.mercury_compile.c"
              }
#line 10860 "top_level.mercury_compile.c"
            else
#line 10862 "top_level.mercury_compile.c"
              {
#line 10864 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MCFlags0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_23, (MR_Integer) 0)));
#line 10866 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsErrors_28;
#line 10868 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsArgsGlobals_29;
#line 10870 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__V_62_62;
#line 10872 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__DetectedGradeFlags_130;
#line 10874 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables_131;
#line 10876 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MaybeMCFlags_132;
#line 256 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_25_25;
#line 256 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_26_26;
#line 256 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_27_27;

#line 256 "mercury_compile.m"
                {
#line 256 "mercury_compile.m"
                  top_level__mercury_compile__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags0_24, top_level__mercury_compile__CmdLineArgs_4);
                }
#line 256 "mercury_compile.m"
                {
#line 256 "mercury_compile.m"
                  libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_62_62, &top_level__mercury_compile__V_25_25, &top_level__mercury_compile__V_26_26, &top_level__mercury_compile__V_27_27, &top_level__mercury_compile__FlagsErrors_28, &top_level__mercury_compile__FlagsArgsGlobals_29);
                }
#line 264 "mercury_compile.m"
                if ((top_level__mercury_compile__FlagsErrors_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "mercury_compile.m"
                  {
#line 265 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MaybeConfigFile_32;

#line 266 "mercury_compile.m"
                    {
#line 266 "mercury_compile.m"
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, (MR_Integer) 638, &top_level__mercury_compile__MaybeConfigFile_32);
                    }
#line 286 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeConfigFile_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "mercury_compile.m"
                      {
#line 288 "mercury_compile.m"
                        top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "mercury_compile.m"
                        {
#line 289 "mercury_compile.m"
                          top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                        }
#line 290 "mercury_compile.m"
                        {
#line 290 "mercury_compile.m"
                          make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                        }
#line 287 "mercury_compile.m"
                      }
#line 286 "mercury_compile.m"
                    else
#line 269 "mercury_compile.m"
                      {
#line 269 "mercury_compile.m"
                        MR_String top_level__mercury_compile__ConfigFile_33 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigFile_32, (MR_Integer) 0)));
#line 269 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MaybeVariables_34;

#line 270 "mercury_compile.m"
                        {
#line 270 "mercury_compile.m"
                          make__options_file__read_options_file_6_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__ConfigFile_33, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeVariables_34);
                        }
#line 280 "mercury_compile.m"
                        if ((top_level__mercury_compile__MaybeVariables_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "mercury_compile.m"
                          {
#line 282 "mercury_compile.m"
                            top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "mercury_compile.m"
                            top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "mercury_compile.m"
                            {
#line 284 "mercury_compile.m"
                              top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                            }
#line 281 "mercury_compile.m"
                          }
#line 280 "mercury_compile.m"
                        else
#line 273 "mercury_compile.m"
                          {
#line 273 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__MaybeMerStdLibDir_35;

#line 273 "mercury_compile.m"
                            top_level__mercury_compile__Variables_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables_34, (MR_Integer) 0)));
#line 274 "mercury_compile.m"
                            {
#line 274 "mercury_compile.m"
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                            }
#line 276 "mercury_compile.m"
                            {
#line 276 "mercury_compile.m"
                              make__options_file__lookup_mercury_stdlib_dir_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMerStdLibDir_35);
                            }
#line 278 "mercury_compile.m"
                            {
#line 278 "mercury_compile.m"
                              top_level__mercury_compile__detect_libgrades_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__MaybeMerStdLibDir_35, &top_level__mercury_compile__DetectedGradeFlags_130);
                            }
#line 273 "mercury_compile.m"
                          }
#line 269 "mercury_compile.m"
                      }
#line 265 "mercury_compile.m"
                  }
#line 264 "mercury_compile.m"
                else
#line 259 "mercury_compile.m"
                  {
#line 260 "mercury_compile.m"
                    {
#line 260 "mercury_compile.m"
                      libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__FlagsErrors_28);
                    }
#line 261 "mercury_compile.m"
                    top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "mercury_compile.m"
                    {
#line 262 "mercury_compile.m"
                      top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                    }
#line 263 "mercury_compile.m"
                    top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "mercury_compile.m"
                  }
#line 336 "mercury_compile.m"
                if ((top_level__mercury_compile__MaybeMCFlags_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "mercury_compile.m"
                  {
#line 338 "mercury_compile.m"
                    {
#line 338 "mercury_compile.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 338 "mercury_compile.m"
                      return;
                    }
#line 337 "mercury_compile.m"
                  }
#line 336 "mercury_compile.m"
                else
#line 308 "mercury_compile.m"
                  {
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_79_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MCFlags_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags_132, (MR_Integer) 0)));
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__AllFlags_84;
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Errors_88;
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ActualGlobals_89;
#line 308 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_90_90;
#line 324 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_80_80;
#line 324 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_81_81;
#line 324 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_82_82;

#line 323 "mercury_compile.m"
                    {
#line 323 "mercury_compile.m"
                      top_level__mercury_compile__V_90_90 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__MCFlags_83, top_level__mercury_compile__OptionArgs_104);
                    }
#line 323 "mercury_compile.m"
                    {
#line 323 "mercury_compile.m"
                      top_level__mercury_compile__AllFlags_84 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__V_90_90);
                    }
#line 324 "mercury_compile.m"
                    {
#line 324 "mercury_compile.m"
                      libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_84, &top_level__mercury_compile__V_80_80, &top_level__mercury_compile__V_81_81, &top_level__mercury_compile__V_82_82, &top_level__mercury_compile__Errors_88, &top_level__mercury_compile__ActualGlobals_89);
                    }
#line 331 "mercury_compile.m"
                    if ((top_level__mercury_compile__Errors_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "mercury_compile.m"
                      {
#line 333 "mercury_compile.m"
                        top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__Variables_131, top_level__mercury_compile__OptionArgs_104, top_level__mercury_compile__NonOptionArgs_105, top_level__mercury_compile__Link_103, top_level__mercury_compile__ActualGlobals_89);
#line 333 "mercury_compile.m"
                        return;
                      }
#line 331 "mercury_compile.m"
                    else
#line 330 "mercury_compile.m"
                      {
#line 330 "mercury_compile.m"
                        libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_88);
#line 330 "mercury_compile.m"
                        return;
                      }
#line 308 "mercury_compile.m"
                  }
#line 11075 "top_level.mercury_compile.c"
              }
#line 11077 "top_level.mercury_compile.c"
          }
#line 11079 "top_level.mercury_compile.c"
      }
#line 11081 "top_level.mercury_compile.c"
  }
#line 200 "mercury_compile.m"
}

#line 172 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 172 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 172 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6)
#line 172 "mercury_compile.m"
{
#line 175 "mercury_compile.m"
  {
#line 175 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 175 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LineRes_8;

#line 176 "mercury_compile.m"
    {
#line 176 "mercury_compile.m"
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__LineRes_8);
    }
#line 190 "mercury_compile.m"
    if ((top_level__mercury_compile__LineRes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "mercury_compile.m"
      {
#line 192 "mercury_compile.m"
        *top_level__mercury_compile__Res_6 = (MR_Word) &top_level__mercury_compile_scalar_common_5[1];
#line 191 "mercury_compile.m"
      }
#line 190 "mercury_compile.m"
    else
#line 190 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__LineRes_8)) == (MR_mktag((MR_Integer) 2))))
#line 194 "mercury_compile.m"
        {
#line 194 "mercury_compile.m"
          MR_Word top_level__mercury_compile__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));

#line 195 "mercury_compile.m"
          {
#line 195 "mercury_compile.m"
            MR_Word base;
#line 195 "mercury_compile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = base;
#line 195 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__E_14));
#line 195 "mercury_compile.m"
          }
#line 194 "mercury_compile.m"
        }
#line 190 "mercury_compile.m"
      else
#line 178 "mercury_compile.m"
        {
#line 178 "mercury_compile.m"
          MR_String top_level__mercury_compile__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));
#line 178 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res0_10;

#line 179 "mercury_compile.m"
          {
#line 179 "mercury_compile.m"
            top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__Res0_10);
          }
#line 187 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res0_10)) == (MR_mktag((MR_Integer) 1))))
#line 188 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 187 "mercury_compile.m"
          else
#line 180 "mercury_compile.m"
            {
#line 180 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res0_10, (MR_Integer) 0)));
#line 180 "mercury_compile.m"
              MR_String top_level__mercury_compile__StrippedLine_12;

#line 181 "mercury_compile.m"
              {
#line 181 "mercury_compile.m"
                top_level__mercury_compile__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile__Line_9);
              }
#line 182 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__StrippedLine_12, (MR_String) "") == 0);
#line 184 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 183 "mercury_compile.m"
                *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 184 "mercury_compile.m"
              else
#line 185 "mercury_compile.m"
                {
#line 185 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_20_20;

#line 185 "mercury_compile.m"
                  {
#line 185 "mercury_compile.m"
                    top_level__mercury_compile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile__StrippedLine_12));
#line 185 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile__Lines_11));
#line 185 "mercury_compile.m"
                  }
#line 185 "mercury_compile.m"
                  {
#line 185 "mercury_compile.m"
                    MR_Word base;
#line 185 "mercury_compile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 185 "mercury_compile.m"
                    *top_level__mercury_compile__Res_6 = base;
#line 185 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_20_20));
#line 185 "mercury_compile.m"
                  }
#line 185 "mercury_compile.m"
                }
#line 180 "mercury_compile.m"
            }
#line 178 "mercury_compile.m"
        }
#line 175 "mercury_compile.m"
  }
#line 172 "mercury_compile.m"
}

#line 132 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 132 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 132 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2)
#line 132 "mercury_compile.m"
{
#line 135 "mercury_compile.m"
  while (MR_TRUE)
#line 135 "mercury_compile.m"
    {
#line 135 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 135 "mercury_compile.m"
      {
#line 135 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 135 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "mercury_compile.m"
          {
#line 135 "mercury_compile.m"
            *top_level__mercury_compile__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_scalar_common_5[1];
#line 135 "mercury_compile.m"
          }
#line 135 "mercury_compile.m"
        else
#line 136 "mercury_compile.m"
          {
#line 136 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "mercury_compile.m"
            MR_String top_level__mercury_compile__File_13;

#line 137 "mercury_compile.m"
            {
#line 137 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile__Arg_9, &top_level__mercury_compile__File_13);
            }
#line 152 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 138 "mercury_compile.m"
              {
#line 138 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OpenRes_14;

#line 138 "mercury_compile.m"
                {
#line 138 "mercury_compile.m"
                  mercury__io__open_input_4_p_0(top_level__mercury_compile__File_13, &top_level__mercury_compile__OpenRes_14);
                }
#line 147 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 148 "mercury_compile.m"
                  {
#line 148 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Msg_20;
#line 148 "mercury_compile.m"
                    MR_String top_level__mercury_compile__V_28_28;
#line 148 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_30_30;

#line 149 "mercury_compile.m"
                    {
#line 149 "mercury_compile.m"
                      top_level__mercury_compile__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, (MR_String) "\'");
                    }
#line 149 "mercury_compile.m"
                    {
#line 149 "mercury_compile.m"
                      top_level__mercury_compile__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile__V_28_28);
                    }
#line 150 "mercury_compile.m"
                    {
#line 150 "mercury_compile.m"
                      top_level__mercury_compile__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__Msg_20);
                    }
#line 150 "mercury_compile.m"
                    {
#line 150 "mercury_compile.m"
                      MR_Word base;
#line 150 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 150 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 150 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 150 "mercury_compile.m"
                    }
#line 148 "mercury_compile.m"
                  }
#line 147 "mercury_compile.m"
                else
#line 140 "mercury_compile.m"
                  {
#line 140 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenRes_14, (MR_Integer) 0)));
#line 140 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ReadRes_16;

#line 141 "mercury_compile.m"
                    {
#line 141 "mercury_compile.m"
                      top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_15, &top_level__mercury_compile__ReadRes_16);
                    }
#line 144 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 144 "mercury_compile.m"
                      {
#line 144 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 144 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_32_32;
#line 144 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_43_43;
#line 144 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_45_45;
#line 144 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_46_46;
#line 144 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_48_48;

#line 167 "mercury_compile.m"
                        {
#line 167 "mercury_compile.m"
                          top_level__mercury_compile__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_18);
                        }
#line 167 "mercury_compile.m"
                        {
#line 167 "mercury_compile.m"
                          top_level__mercury_compile__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile__V_48_48);
                        }
#line 166 "mercury_compile.m"
                        {
#line 166 "mercury_compile.m"
                          top_level__mercury_compile__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, top_level__mercury_compile__V_46_46);
                        }
#line 166 "mercury_compile.m"
                        {
#line 166 "mercury_compile.m"
                          top_level__mercury_compile__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile__V_45_45);
                        }
#line 166 "mercury_compile.m"
                        {
#line 166 "mercury_compile.m"
                          top_level__mercury_compile__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__V_43_43);
                        }
#line 145 "mercury_compile.m"
                        {
#line 145 "mercury_compile.m"
                          MR_Word base;
#line 145 "mercury_compile.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "mercury_compile.m"
                          *top_level__mercury_compile__HeadVar__2_2 = base;
#line 145 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_32_32));
#line 145 "mercury_compile.m"
                        }
#line 144 "mercury_compile.m"
                      }
#line 144 "mercury_compile.m"
                    else
#line 142 "mercury_compile.m"
                      {
#line 142 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 142 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_33_33;

#line 143 "mercury_compile.m"
                        {
#line 143 "mercury_compile.m"
                          top_level__mercury_compile__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__FileArgs_17, top_level__mercury_compile__Args_10);
                        }
#line 143 "mercury_compile.m"
                        /* direct tailcall eliminated */
#line 143 "mercury_compile.m"
                        {
#line 143 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__HeadVar__1__tmp_copy_1 = top_level__mercury_compile__V_33_33;

#line 143 "mercury_compile.m"
                          top_level__mercury_compile__HeadVar__1_1 = top_level__mercury_compile__HeadVar__1__tmp_copy_1;
#line 143 "mercury_compile.m"
                        }
#line 143 "mercury_compile.m"
                        continue;
#line 142 "mercury_compile.m"
                      }
#line 140 "mercury_compile.m"
                  }
#line 138 "mercury_compile.m"
              }
#line 152 "mercury_compile.m"
            else
#line 153 "mercury_compile.m"
              {
#line 153 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Result0_21;

#line 153 "mercury_compile.m"
                {
#line 153 "mercury_compile.m"
                  top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__Args_10, &top_level__mercury_compile__Result0_21);
                }
#line 157 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__Result0_21)) == (MR_mktag((MR_Integer) 1))))
#line 159 "mercury_compile.m"
                  *top_level__mercury_compile__HeadVar__2_2 = top_level__mercury_compile__Result0_21;
#line 157 "mercury_compile.m"
                else
#line 155 "mercury_compile.m"
                  {
#line 155 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Result0_21, (MR_Integer) 0)));
#line 155 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_36_36;

#line 156 "mercury_compile.m"
                    {
#line 156 "mercury_compile.m"
                      top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile__Arg_9));
#line 156 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__ExpandedArgs_22));
#line 156 "mercury_compile.m"
                    }
#line 156 "mercury_compile.m"
                    {
#line 156 "mercury_compile.m"
                      MR_Word base;
#line 156 "mercury_compile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 156 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 156 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 156 "mercury_compile.m"
                    }
#line 155 "mercury_compile.m"
                  }
#line 153 "mercury_compile.m"
              }
#line 136 "mercury_compile.m"
          }
#line 135 "mercury_compile.m"
      }
#line 135 "mercury_compile.m"
      break;
#line 135 "mercury_compile.m"
    }
#line 132 "mercury_compile.m"
}

#line 36 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__main_for_make_4_p_0(
#line 36 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 36 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_6)
#line 36 "mercury_compile.m"
{
#line 343 "mercury_compile.m"
  {
#line 343 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 343 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_11_11;

#line 344 "mercury_compile.m"
    {
#line 344 "mercury_compile.m"
      top_level__mercury_compile__V_11_11 = make__options_file__options_variables_init_0_f_0();
    }
#line 344 "mercury_compile.m"
    {
#line 344 "mercury_compile.m"
      top_level__mercury_compile__main_after_setup_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_11_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Args_6, (MR_Integer) 0, top_level__mercury_compile__Globals_5);
#line 344 "mercury_compile.m"
      return;
    }
#line 343 "mercury_compile.m"
  }
#line 36 "mercury_compile.m"
}

#line 31 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__real_main_2_p_0(void)
#line 31 "mercury_compile.m"
{
#line 104 "mercury_compile.m"
  {
#line 104 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 104 "mercury_compile.m"
    MR_Word top_level__mercury_compile__StdErr_4;
#line 104 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CmdLineArgs_6;
#line 104 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Res_7;
#line 109 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5;

#line 2183 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2183 "mercury_compile.m"

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif

#line 11551 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2183 "mercury_compile.m"
}
#line 108 "mercury_compile.m"
    {
#line 108 "mercury_compile.m"
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile__StdErr_4);
    }
#line 109 "mercury_compile.m"
    {
#line 109 "mercury_compile.m"
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__StdErr_4, &top_level__mercury_compile__V_5_5);
    }
#line 110 "mercury_compile.m"
    {
#line 110 "mercury_compile.m"
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile__CmdLineArgs_6);
    }
#line 112 "mercury_compile.m"
    {
#line 112 "mercury_compile.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 115 "mercury_compile.m"
    {
#line 115 "mercury_compile.m"
      top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__CmdLineArgs_6, &top_level__mercury_compile__Res_7);
    }
#line 119 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__Res_7)) == (MR_mktag((MR_Integer) 1))))
#line 120 "mercury_compile.m"
      {
#line 120 "mercury_compile.m"
        MR_Word top_level__mercury_compile__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 120 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_20_20;

#line 121 "mercury_compile.m"
        {
#line 121 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 123 "mercury_compile.m"
        {
#line 123 "mercury_compile.m"
          top_level__mercury_compile__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_9);
        }
#line 123 "mercury_compile.m"
        {
#line 123 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_20_20);
        }
#line 124 "mercury_compile.m"
        {
#line 124 "mercury_compile.m"
          mercury__io__nl_2_p_0();
#line 124 "mercury_compile.m"
          return;
        }
#line 120 "mercury_compile.m"
      }
#line 119 "mercury_compile.m"
    else
#line 117 "mercury_compile.m"
      {
#line 117 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_7, (MR_Integer) 0)));

#line 118 "mercury_compile.m"
        {
#line 118 "mercury_compile.m"
          top_level__mercury_compile__real_main_after_expansion_3_p_0(top_level__mercury_compile__ExpandedCmdLineArgs_8);
#line 118 "mercury_compile.m"
          return;
        }
#line 117 "mercury_compile.m"
      }
#line 104 "mercury_compile.m"
  }
#line 31 "mercury_compile.m"
}

void mercury__top_level__mercury_compile__init(void)
{
}

void mercury__top_level__mercury_compile__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_compile_0);
	MR_register_type_ctor_info(&top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_file_or_module_0);
}

void mercury__top_level__mercury_compile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile. */
